//
// ScreenCloud - An easy to use screenshot sharing application
// Copyright (C) 2016 Olav Sortland Thoresen <olav.s.th@gmail.com>
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
#include <QMessageBox>
#include <QProgressDialog>
#include <QHBoxLayout>

PluginDialog::PluginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PluginDialog)
{
    ui->setupUi(this);
    pluginManager = new PluginManager();
    busyOverlay = new BusyOverlay();
    QHBoxLayout *layout = new QHBoxLayout(ui->tree_plugins);
    layout->setAlignment(Qt::AlignCenter);
    layout->addWidget(busyOverlay);
    //connect(pluginManager, SIGNAL(pluginInstalled(QString)), this, SLOT(pluginInstalled(QString)));
    connect(this, SIGNAL(mirrorChanged(QString)), this, SLOT(setMirror(QString)));
    connect(&netManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinished(QNetworkReply*)));
    setMirror(GITHUB_PLUGIN_LIST_URL);
}

PluginDialog::~PluginDialog()
{
    delete busyOverlay;
    delete ui;
    delete pluginManager;
}

void PluginDialog::setupUi()
{
    stdModel.clear();
    stdModel.setColumnCount(2);
    categoryOnline = new QStandardItem(tr("Online"));
    categoryLocal = new QStandardItem(tr("Local"));
    QStringList headerLabels;
    headerLabels.append(tr("Name"));
    headerLabels.append(tr("Enabled"));
    stdModel.setHorizontalHeaderLabels(headerLabels);
    ui->tree_plugins->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tree_plugins->setIconSize(QSize(32,32));
    ui->tree_plugins->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    //ui->tree_plugins->setHeaderHidden(true);
    ui->tree_plugins->setModel(&stdModel);
    //ui->tree_plugins->setItemDelegateForColumn(1, pbDelegate);
    busyOverlay->setVisible(true);
    QNetworkRequest request;
    request.setUrl(pluginListUrl);
    netManager.get(request);
}

void PluginDialog::buildTree()
{
    if(categoryOnline->hasChildren())
    {
        stdModel.invisibleRootItem()->appendRow(categoryOnline);
        ui->tree_plugins->expand(stdModel.indexFromItem(categoryOnline));
    }
    if(categoryLocal->hasChildren())
    {
        stdModel.invisibleRootItem()->appendRow(categoryLocal);
    }
#if QT_VERSION >= QT_VERSION_CHECK(5,0,0)
    ui->tree_plugins->header()->setSectionResizeMode(0, QHeaderView::Stretch);
    ui->tree_plugins->header()->setSectionResizeMode(1, QHeaderView::ResizeToContents);
#else
    ui->tree_plugins->header()->setResizeMode(0, QHeaderView::Stretch);
    ui->tree_plugins->header()->setResizeMode(1, QHeaderView::ResizeToContents);
#endif
    //ui->tree_plugins->header()->resizeSection(1, 10);
    ui->tree_plugins->header()->setStretchLastSection(false);
    busyOverlay->setVisible(false);
}

void PluginDialog::addDefaultNodes()
{
}

void PluginDialog::parsePluginNode(QDomNode node)
{
    QString name = node.firstChildElement("name").text();
    QString shortname = node.firstChildElement("shortname").text();
    QString iconUrl = node.firstChildElement("icon").text();
    QString category = node.firstChildElement("category").text();
    QString downloadUrl = node.firstChildElement("download").text();
    QString version = node.firstChildElement("version").text();
    QIcon icon = NetworkUtils::getIconFromUrl(QUrl(iconUrl));

    QList<QStandardItem *> rowItems;
    QStandardItem* pluginItem = new QStandardItem(icon, name);
    pluginItem->setData(shortname, Qt::UserRole);
    pluginItem->setData(downloadUrl, Qt::UserRole + 1);
    pluginItem->setData(version, Qt::UserRole + 2);
    rowItems << pluginItem;
    QStandardItem* enableItem = new QStandardItem("");
    enableItem->setCheckable(true);
    if(pluginManager->isInstalled(shortname))
    {
        enableItem->setCheckState(Qt::Checked);
    }
    rowItems << enableItem;
    if(category != "local")
    {
        categoryOnline->appendRow(rowItems);
    }else
    {
        categoryLocal->appendRow(rowItems);
    }
}

bool PluginDialog::pluginsChanged()
{
    return pluginsInstalledOrRemoved;
}

void PluginDialog::setShowButtons(bool show)
{
    ui->buttonBox->setVisible(show);
    ui->button_downloadFromURL->setVisible(show);
}

void PluginDialog::setMirror(QString newUrl)
{
    pluginListUrl = QUrl(NetworkUtils::checkUrlForRedirect(newUrl));
    //Refresh plugin list
    setupUi();

}

void PluginDialog::replyFinished(QNetworkReply *reply)
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
                WARNING(tr("Failed to get plugin list from server. Error was: ") + message.text());
                QMessageBox::warning(this, tr("Failed to get plugin list"), tr("Failed to get plugin list from server.\nError was: ") + message.text());
            }
        }
    }else
    {
        //No error in request
        addDefaultNodes();
        QDomDocument doc("plugins");
        if(!doc.setContent(replyText))
        {
            WARNING(tr("Failed to get plugin list from ") + reply->request().url().toString() + tr(".\n Failed to parse reply as XML"));
            QMessageBox::warning(this, tr("Failed to get plugin list"), tr("Failed to get plugin list from ") + reply->request().url().toString() + tr(". Failed to parse reply as XML."));
        }
        QDomElement docElem = doc.documentElement();
        QDomNode pluginNode = docElem.firstChild();
        while(!pluginNode.isNull())
        {
            parsePluginNode(pluginNode);
            pluginNode = pluginNode.nextSibling();
        }
        //Show the plugins in the tree
        stdModel.removeRow(0);
        buildTree();
    }
}

void PluginDialog::pluginInstalled(QString name)
{
    QMessageBox::information(this, tr("Plugin installed!"), tr("The <b>") + name + tr("</b> plugin was successfully installed!"));
    pluginsInstalledOrRemoved = true;
}

void PluginDialog::pluginInstallError(QString errorText)
{
    WARNING(tr("Failed to update plugins! ") + errorText);
    QMessageBox::critical(this, tr("Failed to install plugin!"), errorText);
}

void PluginDialog::cancelInstallation()
{
    //pluginManager->busy = false;
    INFO(tr("Installation canceled by user"));
    pluginManager->cancelInstallation();
}

void PluginDialog::on_button_downloadFromURL_clicked()
{
    bool ok;
    QString URL = QInputDialog::getText(this, tr("Download from URL"), tr("URL to zip file:"), QLineEdit::Normal, "", &ok);
    if(ok && !URL.isEmpty())
    {
        QProgressDialog progressDialog(tr("Installing plugin from URL..."), tr("Cancel"), 0, 4, this);
        progressDialog.setWindowTitle(tr("Installing Plugin"));
        progressDialog.setWindowModality(Qt::WindowModal);
        progressDialog.setAutoReset(true);
        progressDialog.setAutoClose(true);
        connect(pluginManager, SIGNAL(installationProgress(int)), &progressDialog, SLOT(setValue(int)));
        connect(pluginManager, SIGNAL(installationError(QString)), &progressDialog, SLOT(close()));
        connect(pluginManager, SIGNAL(installationError(QString)), this, SLOT(pluginInstallError(QString)));
        connect(&progressDialog, SIGNAL(canceled()), this, SLOT(cancelInstallation()));
        progressDialog.show();
        QStringList toInstall;
        toInstall << URL;
        pluginManager->installPlugins(toInstall);
        while(progressDialog.isVisible())
        {
            qApp->processEvents(QEventLoop::WaitForMoreEvents);
        }
    }
}

void PluginDialog::on_combo_mirror_currentIndexChanged(int index)
{
    if(index > 0)
    {
        QString url = QInputDialog::getText(this, tr("Enter URL"),tr("URL to plugin-list.xml:"), QLineEdit::Normal,"");
        if(!url.isEmpty())
        {
            Q_EMIT mirrorChanged(url);
        }else
        {
            ui->combo_mirror->setCurrentIndex(0);
        }
    }else
    {
        Q_EMIT mirrorChanged(GITHUB_PLUGIN_LIST_URL);
    }
}

void PluginDialog::on_buttonBox_accepted()
{
    QProgressDialog progressDialog(tr("Installing plugins..."), tr("Cancel"), 0, 0);
    progressDialog.setWindowTitle(tr("Installing Plugins"));
    connect(pluginManager, SIGNAL(installationProgress(int)), &progressDialog, SLOT(setValue(int)));
    connect(pluginManager, SIGNAL(installationProgress(int)), this, SLOT(progressUpdate(int)));
    connect(pluginManager, SIGNAL(installationError(QString)), &progressDialog, SLOT(close()));
    connect(pluginManager, SIGNAL(installationError(QString)), this, SLOT(pluginInstallError(QString)));
    connect(&progressDialog, SIGNAL(canceled()), this, SLOT(cancelInstallation()));
    connect(this, SIGNAL(updateProgessRange(int,int)), &progressDialog, SLOT(setRange(int,int)));
    progressDialog.setWindowModality(Qt::WindowModal);
    progressDialog.show();
    //Get a list of the checked or unchecked plugins
    for(int i = 0; i < stdModel.invisibleRootItem()->rowCount(); i++)
    {
        for(int j = 0; j < stdModel.invisibleRootItem()->child(i)->rowCount(); j++)
        {
            QStandardItem* item = stdModel.invisibleRootItem()->child(i)->child(j);
            bool checked = (item->parent()->child(item->row(), item->column() + 1)->checkState() > 0);
            QString downloadURL = item->data(Qt::UserRole + 1).toString();
            QString shortname = item->data(Qt::UserRole).toString();
            QString version = item->data(Qt::UserRole + 2).toString();
            if(shortname != "screencloud")
            {
                if(checked)
                {
                    if(pluginManager->installedVersion(shortname) != version)
                    {
                        toInstallUrls << downloadURL;
                    }
                }else
                {
                    toUninstall << shortname;
                }
            }
        }
    }
    pluginManager->uninstallPlugins(toUninstall);
    pluginManager->installPlugins(toInstallUrls);
    while(progressDialog.isVisible() && toInstallUrls.size() > 0)
    {
        qApp->processEvents(QEventLoop::WaitForMoreEvents);
    }
}

void PluginDialog::progressUpdate(int)
{
    Q_EMIT updateProgessRange(0, toInstallUrls.size() * 4);
}
