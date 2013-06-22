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

#ifndef TRANSPARENTRUBBERBAND_H
#define TRANSPARENTRUBBERBAND_H

#include <QRubberBand>
#include <QPalette>
#include <QPaintEvent>
#include <QPainter>

class TransparentRubberBand : public QRubberBand
{
    Q_OBJECT
public:
    TransparentRubberBand(Shape shape, QWidget *parent = 0);
protected:
    void paintEvent(QPaintEvent* pe);
public:
    void resizeLeft(QPoint& mousePos, QRect& rbGeometryBeforeResize);
    void resizeTop(QPoint& mousePos, QRect& rbGeometryBeforeResize);
    void resizeRight(QPoint& mousePos, QRect& rbGeometryBeforeResize);
    void resizeBottom(QPoint& mousePos, QRect& rbGeometryBeforeResize);
private:
    QPalette* pal;
};

#endif // TRANSPARENTRUBBERBAND_H
