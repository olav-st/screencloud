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

#include "welcomepage.h"

WelcomePage::WelcomePage(QWidget *parent) :
    QWizardPage(parent)
{
    setTitle(tr("Welcome to ScreenCloud"));
    label_text = new QLabel("ScreenCloud will run in the system tray on your computer. This icon gives you access to the ScreenCloud features.");
    label_text->setWordWrap(true);
    QPixmap systrayPixmap(QString(":/images/tutorial_systemtray_") + OS_SHORTNAME + ".png");
    image_systray = new QLabel(this);
    image_systray->setPixmap(systrayPixmap);
    image_systray->setStyleSheet("border: 1px solid");

    QVBoxLayout* layout = new QVBoxLayout();
    layout->addWidget(label_text);
    layout->addWidget(image_systray);
    setLayout(layout);
    setMinimumHeight(310);
}
