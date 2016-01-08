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

#ifndef LOG_H
#define LOG_H

#include <QDebug>

#if defined(COLOR_OUTPUT)
#define INFO(x) qDebug() << "[INFO]" << x;
#define WARNING(x) qWarning() << "\033[1;33m[WARN]\033[0m" << x;
#define CRITICAL(x) qCritical() << "\033[31m[CRITICAL]\033[0m" << x;
#else
#define INFO(x) qDebug() << "[INFO]" << x;
#define WARNING(x) qWarning() << "[WARN]" << x;
#define CRITICAL(x) qCritical() << "[CRITICAL]" << x;
#endif

#endif // LOG_H
