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

#include "scripteduploader.h"
#include <QDir>
#include <QApplication>
#include <QMessageBox>
#include <QFile>
#include <QSettings>
#include <QDebug>
#include <QVariant>
#include <plugin/pluginloader.h>

ScriptedUploader::ScriptedUploader(QScriptEngine *engine, QString name, QString shortname, QString iconFilename, QObject *parent) :
    Uploader(parent)
{
    scriptEngine = engine;
    context = scriptEngine->pushContext();
    this->workingDir = PluginLoader::pluginPath() + shortname;
    this->shortname = shortname;
    this->name = name;
    QFile iconFile(workingDir + QDir::separator() + iconFilename);
    if(iconFile.exists())
    {
        this->icon = QIcon(iconFile.fileName());
    }
    //Global script variables
    context->activationObject().setProperty("workingDir", this->workingDir);
    context->activationObject().setProperty("shortname", this->shortname);
    evaluateInNamespace(engine, shortname, "settings = new QSettings(\"screencloud\", \"ScreenCloud\");");
    //Set the ScreenCloud object
    QScriptValue thisObj = engine->newQObject(this);
    QScriptValue scObj = engine->newObject();
    scObj.setProperty("finished", thisObj.property("uploadingFinished"));
    scObj.setProperty("error", thisObj.property("uploadingError"));
    scObj.setProperty("setFilename", thisObj.property("setFilename"));
    scObj.setProperty("getFilename", thisObj.property("getFilename"));
    scObj.setProperty("setConfigured", thisObj.property("setConfigured"));
    scObj.setProperty("getConsumerKey", thisObj.property("getConsumerKey"));
    scObj.setProperty("getConsumerSecret", thisObj.property("getConsumerSecret"));
    scObj.setProperty("getApiKey", thisObj.property("getApiKey"));
    context->activationObject().setProperty("ScreenCloud", scObj);

    //Load the main script file
    QFile mainScriptFile(workingDir + QDir::separator() + "main.js");
    if(!mainScriptFile.exists())
    {
        QMessageBox::critical(0, "Error", "Failed to load plugin \"" + workingDir + "\". Script file \"main.js\" does not exist.");
        return;
    }
    if (!mainScriptFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
      QMessageBox::critical(0, "Error", "Failed to load plugin \"" + workingDir + "\". File main.js exists, but is not readable.");
      return;
    }
    QString program = mainScriptFile.readAll();
    //Check the code
    if (!scriptEngine->canEvaluate(program) )
    {
        QMessageBox::critical(0, "Error", "Failed to load plugin \"" + workingDir + "\". File main.js can not be evaluated.");
        return;
    }
    // actually do the eval:
    evaluateInNamespace(scriptEngine, shortname, program);
    if (scriptEngine->hasUncaughtException())
    {
        QScriptValue exception = scriptEngine->uncaughtException();
        QMessageBox::critical(0, "Script error", QString("Script \"" + workingDir + "/main.js\"" + " threw an uncaught exception: ") + exception.toString() + "\nLine number: " + QString::number(scriptEngine->uncaughtExceptionLineNumber()));
        qDebug() << scriptEngine->uncaughtExceptionBacktrace();
        return;
    }
    //Now that the code is evaluated, we try to call the init function to get the plugin name and set other options.
    QScriptValue initFunc = evaluateInNamespace(scriptEngine, shortname, "init");

    if (scriptEngine->hasUncaughtException())
    {
        QScriptValue exception = scriptEngine->uncaughtException();
        QMessageBox::critical(0, "Script error", QString("Script threw an uncaught exception while looking for init function: ") + exception.toString() + "\nLine number: " + QString::number(scriptEngine->uncaughtExceptionLineNumber()));
        qDebug() << scriptEngine->uncaughtExceptionBacktrace();
        return;
    }
    if (!initFunc.isFunction())
    {
        QMessageBox::critical(0, "Script Error", "init is not a function!");
    }

    initFunc.call();

    if (scriptEngine->hasUncaughtException())
    {
        QScriptValue exception = scriptEngine->uncaughtException();
        QMessageBox::critical(0, "Script error", QString("Script threw an uncaught exception while looking for init function: ") + exception.toString() + "\nLine number: " + QString::number(scriptEngine->uncaughtExceptionLineNumber()));
        qDebug() << scriptEngine->uncaughtExceptionBacktrace();
        return;
    }
    loadSettings(); //call the loadSettings function to make sure that for instance isConfigured is set properly
}
ScriptedUploader::~ScriptedUploader()
{

    scriptEngine->collectGarbage();
}

void ScriptedUploader::loadSettings()
{
    QScriptValue loadSettingsFunc = evaluateInNamespace(scriptEngine, shortname, "loadSettings");

    if (scriptEngine->hasUncaughtException())
    {
        QScriptValue exception = scriptEngine->uncaughtException();
        QMessageBox::critical(0, "Script error", QString("Script threw an uncaught exception while looking for loadSettings function: ") + exception.toString() + "\nLine number: " + QString::number(scriptEngine->uncaughtExceptionLineNumber()));
        qDebug() << scriptEngine->uncaughtExceptionBacktrace();
        return;
    }
    if (!loadSettingsFunc.isFunction())
    {
        QMessageBox::critical(0, "Script Error", "loadSettings is not a function!");
    }

    loadSettingsFunc.call();

    if (scriptEngine->hasUncaughtException())
    {
        QScriptValue exception = scriptEngine->uncaughtException();
        QMessageBox::critical(0, "Script error", QString("Script threw an uncaught exception while looking for saveSettings function: ") + exception.toString() + "\nLine number: " + QString::number(scriptEngine->uncaughtExceptionLineNumber()));
        qDebug() << scriptEngine->uncaughtExceptionBacktrace();
        return;
    }
}

void ScriptedUploader::saveSettings()
{
    QScriptValue saveSettingsFunc = evaluateInNamespace(scriptEngine, shortname, "saveSettings");

    if (scriptEngine->hasUncaughtException())
    {
        QScriptValue exception = scriptEngine->uncaughtException();
        QMessageBox::critical(0, "Script error", QString("Script threw an uncaught exception while looking for saveSettings function: ") + exception.toString() + "\nLine number: " + QString::number(scriptEngine->uncaughtExceptionLineNumber()));
        qDebug() << scriptEngine->uncaughtExceptionBacktrace();
        return;
    }
    if (!saveSettingsFunc.isFunction())
    {
        QMessageBox::critical(0, "Script Error", "loadSettings is not a function!");
    }

    saveSettingsFunc.call();

    if (scriptEngine->hasUncaughtException())
    {
        QScriptValue exception = scriptEngine->uncaughtException();
        QMessageBox::critical(0, "Script error", QString("Script threw an uncaught exception while looking for saveSettings function: ") + exception.toString() + "\nLine number: " + QString::number(scriptEngine->uncaughtExceptionLineNumber()));
        qDebug() << scriptEngine->uncaughtExceptionBacktrace();
        return;
    }
}

void ScriptedUploader::upload(QImage *screenshot)
{
    QScriptValue uploadFunc = evaluateInNamespace(scriptEngine, shortname, "upload");

    if (scriptEngine->hasUncaughtException())
    {
        QScriptValue exception = scriptEngine->uncaughtException();
        QMessageBox::critical(0, "Script error", QString("Script threw an uncaught exception while looking for upload function: ") + exception.toString() + "\nLine number: " + QString::number(scriptEngine->uncaughtExceptionLineNumber()));
        qDebug() << scriptEngine->uncaughtExceptionBacktrace();
        return;
    }
    if (!uploadFunc.isFunction())
    {
        QMessageBox::critical(0, "Script Error", "upload is not a function!");
    }
    QMessageBox msgBox;
    QImage& screenshotRef = *screenshot;
    msgBox.setText("I was shown from da script");
    QScriptValue screenshotParam = scriptEngine->newVariant(QVariant(screenshotRef));
    uploadFunc.call(QScriptValue(), QScriptValueList() << screenshotParam );

    if (scriptEngine->hasUncaughtException())
    {
        QScriptValue exception = scriptEngine->uncaughtException();
        QMessageBox::critical(0, "Script error", QString("Script threw an uncaught exception while looking for upload function: ") + exception.toString() + "\nLine number: " + QString::number(scriptEngine->uncaughtExceptionLineNumber()));
        qDebug() << scriptEngine->uncaughtExceptionBacktrace();
        return;
    }
    scriptEngine->collectGarbage();
}

void ScriptedUploader::setupSettingsUi()
{
    //This is called by the openSettingsDialog function
}

void ScriptedUploader::openSettingsDialog(QWidget *parent)
{
    QScriptValue setupSettingsUiFunc = evaluateInNamespace(scriptEngine, shortname, "setupSettingsUi");
    if (scriptEngine->hasUncaughtException())
    {
        QScriptValue exception = scriptEngine->uncaughtException();
        QMessageBox::critical(0, "Script error", QString("Script threw an uncaught exception while looking for saveSettings function: ") + exception.toString() + "\nLine number: " + QString::number(scriptEngine->uncaughtExceptionLineNumber()));
        qDebug() << scriptEngine->uncaughtExceptionBacktrace();
        return;
    }
    if (!setupSettingsUiFunc.isFunction())
    {
        QMessageBox::critical(0, "Script Error", "setupSettingsUi is not a function!");
    }
    QScriptValue parentParam = scriptEngine->newQObject(parent);
    setupSettingsUiFunc.call(QScriptValue(), QScriptValueList() << parentParam);

    if (scriptEngine->hasUncaughtException())
    {
        QScriptValue exception = scriptEngine->uncaughtException();
        QMessageBox::critical(0, "Script error", QString("Script threw an uncaught exception while looking for setupSettingsUi function: ") + exception.toString() + "\nLine number: " + QString::number(scriptEngine->uncaughtExceptionLineNumber()));
        qDebug() << scriptEngine->uncaughtExceptionBacktrace();
        return;
    }
}

bool ScriptedUploader::isConfigured()
{
    return this->configured;
}

void ScriptedUploader::setFilename(QString newName)
{
    filename = newName;
}

QString ScriptedUploader::getFilename()
{
    return filename;
}

QString ScriptedUploader::getConsumerKey(QString service)
{
    if(service == "imgur")
    {
        return CONSUMER_KEY_IMGUR;
    }else if(service == "dropbox")
    {
        return CONSUMER_KEY_DROPBOX;
    }
    return "";
}

QString ScriptedUploader::getConsumerSecret(QString service)
{
    if(service == "imgur")
    {
        return CONSUMER_SECRET_IMGUR;
    }else if(service == "dropbox")
    {
        return CONSUMER_SECRET_DROPBOX;
    }
    return "";
}
QString ScriptedUploader::getApiKey(QString service)
{
    if(service == "imgur")
    {
        return API_KEY_IMGUR;
    }
    return "";
}

QScriptValue ScriptedUploader::evaluateInNamespace(QScriptEngine *engine, QString space, QString code)
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
        QScriptValue result = engine->evaluate( code, workingDir + QDir::separator() + "main.js");
        engine->popContext();
        return result;
    }
    return result;
}

void ScriptedUploader::setConfigured(bool configured)
{
    this->configured = configured;
}


