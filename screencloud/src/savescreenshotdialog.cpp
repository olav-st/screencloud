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

#include "savescreenshotdialog.h"
#include "ui_savescreenshotdialog.h"
#include <QDebug>
//#include "editor/paintdialog.h"

SaveScreenshotDialog::SaveScreenshotDialog(QWidget *parent, QPixmap* screenshot,  QList<Uploader*> * available,  Uploader* active) :
    QDialog(parent),
    ui(new Ui::SaveScreenshotDialog)
{
    ui->setupUi(this);
    setWindowTitle("Save Screenshot");
    uploaders = available;
    activeUploader = active;
    this->screenshot = screenshot->scaled(330, 210, Qt::KeepAspectRatio);
    this->screenshotFull = screenshot;
    scene = new QGraphicsScene(this);
    model = new AvailableUploadersListModel(this, uploaders, activeUploader);
    ui->comboBox_uploaders->setModel(model);
    loadSettings();
    setupUi();
    connect(ui->graphicsView, SIGNAL(clicked()), this, SLOT(thumbnailClicked()));
}

SaveScreenshotDialog::~SaveScreenshotDialog()
{
    delete ui;
    delete model;
}

void SaveScreenshotDialog::saveSettings()
{
    comboboxUploaderIndex = ui->comboBox_uploaders->currentIndex();

    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("save_dialog");
    settings.setValue("index", comboboxUploaderIndex);
    settings.endGroup();
    settings.beginGroup("general");
    settings.setValue("show_save_dialog", !ui->checkBox_always->isChecked());
    if(ui->checkBox_always->isChecked())
    {
        settings.setValue("active_uploader_index", comboboxUploaderIndex);
    }else
    {
        settings.setValue("active_uploader_index", -1);
    }
    settings.endGroup();
}

void SaveScreenshotDialog::loadSettings()
{
    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("save_dialog");
    comboboxUploaderIndex = settings.value("index", 0).toInt();
    settings.endGroup();
    settings.beginGroup("account");
    loggedIn = settings.value("logged_in", false).toBool();
    settings.endGroup();
}

void SaveScreenshotDialog::setupUi()
{
    setWindowFlags( (windowFlags() | Qt::CustomizeWindowHint) & ~Qt::WindowMaximizeButtonHint);
    if(!loggedIn && comboboxUploaderIndex == 0) //Do not select ScreenCloud uploader if not logged in
    {
        comboboxUploaderIndex = 1;
    }
    if(comboboxUploaderIndex < 0 || comboboxUploaderIndex > ui->comboBox_uploaders->count() -1)
    {
        comboboxUploaderIndex = 0;
    }
    ui->comboBox_uploaders->setCurrentIndex(comboboxUploaderIndex);
    uploaders->at(comboboxUploaderIndex)->loadSettings();
    ui->input_name->setText(uploaders->at(comboboxUploaderIndex)->getFilename());
    scene->addPixmap(screenshot);
    ui->graphicsView->setScene(scene);
    //ui->graphicsView->resize(screenshot.size());
    ui->label_error->setStyleSheet("QLabel { color : red; }");
    if(uploaders->at(comboboxUploaderIndex)->isConfigured() == false)
    {
        ui->label_error->setVisible(true);
        ui->label_error->setText("This saving method is not configured. Press the settings button to configure it");
        ui->buttonBox->setEnabled(false);
    }else
    {
        ui->label_error->setVisible(false);
        ui->buttonBox->setEnabled(true);
    }
    //Make sure that the OK button is the default one
    ui->buttonBox->button(QDialogButtonBox::Ok)->setFocus();
    //Focus the name field
    ui->input_name->setFocus();

}
void SaveScreenshotDialog::updateUi()
{
    if(comboboxUploaderIndex < 0 || comboboxUploaderIndex > ui->comboBox_uploaders->count() -1)
    {
        comboboxUploaderIndex = 0;
    }
        ui->comboBox_uploaders->setCurrentIndex(comboboxUploaderIndex);
    ui->input_name->setText(uploaders->at(comboboxUploaderIndex)->getFilename());
    if(uploaders->at(comboboxUploaderIndex)->isConfigured() == false)
    {
        ui->label_error->setVisible(true);
        if(comboboxUploaderIndex == 0)
        {
            ui->label_error->setText("You are not logged in to ScreenCloud. You can log in from the preferences menu.");
        }else {
            ui->label_error->setText("This saving method is not configured. Press the settings button to configure it");
        }
        ui->buttonBox->setEnabled(false);
    }else
    {
        ui->label_error->setVisible(false);
        ui->buttonBox->setEnabled(true);
    }
    if(comboboxUploaderIndex == 0)
    {
        ui->button_settings->setEnabled(false);
    }else
    {
        ui->button_settings->setEnabled(true);
    }
}

void SaveScreenshotDialog::on_button_settings_clicked()
{
    //Uploader settings
    uploaders->at(comboboxUploaderIndex)->loadSettings();
    uploaders->at(comboboxUploaderIndex)->openSettingsDialog(this);
    updateUi();
}

void SaveScreenshotDialog::on_buttonBox_accepted()
{
    activeUploader = uploaders->at(comboboxUploaderIndex);
    screenshotName = ui->input_name->text();
    saveSettings();
}

void SaveScreenshotDialog::on_comboBox_uploaders_currentIndexChanged(int index)
{
    comboboxUploaderIndex = index;
    uploaders->at(comboboxUploaderIndex)->loadSettings();
    updateUi();
}

void SaveScreenshotDialog::on_buttonBox_rejected()
{

}

void SaveScreenshotDialog::thumbnailClicked()
{
    /*
    PaintDialog p(this, screenshotFull);
    p.exec();
    */
}

int SaveScreenshotDialog::getUploaderIndex()
{
    return comboboxUploaderIndex;
}

bool SaveScreenshotDialog::nameChanged()
{
    return false;
}

QString SaveScreenshotDialog::getName()
{
    return screenshotName;
}
