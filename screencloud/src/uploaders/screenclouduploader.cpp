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

#include "screenclouduploader.h"
#include "QDebug"

ScreenCloudUploader::ScreenCloudUploader(QObject *parent) : Uploader(parent)
{
    name = "ScreenCloud";
    shortname = "screencloud";
    icon = QIcon(":/uploaders/screencloud.png");
    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)),
             this, SLOT(replyFinished(QNetworkReply*)));
    buffer = new QBuffer(&bufferArray, this);
    loadSettings();
}
ScreenCloudUploader::~ScreenCloudUploader()
{
    delete manager;
    delete buffer;
}

void ScreenCloudUploader::loadSettings()
{
    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("main");
    format = settings.value("format", "png").toString();
    jpegQuality = settings.value("jpeg-quality", 10).toInt();
    settings.endGroup();
    settings.beginGroup("account");
    token = settings.value("token", "").toString();
    tokenSecret = settings.value("token-secret", "").toString();
    loggedIn = settings.value("logged-in", true).toBool();
    settings.endGroup();
}
void ScreenCloudUploader::saveSettings()
{
}


void ScreenCloudUploader::upload(const QImage &screenshot, QString name)
{
    loadSettings();
    //Save to a buffer
    buffer->open(QIODevice::WriteOnly);
    if(format == "jpg")
    {
        if(!screenshot.save(buffer, format.toLatin1(), jpegQuality))
        {
            emit uploadingError(tr("Failed to save screenshot to buffer. Format=") + format);
        }
    }else
    {
        if(!screenshot.save(buffer, format.toLatin1()))
        {
                emit uploadingError(tr("Failed to save screenshot to buffer. Format=") + format);
        }
    }
    //Upload to screencloud
    QUrl url( "https://api.screencloud.net/1.0/screenshots/upload.xml" );

    // create request parameters
    url.addQueryItem( "name", QUrl::toPercentEncoding(name) );
    url.addQueryItem( "description", QUrl::toPercentEncoding("Taken on " + QDate::currentDate().toString("yyyy-MM-dd") + " at " + QTime::currentTime().toString("hh:mm") + " with the " + OPERATING_SYSTEM + " version of ScreenCloud") );
    url.addQueryItem("oauth_version", "1.0");
    url.addQueryItem("oauth_signature_method", "PLAINTEXT");
    url.addQueryItem("oauth_token", token);
    url.addQueryItem("oauth_consumer_key", CONSUMER_KEY_SCREENCLOUD);
    url.addQueryItem("oauth_signature", CONSUMER_SECRET_SCREENCLOUD + QString("&") + tokenSecret);
    url.addQueryItem("oauth_timestamp", QString::number(QDateTime::currentDateTimeUtc().toTime_t()));
    url.addQueryItem("oauth_nonce", NetworkUtils::generateNonce(15));

    QString mimetype = "image/" + format;
    if(format == "jpg")
    {
        mimetype = "image/jpeg";
    }
    //Add post file
    QString boundaryData = QVariant(qrand()).toString()+QVariant(qrand()).toString()+QVariant(qrand()).toString();
    QByteArray boundary;

    boundary="-----------------------------" + boundaryData.toLatin1();

    QByteArray body = "\r\n--" + boundary + "\r\n";

    //Name
    body += "Content-Disposition: form-data; name=\"name\"\r\n\r\n";
    body += QUrl::toPercentEncoding(name) + "\r\n";

    body += QString("--" + boundary + "\r\n").toLatin1();
    body += "Content-Disposition: form-data; name=\"description\"\r\n\r\n";
    body += QUrl::toPercentEncoding("Taken on " + QDate::currentDate().toString("yyyy-MM-dd") + " at " + QTime::currentTime().toString("hh:mm") + " with the " + OPERATING_SYSTEM + " version of ScreenCloud") + "\r\n";

    body += QString("--" + boundary + "\r\n").toLatin1();
    body += "Content-Disposition: form-data; name=\"file\"; filename=\" " + QUrl::toPercentEncoding(name + boundary + "." + format) + "\"\r\n";
    body += "Content-Type: " + mimetype + "\r\n\r\n";
    body += bufferArray;

    body += "\r\n--" + boundary + "--\r\n";

    QNetworkRequest request;
    request.setUrl(QUrl(url));
    request.setRawHeader("Content-Type","multipart/form-data; boundary=" + boundary);
    request.setHeader(QNetworkRequest::ContentLengthHeader,body.size());
    manager->post(request, body);
}

bool ScreenCloudUploader::isConfigured()
{
    loadSettings();
    if( (token == "" || tokenSecret == "") && !loggedIn)
    {
        return false;
    }
    return true;
}

void ScreenCloudUploader::replyFinished(QNetworkReply *reply)
{
    QString replyText = reply->readAll();
    INFO(replyText);
    if(reply->error() != QNetworkReply::NoError)
    {
        //There was an error
        QDomDocument doc("error");
        if (!doc.setContent(replyText)) {
            emit uploadingError(tr("Failed to parse response from server"));
            return;
        }
        QDomElement docElem = doc.documentElement();
        QDomElement message = docElem.firstChildElement("message");
        emit uploadingError(message.text());
    }else
    {
        //No errors
        QDomDocument doc("reply");
        if (!doc.setContent(replyText)) {
            emit uploadingError(tr("Failed to parse response from server"));
            return;
        }
        QDomElement docElem = doc.documentElement();
        QDomElement url = docElem.firstChildElement("url");

        emit uploadingFinished(url.text());
        emit finished();
    }
    buffer->close();
    bufferArray.clear();
}

QString ScreenCloudUploader::getFilename()
{
    return QString("Screenshot at ") + QTime::currentTime().toString("hh:mm:ss");
}
 
