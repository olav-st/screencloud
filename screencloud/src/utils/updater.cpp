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

#include "updater.h"

Updater::Updater(QObject *parent) :
    QObject(parent)
{
    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(replyFinished(QNetworkReply*)));
    loadSettings();
}

Updater::~Updater()
{
    delete manager;
}
void Updater::loadSettings()
{
    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("account");
    token = settings.value("token", "").toString();
    tokenSecret = settings.value("token-secret", "").toString();
    settings.endGroup();
    settings.beginGroup("updates");
#ifdef Q_OS_WIN
    notifyUpdates = settings.value("check-updates-automatically", true).toBool();
#elif defined(Q_OS_LINUX) && !defined(UBUNTU_SOFTWARE_CENTER)
    notifyUpdates = settings.value("check-updates-automatically", true).toBool();
#else
    notifyUpdates = settings.value("check-updates-automatically", false).toBool();
#endif
    settings.endGroup();
}


void Updater::checkForUpdates(int flag)
{
#ifndef MAC_APPSTORE
    if(flag == ForceNotification)
    {
        notifyUpdates = true;
    }else if(flag == NoNotification)
    {
        notifyUpdates = false;
    }
    QUrl url( "https://api.screencloud.net/1.0/updates/check_version.xml" );
    // create a request parameters
    url.addQueryItem("version", VERSION);
    url.addQueryItem("os", OS_SHORTNAME);
    //Send the req
    QNetworkRequest request;
    request.setUrl(url);
    manager->get(request);
#endif
}
void Updater::showUpdateNotification()
{
    INFO("There is a new verision available (" + latestVersion + ")");
    if(notifyUpdates)
    {
        //Show update message
        QMessageBox msgBox;
        msgBox.setWindowTitle("Update available");
        msgBox.setIcon(QMessageBox::Information);
#ifdef Q_OS_WIN
        msgBox.addButton(QMessageBox::Yes);
        msgBox.addButton(QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::Yes);
        msgBox.setText("There's a new version of ScreenCloud avaiable. Do you want to download it?");
#endif
#ifdef Q_OS_MACX
        msgBox.setText("There's a new version of ScreenCloud avaiable. You can download it from the <b>Mac App Store</b> or the <a href=\"https://www.screencloud.net\">ScreenCloud website</a>.");
#endif
#ifdef Q_OS_LINUX
        msgBox.setText("There's a new version of ScreenCloud avaiable. You can download it from the <b>Ubuntu Software Center</b> or the <a href=\"https://www.screencloud.net\">ScreenCloud website</a>.");
#endif
        int selection = msgBox.exec();
        if(selection == QMessageBox::Yes)
        {
            DownloadUpdateDialog dialog;
            dialog.startDownload(latestVersion);
            dialog.exec();
        }
    }
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
                msgBox.setWindowTitle("Failed to check for updates");
                msgBox.setIcon(QMessageBox::Warning);
                msgBox.setText("Failed to check for updates.\nError was: " + message.text());
                msgBox.exec();
            }
        }
    }else
    {
        //No error in request
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

