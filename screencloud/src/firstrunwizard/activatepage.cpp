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

#include "activatepage.h"
#include <QDebug>

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
    label_activation = new QLabel("Before you can start using your new ScreenCloud account, you need to activate it. An activation link has been sent to your email address. Simply click the link and you should be good to go.", this);
    label_activation->setWordWrap(true);
    QPixmap activationLinkPixmap(":/images/email_activationLink.png");
    image_activationLink = new QLabel(this);
    image_activationLink->setPixmap(activationLinkPixmap);
    label_message = new QLabel(this);
    label_message->setWordWrap(true);

    QVBoxLayout* layout = new QVBoxLayout;
    layout->addWidget(label_activation);
    layout->addWidget(image_activationLink);
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
    QString url( "http://screencloud.net/1.0/users/check_activated.xml");

    QByteArray token, tokenSecret;
    QOAuth::Interface *qoauth = new QOAuth::Interface;
    qoauth->setConsumerKey(CONSUMER_KEY_SCREENCLOUD);
    qoauth->setConsumerSecret(CONSUMER_SECRET_SCREENCLOUD);

    // create a request parameters map
    QOAuth::ParamMap map;
    map.insert( "user_id", QString::number(user_id).toAscii());

    // construct the body string
    QByteArray body =
    qoauth->createParametersString( url, QOAuth::POST,
                                        token, tokenSecret,QOAuth::HMAC_SHA1, map,
                                        QOAuth::ParseForRequestContent );

    QNetworkRequest request;
    request.setUrl(QUrl(url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");
    manager->post(request, body);
    return true;
}

void ActivatePage::replyFinished(QNetworkReply *reply)
{
    QString replyText = reply->readAll();
    qDebug() << replyText;
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
    label_message->setText("Requesting key...");
    QByteArray token, tokenSecret;
    QOAuth::Interface *qoauth = new QOAuth::Interface;
    qoauth->setConsumerKey(CONSUMER_KEY_SCREENCLOUD);
    qoauth->setConsumerSecret(CONSUMER_SECRET_SCREENCLOUD);
    QByteArray url( "https://screencloud.net/1.0/oauth/access_token_xauth" );
    QString urlString = QString(url);
    // create a request parameters map
    QOAuth::ParamMap map;
    map.insert( "data[User][email]", QUrl::toPercentEncoding(field("register.email").toString()));
    map.insert( "data[User][password]", QUrl::toPercentEncoding(field("register.password").toString()) );

    // construct the body string
    QOAuth::ParamMap reply =
    qoauth->accessToken( urlString , QOAuth::POST, token,
                         tokenSecret, QOAuth::HMAC_SHA1, map );

    QNetworkRequest request;
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");
    request.setUrl(QUrl(url));
    //manager->get(request);
    if ( qoauth->error() == QOAuth::NoError ) {
        //Save to qsettings
        QSettings settings("screencloud", "ScreenCloud");
        settings.beginGroup("account");
        settings.setValue("token", reply.value( QOAuth::tokenParameterName() ));
        settings.setValue("token_secret", reply.value( QOAuth::tokenSecretParameterName() ));
        settings.setValue("email", field("register.email").toString());
        settings.setValue("logged_in", true);
        settings.endGroup();
        return true;
    }else
    {
        label_message->setText("<font color='red'>OAuth error</font>");
        return false;
    }
}
