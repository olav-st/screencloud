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

#include "selectionoverlay.h"

SelectionOverlay::SelectionOverlay(QWidget *parent) :
    QGraphicsView(parent)
{
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setStyleSheet( "QGraphicsView { border-style: none; }" );
    Qt::WindowStates state = windowState();
    state |= Qt::WindowFullScreen;
    state |= Qt::WindowActive;
    grabKeyboard();
    grabMouse();

    scene = new QGraphicsScene(this);
    scene->setItemIndexMethod(QGraphicsScene::NoIndex);
    rubberBand = new TransparentRubberBand(QRubberBand::Rectangle, this);
    rubberBand->setGeometry(0,0,0,0);
    rubberBandRect = new QGraphicsRectItem(rubberBand->geometry());
    rubberBandRect->setBrush(QBrush(QColor(100,100,100,0)));
    rbGeometryBeforeResize = QRect(0,0,0,0);
    resizingFrom = MOUSE_OUT;
    selRectStart = QPoint(0,0);
    selRectEnd = QPoint(0,0);
    rbDistX = 0;
    rbDistY = 0;
    drawingRubberBand = resizingRubberBand = movingRubberBand = false;
    setScene(scene);
    setWindowState( state );
    setMouseTracking(true);
    //Set mau5 cursor
    setCursor(crossShape);
}
SelectionOverlay::~SelectionOverlay()
{
    delete rubberBand;
    delete overlay;
    delete scene;
}


void SelectionOverlay::setScreenshot(QPixmap* screenshot)
{
    this->screenshot = screenshot;
    scene->addPixmap(*screenshot);
    scene->setSceneRect(screenshot->rect());
    overlay = new OverlayItem(QRectF(0, 0, scene->width(), scene->height()));
    scene->addItem(overlay);
}

void SelectionOverlay::mousePressEvent(QMouseEvent *event)
{
    //Stop the overlay from drawing help text
    overlay->startedDrawingRubberBand = true;
    this->repaint();
    QPoint mousePos = event->pos();
    //Check if the mau5 is over the rubber band
    if(checkMouseOverRubberBand(mousePos) == MOUSE_OVER_INSIDE)
    {
        movingRubberBand = true;
        drawingRubberBand = false;
        resizingRubberBand = false;
        rbDistX = event->pos().x() - rubberBand->x();
        rbDistY = event->pos().y() - rubberBand->y();
        setCursor(closedHandShape);
    }else if(checkMouseOverRubberBand(mousePos) == MOUSE_OVER_LEFT || checkMouseOverRubberBand(mousePos) == MOUSE_OVER_RIGHT || checkMouseOverRubberBand(mousePos) == MOUSE_OVER_TOP || checkMouseOverRubberBand(mousePos) == MOUSE_OVER_BOTTOM || checkMouseOverRubberBand(mousePos) == MOUSE_OVER_TOPLEFT || checkMouseOverRubberBand(mousePos) == MOUSE_OVER_TOPRIGHT || checkMouseOverRubberBand(mousePos) == MOUSE_OVER_BOTTOMLEFT || checkMouseOverRubberBand(mousePos) == MOUSE_OVER_BOTTOMRIGHT)
    {
        resizingRubberBand = true;
        drawingRubberBand = false;
        movingRubberBand = false;
        resizingFrom = checkMouseOverRubberBand(mousePos);
        rbGeometryBeforeResize = rubberBand->geometry();
    }else
    {
        drawingRubberBand = true;
        movingRubberBand = false;
        resizingRubberBand = false;
        selRectStart = event->pos();
        rubberBand->show();
    }
}

void SelectionOverlay::mouseReleaseEvent(QMouseEvent *event)
{
    selRectEnd = event->pos();
    drawingRubberBand = false;
    movingRubberBand = false;
    resizingRubberBand = false;
}
void SelectionOverlay::mouseMoveEvent(QMouseEvent *event)
{
    //Check if the mau5 is over the rubber band
    QPoint mousePos = event->pos();
    if(checkMouseOverRubberBand(mousePos) == MOUSE_OVER_INSIDE)
    {
        //Mouse is over rubber band
        if(!drawingRubberBand && !movingRubberBand && !resizingRubberBand)
        {
            setCursor(openHandShape);
        }
    }else if(!drawingRubberBand && !resizingRubberBand)
    {
        setCursor(crossShape);
    }
    //If the mau5 is on the left side of the rubberband
    if(!movingRubberBand && !drawingRubberBand && !resizingRubberBand && (checkMouseOverRubberBand(mousePos) == MOUSE_OVER_LEFT || checkMouseOverRubberBand(mousePos) == MOUSE_OVER_RIGHT))
    {
        setCursor(horizontalShape);
    }
    if(!movingRubberBand && !drawingRubberBand && !resizingRubberBand && (checkMouseOverRubberBand(mousePos) == MOUSE_OVER_TOP || checkMouseOverRubberBand(mousePos) == MOUSE_OVER_BOTTOM))
    {
        setCursor(verticalShape);
    }
    if(!movingRubberBand && !drawingRubberBand && !resizingRubberBand && (checkMouseOverRubberBand(mousePos) == MOUSE_OVER_TOPLEFT || checkMouseOverRubberBand(mousePos) == MOUSE_OVER_BOTTOMRIGHT))
    {
        setCursor(leftDiagonalShape);
    }
    if(!movingRubberBand && !drawingRubberBand && !resizingRubberBand && (checkMouseOverRubberBand(mousePos) == MOUSE_OVER_TOPRIGHT || checkMouseOverRubberBand(mousePos) == MOUSE_OVER_BOTTOMLEFT))
    {
        setCursor(rightDiagonalShape);
    }
    if(event->buttons() == Qt::LeftButton && movingRubberBand)
    {
        rubberBand->move(event->pos().x() - rbDistX , event->pos().y() - rbDistY);
        checkIfRubberBandOutOfBounds();
        QRect leRect = rubberBand->geometry();
        overlay->setTransparentArea(leRect);
    }
    if(event->buttons() == Qt::LeftButton && drawingRubberBand)
    {
        selRectEnd = event->pos();
        rubberBand->setGeometry(QRect(selRectStart, selRectEnd).normalized());
        if(rubberBand->width() > 0 || rubberBand->height() > 0)
        {
            QRect leRect = rubberBand->geometry();
            overlay->setTransparentArea(leRect);
            overlay->update();
        }
    }
    if(event->buttons() == Qt::LeftButton && resizingRubberBand)
    {
        switch(resizingFrom)
        {
        case MOUSE_OVER_LEFT:
            if(rubberBand->x() < rbGeometryBeforeResize.x() + rbGeometryBeforeResize.width())
            {
                rubberBand->resizeLeft(mousePos, rbGeometryBeforeResize);
            }else
            {
                resizingFrom = MOUSE_OVER_RIGHT;
                rbGeometryBeforeResize = rubberBand->geometry();
                rubberBand->move(rbGeometryBeforeResize.topLeft());
            }
            break;
        case MOUSE_OVER_RIGHT:
            if(mousePos.x() > rbGeometryBeforeResize.x())
            {
                rubberBand->resizeRight(mousePos, rbGeometryBeforeResize);
            }else
            {
                resizingFrom = MOUSE_OVER_LEFT;
                rbGeometryBeforeResize = rubberBand->geometry();
            }
            break;
        case MOUSE_OVER_TOP:
            if(rubberBand->y() < rbGeometryBeforeResize.y() + rbGeometryBeforeResize.height())
            {
                rubberBand->resizeTop(mousePos, rbGeometryBeforeResize);
            }else
            {
                resizingFrom = MOUSE_OVER_BOTTOM;
                rbGeometryBeforeResize = rubberBand->geometry();
                rubberBand->move(rbGeometryBeforeResize.topLeft());
            }
            break;
        case MOUSE_OVER_BOTTOM:
            if(mousePos.y() > rubberBand->y())
            {
                rubberBand->resizeBottom(mousePos, rbGeometryBeforeResize);
            }else
            {
                resizingFrom = MOUSE_OVER_TOP;
                rbGeometryBeforeResize = rubberBand->geometry();
            }
            break;
        case MOUSE_OVER_TOPLEFT:
            if(rubberBand->x() < rbGeometryBeforeResize.x() + rbGeometryBeforeResize.width())
            {
                rubberBand->resizeTop(mousePos, rbGeometryBeforeResize);
                rubberBand->resizeLeft(mousePos, rbGeometryBeforeResize);
            }else
            {
                resizingFrom = MOUSE_OVER_BOTTOMRIGHT;
                rbGeometryBeforeResize = rubberBand->geometry();
                rubberBand->move(rbGeometryBeforeResize.topLeft());
            }
            break;
        case MOUSE_OVER_TOPRIGHT:
            if(mousePos.x() > rbGeometryBeforeResize.x())
            {
                rubberBand->resizeTop(mousePos, rbGeometryBeforeResize);
                rubberBand->resizeRight(mousePos, rbGeometryBeforeResize);
            }else
            {
                resizingFrom = MOUSE_OVER_BOTTOMLEFT;
                rbGeometryBeforeResize = rubberBand->geometry();
            }
            break;
        case MOUSE_OVER_BOTTOMLEFT:
            if(mousePos.x() < rbGeometryBeforeResize.x() + rbGeometryBeforeResize.width())
            {
                rubberBand->resizeBottom(mousePos, rbGeometryBeforeResize);
                rubberBand->resizeLeft(mousePos, rbGeometryBeforeResize);
            }else
            {
                resizingFrom = MOUSE_OVER_TOPRIGHT;
                rbGeometryBeforeResize = rubberBand->geometry();
            }
            break;
        case MOUSE_OVER_BOTTOMRIGHT:
            if(mousePos.x() > rbGeometryBeforeResize.x())
            {
                rubberBand->resizeBottom(mousePos, rbGeometryBeforeResize);
                rubberBand->resizeRight(mousePos, rbGeometryBeforeResize);
            }else
            {
                resizingFrom = MOUSE_OVER_TOPLEFT;
                rbGeometryBeforeResize = rubberBand->geometry();
            }
            break;
        }
        QRect leRect = rubberBand->geometry();
        overlay->setTransparentArea(leRect);
        overlay->update();
    }
}

void SelectionOverlay::keyReleaseEvent(QKeyEvent *event)
{
    if(event->matches(QKeySequence::Save) || event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter)
    {
        QRect leRect = rubberBand->geometry();
        rubberBand->hide();
        this->close();
        emit selectionDone(&leRect, screenshot);
    }else if(event->matches(QKeySequence::Quit) || event->key() == Qt::Key_Escape)
    {
        this->close();
    }
}

void SelectionOverlay::checkIfRubberBandOutOfBounds()
{
    if(rubberBand->x() < 0)
    {
        rubberBand->move(0, rubberBand->y());
    }
    if(rubberBand->y() < 0)
    {
        rubberBand->move(rubberBand->x(), 0);
    }
    if(rubberBand->x() + rubberBand->width() > this->width())
    {
        rubberBand->move(this->width() - rubberBand->width(), rubberBand->y());
    }
    if(rubberBand->y() + rubberBand->height() > this->height())
    {
        rubberBand->move(rubberBand->x(), this->height() - rubberBand->height());
    }
}

int SelectionOverlay::checkMouseOverRubberBand(QPoint& mousePos)
{
    int padding_width = 15;
    int padding_height = 15;
    QRect hoverLeft = QRect(rubberBand->x() - padding_width, rubberBand->y() + padding_height, padding_width * 2, rubberBand->height() - padding_height *2);
    QRect hoverRight = QRect(rubberBand->x() + rubberBand->width() - padding_width, rubberBand->y() + padding_height, padding_width*2, rubberBand->height() - padding_height*2);
    QRect hoverTop = QRect(rubberBand->x() + padding_width, rubberBand->y() - padding_height, rubberBand->width() - padding_width*2, padding_height*2);
    QRect hoverBottom = QRect(rubberBand->x() + padding_width, rubberBand->y() + rubberBand->height() - padding_height, rubberBand->width() - padding_width*2, padding_height*2);
    QRect hoverTopLeft = QRect(rubberBand->x() - padding_width, rubberBand->y() - padding_height, padding_width * 2, padding_height * 2);
    QRect hoverTopRight = QRect(rubberBand->x() + rubberBand->width() - padding_width, rubberBand->y() - padding_height, padding_width*2, padding_height*2);
    QRect hoverBottomLeft = QRect(rubberBand->x() - padding_width, rubberBand->y() + rubberBand->height() - padding_height, padding_width*2, padding_height*2);
    QRect hoverBottomRight = QRect(rubberBand->x() + rubberBand->width() - padding_width, rubberBand->y() + rubberBand->height() - padding_height, padding_width*2, padding_height*2);
    if(rubberBand->width() > 0 && rubberBand->height() > 0)
    {
        if(hoverLeft.contains(mousePos))
        {
            return MOUSE_OVER_LEFT;
        }
        if(hoverRight.contains(mousePos))
        {
            return MOUSE_OVER_RIGHT;
        }
        if(hoverTop.contains(mousePos))
        {
            return MOUSE_OVER_TOP;
        }
        if(hoverBottom.contains(mousePos))
        {
            return MOUSE_OVER_BOTTOM;
        }
        if(hoverTopLeft.contains(mousePos))
        {
            return MOUSE_OVER_TOPLEFT;
        }
        if(hoverTopRight.contains(mousePos))
        {
            return MOUSE_OVER_TOPRIGHT;
        }
        if(hoverBottomLeft.contains(mousePos))
        {
            return MOUSE_OVER_BOTTOMLEFT;
        }
        if(hoverBottomRight.contains(mousePos))
        {
            return MOUSE_OVER_BOTTOMRIGHT;
        }
        if(mousePos.x() > rubberBand->x() + 1 && mousePos.y() > rubberBand->y() + 1 && mousePos.x() < rubberBand->x() + rubberBand->width() && mousePos.y() < rubberBand->y() + rubberBand->height())
        {
            //Mouse is inside rubber band
            return MOUSE_OVER_INSIDE;
        }
        return MOUSE_OUT;
    }
    return MOUSE_OUT;

}

void SelectionOverlay::drawForeground(QPainter *painter, const QRectF &rect)
{
    //NOTE: Debug stuff commented out
    /*
    int padding_width = 15;
    int padding_height = 15;
    QRect hoverLeft = QRect(rubberBand->x() - padding_width, rubberBand->y() + padding_height, padding_width * 2, rubberBand->height() - padding_height *2);
    QRect hoverRight = QRect(rubberBand->x() + rubberBand->width() - padding_width, rubberBand->y() + padding_height, padding_width*2, rubberBand->height() - padding_height*2);
    QRect hoverTop = QRect(rubberBand->x() + padding_width, rubberBand->y() - padding_height, rubberBand->width() - padding_width*2, padding_height*2);
    QRect hoverBottom = QRect(rubberBand->x() + padding_width, rubberBand->y() + rubberBand->height() - padding_height, rubberBand->width() - padding_width*2, padding_height*2);
    QRect hoverTopLeft = QRect(rubberBand->x() - padding_width, rubberBand->y() - padding_height, padding_width * 2, padding_height * 2);
    QRect hoverTopRight = QRect(rubberBand->x() + rubberBand->width() - padding_width, rubberBand->y() - padding_height, padding_width*2, padding_height*2);
    QRect hoverBottomLeft = QRect(rubberBand->x() - padding_width, rubberBand->y() + rubberBand->height() - padding_height, padding_width*2, padding_height*2);
    QRect hoverBottomRight = QRect(rubberBand->x() + rubberBand->width() - padding_width, rubberBand->y() + rubberBand->height() - padding_height, padding_width*2, padding_height*2);
    painter->drawRect(hoverLeft);
    painter->drawRect(hoverRight);
    painter->drawRect(hoverTop);
    painter->drawRect(hoverBottom);
    painter->drawRect(hoverTopLeft);
    painter->drawRect(hoverTopRight);
    painter->drawRect(hoverBottomRight);
    painter->drawRect(hoverBottomLeft);
    */
}

void SelectionOverlay::resetRubberBand()
{
    rubberBand->setGeometry(0,0,0,0);
    rubberBandRect = new QGraphicsRectItem(rubberBand->geometry());
    rubberBandRect->setBrush(QBrush(QColor(100,100,100,0)));
    rbGeometryBeforeResize = QRect(0,0,0,0);
    resizingFrom = MOUSE_OUT;
    selRectStart = QPoint(0,0);
    selRectEnd = QPoint(0,0);
    rbDistX = 0;
    rbDistY = 0;
    drawingRubberBand = resizingRubberBand = movingRubberBand = false;
}
