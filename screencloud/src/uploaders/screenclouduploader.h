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

#ifndef SCREENCLOUDUPLOADER_H
#define SCREENCLOUDUPLOADER_H

#include "uploader.h"
#include <QPixmap>
#include <QSettings>
#include <QByteArray>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QtOAuth>
#include <QFile>
#include <QClipboard>
#include <QApplication>
#include <QDomDocument>
#include <utils/security.h>
#include <utils/OS.h>

class ScreencloudUploader : public Uploader
{
    Q_OBJECT
public:
    explicit ScreencloudUploader(QObject *parent = 0);
    virtual ~ScreencloudUploader();
    void loadSettings();
    void saveSettings();
    void upload(QImage* screenshot);
    bool isConfigured();
    virtual void setFilename(QString newName);
    QString getFilename();
private:
    QByteArray token, tokenSecret;
    QNetworkAccessManager *manager;
    QString uploadUrl;
    int jpegQuality;
    bool loggedIn;
signals:

public slots:
    void replyFinished(QNetworkReply* reply);

};

#endif // SCREENCLOUDUPLOADER_H
