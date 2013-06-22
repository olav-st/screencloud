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

#ifndef SCREENSHOOTER_H
#define SCREENSHOOTER_H

#include <QObject>
#include <QPixmap>
#include <QApplication>
#include <QDesktopWidget>
#include <QxtWindowSystem>
#include <QSettings>
#include "audionotifier.h"

class ScreenShooter : public QObject
{
    Q_OBJECT
public:
    explicit ScreenShooter(QObject *parent = 0);
    void playNotificationSound();
signals:
    void screenshotTaken(QPixmap* screenshot);

private:
    QPixmap pixmap;
    bool captureWindowBorders;
    AudioNotifier notifier;

public slots:
    void takeFullscreenScreenshot();
    void takeSelectionScreenshot(QRect* area, QPixmap* fullScreenShot);
    void takeWindowScreenshot();

};

#endif // SCREENSHOOTER_H
