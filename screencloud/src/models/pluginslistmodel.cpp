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

#include "pluginslistmodel.h"
#include <QtOAuth>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QMessageBox>
#include <QUrl>
#include <QSettings>
#include <QDebug>
#include <plugin/pluginloader.h>

PluginsListModel::PluginsListModel(QObject *parent, PluginInstaller *pi) :
    QAbstractTableModel(parent)
{
    this->pluginInstaller = pi;
    idIconDowloading = -1;
    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(replyFinished(QNetworkReply*)));
    loadSettings();
    QOAuth::Interface *qoauth = new QOAuth::Interface;
    qoauth->setConsumerKey(CONSUMER_KEY_SCREENCLOUD);
    qoauth->setConsumerSecret(CONSUMER_SECRET_SCREENCLOUD);
    QByteArray url( "http://screencloud.net/1.0/plugins/list.xml" );

    QOAuth::ParamMap map;
    QByteArray header =
    qoauth->createParametersString( url, QOAuth::POST,
                                        token, tokenSecret,QOAuth::HMAC_SHA1, map,
                                        QOAuth::ParseForHeaderArguments );

    QNetworkRequest request;
    request.setUrl(QUrl(url));
    request.setRawHeader( "Authorization", header );
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");
    manager->get(request);
}

void PluginsListModel::loadSettings()
{
    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("account");
    token = settings.value("token", "").toByteArray();
    tokenSecret = settings.value("token_secret", "").toByteArray();
    settings.endGroup();
}

int PluginsListModel::rowCount(const QModelIndex &parent) const
{
    if(pluginList.size() > 0)
    {
         return pluginList.count();
    }
    return 1;
}

QVariant PluginsListModel::data(const QModelIndex &index, int role) const
{
    if(index.column() == 0)
    {
        if(role == Qt::DisplayRole)
        {
            if(pluginList.size() > 0)
            {
                return QVariant(pluginList.at(index.row()).name);
            }else
            {
                return QVariant("Loading...");
            }

        }else if(role == Qt::DecorationRole)
        {
            if(pluginList.size() > 0)
            {
                if(index.row() < pluginList.size())
                {
                    if(PluginLoader::isInstalled(pluginList.at(index.row()).shortname))
                    {
                        return QIcon(PluginLoader::pluginPath() + pluginList.at(index.row()).shortname + "/icon.png");
                    }
                }
                if(!pluginList.at(index.row()).icon.isNull())
                {
                    return pluginList.at(index.row()).icon;
                }
                return QIcon(":uploaders/default.png");
            }
            return QIcon();
        }
    }
    else if(role == Qt::DisplayRole)
    {
        if(pluginList.size() <= 0)
        {
            return QVariant();
        }
        if(index.row() < pluginList.size())
        {
            if(PluginLoader::isInstalled(pluginList.at(index.row()).shortname))
            {
                return QVariant("Uninstall");
            }
            if(pluginInstaller->isInstalling() && pluginInstaller->getShortname() == pluginList.at(index.row()).shortname)
            {
                return QVariant("Installing...");
            }
        }
        return QVariant("Install");
    }
    return QVariant();
}

int PluginsListModel::columnCount(const QModelIndex &parent) const
{
    return 2;
}

void PluginsListModel::parsePluginNode(QDomNode node)
{
    PluginData d;
    d.id = node.firstChildElement("id").text().toInt();
    d.name = node.firstChildElement("name").text();
    d.shortname = node.firstChildElement("shortname").text();
    d.icon = QIcon(QPixmap::fromImage(QImage::fromData(QByteArray::fromBase64(node.firstChildElement("icon").text().toLocal8Bit()), "PNG")));
    pluginList.append(d);
}

QString PluginsListModel::getShortname(const QModelIndex &index)
{
    return pluginList.at(index.row()).shortname;
}
void PluginsListModel::replyFinished(QNetworkReply *reply)
{
    QString contentType = reply->header(QNetworkRequest::ContentTypeHeader).toString();;
    if(contentType.contains("application/xml"))
    {
        QString replyText = reply->readAll();
        if(reply->error() != QNetworkReply::NoError)
        {
            //Parse servers response
            QDomDocument doc("error");
            if (!doc.setContent(replyText)) {
                //No XML to parse, user is probably disconnected
                return;
            }else
            {
                QDomElement docElem = doc.documentElement();
                QDomElement message = docElem.firstChildElement("message");
                if(!message.text().isEmpty())
                {
                    QMessageBox msgBox;
                    msgBox.setWindowTitle("Failed to get plugin list");
                    msgBox.setIcon(QMessageBox::Warning);
                    msgBox.setText("Failed to get plugin list from server.\nError was: " + message.text());
                    msgBox.exec();
                }
            }
        }else
        {
            beginInsertRows(QModelIndex(), pluginList.count(), pluginList.count());
            //No error in request
            QDomDocument doc("response");
            if(!doc.setContent(replyText))
            {
                qDebug() << "Failed to parse XML";
            }
            QDomElement docElem = doc.documentElement();
            QDomNode appPluginsNode = docElem.firstChildElement("AppPlugins");
            QDomNode pluginNode = appPluginsNode.firstChild();
            while(!pluginNode.isNull())
            {
                parsePluginNode(pluginNode);
                pluginNode = pluginNode.nextSibling();
            }
            endInsertRows();
            emit layoutChanged();
        }
    }else
    {
        QByteArray data = reply->readAll();
        QPixmap p;
        p.loadFromData(data);
        QIcon icon = QIcon(p);
        //pluginList.at(idIconDowloading).icon = icon;
    }
}
