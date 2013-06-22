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

#include "availableuploaderslistmodel.h"

AvailableUploadersListModel::AvailableUploadersListModel(QObject *parent, QList<Uploader*> *available, Uploader* active) :
    QAbstractListModel(parent)
{
    uploaders = available;
    activeUploader = active;
}

int AvailableUploadersListModel::rowCount(const QModelIndex &parent) const
{
    return uploaders->size();
}

QVariant AvailableUploadersListModel::data(const QModelIndex &index, int role) const
{
    if(role == Qt::DisplayRole)
    {
        return QVariant(uploaders->at(index.row())->getName());
    }else if(role == Qt::DecorationRole)
    {
        return uploaders->at(index.row())->getIcon();
    }else
    {
        return QVariant();
    }
}

Qt::ItemFlags AvailableUploadersListModel::flags(const QModelIndex &index) const
{
    if(activeUploader != uploaders->at(index.row()))
    {
        return Qt::ItemIsEnabled | Qt::ItemIsSelectable;
    }else
    {
        //return !Qt::ItemIsEnabled | !Qt::ItemIsSelectable;
        return Qt::ItemIsEnabled | Qt::ItemIsSelectable;
    }
}
