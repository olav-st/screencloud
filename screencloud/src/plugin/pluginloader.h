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

#ifndef PLUGINLOADER_H
#define PLUGINLOADER_H

#include <QObject>
#include <QScriptEngine>
#include <uploaders/uploader.h>
#include <QApplication>
#include <QDir>
#include <preferencesdialog.h>
#include <QDesktopServices>
#include <uploaders/scripteduploader.h>

class PluginLoader : public QObject
{
    Q_OBJECT
public:
    explicit PluginLoader(QObject *parent = 0, QList<Uploader*> * uploadersPtr = 0);
    void loadPlugins();
    void unloadPlugins();
    ScriptedUploader* loadSinglePlugin(QString shortname);
    void unloadSinglePlugin(QString shortname);
    bool isLoaded(QString shortname);
    static bool isInstalled(QString shortname);
    static int countInstalledPlugins();
    static QString pluginPath() { return QDesktopServices::storageLocation(QDesktopServices::DataLocation) + "/plugins/"; }
    static QScriptValue evaluateInNamespace ( QScriptEngine* engine, QString space, QString code, QString filename );
private:
    QScriptEngine scriptEngine;
    QList<Uploader*> *uploadersPtr; //Pointer to the list of available uploaders
signals:
    
public slots:

    
};
/* Static function available to plugins */
static QScriptValue includeFile(QScriptContext *context, QScriptEngine *scriptEngine);
static QScriptValue loadQtBindings(QScriptContext *context, QScriptEngine *scriptEngine);
static QScriptValue loadUiFile(QScriptContext *context, QScriptEngine *scriptEngine);
static QScriptValue encrypt(QScriptContext *context, QScriptEngine *scriptEngine);
static QScriptValue decrypt(QScriptContext *context, QScriptEngine *scriptEngine);
static QScriptValue alert(QScriptContext *context, QScriptEngine *scriptEngine);

#endif // PLUGINLOADER_H
