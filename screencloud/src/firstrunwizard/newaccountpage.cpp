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

#include "newaccountpage.h"
#include <QDebug>

NewAccountPage::NewAccountPage(QWidget *parent) :
    QWizardPage(parent)
{
    serverQueryFinished = false;
    serverQueryError = false;
    hasCreatedAccount = false;
    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)),
             this, SLOT(replyFinished(QNetworkReply*)));
    //Setup GUI
    setTitle(tr("New Account"));
    input_email = new QLineEdit(this);
    input_email->setValidator(new QRegExpValidator(QRegExp("\\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,4}\\b", Qt::CaseInsensitive), this));
    input_password = new QLineEdit(this);
    input_confirmPassword = new QLineEdit(this);
    input_password->setEchoMode(QLineEdit::Password);
    input_confirmPassword->setEchoMode(QLineEdit::Password);
    checkbox_terms = new QCheckBox(this);
    label_termsLink = new ClickableLabel();
    label_termsLink->setText("I have read, and agree to the <a href=\"http://screencloud.net/pages/terms\">terms of service</a>");
    label_termsLink->setOpenExternalLinks(false); //We want to handle the click event
    connect(label_termsLink, SIGNAL(clicked()), checkbox_terms, SLOT(toggle()));
    connect(label_termsLink, SIGNAL(linkClicked()), checkbox_terms, SLOT(toggle()));
    label_message = new QLabel(this);
    label_message->setWordWrap(true);
    hiddenInput_userId = new QLineEdit(this);
    hiddenInput_userId->setVisible(false);
    hiddenInput_userId->setEnabled(true);

    registerField("register.email*", input_email);
    registerField("register.password*", input_password);
    registerField("register.confirmPassword*", input_confirmPassword);
    registerField("register.terms*", checkbox_terms);
    registerField("register.hidden_userId", hiddenInput_userId);

    QFormLayout* registerForm = new QFormLayout;
    registerForm->addRow("Email:", input_email);
    registerForm->addRow("Password:", input_password);
    registerForm->addRow("Confirm password:", input_confirmPassword);
    QHBoxLayout* termsLayout = new QHBoxLayout;
    checkbox_terms->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
    termsLayout->setSpacing(2);
    termsLayout->setContentsMargins(0,2,0,0);
    termsLayout->addWidget(checkbox_terms);
    termsLayout->addWidget(label_termsLink);
    termsLayout->addStretch();
    registerForm->addRow(termsLayout);

    QVBoxLayout* layout = new QVBoxLayout;
    layout->addLayout(registerForm);
    layout->addStretch();
    layout->addWidget(label_message);
    setLayout(layout);
}
bool NewAccountPage::validatePage()
{
    if(hasCreatedAccount)
    {
        return true;
    }
    serverQueryFinished = false;
    serverQueryError = false;
    //Check if passwords match
    if(input_password->text() != input_confirmPassword->text())
    {
        label_message->setText("<font color='red'>Passwords do not match</font>");
        return false;
    }
    label_message->setText("Creating account...");
    QByteArray token, tokenSecret;
    QOAuth::Interface *qoauth = new QOAuth::Interface;
    qoauth->setConsumerKey(CONSUMER_KEY_SCREENCLOUD);
    qoauth->setConsumerSecret(CONSUMER_SECRET_SCREENCLOUD);
    QByteArray url( "https://screencloud.net/1.0/users/register.xml" );
    QString urlString = QString(url);
    // create a request parameters map
    QOAuth::ParamMap map;
    map.insert( "data[User][email]", QUrl::toPercentEncoding(input_email->text()));
    map.insert( "data[User][password]", QUrl::toPercentEncoding(input_password->text()) );
    map.insert("data[User][password_confirmation]", QUrl::toPercentEncoding(input_confirmPassword->text()));

    // construct the body string
    QByteArray body =
    qoauth->createParametersString( urlString, QOAuth::POST,
                                        token, tokenSecret,QOAuth::HMAC_SHA1, map,
                                        QOAuth::ParseForRequestContent );

    QNetworkRequest request;
    request.setUrl(QUrl(url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");
    manager->post(request, body);
    while (!serverQueryFinished) {
       qApp->processEvents(QEventLoop::WaitForMoreEvents);
    }
    if(serverQueryError)
    {
        return false;
    }
    hasCreatedAccount = true;
    return true;
}
void NewAccountPage::replyFinished(QNetworkReply *reply)
{
    label_message->setText("Sending activation email...");
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
        label_message->setText("Logged in...");
        QDomDocument doc("reply");
        if (!doc.setContent(replyText)) {
            label_message->setText("<font color='red'>Failed to parse response from server</font>");
            return;
        }
        QDomElement docElem = doc.documentElement();
        QDomElement user = docElem.firstChildElement("User");
        QDomElement userId = user.firstChildElement("id");
        hiddenInput_userId->setText(userId.text());
        hiddenInput_userId->setReadOnly(true);
        if(userId.text().length() == 0)
        {
            label_message->setText("<font color='red'>Failed to register user. Could not read user id</font>");
        }
    }
    serverQueryFinished = true;
}
