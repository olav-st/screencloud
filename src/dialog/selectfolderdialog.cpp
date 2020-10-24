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

#include "selectfolderdialog.h"
#include "ui_selectfolderdialog.h"
#include <QSettings>
#include <QFileDialog>

SelectFolderDialog::SelectFolderDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SelectFolderDialog)
{
    ui->setupUi(this);
    loadSettings();
    setupUi();

    connect(this, SIGNAL(accepted()), this, SLOT(onDialogAccepted()));
    connect(ui->button_browse, SIGNAL(clicked()), this, SLOT(onBrowseButtonPressed()));
    connect(ui->input_name, SIGNAL(textChanged(QString)), this, SLOT(onNameFormatChanged(QString)));
}

SelectFolderDialog::~SelectFolderDialog()
{
    disconnect(this, SIGNAL(accepted()), this, SLOT(onDialogAccepted()));
    disconnect(ui->button_browse, SIGNAL(clicked()), this, SLOT(onBrowseButtonPressed()));
    disconnect(ui->input_name, SIGNAL(textChanged(QString)), this, SLOT(onNameFormatChanged(QString)));
    delete ui;
}

void SelectFolderDialog::saveSettings()
{

    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("uploaders");
    settings.beginGroup("file");
    settings.setValue("name-format", ui->input_name->text());
    settings.setValue("folder", ui->input_folder->text());
    settings.setValue("copy-filepath", ui->checkBox_clipboard->isChecked());
    settings.endGroup();
    settings.endGroup();
}

void SelectFolderDialog::loadSettings()
{
    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("uploaders");
    settings.beginGroup("file");
    nameFormat = settings.value("name-format", "Screenshot at %H-%M-%S").toString();
    folder = settings.value("folder", "").toString();
    copyFilepath = settings.value("copy-filepath", true).toBool();
    settings.endGroup();
    settings.endGroup();
}

void SelectFolderDialog::setupUi()
{
    setWindowFlags( (windowFlags() | Qt::CustomizeWindowHint) & ~Qt::WindowMaximizeButtonHint);
    ui->input_folder->setText(folder);
    ui->input_name->setText(nameFormat);
    ui->checkBox_clipboard->setChecked(copyFilepath);
}
void SelectFolderDialog::updateUi()
{
}

void SelectFolderDialog::setExampleNameLabel(const QString &text)
{
    ui->label_example->setText(text);
}

void SelectFolderDialog::onBrowseButtonPressed()
{
    openDirectoryBrowser();
}

void SelectFolderDialog::onNameFormatChanged(QString newNameFormat)
{
    Q_EMIT nameFormatChanged(newNameFormat);
}

void SelectFolderDialog::onDialogAccepted()
{
    saveSettings();
}

void SelectFolderDialog::openDirectoryBrowser()
{
    QString selectedFolder = QFileDialog::getExistingDirectory(this, tr("Select Folder..."), folder);
    if(!selectedFolder.isEmpty())
    {
            ui->input_folder->setText(selectedFolder);
    }
    saveSettings();
}
