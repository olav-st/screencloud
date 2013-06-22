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
#include <QDebug>
#include <quazip/quazipfile.h>
#include <quazip/quazip.h>
#include <plugin/pluginloader.h>

PluginInstaller::PluginInstaller(QObject *parent) :
    QObject(parent)
{
    ftp = new QFtp(this);
    connect(ftp, SIGNAL(commandFinished(int, bool)),this, SLOT(ftpCommandFinished(int, bool)) );
    connect(ftp, SIGNAL(dataTransferProgress(qint64, qint64) ),this, SLOT(updateDataTransferProgress(qint64, qint64)));
    installing = false;
}

void PluginInstaller::installPlugin(QString s)
{
    qDebug() << "Downloading archive for plugin:" << s << "...";
    shortname = s;
    installing = true;
    id_connect = ftp->connectToHost("ftp.screencloud.net", 21);
    id_login = ftp->login();
    id_cd = ftp->cd("plugins/" + shortname);
    tmpFile = new QFile(QDir::tempPath() + QDir::separator() + shortname + "-current.zip");
    tmpFile->open(QFile::WriteOnly);
    id_get = ftp->get("current.zip", tmpFile, QFtp::Binary);
}

void PluginInstaller::extractPlugin(QString s)
{
    qDebug() << "Exctracting plugin archive...";
    shortname = s;
    //Create the dir
    QDir d;
    d.mkdir(PluginLoader::pluginPath() + shortname);
    //Extract the contents of the zip file
    QuaZip zip(QDir::tempPath() + QDir::separator() + shortname + "-current.zip");
    if(zip.open(QuaZip::mdUnzip))
    {
        QuaZipFile file(&zip);
        for(bool f=zip.goToFirstFile(); f; f=zip.goToNextFile()) {
            QFile exFile(PluginLoader::pluginPath() + shortname + QDir::separator() + file.getActualFileName());
            exFile.open(QFile::WriteOnly);
            file.open(QuaZipFile::ReadOnly);
            QByteArray data= file.readAll();
            exFile.write(data);
            exFile.close();
            file.close();
        }
        zip.close();
    }
    installing = false;
    emit pluginInstalled(shortname);

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
    return shortname;
}

void PluginInstaller::ftpCommandFinished(int id, bool error)
{
    if(id == id_connect)
    {
        if(error)
        {
            id_close = ftp->close();
            installing = false;
            QMessageBox::warning(NULL, "FTP error while downloading plugin" ,"Failed to connect to plugin server");
            return;
        }

    }else if(id == id_login)
    {
        if(error)
        {
            id_close = ftp->close();
            installing = false;
            QMessageBox::warning(NULL, "FTP error while downloading plugin" ,"Failed to login");
            return;
        }

    }else if(id == id_cd) //CD
    {
        if(error)
        {
            id_close = ftp->close();
            installing = false;
            QMessageBox::warning(NULL, "FTP error while downloading plugin" ,"Failed to find plugin on server");
        }
    }else if(id == id_get) //GET
    {
        if(!error)
        {
            tmpFile->close();
            id_close = ftp->close();
            extractPlugin(shortname);
        }else
        {
            //ERROR
            id_close = ftp->close();
            tmpFile->close();
            installing = false;
            QMessageBox::warning(NULL, "FTP error while downloading plugin" ,"Failed to download plugin, please try again later");

        }

    }else if(id == id_close) //CLOSE
    {
        if(error)
        {
            delete tmpFile;
            installing = false;
            QMessageBox::warning(NULL, "FTP error while downloading plugin" ,"Failed to close FTP connection");
        }
    }else
    {
        qDebug() << "Error on command " << id;
        installing = false;
        QMessageBox::warning(NULL, "FTP error while downloading plugin" ,"Error on ftp command " + QString::number(id));
    }
}

void PluginInstaller::updateDataTransferProgress(qint64 done, qint64 total)
{
    int percentDone = ((double)done/total) * 100;
    if(percentDone % 25 == 0)
    {
        qDebug() << QString::number(percentDone) + "%";
    }
}
