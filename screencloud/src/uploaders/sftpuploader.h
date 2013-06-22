/* * ScreenCloud - An easy to use screenshot sharing application
 * Copyright (C) 2013 Olav Sortland Thoresen <olav.s.th@gmail.com>
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

#ifndef SFTPUPLOADER_H
#define SFTPUPLOADER_H

#include "uploader.h"
#include "datetimedialog.h"
#include <QPixmap>
#include <QIcon>
#include <QLineEdit>
#include <QSettings>
#include <QDate>
#include <QTime>
#include <QPushButton>
#include <QCheckBox>
#include <PJSSH.h>
#include <string>
#include <sstream>
#include <QDebug>
#include <stdexcept>
#include <QMessageBox>
#include <utils/security.h>

class SFTPUploader : public Uploader
{
    Q_OBJECT
public:
    explicit SFTPUploader(QObject *parent = 0);
    virtual ~SFTPUploader();
    void loadSettings();
    void saveSettings();
    void upload(QImage *screenshot);
    void setupSettingsUi();

private:
    QString host;
    QString path, prefix, suffix;
    QString urlToPath;
    QString username, password;
    quint16 port;

    QLineEdit* uiInputHost;
    QLineEdit* uiInputPort;
    QLineEdit* uiInputUsername;
    QLineEdit* uiInputPassword;
    QLineEdit* uiInputDir;
    QLineEdit* uiInputURL;
    QLineEdit* uiInputPrefix;
    QLineEdit* uiInputName;
    QLineEdit* uiInputSuffix;
    QCheckBox* uiCheckBoxDateTimeAsPrefix;
    QCheckBox* uiCheckBoxDateTimeAsSuffix;
    QPushButton* uiButtonSettingsDateTimePrefix;
    QPushButton* uiButtonSettingsDateTimeSuffix;
    bool dateTimeAsPrefix, dateTimeAsSuffix;
    QString format, dateTimeFormatPrefix, dateTimeFormatSuffix;
    int jpegQuality;

signals:

public slots:
    void openDateTimeSettingsPrefix();
    void openDateTimeSettingsSuffix();

};

#endif // SFTPUPLOADER_H
