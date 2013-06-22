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

#ifndef HOTKEYEVENTFILTER_H
#define HOTKEYEVENTFILTER_H

#include <QObject>
#include <QKeySequence>
#include <QEvent>
#include <QKeyEvent>

class HotkeyEventFilter : public QObject
{
    Q_OBJECT
public:
    explicit HotkeyEventFilter(QObject *parent = 0);
    QKeySequence* getHotkey();
protected:
    bool eventFilter(QObject *obj, QEvent *event);

signals:
    void keyRecorded(QString key);
public slots:

};

#endif // HOTKEYEVENTFILTER_H
