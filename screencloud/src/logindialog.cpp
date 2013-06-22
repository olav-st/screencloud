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

#include "logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    serverQueryFinished = false;
    serverQueryError = false;
    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)),
             this, SLOT(replyFinished(QNetworkReply*)));
}

LoginDialog::~LoginDialog()
{
    delete ui;
}
void LoginDialog::on_button_login_clicked()
{
    serverQueryFinished = false;
    serverQueryError = false;
    ui->label_message->setText("Connecting to server...");
    QByteArray token, tokenSecret;
    QOAuth::Interface *qoauth = new QOAuth::Interface;
    qoauth->setConsumerKey(CONSUMER_KEY_SCREENCLOUD);
    qoauth->setConsumerSecret(CONSUMER_SECRET_SCREENCLOUD);
    QByteArray url( "https://screencloud.net/1.0/oauth/access_token_xauth" );
    QString urlString = QString(url);
    // create a request parameters map
    QOAuth::ParamMap map;
    map.insert( "data[User][email]", QUrl::toPercentEncoding(ui->input_email->text()));
    map.insert( "data[User][password]", QUrl::toPercentEncoding(ui->input_password->text()) );

    // construct the body string
    QOAuth::ParamMap reply =
    qoauth->accessToken( urlString , QOAuth::POST, token,
                         tokenSecret, QOAuth::HMAC_SHA1, map );

    QNetworkRequest request;
    request.setUrl(QUrl(url));
    //manager->get(request);
    if ( qoauth->error() == QOAuth::NoError ) {
        //Save to qsettings
        QSettings settings("screencloud", "ScreenCloud");
        settings.beginGroup("account");
        settings.setValue("token", reply.value( QOAuth::tokenParameterName() ));
        settings.setValue("token_secret", reply.value( QOAuth::tokenSecretParameterName() ));
        settings.setValue("email", ui->input_email->text());
        settings.setValue("logged_in", true);
        settings.endGroup();
        ui->label_message->setText("Logged in successfully!");
        accept();
    }else
    {
        ui->label_message->setText("<font color='red'>Login failed. Please check your email, password and internet connection.</font>");
    }
}
void LoginDialog::replyFinished(QNetworkReply *reply)
{
    ui->label_message->setText("Reading response from server...");
    qDebug() << reply->readAll();
    if(reply->error() != QNetworkReply::NoError)
    {
        serverQueryError = true;
        if(reply->error() == QNetworkReply::ContentAccessDenied || reply->error() == QNetworkReply::AuthenticationRequiredError)
        {
            ui->label_message->setText("<font color='red'>Your email/password combination was incorrect or account is not activated</font>");
        }else
        {
            ui->label_message->setText("<font color='red'>Server returned an unknown error. Please try again later. (Error code: " + QString::number(reply->error()) + ")</font>");
        }

    }else
    {
        //No error in request
        ui->label_message->setText("Logged in...");
    }
    serverQueryFinished = true;


}
