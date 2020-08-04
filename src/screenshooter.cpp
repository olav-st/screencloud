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

#include "screenshooter.h"
#include <utils/log.h>
#include <qxtwindowsystem.h>
#include <QFile>
#include <QDir>
#include <utils/network.h>
#include <QtDBus/QDBusConnection>
#include <QtDBus/QDBusInterface>
#include <QtDBus/QDBusReply>
#include <QtDBus/QDBusError>

const QImage ScreenShooter::captureFullscreen()
{
#if !defined(Q_OS_WIN) && !defined(Q_OS_MACX)
    //First, attempt to take a screenshot using Gnome's DBus interface
    //Code based on https://github.com/lupoDharkael/flameshot/blob/42619158fa71bfa10efa285f29591757177b9c1d/src/utils/screengrabber.cpp
    QString path = QDir::tempPath() + QDir::separator() + NetworkUtils::generateNonce(6) + ".png";
    QDBusInterface gnomeInterface(QStringLiteral("org.gnome.Shell"),
                                  QStringLiteral("/org/gnome/Shell/Screenshot"),
                                  QStringLiteral("org.gnome.Shell.Screenshot"));
    QDBusReply<bool> gnomeReply = gnomeInterface.call(QStringLiteral("Screenshot"), false, false, path);
    if (gnomeReply.value()) {
        QPixmap res = QPixmap(path);
        QFile dbusResult(path);
        dbusResult.remove();

        return res.toImage();
    }

    //Secondly, attempt to take a screenshot using KWin's DBus interface
    //Code based on https://github.com/lupoDharkael/flameshot/blob/42619158fa71bfa10efa285f29591757177b9c1d/src/utils/screengrabber.cpp
    QDBusInterface kwinInterface(QStringLiteral("org.kde.KWin"),
                                 QStringLiteral("/Screenshot"),
                                 QStringLiteral("org.kde.kwin.Screenshot"));
    QDBusReply<QString> kwinReply = kwinInterface.call(QStringLiteral("screenshotFullscreen"));
    QPixmap res = QPixmap(kwinReply.value());
    if (!res.isNull()) {
        QFile dbusResult(kwinReply.value());
        dbusResult.remove();

        return res.toImage();
    }
#endif
    //If none of the DBus interfaces work, or we are on Win/Mac, use the Qt API to take a screenshot
#if QT_VERSION >= QT_VERSION_CHECK(5,0,0)
        QScreen* screen = QApplication::primaryScreen();
        QRect screenGeometry = screen->virtualGeometry();
        QPixmap pixmap = screen->grabWindow(QApplication::desktop()->winId(), screenGeometry.x(), screenGeometry.y(), screenGeometry.width(), screenGeometry.height());
#else
        QRect screenGeometry = QApplication::desktop()->screenGeometry(screenNumber);
        QPixmap pixmap = QPixmap::grabWindow(QApplication::desktop()->screen(screenNumber)->winId(),screenGeometry.x(), screenGeometry.y(), screenGeometry.width(), screenGeometry.height());
#endif
    return pixmap.toImage();
}

const QImage ScreenShooter::captureSelection(const QRect &area)
{
    QImage fullScreenShot = ScreenShooter::captureFullscreen();
    QImage areaScreenshot = fullScreenShot.copy(area);
    return areaScreenshot;
}

const QImage ScreenShooter::captureWindow(WId windowID)
{
    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("main");
    bool captureWindowBorders = settings.value("capture-window-borders", false).toBool();
    settings.endGroup();

#if !defined(Q_OS_WIN) && !defined(Q_OS_MACX)
    //First, attempt to take a screenshot of the active window using Gnome's DBus interface
    //Code based on https://github.com/lupoDharkael/flameshot/blob/42619158fa71bfa10efa285f29591757177b9c1d/src/utils/screengrabber.cpp
    QString path = QDir::tempPath() + QDir::separator() + NetworkUtils::generateNonce(6) + ".png";
    QDBusInterface gnomeInterface(QStringLiteral("org.gnome.Shell"),
                                  QStringLiteral("/org/gnome/Shell/Screenshot"),
                                  QStringLiteral("org.gnome.Shell.Screenshot"));
    QDBusReply<bool> gnomeReply = gnomeInterface.call(QStringLiteral("ScreenshotWindow"), captureWindowBorders, false, false, path);
    if (gnomeReply.value()) {
        QPixmap res = QPixmap(path);
        QFile dbusResult(path);
        dbusResult.remove();

        return res.toImage();
    }
#endif
    //If the DBus interfaces dosen't work, or we are on Win/Mac, use the Qt API to take a screenshot
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
    return pixmap.toImage();
}
