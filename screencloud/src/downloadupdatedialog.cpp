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

#include "downloadupdatedialog.h"
#include "ui_downloadupdatedialog.h"

DownloadUpdateDialog::DownloadUpdateDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DownloadUpdateDialog)
{
    ui->setupUi(this);
    ftp = new QFtp(this);
    connect(ftp, SIGNAL(commandFinished(int, bool)),this, SLOT(ftpCommandFinished(int, bool)) );
    connect(ftp, SIGNAL(listInfo(const QUrlInfo &)),this, SLOT(ftpListInfo(const QUrlInfo &)));
    connect(ftp, SIGNAL(dataTransferProgress(qint64, qint64) ),this, SLOT(updateDataTransferProgress(qint64, qint64)));

    connect(ui->button_install, SIGNAL(pressed()), this, SLOT(launchInstaller()));
    setupUi();
}

DownloadUpdateDialog::~DownloadUpdateDialog()
{
    delete ui;
}
void DownloadUpdateDialog::setupUi()
{
    ui->button_install->setEnabled(false);
}
void DownloadUpdateDialog::startDownload(QString version)
{
#ifdef Q_OS_WIN
    tmpFile = new QFile(QDir::tempPath() + "/" + "ScreenCloud-" + version + ".msi", this);
    tmpFile->open(QIODevice::WriteOnly);
    qDebug() << "Saving installer to " << tmpFile->fileName();
    id_connect = ftp->connectToHost("ftp.screencloud.net", 21);
    id_login = ftp->login();
    id_cd_folder = ftp->cd(UPDATE_CHANNEL);
    id_cd_version = ftp->cd(version); //Every version has a folder on the ftp server
    id_get = ftp->get("ScreenCloud-" + version + "-" + QString(ARCH) + ".msi", tmpFile);
    qDebug() << "Downloading " << "ScreenCloud-" + version + "-" + QString(ARCH) + ".msi" << "...";
#endif
}
void DownloadUpdateDialog::displayErrorMessage(QString error)
{
    qDebug() << error;
    QMessageBox::critical(this, "Failed to download update", error);
    this->close();
}
void DownloadUpdateDialog::downloadFinished()
{
    id_close = ftp->close();
    tmpFile->flush();
    tmpFile->close();
    qDebug() << "Successfully downloaded";
    ui->button_install->setEnabled(true);
    ui->button_install->setDefault(true);
}

void DownloadUpdateDialog::ftpCommandFinished(int id, bool error)
{
    if(id == id_connect) //CONNECT
    {
        if(error)
        {
            id_close = ftp->close();
            displayErrorMessage("Failed to connect to update server");
            return;
        }

    }else if(id == id_login) //LOGIN
    {
        if(error)
        {
            id_close = ftp->close();
            displayErrorMessage("Failed to login");
            return;
        }

    }else if(id == id_cd_folder) //CD
    {
        if(error)
        {
            id_close = ftp->close();
            displayErrorMessage("Failed to find update channel: " + QString(UPDATE_CHANNEL));
        }
    }else if(id == id_cd_version)
    {
        if(error)
        {
            id_close = ftp->close();
            displayErrorMessage("Failed to find update version. Please try again later");
        }
    }else if(id == id_get) //GET
    {
        if(!error)
        {
            downloadFinished();
        }else
        {
            //ERROR
            id_close = ftp->close();
            displayErrorMessage("Failed to download update, please try again later");

        }

    }else if(id == id_close) //CLOSE
    {
        if(error)
        {
            delete tmpFile;
            displayErrorMessage("Failed to close FTP connection");
        }
    }else
    {
        qDebug() << "Error on command " << id;
        displayErrorMessage("Error on ftp command " + QString::number(id));
    }
}

void DownloadUpdateDialog::ftpListInfo(const QUrlInfo &i)
{
}

void DownloadUpdateDialog::updateDataTransferProgress(qint64 done, qint64 total)
{
    ui->progress_download->setMaximum(100);
    ui->progress_download->setValue((int)((done * 100) / total));
    QString doneString = QString::number(done / 1000) + "K";
    QString totalString = QString::number(total /1000) + "K";
    ui->label_progress->setText(doneString + "/" + totalString);
}

void DownloadUpdateDialog::launchInstaller()
{
    QProcess* process = new QProcess();
    QString program = "msiexec /i " + QDir::toNativeSeparators(tmpFile->fileName()) + " /qr";
    qDebug() << "Starting new process: " << program;
    process->start(program);
    QCoreApplication::exit(0);
}





