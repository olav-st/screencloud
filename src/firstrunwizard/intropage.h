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

#ifndef INTROPAGE_H
#define INTROPAGE_H

#include <QWizardPage>
#include <QRadioButton>
#include <QVBoxLayout>
#include <QMessageBox>


#include <firstrunwizard/firstrunwizard.h>

class IntroPage : public QWizardPage
{
public:
    IntroPage();
    int nextId() const;
    bool validatePage();
private:
    QRadioButton *radiobtn_newAccount;
    QRadioButton *radiobtn_haveAccount;
    QRadioButton *rabiobtn_noAccount;
};

#endif // INTROPAGE_H
