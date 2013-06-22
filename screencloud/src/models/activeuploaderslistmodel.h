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

#ifndef ACTIVEUPLOADERSLISTMODEL_H
#define ACTIVEUPLOADERSLISTMODEL_H

#include <QAbstractListModel>
#include <QList>
#include "uploaders/uploader.h"

class ActiveUploadersListModel : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit ActiveUploadersListModel(QObject *parent = 0, QList<Uploader*> *active = 0);
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
private:
    QList<Uploader*> *activeUploaders;
signals:

public slots:

};

#endif // ACTIVEUPLOADERSLISTMODEL_H
