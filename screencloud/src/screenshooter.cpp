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
#include <QDebug>

ScreenShooter::ScreenShooter(QObject *parent) :
    QObject(parent)
{

}

void ScreenShooter::takeFullscreenScreenshot()
{
    pixmap = QPixmap(); // clear image
    pixmap = QPixmap::grabWindow(QApplication::desktop()->winId());
    playNotificationSound();
    emit screenshotTaken(&pixmap);
}

void ScreenShooter::takeSelectionScreenshot(QRect* area, QPixmap* fullScreenShot)
{
    disconnect(sender(), SIGNAL(selectionDone(QRect*, QPixmap*)), this, SLOT(takeSelectionScreenshot(QRect*, QPixmap*)));
    QPixmap areaScreenshot = fullScreenShot->copy(*area);
    playNotificationSound();
    emit screenshotTaken(&areaScreenshot);
}

void ScreenShooter::takeWindowScreenshot()
{
    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("general");
    captureWindowBorders = settings.value("capture_window_borders", false).toBool();
    settings.endGroup();
#ifdef Q_OS_MACX
    captureWindowBorders = true;
#endif

    pixmap = QPixmap(); // clear image
    WId id = QxtWindowSystem::activeWindow();
    if(captureWindowBorders)
    {
        QRect winGeom = QxtWindowSystem::windowGeometry(id);
        qDebug() << "winGeom" << winGeom;
        pixmap = QPixmap::grabWindow(QApplication::desktop()->winId(), winGeom.x(), winGeom.y(), winGeom.width(),winGeom.height());
    }else {
        pixmap = QPixmap::grabWindow(id);
    }
    playNotificationSound();
    emit screenshotTaken(&pixmap);
}

void ScreenShooter::playNotificationSound()
{
    notifier.play("sfx/shutter.wav");

}
