//
// ScreenCloud - An easy to use screenshot sharing application
// Copyright (C) 2014 Olav Sortland Thoresen <olav.s.th@gmail.com>
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
#include <utils/log.h>
//#include "editor/paintdialog.h"

SaveScreenshotDialog::SaveScreenshotDialog(QWidget *parent, const QImage& screenshot, UploadManager* uManager) :
    QDialog(parent),
    ui(new Ui::SaveScreenshotDialog)
{
    ui->setupUi(this);
    this->uploadManager = uManager;
    this->screenshotFull = screenshot;
    this->screenshotThumb = screenshot.scaled(330, 210, Qt::KeepAspectRatio);
    ui->comboBox_uploaders->setModel(uploadManager->listModel());
    loadSettings();
    setupUi();
    connect(ui->graphicsView, SIGNAL(clicked()), this, SLOT(thumbnailClicked()));
}

SaveScreenshotDialog::~SaveScreenshotDialog()
{
    delete ui;

}

void SaveScreenshotDialog::saveSettings()
{

    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("main");
    settings.setValue("show-save-dialog", !ui->checkBox_always->isChecked());
    settings.setValue("current-uploader", currentUploaderShortname);
    settings.endGroup();
}

void SaveScreenshotDialog::loadSettings()
{
    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("main");
    currentUploaderShortname = settings.value("current-uploader", 0).toString();
    settings.endGroup();
    settings.beginGroup("account");
    loggedIn = settings.value("logged-in", false).toBool();
    settings.endGroup();
}

void SaveScreenshotDialog::setupUi()
{
    setWindowFlags( (windowFlags() | Qt::CustomizeWindowHint) & ~Qt::WindowMaximizeButtonHint);
    if(uploadManager->getUploader(currentUploaderShortname) == NULL)
    {
        currentUploaderShortname.clear();
    }
    if(currentUploaderShortname.isEmpty() || currentUploaderShortname == "askme")
    {
        currentUploaderShortname = uploadManager->getDefaultService();
    }
    ui->comboBox_uploaders->setCurrentIndex(ui->comboBox_uploaders->model()->match(ui->comboBox_uploaders->model()->index(0,0), Qt::UserRole, currentUploaderShortname).at(0).row());
    ui->input_name->setText(uploadManager->getUploader(currentUploaderShortname)->getFilename());
    scene.addPixmap(QPixmap::fromImage(screenshotThumb));
    ui->graphicsView->setScene(&scene);
    ui->graphicsView->resize(screenshotThumb.size());
    ui->label_error->setStyleSheet("QLabel { color : red; }");
    if(uploadManager->getUploader(currentUploaderShortname)->isConfigured() == false)
    {
        ui->label_error->setVisible(true);
        ui->label_error->setText(tr("This saving method is not configured. Press the settings button to configure it."));
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
    ui->input_name->setText(uploadManager->getUploader(currentUploaderShortname)->getFilename());
    if(uploadManager->getUploader(currentUploaderShortname)->isConfigured() == false)
    {
        ui->label_error->setVisible(true);
        if(currentUploaderShortname == "screencloud")
        {
            ui->label_error->setText(tr("You are not logged in to ScreenCloud. You can log in from the preferences menu."));
        }else {
            ui->label_error->setText(tr("This saving method is not configured. Press the settings button to configure it"));
        }
        ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);
    }else
    {
        ui->label_error->setVisible(false);
        ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(true);
    }
    if(currentUploaderShortname == "screencloud")
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
    uploadManager->getUploader(currentUploaderShortname)->showSettingsUI(this);
    updateUi();
}

void SaveScreenshotDialog::on_buttonBox_accepted()
{
    screenshotName = ui->input_name->text();
    saveSettings();
    emit uploaderSelected(screenshotName, currentUploaderShortname);
}

void SaveScreenshotDialog::on_comboBox_uploaders_currentIndexChanged(int row)
{
    currentUploaderShortname = ui->comboBox_uploaders->model()->data(ui->comboBox_uploaders->model()->index(row, 0), Qt::UserRole).toString();
    updateUi();
}

void SaveScreenshotDialog::on_buttonBox_rejected()
{

}

void SaveScreenshotDialog::thumbnailClicked()
{
    openEditor();
}

void SaveScreenshotDialog::changeEvent(QEvent *e)
{
    if(e->type() == QEvent::ActivationChange && this->isActiveWindow())
    {
        updateUi();
    }
    QDialog::changeEvent(e);
}

QString SaveScreenshotDialog::getUploaderShortname()
{
    return currentUploaderShortname;
}

bool SaveScreenshotDialog::nameChanged()
{
    return false;
}

QString SaveScreenshotDialog::getName()
{
    return screenshotName;
}

void SaveScreenshotDialog::openEditor()
{
    EditorDialog e(this);
    e.setImage(&screenshotFull);
    e.exec();
}
