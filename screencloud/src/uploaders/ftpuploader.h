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

#ifndef FTPUPLOADER_H
#define FTPUPLOADER_H

#include "uploader.h"
#include "datetimedialog.h"
#include <QString>
#include <QSettings>
#include <QDir>
#include <QFtp>
#include <QDialog>
#include <QLineEdit>
#include <QDebug>
#include <QLineEdit>
#include <QPushButton>
#include <QCheckBox>
#include <QMessageBox>
#include <QRegExpValidator>
#include <utils/security.h>


class FTPUploader : public Uploader
{
    Q_OBJECT
public:
    explicit FTPUploader(QObject *parent = 0);
    virtual ~FTPUploader();
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
    QFtp* ftp;
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
    int id_connect, id_login, id_cd, id_put, id_close;

signals:

public slots:
    void ftpCommandFinished(int id, bool error);
    void ftpListInfo(const QUrlInfo & i );
    void updateDataTransferProgress(qint64 done, qint64 total);
    void openDateTimeSettingsPrefix();
    void openDateTimeSettingsSuffix();

};

#endif // FTPUPLOADER_H
