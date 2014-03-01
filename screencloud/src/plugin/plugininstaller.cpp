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

#include "plugininstaller.h"
#include <QApplication>
#include <QFile>
#include <QDir>
#include <QMessageBox>
#include <utils/log.h>
#include <quazip/quazipfile.h>
#include <quazip/quazip.h>
#include <plugin/pluginloader.h>
#include <QProgressDialog>

PluginInstaller::PluginInstaller(QObject *parent) :
    QObject(parent)
{
    installing = false;
}

void PluginInstaller::installPlugin(QString url)
{
    INFO("[1/4] Downloading archive for plugin from: " + url + "...");
    installing = true;
    //Download the plugin archive from url
    QUrl zipUrl = checkUrlForRedirect(QUrl(url));
    emit installationProgress(1);
    QNetworkRequest request(zipUrl);
    connect(&netManager, SIGNAL(finished(QNetworkReply*)), SLOT(fileDownloaded(QNetworkReply*)));
    netManager.get(request);

}

void PluginInstaller::extractPlugin(QString zipFilename)
{
    //Create the dir
    QFileInfo tmpZipFileInfo(tmpFile->fileName());
    QString tmpExtractPath = QDir::tempPath() + QDir::separator() + tmpZipFileInfo.baseName();
    QDir d;
    d.mkdir(tmpExtractPath);
    //Extract the contents of the zip file
    INFO("[3/4] Exctracting plugin archive " + zipFilename + " to " + tmpExtractPath);
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
    }
    if(!d.remove(zipFilename))
    {
        WARNING("Failed to remove tmp zip file " + zipFilename);
    }
    emit installationProgress(3);
    analyzeAndMovePlugin(tmpExtractPath);
}

void PluginInstaller::analyzeAndMovePlugin(QString exctractedDirPath)
{
    //Search for the main.js file in the exctracted directories. That's probably where the plugin files are
    QString mainFilePath = "";
    QDirIterator dirIt(exctractedDirPath,QDirIterator::Subdirectories);
    while (dirIt.hasNext()) {
        dirIt.next();
        if (QFileInfo(dirIt.filePath()).isFile())
            if (QFileInfo(dirIt.filePath()).fileName() == "main.js")
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
            INFO("Failed to parse XML:" + xmlFile.fileName());
        }
        QDomElement docElem = doc.documentElement();
        QString shortname = docElem.firstChildElement("shortname").text();
        //Copy the plugin from the temporary directory to the plugin dir
        INFO("[4/4] Moving " + mainFileInfo.absoluteDir().absolutePath() + " to plugin dir");
        QDir dir;
        if(!copyFolder(mainFileInfo.absoluteDir().absolutePath() + "/", PluginLoader::pluginPath() + shortname + "/"))
        {
            WARNING("Failed to move " + mainFileInfo.absoluteDir().absolutePath() + " to " + PluginLoader::pluginPath() + shortname);
            emit installationError("Failed to move " + mainFileInfo.absoluteDir().absolutePath() + " to " + PluginLoader::pluginPath() + shortname);
        }
        if(!removeDir(mainFileInfo.absoluteDir().absolutePath()))
        {
            WARNING("Failed to remove tmp dir " + mainFileInfo.absoluteDir().absolutePath());
        }
        emit installationProgress(4);
        emit pluginInstalled(shortname);
    }else
    {
        WARNING("Could not find main.js in " + exctractedDirPath);
        emit installationError("Could not find main.js in " + exctractedDirPath);
    }
}

bool PluginInstaller::uninstallPlugin(QString s)
{
    QDir d;
    return removeDir(PluginLoader::pluginPath() + s);
}

bool PluginInstaller::removeDir(const QString &dirName)
{
    bool result;
       QDir dir(dirName);

       if (dir.exists(dirName)) {
           Q_FOREACH(QFileInfo info, dir.entryInfoList(QDir::NoDotAndDotDot | QDir::System | QDir::Hidden  | QDir::AllDirs | QDir::Files, QDir::DirsFirst)) {
               if (info.isDir()) {
                   result = removeDir(info.absoluteFilePath());
               }
               else {
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

bool PluginInstaller::isInstalling()
{
    return installing;
}

QString PluginInstaller::getShortname()
{
    //return shortname;
}

QUrl PluginInstaller::checkUrlForRedirect(QUrl checkUrl)
{
    QNetworkRequest request;
    request.setUrl(checkUrl);
    QNetworkReply *reply = netManager.head(request);
    reply->ignoreSslErrors();
    QEventLoop checkLoop;
    connect(reply, SIGNAL(finished()), &checkLoop, SLOT(quit()));
    checkLoop.exec();
    //Check status code
    if (reply->error() == QNetworkReply::NoError) {
        int statusCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
        if(statusCode == 301 || statusCode == 302) {
            QUrl redirectUrl = reply->attribute(QNetworkRequest::RedirectionTargetAttribute).toUrl();
            INFO(checkUrl.toString() + " redirects to " + redirectUrl.toString());
            return redirectUrl;
        }else {
            return checkUrl;
        }
    }else
    {
        return checkUrl;
    }
}

bool PluginInstaller::copyFolder(QString sourceFolder, QString destFolder)
{
    QDir sourceDir(sourceFolder);
    if(!sourceDir.exists())
        return false;
    QDir destDir(destFolder);
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

void PluginInstaller::fileDownloaded(QNetworkReply *reply)
{
    if(reply->error() == QNetworkReply::NoError && reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt() == 200)
    {
        QFileInfo urlFileInfo = QFileInfo(reply->request().url().path());
        tmpFile = new QFile(QDir::tempPath() + QDir::separator() + urlFileInfo.baseName() + "-current.zip");
        tmpFile->open(QFile::WriteOnly);
        tmpFile->write(reply->readAll());
        tmpFile->close();
        INFO("[2/4] File " + tmpFile->fileName() + " downloaded.");
        emit installationProgress(2);
        this->extractPlugin(tmpFile->fileName());
    }
    disconnect(&netManager, SIGNAL(finished(QNetworkReply*)));
}
