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

#include "plugindialog.h"
#include "ui_plugindialog.h"
#include <plugin/pluginloader.h>
#include <QMessageBox>

PluginDialog::PluginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PluginDialog)
{
    ui->setupUi(this);
    pluginInstaller = new PluginInstaller();
    pluginListModel = new PluginsListModel(this, pluginInstaller);
    pbDelegate = new PushButtonDelegate(this, pluginInstaller);
    setupUi();
    connect(pbDelegate,SIGNAL(buttonClicked(QModelIndex)), this,SLOT(installButtonClicked(QModelIndex)));
    connect(pluginInstaller, SIGNAL(pluginInstalled(QString)), this, SLOT(pluginInstalled(QString)));
    pluginsInstalledOrRemoved = false;
}

PluginDialog::~PluginDialog()
{
    delete ui;
    delete pluginListModel;
    delete pbDelegate;
    delete pluginInstaller;
}

void PluginDialog::setupUi()
{
    ui->table_plugins->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->table_plugins->setIconSize(QSize(32,32));
    ui->table_plugins->setModel(pluginListModel);
    ui->table_plugins->setItemDelegateForColumn(1, pbDelegate);
    ui->table_plugins->horizontalHeader()->setResizeMode(0, QHeaderView::Stretch);
    ui->table_plugins->horizontalHeader()->setResizeMode(1, QHeaderView::Fixed);
    ui->table_plugins->horizontalHeader()->resizeSection(1, 90);
}

bool PluginDialog::pluginsChanged()
{
    return pluginsInstalledOrRemoved;
}

QList<QString> PluginDialog::getInstalled()
{
    return installed;
}

QList<QString> PluginDialog::getUninstalled()
{
    return uninstalled;
}

void PluginDialog::installButtonClicked(QModelIndex index)
{
    if(!pluginInstaller->isInstalling()) //Only do something if the plugin installer is ready
    {
        QString shortname = pluginListModel->getShortname(index);
        if(!PluginLoader::isInstalled(shortname))
        {
            pluginInstaller->installPlugin(shortname);
            installed.append(shortname);
            if(uninstalled.contains(shortname))
            {
                uninstalled.removeAll(shortname);
            }
        }else
        {
            QModelIndex nameIndex = pluginListModel->index(index.row(), index.column() -1);
            QString name = pluginListModel->data(nameIndex).toString();
            QMessageBox q;
            q.addButton(QMessageBox::Yes);
            q.addButton(QMessageBox::No);
            q.setWindowTitle("Really uninstall plugin?");
            q.setText("Are you sure that you want to uninstall the <b>" + name + "</b> plugin?");
            q.setIcon(QMessageBox::Question);
            if(q.exec() == QMessageBox::Yes)
            {
                pluginInstaller->uninstallPlugin(shortname);
                pluginsInstalledOrRemoved = true;
                uninstalled.append(shortname);
                if(installed.contains(shortname))
                {
                    installed.removeAll(shortname);
                }
            }
        }
    }
}

void PluginDialog::pluginInstalled(QString name)
{
    QMessageBox::information(this, "Plugin installed!", "The <b>" + name + "</b> plugin was successfully installed!");
    pluginsInstalledOrRemoved = true;
}
