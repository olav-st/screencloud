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

#include "fileuploader.h"

FileUploader::FileUploader(QObject* parent) : Uploader(parent)
{
    name = "File";
    shortname = "saveToFile";
    icon = QIcon(":/uploaders/file.png");
    loadSettings();
}
FileUploader::~FileUploader()
{

}

void FileUploader::loadSettings()
{
    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("uploaders");
    settings.beginGroup(shortname);
    uploadPath = settings.value("path", QDesktopServices::storageLocation(QDesktopServices::DesktopLocation)).toString();
    prefix = settings.value("prefix",  "").toString();
    suffix = settings.value("suffix", QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss")).toString();
    screenshotName = settings.value("name", "Screenshot at ").toString();
    filenameSetExternally = false;
    //Date time settings
    dateTimeAsPrefix = settings.value("dateTimeAsPrefix", false).toBool();
    dateTimeAsSuffix = settings.value("dateTimeAsSuffix", true).toBool();
    settings.beginGroup("prefix-datetime-settings");
    dateTimeFormatPrefix = settings.value("date-time-format", QString("")).toString();
    settings.endGroup();
    settings.beginGroup("suffix-datetime-settings");
    dateTimeFormatSuffix = settings.value("date-time-format", QString("yyyy-MM-dd hh:mm:ss")).toString();
    settings.endGroup();
    //Load the date/time before showing the filename
    if(dateTimeAsPrefix)
    {
        prefix = QDateTime::currentDateTime().toString(dateTimeFormatPrefix);
    }
    if(dateTimeAsSuffix)
    {
        suffix = QDateTime::currentDateTime().toString(dateTimeFormatSuffix);
    }
    //Finally, build the filename
    filename = prefix + screenshotName + suffix + QString(".") + format;

    settings.endGroup(); //shortname
    settings.endGroup(); //uploaders

    settings.beginGroup("general");
    format = settings.value("format", "png").toString();
    jpegQuality = settings.value("jpeg-quality", 90).toInt();
    settings.endGroup();
}
void FileUploader::saveSettings()
{
    dateTimeAsPrefix = uiCheckBoxDateTimeAsPrefix->isChecked();
    dateTimeAsSuffix = uiCheckBoxDateTimeAsSuffix->isChecked();

    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("uploaders");
    settings.beginGroup(shortname);
    settings.setValue("path", uiInputDir->text());
    if(!dateTimeAsPrefix)
    {
        settings.setValue("prefix", uiInputPrefix->text());
    }else
    {
        settings.remove("prefix");
    }
    settings.setValue("name", uiInputName->text());
    if(!dateTimeAsSuffix)
    {
        settings.setValue("suffix", uiInputSuffix->text());
    }else
    {
        settings.remove("suffix");
    }
    settings.setValue("dateTimeAsPrefix", dateTimeAsPrefix);
    settings.setValue("dateTimeAsSuffix", dateTimeAsSuffix);
    settings.setValue("configured", true);
    settings.endGroup();
    settings.endGroup();
}


void FileUploader::upload(QImage *screenshot)
{
    if(dateTimeAsPrefix)
    {
        prefix = QDateTime::currentDateTime().toString(dateTimeFormatPrefix);
    }
    if(dateTimeAsSuffix)
    {
        suffix = QDateTime::currentDateTime().toString(dateTimeFormatSuffix);
    }
    if(!filenameSetExternally)
    {
        filename = validateFilename(prefix + screenshotName + suffix + QString(".") + format);
    }
    QString fullFilePath = uploadPath + QDir::separator() + filename;
    qDebug() << "Saving screenshot to file: " << fullFilePath;
    QFileInfo fileInfo(uploadPath);
    if(!fileInfo.permission(QFile::WriteUser) || !QDir(uploadPath).exists())
    {
        qDebug() << "No write permissions, or directory does not exist. Popping open a file dialog";
        uploadPath = openDirectoryBrowser(uploadPath); //Probably in sandbox, pop open a diretory dialog
        if(uploadPath.isEmpty())
        {
            emit uploadingError("Failed to save screenshot. No directory selected.");
            return;
        }
        fullFilePath = uploadPath + QDir::separator() + filename;
        //Save the new path
        QSettings settings("screencloud", "ScreenCloud");
        settings.beginGroup("uploaders");
        settings.beginGroup(shortname);
        settings.setValue("path", uploadPath);
        settings.endGroup();
        settings.endGroup();
    }
    if(format == "jpg")
    {
        if(!screenshot->save(fullFilePath, format.toAscii(), jpegQuality))
        {
            emit uploadingError("Failed to save screenshot to file. Please make sure that your account has write permissions to " + uploadPath);
        }
    }else
    {
        if(!screenshot->save(fullFilePath, format.toAscii()))
        {
                emit uploadingError("Failed to save screenshot to file. Please make sure that your account has write permissions to " + uploadPath);
        }
    }
    emit uploadingFinished("");

}

void FileUploader::setupSettingsUi()
{
    loadSettings();
    uiInputDir = settingsWidget->findChild<QLineEdit*>("input_folder");
    uiInputPrefix = settingsWidget->findChild<QLineEdit*>("input_prefix");
    uiInputName = settingsWidget->findChild<QLineEdit*>("input_name");
    uiInputSuffix = settingsWidget->findChild<QLineEdit*>("input_suffix");
    uiCheckBoxDateTimeAsPrefix =  settingsWidget->findChild<QCheckBox*>("checkBox_dateTimePrefix");
    uiCheckBoxDateTimeAsSuffix = settingsWidget->findChild<QCheckBox*>("checkBox_dateTimeSuffix");
    uiButtonSelectFolder = settingsWidget->findChild<QPushButton*>("button_selectFolder");
    connect(uiButtonSelectFolder, SIGNAL(clicked()), this, SLOT(openFileBrowser()));
    uiButtonSettingsDateTimePrefix = settingsWidget->findChild<QPushButton*>("button_settingsDateTimePrefix");
    uiButtonSettingsDateTimeSuffix = settingsWidget->findChild<QPushButton*>("button_settingsDateTimeSuffix");
    connect(uiButtonSettingsDateTimePrefix, SIGNAL(clicked()), this, SLOT(openDateTimeSettingsPrefix()));
    connect(uiButtonSettingsDateTimeSuffix, SIGNAL(clicked()), this, SLOT(openDateTimeSettingsSuffix()));

    uiInputDir->setText(uploadPath);
    if(!dateTimeAsSuffix)
    {
        uiInputPrefix->setText(prefix);
    }
    uiInputName->setText(screenshotName);
    if(!dateTimeAsSuffix)
    {
        uiInputSuffix->setText(suffix);
    }
    if(dateTimeAsPrefix)
    {
        uiCheckBoxDateTimeAsPrefix->setCheckState(Qt::Checked);
        uiInputPrefix->setEnabled(false);
    }
    if(dateTimeAsSuffix)
    {
        uiCheckBoxDateTimeAsSuffix->setCheckState(Qt::Checked);
        uiInputSuffix->setEnabled(false);
    }

}

QString FileUploader::openDirectoryBrowser(QString path)
{
    if(path.isEmpty() || !QDir(path).exists())
    {
        path = QDesktopServices::storageLocation(QDesktopServices::HomeLocation);
    }
    QString selectedPath = QFileDialog::getExistingDirectory(NULL, "Select Folder...", path);
    return selectedPath;
}

void FileUploader::openFileBrowser()
{
    QString dir = uiInputDir->text();
    if(dir.isEmpty())
    {
        dir = QDesktopServices::storageLocation(QDesktopServices::HomeLocation);
    }
    uploadPath = QFileDialog::getExistingDirectory(settingsWidget, "Select Folder...", dir);
    uiInputDir->setText(uploadPath);
}

void FileUploader::openDateTimeSettingsPrefix()
{
    DateTimeDialog prefixDateTimeSettings(settingsDialog, this->shortname, true);
    prefixDateTimeSettings.exec();
}

void FileUploader::openDateTimeSettingsSuffix()
{
    DateTimeDialog prefixDateTimeSettings(settingsDialog, this->shortname, false);
    prefixDateTimeSettings.exec();
}
