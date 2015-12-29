/* * ScreenCloud - An easy to use screenshot sharing application
 * Copyright (C) 2014 Olav Sortland Thoresen <olav.s.th@gmail.com>
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

#ifndef SHORTCUTSPAGE_H
#define SHORTCUTSPAGE_H

#include <QWizardPage>
#include <QVBoxLayout>
#include <QLabel>
#include <QPixmap>

class ShortcutsPage : public QWizardPage
{
    Q_OBJECT
public:
    explicit ShortcutsPage(QWidget *parent = 0);

private:
    QLabel* label_text;
    QLabel* label_fullscreen;
    QLabel* image_fullscreen;
    QLabel* label_selection;
    QLabel* image_selection;
    QLabel* label_window;
    QLabel* image_window;

Q_SIGNALS:

public Q_SLOTS:

};

#endif // SHORTCUTSPAGE_H
