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

#ifndef FIRSTRUNWIZARD_H
#define FIRSTRUNWIZARD_H

#include <QWizard>

#include <firstrunwizard/intropage.h>
#include <firstrunwizard/loginpage.h>
#include <firstrunwizard/newaccountpage.h>
#include <firstrunwizard/tutorialpage1.h>
#include <firstrunwizard/shortcutspage.h>
#include <firstrunwizard/activatepage.h>
#include <firstrunwizard/finishedpage.h>
#include <QSettings>

class FirstRunWizard : public QWizard
{
    Q_OBJECT
public:
    explicit FirstRunWizard(QWidget *parent = 0);
    void accept();
public:
    enum { Page_Intro, Page_Login, Page_NewAccount, Page_Activate, Page_Tutorial1, Page_KeyboardShortcuts, Page_Finished };
private:
    QPixmap background;
signals:

public slots:

};

#endif // FIRSTRUNWIZARD_H
