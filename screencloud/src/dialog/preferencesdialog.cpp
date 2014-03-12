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
#include <utils/log.h>
#include "licensesdialog.h"

PreferencesDialog::PreferencesDialog(QWidget *parent, UploadManager *uManager) :
    QDialog(parent),
    ui(new Ui::PreferencesDialog)
{
    ui->setupUi(this);
    connect(this, SIGNAL(finished(int)), SLOT(dialogFinished(int)));
    connect(ui->combobox_imageFormat, SIGNAL(currentIndexChanged(int)), this, SLOT(comboboxImageFormatChanged(int)));
    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinished(QNetworkReply*)));
    updater = new Updater(this);
    connect(updater, SIGNAL(versionNumberRecieved(QString,bool)), this, SLOT(gotVersionNumber(QString,bool)));
    this->uploadManager = uManager;
    hotkeyFilter = new HotkeyEventFilter(this);
    //Hotkey signals
    connect(ui->table_hotkeys, SIGNAL(itemDoubleClicked(QTableWidgetItem*)), this, SLOT(recordHotkey(QTableWidgetItem*)));
    connect(hotkeyFilter, SIGNAL(keyRecorded(Qt::Key, int, Qt::KeyboardModifiers)), this, SLOT(keyRecorded(Qt::Key, int, Qt::KeyboardModifiers)));
    connect(ui->table_hotkeys, SIGNAL(currentItemChanged(QTableWidgetItem*,QTableWidgetItem*)), this, SLOT(hotkeyItemChanged(QTableWidgetItem*,QTableWidgetItem*)));
    editingHotkeyField = false;
    keysRecorded = 0;
    pythonContext = PythonQt::self()->getMainModule();
    console = new PythonQtScriptingConsole(ui->tab_debug, pythonContext);
    ui->layout_debug->addWidget(console);
    loadSettings();
    setupUi();
    updater->checkForUpdates(Updater::NoNotification);
    userHasLoggedOut = false;
}

PreferencesDialog::~PreferencesDialog()
{
    delete ui;
    delete hotkeyFilter;
    delete manager;
    delete console;
}
void PreferencesDialog::loadSettings()
{
    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("main");
    format = settings.value("format", "png").toString();
    jpegQuality = settings.value("jpeg-quality", 90).toInt();
    screenshotDelay = settings.value("delay", 100.0).toDouble();
    showNotifications = settings.value("show-notifications", true).toBool();
    runOnStartup = settings.value("run-on-startup", false).toBool();
    captureWindowBorders = settings.value("capture-window-borders", false).toBool();
    soundNotifications = settings.value("sound", true).toBool();
    showSaveDialog = settings.value("show-save-dialog", true).toBool();
    settings.endGroup();
    settings.beginGroup("account");
    email = settings.value("email", "").toString();
    token = settings.value("token", "").toString();
    tokenSecret = settings.value("token-secret", "").toString();
    loggedIn = settings.value("logged-in").toBool();
    settings.endGroup();
    settings.beginGroup("hotkeys");
    fullScreenHotkeyStr = settings.value("captureFullScreen", QString("Shift+Alt+1")).toString();
    selectionHotkeyStr = settings.value("captureSelection", QString("Shift+Alt+2")).toString();
    windowHotkeyStr = settings.value("captureWindow", QString("Shift+Alt+3")).toString();
    settings.endGroup();
    settings.beginGroup("updates");
#ifdef Q_OS_WIN
        autoCheckUpdates = settings.value("check-updates-automatically", true).toBool();
#elif defined(Q_OS_LINUX) && !defined(UBUNTU_SOFTWARE_CENTER)
        autoCheckUpdates = settings.value("check-updates-automatically", true).toBool();
#else
        autoCheckUpdates = settings.value("check-updates-automatically", false).toBool();
#endif
    settings.endGroup();
    //Proxy settings
    settings.beginGroup("network");
    useProxy = settings.value("use-proxy", false).toBool();
    autodetectProxy = settings.value("autodetect-proxy", false).toBool();
    proxyHostname = settings.value("proxy-hostname", "").toString();
    proxyPort = settings.value("proxy-port", 8080).toUInt();
    proxyRequireAuth = settings.value("proxy-req-auth", false).toBool();
    proxyUsername = settings.value("proxy-username", "").toString();
    proxyPassword = settings.value("proxy-password", "").toString();
    proxyType = settings.value("proxy-type", "").toString();
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
    autoCheckUpdates = ui->checkBox_autoUpdate->isChecked();
    showSaveDialog = ui->checkBox_askMe->isChecked();

    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("main");
    settings.setValue("format", format);
    settings.setValue("jpeg-quality", jpegQuality);
    settings.setValue("delay", screenshotDelay);
    settings.setValue("sound", soundNotifications);
    settings.setValue("show-notifications", showNotifications);
    settings.setValue("run-on-startup", runOnStartup);
    settings.setValue("capture-window-borders", captureWindowBorders);
    Startup::setRunOnStartup(runOnStartup);
    settings.setValue("show-save-dialog", showSaveDialog);
    settings.endGroup();
    settings.beginGroup("hotkeys");
    settings.setValue("captureFullScreen", fullScreenHotkeyStr);
    settings.setValue("captureSelection", selectionHotkeyStr);
    settings.setValue("captureWindow", windowHotkeyStr);
    settings.endGroup();
    settings.beginGroup("updates");
    settings.setValue("check-updates-automatically", autoCheckUpdates);
    settings.endGroup();
    settings.beginGroup("network");
    if(ui->comboBox_proxyType->currentIndex() > 0)
    {
        settings.setValue("use-proxy", true);
        if(ui->comboBox_proxyType->currentIndex() == 1)
        {
            settings.setValue("autodetect-proxy", true);
            settings.remove("proxy-type");
        }else if(ui->comboBox_proxyType->currentIndex() == 2)
        {
            settings.setValue("proxy-type", "http");
            settings.remove("autodetect-proxy");
        }else if(ui->comboBox_proxyType->currentIndex() == 3)
        {
            settings.setValue("proxy-type", "socks5");
            settings.remove("autodetect-proxy");
        }
        if(ui->comboBox_proxyType->currentIndex() > 1)
        {
            settings.setValue("proxy-hostname", ui->input_hostname->text());
            settings.setValue("proxy-port", ui->spinBox_port->value());
            settings.setValue("proxy-username", ui->input_proxyUsername->text());
            settings.setValue("proxy-password", ui->input_proxyPassword->text());
        }
    }else
    {
        settings.remove("use-proxy");
        settings.remove("autodetect-proxy");
        settings.remove("proxy-type");
    }
    settings.setValue("proxy-req-auth", ui->checkBox_auth->isChecked());
    settings.endGroup();
}

void PreferencesDialog::dialogFinished(int r)
{
    saveSettings();
    close();
}

void PreferencesDialog::setupUi()
{
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
    //Accuont tab
    if(loggedIn)
    {
        ui->group_notLoggedIn->setVisible(false);
        ui->group_account->setVisible(true);
        ui->label_email->setText(email);
    }else
    {
        //Hide all account info
        ui->group_account->setVisible(false);
    }
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
    //Uploader list
    ui->list_uploaders->setIconSize(QSize(32,32));
    //Setting the model
    ui->list_uploaders->setModel(uploadManager->listModel());
    ui->checkBox_askMe->setChecked(showSaveDialog);
    if(showSaveDialog)
    {
        ui->checkBox_askMe->setEnabled(false);
    }
    //Updates tab
    ui->label_currentVersion->setText(VERSION);
    ui->checkBox_autoUpdate->setChecked(autoCheckUpdates);
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
    //Debug tab
    this->addAction(ui->actionShowDebug);
    ui->tab_debug->setEnabled(false);
    ui->tabWidget->removeTab(ui->tabWidget->indexOf(ui->tab_debug));
}

void PreferencesDialog::getUserInfo()
{
    QUrl url( "https://api.screencloud.net/1.0/users/info.xml" );

    // construct the parameters string
    url.addQueryItem("oauth_version", "1.0");
    url.addQueryItem("oauth_signature_method", "PLAINTEXT");
    url.addQueryItem("oauth_token", token);
    url.addQueryItem("oauth_consumer_key", CONSUMER_KEY_SCREENCLOUD);
    url.addQueryItem("oauth_signature", CONSUMER_SECRET_SCREENCLOUD + QString("&") + tokenSecret);
    url.addQueryItem("oauth_timestamp", QString::number(QDateTime::currentDateTimeUtc().toTime_t()));
    url.addQueryItem("oauth_nonce", NetworkUtils::generateNonce(15));

    QNetworkRequest request;
    request.setUrl(url);
    manager->get(request);
}
void PreferencesDialog::validateHotkey(QTableWidgetItem* item)
{
    INFO("Validating hotkey");
    if(item->flags() & Qt::ItemIsSelectable) //Only validate cells with hotkeys in them
    {
        QKeySequence keySeq = QKeySequence(item->text());
        QString keySeqString = keySeq.toString();
        if (keySeqString.isEmpty() || (keySeqString.count(QRegExp("[!@#$%^&*()_\"]")) > 0)) {
            WARNING("Failed to validate hotkey(" + keySeqString +"). Resetting to " + oldHotkeyText);
            item->setText(oldHotkeyText);
            this->setFocus(Qt::OtherFocusReason);
            editingHotkeyField = false;
        } else {
            item->setText(keySeqString);
        }
        keysRecorded = 0;
    }
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

void PreferencesDialog::recordHotkey(QTableWidgetItem* item)
{
    if(item->flags() & Qt::ItemIsSelectable)
    {
        keysRecorded = 0;
        if(!item->text().isEmpty() && item->text() != "Press a key combination...")
        {
            oldHotkeyText = item->text();
        }
        item->setText("Press a key combination...");
        editingHotkeyField = true;
        ui->table_hotkeys->currentItem()->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    }
}

void PreferencesDialog::keyRecorded(Qt::Key key, int keycode, Qt::KeyboardModifiers modifiers)
{
    if(editingHotkeyField)
    {
        QString keyName;
        switch(key)
        {
            case Qt::Key_Shift:
                keyName = "Shift";
                break;
            case Qt::Key_Control:
                keyName = "Ctrl";
                break;
            case Qt::Key_Alt:
                keyName = "Alt";
                break;
            case Qt::Key_AltGr:
                keyName = "AltGr";
                break;
            case Qt::Key_Meta:
                keyName = "Super";
                break;
            default:
                keyName = QKeySequence(keycode).toString(QKeySequence::NativeText);
                break;
        }
        if(key == Qt::Key_Return || key == Qt::Key_Enter || key == Qt::Key_Backspace)
        {
            validateHotkey(ui->table_hotkeys->currentItem());
            //Take the focus away
            this->setFocus(Qt::OtherFocusReason);
            editingHotkeyField = false;
            keysRecorded = 0;
            return;
        }
        if(keysRecorded < 4 && ui->table_hotkeys->currentIndex().flags() & Qt::ItemIsSelectable)
        {
            keysRecorded ++;
            if(keysRecorded == 1)
            {
                ui->table_hotkeys->currentItem()->setText(keyName);
            }else
            {
                ui->table_hotkeys->currentItem()->setText(ui->table_hotkeys->currentItem()->text() + "+" + keyName);
            }
            if(keysRecorded == 3)
            {
                validateHotkey(ui->table_hotkeys->currentItem());
            }
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

void PreferencesDialog::gotVersionNumber(QString versionNumber, bool outdated)
{
    ui->label_latestVersion->setText(versionNumber);
}

void PreferencesDialog::replyFinished(QNetworkReply *reply)
{
    if(userHasLoggedOut)
    {
        //Remove account settings
        QSettings settings("screencloud", "ScreenCloud");
        settings.remove("account");
        settings.remove("first-run");
        QCoreApplication::exit(0);
    }
    QString replyText = reply->readAll();
    if(reply->error() != QNetworkReply::NoError)
    {
        //Parse servers response
        QDomDocument doc("error");
        if (!doc.setContent(replyText)) {
            ui->label_screenshots->setText("<font color='red'>Failed to parse response from server</font>");
            return;
        }
        QDomElement docElem = doc.documentElement();
        QDomElement message = docElem.firstChildElement("message");
        ui->label_screenshots->setText("<font color='red'>" + message.text() + "</font>");
        if(message.text().isNull())
        {
            ui->label_screenshots->setText("<font color='red'>Failed to parse response from server</font>");
        }

    }else
    {
        //No error in request
        QDomDocument doc("reply");
        if (!doc.setContent(replyText)) {
            ui->label_screenshots->setText("<font color='red'>error!</font>");
            return;
        }
        QDomElement docElem = doc.documentElement();
        QDomElement screenshots = docElem.firstChildElement("screenshots");
        ui->label_screenshots->setText(screenshots.text());
        QDomElement isPremium = docElem.firstChildElement("is_premium");
        if(isPremium.text().compare("true", Qt::CaseInsensitive) == 0 || isPremium.text().toInt() == 1)
        {
            ui->label_accountType->setText("Premium");
        }else
        {
            ui->label_accountType->setText("Free (<a href=\"https://screencloud.net/premium/\">upgrade</a>)");
            ui->label_accountType->setOpenExternalLinks(true);
        }
        if(screenshots.text().length() == 0)
        {
            ui->label_screenshots->setText("<font color='red'>Failed to parse response from server!</font>");
        }
    }
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
    QString shortname = index.model()->data(index, Qt::UserRole).toString();
    if(shortname != "screencloud")
    {
        uploadManager->getUploader(shortname)->showSettingsUI(this);
    }else
    {
        ui->tabWidget->setCurrentIndex(1);
    }
}

void PreferencesDialog::on_list_uploaders_clicked(const QModelIndex &index)
{
    ui->button_settings->setEnabled(true);
}

void PreferencesDialog::on_button_settings_clicked()
{
    //Uploader settings
    QModelIndex selectedIndex;
    QModelIndexList indexes = ui->list_uploaders->selectionModel()->selectedIndexes();
    if(indexes.size() > 0)
    {
        selectedIndex = indexes.at(0);
        QString shortname = selectedIndex.model()->data(selectedIndex, Qt::UserRole).toString();
        if(shortname != "screencloud")
        {
            uploadManager->getUploader(shortname)->showSettingsUI(this);
        }else
        {
            ui->tabWidget->setCurrentIndex(1);
        }
    }
}

void PreferencesDialog::on_button_plugins_clicked()
{
    PluginDialog p(this);
    p.exec();
    uploadManager->reloadServices();
    ui->list_uploaders->setModel(NULL);
    ui->list_uploaders->setModel(uploadManager->listModel());
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
        ui->checkBox_auth->setEnabled(false);
    }else
    {
        ui->formWidget_hostnamePort->setEnabled(true);
        ui->checkBox_auth->setEnabled(true);
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

void PreferencesDialog::on_actionShowDebug_triggered()
{
    if(!ui->tab_debug->isEnabled())
    {
        ui->tabWidget->addTab(ui->tab_debug, "Debug");
        ui->tabWidget->setCurrentWidget(ui->tab_debug);
        ui->tab_debug->setEnabled(true);
        console->setFocus();
    }else
    {
        ui->tabWidget->setCurrentWidget(ui->tab_general);
        ui->tab_debug->setEnabled(false);
        ui->tabWidget->removeTab(ui->tabWidget->indexOf(ui->tab_debug));
    }
}

void PreferencesDialog::on_button_login_clicked()
{
    if(!loggedIn)
    {
        LoginDialog loginDialog(this);
        if(loginDialog.exec() == QDialog::Accepted)
        {
            //Refresh after login
            loadSettings();
            setupUi();
            getUserInfo();
        }
    }
}

void PreferencesDialog::on_tabWidget_currentChanged(int index)
{
    saveSettings();
}

void PreferencesDialog::on_button_logout_clicked()
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
        QUrl url( "https://api.screencloud.net/1.0/users/logout.xml" );

        // construct the parameters string
        url.addQueryItem("oauth_version", "1.0");
        url.addQueryItem("oauth_signature_method", "PLAINTEXT");
        url.addQueryItem("oauth_token", token);
        url.addQueryItem("oauth_consumer_key", CONSUMER_KEY_SCREENCLOUD);
        url.addQueryItem("oauth_signature", CONSUMER_SECRET_SCREENCLOUD + QString("&") + tokenSecret);
        url.addQueryItem("oauth_timestamp", QString::number(QDateTime::currentDateTimeUtc().toTime_t()));
        url.addQueryItem("oauth_nonce", NetworkUtils::generateNonce(15));

        QUrl bodyParams;
        bodyParams.addQueryItem("token", token);
        QByteArray body = bodyParams.encodedQuery();

        QNetworkRequest request;
        request.setUrl(url);
        manager->post(request, body);
        userHasLoggedOut = true;
    }
}
