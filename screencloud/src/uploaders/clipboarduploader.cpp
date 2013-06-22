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

#include "clipboarduploader.h"
#include <QApplication>
#include <QMessageBox>
#include <QClipboard>

ClipboardUploader::ClipboardUploader(QObject *parent) :
    Uploader(parent)
{
    name = "Clipboard";
    shortname = "clipboard";
    icon = QIcon(":/uploaders/clipboard.png");
    //clipboard = qApp->clipboard();
    loadSettings();
}

ClipboardUploader::~ClipboardUploader()
{
}

void ClipboardUploader::loadSettings()
{
    setFilename("Screenshot for clipboard");
    this->configured = true;
}

void ClipboardUploader::saveSettings()
{
    //No need to save anything, this plugin has no settings after all :I
}

void ClipboardUploader::upload(QImage *screenshot)
{
    qApp->clipboard()->setImage(*screenshot);
    this->uploadingFinished("");
}

void ClipboardUploader::setupSettingsUi()
{
    //Nothing to see here
}

void ClipboardUploader::openSettingsDialog(QWidget *parent)
{
    //There is no dialog (.ui file) to open, so we'll just chill and show a messagebox
    QMessageBox::information(NULL, "Clipboard plugin", "This plugin has no settings. It will simply copy any screenshot to the system clipboard.");
}

bool ClipboardUploader::isConfigured()
{
    return true; //Yup!
}

void ClipboardUploader::setFilename(QString newName)
{
    filename = newName;
}
