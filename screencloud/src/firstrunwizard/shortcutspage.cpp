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

#include "shortcutspage.h"

ShortcutsPage::ShortcutsPage(QWidget *parent) :
    QWizardPage(parent)
{
    setTitle(tr("Keyboard shortcuts"));
    label_text = new QLabel("ScreenCloud uses 3 shorcuts for screen capture. You can change them to your liking in the preferences. The default shortcuts are:");
    label_text->setWordWrap(true);
    label_fullscreen = new QLabel("<b>Capture fullscreen</b>", this);
    QPixmap fullscreenPixmap(":/shortcuts/fullscreen.png");
    image_fullscreen = new QLabel(this);
    image_fullscreen->setPixmap(fullscreenPixmap);
    label_selection = new QLabel("<b>Capture selection</b>", this);
    QPixmap selectionPixmap(":/shortcuts/selection.png");
    image_selection = new QLabel(this);
    image_selection->setPixmap(selectionPixmap);
    label_window = new QLabel("<b>Capture active window</b>", this);
    QPixmap windowPixmap(":/shortcuts/window.png");
    image_window = new QLabel(this);
    image_window->setPixmap(windowPixmap);

    QVBoxLayout* layout = new QVBoxLayout;
    layout->addWidget(label_text);
    layout->addWidget(label_fullscreen);
    layout->addWidget(image_fullscreen);
    layout->addWidget(label_selection);
    layout->addWidget(image_selection);
    layout->addWidget(label_window);
    layout->addWidget(image_window);
    setLayout(layout);
    setMinimumHeight(350);
}
