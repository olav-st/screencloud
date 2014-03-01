//
// ScreenCloud - An easy to use screenshot sharing application
// Copyright (C) 2013 Olav Sortland Thoresen <olav.s.th@gmail.com>
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

#include "startup.h"
#include <utils/log.h>

Startup::Startup()
{
}

void Startup::setRunOnStartup(bool runOnStartup)
{
#ifdef Q_OS_WIN
    QSettings settings("HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Run",
                        QSettings::NativeFormat);
    if(runOnStartup)
    {
        settings.setValue("ScreenCloud", QDir::toNativeSeparators(qApp->applicationFilePath()));
    }else
    {
        if(!settings.value("ScreenCloud").toString().isEmpty())
        {
            settings.remove("ScreenCloud");
        }
    }
#endif
#ifdef Q_OS_MACX

#endif
#ifdef Q_OS_LINUX
    QString desktopFileContents = "[Desktop Entry]\n"
            "Name=ScreenCloud\n"
            "Comment=Capture and share screenshots easily\n"
            "Icon=screencloud\n"
            "Type=Application\n"
            "Exec=/opt/screencloud/screencloud.sh\n"
            "Hidden=false\n"
            "NoDisplay=false\n"
            "X-GNOME-Autostart-enabled=true\n";

    QString autostartLocation;
    char* xgdConfigHome = getenv("XDG_CONFIG_HOME");
    if(xgdConfigHome != NULL)
    {
        autostartLocation = QString(QString(xgdConfigHome) + "/.config/autostart");
    }else
    {
        autostartLocation = QString(QDir::homePath() + "/.config/autostart");
    }
    QDir d;
    d.mkpath(autostartLocation);
    QFile autostartFile(autostartLocation + "/screencloud.desktop");
    if(runOnStartup)
    {
        if(!autostartFile.exists())
        {
            INFO("Installing autostart file to " + autostartLocation);
            autostartFile.open(QFile::WriteOnly);
            autostartFile.write(desktopFileContents.toLocal8Bit());
            autostartFile.close();
        }
        autostartFile.setPermissions(QFile::ReadOwner | QFile::WriteOwner | QFile::ExeOwner | QFile::ReadGroup | QFile::ReadGroup | QFile::WriteGroup | QFile::ReadOther);
    }else
    {
        if(autostartFile.exists())
        {
            INFO("Removing autostart file " + autostartFile.fileName());
            autostartFile.remove();
        }
    }
#endif
}
