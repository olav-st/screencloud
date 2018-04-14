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

#ifndef LOCALFILEUPLOADER_H
#define LOCALFILEUPLOADER_H

#include "uploaders/uploader.h"
#include "dialog/selectfolderdialog.h"

class LocalFileUploader : public Uploader
{
    Q_OBJECT
public:
    explicit LocalFileUploader(QObject *parent = 0);
    virtual ~LocalFileUploader();
    void loadSettings();
    void saveSettings();
    void showSettingsUI(QWidget* parent);
    bool isConfigured();
    QString getFilename();
    
public Q_SLOTS:
    void upload(const QImage& screenshot, QString name);
    void onNameFormatChanged(QString newNameFormat);

private:
    QString nameFormat, folder, format;
    int jpegQuality;
    SelectFolderDialog* settingsDialog = NULL;
    
};

#endif // LOCALFILEUPLOADER_H
