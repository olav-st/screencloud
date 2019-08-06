//
// ScreenCloud - An easy to use screenshot sharing application
// Copyright (C) 2016 Olav Sortland Thoresen <olav.s.th@gmail.com>
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

#include "localfileuploader.h"
#include <QApplication>
#include <QMessageBox>
#include <QDir>
#include <QFile>
#include <PythonQt.h>

LocalFileUploader::LocalFileUploader(QObject *parent) :
    Uploader(parent)
{
    name = "Local File";
    shortname = "localfile";
    icon = QIcon::fromTheme("folder", QIcon(":/uploaders/file.png"));
    if(!icon.availableSizes().contains(QSize(32,32)))
    {
        icon = QIcon(":/uploaders/file.png");
    }
    loadSettings();
}

LocalFileUploader::~LocalFileUploader()
{
    if(settingsDialog != NULL)
    {
        delete settingsDialog;
    }
}

void LocalFileUploader::loadSettings()
{
    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("main");
    format = settings.value("format", "png").toString();
    jpegQuality = settings.value("jpeg-quality", 10).toInt();
    settings.endGroup();
    settings.beginGroup("uploaders");
    settings.beginGroup("file");
    nameFormat = settings.value("name-format", "Screenshot at %H-%M-%S").toString();
    folder = settings.value("folder", "").toString();
    settings.endGroup();
    settings.endGroup();
    this->configured = true;
}

void LocalFileUploader::saveSettings()
{
    //No need to save anything, settings are saved in the dialog class
}

void LocalFileUploader::upload(const QImage &screenshot, QString name)
{
    loadSettings();
    QFile f(folder + QDir::separator() + name);
    f.open(QIODevice::WriteOnly);
    if(!f.isWritable())
    {
        Q_EMIT uploadingError(tr("File ") + f.fileName() + tr(" is not writable!"));
    }else
    {
        screenshot.save(f.fileName(), format.toStdString().c_str());
        f.close();
        this->uploadingFinished("");
    }
    Q_EMIT finished();
}

void LocalFileUploader::onNameFormatChanged(QString newNameFormat)
{
    settingsDialog->setExampleNameLabel(this->getFilename());
}

void LocalFileUploader::showSettingsUI(QWidget *parent)
{
    if(settingsDialog != NULL)
    {
        disconnect(settingsDialog, SIGNAL(nameFormatChanged(QString)), this, SLOT(onNameFormatChanged(QString)));
        delete settingsDialog;
        settingsDialog = NULL;
    }
    settingsDialog = new SelectFolderDialog(parent);
    connect(settingsDialog, SIGNAL(nameFormatChanged(QString)), this, SLOT(onNameFormatChanged(QString)));
    settingsDialog->setExampleNameLabel(this->getFilename());
    settingsDialog->show();
}

bool LocalFileUploader::isConfigured()
{
    loadSettings();
    return !folder.isEmpty() && !nameFormat.isEmpty();
}

QString LocalFileUploader::getFilename()
{
    loadSettings();

    QVariantList params;
    params.append(nameFormat);

    QString formattedFilename =  PythonQt::self()->importModule("ScreenCloud")
                                    .call("formatFilename", params)
                                    .toString();
    return formattedFilename;
}
