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
    QString token, tokenSecret;
    QUrl url( "https://screencloud.net/1.0/oauth/access_token_xauth" );
    // create body request parameters
    QUrl bodyParams;
    bodyParams.addQueryItem("data[User][email]", ui->input_email->text());
    bodyParams.addQueryItem("data[User][password]", ui->input_password->text());
    bodyParams.addQueryItem("oauth_version", "1.0");
    bodyParams.addQueryItem("oauth_signature_method", "PLAINTEXT");
    bodyParams.addQueryItem("oauth_consumer_key", CONSUMER_KEY_SCREENCLOUD);
    bodyParams.addQueryItem("oauth_signature", CONSUMER_SECRET_SCREENCLOUD);
    bodyParams.addQueryItem("oauth_timestamp", QString::number(QDateTime::currentDateTimeUtc().toTime_t()));
    bodyParams.addQueryItem("oauth_nonce", NetworkUtils::generateNonce(15));
    QByteArray body = bodyParams.encodedQuery();

    QNetworkRequest request;
    request.setUrl(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");
    manager->post(request, body);

    while (!serverQueryFinished) {
       qApp->processEvents(QEventLoop::WaitForMoreEvents);
    }
    if(serverQueryError)
    {
        WARNING(url.toString() + " returned error");
    }else
    {
        this->accept();
    }
}
void LoginDialog::replyFinished(QNetworkReply *reply)
{
    ui->label_message->setText("Reading response from server...");
    QString replyText = reply->readAll();
    INFO(replyText);
    if(reply->error() != QNetworkReply::NoError)
    {
        serverQueryError = true;
        if(reply->error() == QNetworkReply::ContentAccessDenied || reply->error() == QNetworkReply::AuthenticationRequiredError)
        {
            ui->label_message->setText("<font color='red'>Your email/password combination was incorrect or account is not activated</font>");
        }else
        {
            ui->label_message->setText("<font color='red'>Login failed. Please check your email, password and internet connection.</font>");
        }
        WARNING(reply->request().url().toString() + " returned: " + replyText);

    }else
    {
        //No error in request
        ui->label_message->setText("Logged in...");
        //Save to qsettings
        QUrl replyParams = QUrl("?" + replyText);
        QSettings settings("screencloud", "ScreenCloud");
        settings.beginGroup("account");
        settings.setValue("token", replyParams.queryItemValue("oauth_token"));
        settings.setValue("token-secret", replyParams.queryItemValue("oauth_token_secret"));
        settings.setValue("email", ui->input_email->text());
        settings.setValue("logged-in", true);
        settings.endGroup();
    }
    serverQueryFinished = true;

}
