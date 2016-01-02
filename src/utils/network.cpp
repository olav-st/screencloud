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

#include <utils/network.h>

NetworkUtils::NetworkUtils()
{
}

QUrl NetworkUtils::checkUrlForRedirect(QUrl urlToCheck)
{
    INFO(QObject::tr("Checking ") + urlToCheck.toString() + QObject::tr(" for redirect"));
    QNetworkAccessManager netManager;
    QNetworkRequest request;
    request.setUrl(urlToCheck);
    QNetworkReply *reply = netManager.head(request);
    reply->ignoreSslErrors();
    QEventLoop checkLoop;
    reply->connect(reply, SIGNAL(finished()), &checkLoop, SLOT(quit()));
    checkLoop.exec();
    //Check status code
    if (reply->error() == QNetworkReply::NoError) {
        int statusCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
        if(statusCode == 301 || statusCode == 302) {
            QUrl redirectUrl = reply->attribute(QNetworkRequest::RedirectionTargetAttribute).toUrl();
            INFO(urlToCheck.toString() + QObject::tr(" redirects to ") + redirectUrl.toString());
            return NetworkUtils::checkUrlForRedirect(redirectUrl);
        }else {
            return urlToCheck;
        }
    }else
    {
        return urlToCheck;
    }
}

QString NetworkUtils::generateNonce(int length)
{
   const QString possibleCharacters("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");

   QString randomString;
   for(int i=0; i< length; ++i)
   {
       int index = qrand() % possibleCharacters.length();
       QChar nextChar = possibleCharacters.at(index);
       randomString.append(nextChar);
   }
   return randomString;
}

QIcon NetworkUtils::getIconFromUrl(QUrl url)
{
    QNetworkAccessManager netManager;
    QNetworkRequest request;
    request.setUrl(url);
    QNetworkReply *reply = netManager.get(request);
    reply->ignoreSslErrors();
    QEventLoop waitForDownloadLoop;
    reply->connect(reply, SIGNAL(finished()), &waitForDownloadLoop, SLOT(quit()));
    waitForDownloadLoop.exec();
    //Check status code
    if (reply->error() == QNetworkReply::NoError) {
        QImageReader reader(reply);
        QPixmap pixmap = QPixmap::fromImageReader(&reader);
        return QIcon(pixmap);
    }else
    {
        return QIcon();
    }
}
