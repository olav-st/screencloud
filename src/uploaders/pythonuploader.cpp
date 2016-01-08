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

#include "pythonuploader.h"

PythonUploader::PythonUploader(QString name, QString shortname, QString className, QString iconFilename, QObject *parent) :
    Uploader(parent)
{
    this->workingDir = PluginManager::pluginPath() + QDir::separator() + shortname;
    this->shortname = shortname;
    this->name = name;
    this->className = className;
    this->filename = QString();
    QFile iconFile(workingDir + QDir::separator() + iconFilename);
    if(iconFile.exists())
    {
        this->icon = QIcon(iconFile.fileName());
    }
    QFile mainScriptFile(workingDir + QDir::separator() + "main.py");
    if(!mainScriptFile.exists())
    {
        QMessageBox::critical(0, tr("Error"), tr("Failed to load plugin \"") + shortname + tr("\". Script file \"main.py\" does not exist."));
        return;
    }
    if (!mainScriptFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
      QMessageBox::critical(0, tr("Error"), tr("Failed to load plugin \"") + shortname + tr("\". File main.py exists, but is not readable."));
      return;
    }
    hadPythonErr = false;
    connect(PythonQt::self(), SIGNAL(pythonStdErr(QString)), this, SLOT(pythonError(QString)));
    PythonQt::self()->addSysPath(workingDir + QDir::separator() + "modules");
    moduleObj = PythonQt::self()->createModuleFromScript(shortname + "_uploader");
    moduleObj.addVariable("workingDir", workingDir);
    moduleObj.evalScript(QString(mainScriptFile.readAll()));
    if(hadPythonErr)
    {
        PythonQt::self()->handleError();
        WARNING(tr("Error while parsing script file ") + mainScriptFile.fileName());
        QMessageBox::critical(NULL, tr("Script error in plugin '") + shortname + "'", tr("Error in file: ") + mainScriptFile.fileName() + "\n" + lastPythonErr);
        lastPythonErr.clear();
        hadPythonErr = false;
    }
    pythonContext = PythonQt::self()->getMainModule();
    pythonContext.evalScript("from " + shortname + "_uploader import " + className);
    pythonContext.evalScript(shortname + "_u = " + className + "()");
    disconnect(PythonQt::self(), SIGNAL(pythonStdErr(QString)), this, SLOT(pythonError(QString)));
}

PythonUploader::~PythonUploader()
{
    pythonContext.removeVariable(shortname + "_u = ");
}

void PythonUploader::upload(const QImage &screenshot, QString name)
{
    connect(PythonQt::self(), SIGNAL(pythonStdErr(QString)), this, SLOT(pythonError(QString)));
    QVariantList args;
    args << screenshot;
    args << name;
    QVariant result = pythonContext.call(shortname + "_u.upload", args);
    if(hadPythonErr)
    {
        PythonQt::self()->handleError();
        WARNING(tr("Failed to call upload() in ") + this->className);
        Q_EMIT uploadingError(tr("Failed to call ") + this->className + ".upload()" + "\n" + lastPythonErr);
        lastPythonErr.clear();
        hadPythonErr = false;
        disconnect(PythonQt::self(), SIGNAL(pythonStdErr(QString)), this, SLOT(pythonError(QString)));
        return;
    }
    bool success = result.toBool();
    if(success)
    {
        QString url = moduleObj.getVariable("ScreenCloud.clipboardUrl").toString();
        Q_EMIT uploadingFinished(url);
    }else
    {
        QString errorString = moduleObj.getVariable("ScreenCloud.uploadingError").toString();
        if(errorString.isEmpty())
        {
            errorString = tr("Unknown error");
        }
        Q_EMIT uploadingError(errorString);
    }
    //Clean up
    disconnect(PythonQt::self(), SIGNAL(pythonStdErr(QString)), this, SLOT(pythonError(QString)));
    moduleObj.evalScript("ScreenCloud.clipboardUrl = None");
    moduleObj.evalScript("ScreenCloud.uploadingError = None");
    Q_EMIT finished();
}

void PythonUploader::showSettingsUI(QWidget *parent)
{
    connect(PythonQt::self(), SIGNAL(pythonStdErr(QString)), this, SLOT(pythonError(QString)));
    pythonContext.addObject("parentWidget_", parent);
    pythonContext.evalScript(shortname + "_u.showSettingsUI(parentWidget_)");
    if(hadPythonErr)
    {
        PythonQt::self()->handleError();
        WARNING(tr("Failed to call showSettingsUI() in ") + this->className);
        QMessageBox::critical(NULL, tr("Script error in plugin '") + shortname + "'", tr("Failed to call ") + this->className + ".showSettingsUI()" + "\n" + lastPythonErr);
        lastPythonErr.clear();
        hadPythonErr = false;
    }
    disconnect(PythonQt::self(), SIGNAL(pythonStdErr(QString)), this, SLOT(pythonError(QString)));
}

bool PythonUploader::isConfigured()
{
    connect(PythonQt::self(), SIGNAL(pythonStdErr(QString)), this, SLOT(pythonError(QString)));
    QVariant result = pythonContext.call(shortname + "_u.isConfigured");
    if(hadPythonErr)
    {
        PythonQt::self()->handleError();
        WARNING(tr("Failed to call isConfigured() in ") + this->className);
        QMessageBox::critical(NULL, tr("Script error in plugin '") + shortname + "'", tr("Failed to call ") + this->className + ".isConfigured()" + "\n" + lastPythonErr);
        lastPythonErr.clear();
        hadPythonErr = false;
        disconnect(PythonQt::self(), SIGNAL(pythonStdErr(QString)), this, SLOT(pythonError(QString)));
        return false;
    }
    disconnect(PythonQt::self(), SIGNAL(pythonStdErr(QString)), this, SLOT(pythonError(QString)));
    return result.toBool();
}

QString PythonUploader::getFilename()
{
    connect(PythonQt::self(), SIGNAL(pythonStdErr(QString)), this, SLOT(pythonError(QString)));
    QVariant result = pythonContext.call(shortname + "_u.getFilename");
    if(hadPythonErr)
    {
        PythonQt::self()->handleError();
        WARNING(tr("Failed to call getFilename() in ") + this->className);
        QMessageBox::critical(NULL, tr("Script error in plugin '") + shortname + "'", tr("Failed to call ") + this->className + ".getFilename()" + "\n" + lastPythonErr);
        lastPythonErr.clear();
        hadPythonErr = false;
        disconnect(PythonQt::self(), SIGNAL(pythonStdErr(QString)), this, SLOT(pythonError(QString)));
        return QString();
    }
    disconnect(PythonQt::self(), SIGNAL(pythonStdErr(QString)), this, SLOT(pythonError(QString)));
    this->filename = result.toString();
    return filename;
}

void PythonUploader::pythonError(QString err)
{
    hadPythonErr = true;
    if(lastPythonErr.isEmpty())
    {
        lastPythonErr = err;
    }else
    {
        lastPythonErr.append(err);
    }
}
