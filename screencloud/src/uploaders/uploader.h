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

#ifndef UPLOADER_H
#define UPLOADER_H

#include <QObject>
#include <QPixmap>
#include <QIcon>
#include <QFile>
#include <QtDesigner/QFormBuilder>
#include <QVBoxLayout>
#include <QWidget>
#include <QDialog>
#include <QImage>
#include <QBuffer>
#include <QPainter>
#include <QSettings>

class Uploader : public QObject
{
Q_OBJECT
public:
    Uploader(QObject* parent = 0);
    virtual ~Uploader();
    virtual void loadSettings() = 0;
    virtual void saveSettings() = 0;
    virtual void upload(QImage* screenshot) = 0;
    virtual void setupSettingsUi();
    virtual void openSettingsDialog(QWidget* parent = 0);
    QDialog* loadUiFile(QString filename);
    virtual void setFilename(QString newName);
    QString& getName();
    QString& getShortName();
    QIcon& getIcon();
    virtual bool isConfigured();
    virtual QString getFilename();
    QString validateFilename(QString filename);
protected:
    QString name, shortname, filename, format;
    QString screenshotName;
    QIcon icon;
    QWidget* settingsWidget;
    QDialog* settingsDialog;
    QBuffer* buffer;
    QByteArray bufferArray;
    bool configured;
    bool filenameSetExternally;
public slots:
    void settingsDialogAccepted();
signals:
    void uploadingFinished(QString url);
    void uploadingError(QString errorMessage);
};

#endif // UPLOADER_H
