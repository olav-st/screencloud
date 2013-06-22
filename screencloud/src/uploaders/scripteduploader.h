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

#ifndef SCRIPTEDUPLOADER_H
#define SCRIPTEDUPLOADER_H

#include <uploaders/uploader.h>
#include <QtScript>
#include <QIODevice>

class ScriptedUploader :  public Uploader
{
    Q_OBJECT
public:
    explicit ScriptedUploader(QScriptEngine *engine,QString name, QString shortname,QString iconFilename, QObject *parent = 0);
    virtual ~ScriptedUploader();
    void loadSettings();
    void saveSettings();
    void upload(QImage* screenshot);
    void setupSettingsUi();
    void openSettingsDialog(QWidget* parent);
    bool isConfigured();
    QScriptValue evaluateInNamespace ( QScriptEngine* engine, QString space, QString code );
private:
    QScriptEngine* scriptEngine;
    QScriptContext* context;

public:
    QString workingDir;
signals:
    
public slots:
    void setConfigured(bool configured);
    void setFilename(QString newName);
    QString getFilename();
    QString getConsumerKey(QString service);
    QString getConsumerSecret(QString service);
    QString getApiKey(QString service);

    
};

#endif // SCRIPTEDUPLOADER_H
