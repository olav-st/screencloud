//
// ScreenCloud - An easy to use screenshot sharing application
// Copyright (C) 2014 Olav Sortland Thoresen <olav.s.th@gmail.com>
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

#include "firstrunwizard.h"
#include <utils/log.h>

FirstRunWizard::FirstRunWizard(QWidget *parent) :
    QWizard(parent)
{
    setPage(Page_Intro, new IntroPage);
    setPage(Page_Login, new LoginPage);
    setPage(Page_NewAccount, new NewAccountPage);
    setPage(Page_Activate, new ActivatePage);
    setPage(Page_Welcome, new WelcomePage);
    setPage(Page_KeyboardShortcuts, new ShortcutsPage);
    setPage(Page_OnlineServices, new OnlineServicesPage);
    setPage(Page_Finished, new FinishedPage);

    setStartId(Page_Intro);

    setWindowTitle(tr("ScreenCloud"));
    setOptions(QWizard::CancelButtonOnLeft);
    background = QPixmap(":/images/wizard_background.png");
    setPixmap(QWizard::BackgroundPixmap, background);
}

void FirstRunWizard::accept()
{
    QSettings settings("screencloud", "ScreenCloud");
    settings.sync();
    QDialog::accept();
}
