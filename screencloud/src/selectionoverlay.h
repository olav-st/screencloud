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

#ifndef SELECTIONOVERLAY_H
#define SELECTIONOVERLAY_H

#include "overlayitem.h"
#include "transparentrubberband.h"
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QPixmap>
#include <QWidget>
#include <QPainter>
#include <QCursor>
#include <QPoint>
#include <QMouseEvent>
#include <QRubberBand>
#include <QGraphicsRectItem>

#define MOUSE_OVER_LEFT 0x0
#define MOUSE_OVER_RIGHT 0x1
#define MOUSE_OVER_TOP 0x2
#define MOUSE_OVER_BOTTOM 0x3
#define MOUSE_OVER_INSIDE 0x4
#define MOUSE_OVER_TOPLEFT 0x5
#define MOUSE_OVER_TOPRIGHT 0x6
#define MOUSE_OVER_BOTTOMLEFT 0x7
#define MOUSE_OVER_BOTTOMRIGHT 0x8
#define MOUSE_OUT 0x9

class SelectionOverlay : public QGraphicsView
{
    Q_OBJECT
public:
    explicit SelectionOverlay(QWidget *parent = 0);
    virtual ~SelectionOverlay();
    void setScreenshot(QPixmap* screenshot);
    void checkIfRubberBandOutOfBounds();
    int checkMouseOverRubberBand(QPoint& mousePos);
    void drawForeground(QPainter *painter, const QRectF &rect);
    void resetRubberBand();
protected:
    void mousePressEvent(QMouseEvent* event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
signals:
    void selectionDone(QRect* area, QPixmap* screenshot);

private:
    //Cursors
    const static Qt::CursorShape crossShape = Qt::CrossCursor;
    const static Qt::CursorShape openHandShape = Qt::OpenHandCursor;
    const static Qt::CursorShape closedHandShape = Qt::ClosedHandCursor;
    const static Qt::CursorShape verticalShape = Qt::SizeVerCursor;
    const static Qt::CursorShape horizontalShape = Qt::SizeHorCursor;
    const static Qt::CursorShape leftDiagonalShape = Qt::SizeFDiagCursor;
    const static Qt::CursorShape rightDiagonalShape = Qt::SizeBDiagCursor;
    QGraphicsScene* scene;
    QPixmap* screenshot;
    QPoint selRectStart, selRectEnd;
    TransparentRubberBand* rubberBand;
    OverlayItem* overlay;
    QGraphicsRectItem* rubberBandRect;
    bool drawingRubberBand, movingRubberBand, resizingRubberBand;
    int resizingFrom;
    QRect rbGeometryBeforeResize;
    int rbDistX, rbDistY;

public slots:

};

#endif // SELECTIONOVERLAY_H
