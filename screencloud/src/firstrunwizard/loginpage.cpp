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

#include "loginpage.h"
#include <utils/log.h>

LoginPage::LoginPage(QWidget *parent) :
    QWizardPage(parent)
{
    serverQueryFinished = false;
    serverQueryError = false;
    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)),
             this, SLOT(replyFinished(QNetworkReply*)));
    //Setup GUI
    setTitle(tr("Login"));
    input_email = new QLineEdit(this);
    input_email->setValidator(new QRegExpValidator(QRegExp(".*@.*"), this));
    input_password = new QLineEdit(this);
    input_password->setEchoMode(QLineEdit::Password);
    label_forgotPassword = new QLabel("<a href=\"https://screencloud.net/users/forgot_password\">Forgot password?</a>", this);
    label_forgotPassword->setOpenExternalLinks(true);
    label_message = new QLabel(this);
    label_message->setWordWrap(true);

    registerField("login.email*", input_email);
    registerField("login.password*", input_password);


    QFormLayout* loginForm = new QFormLayout();
    loginForm->addRow("Email:", input_email);
    loginForm->addRow("Password:", input_password);
    loginForm->addWidget(label_forgotPassword);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addLayout(loginForm);
    layout->addStretch();
    layout->addWidget(label_message);

    setLayout(layout);
}

int LoginPage::nextId() const
{
    return FirstRunWizard::Page_Welcome;
}

bool LoginPage::validatePage()
{
    serverQueryFinished = false;
    serverQueryError = false;
    label_message->setText("Connecting to server...");
    QString token, tokenSecret;
    QUrl url( "https://api.screencloud.net/1.0/oauth/access_token_xauth" );
    // create body request parameters
    QUrl bodyParams;
    bodyParams.addQueryItem("data[User][email]", input_email->text());
    bodyParams.addQueryItem("data[User][password]", input_password->text());
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
        return false;
    }
    return true;
}

void LoginPage::replyFinished(QNetworkReply *reply)
{
    label_message->setText("Reading response from server...");
    QString replyText = reply->readAll();
    if(reply->error() != QNetworkReply::NoError)
    {
        serverQueryError = true;
        if(reply->error() == QNetworkReply::ContentAccessDenied || reply->error() == QNetworkReply::AuthenticationRequiredError)
        {
            label_message->setText("<font color='red'>Your email/password combination was incorrect or account is not activated</font>");
        }else
        {
            label_message->setText("<font color='red'>Login failed. Please check your email, password and internet connection.</font>");
        }
        WARNING(reply->request().url().toString() + " returned: " + replyText);

    }else
    {
        //No error in request
        label_message->setText("Logged in...");
        //Save to qsettings
        QUrl replyParams = QUrl("?" + replyText);
        QSettings settings("screencloud", "ScreenCloud");
        settings.beginGroup("account");
        settings.setValue("token", replyParams.queryItemValue("oauth_token"));
        settings.setValue("token-secret", replyParams.queryItemValue("oauth_token_secret"));
        settings.setValue("email", input_email->text());
        settings.setValue("logged-in", true);
        settings.endGroup();
    }
    serverQueryFinished = true;


}
