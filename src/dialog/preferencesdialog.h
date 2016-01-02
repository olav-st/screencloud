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

#ifndef PREFERENCESDIALOG_H
#define PREFERENCESDIALOG_H

#include <QDialog>
#include <QSettings>
#include <QCryptographicHash>
#include <QByteArray>
#include <QList>
#include "uploaders/uploader.h"
#include <QStringList>
#include <QStringListModel>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QApplication>
#include <QMessageBox>
#include <QTableWidgetItem>
#include <hotkeyeventfilter.h>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QDomDocument>
#include <utils/startup.h>
#include <utils/updater.h>
#include <plugin/pluginmanager.h>
#include <uploadmanager.h>
#include <dialog/plugindialog.h>
#include <dialog/logindialog.h>
#include <PythonQt.h>
#include <gui-elements/pythonconsole.h>

namespace Ui {
    class PreferencesDialog;
}

class PreferencesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PreferencesDialog(QWidget *parent = 0, UploadManager* uManager = 0);
    ~PreferencesDialog();
    void loadSettings();
    void saveSettings();
    void setupUi();
    void getUserInfo();
    void validateHotkey(QTableWidgetItem* item);

private:
    Ui::PreferencesDialog *ui;
    QNetworkAccessManager *manager;
    UploadManager* uploadManager;
    PythonQtObjectPtr pythonContext;
    PythonConsole* console;
    //Setting values
    int jpegQuality;
    QString email;
    QString token, tokenSecret;
    bool loggedIn;
    QString fullScreenHotkeyStr, selectionHotkeyStr, windowHotkeyStr;
    QString format;
    double screenshotDelay;
    QString oldHotkeyText;
    HotkeyEventFilter* hotkeyFilter;
    int keysRecorded;
    bool editingHotkeyField;
    bool showNotifications;
    bool runOnStartup;
    bool captureWindowBorders;
    Updater* updater;
    bool autoCheckUpdates;
    bool showSaveDialog;
    bool userHasLoggedOut;
    bool soundNotifications;

    bool useProxy;
    bool autodetectProxy;
    bool proxyRequireAuth;
    QString proxyHostname;
    quint16 proxyPort;
    QString proxyUsername;
    QString proxyPassword;
    QString proxyType;
public Q_SLOTS:
    void dialogFinished(int r);
    void comboboxImageFormatChanged(int item);
    void pluginsUpdated();
private Q_SLOTS:
    void recordHotkey(QTableWidgetItem* item);
    void keyRecorded(Qt::Key key, int keycode, Qt::KeyboardModifiers modifiers);
    void hotkeyItemChanged(QTableWidgetItem * current, QTableWidgetItem * previous);
    void gotVersionNumber(QString versionNumber, bool outdated);
    void replyFinished(QNetworkReply* reply);
    void on_button_checkForUpdates_clicked();
    void on_button_dashboard_clicked();
    void on_list_uploaders_doubleClicked(const QModelIndex &index);
    void on_button_plugins_clicked();
    void on_button_restoreDefaults_clicked();
    void on_comboBox_proxyType_currentIndexChanged(int index);
    void on_button_aboutqt_clicked();
    void on_button_licenses_clicked();
    void on_actionShowDebug_triggered();
    void on_button_login_clicked();
    void on_tabWidget_currentChanged(int index);
    void on_button_logout_clicked();
    void on_list_uploaders_clicked(const QModelIndex &index);
    void on_button_settings_clicked();

Q_SIGNALS:
    void openDashboardPressed();
};

#endif // PREFERENCESDIALOG_H
