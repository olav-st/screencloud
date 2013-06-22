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

#include "overlayitem.h"

OverlayItem::OverlayItem()
{
    bounds = QRect(0,0,0,0);
    transparentArea = QRect(0,0,0,0);
    startedDrawingRubberBand = false;
}
OverlayItem::OverlayItem(QRectF itemBounds)
{
    bounds = itemBounds;
    transparentArea = QRect(0,0,0,0);
    startedDrawingRubberBand = false;
}

QRectF OverlayItem::boundingRect() const
{
    return bounds;
}
void OverlayItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QFont d;
    QBrush rectBrush = QBrush(QColor(100,100,100,140));
    QBrush roundedRectBrush = QBrush(QColor(28,28,28,220));
    QPen roundedRectPen = QPen(roundedRectBrush, 1.0);
    QBrush textBrush = QBrush(QColor(127,127,127,240));

    QFont f(d.defaultFamily(), 22, QFont::Normal);
    painter->setFont(f);
    painter->setRenderHint(QPainter::NonCosmeticDefaultPen);

    QRect left = QRect(bounds.x(),bounds.y(),transparentArea.x(), transparentArea.y() + transparentArea.height());
    QRect right = QRect(transparentArea.x()+ transparentArea.width(),bounds.y(), bounds.width() - transparentArea.width(), transparentArea.y() + transparentArea.height());
    QRect top = QRect(transparentArea.x(),bounds.y(),transparentArea.width(), transparentArea.y());
    QRect bottom = QRect(bounds.x(),transparentArea.y() + transparentArea.height(),bounds.width(), bounds.height() - transparentArea.y());

    painter->fillRect(left, rectBrush);
    painter->fillRect(top, rectBrush);
    painter->fillRect(bottom, rectBrush);
    painter->fillRect(right, rectBrush);
    //Draw help text
    if(!startedDrawingRubberBand)
    {
        QRect helpTextRect = QRect(bounds.x() + bounds.width()/2 - 300, bounds.y() + bounds.height() /2 - 50, 620, 100);
        painter->setBrush(roundedRectBrush);
        painter->setPen(roundedRectPen);
        painter->drawRoundedRect(helpTextRect, 10.0, 10.0);
        painter->setBrush(textBrush);
        painter->setPen(QPen(textBrush, 1.0));
        painter->drawText(helpTextRect, Qt::AlignCenter, "Draw a a rectangular area using the mouse.\nPress enter to take a screenshot or esc to exit.");
    }
}


void OverlayItem::setTransparentArea(QRect& area)
{
    transparentArea = area;
}
