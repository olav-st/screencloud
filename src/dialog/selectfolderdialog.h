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

#ifndef SELECTFOLDERDIALOG_H
#define SELECTFOLDERDIALOG_H

#include <QDialog>

namespace Ui {
    class SelectFolderDialog;
}

class SelectFolderDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SelectFolderDialog(QWidget *parent = 0);
    ~SelectFolderDialog();
    void setupUi();
    void saveSettings();
    void loadSettings();
    void updateUi();

    void openDirectoryBrowser();
    void setExampleNameLabel(const QString& text);

private Q_SLOTS:
    void onDialogAccepted();
    void onBrowseButtonPressed();
    void onNameFormatChanged(QString newNameFormat);

Q_SIGNALS:
    void nameFormatChanged(QString newNameFormat);

private:
    Ui::SelectFolderDialog *ui;
    QString folder, nameFormat;
    bool copyFilepath;
};

#endif // SELECTFOLDERDIALOG_H
