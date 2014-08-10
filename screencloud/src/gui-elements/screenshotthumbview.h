/* * ScreenCloud - An easy to use screenshot sharing application
 * Copyright (C) 2014 Olav Sortland Thoresen <olav.s.th@gmail.com>
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

#ifndef SCREENSHOTTHUMBVIEW_H
#define SCREENSHOTTHUMBVIEW_H

#include <QGraphicsView>

class ScreenshotThumbView : public QGraphicsView
{
    Q_OBJECT
public:
    explicit ScreenshotThumbView(QWidget *parent = 0);
    void drawOverlay(QPainter *painter, const QColor &color);
    void drawText(QPainter *painter, const QColor &bgColor, const QColor &textColor);

private:
    bool hovered;
    
signals:
    void clicked();
    
public slots:
    void mouseReleaseEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent* pe);
    void enterEvent(QEvent* e);
    void leaveEvent(QEvent *e);
    
};

#endif // SCREENSHOTTHUMBVIEW_H
