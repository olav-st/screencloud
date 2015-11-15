#include "windowsystem.h"
#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0500
#endif
#include <qt_windows.h>

/*
 * TODO: Code is copied from libqxt, should be reviewed
*/

WId WindowSystem::activeWindow()
{
    return (WId)::GetForegroundWindow();
}

QRect WindowSystem::windowGeometry(WId windowID)
{
    RECT rc;
    QRect rect;
    if (::GetWindowRect((HWND)window, &rc))
    {
        rect.setTop(rc.top);
        rect.setBottom(rc.bottom);
        rect.setLeft(rc.left);
        rect.setRight(rc.right);
    }
    return rect;
}
