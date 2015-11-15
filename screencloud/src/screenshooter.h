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

#ifndef SCREENSHOOTER_H
#define SCREENSHOOTER_H

#include <QObject>
#include <QPixmap>
#include <QApplication>
#include <QDesktopWidget>
#include <QSettings>
#include <QScreen>
#include <utils/windowsystem.h>

class ScreenShooter : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QImage screenshot READ getScreenshot WRITE setScreenshot NOTIFY screenshotTaken)
    Q_PROPERTY(bool captureWindowBorders READ getCaptureWindowBorders WRITE setCaptureWindowBorders NOTIFY captureWindowBordersChanged)
    Q_PROPERTY(bool captureMouseCursor READ getCaptureMouseCursor WRITE setCaptureMouseCursor NOTIFY captureMouseCursorChanged)

public:
    explicit ScreenShooter(QObject *parent = 0);

    void setScreenshot(const QImage &s);
    QImage getScreenshot();

    void setCaptureWindowBorders(const bool &value);
    bool getCaptureWindowBorders();

    void setCaptureMouseCursor(const bool &value);
    bool getCaptureMouseCursor();

    const QImage& captureFullscreen();
    const QImage& captureSelection(const QRect &area);
    const QImage& captureWindow(WId windowID = 0);

signals:
    void screenshotTaken();
    void captureWindowBordersChanged();
    void captureMouseCursorChanged();

private:
    QImage screenshot;
    bool captureWindowBorders;
    bool captureMouseCursor;

};

#endif // SCREENSHOOTER_H
