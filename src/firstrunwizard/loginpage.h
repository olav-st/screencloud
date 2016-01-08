/* * ScreenCloud - An easy to use screenshot sharing application
 * Copyright (C) 2016 Olav Sortland Thoresen <olav.s.th@gmail.com>
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

#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QWizardPage>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QFormLayout>
#include <QRegExpValidator>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QEventLoop>
#include <QApplication>
#include <QSettings>
#include <firstrunwizard/firstrunwizard.h>

class LoginPage : public QWizardPage
{
    Q_OBJECT
public:
    explicit LoginPage(QWidget *parent = 0);
    int nextId() const;
    bool validatePage();
private:
    QLineEdit *input_email;
    QLineEdit *input_password;
    QLabel* label_forgotPassword;
    QLabel* label_message;
    QNetworkAccessManager *manager;
    bool serverQueryFinished;
    bool serverQueryError;

Q_SIGNALS:

public Q_SLOTS:
    void replyFinished(QNetworkReply* reply);

};

#endif // LOGINPAGE_H
