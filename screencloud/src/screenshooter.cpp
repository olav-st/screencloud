//
// ScreenCloud - An easy to use screenshot sharing application
// Copyright (C) 2014 Olav Sortland Thoresen <olav.s.th@gmail.com>
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
#include <qxtwindowsystem.h>

ScreenShooter::ScreenShooter(QObject *parent) :
    QObject(parent)
{
}

void ScreenShooter::setScreenshot(const QImage &s)
{
    screenshot = s;
    Q_EMIT screenshotTaken();
}

QImage ScreenShooter::getScreenshot()
{
    return screenshot;
}

void ScreenShooter::setCaptureWindowBorders(const bool &value)
{
    captureWindowBorders = value;
    Q_EMIT captureWindowBordersChanged();
}

bool ScreenShooter::getCaptureWindowBorders()
{
    return captureWindowBorders;
}

void ScreenShooter::setCaptureMouseCursor(const bool &value)
{
    captureMouseCursor = value;
    Q_EMIT captureMouseCursorChanged();
}

bool ScreenShooter::getCaptureMouseCursor()
{
    return captureMouseCursor;
}

const QImage &ScreenShooter::captureFullscreen()
{
    int screenNumber = QApplication::desktop()->screenNumber(QCursor::pos());
#if QT_VERSION >= QT_VERSION_CHECK(5,0,0)
    QScreen* screen = QApplication::screens().at(screenNumber);
    QRect screenGeometry = screen->geometry();
    QPixmap pixmap = screen->grabWindow(0, screenGeometry.x(), screenGeometry.y(), screenGeometry.width(), screenGeometry.height());
#else
    QRect screenGeometry = QApplication::desktop()->screenGeometry(screenNumber);
    QPixmap pixmap = QPixmap::grabWindow(QApplication::desktop()->screen(screenNumber)->winId(),screenGeometry.x(), screenGeometry.y(), screenGeometry.width(), screenGeometry.height())
#endif
    screenshot = pixmap.toImage();
    setScreenshot(pixmap.toImage());
    return screenshot;
}

const QImage &ScreenShooter::captureSelection(const QRect &area)
{
    int screenNumber = QApplication::desktop()->screenNumber(QCursor::pos());
#if QT_VERSION >= QT_VERSION_CHECK(5,0,0)
    QScreen* screen = QApplication::screens().at(screenNumber);
    QPixmap fullScreenShot = screen->grabWindow(0);
#else
    QPixmap fullScreenShot = QPixmap::grabWindow(QApplication::desktop()->winId());
#endif
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
#if QT_VERSION >= QT_VERSION_CHECK(5,0,0)
    QScreen* screen = QApplication::primaryScreen();
#endif
    if(captureWindowBorders)
    {
        QRect winGeom = QxtWindowSystem::windowGeometry(windowID);
#if QT_VERSION >= QT_VERSION_CHECK(5,0,0)
        pixmap = screen->grabWindow(windowID, winGeom.x(), winGeom.y(), winGeom.width(),winGeom.height());
#else
        QPixmap::grabWindow(QApplication::desktop()->winId(), winGeom.x(), winGeom.y(), winGeom.width(),winGeom.height());
#endif
    }else {
#if QT_VERSION >= QT_VERSION_CHECK(5,0,0)
        pixmap = screen->grabWindow(windowID);
#else
        pixmap = QPixmap::grabWindow(windowID);
#endif
    }
    setScreenshot(pixmap.toImage());
    return screenshot;
}
