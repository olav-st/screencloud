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

#include "transparentrubberband.h"

TransparentRubberBand::TransparentRubberBand(Shape shape, QWidget *parent) : QRubberBand(shape,parent)
{
}

void TransparentRubberBand::paintEvent(QPaintEvent *pe)
{
    pal = new QPalette(Qt::transparent);
    setPalette(*pal);

    Q_UNUSED(pe);

    QPainter painter;
#ifdef Q_OS_LINUX
    QPen pen(Qt::red, 6);
#else
    QPen pen(Qt::red, 4);
#endif
    pen.setStyle(Qt::DashLine);

    painter.begin(this);
    painter.setPen(pen);
    painter.drawRect(pe->rect());
    painter.end();
}

void TransparentRubberBand::resizeLeft(QPoint &mousePos, QRect &rbGeometryBeforeResize)
{
    this->move(mousePos.x(), this->y());
    this->resize(rbGeometryBeforeResize.width() - (mousePos.x()- rbGeometryBeforeResize.x()), this->height());
}

void TransparentRubberBand::resizeTop(QPoint &mousePos, QRect &rbGeometryBeforeResize)
{
    this->move(this->x(), mousePos.y());
    this->resize(this->width(), rbGeometryBeforeResize.height() - (mousePos.y()- rbGeometryBeforeResize.y()));
}

void TransparentRubberBand::resizeRight(QPoint &mousePos, QRect &rbGeometryBeforeResize)
{
    this->resize(mousePos.x() - rbGeometryBeforeResize.x() , this->height());
}

void TransparentRubberBand::resizeBottom(QPoint &mousePos, QRect &rbGeometryBeforeResize)
{
    this->resize(this->width(), mousePos.y() - rbGeometryBeforeResize.y() );
}
