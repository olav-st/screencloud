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

#ifndef SAVESCREENSHOTDIALOG_H
#define SAVESCREENSHOTDIALOG_H

#include <QDialog>
#include <QList>
#include "uploaders/uploader.h"
#include <QGraphicsScene>
#include <QSettings>
#include <QImage>
#include <uploadmanager.h>
#include <models/uploaderslistmodel.h>

namespace Ui {
    class SaveScreenshotDialog;
}

class SaveScreenshotDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SaveScreenshotDialog(QWidget *parent = 0, const QImage & screenshot = QImage(),  UploadManager* uManager = 0);
    ~SaveScreenshotDialog();
    void setupUi();
    void saveSettings();
    void loadSettings();
    void updateUi();
    QString getUploaderShortname();
    bool nameChanged();
    QString getName();

private slots:
    void on_button_settings_clicked();
    void on_buttonBox_accepted();
    void on_comboBox_uploaders_currentIndexChanged(int row);
    void on_buttonBox_rejected();
    void thumbnailClicked();

private:
    Ui::SaveScreenshotDialog *ui;
    UploadManager* uploadManager;
    QImage screenshot;
    QGraphicsScene scene;
    QString currentUploaderShortname;
    QString screenshotName;
    bool loggedIn;

signals:
    void uploaderSelected(QString name, QString uploaderShortname);
};

#endif // SAVESCREENSHOTDIALOG_H
