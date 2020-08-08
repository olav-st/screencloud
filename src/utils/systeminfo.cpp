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

#include "systeminfo.h"


bool SystemInfo::runningOnWayland()
{
    QProcessEnvironment env = QProcessEnvironment::systemEnvironment();
    if(env.value("XDG_SESSION_TYPE") == "wayland" || env.value("WAYLAND_DISPLAY").contains("wayland", Qt::CaseInsensitive))
    {
        return true;
    }
    return false;
}
