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

#include "screenshooter.h"
#include <utils/log.h>

ScreenShooter::ScreenShooter(QObject *parent) :
    QObject(parent)
{
}

void ScreenShooter::setScreenshot(const QImage &s)
{
    screenshot = s;
    emit screenshotTaken();
}

QImage ScreenShooter::getScreenshot()
{
    return screenshot;
}

void ScreenShooter::setCaptureWindowBorders(const bool &value)
{
    captureWindowBorders = value;
    emit captureWindowBordersChanged();
}

bool ScreenShooter::getCaptureWindowBorders()
{
    return captureWindowBorders;
}

void ScreenShooter::setCaptureMouseCursor(const bool &value)
{
    captureMouseCursor = value;
    emit captureMouseCursorChanged();
}

bool ScreenShooter::getCaptureMouseCursor()
{
    return captureMouseCursor;
}

const QImage &ScreenShooter::captureFullscreen()
{
    int screenNumber = QApplication::desktop()->screenNumber(QCursor::pos());
    QRect screenGeometry = QApplication::desktop()->screenGeometry(screenNumber);
    QPixmap pixmap = QPixmap::grabWindow(QApplication::desktop()->screen(screenNumber)->winId(),screenGeometry.x(), screenGeometry.y(), screenGeometry.width(), screenGeometry.height());
    screenshot = pixmap.toImage();
    setScreenshot(pixmap.toImage());
    return screenshot;
}

const QImage &ScreenShooter::captureSelection(const QRect &area)
{
    QPixmap fullScreenShot = QPixmap::grabWindow(QApplication::desktop()->winId());
    QPixmap areaScreenshot = fullScreenShot.copy(area);
    setScreenshot(areaScreenshot.toImage());
    return screenshot;
}

const QImage &ScreenShooter::captureWindow(WId windowID)
{
    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("main");
    captureWindowBorders = settings.value("capture-window-borders", false).toBool();
    settings.endGroup();
#ifdef Q_OS_MACX
    captureWindowBorders = true;
#endif
    if(windowID <= 0)
    {
        windowID = QxtWindowSystem::activeWindow();
    }
    QPixmap pixmap;
    if(captureWindowBorders)
    {
        QRect winGeom = QxtWindowSystem::windowGeometry(windowID);
        pixmap = QPixmap::grabWindow(QApplication::desktop()->winId(), winGeom.x(), winGeom.y(), winGeom.width(),winGeom.height());
    }else {
        pixmap = QPixmap::grabWindow(windowID);
    }
    setScreenshot(pixmap.toImage());
    return screenshot;
}
