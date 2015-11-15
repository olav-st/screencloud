#include "windowsystem.h"

/*
 * TODO: Code is copied from libqxt, should be reviewed
*/

#include <Carbon/Carbon.h>
#define CGSConnectionID CGSConnection
#define CGSWindowID CGSWindow
#define CGSDefaultConnection _CGSDefaultConnection()

#ifdef __cplusplus
extern "C" {
#endif

  typedef int CGSConnection;
  typedef int CGSWindow;
  typedef int CGSWorkspace;
  typedef void* CGSValue;

  /* Get the default connection for the current process. */
  extern CGSConnection _CGSDefaultConnection(void);

  /* /MJakubowski/ Get connection for given PSN */
  extern CGError CGSGetConnectionIDForPSN(const CGSConnection connection, ProcessSerialNumber * psn, CGSConnection * targetConnection);

  // Get on-screen window counts and lists.
  extern CGError CGSGetOnScreenWindowCount(const CGSConnection cid, CGSConnection targetCID, int* outCount);
  extern CGError CGSGetOnScreenWindowList(const CGSConnection cid, CGSConnection targetCID, int count, int* list, int* outCount);
  // Position
  extern CGError CGSGetWindowBounds(CGSConnection cid, CGSWindowID wid, CGRect *outBounds);
  extern CGError CGSGetScreenRectForWindow(const CGSConnection cid, CGSWindow wid, CGRect *outRect);

  // Properties
  extern CGError CGSGetWindowProperty(const CGSConnection cid, CGSWindow wid, CGSValue key, CGSValue *outValue);


#ifdef __cplusplus
}
#endif

#include <QString>

// WId to return when error
#define WINDOW_NOT_FOUND (WId)(0)

static QList<int> qxt_getWindowsForPSN(ProcessSerialNumber *psn)
{
    static CGSConnection connection = _CGSDefaultConnection();

    QList<int> wlist;
    if (!psn) return wlist;

    CGError err(noErr);

    // get onnection for given process psn
    CGSConnection procConnection;
    err = CGSGetConnectionIDForPSN(connection, psn, &procConnection);
    if (err != noErr) return wlist;

    /* get number of windows open by given process
       in Mac OS X an application may have multiple windows, which generally
       represent documents. It is also possible that there is no window even
       though there is an application, it can simply not have any documents open. */

    int windowCount(0);
    err = CGSGetOnScreenWindowCount(connection, procConnection, &windowCount);
    // if there are no windows open by this application, skip
    if (err != noErr || windowCount == 0) return wlist;

    // get list of windows
    int windowList[windowCount];
    int outCount(0);
    err = CGSGetOnScreenWindowList(connection, procConnection, windowCount, windowList, &outCount);

    if (err != noErr || outCount == 0) return wlist;

    for (int i=0; i<outCount; ++i)
    {
        wlist.append(windowList[i]);
    }

    return wlist;
}

WId WindowSystem::activeWindow()
{
    ProcessSerialNumber psn;
    OSErr err(noErr);
    err = ::GetFrontProcess(&psn);
    if (err != noErr) return WINDOW_NOT_FOUND;

    // in Mac OS X, first window for given PSN is always the active one
    QList<int> wlist = qxt_getWindowsForPSN(&psn);

    if (wlist.count() > 0)
    {
        return wlist.at(0);
    }

    return WINDOW_NOT_FOUND;
}

QRect WindowSystem::windowGeometry(WId windowID)
{
    CGRect rect;
    static CGSConnection connection = _CGSDefaultConnection();

    CGError err = CGSGetWindowBounds(connection, window, &rect);
    if (err != noErr)
    {
        return QRect();
    }

    return QRect(rect.origin.x, rect.origin.y, rect.size.width, rect.size.height);
}
