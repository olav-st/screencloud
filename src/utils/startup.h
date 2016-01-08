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

#ifndef STARTUP_H
#define STARTUP_H

#include <QFile>
#include <QDir>
#ifdef Q_OS_WIN
#include <QSettings>
#include <QCoreApplication>
#include <QDir>
#endif
#ifdef Q_OS_LINUX
#include <stdlib.h>
#include <QCoreApplication>
#endif


class Startup
{
public:
    Startup();
    static void setRunOnStartup(bool runOnStartup);
};

#endif // STARTUP_H
