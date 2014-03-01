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
#include <QFile>
#include <QNetworkAccessManager>
class PluginInstaller : public QObject
{
    Q_OBJECT
public:
    explicit PluginInstaller(QObject *parent = 0);
    void installPlugin(QString url);
    void extractPlugin(QString zipFilename);
    void analyzeAndMovePlugin(QString exctractedDirPath);
    bool uninstallPlugin(QString s);
    bool removeDir(const QString & dirName);
    QUrl checkUrlForRedirect(QUrl checkUrl);
    bool copyFolder(QString sourceFolder, QString destFolder);
    bool isInstalling();
    QString getShortname();
    
private:
    QNetworkAccessManager netManager;
    QFile* tmpFile;
    int id_connect, id_login, id_cd, id_get, id_close;
    bool installing;

Q_SIGNALS:
    void installationProgress(int);
    void pluginInstalled(QString);
    void installationError(QString);
    
public Q_SLOTS:
    void fileDownloaded(QNetworkReply* reply);
};

#endif // PLUGININSTALLER_H
