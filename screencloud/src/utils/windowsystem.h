#ifndef WINDOWSYSTEM_H
#define WINDOWSYSTEM_H

/*
 * Class to get IDs of other apps windows, inpsired by QxtWindowSystem
*/

#include <QWindow>

class WindowSystem
{
public:
    static WId activeWindow();
    static QRect windowGeometry(WId windowID);
};

#endif // WINDOWSYSTEM_H
