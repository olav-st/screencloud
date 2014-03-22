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

#include "activatepage.h"
#include <utils/log.h>

ActivatePage::ActivatePage(QWidget *parent) :
    QWizardPage(parent)
{
    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)),
             this, SLOT(replyFinished(QNetworkReply*)));
    serverQueryFinished = false;
    serverQueryError = false;
    //Setup GUI
    setTitle(tr("Activate your account"));
    label_activation = new QLabel("Before you can start using your new ScreenCloud account, you need to activate it. An activation link has been sent to your email address. Click the link and you should be good to go!", this);
    label_activation->setWordWrap(true);
    label_message = new QLabel(this);
    label_message->setWordWrap(true);

    QVBoxLayout* layout = new QVBoxLayout;
    layout->addWidget(label_activation);
    layout->addStretch();
    layout->addWidget(label_message);
    setLayout(layout);
}

bool ActivatePage::validatePage()
{
    checkUserActivated(field("register.hidden_userId").toInt());
    //Wait for network requests
    while (!serverQueryFinished) {
       qApp->processEvents(QEventLoop::WaitForMoreEvents);
    }
    if(serverQueryError)
    {
        return false;
    }
    //Try to login with xauth
    return getAccessToken();
}

bool ActivatePage::checkUserActivated(int user_id)
{
    serverQueryFinished = false;
    serverQueryError = false;
    label_message->setText("Logging in...");
    QString url( "https://api.screencloud.net/1.0/users/check_activated.xml");

    QString token, tokenSecret;

    // create a request parameters map
    QUrl bodyParams;
    bodyParams.addQueryItem("user_id", QString::number(user_id));
    bodyParams.addQueryItem("oauth_version", "1.0");
    bodyParams.addQueryItem("oauth_signature_method", "PLAINTEXT");
    bodyParams.addQueryItem("oauth_consumer_key", CONSUMER_KEY_SCREENCLOUD);
    bodyParams.addQueryItem("oauth_signature", CONSUMER_SECRET_SCREENCLOUD);

    QByteArray body = bodyParams.encodedQuery();

    QNetworkRequest request;
    request.setUrl(QUrl(url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");
    manager->post(request, body);
    return true;
}

void ActivatePage::replyFinished(QNetworkReply *reply)
{
    QString replyText = reply->readAll();
    if(reply->error() != QNetworkReply::NoError)
    {
        serverQueryError = true;
        //Parse servers response
        QDomDocument doc("error");
        if (!doc.setContent(replyText)) {
            label_message->setText("<font color='red'>Failed to parse response from server</font>");
            return;
        }
        QDomElement docElem = doc.documentElement();
        QDomElement message = docElem.firstChildElement("message");
        label_message->setText("<font color='red'>" + message.text() + "</font>");
        if(message.text().isNull())
        {
            label_message->setText("<font color='red'>Failed to parse response from server</font>");
        }
        WARNING(reply->request().url().toString() + " returned: " + replyText);

    }else
    {
        //No error in request
        QDomDocument doc("reply");
        if (!doc.setContent(replyText)) {
            label_message->setText("<font color='red'>Failed to parse response from server!</font>");
            return;
        }
        QDomElement docElem = doc.documentElement();
        QDomElement userElem = docElem.firstChildElement("User");
        QDomElement activatedElem = userElem.firstChildElement("activated");
        if(activatedElem.text().isEmpty())
        {
           serverQueryError = true;
           label_message->setText("<font color='red'>Your account has not been activated yet.</font>");
        }
    }
    serverQueryFinished = true;
}

bool ActivatePage::getAccessToken()
{
    serverQueryFinished = false;
    serverQueryError = false;
    disconnect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinished(QNetworkReply*)));
    label_message->setText("Requesting key...");

    QUrl url( "https://api.screencloud.net/1.0/oauth/access_token_xauth" );
    // create a request parameters map
    QUrl bodyParams;
    bodyParams.addQueryItem( "data[User][email]", field("register.email").toString());
    bodyParams.addQueryItem( "data[User][password]", field("register.password").toString());
    bodyParams.addQueryItem("oauth_version", "1.0");
    bodyParams.addQueryItem("oauth_signature_method", "PLAINTEXT");
    bodyParams.addQueryItem("oauth_consumer_key", CONSUMER_KEY_SCREENCLOUD);
    bodyParams.addQueryItem("oauth_signature", CONSUMER_SECRET_SCREENCLOUD);
    bodyParams.addQueryItem("oauth_timestamp", QString::number(QDateTime::currentDateTimeUtc().toTime_t()));
    bodyParams.addQueryItem("oauth_nonce", NetworkUtils::generateNonce(15));
    QByteArray body = bodyParams.encodedQuery();

    QNetworkRequest request;
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");
    request.setUrl(url);
    QNetworkReply* reply = manager->post(request, body);
    QEventLoop loop;
    connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinished(QNetworkReply*)));
    if ( reply->error() == QNetworkReply::NoError ) {
        //Save to qsettings
        QString replyText = reply->readAll();
        if(replyText.isEmpty())
        {
            label_message->setText("<font color='red'>Failed to get credentials. Empty reply from server.</font>");
            return false;
        }
        INFO(reply->request().url().toString() + " returned: " + replyText);
        QUrl replyParams = QUrl("?" + replyText);
        QSettings settings("screencloud", "ScreenCloud");
        settings.beginGroup("account");
        settings.setValue("token", replyParams.queryItemValue("oauth_token"));
        settings.setValue("token-secret", replyParams.queryItemValue("oauth_token_secret"));
        settings.setValue("email", field("register.email").toString());
        settings.setValue("logged-in", true);
        settings.endGroup();
        return true;
    }else
    {
        label_message->setText("<font color='red'>OAuth error</font>");
        return false;
    }
    return false;
}
