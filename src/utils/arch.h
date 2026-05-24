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

#ifndef ARCH_H
#define ARCH_H

#define GCC 1
#ifdef Q_OS_WIN
#if MSVC
#ifdef _M_X86
#define ARCH "x86"
#else
#define ARCH "x64"
#endif
#endif

#if GCC
#ifdef __i386__
#define ARCH "x86"
#else
#define ARCH "x64"
#endif
#endif
#endif //Q_OS_WIN

#ifdef Q_OS_MACOS
#ifdef __arm64__
#define ARCH "arm64"
#elif defined(__x86_64__)
#define ARCH "x86_64"
#elif defined(__i386__)
#define ARCH "x86"
#else
#define ARCH "unknown"
#endif
#endif //Q_OS_MACOS

#endif // ARCH_H