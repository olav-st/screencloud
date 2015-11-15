#include "windowsystem.h"
#include <QList>
#include <QX11Info>
#include <X11/Xutil.h>

/*
 * TODO: Code is copied from libqxt, should be reviewed
*/

static QList<Window> qxt_getWindowList(Atom prop)
{
    QList<Window> winList;
    Atom type = 0;
    int format = 0;
    uchar* data = 0;
    ulong count, after;
    Display* display = QX11Info::display();
    Window window = QX11Info::appRootWindow();
    if (XGetWindowProperty(display, window, prop, 0, 1024 * sizeof(Window) / 4, False, AnyPropertyType,
                           &type, &format, &count, &after, &data) == Success)
    {
        Window* list = reinterpret_cast<Window*>(data);
        for (uint i = 0; i < count; ++i)
        {
            winList.append(list[i]);
        }
        if (data)
        {
            XFree(data);
        }
    }
    return winList;
}


WId WindowSystem::activeWindow()
{
    static Atom net_active = 0;
    if (!net_active)
    {
        net_active = XInternAtom(QX11Info::display(), "_NET_ACTIVE_WINDOW", True);
    }

    return qxt_getWindowList(net_active).value(0);
}

QRect WindowSystem::windowGeometry(WId windowID)
{
    int x, y;
    uint width, height, border, depth;
    Window root, child;
    Display* display = QX11Info::display();
    XGetGeometry(display, windowID, &root, &x, &y, &width, &height, &border, &depth);
    XTranslateCoordinates(display, windowID, root, x, y, &x, &y, &child);

    static Atom net_frame = 0;
    if (!net_frame)
        net_frame = XInternAtom(QX11Info::display(), "_NET_FRAME_EXTENTS", True);

    QRect rect(x, y, width, height);
    Atom type = 0;
    int format = 0;
    uchar* data = 0;
    ulong count, after;
    if (XGetWindowProperty(display, windowID, net_frame, 0, 4, False, AnyPropertyType,
                           &type, &format, &count, &after, &data) == Success)
    {
        // _NET_FRAME_EXTENTS, left, right, top, bottom, CARDINAL[4]/32
        if (count == 4)
        {
            long* extents = reinterpret_cast<long*>(data);
            rect.adjust(-extents[0], -extents[2], extents[1], extents[3]);
        }
        if (data)
        {
            XFree(data);
        }
    }
    return rect;
}
