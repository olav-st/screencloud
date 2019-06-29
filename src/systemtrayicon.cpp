//
// ScreenCloud - An easy to use screenshot sharing application
// Copyright (C) 2016 Olav Sortland Thoresen <olav.s.th@gmail.com>
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
#if QT_VERSION >= QT_VERSION_CHECK(5,0,0)
    #include <QUrlQuery>
#endif

SystemTrayIcon::SystemTrayIcon(QObject *parent, QString color, bool openPerfWindow) :
    QSystemTrayIcon(parent)
{
    setToolTip(tr("ScreenCloud - Idle"));
    connect(this, SIGNAL(activated(QSystemTrayIcon::ActivationReason)), this, SLOT(iconActivated(QSystemTrayIcon::ActivationReason)));
    // load icon
    if(color.isEmpty())
    {
        color = OS_DEFAULT_COLOR;
    }
    systrayIconUploading = QIcon::fromTheme("screencloud-uploading", QIcon(QString(":/systray/trayicon-uploading-") + color + ".svg"));
#ifdef Q_OS_MACX
    systrayIconNormal.addFile(QString(":/systray/trayicon-") + color + ".svg");
    systrayIconNormal.addFile(QString(":/systray/trayicon-") + color + QString("-selected") + ".svg", QSize(), QIcon::Selected);
#else
    systrayIconNormal = QIcon::fromTheme("screencloud-idle", QIcon(QString(":/systray/trayicon-") + color + ".svg"));
#endif
    if(systrayIconNormal.isNull())
    {
        WARNING(tr("Failed to load tray icon. Make sure QtSvg is installed."));
        QMessageBox::warning(NULL, tr("Failed to load tray icon."), tr("Failed to load tray icon. Make sure QtSvg is installed."));
    }
    if(QIcon::hasThemeIcon("screencloud-idle"))
    {
        INFO(tr("Using icon from theme: ") + QIcon::themeName())
    }else
    {
        INFO(tr("Using bundled icon: ") + QString(":/systray/trayicon-" + color + ".svg"))
    }
    //Specify that icons can be used as masks if using recent Qt version
#if QT_VERSION >= QT_VERSION_CHECK(5,6,0)
    if(color != "blue")
    {
        systrayIconNormal.setIsMask(true);
        systrayIconUploading.setIsMask(true);
    }
#endif
    // set up and show the system tray icon
    setIcon(systrayIconNormal);
    connect(&uploadManager, SIGNAL(finished(QString)), this, SLOT(screenshotSaved(QString)));
    connect(&uploadManager, SIGNAL(error(QString)), this, SLOT(screenshotSavingError(QString)));
    //Create uploaders
    loadSettings();
    setAppProxy();
    createGlobalShortcuts();
    createSystrayActions();
    createSystrayMenu();
    setContextMenu(trayMenu);
    prefDialog = new PreferencesDialog(NULL, &uploadManager);
    overlay = new SelectionOverlay();
    connect(overlay, SIGNAL(selectionDone(QRect&, QPixmap&)), this, SLOT(captureSelection(QRect&, QPixmap&)));
    connect(overlay, SIGNAL(selectionCanceled()), this, SLOT(selectionCanceled()));
    uploading = false;
    capturing = false;
    //Check for new version
    connect(&updater, SIGNAL(pluginsUpdated()), this, SLOT(pluginsUpdated()));
    if(autoCheckUpdates)
    {
        updater.checkForUpdates();
    }
    if(openPerfWindow)
    {
        openPreferencesWindow();
    }
}

SystemTrayIcon::~SystemTrayIcon()
{
    delete trayMenu;
    //delete traySubmenuUploaders;
    delete cptFullScreenAct;
    delete cptSelectionAct;
    delete cptWindowAct;
    delete preferencesAct;
    delete quitAct;
    delete askMeAct;
    delete prefDialog;
    delete overlay;
}


void SystemTrayIcon::loadSettings()
{
    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("hotkeys");
    keySqFullScreen = QKeySequence(settings.value("captureFullScreen", tr("Shift+Alt+1")).toString());
    keySqSelection = QKeySequence(settings.value("captureSelection", tr("Shift+Alt+2")).toString());
    keySqWindow = QKeySequence(settings.value("captureWindow", "Shift+Alt+3").toString());
    settings.endGroup();
    settings.beginGroup("main");
    screenshotDelay = settings.value("delay", 300).toInt();
    showSaveDialog = settings.value("show-save-dialog", true).toBool();
    showNotifications = settings.value("show-notifications", true).toBool();
    currentUploaderShortname = settings.value("current-uploader", uploadManager.getDefaultService()).toString();
    settings.endGroup();
    settings.beginGroup("account");
    token = settings.value("token", "").toString();
    tokenSecret = settings.value("token-secret", "").toString();
    settings.endGroup();
    settings.beginGroup("updates");
    autoCheckUpdates = settings.value("check-updates-automatically", true).toBool();
    settings.endGroup();
    settings.beginGroup("network");
    useProxy = settings.value("use-proxy", false).toBool();
    autodetectProxy = settings.value("autodetect-proxy", false).toBool();
    settings.endGroup();
}

void SystemTrayIcon::saveSettings()
{
    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("main");
    settings.setValue("show-save-dialog", showSaveDialog);
    settings.setValue("current-uploader", currentUploaderShortname);
    settings.endGroup();
    settings.sync();
}
void SystemTrayIcon::createGlobalShortcuts()
{
    hotkeyFullScreen = new QxtGlobalShortcut(keySqFullScreen, this);
    connect(hotkeyFullScreen, SIGNAL(activated()), this, SLOT(captureFullScreenAction()));
    hotkeySelection = new QxtGlobalShortcut(keySqSelection, this);
    connect(hotkeySelection, SIGNAL(activated()), this, SLOT(captureSelectionAction()));
    hotkeyWindow = new QxtGlobalShortcut(keySqWindow, this);
    connect(hotkeyWindow, SIGNAL(activated()), this, SLOT(captureWindowAction()));
}


void SystemTrayIcon::createSystrayActions()
{
    cptFullScreenAct = new QAction(tr("Capture Full Screen"), this);
    cptFullScreenAct->setShortcut(keySqFullScreen);
    connect(cptFullScreenAct, SIGNAL(triggered()), this, SLOT(captureFullScreenAction()));
    cptSelectionAct = new QAction(tr("Capture Selection"), this);
    cptSelectionAct->setShortcut(keySqSelection);
    connect(cptSelectionAct, SIGNAL(triggered()), this, SLOT(captureSelectionAction()));
    cptWindowAct = new QAction(tr("Capture Window"), this);
    cptWindowAct->setShortcut(keySqWindow);
    connect(cptWindowAct, SIGNAL(triggered()), this, SLOT(captureWindowAction()));
    preferencesAct = new QAction(tr("Preferences..."), this);
    connect(preferencesAct, SIGNAL(triggered()), this, SLOT(openPreferencesWindow()));
    quitAct = new QAction(tr("Quit"), this);
    connect(quitAct, SIGNAL(triggered()), this, SLOT(quitApplication()));
    //Sub menu
    askMeAct = new QAction(tr("Ask me.."), this);
    askMeAct->setCheckable(true);
    connect(askMeAct, SIGNAL(triggered(bool)), this, SLOT(uploaderMenuItemChecked(bool)));
    submenuActions.insert("askme", askMeAct);
    if(showSaveDialog)
    {
        askMeAct->setChecked(true);
    }
}
void SystemTrayIcon::createSystrayMenu()
{
    // build menu
    trayMenu = new QMenu();
    traySubmenuUploaders = new QMenu(trayMenu);
    traySubmenuUploaders->setTitle(tr("Save to"));
    trayMenu->addAction(cptFullScreenAct);
    trayMenu->addAction(cptSelectionAct);
    trayMenu->addAction(cptWindowAct);
    trayMenu->addSeparator();
    trayMenu->addMenu(traySubmenuUploaders);
    trayMenu->addAction(preferencesAct);
    trayMenu->addAction(quitAct);
    populateSaveSubmenu();
}

void SystemTrayIcon::populateSaveSubmenu()
{
    //Populate submenu
    traySubmenuUploaders->addAction(askMeAct);
    traySubmenuUploaders->addSeparator();
    for(int i = 0; i < uploadManager.list()->size(); i++)
    {
        Uploader* u = uploadManager.list()->at(i);
        QAction* act = new QAction(u->getName(), this);
        act->setCheckable(true);
        if(!u->isConfigured())
        {
            act->setEnabled(false);
            act->setCheckable(false);
        }
        connect(act, SIGNAL(triggered(bool)), this, SLOT(uploaderMenuItemChecked(bool)));
        traySubmenuUploaders->addAction(act);
        if(u->getShortName() == currentUploaderShortname  && !showSaveDialog)
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
    traySubmenuUploaders->clear();
    populateSaveSubmenu();
    QAction* act;
    for(int i = 0; i < traySubmenuUploaders->actions().size(); i++)
    {
        act = traySubmenuUploaders->actions().at(i);
        if(i != 0 && !showSaveDialog)
        {
            act->setCheckable(true);
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
    QList<Uploader*>::iterator it = uploadManager.list()->begin();
    while(it != uploadManager.list()->end())
    {
        Uploader* u = *it;
        QAction* act = submenuActions[u->getShortName()];
        if(u->isConfigured() && act!= NULL)
        {
            act->setEnabled(true);
            act->setCheckable(true);
        }else
        {
            act->setEnabled(false);
            act->setCheckable(false);
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

void SystemTrayIcon::saveScreenshot(QString name, QString uploaderShortname)
{
    loadSettings();
    updateSystrayMenu();
    uploading = true;
    setIcon(systrayIconUploading);
    setToolTip(tr("ScreenCloud - Uploading"));
    if(uploaderShortname.isEmpty())
    {
        uploaderShortname = currentUploaderShortname;
    }
    if(name.isEmpty())
    {
        name = uploadManager.getUploader(uploaderShortname)->getFilename();
    }
    uploadManager.upload(screenshot, uploaderShortname, name, false);

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

void SystemTrayIcon::captureFullScreenAction()
{
    if(!uploading)
    {
        QTimer::singleShot(screenshotDelay, this, SLOT(captureFullScreen()));
    }
}

void SystemTrayIcon::captureSelectionAction()
{
    if(!uploading)
    {
        QTimer::singleShot(screenshotDelay, this, SLOT(openSelectionOverlay()));
    }

}

void SystemTrayIcon::captureWindowAction()
{
    if(!uploading)
    {
        QTimer::singleShot(screenshotDelay, this, SLOT(captureWindow()));
    }

}

void SystemTrayIcon::captureFullScreen()
{
    screenshot = screenShooter.captureFullscreen();
    notifier.play(":/sounds/shutter.wav");
    if(showSaveDialog)
    {
        openSaveDialog();
    }else
    {
        saveScreenshot();
    }
}

void SystemTrayIcon::captureSelection(QRect &rect, QPixmap &fullScreenShot)
{
    QPixmap areaScreenshot = fullScreenShot.copy(rect);
    screenshot = areaScreenshot.toImage();
    notifier.play(":/sounds/shutter.wav");
    if(showSaveDialog)
    {
        openSaveDialog();
    }else
    {
        saveScreenshot();
    }
    overlay->resetRubberBand();
    capturing = false;
}

void SystemTrayIcon::selectionCanceled()
{
    capturing = false;
    overlay->resetRubberBand();
}

void SystemTrayIcon::captureWindow()
{
    screenshot = screenShooter.captureWindow();
    notifier.play(":/sounds/shutter.wav");
    if(showSaveDialog)
    {
        openSaveDialog();
    }else
    {
        saveScreenshot();
    }
}

void SystemTrayIcon::openPreferencesWindow()
{
    prefDialog->loadSettings();
    prefDialog->setupUi();
    prefDialog->show();
    prefDialog->raise();
    prefDialog->activateWindow();
    connect(prefDialog, SIGNAL(finished(int)), this, SLOT(preferencesWindowFinished(int)));
}

void SystemTrayIcon::preferencesWindowFinished(int result)
{
    //Update the sytray icon, menus and shortcuts
    loadSettings();
    setAppProxy();
    updateGlobalShortcuts();
    updateSystrayMenu();
}

void SystemTrayIcon::openSaveDialog()
{
    SaveScreenshotDialog* save = new SaveScreenshotDialog(0, &screenshot, &uploadManager);
    connect(save, SIGNAL(uploaderSelected(QString,QString)), this, SLOT(saveScreenshot(QString,QString)));
    connect(save, SIGNAL(accepted()), save, SLOT(deleteLater()));
    connect(save, SIGNAL(rejected()), save, SLOT(deleteLater()));
    save->show();
    save->raise();
    save->activateWindow();
}

void SystemTrayIcon::saveDialogFinished(int result)
{

}
void SystemTrayIcon::quitApplication()
{
    saveSettings();
    hide();
    qApp->quit();
}


void SystemTrayIcon::openSelectionOverlay()
{
    if(!capturing)
    {
        overlay->updateScreenshot();
        overlay->showFullScreen();
        capturing = true;
    }else
    {
        overlay->raise();
        overlay->activateWindow();
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
                currentUploaderShortname = submenuActions.key(action);
            }
            ++it;
        }
    }
    if(currentUploaderShortname == "askme")
    {
        //Ask me
        showSaveDialog = true;
    }else
    {
        showSaveDialog = false;
    }
    saveSettings();

}

void SystemTrayIcon::screenshotSaved(QString url)
{
    loadSettings();
    setIcon(systrayIconNormal);
    setToolTip(tr("ScreenCloud - Idle"));
    uploading = false;
    if(!url.isEmpty())
    {
        QClipboard *clipboard = QApplication::clipboard();
        clipboard->setText(url);
        if(showNotifications)
        {
            showMessage(tr("Upload finished"), uploadManager.getLastScreenshotName() + tr(" was saved. Link copied to clipboard"));
        }
    }else
    {
        if(showNotifications)
        {
            showMessage(tr("Upload finished"), uploadManager.getLastScreenshotName() + tr(" was saved!"));
        }
    }
    notifier.play(":/sounds/notification.wav");
}

void SystemTrayIcon::screenshotSavingError(QString errorMessage)
{
    setIcon(systrayIconNormal);
    setToolTip(tr("ScreenCloud - Idle"));
    uploading = false;
    QMessageBox::critical(NULL, tr("ScreenCloud upload"), tr("Upload failed!\n") + errorMessage);
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
            QString hostname = settings.value("proxy-hostname", "").toString();
            quint16 port = settings.value("proxy-port", 8080).toUInt();
            QString username = settings.value("proxy-username", "").toString();
            QString password = settings.value("proxy-password", "").toString();
            QString proxy_type = settings.value("proxy-type", "").toString();
            bool proxyRequireAuth = settings.value("proxy-req-auth", false).toBool();
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
            INFO(tr("Setting app proxy to: ") + hostname + ":" + QString::number(port));
        }
    }
}

void SystemTrayIcon::pluginsUpdated()
{
    prefDialog->pluginsUpdated();
}
