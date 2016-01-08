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

#ifndef NEWACCOUNTPAGE_H
#define NEWACCOUNTPAGE_H

#include <QWizardPage>
#include <QLineEdit>
#include <QFormLayout>
#include <QVBoxLayout>
#include <QRegExpValidator>
#include <QLabel>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QApplication>
#include <QEventLoop>
#include <QDomDocument>
#include <QCheckBox>
#include <QHBoxLayout>
#include <QDateTime>
#include <utils/network.h>
#include <gui-elements/clickablelabel.h>

class NewAccountPage : public QWizardPage
{
    Q_OBJECT
public:
    explicit NewAccountPage(QWidget *parent = 0);
    bool validatePage();
private:
    QLineEdit* input_email;
    QLineEdit* input_password;
    QLineEdit* input_confirmPassword;
    QCheckBox* checkbox_terms;
    ClickableLabel* label_termsLink;
    QLabel* label_message;
    QLineEdit* hiddenInput_userId;
    QNetworkAccessManager *manager;
    bool serverQueryFinished;
    bool serverQueryError;
    bool hasCreatedAccount;
Q_SIGNALS:

public Q_SLOTS:
    void replyFinished(QNetworkReply* reply);

};

#endif // NEWACCOUNTPAGE_H
