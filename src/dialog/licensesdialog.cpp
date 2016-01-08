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

#include "licensesdialog.h"
#include "ui_licensesdialog.h"

LicensesDialog::LicensesDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LicensesDialog)
{
    ui->setupUi(this);
}

LicensesDialog::~LicensesDialog()
{
    delete ui;
}
