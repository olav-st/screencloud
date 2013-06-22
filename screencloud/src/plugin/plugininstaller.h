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

#ifndef PLUGININSTALLER_H
#define PLUGININSTALLER_H

#include <QObject>
#include <QFtp>
#include <QFile>
class PluginInstaller : public QObject
{
    Q_OBJECT
public:
    explicit PluginInstaller(QObject *parent = 0);
    void installPlugin(QString s);
    void extractPlugin(QString s);
    bool uninstallPlugin(QString s);
    bool removeDir(const QString & dirName);
    bool isInstalling();
    QString getShortname();
    
private:
    QString shortname;
    QFtp* ftp;
    QFile* tmpFile;
    int id_connect, id_login, id_cd, id_get, id_close;
    bool installing;

signals:
    void installationProgress(QString, quint64, quint64);
    void pluginInstalled(QString);
    
public slots:
    void ftpCommandFinished(int id, bool error);
    void updateDataTransferProgress(qint64 done, qint64 total);
};

#endif // PLUGININSTALLER_H
