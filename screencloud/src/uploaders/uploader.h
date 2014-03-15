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
#include <QIcon>
#include <QSettings>
#include <QBuffer>

class Uploader : public QObject
{
Q_OBJECT
public:
    Uploader(QObject* parent = 0);
    virtual ~Uploader();
    virtual void showSettingsUI(QWidget* parent = 0);
    QDialog* loadUiFile(QString filename);
    QString& getName();
    QString& getShortName();
    QIcon& getIcon();
    virtual bool isConfigured();
    virtual QString getFilename();
protected:
    QString name, shortname, filename, format;
    QIcon icon;
    bool configured;

public slots:
    virtual void upload(const QImage& screenshot, QString name);

signals:
    void uploadingFinished(QString url);
    void uploadingError(QString errorMessage);
    void finished();
};

#endif // UPLOADER_H
