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

#include "hotkeyeventfilter.h"
#include <QDebug>

HotkeyEventFilter::HotkeyEventFilter(QObject *parent) :
    QObject(parent)
{
}

bool HotkeyEventFilter::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::KeyPress) {
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        int keycode = keyEvent->key();
        switch(keyEvent->key())
        {
            case Qt::Key_CapsLock:
                return QObject::eventFilter(obj, event);
            case Qt::Key_NumLock:
                return QObject::eventFilter(obj, event);
            case Qt::Key_Return:
                emit keyRecorded("Return");
            case Qt::Key_Enter:
                emit keyRecorded("Enter");
            case Qt::Key_Shift:
                emit keyRecorded("Shift");
                break;
            case Qt::Key_Control:
                emit keyRecorded("Ctrl");
                break;
            case Qt::Key_Alt:
                emit keyRecorded("Alt");
                break;
            case Qt::Key_AltGr:
                emit keyRecorded("AltGr");
                break;
            case Qt::Key_Meta:
                emit keyRecorded("Super");
                break;
            default:
                emit keyRecorded(QKeySequence(keycode).toString(QKeySequence::NativeText));
                break;
        }
        return true;
    } else {
        // standard event processing
        return QObject::eventFilter(obj, event);
    }
}
