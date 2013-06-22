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

#include "activeuploaderslistmodel.h"

ActiveUploadersListModel::ActiveUploadersListModel(QObject *parent, QList<Uploader*> *active) :
    QAbstractListModel(parent)
{
    activeUploaders = active;
}

int ActiveUploadersListModel::rowCount(const QModelIndex &parent) const
{
    return activeUploaders->size();
}

QVariant ActiveUploadersListModel::data(const QModelIndex &index, int role) const
{
    if(role == Qt::DisplayRole)
    {
        return QVariant(activeUploaders->at(index.row())->getName());
    }else if(role == Qt::DecorationRole)
    {
        return activeUploaders->at(index.row())->getIcon();
    }else
    {
        return QVariant();
    }
}
