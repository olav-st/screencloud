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

#include "pluginloader.h"
#include <QDir>
#include <QDirIterator>
#include <QDebug>
#include <QApplication>
#include <QScriptValue>
#include <QScriptContext>
#include <QMessageBox>
#include "utils/security.h"
#include <QtXml>
#include <QUiLoader>
#include <QNetworkAccessManager>
#include <QNetworkRequest>

/* This class finds and loads plugins. Before executing them, it adds all the global functions to the script engine */

PluginLoader::PluginLoader(QObject *parent, QList<Uploader*> *uploadersPtr) :
    QObject(parent)
{
    this->uploadersPtr = uploadersPtr;
    //Setup global functions
    QScriptValue include = scriptEngine.newFunction(includeFile);
    scriptEngine.globalObject().setProperty("include", include, QScriptValue::ReadOnly);
    QScriptValue qtBindings = scriptEngine.newFunction(loadQtBindings);
    scriptEngine.globalObject().setProperty("loadQtBindings", qtBindings, QScriptValue::ReadOnly);
    QScriptValue loadUiF = scriptEngine.newFunction(loadUiFile);
    scriptEngine.globalObject().setProperty("loadUiFile", loadUiF, QScriptValue::ReadOnly);
    QScriptValue security = scriptEngine.newObject();
    scriptEngine.globalObject().setProperty("Security", security, QScriptValue::ReadOnly);
    QScriptValue enc = scriptEngine.newFunction(encrypt);
    security.setProperty("encrypt", enc, QScriptValue::ReadOnly);
    QScriptValue dec = scriptEngine.newFunction(decrypt);
    security.setProperty("decrypt", dec, QScriptValue::ReadOnly);
    QScriptValue alertFunc = scriptEngine.newFunction(alert);
    scriptEngine.globalObject().setProperty("alert", alertFunc, QScriptValue::ReadOnly);
    //Create global object OS and set static functions
    QScriptValue osObj = scriptEngine.newObject();
    QScriptValue getOSNameFunc = scriptEngine.newFunction(getOSName);
    osObj.setProperty("getName", getOSNameFunc);
    QScriptValue getOSShortnameFunc = scriptEngine.newFunction(getOSShortname);
    osObj.setProperty("getShortname", getOSShortnameFunc);
    scriptEngine.globalObject().setProperty("OS", osObj);
    //Global vars
    scriptEngine.evaluate("loadQtBindings(\"qt.core\"); var settings = new QSettings(\"screencloud\", \"ScreenCloud\");");
}

void PluginLoader::loadPlugins()
{
    int pluginsFound = 0;
    //Search the plugin path for subdirectories. Each subdirectory should contain a plugin
    QDir pluginDir(pluginPath());
    QDirIterator subdirIterator(pluginPath(), QDir::Dirs | QDir::NoSymLinks | QDir::NoDotAndDotDot, QDirIterator::Subdirectories);

   while(subdirIterator.hasNext()){
       subdirIterator.next();
       QFile mainJSFile(subdirIterator.filePath() + QDir::separator() + "main.js");
       if(mainJSFile.exists())
       {
           //The main.js file exists, this is probably a plugin dir
           //Load the metadata xml file
           QFile xmlFile(subdirIterator.filePath() + QDir::separator() + "metadata.xml");
           xmlFile.open(QFile::ReadOnly);
           QString xmlString = xmlFile.readAll();
           xmlFile.close();
           QDomDocument doc("metadata");
           if(!doc.setContent(xmlString))
           {
               qDebug() << "Failed to parse XML";
           }
           QDomElement docElem = doc.documentElement();
           QString name = docElem.firstChildElement("name").text();
           QString shortname = docElem.firstChildElement("shortname").text();
           QString iconFilename = docElem.firstChildElement("icon").text();
           //Create a ScriptedUploader for this plugin and add it to the list of available plugins
           ScriptedUploader* s = new ScriptedUploader(&scriptEngine, name,shortname, iconFilename, this);
           uploadersPtr->append(s);
       }
   }
}

void PluginLoader::unloadPlugins()
{
    int pluginsUnloaded = 0;
    QList<Uploader*>::iterator it =  uploadersPtr->begin();
    while(it != uploadersPtr->end())
    {
        if(*it == NULL)
        {
            qDebug() << "WTF IT IS NULL";
        }
        ScriptedUploader* uploader = qobject_cast<ScriptedUploader*>(*it);
        if(uploader)
        {
            qDebug() << "Unloaded plugin " << uploader->getName();
            uploadersPtr->erase(it);
            delete uploader;
            pluginsUnloaded ++;
        }else
        {
            qDebug() << "Casting failed";
        }
        ++it;
    }
    qDebug() << "Unloaded " << QString::number(pluginsUnloaded) << " plugin(s).";
    scriptEngine.pushContext();
}

ScriptedUploader *PluginLoader::loadSinglePlugin(QString shortname)
{
    QString path = pluginPath() + shortname;
    QFile mainJSFile(path + QDir::separator() + "main.js");
    if(mainJSFile.exists())
    {
        //The main.js file exists, this is probably a plugin dir
        qDebug() << "Loading single plugin from : " << path;
        //Load the metadata xml file
        QFile xmlFile(path + QDir::separator() + "metadata.xml");
        xmlFile.open(QFile::ReadOnly);
        QString xmlString = xmlFile.readAll();
        xmlFile.close();
        QDomDocument doc("metadata");
        if(!doc.setContent(xmlString))
        {
            qDebug() << "Failed to parse XML";
        }
        QDomElement docElem = doc.documentElement();
        QString name = docElem.firstChildElement("name").text();
        QString shortname = docElem.firstChildElement("shortname").text();
        QString iconFilename = docElem.firstChildElement("icon").text();
        //Create a ScriptedUploader for this plugin and add it to the list of available plugins
        ScriptedUploader* s = new ScriptedUploader(&scriptEngine, name,shortname, iconFilename, this);
        uploadersPtr->append(s);
        return s;
    }
    return NULL;
}

void PluginLoader::unloadSinglePlugin(QString shortname)
{
    for(int i = 0; i < uploadersPtr->size(); i++)
    {
        Uploader* uploader = uploadersPtr->at(i);
        if(uploader)
        {
            if(uploader->getShortName() == shortname)
            {
                qDebug() << "Unloaded single plugin " << uploader->getName();
                if(uploadersPtr->contains(uploader))
                {
                    delete uploader;
                    uploadersPtr->removeAt(i);
                    return;
                }
            }
        }
    }
}

bool PluginLoader::isLoaded(QString shortname)
{
    for(int i = 0; i < uploadersPtr->size(); i++)
    {
        Uploader* uploader = uploadersPtr->at(i);
        if(uploader)
        {
            if(uploader->getShortName() == shortname)
            {
                return true;
            }
        }
    }
    return false;
}

bool PluginLoader::isInstalled(QString shortname)
{
    QDir d(pluginPath() + QDir::separator() + shortname);
    return d.exists();
}

int PluginLoader::countInstalledPlugins()
{
    int pluginsFound = 0;
    //Search the plugin path for subdirectories. Each subdirectory should contain a plugin
    QDirIterator subdirIterator(pluginPath(), QDir::Dirs | QDir::NoSymLinks | QDir::NoDotAndDotDot, QDirIterator::Subdirectories);

   while(subdirIterator.hasNext()){
       subdirIterator.next();
       QFile mainJSFile(subdirIterator.filePath() + QDir::separator() + "main.js");
       if(mainJSFile.exists())
       {
           pluginsFound ++;
       }
   }
   return pluginsFound;
}

QScriptValue PluginLoader::evaluateInNamespace(QScriptEngine *engine, QString space, QString code, QString filename)
{
    QScriptValue result;
    if ( space.isEmpty() ) {
        result = engine->evaluate( code );
    } else {
        QScriptValue scope = engine->globalObject().property( space );
        if ( !scope.isValid() )
            engine->globalObject().setProperty( space, scope = engine->newObject() );
        engine->pushContext()->setActivationObject( scope );
        QScriptContext* parent = engine->currentContext()->parentContext();
        scope.setScope( ( parent != NULL ) ? parent->activationObject()
                                           : engine->globalObject() );
        QScriptValue result = engine->evaluate( code, filename );
        engine->popContext();
        return result;
    }
    return result;
}

/* Static function available to plugins */

static QScriptValue includeFile(QScriptContext *context, QScriptEngine *scriptEngine){
    if (context->argumentCount() < 1)
    {
        return scriptEngine->undefinedValue();
    }
    QString path = context->argument(0).toString();
    if(!path.contains("/") && !path.contains(QDir::separator()))
    {
        //Path is relative
        QScriptContextInfo info(context->parentContext());
        QFileInfo fileinfo(info.fileName());
        path = fileinfo.absolutePath() + QDir::separator() + context->argument(0).toString();
    }
    QFile file(path);

    if (!file.exists() || !file.open(QIODevice::ReadOnly))
    {
        return scriptEngine->undefinedValue();
    }
    QString shortname = context->parentContext()->activationObject().property("workingDir").toString(); //Get the shortname to use as namespace
    //set ScriptContext
    QScriptContext *parent=context->parentContext();
    if(parent!=0)
    {
        context->setActivationObject(context->parentContext()->activationObject());
        context->setThisObject(context->parentContext()->thisObject());
    }
    //Load and evaluate the code
    QTextStream stream(&file);
    QString data = stream.readAll();
    QScriptValue ret = PluginLoader::evaluateInNamespace(scriptEngine, shortname, data, path);

    if (scriptEngine->hasUncaughtException())
    {
        QMessageBox::critical(0, "Script error", QString("Script threw an uncaught exception while including file: ") + scriptEngine->uncaughtException().toString() + "\nLine number: " + QString::number(scriptEngine->uncaughtExceptionLineNumber()));
        qDebug() << scriptEngine->uncaughtExceptionBacktrace();
    }
    return ret;
}
static QScriptValue loadQtBindings(QScriptContext *context, QScriptEngine *scriptEngine)
{
    if (context->argumentCount() < 1)
    {
        return scriptEngine->undefinedValue();
    }
    for(int i = 0; i < context->argumentCount(); i++)
    {
        scriptEngine->importExtension(context->argument(i).toString());
    }
    return scriptEngine->undefinedValue();
}

static QScriptValue loadUiFile(QScriptContext *context, QScriptEngine *scriptEngine)
{
    if (context->argumentCount() < 1)
    {
        return scriptEngine->undefinedValue();
    }
    QString path = context->argument(0).toString();
    if(!path.contains("/") && !path.contains(QDir::separator()))
    {
        //Path is relative
        QScriptContextInfo info(context->parentContext());
        QFileInfo fileinfo(info.fileName());
        path = fileinfo.absolutePath() + QDir::separator() + context->argument(0).toString();
    }

    QUiLoader loader;
    QFile file(path);
    file.open(QFile::ReadOnly);
    QWidget* settingsWidget = loader.load(&file, NULL);
    file.close();
    QScriptValue ret = scriptEngine->newQObject(settingsWidget);
    return ret;
}
static QScriptValue encrypt(QScriptContext *context, QScriptEngine *scriptEngine)
{
    if (context->argumentCount() < 1)
    {
        return scriptEngine->undefinedValue();
    }
    QString s = context->argument(0).toString();
    QScriptValue ret = QScriptValue(scriptEngine, Security::encrypt(s));
    return ret;
}

static QScriptValue decrypt(QScriptContext *context, QScriptEngine *scriptEngine)
{
    if (context->argumentCount() < 1)
    {
        return scriptEngine->undefinedValue();
    }
    QString s = context->argument(0).toString();
    QScriptValue ret = QScriptValue(scriptEngine, Security::decrypt(s));
    return ret;
}
static QScriptValue alert(QScriptContext *context, QScriptEngine *scriptEngine)
{
    if (context->argumentCount() < 1)
    {
        return scriptEngine->undefinedValue();
    }
    QString message = context->argument(0).toString();
    QMessageBox::critical(NULL, "Alert", message);
    return scriptEngine->undefinedValue();
}
static QScriptValue getOSName(QScriptContext *context, QScriptEngine *scriptEngine)
{
    QScriptValue ret = QScriptValue(scriptEngine, QString(OPERATING_SYSTEM));
    return ret;
}
static QScriptValue getOSShortname(QScriptContext *context, QScriptEngine *scriptEngine)
{
    QScriptValue ret = QScriptValue(scriptEngine, QString(OS_SHORTNAME));
    return ret;
}
