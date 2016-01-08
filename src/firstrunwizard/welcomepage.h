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

#ifndef TUTORIALPAGE1_H
#define TUTORIALPAGE1_H

#include <QWizardPage>
#include <QLabel>
#include <QVBoxLayout>
#include <utils/OS.h>

class WelcomePage : public QWizardPage
{
    Q_OBJECT
public:
    explicit WelcomePage(QWidget *parent = 0);
private:
    QLabel* label_text;
    QLabel* image_systray;

Q_SIGNALS:

public Q_SLOTS:

};

#endif // TUTORIALPAGE1_H
