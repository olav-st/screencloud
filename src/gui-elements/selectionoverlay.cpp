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

#include "selectionoverlay.h"

SelectionOverlay::SelectionOverlay(QWidget *parent) :
    QWidget(parent)
{
    setWindowTitle("ScreenCloud - Selection");
    selection = QRect(0,0,0,0);
    selectionBeforeDrag = QRect(0,0,0,0);
    resizingFrom = MOUSE_OUT;
    selRectStart = QPoint(0,0);
    selRectEnd = QPoint(0,0);
    rbDistX = 0;
    rbDistY = 0;
    drawingRubberBand = resizingRubberBand = movingRubberBand = false;
    currentScreenNumber = QApplication::desktop()->screenNumber(QCursor::pos());
    setWindowFlags( this->windowFlags() | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint | Qt::Tool);
    setFocusPolicy( Qt::StrongFocus );
    setMouseTracking(true);
    setCursor(crossShape);
}
SelectionOverlay::~SelectionOverlay()
{
}


void SelectionOverlay::showEvent(QShowEvent *e)
{
    this->raise();
    this->repaint();
    this->activateWindow();
    setWindowState(Qt::WindowFullScreen);
}

void SelectionOverlay::hideEvent(QHideEvent *e)
{
    Q_EMIT selectionCanceled();
}


void SelectionOverlay::mousePressEvent(QMouseEvent *event)
{
    this->activateWindow();
    //Stop the overlay from drawing help text
    startedDrawingRubberBand = true;
    QPoint mousePos = event->pos();
    //Check if the mouse is over the rubber band
    if(checkMouseOverRubberBand(mousePos) == MOUSE_OVER_INSIDE)
    {
        movingRubberBand = true;
        drawingRubberBand = false;
        resizingRubberBand = false;
        rbDistX = event->pos().x() - selection.x();
        rbDistY = event->pos().y() - selection.y();
        setCursor(closedHandShape);
    }else if(checkMouseOverRubberBand(mousePos) == MOUSE_OVER_LEFT || checkMouseOverRubberBand(mousePos) == MOUSE_OVER_RIGHT || checkMouseOverRubberBand(mousePos) == MOUSE_OVER_TOP || checkMouseOverRubberBand(mousePos) == MOUSE_OVER_BOTTOM || checkMouseOverRubberBand(mousePos) == MOUSE_OVER_TOPLEFT || checkMouseOverRubberBand(mousePos) == MOUSE_OVER_TOPRIGHT || checkMouseOverRubberBand(mousePos) == MOUSE_OVER_BOTTOMLEFT || checkMouseOverRubberBand(mousePos) == MOUSE_OVER_BOTTOMRIGHT)
    {
        resizingRubberBand = true;
        drawingRubberBand = false;
        movingRubberBand = false;
        resizingFrom = checkMouseOverRubberBand(mousePos);
        selectionBeforeDrag = selection;
    }else
    {
        drawingRubberBand = true;
        movingRubberBand = false;
        resizingRubberBand = false;
        selRectStart = event->pos();
    }
    this->repaint();
}

void SelectionOverlay::mouseReleaseEvent(QMouseEvent *event)
{
    selRectEnd = event->pos();
    drawingRubberBand = false;
    movingRubberBand = false;
    resizingRubberBand = false;
    this->repaint();
}
void SelectionOverlay::mouseMoveEvent(QMouseEvent *event)
{
    //Check if the mouse is over the rubber band
    QPoint mousePos = event->pos();
    if(checkMouseOverRubberBand(mousePos) == MOUSE_OVER_INSIDE)
    {
        //Mouse is over rubber band
        if(!drawingRubberBand && !movingRubberBand && !resizingRubberBand)
        {
            setCursor(openHandShape);
        }else if(movingRubberBand)
        {
            setCursor(closedHandShape);
        }
    }
    //If the mouse is on the left side of the rubberband
    else if(!movingRubberBand && !drawingRubberBand && (checkMouseOverRubberBand(mousePos) == MOUSE_OVER_LEFT || checkMouseOverRubberBand(mousePos) == MOUSE_OVER_RIGHT))
    {
        setCursor(horizontalShape);
    }
    else if(!movingRubberBand && !drawingRubberBand && (checkMouseOverRubberBand(mousePos) == MOUSE_OVER_TOP || checkMouseOverRubberBand(mousePos) == MOUSE_OVER_BOTTOM))
    {
        setCursor(verticalShape);
    }
    else if(!movingRubberBand && !drawingRubberBand && (checkMouseOverRubberBand(mousePos) == MOUSE_OVER_TOPLEFT || checkMouseOverRubberBand(mousePos) == MOUSE_OVER_BOTTOMRIGHT))
    {
        setCursor(leftDiagonalShape);
    }
    else if(!movingRubberBand && !drawingRubberBand && (checkMouseOverRubberBand(mousePos) == MOUSE_OVER_TOPRIGHT || checkMouseOverRubberBand(mousePos) == MOUSE_OVER_BOTTOMLEFT))
    {
        setCursor(rightDiagonalShape);
    }
    else if(!movingRubberBand && !resizingRubberBand)
    {
        setCursor(crossShape);
    }
    if(event->buttons() == Qt::LeftButton && movingRubberBand)
    {
        selection.moveTo(event->pos().x() - rbDistX , event->pos().y() - rbDistY);
        checkIfRubberBandOutOfBounds();
    }
    if(event->buttons() == Qt::LeftButton && drawingRubberBand)
    {
        selRectEnd = event->pos();
        selection = QRect(selRectStart, selRectEnd).normalized();
        selection = selection.intersected(this->rect());
    }
    if(event->buttons() == Qt::LeftButton && resizingRubberBand)
    {
        switch(resizingFrom)
        {
        case MOUSE_OVER_LEFT:
            if(selection.x() < selectionBeforeDrag.x() + selectionBeforeDrag.width())
            {
                resizeLeft(mousePos, selectionBeforeDrag);
            }else
            {
                resizingFrom = MOUSE_OVER_RIGHT;
                selectionBeforeDrag = selection;
                selection.moveTo(selectionBeforeDrag.topLeft());
            }
            break;
        case MOUSE_OVER_RIGHT:
            if(mousePos.x() > selectionBeforeDrag.x())
            {
                resizeRight(mousePos, selectionBeforeDrag);
            }else
            {
                resizingFrom = MOUSE_OVER_LEFT;
                selectionBeforeDrag = selection;
            }
            break;
        case MOUSE_OVER_TOP:
            if(selection.y() < selectionBeforeDrag.y() + selectionBeforeDrag.height())
            {
                resizeTop(mousePos, selectionBeforeDrag);
            }else
            {
                resizingFrom = MOUSE_OVER_BOTTOM;
                selectionBeforeDrag = selection;
                selection.moveTo(selectionBeforeDrag.topLeft());
            }
            break;
        case MOUSE_OVER_BOTTOM:
            if(mousePos.y() > selection.y())
            {
                resizeBottom(mousePos, selectionBeforeDrag);
            }else
            {
                resizingFrom = MOUSE_OVER_TOP;
                selectionBeforeDrag = selection;
            }
            break;
        case MOUSE_OVER_TOPLEFT:
            if(selection.x() < selectionBeforeDrag.x() + selectionBeforeDrag.width())
            {
                resizeTop(mousePos, selectionBeforeDrag);
                resizeLeft(mousePos, selectionBeforeDrag);
            }else
            {
                resizingFrom = MOUSE_OVER_BOTTOMRIGHT;
                selectionBeforeDrag = selection;
                selection.moveTo(selectionBeforeDrag.topLeft());
            }
            break;
        case MOUSE_OVER_TOPRIGHT:
            if(mousePos.x() > selectionBeforeDrag.x())
            {
                resizeTop(mousePos, selectionBeforeDrag);
                resizeRight(mousePos, selectionBeforeDrag);
            }else
            {
                resizingFrom = MOUSE_OVER_BOTTOMLEFT;
                selectionBeforeDrag = selection;
            }
            break;
        case MOUSE_OVER_BOTTOMLEFT:
            if(mousePos.x() < selectionBeforeDrag.x() + selectionBeforeDrag.width())
            {
                resizeBottom(mousePos, selectionBeforeDrag);
                resizeLeft(mousePos, selectionBeforeDrag);
            }else
            {
                resizingFrom = MOUSE_OVER_TOPRIGHT;
                selectionBeforeDrag = selection;
            }
            break;
        case MOUSE_OVER_BOTTOMRIGHT:
            if(mousePos.x() > selectionBeforeDrag.x())
            {
                resizeBottom(mousePos, selectionBeforeDrag);
                resizeRight(mousePos, selectionBeforeDrag);
            }else
            {
                resizingFrom = MOUSE_OVER_TOPLEFT;
                selectionBeforeDrag = selection;
            }
            break;
        }
    }
    if(selection.width() < 0 || selection.height() < 0)
    {
        selection = selection.normalized();
    }
    if(drawingRubberBand || movingRubberBand || resizingRubberBand)
    {
        this->repaint();
    }
    selection = selection.intersected(this->rect());
}

void SelectionOverlay::keyReleaseEvent(QKeyEvent *event)
{
    if(event->matches(QKeySequence::Save) || event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter)
    {
        Q_EMIT selectionDone(selection, screenshot);
        this->close();
    }else if(event->matches(QKeySequence::Quit) || event->key() == Qt::Key_Escape)
    {
        Q_EMIT selectionCanceled();
        this->close();
    }else if(event->key() == Qt::Key_Left || event->key() == Qt::Key_A)
    {
        if(QApplication::desktop()->screenCount() > 1)
        {
            this->moveToScreen(currentScreenNumber + 1);
        }
    }else if(event->key() == Qt::Key_Right || event->key() == Qt::Key_D)
    {
        if(QApplication::desktop()->screenCount() > 1)
        {
            this->moveToScreen(currentScreenNumber - 1);
        }
    }
    QWidget::keyReleaseEvent(event);
}

void SelectionOverlay::checkIfRubberBandOutOfBounds()
{
    if(selection.x() < 0)
    {
        selection.moveTo(0, selection.y());
    }
    if(selection.y() < 0)
    {
        selection.moveTo(selection.x(), 0);
    }
    if(selection.x() + selection.width() > this->width())
    {
        selection.moveTo(this->width() - selection.width(), selection.y());
    }
    if(selection.y() + selection.height() > this->height())
    {
        selection.moveTo(selection.x(), this->height() - selection.height());
    }
}

int SelectionOverlay::checkMouseOverRubberBand(QPoint& mousePos)
{
    int padding_width = 15;
    int padding_height = 15;
    QRect hoverLeft = QRect(selection.x() - padding_width, selection.y() + padding_height, padding_width * 2, selection.height() - padding_height *2);
    QRect hoverRight = QRect(selection.x() + selection.width() - padding_width, selection.y() + padding_height, padding_width*2, selection.height() - padding_height*2);
    QRect hoverTop = QRect(selection.x() + padding_width, selection.y() - padding_height, selection.width() - padding_width*2, padding_height*2);
    QRect hoverBottom = QRect(selection.x() + padding_width, selection.y() + selection.height() - padding_height, selection.width() - padding_width*2, padding_height*2);
    QRect hoverTopLeft = QRect(selection.x() - padding_width, selection.y() - padding_height, padding_width * 2, padding_height * 2);
    QRect hoverTopRight = QRect(selection.x() + selection.width() - padding_width, selection.y() - padding_height, padding_width*2, padding_height*2);
    QRect hoverBottomLeft = QRect(selection.x() - padding_width, selection.y() + selection.height() - padding_height, padding_width*2, padding_height*2);
    QRect hoverBottomRight = QRect(selection.x() + selection.width() - padding_width, selection.y() + selection.height() - padding_height, padding_width*2, padding_height*2);
    if(selection.width() > 0 && selection.height() > 0)
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
        if(mousePos.x() > selection.x() + 1 && mousePos.y() > selection.y() + 1 && mousePos.x() < selection.x() + selection.width() && mousePos.y() < selection.y() + selection.height())
        {
            //Mouse is inside rubber band
            return MOUSE_OVER_INSIDE;
        }
        return MOUSE_OUT;
    }
    return MOUSE_OUT;

}

void SelectionOverlay::resetRubberBand()
{
    selection = QRect(0,0,0,0);
    selectionBeforeDrag = QRect(0,0,0,0);
    resizingFrom = MOUSE_OUT;
    selRectStart = QPoint(0,0);
    selRectEnd = QPoint(0,0);
    rbDistX = 0;
    rbDistY = 0;
    drawingRubberBand = resizingRubberBand = movingRubberBand = false;
}

void SelectionOverlay::updateScreenshot()
{
    currentScreenNumber = QApplication::desktop()->screenNumber(QCursor::pos());
    moveToScreen(currentScreenNumber); //Moving to the current screen to get a new screenshot
}

void SelectionOverlay::drawOverlay(QPainter *painter, const QColor &color)
{
    painter->save();
    QBrush rectBrush = QBrush(color, Qt::SolidPattern);
    painter->setBrush(rectBrush);
    painter->setPen(Qt::NoPen);
    if(selection.width() > 0 && selection.height() > 0)
    {
        QRect left = QRect(0, 0, selection.x(), selection.y() + selection.height());
        QRect right = QRect(selection.x()+ selection.width(), 0, this->width() - selection.width(), selection.y() + selection.height());
        QRect top = QRect(selection.x(), 0,selection.width(), selection.y());
        QRect bottom = QRect(0 ,selection.y() + selection.height(), this->width(), this->height() - selection.y());
        QVector<QRect> rects = QVector<QRect>();
        rects << left << right << top << bottom;
        painter->drawRects(rects);
    }else
    {
        QRect fullScreen = QRect(0, 0, this->width(), this->height());
        painter->drawRect(fullScreen);
    }
    painter->restore();
}

void SelectionOverlay::drawRubberband(QPainter *painter, const QRect &rect, const QColor &color, int lineSize)
{
    painter->save();
    QPen pen(color, lineSize, Qt::SolidLine, Qt::SquareCap);
    painter->setPen(pen);
    int offset = -(lineSize / 2);
    if(selection.width() > 0 && selection.height() > 0)
    {
        QRect drawRect = rect;
        drawRect.setSize(rect.size() - QSize(offset, offset));
        drawRect.setX(drawRect.x() + offset);
        drawRect.setY(drawRect.y() + offset);
        painter->drawRect(drawRect);
    }
    painter->restore();
}

void SelectionOverlay::drawHandles(QPainter* painter, const QRect& rect, const QColor& color, int lineSize, int handleSize)
{
    painter->save();
    QColor fillColor(color);
    fillColor.setAlpha(100);
    QPen pen(color, lineSize, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
    int offset = -(lineSize / 2);
    painter->setPen(pen);
    painter->setBrush(QBrush(fillColor, Qt::SolidPattern));
    if(selection.width() > 0 && selection.height() > 0)
    {
        QRect handleTopLeftRect = QRect(rect.x() + offset, rect.y() + offset, handleSize, handleSize);
        QRect handleTopRightRect = QRect(rect.x() + (rect.width() - handleSize) - offset, rect.y() + offset, handleSize, handleSize);
        QRect handleBottomLeftRect = QRect(rect.x() + offset, rect.y() + (rect.height() - handleSize) - offset, handleSize, handleSize);
        QRect handleBottomRightRect = QRect(rect.x() + (rect.width() - handleSize) - offset, rect.y() + (rect.height() - handleSize) - offset, handleSize, handleSize);
        QVector<QRect> handleRects = QVector<QRect>();
        handleRects << handleTopLeftRect << handleTopRightRect << handleBottomLeftRect << handleBottomRightRect;
        painter->drawRects(handleRects);
    }
    painter->restore();
}

void SelectionOverlay::drawHelpText(QPainter *painter,const QColor &bgColor, const QColor &textColor)
{
    //Draw help text
    if(!startedDrawingRubberBand)
    {
        painter->save();
        QBrush roundedRectBrush = QBrush(bgColor);
        QPen roundedRectPen = QPen(roundedRectBrush, 1.0);
        QBrush textBrush = QBrush(textColor);
        QFont d;
        QFont f(d.defaultFamily(), 22, QFont::Normal);
        painter->setFont(f);
        QRect helpTextRect = QRect( 0, 0, 620, 100);
        QString helpText = tr("Draw a rectangular area using the mouse.\nPress Enter to take a screenshot or Esc to exit.");
        if(QApplication::desktop()->screenCount() > 1)
        {
            helpText.append(tr("\nUse the arrow keys to switch between screens."));
            helpTextRect.setWidth(helpTextRect.width() + 30);
            helpTextRect.setHeight(helpTextRect.height() + 30);
        }
        helpTextRect.moveCenter(this->mapFromGlobal(QApplication::desktop()->screenGeometry(currentScreenNumber).center()));
        painter->setBrush(roundedRectBrush);
        painter->setPen(roundedRectPen);
        painter->drawRoundedRect(helpTextRect, 10.0, 10.0);
        painter->setBrush(textBrush);
        painter->setPen(QPen(textBrush, 1.0));
        painter->drawText(helpTextRect, Qt::AlignCenter, helpText);
        painter->restore();
    }
}

void SelectionOverlay::moveToScreen(int screenNumber)
{
    if(screenNumber < 0)
    {
        screenNumber = QApplication::desktop()->screenCount() -1;
    }else if(screenNumber >= QApplication::desktop()->screenCount())
    {
        screenNumber = 0;
    }
    currentScreenNumber = screenNumber;
    QRect screenGeom;

#if QT_VERSION >= QT_VERSION_CHECK(5,0,0)
    QScreen* screen = QApplication::screens().at(currentScreenNumber);
    screenGeom = screen->geometry();
#else
    screenGeom = QApplication::desktop()->screenGeometry(currentScreenNumber);
#endif
    if(!screenGeom.isValid() || screenGeom.isNull())
    {
        WARNING(tr("Failed to get geometry for screen ") + QString::number(currentScreenNumber));
        QMessageBox::warning(NULL, tr("Failed to get screen geom"), tr("Failed to get geometry for screen ") + QString::number(currentScreenNumber));
    }
#if QT_VERSION >= QT_VERSION_CHECK(5,0,0)
    // The pixmap is deep-copied in order to save the screen state at this very moment instead if utilising Qt's implicit data sharing of the original pixmap.
    screenshot = screen->grabWindow(0, 0, 0, screenGeom.width(), screenGeom.height()).copy();
#else
    // The pixmap is deep-copied in order to save the screen state at this very moment instead if utilising Qt's implicit data sharing of the original pixmap.
    screenshot = QPixmap::grabWindow(QApplication::desktop()->winId(), screenGeom.x(), screenGeom.y(), screenGeom.width(), screenGeom.height()).copy();
#endif
    if(screenshot.size() != screenGeom.size())
    {
        INFO(tr("Scaling screenshot to fit screenGeom"));
        screenshot = screenshot.scaled(screenGeom.size(), Qt::KeepAspectRatio);
    }
    selection = QRect(0,0,0,0);
    drawingRubberBand = resizingRubberBand = movingRubberBand = false;
    startedDrawingRubberBand = false;
    this->resetRubberBand();
    setGeometry(screenGeom);
    setWindowState(Qt::WindowFullScreen);
}

void SelectionOverlay::paintEvent(QPaintEvent *pe)
{
    Q_UNUSED(pe);
    QPainter painter(this);
    painter.drawPixmap(0, 0, screenshot);
    drawOverlay(&painter, QColor(100,100,100,140));
    drawRubberband(&painter, selection, QColor(227, 65, 51), 2);
    drawHandles(&painter, selection, QColor(227, 65, 51), 2, 12);
    drawHelpText(&painter, QColor(28,28,28,220), QColor(127,127,127,240));
}

void SelectionOverlay::resizeLeft(QPoint &mousePos, QRect &rbGeometryBeforeResize)
{
    selection.moveTo(mousePos.x(), selection.y());
    selection.setSize(QSize(rbGeometryBeforeResize.width() - (mousePos.x()- rbGeometryBeforeResize.x()), selection.height()));
    selection = selection.intersected(this->rect());
}

void SelectionOverlay::resizeTop(QPoint &mousePos, QRect &rbGeometryBeforeResize)
{
    selection.moveTo(selection.x(), mousePos.y());
    selection.setSize(QSize(selection.width(), rbGeometryBeforeResize.height() - (mousePos.y()- rbGeometryBeforeResize.y())));
    selection = selection.intersected(this->rect());
}

void SelectionOverlay::resizeRight(QPoint &mousePos, QRect &rbGeometryBeforeResize)
{
    selection.setSize(QSize(mousePos.x() - rbGeometryBeforeResize.x() , selection.height()));
    selection = selection.intersected(this->rect());
}

void SelectionOverlay::resizeBottom(QPoint &mousePos, QRect &rbGeometryBeforeResize)
{
    selection.setSize(QSize(selection.width(), mousePos.y() - rbGeometryBeforeResize.y()));
    selection = selection.intersected(this->rect());
}
