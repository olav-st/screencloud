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

#ifndef OS_H
#define OS_H

#ifdef Q_OS_WIN
#define OPERATING_SYSTEM "Windows"
#define OS_SHORTNAME "win"
#define OS_DEFAULT_COLOR "blue"
#endif
#ifdef Q_OS_MACX
#define OPERATING_SYSTEM "Mac OS X"
#define OS_SHORTNAME "mac"
#define OS_DEFAULT_COLOR "black"
#endif
#ifdef Q_OS_LINUX
#define OPERATING_SYSTEM "Linux"
#define OS_SHORTNAME "linux"
#define OS_DEFAULT_COLOR "gray"
#endif

#endif // OS_H
