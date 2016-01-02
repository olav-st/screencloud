//
// ScreenCloud - An easy to use screenshot sharing application
// Copyright (C) 2014 Olav Sortland Thoresen <olav.s.th@gmail.com>
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
#include <utils/log.h>
#include <QApplication>

Uploader::Uploader(QObject* parent) : QObject(parent)
{
    name  = "Default Uploader";
    shortname = "defaultUploader";
    icon = QIcon(":/uploaders/default.png");
    filename = "Default filename.png";
}
Uploader::~Uploader()
{
}

void Uploader::upload(const QImage &screenshot, QString name)
{
    Q_EMIT finished();
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

QString Uploader::getFilename()
{
    return QString();
}

void Uploader::showSettingsUI(QWidget* parent)
{
}

