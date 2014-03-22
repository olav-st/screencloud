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

#include "intropage.h"

IntroPage::IntroPage()
{
    setTitle(tr("Introduction"));
    //setPixmap(QWizard::WatermarkPixmap, QPixmap(":/images/watermark1.png"));
    radiobtn_newAccount = new QRadioButton("I'm new to ScreenCloud", this);
    radiobtn_haveAccount = new QRadioButton("I already have a ScreenCloud account", this);
    rabiobtn_noAccount = new QRadioButton("I want to use ScreenCloud without an account", this);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(radiobtn_newAccount);
    layout->addWidget(radiobtn_haveAccount);
    layout->addWidget(rabiobtn_noAccount);
    setLayout(layout);
}

int IntroPage::nextId() const
{
    if (radiobtn_newAccount->isChecked()) {
        return FirstRunWizard::Page_NewAccount;
    } else if(radiobtn_haveAccount->isChecked()) {
        return FirstRunWizard::Page_Login;
    }else{
        return FirstRunWizard::Page_Welcome;
    }

}

bool IntroPage::validatePage()
{
    if(radiobtn_newAccount->isChecked() || radiobtn_haveAccount->isChecked())
    {
        return true;
    }
    if(rabiobtn_noAccount->isChecked())
    {
        QMessageBox msgBox;
        msgBox.addButton(QMessageBox::Yes);
        msgBox.addButton(QMessageBox::No);
        msgBox.setText("Are you sure that you want to use ScreenCloud without an account? You will not be able to share screenshots on screencloud.net.");
        msgBox.setIcon(QMessageBox::Information);
        int selection = msgBox.exec();
        if(selection == QMessageBox::Yes)
        {
            //Save the users selection
            QSettings settings("screencloud", "ScreenCloud");
            settings.beginGroup("account");
            settings.setValue("logged-in", false);
            settings.setValue("user-denied-login", true);
            settings.endGroup();
            return true;
        }
        return false;
    }
    return false;
}
