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

#include "finishedpage.h"

FinishedPage::FinishedPage(QWidget *parent) :
    QWizardPage(parent)
{
    setTitle(tr("All done!"));
    label_text = new QLabel("You are now ready to start using ScreenCloud. If you want to, ScreenCloud can start automatically when your computer starts:");
    label_text->setWordWrap(true);
    checkbox_runOnStartup = new QCheckBox("Start ScreenCloud when my computer starts");

    QVBoxLayout* layout = new QVBoxLayout;
    layout->addWidget(label_text);
    layout->addSpacing(5);
    layout->addWidget(checkbox_runOnStartup);
    setLayout(layout);
}

bool FinishedPage::validatePage()
{
    bool runOnStartup = checkbox_runOnStartup->isChecked();
    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("general");
    settings.setValue("run_on_startup", runOnStartup);
    Startup::setRunOnStartup(runOnStartup);
    settings.endGroup();
    return true;
}
