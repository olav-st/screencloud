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

#ifndef FINISHEDPAGE_H
#define FINISHEDPAGE_H

#include <QWizardPage>
#include <QVBoxLayout>
#include <QLabel>
#include <QCheckBox>
#include <QSettings>
#include <utils/startup.h>

class FinishedPage : public QWizardPage
{
    Q_OBJECT
public:
    explicit FinishedPage(QWidget *parent = 0);
    bool validatePage();
private:
    QLabel* label_text;
    QCheckBox* checkbox_runOnStartup;

signals:

public slots:

};

#endif // FINISHEDPAGE_H
