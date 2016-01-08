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

#include "clipboarduploader.h"
#include <QApplication>
#include <QMessageBox>
#include <QClipboard>

ClipboardUploader::ClipboardUploader(QObject *parent) :
    Uploader(parent)
{
    name = "Clipboard";
    shortname = "clipboard";
    icon = QIcon::fromTheme("edit-copy", QIcon(":/uploaders/clipboard.png"));
    loadSettings();
}

ClipboardUploader::~ClipboardUploader()
{
}

void ClipboardUploader::loadSettings()
{
    this->configured = true;
}

void ClipboardUploader::saveSettings()
{
    //No need to save anything, this plugin has no settings after all :I
}

void ClipboardUploader::upload(const QImage &screenshot, QString name)
{
    qApp->clipboard()->setImage(screenshot);
    this->uploadingFinished("");
    Q_EMIT finished();
}

void ClipboardUploader::showSettingsUI(QWidget *parent)
{
    //There is no dialog (.ui file) to open, so we'll just chill and show a messagebox
    QMessageBox::information(NULL, tr("Clipboard"), tr("This uploader has no settings. It will simply copy any screenshot to the system clipboard."));
}

bool ClipboardUploader::isConfigured()
{
    return true; //Yup!
}

QString ClipboardUploader::getFilename()
{
    return tr("Screenshot for clipboard");
}
