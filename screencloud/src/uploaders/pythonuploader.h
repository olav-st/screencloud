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

#ifndef LUAUPLOADER_H
#define LUAUPLOADER_H

#include <QObject>
#include <uploaders/uploader.h>
#include <plugin/pluginmanager.h>
#include <QMessageBox>
#include <utils/log.h>
#include <utils/OS.h>
#include <PythonQt.h>
#include <QtConcurrentRun>

class PythonUploader : public Uploader
{
    Q_OBJECT
public:
    explicit PythonUploader(QString name, QString shortname, QString className, QString iconFilename, QObject *parent);
    ~PythonUploader();
    void showSettingsUI(QWidget* parent);
    bool isConfigured();

private:
    PythonQtObjectPtr pythonContext;
    PythonQtObjectPtr moduleObj;
    QString className;
    QString lastPythonErr;
    bool hadPythonErr;

public:
    QString workingDir;

signals:

public slots:
    void upload(const QImage& screenshot, QString name);
    QString getFilename();
    void pythonError(QString err);

};

#endif // LUAUPLOADER_H
