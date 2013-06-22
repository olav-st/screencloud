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

#include "sftpuploader.h"
#include <unistd.h>
#include <QDesktopServices>

SFTPUploader::SFTPUploader(QObject *parent) :
    Uploader(parent)
{
    name = "SFTP";
    shortname = "sftp";
    icon = QIcon(":/uploaders/sftp.png");
    loadSettings();
}
SFTPUploader::~SFTPUploader()
{
}

void SFTPUploader::loadSettings()
{
    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("uploaders");
    settings.beginGroup(shortname);
    host = settings.value("host", QString("")).toString();
    port = settings.value("port", 22).toUInt();
    username = settings.value("username", QString("")).toString();
    password = Security::decrypt(settings.value("password", QString("")).toString());
    if(!path.isEmpty() && (path.at(path.size() -1) != QChar('/') || path.at(path.size() -1) != QDir::separator()) ) //Make sure that the path has a separator at the end
    {
        path = path + "/";
    }
    path = settings.value("path", QString("/")).toString();
    urlToPath = settings.value("url", "").toString();
    if(!urlToPath.isEmpty() && urlToPath.at(urlToPath.size() -1) != QChar('/')) //Make sure that the url has a separator at the end
    {
        urlToPath = urlToPath + "/";
    }
    prefix = settings.value("prefix",  "").toString();
    suffix = settings.value("suffix", QDate::currentDate().toString("yyyy-MM-dd") + " " + QTime::currentTime().toString("hh:mm:ss")).toString();
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
    //Finally, set the filename
    filename = prefix + screenshotName + suffix + "." + format;

    settings.endGroup();
    settings.endGroup();
    settings.beginGroup("general");
    format = settings.value("format", "png").toString();
    jpegQuality = settings.value("jpeg-quality", 90).toInt();
    settings.endGroup();
}
void SFTPUploader::saveSettings()
{
    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("uploaders");
    settings.beginGroup(shortname);
    settings.setValue("host", uiInputHost->text());
    settings.setValue("port", uiInputPort->text());
    settings.setValue("username", uiInputUsername->text());
    settings.setValue("password", Security::encrypt(uiInputPassword->text()));
    settings.setValue("path", uiInputDir->text());
    settings.setValue("url", uiInputURL->text());
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
    settings.setValue("dateTimeAsPrefix", uiCheckBoxDateTimeAsPrefix->isChecked());
    settings.setValue("dateTimeAsSuffix", uiCheckBoxDateTimeAsSuffix->isChecked());
    settings.setValue("configured", true);
    settings.endGroup();
    settings.endGroup();
}


void SFTPUploader::upload(QImage *screenshot)
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

    //Save to a buffer in memory
    buffer = new QBuffer(&bufferArray, this);
    buffer->open(QIODevice::WriteOnly);
    QString remoteFileName = path + filename;
    if(format == "jpg")
    {
        if(!screenshot->save(buffer, format.toAscii(), jpegQuality))
        {
            emit uploadingError("Failed to save screenshot to " + QDir::tempPath());
        }
    }else
    {
        if(!screenshot->save(buffer, format.toAscii()))
        {
                emit uploadingError("Failed to save screenshot to " + QDir::tempPath());
        }
    }
    //Upload to sftp
    // user:pw@host:port
    qDebug() << "[sftp] remote filename: " << remoteFileName.toLatin1();
    const PJSSH ssh(username.toUtf8(), password.toUtf8(), host.toUtf8(), port);
    std::stringstream stringStream(std::stringstream::in | std::stringstream::out | std::stringstream::binary);
    stringStream.write(bufferArray.constData(), bufferArray.size());
    try
    {
        ssh.PutStream(stringStream, remoteFileName.toUtf8());
    }catch(std::runtime_error e)
    {
        emit uploadingError(QString(e.what()));
        return;
    }
    //NOTE: mabye a little hacky
    qDebug() << "Setting permissions on remote file: " << "chmod 644 \"" + remoteFileName.toUtf8() + "\"";
    ssh.ExecuteCmd("chmod 644 \"" + remoteFileName.toUtf8() + "\"");
    if(!urlToPath.isEmpty())
    {
        emit uploadingFinished(urlToPath + filename);
    }else
    {
        emit uploadingFinished("");
    }
}

void SFTPUploader::setupSettingsUi()
{
    loadSettings();
    uiInputHost = settingsWidget->findChild<QLineEdit*>("input_host");
    uiInputPort = settingsWidget->findChild<QLineEdit*>("input_port");
    uiInputUsername = settingsWidget->findChild<QLineEdit*>("input_username");
    uiInputPassword = settingsWidget->findChild<QLineEdit*>("input_password");
    uiInputDir = settingsWidget->findChild<QLineEdit*>("input_dir");
    uiInputURL = settingsWidget->findChild<QLineEdit*>("input_url");
    uiInputPrefix = settingsWidget->findChild<QLineEdit*>("input_prefix");
    uiInputName = settingsWidget->findChild<QLineEdit*>("input_name");
    uiInputSuffix = settingsWidget->findChild<QLineEdit*>("input_suffix");
    uiCheckBoxDateTimeAsPrefix =  settingsWidget->findChild<QCheckBox*>("checkBox_dateTimePrefix");
    uiCheckBoxDateTimeAsSuffix = settingsWidget->findChild<QCheckBox*>("checkBox_dateTimeSuffix");
    uiButtonSettingsDateTimePrefix = settingsWidget->findChild<QPushButton*>("button_settingsDateTimePrefix");
    uiButtonSettingsDateTimeSuffix = settingsWidget->findChild<QPushButton*>("button_settingsDateTimeSuffix");
    connect(uiButtonSettingsDateTimePrefix, SIGNAL(clicked()), this, SLOT(openDateTimeSettingsPrefix()));
    connect(uiButtonSettingsDateTimeSuffix, SIGNAL(clicked()), this, SLOT(openDateTimeSettingsSuffix()));

    uiInputHost->setText(host);
    uiInputPort->setText(QString::number(port));
    uiInputUsername->setText(username);
    uiInputPassword->setText(password);
    uiInputDir->setText(path);
    uiInputURL->setText(urlToPath);
    if(!dateTimeAsSuffix)
    {
        uiInputPrefix->setText(prefix);
    }
    uiInputName->setText(screenshotName);
    if(!dateTimeAsSuffix)
    {
        uiInputSuffix->setText(suffix);
    }
    uiCheckBoxDateTimeAsPrefix->setChecked(dateTimeAsPrefix);
    uiCheckBoxDateTimeAsSuffix->setChecked(dateTimeAsSuffix);
}

void SFTPUploader::openDateTimeSettingsPrefix()
{
    DateTimeDialog prefixDateTimeSettings(settingsDialog, this->shortname, true);
    prefixDateTimeSettings.exec();
}

void SFTPUploader::openDateTimeSettingsSuffix()
{
    DateTimeDialog prefixDateTimeSettings(settingsDialog, this->shortname, false);
    prefixDateTimeSettings.exec();
}

