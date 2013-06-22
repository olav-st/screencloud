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

#ifndef FILEUPLOADER_H
#define FILEUPLOADER_H

#include "uploader.h"
#include "datetimedialog.h"
#include <QString>
#include <QSettings>
#include <QDir>
#include <QDateTime>
#include <QDebug>
#include <QLineEdit>
#include <QCheckBox>
#include <QPushButton>
#include <QFileDialog>
#include <QDesktopServices>

class FileUploader : public Uploader
{
    Q_OBJECT
public:
    FileUploader(QObject* parent = 0);
    virtual ~FileUploader();
    void loadSettings();
    void saveSettings();
    void upload(QImage* screenshot);
    void setupSettingsUi();
    QString openDirectoryBrowser(QString path);

private:
    QString uploadPath, prefix, suffix;
    QLineEdit* uiInputDir;
    QLineEdit* uiInputPrefix;
    QLineEdit* uiInputName;
    QLineEdit* uiInputSuffix;
    QCheckBox* uiCheckBoxDateTimeAsPrefix;
    QCheckBox* uiCheckBoxDateTimeAsSuffix;
    QPushButton* uiButtonSelectFolder;
    QPushButton* uiButtonSettingsDateTimePrefix;
    QPushButton* uiButtonSettingsDateTimeSuffix;
    bool dateTimeAsPrefix, dateTimeAsSuffix;
    QString dateTimeFormatPrefix, dateTimeFormatSuffix;
    int jpegQuality;

public slots:
    void openFileBrowser();
    void openDateTimeSettingsPrefix();
    void openDateTimeSettingsSuffix();
};

#endif // FILEUPLOADER_H
