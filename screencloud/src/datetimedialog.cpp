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

#include "datetimedialog.h"
#include "ui_datetimedialog.h"
#include <QDebug>

DateTimeDialog::DateTimeDialog(QWidget *parent, QString uploaderShortname, bool prefix) :
    QDialog(parent),
    ui(new Ui::DateTimeDialog)
{
    ui->setupUi(this);
    setWindowTitle("Date/Time format");
    this->uploaderShortname = uploaderShortname;
    this->editingPrefix = prefix;
    loadSettings();
    setupUi();
}

DateTimeDialog::~DateTimeDialog()
{
    delete ui;
}

void DateTimeDialog::loadSettings()
{
    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("uploaders");
    settings.beginGroup(uploaderShortname);
    if(editingPrefix)
    {
        settings.beginGroup("prefix-datetime-settings");
    }else
    {
        settings.beginGroup("suffix-datetime-settings");
    }
    dateTimeFormat = settings.value("date-time-format", QString("yyyy-MM-dd hh:mm:ss")).toString();
    settings.endGroup(); //datetimeSettings
    settings.endGroup(); //uploaderShortname
    settings.endGroup(); //uploaders
}

void DateTimeDialog::saveSettings()
{
    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("uploaders");
    settings.beginGroup(uploaderShortname);
    if(editingPrefix)
    {
        settings.beginGroup("prefix-datetime-settings");
    }else
    {
        settings.beginGroup("suffix-datetime-settings");
    }
    settings.setValue("date-time-format", ui->input_dateTimeFormat->text());
    settings.endGroup(); //datetimeSettings
    settings.endGroup();
    settings.endGroup();
}
void DateTimeDialog::setupUi()
{
    ui->input_dateTimeFormat->setText(dateTimeFormat);
    ui->label_preview->setText(QDateTime::currentDateTime().toString(dateTimeFormat));
}
void DateTimeDialog::dialogAccepted()
{
    saveSettings();
}

void DateTimeDialog::on_input_dateTimeFormat_textChanged(const QString &arg1)
{
    dateTimeFormat = ui->input_dateTimeFormat->text();
    ui->label_preview->setText(QDateTime::currentDateTime().toString(dateTimeFormat));
}

void DateTimeDialog::on_buttonBox_clicked(QAbstractButton *button)
{
    if(ui->buttonBox->standardButton(button) == QDialogButtonBox::RestoreDefaults)
    {
        qDebug() << "Deleting dem settings";
        QSettings settings("screencloud", "ScreenCloud");
        if(editingPrefix)
        {
            settings.remove("uploaders/" + uploaderShortname + "/prefix-datetime-settings");
        }else
        {
            settings.remove("uploaders/" + uploaderShortname + "/suffix-datetime-settings");
        }
        loadSettings();
        setupUi();

    }
}
