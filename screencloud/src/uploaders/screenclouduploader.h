/* * ScreenCloud - An easy to use screenshot sharing application
 * Copyright (C) 2014 Olav Sortland Thoresen <olav.s.th@gmail.com>
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
#include <QFile>
#include <QApplication>
#include <QDomDocument>
#include <utils/OS.h>
#include <utils/log.h>
#include <QDir>
#include <QDateTime>
#include <utils/network.h>
#include <QBuffer>

class ScreenCloudUploader : public Uploader
{
    Q_OBJECT
public:
    explicit ScreenCloudUploader(QObject *parent = 0);
    virtual ~ScreenCloudUploader();
    void loadSettings();
    void saveSettings();
    bool isConfigured();
    QString getFilename();
private:
    QString token, tokenSecret;
    QNetworkAccessManager *manager;
    int jpegQuality;
    bool loggedIn;
    QByteArray bufferArray;
    QBuffer* buffer;
Q_SIGNALS:

public Q_SLOTS:
    void upload(const QImage& screenshot, QString name);
    void replyFinished(QNetworkReply* reply);

};

#endif // SCREENCLOUDUPLOADER_H
 
