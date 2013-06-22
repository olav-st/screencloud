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

#include "uploader.h"
#include <QPushButton>
#include <QDebug>
#include <QApplication>
#include <QUiLoader>

Uploader::Uploader(QObject* parent) : QObject(parent)
{
    name  = "Default Uploader";
    shortname = "defaultUploader";
    icon = QIcon(":/uploaders/default.png");
    buffer = new QBuffer(&bufferArray, this);
    settingsWidget = new QWidget();
    settingsDialog = new QDialog();
    filename = "Default filename.png";
    filenameSetExternally = false;
}
Uploader::~Uploader()
{
    delete buffer;
}

QString& Uploader::getName()
{
    return name;
}
QString& Uploader::getShortName()
{
    return this->shortname;
}

QIcon& Uploader::getIcon()
{
    return icon;
}
bool Uploader::isConfigured()
{
    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("uploaders");
    settings.beginGroup(this->shortname);
    this->configured = settings.value("configured", false).toBool();
    settings.endGroup();
    settings.endGroup();
    return this->configured;
}

void Uploader::openSettingsDialog(QWidget* parent)
{
    //Open settings dialog
    QUiLoader loader;
    QFile file(":/forms/settings-" + this->shortname + ".ui");
    if(!file.open(QFile::ReadOnly))
    {
        file.setFileName(qApp->applicationDirPath() + QDir::separator() + this->shortname + QDir::separator() + "settings.ui");
        file.open(QFile::ReadOnly);
    }
    settingsWidget = loader.load(&file, parent);
    settingsDialog = dynamic_cast<QDialog*>(settingsWidget);
    file.close();
    connect(settingsDialog, SIGNAL(accepted()), this, SLOT(settingsDialogAccepted()));

    setupSettingsUi();
    settingsDialog->setWindowTitle(this->name + " settings");
    settingsDialog->exec();

}

void Uploader::setFilename(QString newName)
{
    this->filename = validateFilename(newName);
    if(!this->filename.contains("." + format))
    {
        this->filename.append("." + format);
    }
    this->filenameSetExternally = true;
}


void Uploader::settingsDialogAccepted()
{
    this->saveSettings();
}

void Uploader::setupSettingsUi()
{
}

QString Uploader::getFilename()
{
    return this->filename;
}

QString Uploader::validateFilename(QString filename)
{
    qDebug() << "Validating filename: " << filename;
#ifdef Q_OS_WIN
    filename.replace( QRegExp(
             "[^"
                "A-Z,a-z,0-9,"
                "\\^,\\&,\\',\\@,"
                "\\{,\\},\\[,\\],"
                "\\,,\\$,\\=,\\!,"
                "\\-,\\#,\\(,\\),"
                "\\%,\\.,\\+,\\~,\\_"
             "]"), " " );
    qDebug() << "Valid: " << filename;
#endif
    return filename;
}




