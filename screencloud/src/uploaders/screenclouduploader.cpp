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

#include "screenclouduploader.h"
#include "QDebug"

ScreencloudUploader::ScreencloudUploader(QObject *parent) : Uploader(parent)
{
    name = "ScreenCloud";
    shortname = "screencloud";
    icon = QIcon(":/uploaders/screencloud.png");
    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)),
             this, SLOT(replyFinished(QNetworkReply*)));
    uploadUrl = "http://screencloud.net/1.0/screenshots/upload.xml";
    loadSettings();
}
ScreencloudUploader::~ScreencloudUploader()
{
    delete manager;
}

void ScreencloudUploader::loadSettings()
{
    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("uploaders");
    settings.beginGroup(shortname);
    screenshotName = settings.value("name", QString("Screenshot at ") + QTime::currentTime().toString("hh:mm:ss")).toString();
    settings.endGroup();
    settings.endGroup();

    settings.beginGroup("general");
    format = settings.value("format", "png").toString();
    jpegQuality = settings.value("jpeg-quality", 10).toInt();
    settings.endGroup();
    settings.beginGroup("account");
    token = settings.value("token", "").toByteArray();
    tokenSecret = settings.value("token_secret", "").toByteArray();
    loggedIn = settings.value("logged_in", true).toBool();
    settings.endGroup();
}
void ScreencloudUploader::saveSettings()
{
}


void ScreencloudUploader::upload(QImage *screenshot)
{
    //Save to a buffer
    buffer = new QBuffer(&bufferArray, this);
    buffer->open(QIODevice::WriteOnly);
    if(format == "jpg")
    {
        if(!screenshot->save(buffer, format.toAscii(), jpegQuality))
        {
            emit uploadingError("Failed to save screenshot to " + QDir::tempPath());
        }
    }else
    {
        if(!screenshot->save(buffer, format.toAscii()))
        {
                emit uploadingError("Failed to save screenshot to " + QDir::tempPath());
        }
    }
    //Upload to screencloud
    QOAuth::Interface *qoauth = new QOAuth::Interface;
    qoauth->setConsumerKey(CONSUMER_KEY_SCREENCLOUD);
    qoauth->setConsumerSecret(CONSUMER_SECRET_SCREENCLOUD);
    QByteArray url( "http://screencloud.net/1.0/screenshots/upload.xml" );

    // create a request parameters map
    QOAuth::ParamMap map;
    map.insert( "name", QUrl::toPercentEncoding(screenshotName) );
    map.insert( "description", QUrl::toPercentEncoding("Taken on " + QDate::currentDate().toString("yyyy-MM-dd") + " at " + QTime::currentTime().toString("hh:mm") + " with the " + OPERATING_SYSTEM + " version of ScreenCloud") );

    QString mimetype = "image/" + format;
    if(format == "jpg")
    {
        mimetype = "image/jpeg";
    }
    QByteArray header =
    qoauth->createParametersString( uploadUrl, QOAuth::POST,
                                        token, tokenSecret,QOAuth::HMAC_SHA1, map,
                                        QOAuth::ParseForHeaderArguments );
    //Add post file
    QString boundaryData = QVariant(qrand()).toString()+QVariant(qrand()).toString()+QVariant(qrand()).toString();
    QByteArray boundary;
    QByteArray dataToSend; // byte array to be sent in POST

    boundary="-----------------------------" + boundaryData.toAscii();

    QByteArray body = "\r\n--" + boundary + "\r\n";

    //Name
    body += "Content-Disposition: form-data; name=\"name\"\r\n\r\n";
    body += QUrl::toPercentEncoding(screenshotName) + "\r\n";

    body += QString("--" + boundary + "\r\n").toAscii();
    body += "Content-Disposition: form-data; name=\"description\"\r\n\r\n";
    body += QUrl::toPercentEncoding("Taken on " + QDate::currentDate().toString("yyyy-MM-dd") + " at " + QTime::currentTime().toString("hh:mm") + " with the " + OPERATING_SYSTEM + " version of ScreenCloud") + "\r\n";

    body += QString("--" + boundary + "\r\n").toAscii();
    body += "Content-Disposition: form-data; name=\"file\"; filename=\" " + QUrl::toPercentEncoding(screenshotName + boundary + "." + format) + "\"\r\n";
    body += "Content-Type: " + mimetype + "\r\n\r\n";
    body += bufferArray;

    body += "\r\n--" + boundary + "--\r\n";

    url.append( qoauth->inlineParameters( map, QOAuth::ParseForInlineQuery ) );
    qDebug() << url;
    QNetworkRequest request;
    request.setUrl(QUrl(url));
    request.setRawHeader( "Authorization", header );
    request.setRawHeader("Content-Type","multipart/form-data; boundary=" + boundary);
    request.setHeader(QNetworkRequest::ContentLengthHeader,body.size());
    manager->post(request, body);
}

bool ScreencloudUploader::isConfigured()
{
    if( (token == "" || tokenSecret == "") && !loggedIn)
    {
        return false;
    }
    return true;
}

void ScreencloudUploader::replyFinished(QNetworkReply *reply)
{
    QString replyText = reply->readAll();
    qDebug() << replyText;
    if(reply->error() != QNetworkReply::NoError)
    {
        //There was an error
        QDomDocument doc("error");
        if (!doc.setContent(replyText)) {
            emit uploadingError("Failed to parse response from server");
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
            emit uploadingError("Failed to parse response from server");
            return;
        }
        QDomElement docElem = doc.documentElement();
        QDomElement url = docElem.firstChildElement("url");

        emit uploadingFinished(url.text());
    }
    buffer->reset();
    delete buffer;
    bufferArray.clear();
}
void ScreencloudUploader::setFilename(QString newName)
{
    screenshotName = newName;
}

QString ScreencloudUploader::getFilename()
{
    return screenshotName;
}

