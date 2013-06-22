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

#include "pushbuttondelegate.h"
#include <QStandardItemModel>
#include <QApplication>
#include <QMouseEvent>
#include <QAbstractItemModel>

PushButtonDelegate::PushButtonDelegate(QObject *parent, PluginInstaller *pi) :
    QItemDelegate(parent)
{
    state =  QStyle::State_Enabled;
    this->pluginInstaller = pi;
}

void PushButtonDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    QString text = index.model()->data(index).toString();
    if(!text.isEmpty())
    {
        QRect rect = option.rect;

        QRect textRect( rect);
        textRect.setHeight( option.rect.height());
        painter->drawText(textRect,text);

        QRect buttonRect( rect);
        buttonRect.setY(textRect.y());
        buttonRect.setHeight( option.rect.height());
        QStyleOptionButton button;
        button.rect = buttonRect;
        button.text = text;
        if(button.text == "Installing...")
        {
            button.state = QStyle::State_Raised | QStyle::State_Off;
        }else
        {
            button.state = state | QStyle::State_Enabled;
        }


        QApplication::style()->drawControl
            (QStyle::CE_PushButton, &button, painter);
    }
}

QSize PushButtonDelegate::sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    return QSize(option.rect.width(),option.rect.height());
}

bool PushButtonDelegate::editorEvent(QEvent *event, QAbstractItemModel *model, const QStyleOptionViewItem &option, const QModelIndex &index)
{
    if( event->type() == QEvent::MouseButtonPress || event->type() == QEvent::MouseButtonRelease ) {
    } else {
         //ignoring other mouse event and reseting button's state
         state = QStyle::State_Raised;
        return true;
    }

    QRect buttonRect( option.rect);
    buttonRect.setY(option.rect.y());
    buttonRect.setHeight(  option.rect.height());

    QMouseEvent* mouseEvent = static_cast<QMouseEvent*>(event);
    if( !buttonRect.contains( mouseEvent->pos()) ) {
        state = QStyle::State_Raised | QStyle::State_MouseOver;
        return true;
    }

    if( event->type() == QEvent::MouseButtonPress) {
        state = QStyle::State_Sunken | QStyle::State_HasFocus;
    } else if( event->type() == QEvent::MouseButtonRelease) {
        state = QStyle::State_Raised | QStyle::State_HasFocus;
        QString text = index.model()->data(index).toString();
        if(!text.isEmpty())
        {
            emit buttonClicked(index);
        }
    }
    return true;
}
