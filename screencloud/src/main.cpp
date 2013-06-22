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

#include <qtsingleapplication.h>
#include <QMessageBox>
#include "systemtrayicon.h"
#include <firstrunwizard/firstrunwizard.h>
#include <QDebug>
#include <QDir>
#include <utils/OS.h>

#undef main
int main(int argc, char *argv[])
{
        QtSingleApplication a(argc, argv);
        //Parse command line switches
        QStringList cmdline_args = a.arguments();
        QString iconColor;
        QStringList iconColorSwitches = cmdline_args.filter("--icon-color=");
        if(iconColorSwitches.size() > 0)
        {
            iconColor = iconColorSwitches[0].split("=")[1];
        }
        if(cmdline_args.contains("--version") || cmdline_args.contains("-v") )
        {
            qDebug() << "ScreenCloud version " << QString(VERSION) << "(" << QString(OPERATING_SYSTEM) << ")";
        }
        if(a.isRunning())
        {
            QMessageBox msgBox;
            msgBox.setText("ScreenCloud is already running. Please close the running instance before starting a new one.");
            msgBox.setIcon(QMessageBox::Critical);
            msgBox.exec();
            return 0;
        }
        a.setOrganizationName("screencloud");
        a.setApplicationName("ScreenCloud");
        a.setQuitOnLastWindowClosed(false);
        QSettings settings("screencloud", "ScreenCloud");
        settings.setValue("config_version", "1.0");
        settings.beginGroup("account");
        QByteArray token = settings.value("token").toByteArray();
        QByteArray tokenSecret = settings.value("token_secret").toByteArray();
        bool loggedIn = settings.value("logged_in", false).toBool();
        bool userDeniedLogin = settings.value("user_denied_login", false).toBool();
        settings.endGroup();
        if( (token == "" || tokenSecret == "" || !loggedIn) && !userDeniedLogin)
        {
            FirstRunWizard wizard;
            if(wizard.exec() != QWizard::Accepted)
            {
                exit(0);
            }
        }
        //Create data location for storing plugins if it dosen't exist
        QDir d;
        d.mkpath(QDesktopServices::storageLocation(QDesktopServices::DataLocation) + "/plugins");
        SystemTrayIcon w(NULL, iconColor);
        w.show();
        return a.exec();
}
