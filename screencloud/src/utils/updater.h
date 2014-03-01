/* * ScreenCloud - An easy to use screenshot sharing application
 * Copyright (C) 2013 Olav Sortland Thoresen <olav.s.th@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
 * PARTICULAR PURPOSE. See the GNU General Public License for more details.
 */

#ifndef UPDATER_H
#define UPDATER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QDomDocument>
#include <QMessageBox>
#include <utils/log.h>
#include <QSettings>
#include <utils/OS.h>
#include <dialog/downloadupdatedialog.h>

class Updater : public QObject
{
    Q_OBJECT
public:
    explicit Updater(QObject *parent = 0);
    virtual ~Updater();
    void loadSettings();
    void checkForUpdates(int flag = 0);
    void showUpdateNotification();

private:
    QNetworkAccessManager *manager;
    QString token, tokenSecret;
    bool notifyUpdates;
    QString latestVersion;
public:
    const static int NoNotification = 1;
    const static int ForceNotification = 2;
signals:
    void newVersionAvailable(QString versionNumber);
    void versionNumberRecieved(QString versionNumber, bool outdated);

public slots:
    void replyFinished(QNetworkReply* reply);

};

#endif // UPDATER_H
