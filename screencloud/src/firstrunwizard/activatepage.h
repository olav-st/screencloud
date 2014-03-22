/* * ScreenCloud - An easy to use screenshot sharing application
 * Copyright (C) 2014 Olav Sortland Thoresen <olav.s.th@gmail.com>
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

#ifndef ACTIVATEPAGE_H
#define ACTIVATEPAGE_H

#include <QWizardPage>
#include <QLabel>
#include <QLineEdit>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QVBoxLayout>
#include <QFormLayout>
#include <QApplication>
#include <QEventLoop>
#include <QSettings>
#include <QDomDocument>
#include <QDateTime>
#include <utils/network.h>

class ActivatePage : public QWizardPage
{
    Q_OBJECT
public:
    explicit ActivatePage(QWidget *parent = 0);
    bool validatePage();
    bool checkUserActivated(int user_id);
    bool getAccessToken();

private:
    QLabel* label_activation;
    QLabel* image_activationLink;
    QLabel* label_message;
    QNetworkAccessManager *manager;
    bool userActivated;
    bool serverQueryFinished;
    bool serverQueryError;

signals:

public slots:
    void replyFinished(QNetworkReply* reply);

};

#endif // ACTIVATEPAGE_H
