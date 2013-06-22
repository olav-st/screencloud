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

#include "preferencesdialog.h"
#include "ui_preferencesdialog.h"
#include <QTabWidget>
#include <QDebug>
#ifdef PLUGIN_SUPPORT
    #include "plugindialog.h"
#endif
#include "utils/security.h"
#include "licensesdialog.h"

PreferencesDialog::PreferencesDialog(QWidget *parent, Qt::WindowFlags f, QList<Uploader*> *available, Uploader* active) :
    QDialog(parent, f),
    ui(new Ui::PreferencesDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Preferences");
    connect(this, SIGNAL(finished(int)), SLOT(dialogFinished(int)));
    connect(ui->combobox_imageFormat, SIGNAL(currentIndexChanged(int)), this, SLOT(comboboxImageFormatChanged(int)));
    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)),
             this, SLOT(replyFinished(QNetworkReply*)));
    updater = new Updater(this);
    connect(updater, SIGNAL(versionNumberRecieved(QString,bool)), this, SLOT(gotVersionNumber(QString,bool)));
    uploaders = available;
    activeUploader = active;
    uploadersModel = new AvailableUploadersListModel(this, uploaders);
    hotkeyFilter = new HotkeyEventFilter(this);
    editingHotkeyField = false;
    keysRecorded = 0;
    loadSettings();
    setupUi();
    getNumberOfScreenshots();
    updater->checkForUpdates(Updater::NoNotification);
    userHasLoggedOut = false;
}

PreferencesDialog::~PreferencesDialog()
{
    delete ui;
    delete hotkeyFilter;
}
void PreferencesDialog::loadSettings()
{
    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("general");
    format = settings.value("format", "png").toString();
    jpegQuality = settings.value("jpeg-quality", 90).toInt();
    screenshotDelay = settings.value("delay", 100.0).toDouble();
    showNotifications = settings.value("show_notifications", true).toBool();

    runOnStartup = settings.value("run_on_startup", false).toBool();
    captureWindowBorders = settings.value("capture_window_borders", false).toBool();
    soundNotifications = settings.value("sound", true).toBool();
    showSaveDialog = settings.value("show_save_dialog", true).toBool();
    settings.endGroup();
    settings.beginGroup("hotkeys");
    fullScreenHotkeyStr = settings.value("captureFullScreen", QString("Shift+Alt+1")).toString();
    selectionHotkeyStr = settings.value("captureSelection", QString("Shift+Alt+2")).toString();
    windowHotkeyStr = settings.value("captureWindow", QString("Shift+Alt+3")).toString();
    settings.endGroup();
    settings.beginGroup("account");
    email = settings.value("email", "").toString();
    token = settings.value("token", "").toByteArray();
    tokenSecret = settings.value("token_secret", "").toByteArray();
    loggedIn = settings.value("logged_in", false).toBool();
    settings.endGroup();
    settings.beginGroup("updates");
#ifdef Q_OS_WIN
    notifyUpdates = settings.value("notify_updates", true).toBool();
    autoCheckUpdates = settings.value("check_updates_automatically", true).toBool();
#elif defined(Q_OS_LINUX) && !defined(UBUNTU_SOFTWARE_CENTER)
    notifyUpdates = settings.value("notify_updates", true).toBool();
    autoCheckUpdates = settings.value("check_updates_automatically", true).toBool();
#else
    notifyUpdates = settings.value("notify_updates", false).toBool();
    autoCheckUpdates = settings.value("check_updates_automatically", false).toBool();
#endif
    settings.endGroup();
    //Proxy settings
    settings.beginGroup("network");
    useProxy = settings.value("use_proxy", false).toBool();
    autodetectProxy = settings.value("autodetect_proxy", false).toBool();
    proxyHostname = settings.value("proxy_hostname", "").toString();
    proxyPort = settings.value("proxy_port", 8080).toUInt();
    proxyRequireAuth = settings.value("proxy_req_auth", false).toBool();
    proxyUsername = settings.value("proxy_username", "").toString();
    proxyPassword = Security::decrypt(settings.value("proxy_password", "").toString());
    proxyType = settings.value("proxy_type", "").toString();
    settings.endGroup();
}

void PreferencesDialog::saveSettings()
{
    format = ui->combobox_imageFormat->currentText().toLower();
    jpegQuality = ui->slider_jpegQuality->value();
    fullScreenHotkeyStr = ui->table_hotkeys->item(0,1)->text();
    selectionHotkeyStr = ui->table_hotkeys->item(1,1)->text();
    windowHotkeyStr = ui->table_hotkeys->item(2,1)->text();
    screenshotDelay = (ui->spinBox_delay->value() ) * 1000.0;
    showNotifications = ui->checkBox_notifications->isChecked();
    soundNotifications = ui->checkBox_soundNotifications->isChecked();
    runOnStartup = ui->checkBox_startup->isChecked();
    captureWindowBorders = ui->checkBox_windowBorders->isChecked();
    notifyUpdates = ui->checkBox_notifyUpdates->isChecked();
    autoCheckUpdates = ui->checkBox_autoUpdate->isChecked();
    showSaveDialog = ui->checkBox_askMe->isChecked();

    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("general");
    settings.setValue("format", format);
    settings.setValue("jpeg-quality", jpegQuality);
    settings.setValue("delay", screenshotDelay);
    settings.setValue("sound", soundNotifications);
    settings.setValue("show_notifications", showNotifications);
    settings.setValue("run_on_startup", runOnStartup);
    settings.setValue("capture_window_borders", captureWindowBorders);
    Startup::setRunOnStartup(runOnStartup);
    settings.setValue("show_save_dialog", showSaveDialog);
    if(showSaveDialog)
    {
        settings.setValue("active_uploader_index", -1);
    }
    settings.endGroup();
    settings.beginGroup("hotkeys");
    settings.setValue("captureFullScreen", fullScreenHotkeyStr);
    settings.setValue("captureSelection", selectionHotkeyStr);
    settings.setValue("captureWindow", windowHotkeyStr);
    settings.endGroup();
    settings.beginGroup("account");
    settings.setValue("email", email);
    settings.setValue("pwd_len", passwordLength);
    settings.setValue("password", passwordHash);
    settings.endGroup();
    settings.beginGroup("updates");
    settings.setValue("notify_updates", notifyUpdates);
    settings.setValue("check_updates_automatically", autoCheckUpdates);
    settings.endGroup();
    settings.beginGroup("network");
    if(ui->comboBox_proxyType->currentIndex() > 0)
    {
        settings.setValue("use_proxy", true);
        if(ui->comboBox_proxyType->currentIndex() == 1)
        {
            settings.setValue("autodetect_proxy", true);
            settings.remove("proxy_type");
        }else if(ui->comboBox_proxyType->currentIndex() == 2)
        {
            settings.setValue("proxy_type", "http");
            settings.remove("autodetect_proxy");
        }else if(ui->comboBox_proxyType->currentIndex() == 3)
        {
            settings.setValue("proxy_type", "socks5");
            settings.remove("autodetect_proxy");
        }
        if(ui->comboBox_proxyType->currentIndex() > 1)
        {
            settings.setValue("proxy_hostname", ui->input_hostname->text());
            settings.setValue("proxy_port", ui->spinBox_port->value());
            settings.setValue("proxy_username", ui->input_proxyUsername->text());
            settings.setValue("proxy_password", Security::encrypt(ui->input_proxyPassword->text()));
        }
    }else
    {
        settings.remove("use_proxy");
        settings.remove("autodetect_proxy");
        settings.remove("proxy_type");
    }
    settings.setValue("proxy_req_auth", ui->checkBox_auth->isChecked());
    settings.endGroup();
}

void PreferencesDialog::dialogFinished(int r)
{
    saveSettings();
    close();
}

void PreferencesDialog::setupUi()
{
    setWindowFlags( (windowFlags()) & ~Qt::WindowMaximizeButtonHint);
    //General
    if(format == "jpg")
    {
        ui->combobox_imageFormat->setCurrentIndex(1);
    }else
    {
        //Set quality slider hidden by default
        ui->slider_jpegQuality->setVisible(false);
        ui->label_qualityNumber->setVisible(false);
        ui->label_quality->setVisible(false);
    }
    ui->spinBox_delay->setValue(screenshotDelay / 1000);
    ui->slider_jpegQuality->setValue(jpegQuality);
    ui->label_qualityNumber->setText(QString::number(jpegQuality));
    ui->checkBox_notifications->setChecked(showNotifications);
    ui->checkBox_soundNotifications->setChecked(soundNotifications);
    ui->checkBox_startup->setChecked(runOnStartup);
    ui->checkBox_windowBorders->setChecked(captureWindowBorders);
#ifdef Q_OS_MACX
    ui->checkBox_windowBorders->setVisible(false);
#endif
    //Accout input fields
    ui->label_email->setText(email);
    ui->label_screenshotNumber->setText("Loading..");
    //Hotkey input fields
    ui->table_hotkeys->item(0,1)->setText(fullScreenHotkeyStr);
    ui->table_hotkeys->item(1,1)->setText(selectionHotkeyStr);
    ui->table_hotkeys->item(2,1)->setText(windowHotkeyStr);
    //Static text fields
    ui->table_hotkeys->item(0,0)->setFlags(Qt::ItemIsEnabled);
    ui->table_hotkeys->item(1,0)->setFlags(Qt::ItemIsEnabled);
    ui->table_hotkeys->item(2,0)->setFlags(Qt::ItemIsEnabled);
    ui->table_hotkeys->horizontalHeader()->setStretchLastSection(true);
    ui->table_hotkeys->installEventFilter(hotkeyFilter);
    //Hotkey input slots
    connect(ui->table_hotkeys, SIGNAL(itemDoubleClicked(QTableWidgetItem*)), this, SLOT(recordHotkey(QTableWidgetItem*)));
    connect(hotkeyFilter, SIGNAL(keyRecorded(QString)), this, SLOT(keyRecorded(QString)));
    connect(ui->table_hotkeys, SIGNAL(currentItemChanged(QTableWidgetItem*,QTableWidgetItem*)), this, SLOT(hotkeyItemChanged(QTableWidgetItem*,QTableWidgetItem*)));
    //connect(ui->table_hotkeys, SIGNAL(), this, SLOT(validateHotkey(QTableWidgetItem*)));
    //Uploader list
    ui->list_uploaders->setIconSize(QSize(32,32));
    //Setting the model
    ui->list_uploaders->setModel(uploadersModel);
    ui->checkBox_askMe->setChecked(showSaveDialog);
    if(showSaveDialog)
    {
        ui->checkBox_askMe->setEnabled(false);
    }
    //Updates tab
    ui->label_currentVersion->setText(VERSION);
    ui->checkBox_autoUpdate->setChecked(autoCheckUpdates);
    ui->checkBox_notifyUpdates->setChecked(notifyUpdates);
    ui->checkBox_notifyUpdates->setEnabled(autoCheckUpdates);
#ifdef MAC_APPSTORE
    if(ui->tabWidget->count() > 6)
    {
        ui->tabWidget->removeTab(5);
    }
#endif
    if(loggedIn)
    {
        ui->group_notLoggedIn->setVisible(false);
        ui->group_account->setVisible(true);
    }else
    {
        //Hide all account related stuff
        ui->group_account->setVisible(false);
    }
#ifndef PLUGIN_SUPPORT
    ui->button_plugins->setVisible(false);
#endif
    //Network tab
    if(!useProxy)
    {
        on_comboBox_proxyType_currentIndexChanged(0);
    }
    if(autodetectProxy)
    {
        ui->comboBox_proxyType->setCurrentIndex(1);
    }else if(proxyType == "http")
    {
        ui->comboBox_proxyType->setCurrentIndex(2);
    }else if(proxyType == "socks5")
    {
        ui->comboBox_proxyType->setCurrentIndex(3);
    }
    ui->checkBox_auth->setChecked(proxyRequireAuth);
    ui->input_hostname->setText(proxyHostname);
    ui->spinBox_port->setValue(proxyPort);
    ui->input_proxyUsername->setText(proxyUsername);
    ui->input_proxyPassword->setText(proxyPassword);

}
void PreferencesDialog::validateHotkey(QTableWidgetItem* item)
{
    qDebug() << "Validating hotkey";
    if(item->flags() & Qt::ItemIsSelectable) //Only validate cells with hotkeys in them
    {
        QKeySequence keySeq = QKeySequence(item->text());
        QString accelText = QString(keySeq);
        if (accelText.isEmpty() && !item->text().isEmpty()) {
            item->setText(oldHotkeyText);
            qDebug() << "Failed to validate hotkey(" << accelText <<"). Resetting to " << oldHotkeyText;
        } else {
            item->setText(accelText);
        }
        keysRecorded = 0;
    }
}
void PreferencesDialog::getNumberOfScreenshots()
{
    QOAuth::Interface *qoauth = new QOAuth::Interface;
    qoauth->setConsumerKey(CONSUMER_KEY_SCREENCLOUD);
    qoauth->setConsumerSecret(CONSUMER_SECRET_SCREENCLOUD);
    QByteArray url( "http://screencloud.net/1.0/users/info.xml" );
    QString urlString = QString(url);
    // create a request parameters map
    QOAuth::ParamMap map;

    QByteArray body =
    qoauth->createParametersString( urlString, QOAuth::POST,
                                        token, tokenSecret,QOAuth::HMAC_SHA1, map,
                                        QOAuth::ParseForRequestContent );

    QNetworkRequest request;
    request.setUrl(QUrl(url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");
    manager->post(request, body);
}

void PreferencesDialog::comboboxImageFormatChanged(int item)
{
    switch(item)
    {
        case 0:
            //PNG
            ui->slider_jpegQuality->setVisible(false);
            ui->label_qualityNumber->setVisible(false);
            ui->label_quality->setVisible(false);
            break;
        case 1:
            //JPG
            ui->slider_jpegQuality->setVisible(true);
            ui->label_qualityNumber->setVisible(true);
            ui->label_quality->setVisible(true);
            break;

    }
}

void PreferencesDialog::on_settings_clicked()
{
    //Uploader settings
    int selectedIndex;
    QModelIndexList indexes = ui->list_uploaders->selectionModel()->selectedIndexes();
    if(indexes.size() > 0)
    {
        selectedIndex = indexes.at(0).row();
        if(selectedIndex >= 0 && selectedIndex < uploaders->size())
        {
            if(uploaders->at(selectedIndex)->getShortName() == "screencloud")
            {
                //Move to account tab
                ui->tabWidget->setCurrentIndex(1);
            }else
            {
                uploaders->at(selectedIndex)->openSettingsDialog(this);
            }

        }
    }


}

void PreferencesDialog::on_button_logOut_clicked()
{
    QMessageBox msgBox;
    msgBox.addButton(QMessageBox::Yes);
    msgBox.addButton(QMessageBox::No);
    msgBox.setText("Are you sure that you want to log out? This will remove the saved account details and quit the application.");
    msgBox.setIcon(QMessageBox::Information);
    int selection = msgBox.exec();
    if(selection == QMessageBox::Yes)
    {
        //Send logout request
        QOAuth::Interface *qoauth = new QOAuth::Interface;
        qoauth->setConsumerKey(CONSUMER_KEY_SCREENCLOUD);
        qoauth->setConsumerSecret(CONSUMER_SECRET_SCREENCLOUD);
        QByteArray url( "http://screencloud.net/1.0/users/logout.xml" );
        QString urlString = QString(url);
        // create a request parameters map
        QOAuth::ParamMap map;
        map.insert("token", token);

        QByteArray body =
        qoauth->createParametersString( urlString, QOAuth::POST,
                                            token, tokenSecret,QOAuth::HMAC_SHA1, map,
                                            QOAuth::ParseForRequestContent );
        QNetworkRequest request;
        request.setUrl(QUrl(url));
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");
        manager->post(request, body);
        userHasLoggedOut = true;
    }
}

void PreferencesDialog::recordHotkey(QTableWidgetItem* item)
{
    qDebug() << "current change";
    if(item->flags() & Qt::ItemIsSelectable)
    {
        keysRecorded = 0;
        oldHotkeyText = item->text();
        item->setText("Press a key combination...");
        editingHotkeyField = true;
        ui->table_hotkeys->currentItem()->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    }
}

void PreferencesDialog::keyRecorded(QString key)
{
    if(editingHotkeyField)
    {
        if(key == "Return" || key == "Enter")
        {
            validateHotkey(ui->table_hotkeys->currentItem());
            //Take the focus away
            this->setFocus(Qt::OtherFocusReason);
            editingHotkeyField = false;
            return;
        }
        if(keysRecorded < 3 && ui->table_hotkeys->currentIndex().flags() & Qt::ItemIsSelectable)
        {
            if(keysRecorded == 0)
            {
                ui->table_hotkeys->currentItem()->setText(key);
            }else
            {
                ui->table_hotkeys->currentItem()->setText(ui->table_hotkeys->currentItem()->text() + "+" + key);
            }
            keysRecorded ++;
            if(keysRecorded == 3)
            {
                validateHotkey(ui->table_hotkeys->currentItem());
            }
        }else
        {
            validateHotkey(ui->table_hotkeys->currentItem());
        }
    }
}

void PreferencesDialog::hotkeyItemChanged(QTableWidgetItem *current, QTableWidgetItem *previous)
{
    if(previous != NULL)
    {
        if(!current->text().isEmpty() && current->text() != "Press a key combination...")
        {
            validateHotkey(previous);
            editingHotkeyField = false;
        }
    }

}

void PreferencesDialog::replyFinished(QNetworkReply *reply)
{
    if(userHasLoggedOut)
    {
        //Remove account settings
        QSettings settings("screencloud", "ScreenCloud");
        settings.remove("account");
        QCoreApplication::exit(0);
    }
    QString replyText = reply->readAll();
    if(reply->error() != QNetworkReply::NoError)
    {
        //Parse servers response
        QDomDocument doc("error");
        if (!doc.setContent(replyText)) {
            ui->label_screenshotNumber->setText("<font color='red'>Failed to parse response from server</font>");
            return;
        }
        QDomElement docElem = doc.documentElement();
        QDomElement message = docElem.firstChildElement("message");
        ui->label_screenshotNumber->setText("<font color='red'>" + message.text() + "</font>");
        if(message.text().isNull())
        {
            ui->label_screenshotNumber->setText("<font color='red'>Failed to parse response from server</font>");
        }

    }else
    {
        //No error in request
        QDomDocument doc("reply");
        if (!doc.setContent(replyText)) {
            ui->label_screenshotNumber->setText("<font color='red'>error!</font>");
            return;
        }
        QDomElement docElem = doc.documentElement();
        QDomElement screenshots = docElem.firstChildElement("screenshots");
        ui->label_screenshotNumber->setText(screenshots.text());
        if(screenshots.text().length() == 0)
        {
            ui->label_screenshotNumber->setText("<font color='red'>Failed to parse response from server!</font>");
        }
    }
}

void PreferencesDialog::gotVersionNumber(QString versionNumber, bool outdated)
{
    ui->label_latestVersion->setText(versionNumber);
}

void PreferencesDialog::on_button_checkForUpdates_clicked()
{
    updater->checkForUpdates(Updater::ForceNotification); //Force a notification
}

void PreferencesDialog::on_button_dashboard_clicked()
{
    emit openDashboardPressed();
}

void PreferencesDialog::on_list_uploaders_doubleClicked(const QModelIndex &index)
{
    //Uploader settings
    int selectedIndex;
    selectedIndex = index.row();
    if(selectedIndex >= 0 && selectedIndex < uploaders->size())
    {
        if(uploaders->at(selectedIndex)->getShortName() == "screencloud")
        {
            //Move to account tab
            ui->tabWidget->setCurrentIndex(1);
        }else
        {
            uploaders->at(selectedIndex)->openSettingsDialog(this);
        }

    }
}

void PreferencesDialog::on_button_login_clicked()
{
    //User has denied login before, but want to login now
    if(!loggedIn)
    {
        LoginDialog loginDialog(this);
        if(loginDialog.exec() == QDialog::Accepted)
        {
            //Refresh after login
            loadSettings();
            setupUi();
            getNumberOfScreenshots();
        }
    }
}

void PreferencesDialog::on_button_plugins_clicked()
{
#ifdef PLUGIN_SUPPORT
    PluginDialog p(this);
    p.exec();
    if(p.pluginsChanged())
    {
        emit pluginsChanged(p.getInstalled(), p.getUninstalled());
    }
    delete uploadersModel;
    uploadersModel = new AvailableUploadersListModel(this, uploaders);
    ui->list_uploaders->setModel(uploadersModel);
#endif
}

void PreferencesDialog::on_button_restoreDefaults_clicked()
{
    ui->table_hotkeys->item(0,1)->setText("Shift+Alt+1");
    ui->table_hotkeys->item(1,1)->setText("Shift+Alt+2");
    ui->table_hotkeys->item(2,1)->setText("Shift+Alt+3");
}

void PreferencesDialog::on_comboBox_proxyType_currentIndexChanged(int index)
{
    if(index < 2)
    {
        ui->formWidget_hostnamePort->setEnabled(false);
    }else
    {
        ui->formWidget_hostnamePort->setEnabled(true);
    }
    if(index == 0)
    {
        useProxy = false;
        autodetectProxy = false;
    }else if(index == 1)
    {
        useProxy = true;
        autodetectProxy = true;
    }else
    {
        useProxy = true;
        autodetectProxy = false;
    }
}

void PreferencesDialog::on_button_aboutqt_clicked()
{
    QMessageBox::aboutQt(this, "About Qt");

}

void PreferencesDialog::on_button_licenses_clicked()
{
    LicensesDialog l;
    l.exec();
}
