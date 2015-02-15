//
// ScreenCloud - An easy to use screenshot sharing application
// Copyright (C) 2014 Olav Sortland Thoresen <olav.s.th@gmail.com>
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

#include "updater.h"
#if QT_VERSION >= QT_VERSION_CHECK(5,0,0)
    #include <QUrlQuery>
#endif

Updater::Updater(QObject *parent) :
    QObject(parent)
{
    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(replyFinished(QNetworkReply*)));
    pluginManager = new PluginManager(this);
    loadSettings();
}

Updater::~Updater()
{
    delete manager;
    delete pluginManager;
}
void Updater::loadSettings()
{
    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("updates");
    notifyUpdates = settings.value("check-updates-automatically", true).toBool();
    settings.endGroup();
}


void Updater::checkForUpdates(int flag)
{
    if(flag == ForceNotification)
    {
        notifyUpdates = true;
    }else if(flag == NoNotification)
    {
        notifyUpdates = false;
    }
    QUrl baseVersionUrl( "https://api.screencloud.net/1.0/updates/check_version.xml" );
    // create request parameters
#if QT_VERSION >= QT_VERSION_CHECK(5,0,0)
    QUrlQuery versionQuery(baseVersionUrl);
#else
    QUrl versionQuery(baseVersionUrl);
#endif
    versionQuery.addQueryItem("version", VERSION);
    versionQuery.addQueryItem("os", OS_SHORTNAME);
    //Send the req
#if QT_VERSION >= QT_VERSION_CHECK(5,0,0)
    QUrl fullVersionUrl;
    fullVersionUrl.setQuery(versionQuery);
#else
    QUrl fullVersionUrl(versionQuery);
#endif
    QNetworkRequest appUpdateCheckReq;
    appUpdateCheckReq.setUrl(fullVersionUrl);
    manager->get(appUpdateCheckReq);
    //Check for plugin updates
    QUrl pluginListUrl(GITHUB_PLUGIN_LIST_URL);
    QNetworkRequest pluginUpdateCheckReq;
    pluginUpdateCheckReq.setUrl(pluginListUrl);
    manager->get(pluginUpdateCheckReq);
}
void Updater::showUpdateNotification()
{
    INFO(tr("There is a new verision available (") + latestVersion + ")");
    if(notifyUpdates)
    {
        //Show update message
        QMessageBox msgBox;
        msgBox.setWindowTitle(tr("Update available"));
        msgBox.setIcon(QMessageBox::Information);
        QPushButton changelogBtn(tr("Changelog"));
#ifdef Q_OS_WIN
        msgBox.addButton(QMessageBox::Yes);
        msgBox.addButton(QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::Yes);
        msgBox.setText(tr("There's a new version of ScreenCloud available. Do you want to download it?"));
#endif
#ifdef Q_OS_MACX
        msgBox.addButton(QMessageBox::Yes);
        msgBox.addButton(QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::Yes);
        msgBox.setText(tr("There's a new version of ScreenCloud available. Do you want to download it?"));
#endif
#ifdef Q_OS_LINUX
        msgBox.setText(tr("There's a new version of ScreenCloud available. You can download it from the <a href=\"https://www.screencloud.net\">ScreenCloud website</a>."));
        msgBox.addButton(QMessageBox::Ok);
        msgBox.setDefaultButton(QMessageBox::Ok);
#endif
        msgBox.addButton(&changelogBtn, QMessageBox::HelpRole);
        changelogBtn.disconnect(); //Make sure changelog button dosen't close the dialog
        connect(&changelogBtn, SIGNAL(clicked()), this, SLOT(showChangelog()));

        int selection = msgBox.exec();
        if(selection == QMessageBox::Yes)
        {
            DownloadUpdateDialog dialog;
            dialog.startDownload(latestVersion);
            dialog.exec();
        }
    }
}

void Updater::showPluginUpdateNotification(QStringList plugins, QStringList urls)
{
    INFO(tr("Found updates for plugin(s): '") + plugins.join("', '") + "'.");
    if(notifyUpdates)
    {
        //Show update message
        QMessageBox msgBox;
        msgBox.setWindowTitle(tr("Updates for installed plugins available"));
        msgBox.setIcon(QMessageBox::Information);
        msgBox.addButton(QMessageBox::Yes);
        msgBox.addButton(QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::Yes);
        msgBox.setText(tr("Found updates for plugin(s): <b>") + plugins.join("</b>, <b>") + tr("</b>. Do you want to update?"));
        if(msgBox.exec() == QMessageBox::Yes)
        {
            numPluginsUpdating = plugins.count();
            QProgressDialog progressDialog(tr("Updating plugins..."), tr("Cancel"), 0, 0);
            progressDialog.setWindowTitle(tr("Updating Plugins"));
            connect(pluginManager, SIGNAL(installationProgress(int)), &progressDialog, SLOT(setValue(int)));
            connect(pluginManager, SIGNAL(installationProgress(int)), this, SLOT(progressUpdate(int)));
            connect(pluginManager, SIGNAL(installationError(QString)), &progressDialog, SLOT(close()));
            connect(pluginManager, SIGNAL(installationError(QString)), this, SLOT(pluginInstallError(QString)));
            connect(&progressDialog, SIGNAL(canceled()), this, SLOT(cancelPluginUpdate()));
            connect(this, SIGNAL(updateProgessRange(int,int)), &progressDialog, SLOT(setRange(int,int)));
            progressDialog.setWindowModality(Qt::WindowModal);
            progressDialog.show();
            pluginManager->installPlugins(urls); //Trying to install a plugin that is already installed will make it update
            while(progressDialog.isVisible())
            {
                qApp->processEvents(QEventLoop::WaitForMoreEvents);
            }
            emit pluginsUpdated();
            numPluginsUpdating = 0;
        }
    }
}

void Updater::showChangelog()
{
    ChangelogDialog changelog;
    changelog.exec();
}

void Updater::cancelPluginUpdate()
{
    INFO(tr("Installation canceled by user"));
    pluginManager->cancelInstallation();
}

void Updater::pluginInstallError(QString error)
{
    WARNING(tr("Failed to update plugins! ") + error);
    QMessageBox::critical(NULL, tr("Failed to update plugins!"), error);
}

void Updater::progressUpdate(int)
{
    emit updateProgessRange(0, numPluginsUpdating * 4);
}


void Updater::replyFinished(QNetworkReply *reply)
{
    QString replyText = reply->readAll();
    if(reply->error() != QNetworkReply::NoError)
    {
        //Parse servers response
        QDomDocument doc("error");
        if (!doc.setContent(replyText)) {
            //No XML to parse, user is probably disconnected
            return;
        }else
        {
            QDomElement docElem = doc.documentElement();
            QDomElement message = docElem.firstChildElement("message");
            if(!message.text().isEmpty())
            {
                QMessageBox msgBox;
                msgBox.setWindowTitle(tr("Failed to check for updates"));
                msgBox.setIcon(QMessageBox::Warning);
                msgBox.setText(tr("Failed to check for updates.\nError was: ") + message.text());
                msgBox.exec();
            }
        }
    }else if(replyText.contains("<plugins>"))
    {
        //This is the plugin list
        QDomDocument doc("plugins");
        if(!doc.setContent(replyText))
        {
            WARNING(tr("Failed to get plugin list from ") + reply->request().url().toString() + tr(".\n Failed to parse reply as XML"));
            QMessageBox::warning(NULL, tr("Failed to get plugin list"), tr("Failed to get plugin list from ") + reply->request().url().toString() + tr(". Failed to parse reply as XML."));
        }
        QDomElement docElem = doc.documentElement();
        QDomNode pluginNode = docElem.firstChild();
        QStringList outdatedPlugins, urls;
        while(!pluginNode.isNull())
        {
            QString shortname = pluginNode.firstChildElement("shortname").text();
            QString version = pluginNode.firstChildElement("version").text();
            if(PluginManager::installedVersion(shortname) != version && PluginManager::isInstalled(shortname))
            {
                outdatedPlugins.append(shortname);
                urls.append(pluginNode.firstChildElement("download").text());
            }
            pluginNode = pluginNode.nextSibling();
        }
        if(!outdatedPlugins.isEmpty() && !urls.isEmpty())
        {
            showPluginUpdateNotification(outdatedPlugins, urls);
        }
    }else
    {
        //This is check_version.xml
        QDomDocument doc("reply");
        if (!doc.setContent(replyText)) {
            return;
        }
        QDomElement docElem = doc.documentElement();
        QDomElement versionElem = docElem.firstChildElement("current_version");
        QDomElement outdatedElem = docElem.firstChildElement("outdated");
        latestVersion = versionElem.text();
        bool outdated = QVariant(outdatedElem.text()).toBool();
        if(outdated && notifyUpdates)
        {
            emit newVersionAvailable(latestVersion);
            showUpdateNotification();
        }
        emit versionNumberRecieved(latestVersion, outdated);
    }
}

