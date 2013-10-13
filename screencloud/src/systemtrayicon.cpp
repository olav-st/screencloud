//
// ScreenCloud - An easy to use screenshot sharing application
// Copyright (C) 2013 Olav Sortland Thoresen <olav.s.th@gmail.com>
//
// This program is free software; you can redistribute it and/or modify it under
// the terms of the GNU General Public License as published by the Free Software
// Foundation; either version 2 of the License, or (at your option) any later
// version.
//
// This program is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
// PARTICULAR PURPOSE. See the GNU General Public License for more details.
//

#include "systemtrayicon.h"
#ifdef PLUGIN_SUPPORT
#include <uploaders/scripteduploader.h>
#endif
#include <QNetworkProxy>
#ifdef Q_OS_MACX
#include "uploaders/clipboarduploader.h"
#endif

SystemTrayIcon::SystemTrayIcon(QObject *parent, QString color) :
    QSystemTrayIcon(parent)
{
    screenShooter = new ScreenShooter();
    //overlay = new SelectionOverlay(); /* Bugs out on mac for no particular reason */
    overlay = NULL;
    connect(screenShooter, SIGNAL(screenshotTaken(QPixmap*)), SLOT(saveScreenshot(QPixmap*)));
    connect(this, SIGNAL(activated(QSystemTrayIcon::ActivationReason)), this, SLOT(iconActivated(QSystemTrayIcon::ActivationReason)));
    updater = new Updater(this);
    // load icon
    if(color.isEmpty())
    {
        color = OS_DEFAULT_COLOR;
    }
    systrayIconUploading = QIcon::fromTheme("screencloud-uploading", QIcon(QString(":/systray/trayicon_uploading_") + color + ".svg"));
#ifdef Q_OS_MACX
    systrayIconNormal.addFile(QString(":/systray/trayicon_") + color + ".svg");
    systrayIconNormal.addFile(QString(":/systray/trayicon_") + color + QString("_selected") + ".svg", QSize(), QIcon::Selected);
#else
    systrayIconNormal = QIcon::fromTheme("screencloud-idle", QIcon(QString(":/systray/trayicon_") + color + ".svg"));
#endif
    if(QIcon::hasThemeIcon("screencloud-idle"))
    {
        qDebug() << "Using icon from theme:" << QIcon::themeName();
    }else
    {
        qDebug() << "Using bundled icon:" << QString(":/systray/trayicon_" + color + ".svg");
    }
    //Create uploaders
#ifdef PLUGIN_SUPPORT
    if(PluginLoader::countInstalledPlugins() > 0)
    {
        pluginLoader = new PluginLoader(this, &uploaders);
        pluginLoader->loadPlugins();
    }else
    {
        pluginLoader = NULL;
    }
#endif
    activeUploader = NULL;
    loadSettings();
    if(activeUploaderIndex > -1 && activeUploaderIndex < uploaders.size())
    {
        activeUploader = uploaders.at(activeUploaderIndex);
    }else
    {
        activeUploaderIndex = -1;
        QSettings settings("screencloud", "ScreenCloud");
        settings.beginGroup("general");
        settings.remove("active_uploader_index");
        settings.endGroup();
    }
    setAppProxy();
    createGlobalShortcuts();
    createSystrayActions();
    createSystrayMenu();
    // set up and show the system tray icon
    setIcon(systrayIconNormal);
    setContextMenu(trayMenu);
    uploading = false;
    //Check for new version
    if(autoCheckUpdates)
    {
        updater->checkForUpdates();
    }
}

SystemTrayIcon::~SystemTrayIcon()
{
    delete trayMenu;
    delete updater;
    QList<Uploader*>::iterator it = uploaders.begin();
    while(it != uploaders.end())
    {
        delete *it;
        ++it;
    }
    uploaders.clear();
}


void SystemTrayIcon::loadSettings()
{
    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("hotkeys");
    keySqFullScreen = QKeySequence(settings.value("captureFullScreen", tr("Shift+Alt+1")).toString());
    keySqSelection = QKeySequence(settings.value("captureSelection", tr("Shift+Alt+2")).toString());
    keySqWindow = QKeySequence(settings.value("captureWindow", "Shift+Alt+3").toString());
    settings.endGroup();
    settings.beginGroup("general");
    screenshotDelay = settings.value("delay", 300).toInt();
    activeUploaderIndex = settings.value("active_uploader_index", -1).toInt();
    showSaveDialog = settings.value("show_save_dialog", true).toBool();
    showNotifications = settings.value("show_notifications", true).toBool();
    settings.endGroup();
    settings.beginGroup("account");
    token = settings.value("token", "").toByteArray();
    tokenSecret = settings.value("token_secret", "").toByteArray();
    settings.endGroup();
    settings.beginGroup("updates");
    autoCheckUpdates = settings.value("check_updates_automatically", true).toBool();
    settings.endGroup();
    settings.beginGroup("network");
    useProxy = settings.value("use_proxy", false).toBool();
    autodetectProxy = settings.value("autodetect_proxy", false).toBool();
    settings.endGroup();
}

void SystemTrayIcon::saveSettings()
{
    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("general");
    settings.setValue("active_uploader_index", activeUploaderIndex);
    settings.setValue("show_save_dialog", showSaveDialog);
    settings.endGroup();
}
void SystemTrayIcon::createGlobalShortcuts()
{
    hotkeyFullScreen = new QxtGlobalShortcut(keySqFullScreen, this);
    connect(hotkeyFullScreen, SIGNAL(activated()), this, SLOT(captureFullScreen()));
    hotkeySelection = new QxtGlobalShortcut(keySqSelection, this);
    connect(hotkeySelection, SIGNAL(activated()), this, SLOT(captureSelection()));
    hotkeyWindow = new QxtGlobalShortcut(keySqWindow, this);
    connect(hotkeyWindow, SIGNAL(activated()), this, SLOT(captureWindow()));
}


void SystemTrayIcon::createSystrayActions()
{
    openDashboardAct = new QAction("Open Online Dashboard", this);
    connect(openDashboardAct, SIGNAL(triggered()), this, SLOT(openDashboard()));
    cptFullScreenAct = new QAction("Capture Full Screen", this);
    cptFullScreenAct->setShortcut(keySqFullScreen);
    connect(cptFullScreenAct, SIGNAL(triggered()), this, SLOT(captureFullScreen()));
    cptSelectionAct = new QAction("Capture Selection", this);
    cptSelectionAct->setShortcut(keySqSelection);
    connect(cptSelectionAct, SIGNAL(triggered()), this, SLOT(captureSelection()));
    cptWindowAct = new QAction("Capture Window", this);
    cptWindowAct->setShortcut(keySqWindow);
    connect(cptWindowAct, SIGNAL(triggered()), this, SLOT(captureWindow()));
    preferencesAct = new QAction("Preferences...", this);
    connect(preferencesAct, SIGNAL(triggered()), this, SLOT(openPreferencesWindow()));
    quitAct = new QAction("Quit", this);
    connect(quitAct, SIGNAL(triggered()), this, SLOT(quitApplication()));
    //Sub menu
    askMeAct = new QAction("Ask me..", this);
    askMeAct->setCheckable(true);
    connect(askMeAct, SIGNAL(triggered(bool)), this, SLOT(uploaderMenuItemChecked(bool)));
    submenuActions.insert("askme", askMeAct);
    if(activeUploaderIndex <= -1)
    {
        askMeAct->setChecked(true);
    }
}
void SystemTrayIcon::createSystrayMenu()
{
    // build menu
    trayMenu = new QMenu();
    traySubmenuUploaders = new QMenu(trayMenu);
    traySubmenuUploaders->setTitle("Save to");
    trayMenu->addAction(openDashboardAct);
    trayMenu->addSeparator();
    trayMenu->addAction(cptFullScreenAct);
    trayMenu->addAction(cptSelectionAct);
    trayMenu->addAction(cptWindowAct);
    trayMenu->addSeparator();
    trayMenu->addMenu(traySubmenuUploaders);
    trayMenu->addAction(preferencesAct);
    trayMenu->addAction(quitAct);
    //Populate submenu
    traySubmenuUploaders->addAction(askMeAct);
    traySubmenuUploaders->addSeparator();
    for(int i = 0; i < uploaders.size(); i++)
    {
        Uploader* u = uploaders.at(i);
        QAction* act = new QAction(u->getName(), this);
        act->setCheckable(true);
        if(!u->isConfigured())
        {
            act->setEnabled(false);
            act->setCheckable(false);
        }
        connect(act, SIGNAL(triggered(bool)), this, SLOT(uploaderMenuItemChecked(bool)));
        traySubmenuUploaders->addAction(act);
        if(i == activeUploaderIndex  && !showSaveDialog)
        {
            act->setChecked(true);
        }
        submenuActions.insert(u->getShortName(), act);
    }
    if(showSaveDialog)
    {
        traySubmenuUploaders->actions().at(0)->setCheckable(true);
        traySubmenuUploaders->actions().at(0)->setChecked(true);
    }
}
void SystemTrayIcon::updateSystrayMenu()
{
    QAction* act;
    for(int i = 0; i < traySubmenuUploaders->actions().size(); i++)
    {
        act = traySubmenuUploaders->actions().at(i);
        if(i == activeUploaderIndex + 2 && !showSaveDialog)
        {
            act->setCheckable(true);
            act->setChecked(true);
        }else
        {
            act->setChecked(false);
        }
    }
    if(showSaveDialog)
    {
        traySubmenuUploaders->actions().at(0)->setCheckable(true);
        traySubmenuUploaders->actions().at(0)->setChecked(true);
    }
    //Update if the uploader has been configured
    QList<Uploader*>::iterator it = uploaders.begin();
    while(it != uploaders.end())
    {
        Uploader* u = *it;
        QAction* act = submenuActions[u->getShortName()];
        if(u->isConfigured() && act!= NULL)
        {
            act->setEnabled(true);
            act->setCheckable(true);
        }
        ++it;
    }
}

void SystemTrayIcon::updateGlobalShortcuts()
{
    hotkeyFullScreen->setShortcut(keySqFullScreen);
    hotkeySelection->setShortcut(keySqSelection);
    hotkeyWindow->setShortcut(keySqWindow);
}

int SystemTrayIcon::findUploaderIndex(QString shortname)
{
    for(int i = 0; i < uploaders.size(); i++)
    {
        if(uploaders.at(i)->getShortName() == shortname)
        {
            return i;
        }
    }
    return -1;
}

void SystemTrayIcon::iconActivated(QSystemTrayIcon::ActivationReason reason)
{
#ifndef Q_OS_MACX
    if(reason != Context)
    {
        setContextMenu(trayMenu);
        contextMenu()->popup(QCursor::pos());
    }
#endif
}
void SystemTrayIcon::openDashboard()
{
    QOAuth::Interface *qoauth = new QOAuth::Interface;
    qoauth->setConsumerKey(CONSUMER_KEY_SCREENCLOUD);
    qoauth->setConsumerSecret(CONSUMER_SECRET_SCREENCLOUD);
    QByteArray url( "http://screencloud.net/1.0/users/redirect_dashboard" );

    QOAuth::ParamMap map;
    // construct the parameters string
    QByteArray content =
        qoauth->createParametersString( url, QOAuth::GET,
                                        token, tokenSecret,QOAuth::HMAC_SHA1, map,
                                        QOAuth::ParseForInlineQuery );

    url.append( content );
    QUrl qurl = QUrl::fromEncoded(url);
    QDesktopServices::openUrl(qurl);
}

void SystemTrayIcon::captureFullScreen()
{
    if(!uploading)
    {
        QTimer::singleShot(screenshotDelay, screenShooter, SLOT(takeFullscreenScreenshot()));
    }
}

void SystemTrayIcon::captureSelection()
{
    if(!uploading)
    {
        QTimer::singleShot(screenshotDelay, this, SLOT(openSelectionOverlay()));
    }

}

void SystemTrayIcon::captureWindow()
{
    if(!uploading)
    {
        QTimer::singleShot(screenshotDelay, screenShooter, SLOT(takeWindowScreenshot()));
    }

}

void SystemTrayIcon::openPreferencesWindow()
{
    PreferencesDialog prefDialog(NULL, Qt::Dialog, &uploaders, activeUploader);
    connect(&prefDialog, SIGNAL(openDashboardPressed()), this, SLOT(openDashboard()));
    connect(&prefDialog, SIGNAL(pluginsChanged(QList<QString>,QList<QString>)), this, SLOT(reloadPlugins(QList<QString>,QList<QString>)));
    prefDialog.exec();
    disconnect(&prefDialog, SIGNAL(openDashboardPressed()), this, SLOT(openDashboard()));
    disconnect(&prefDialog, SIGNAL(pluginsChanged(QList<QString>,QList<QString>)), this, SLOT(reloadPlugins(QList<QString>,QList<QString>)));
    //Update the sytray icon, menus and shortcuts
    loadSettings();
    setAppProxy();
    updateGlobalShortcuts();
    updateSystrayMenu();
}
void SystemTrayIcon::quitApplication()
{
    saveSettings();
    hide();
    QCoreApplication::exit(0);
}

void SystemTrayIcon::saveScreenshot(QPixmap* screenshot)
{
    loadSettings();
    if(activeUploaderIndex == -1 || activeUploaderIndex >= uploaders.size())
    {
        //Ask me
        showSaveDialog = true;
    }else
    {
        showSaveDialog = false;
    }
    QString name;
    if(showSaveDialog)
    {
        SaveScreenshotDialog save(0, screenshot, &uploaders, activeUploader);
        int selection = save.exec();
        if(selection == QMessageBox::Accepted)
        {
            activeUploader = uploaders.at(save.getUploaderIndex());
            name = save.getName();
        }else
        {
            activeUploader = NULL;
        }

    }else
    {
        if(activeUploaderIndex > -1 && activeUploaderIndex < uploaders.size())
        {
            activeUploader = uploaders.at(activeUploaderIndex);
        }else
        {
            qDebug() << "activeUploaderIndex >= uploaders.size()";
        }
    }
    loadSettings();
    updateSystrayMenu();
    //Upload
    if(activeUploader != NULL && !uploading)
    {
        uploading = true;
        //Set the uploading trayicon
        setIcon(systrayIconUploading);
        show();
        if(screenshot->isNull())
        {
            QMessageBox msgBox;
            msgBox.setIcon(QMessageBox::Critical);
            msgBox.setText("Failed to take screenshot :(");
            msgBox.exec();
        }
        connect(activeUploader, SIGNAL(uploadingFinished(QString)), this, SLOT(screenshotSaved(QString)));
        connect(activeUploader, SIGNAL(uploadingError(QString)), this, SLOT(screenshotSavingError(QString)));
        QImage img = screenshot->toImage();
        activeUploader->loadSettings();
        if(!name.isEmpty())
        {
            activeUploader->setFilename(name);
        }
        activeUploader->upload(&img);
    }

}

void SystemTrayIcon::openSelectionOverlay()
{
    if(overlay == NULL)
    {
        overlay = new SelectionOverlay();
    }
    if(!overlay->isVisible())
    {
        overlay->resetRubberBand();
        //Figure out which screen we want to use
        int activeScreen = QApplication::desktop()->screenNumber(QCursor::pos());
        QRect screenSize = QApplication::desktop()->screenGeometry(activeScreen);
        //Grab a full screenshot to work with
        fullScreenshot = QPixmap::grabWindow(QApplication::desktop()->winId(), screenSize.x(), screenSize.y(), screenSize.width(), screenSize.height());
        //Show the fullScreenshot in fullscreen with an overlay
        overlay->setScreenshot(&fullScreenshot);
        //Move the widget to the screen where the mouse is and resize it
        overlay->resize( QSize(screenSize.width(), screenSize.height()) );
        overlay->setGeometry(screenSize);
        //Set attributes for fullscreen
        overlay->setDragMode(QGraphicsView::NoDrag);
        overlay->setOptimizationFlags(QGraphicsView::DontAdjustForAntialiasing);
        overlay->setFocusPolicy( Qt::StrongFocus );
        overlay->setWindowFlags( Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint );
        connect(overlay, SIGNAL(selectionDone(QRect*, QPixmap*)), screenShooter, SLOT(takeSelectionScreenshot(QRect*, QPixmap*)));
        overlay->showFullScreen();
    }

}

void SystemTrayIcon::uploaderMenuItemChecked(bool checked)
{
    if(checked == false)
    {
        QAction* action = (QAction*)sender();
        action->setChecked(true);
    }else
    {
        QMap<QString, QAction*>::iterator it = submenuActions.begin();
        while(it != submenuActions.end())
        {
            QAction* action = *it;
            if(action != sender())
            {
                action->setChecked(false);
            }else
            {
                QString shortname = submenuActions.key(action);
                activeUploaderIndex = findUploaderIndex(shortname);
            }
            ++it;
        }
    }
    if(activeUploaderIndex == -1 || activeUploaderIndex >= uploaders.size())
    {
        //Ask me
        showSaveDialog = true;
    }else
    {
        showSaveDialog = false;
    }
    if(activeUploaderIndex > -1)
    {
        activeUploader = uploaders.at(activeUploaderIndex);
    }else
    {
        activeUploader = NULL;
    }
    saveSettings();


}

void SystemTrayIcon::screenshotSaved(QString url)
{
    setIcon(systrayIconNormal);
    uploading = false;
    //Disconnect slots
    disconnect(activeUploader, SIGNAL(uploadingFinished(QString)), this, SLOT(screenshotSaved(QString)));
    disconnect(activeUploader, SIGNAL(uploadingError(QString)), this, SLOT(screenshotSavingError(QString)));
    if(!url.isEmpty())
    {
        QClipboard *clipboard = QApplication::clipboard();
        clipboard->setText(url);
        if(showNotifications)
        {
            showMessage("Upload finished", activeUploader->getFilename() + " was saved. Link copied to clipboard");
        }
    }else
    {
        if(showNotifications)
        {
            showMessage("Upload finished", activeUploader->getFilename() + " was saved!");
        }
    }
    notifier.play("sfx/notification.wav");
}

void SystemTrayIcon::screenshotSavingError(QString errorMessage)
{
    setIcon(systrayIconNormal);
    uploading = false;

    QMessageBox msgBox;
    msgBox.setWindowTitle("ScreenCloud upload");
    msgBox.setIcon(QMessageBox::Critical);
    msgBox.setText(activeUploader->getName() + " upload failed!\nError was: " + errorMessage);
    msgBox.exec();

    //Disconnect slots
    disconnect(activeUploader, SIGNAL(uploadingFinished(QString)), this, SLOT(screenshotSaved(QString)));
    disconnect(activeUploader, SIGNAL(uploadingError(QString)), this, SLOT(screenshotSavingError(QString)));
}

void SystemTrayIcon::reloadPlugins(QList<QString> installed, QList<QString> uninstalled)
{
#ifdef PLUGIN_SUPPORT
    if(pluginLoader == NULL)
    {
        pluginLoader = new PluginLoader(this, &uploaders);
    }
    for(int i = 0; i < installed.size(); i ++)
    {
        QString shortname = installed.at(i);
        if(!pluginLoader->isLoaded(shortname))
        {
            ScriptedUploader* uploader = pluginLoader->loadSinglePlugin(shortname);
            //Add the new uploader to the tray menu
            QAction* act = new QAction(uploader->getName(), this);
            act->setCheckable(true);
            if(!uploader->isConfigured())
            {
                act->setEnabled(false);
                act->setCheckable(false);
            }
            connect(act, SIGNAL(triggered(bool)), this, SLOT(uploaderMenuItemChecked(bool)));
            traySubmenuUploaders->addAction(act);
            submenuActions.insert(shortname, act);
        }
    }
    for(int i2 = 0; i2 < uninstalled.size(); i2++)
    {
        QString shortname = uninstalled.at(i2);
        int index = findUploaderIndex(shortname);
        if(index == activeUploaderIndex)
        {
            activeUploaderIndex = -1;
        }
        QAction* act = submenuActions[shortname];
        traySubmenuUploaders->removeAction(act);
        submenuActions.remove(shortname);
        pluginLoader->unloadSinglePlugin(uninstalled.at(i2));
    }
#endif
}

void SystemTrayIcon::setAppProxy()
{
    //Setup global proxy if one is to be used
    if(useProxy)
    {
        if(autodetectProxy)
        {
            QNetworkProxyFactory::setUseSystemConfiguration(true);
        }else
        {
            QSettings settings("screencloud", "ScreenCloud");
            settings.beginGroup("network");
            QString hostname = settings.value("proxy_hostname", "").toString();
            quint16 port = settings.value("proxy_port", 8080).toUInt();
            QString username = settings.value("proxy_username", "").toString();
            QString password = Security::decrypt(settings.value("proxy_password", "").toString());
            QString proxy_type = settings.value("proxy_type", "").toString();
            bool proxyRequireAuth = settings.value("proxy_req_auth", false).toBool();
            settings.endGroup();
            proxy.setHostName(hostname);
            proxy.setPort(port);
            if(proxyRequireAuth)
            {
                proxy.setUser(username);
                proxy.setPassword(password);
            }
            if(proxy_type == "http")
            {
                proxy.setType(QNetworkProxy::HttpProxy);
            }else if(proxy_type == "socks5")
            {
                proxy.setType(QNetworkProxy::Socks5Proxy);
            }
            QNetworkProxy::setApplicationProxy(proxy);
        }
    }
}
