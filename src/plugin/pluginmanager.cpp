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

#include <plugin/pluginmanager.h>
#include <QDir>
#include <QDirIterator>
#include <utils/log.h>
#include <QApplication>
#include <QMessageBox>
#include <QtXml>
#include <QNetworkAccessManager>
#include <QNetworkRequest>

/* This class finds and loads plugins. Before executing them, it adds all the global functions to the script engine */

PluginManager::PluginManager(QObject *parent) :
    QObject(parent)
{
    connect(&netManager, SIGNAL(finished(QNetworkReply*)), SLOT(fileDownloaded(QNetworkReply*)));
}

PluginManager::~PluginManager()
{
    disconnect(PythonQt::self(), SIGNAL(pythonStdOut(QString)), this, SLOT(pythonStdOut(QString)));
    disconnect(PythonQt::self(), SIGNAL(pythonStdErr(QString)), this, SLOT(pythonStdErr(QString)));
}

void PluginManager::loadPlugins()
{
    int pluginsFound = 0;
    //Search the plugin path for subdirectories. Each subdirectory should contain a plugin
    QDir pluginDir(pluginPath());
    QDirIterator subdirIterator(pluginPath(), QDir::Dirs | QDir::NoSymLinks | QDir::NoDotAndDotDot, QDirIterator::Subdirectories);

   while(subdirIterator.hasNext()){
       subdirIterator.next();
       QFile mainFile(subdirIterator.filePath() + QDir::separator() + "main.py");
       if(mainFile.exists())
       {
           //The main.py file exists, this is probably a plugin dir
           //Load the metadata xml file
           QFile xmlFile(subdirIterator.filePath() + QDir::separator() + "metadata.xml");
           if(xmlFile.open(QFile::ReadOnly))
           {
               QString xmlString = xmlFile.readAll();
               xmlFile.close();
               QDomDocument doc("metadata");
               if(!doc.setContent(xmlString))
               {
                   WARNING(tr("Failed to parse XML:") + xmlFile.fileName());
               }
               QDomElement docElem = doc.documentElement();
               QString name = docElem.firstChildElement("name").text();
               QString shortname = docElem.firstChildElement("shortname").text();
               QString className = docElem.firstChildElement("className").text();
               QString iconFilename = docElem.firstChildElement("icon").text();
               //Create a PythonUploader for this plugin and add it to the list of available plugins
               PythonUploader *l = new PythonUploader(name, shortname, className, iconFilename, NULL);
               uploaderPlugins.insert(shortname, l);
               pluginsFound++;
           }else
           {
               WARNING(QObject::tr("File ") + mainFile.fileName() + QObject::tr(" exists, but unable to open ") + xmlFile.fileName() + "!");
           }
       }
   }
   INFO(tr("Loaded ") + QString::number(pluginsFound) + tr(" plugin(s)"));
}

void PluginManager::unloadPlugins()
{
    int pluginsUnloaded = 0;
    QHash<QString, Uploader*>::iterator it =  uploaderPlugins.begin();
    while(it != uploaderPlugins.end())
    {
        if(*it == NULL)
        {
            WARNING("*it == NULL");
        }
        PythonUploader* uploader = qobject_cast<PythonUploader*>(*it);
        if(uploader)
        {
            //INFO("Unloaded plugin " + uploader->getName());
            delete uploader;
            //uploaderPlugins.erase(it);
            pluginsUnloaded ++;
        }else
        {
            WARNING(tr("Casting failed"));
        }
        ++it;
    }
    uploaderPlugins.clear();
    INFO(tr("Unloaded ") + QString::number(pluginsUnloaded) + tr(" plugin(s)"));
}

void PluginManager::reloadPlugins()
{
    unloadPlugins();
    loadPlugins();
}

void PluginManager::initStdinHandler()
{
    PythonQt::self()->setRedirectStdInCallback(pythonQtInputCallback, &lastPythonStdOut);
    PythonQt::self()->setRedirectStdInCallbackEnabled(true);
    connect(PythonQt::self(), SIGNAL(pythonStdOut(QString)), this, SLOT(pythonStdOut(QString)));
    connect(PythonQt::self(), SIGNAL(pythonStdErr(QString)), this, SLOT(pythonStdErr(QString)));
}

bool PluginManager::isLoaded(QString shortname)
{
    int num = uploaderPlugins.count(shortname);
    return (num > 0);
}

bool PluginManager::isInstalled(QString shortname)
{
    QDir d(pluginPath() + QDir::separator() + shortname);
    return d.exists();
}

QString PluginManager::installedVersion(QString shortname)
{
    QFile metadataFile(pluginPath() + QDir::separator() + shortname + QDir::separator() + "metadata.xml");
    if(metadataFile.open(QIODevice::ReadOnly))
    {
        QString xmlString = metadataFile.readAll();
        metadataFile.close();
        QDomDocument xmlDoc("metadata");
        if(xmlDoc.setContent(xmlString))
        {
            QDomElement docElem = xmlDoc.documentElement();
            QDomElement versionElem = docElem.firstChildElement("version");
            return versionElem.text();
        }
    }else
    {
        WARNING(QObject::tr("Failed to get version info for plugin '") + shortname + QObject::tr("'. Unable to open ") + metadataFile.fileName());
    }
    return QString();
}

int PluginManager::countInstalledPlugins()
{
    int pluginsFound = 0;
    //Search the plugin path for subdirectories. Each subdirectory should contain a plugin
    QDirIterator subdirIterator(pluginPath(), QDir::Dirs | QDir::NoSymLinks | QDir::NoDotAndDotDot, QDirIterator::Subdirectories);

   while(subdirIterator.hasNext()){
       subdirIterator.next();
       QFile mainFile(subdirIterator.filePath() + QDir::separator() + "main.py");
       if(mainFile.exists())
       {
           pluginsFound ++;
       }
   }
   return pluginsFound;
}

QString PluginManager::pythonQtInputCallback(void *callData)
{
    QString* text = static_cast<QString*>(callData);
    QInputDialog d;
    if(text->isEmpty())
    {
        *text = "Input:";
    }
    d.setLabelText(*text);
    d.setWindowTitle(tr("Input Required"));
    d.setModal(false);
    d.show();
    d.raise();
    while(d.isVisible())
    {
        qApp->processEvents(QEventLoop::WaitForMoreEvents);
    }
    return d.textValue();
}
void PluginManager::installPlugins(QStringList &urls)
{
    currentProgress = 0;
    for(int i = 0; i < urls.size(); i++)
    {
        INFO(tr("[1/4] Downloading archive for plugin from: ") + urls.at(i) + "...");
        //Download the plugin archive from url
        QUrl zipUrl = NetworkUtils::checkUrlForRedirect(QUrl(urls.at(i)));
        QNetworkRequest request(zipUrl);
        netReplies.append(netManager.get(request));
        currentProgress += 1;
        Q_EMIT installationProgress(currentProgress);
        busy = true;
        while (busy) {
           qApp->processEvents(QEventLoop::WaitForMoreEvents);
        }
    }
}
bool PluginManager::uninstallPlugins(QStringList& shortnames)
{
    for(int i = 0; i < shortnames.size(); i++)
    {
        INFO(tr("Deleting ") + PluginManager::pluginPath() + QDir::separator() + shortnames.at(i));
        if(!removeDir(PluginManager::pluginPath() + QDir::separator() + shortnames.at(i)))
        {
            WARNING(tr("Failed to delete directory: ") + PluginManager::pluginPath() + QDir::separator() + shortnames.at(i));
        }
    }
    return true;
}

void PluginManager::cancelInstallation()
{
    INFO(tr("Canceling all requests"));
    busy = false;
    for(int i = 0; i < netReplies.count(); i++)
    {
        netReplies.at(i)->abort();
    }
    netReplies.clear();
    Q_EMIT installationCanceled();
}


void PluginManager::extractPlugin(QString zipFilename)
{
    //Create the dir
    QFileInfo tmpZipFileInfo(tmpFile->fileName());
    QString tmpExtractPath = QDir::tempPath() + QDir::separator() + tmpZipFileInfo.baseName();
    QDir d;
    d.mkdir(tmpExtractPath);
    //Extract the contents of the zip file
    INFO(tr("[3/4] Exctracting plugin archive ") + zipFilename + tr(" to ") + tmpExtractPath);
    QuaZip zip(zipFilename);
    if(zip.open(QuaZip::mdUnzip))
    {
        QuaZipFile file(&zip);
        for(bool f=zip.goToFirstFile(); f; f=zip.goToNextFile()) {
            QFile exFile(tmpExtractPath + QDir::separator() + file.getActualFileName());
            d.mkpath(QFileInfo(exFile.fileName()).absolutePath()); //Make sure that the directory exitst
            exFile.open(QFile::WriteOnly);
            file.open(QuaZipFile::ReadOnly);
            QByteArray data= file.readAll();
            exFile.write(data);
            exFile.close();
            file.close();
        }
        zip.close();
    }else
    {
        WARNING(tr("Failed to open zip file: ") + zipFilename);
        Q_EMIT installationError(tr("Failed to open zip file: ") + zipFilename);
    }
    if(!d.remove(zipFilename))
    {
        WARNING(tr("Failed to remove tmp zip file ") + zipFilename);
    }
    currentProgress += 1;
    Q_EMIT installationProgress(currentProgress);
    analyzeAndMovePlugin(tmpExtractPath);
}

void PluginManager::analyzeAndMovePlugin(QString exctractedDirPath)
{
    //Search for the main.py file in the exctracted directories. That's probably where the plugin files are
    QString mainFilePath = "";
    QDirIterator dirIt(exctractedDirPath,QDirIterator::Subdirectories);
    while (dirIt.hasNext()) {
        dirIt.next();
        if (QFileInfo(dirIt.filePath()).isFile())
            if (QFileInfo(dirIt.filePath()).fileName() == "main.py")
                mainFilePath = dirIt.filePath();
    }
    if(!mainFilePath.isEmpty())
    {
        QFileInfo mainFileInfo = QFileInfo(mainFilePath);
        //Load the metadata xml file
        QFile xmlFile(mainFileInfo.absoluteDir().absolutePath() + QDir::separator() + "metadata.xml");
        xmlFile.open(QFile::ReadOnly);
        QString xmlString = xmlFile.readAll();
        xmlFile.close();
        QDomDocument doc("metadata");
        if(!doc.setContent(xmlString))
        {
            INFO(tr("Failed to parse XML:") + xmlFile.fileName());
        }
        QDomElement docElem = doc.documentElement();
        QString shortname = docElem.firstChildElement("shortname").text();
        //Copy the plugin from the temporary directory to the plugin dir
        INFO(tr("[4/4] Moving ") + mainFileInfo.absoluteDir().absolutePath() + tr(" to plugin dir"));
        QDir dir;
        if(!copyFolder(mainFileInfo.absoluteDir().absolutePath() + "/", PluginManager::pluginPath() + QDir::separator() + shortname + "/"))
        {
            WARNING(tr("Failed to move ") + mainFileInfo.absoluteDir().absolutePath() + tr(" to ") + PluginManager::pluginPath() + QDir::separator() + shortname);
            Q_EMIT installationError(tr("Failed to move ") + mainFileInfo.absoluteDir().absolutePath() + tr(" to ") + PluginManager::pluginPath() + QDir::separator() + shortname);
        }
        if(!removeDir(mainFileInfo.absoluteDir().absolutePath()))
        {
            WARNING(tr("Failed to remove tmp dir ") + mainFileInfo.absoluteDir().absolutePath());
        }
        currentProgress += 1;
        Q_EMIT installationProgress(currentProgress);
        busy = false;
    }else
    {
        WARNING(tr("Could not find main.py in ") + exctractedDirPath);
        Q_EMIT installationError(tr("Could not find main.py in ") + exctractedDirPath);
    }
}

bool PluginManager::removeDir(const QString &dirName)
{
    bool result = true;
    QDir dir(dirName);

    if (dir.exists(dirName)) {
        Q_FOREACH(QFileInfo info, dir.entryInfoList(QDir::NoDotAndDotDot | QDir::System | QDir::Hidden  | QDir::AllDirs | QDir::Files, QDir::DirsFirst))
        {
            if (info.isDir()) {
                result = removeDir(info.absoluteFilePath());
            }
            else
            {
                result = QFile::remove(info.absoluteFilePath());
            }
            if (!result) {
                return result;
            }
        }
        result = dir.rmdir(dirName);
    }
    return result;
}

bool PluginManager::copyFolder(QString sourceFolder, QString destFolder)
{
    QDir sourceDir(sourceFolder);
    if(!sourceDir.exists())
        return false;
    QDir destDir(destFolder);
    if(destDir.exists())
    {
        removeDir(destDir.path());
    }
    if(!destDir.exists())
    {
        destDir.mkdir(destFolder);
    }
    QStringList files = sourceDir.entryList(QDir::Files);
    for(int i = 0; i< files.count(); i++)
    {
        QString srcName = sourceFolder + "/" + files[i];
        QString destName = destFolder + "/" + files[i];
        QFile::copy(srcName, destName);
    }
    files.clear();
    files = sourceDir.entryList(QDir::AllDirs | QDir::NoDotAndDotDot);
    for(int i = 0; i< files.count(); i++)
    {
        QString srcName = sourceFolder + "/" + files[i];
        QString destName = destFolder + "/" + files[i];
        copyFolder(srcName, destName);
    }
    return true;
}

int PluginManager::getCurrentProgress()
{
    return currentProgress;
}

void PluginManager::fileDownloaded(QNetworkReply *reply)
{
    if(reply->error() == QNetworkReply::NoError)
    {
        QFileInfo urlFileInfo = QFileInfo(reply->request().url().path());
        tmpFile = new QFile(QDir::tempPath() + QDir::separator() + urlFileInfo.baseName() + "-" + NetworkUtils::generateNonce(6) + ".zip"); //Add some randomness to the filename to make sure its unique
        tmpFile->open(QFile::WriteOnly);
        tmpFile->write(reply->readAll());
        tmpFile->close();
        INFO(tr("[2/4] File ") + tmpFile->fileName() + tr(" downloaded."));
        currentProgress += 1;
        Q_EMIT installationProgress(currentProgress);
        this->extractPlugin(tmpFile->fileName());
    }
    netReplies.removeOne(reply);
}

void PluginManager::pythonStdOut(QString out)
{
    lastPythonStdOut = out;
}

void PluginManager::pythonStdErr(QString err)
{
    lastPythonStdErr = err;
}
