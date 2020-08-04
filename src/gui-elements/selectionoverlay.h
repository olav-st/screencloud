/* * ScreenCloud - An easy to use screenshot sharing application
 * Copyright (C) 2016 Olav Sortland Thoresen <olav.s.th@gmail.com>
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
#include <utils/log.h>
#include <QApplication>
#include <QDesktopWidget>
#include <QMessageBox>
#include <QScreen>

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

class SelectionOverlay : public QWidget
{
    Q_OBJECT
public:
    explicit SelectionOverlay(QWidget *parent = 0);
    virtual ~SelectionOverlay();
    void checkIfRubberBandOutOfBounds();
    int checkMouseOverRubberBand(QPoint& mousePos);
    void resetRubberBand();
    void updateScreenshot();
    void drawOverlay(QPainter *painter, const QColor &color);
    void drawRubberband(QPainter* painter, const QRect& rect, const QColor& color, int lineSize);
    void drawHandles(QPainter* painter, const QRect& rect, const QColor& color, int lineSize, int handleSize);
    void drawHelpText(QPainter *painter, const QColor &bgColor, const QColor &textColor);
    void moveToScreen(int screenNumber);

protected:
    void showEvent(QShowEvent *e);
    void hideEvent(QHideEvent *e);
    void paintEvent(QPaintEvent* pe);
    void mousePressEvent(QMouseEvent* event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void keyReleaseEvent(QKeyEvent *event);

private:
    void resizeLeft(QPoint& mousePos, QRect& rbGeometryBeforeResize);
    void resizeTop(QPoint& mousePos, QRect& rbGeometryBeforeResize);
    void resizeRight(QPoint& mousePos, QRect& rbGeometryBeforeResize);
    void resizeBottom(QPoint& mousePos, QRect& rbGeometryBeforeResize);

Q_SIGNALS:
    void selectionDone(QRect& area, QPixmap& screenshot);
    void selectionCanceled();
    void currentScreenChanged(int newScreenNumber);

private:
    //Cursors
    const static Qt::CursorShape crossShape = Qt::CrossCursor;
    const static Qt::CursorShape openHandShape = Qt::OpenHandCursor;
    const static Qt::CursorShape closedHandShape = Qt::ClosedHandCursor;
    const static Qt::CursorShape verticalShape = Qt::SizeVerCursor;
    const static Qt::CursorShape horizontalShape = Qt::SizeHorCursor;
    const static Qt::CursorShape leftDiagonalShape = Qt::SizeFDiagCursor;
    const static Qt::CursorShape rightDiagonalShape = Qt::SizeBDiagCursor;
    QPixmap screenshot;
    QRect selection, selectionBeforeDrag;
    QPoint selRectStart, selRectEnd;
    bool drawingRubberBand, movingRubberBand, resizingRubberBand, startedDrawingRubberBand;
    int resizingFrom;
    int rbDistX, rbDistY;
    int currentScreenNumber;

public Q_SLOTS:

};

#endif // SELECTIONOVERLAY_H
