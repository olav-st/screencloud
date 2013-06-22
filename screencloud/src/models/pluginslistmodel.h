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

#ifndef PLUGINSLISTMODEL_H
#define PLUGINSLISTMODEL_H

#include <QAbstractListModel>
#include <QList>
#include <QMap>
#include <QNetworkAccessManager>
#include <QByteArray>
#include <QtXml>
#include <QIcon>
#include "plugin/plugininstaller.h"

struct PluginData
{
    int id;
    QString name;
    QString shortname;
    QIcon icon;
};

class PluginsListModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    explicit PluginsListModel(QObject *parent = 0, PluginInstaller* pi = 0);
    void loadSettings();
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
    int columnCount(const QModelIndex &parent = QModelIndex()) const;
    void downloadIcons();
    void parsePluginNode(QDomNode node);
    QString getShortname(const QModelIndex &index);

private:
    QNetworkAccessManager *manager;
    QByteArray token, tokenSecret;
    QList< PluginData > pluginList;
    QList<QIcon> icons;
    QString idIconDowloading;
    PluginInstaller* pluginInstaller;
signals:
    
public slots:
    void replyFinished(QNetworkReply* reply);
    
};

#endif // PLUGINSLISTMODEL_H
