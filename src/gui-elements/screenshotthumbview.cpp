//
// ScreenCloud - An easy to use screenshot sharing application
// Copyright (C) 2016 Olav Sortland Thoresen <olav.s.th@gmail.com>
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

#include "screenshotthumbview.h"

ScreenshotThumbView::ScreenshotThumbView(QWidget *parent) :
    QGraphicsView(parent)
{
    hovered = false;
}

void ScreenshotThumbView::drawOverlay(QPainter *painter, const QColor &color)
{
    painter->save();
    QBrush rectBrush = QBrush(color, Qt::SolidPattern);
    painter->setBrush(rectBrush);
    painter->setPen(Qt::NoPen);
    if(this->width() > 0 && this->height() > 0)
    {
        painter->drawRect(this->rect());
    }
    painter->restore();
}

void ScreenshotThumbView::drawText(QPainter *painter, const QColor &bgColor, const QColor &textColor)
{
    painter->save();
    QBrush roundedRectBrush = QBrush(bgColor);
    QPen roundedRectPen = QPen(roundedRectBrush, 1.0);
    QBrush textBrush = QBrush(textColor);
    QFont d;
    QFont f(d.defaultFamily(), 20, QFont::Normal);
    QRect textRect = QRect(0, 0, this->width() / 2, this->height() / 6);
    textRect.moveCenter(this->rect().center());

    painter->setBrush(roundedRectBrush);
    painter->setPen(roundedRectPen);
    painter->drawRoundedRect(textRect, 10.0, 10.0);

    painter->setFont(f);
    painter->setBrush(textBrush);
    painter->setPen(QPen(textBrush, 1.0));
    painter->drawText(this->rect(), Qt::AlignCenter, tr("Click to edit"));
    painter->restore();
}

void ScreenshotThumbView::drawEditHint(QPainter *painter, const QColor &color)
{
    painter->save();
    QBrush rectBrush = QBrush(color, Qt::SolidPattern);
    painter->setBrush(rectBrush);
    painter->setPen(Qt::NoPen);
    if(this->width() > 0 && this->height() > 0)
    {
        QRect rect = QRect(8, this->height() - 42, 32, 32);
        painter->drawRoundedRect(rect, 5.0, 5.0);
        QPixmap icon = QPixmap (":/editor/editor-hint.png");
        painter->drawPixmap(rect.x() + (rect.width() - 20) / 2, rect.y() + (rect.height() - 20) / 2, 20, 20, icon);
    }
    painter->restore();
}

void ScreenshotThumbView::mouseReleaseEvent(QMouseEvent *event)
{
    Q_EMIT clicked();
}

void ScreenshotThumbView::paintEvent(QPaintEvent *pe)
{
    QGraphicsView::paintEvent(pe);
    if(hovered)
    {
        QPainter painter(viewport());
        drawOverlay(&painter, QColor(100,100,100,60));
        drawText(&painter, QColor(28,28,28,200), QColor(127,127,127,240));
    }else
    {
        QPainter painter(viewport());
        drawEditHint(&painter,  QColor(28,28,28,150));
    }
}

void ScreenshotThumbView::enterEvent(QEvent *e)
{
    hovered = true;
    this->viewport()->update();
    setCursor(Qt::PointingHandCursor);
    QGraphicsView::enterEvent(e);
}

void ScreenshotThumbView::leaveEvent(QEvent *e)
{
    hovered = false;
    this->viewport()->update();
    setCursor(Qt::ArrowCursor);
    QGraphicsView::leaveEvent(e);
}


