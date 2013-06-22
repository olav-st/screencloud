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

#ifndef DATETIMEDIALOG_H
#define DATETIMEDIALOG_H

#include <QDialog>
#include <QSettings>
#include <QDateTime>
#include <QAbstractButton>
#include <QDialogButtonBox>

namespace Ui {
    class DateTimeDialog;
}

class DateTimeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DateTimeDialog(QWidget *parent = 0, QString uploaderShortname = "default", bool prefix = true);
    ~DateTimeDialog();
    void loadSettings();
    void saveSettings();
    void setupUi();

private slots:
    void dialogAccepted();

    void on_input_dateTimeFormat_textChanged(const QString &arg1);

    void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::DateTimeDialog *ui;
    QString uploaderShortname;
    bool editingPrefix;
    QString dateTimeFormat;

};

#endif // DATETIMEDIALOG_H
