//
// ScreenCloud - An easy to use screenshot sharing application
// Copyright (C) 2014 Olav Sortland Thoresen <olav.s.th@gmail.com>
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
#include <utils/log.h>

HotkeyEventFilter::HotkeyEventFilter(QObject *parent) :
    QObject(parent)
{
}

bool HotkeyEventFilter::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::KeyPress) {
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        int keycode = keyEvent->key();
        Qt::Key key = static_cast<Qt::Key>(keycode);
        if( key == Qt::Key_unknown )
        {
            return false;
        }
        // Checking for key combinations
        Qt::KeyboardModifiers modifiers = keyEvent->modifiers();

        Q_EMIT keyRecorded(key, keycode, modifiers);
    } else {
        // standard event processing
        return QObject::eventFilter(obj, event);
    }
    return true;
}
