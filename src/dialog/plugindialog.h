/* * ScreenCloud - An easy to use screenshot sharing application
 * Copyright (C) 2016 Olav Sortland Thoresen <olav.s.th@gmail.com>
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

#ifndef PLUGINDIALOG_H
#define PLUGINDIALOG_H

#include <QDialog>
#include <plugin/pluginmanager.h>
#include <QInputDialog>
#include <QStandardItemModel>
#include <utils/network.h>
#include <gui-elements/busyoverlay.h>
#include <QHeaderView>

namespace Ui {
class PluginDialog;
}

class PluginDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit PluginDialog(QWidget *parent = 0);
    ~PluginDialog();
    void setupUi();
    void buildTree();
    void addDefaultNodes();
    void parsePluginNode(QDomNode node);
    bool pluginsChanged();
    
public Q_SLOTS:
    void setShowButtons(bool show);
    void setMirror(QString newUrl);
    void replyFinished(QNetworkReply* reply);
    void pluginInstalled(QString name);
    void pluginInstallError(QString errorText);
    void cancelInstallation();
    void on_button_downloadFromURL_clicked();
    void on_combo_mirror_currentIndexChanged(int index);
    void on_buttonBox_accepted();
    void progressUpdate(int);

private:
    Ui::PluginDialog *ui;
    QNetworkAccessManager netManager;
    QUrl pluginListUrl;
    BusyOverlay* busyOverlay;
    QStandardItemModel stdModel;
    QStandardItem* categoryOnline;
    QStandardItem* categoryLocal;
    PluginManager* pluginManager;
    QStringList toInstallUrls;
    QStringList toUninstall;
    bool pluginsInstalledOrRemoved;

Q_SIGNALS:
    void mirrorChanged(QString);
    void updateProgessRange(int, int);
};

#endif // PLUGINDIALOG_H
