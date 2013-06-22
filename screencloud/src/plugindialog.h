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

#ifndef PLUGINDIALOG_H
#define PLUGINDIALOG_H

#include <QDialog>
#include <models/pluginslistmodel.h>
#include <delegates/pushbuttondelegate.h>
#include <plugin/plugininstaller.h>

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
    bool pluginsChanged();
    QList<QString> getInstalled();
    QList<QString> getUninstalled();
    
private slots:
    void installButtonClicked(QModelIndex index);
    void pluginInstalled(QString name);

private:
    Ui::PluginDialog *ui;
    PluginsListModel* pluginListModel;
    PushButtonDelegate *pbDelegate;
    PluginInstaller* pluginInstaller;
    QList<QString> installed, uninstalled;
    bool pluginsInstalledOrRemoved;
};

#endif // PLUGINDIALOG_H
