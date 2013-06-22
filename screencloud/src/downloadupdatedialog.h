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

#ifndef DOWNLOADUPDATEDIALOG_H
#define DOWNLOADUPDATEDIALOG_H

#include <QDialog>
#include <QFtp>
#include <QFile>
#include <QDebug>
#include <QDir>
#include <QProcess>
#include <QMessageBox>
#include <QCoreApplication>
#include "utils/arch.h"

namespace Ui {
    class DownloadUpdateDialog;
}

class DownloadUpdateDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DownloadUpdateDialog(QWidget *parent = 0);
    ~DownloadUpdateDialog();
    void setupUi();
    void startDownload(QString version);
    void displayErrorMessage(QString error);
    void downloadFinished();
private:
    Ui::DownloadUpdateDialog *ui;
    QFtp* ftp;
    QFile* tmpFile;
    int id_connect,id_login, id_cd_folder, id_cd_version, id_get, id_close;

private slots:
    void ftpCommandFinished(int id, bool error);
    void ftpListInfo(const QUrlInfo & i );
    void updateDataTransferProgress(qint64 done, qint64 total);
    void launchInstaller();
};

#endif // DOWNLOADUPDATEDIALOG_H
