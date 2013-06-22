/* * ScreenCloud - An easy to use screenshot sharing application
 * Copyright (C) 2013 Olav Sortland Thoresen <olav.s.th@gmail.com>
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
#include "models/availableuploaderslistmodel.h"
#include <QApplication>
#include <QMessageBox>
#include <QTableWidgetItem>
#include <hotkeyeventfilter.h>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QDomDocument>
#include <QtOAuth>
#include <utils/startup.h>
#include <utils/updater.h>
#include <logindialog.h>

namespace Ui {
    class PreferencesDialog;
}

class PreferencesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PreferencesDialog(QWidget *parent = 0, Qt::WindowFlags f = 0, QList<Uploader*> *available = 0, Uploader* active = 0);
    ~PreferencesDialog();
    void loadSettings();
    void saveSettings();
    void setupUi();
    void validateHotkey(QTableWidgetItem* item);
    void getNumberOfScreenshots();

private:
    Ui::PreferencesDialog *ui;
    QNetworkAccessManager *manager;
    QByteArray token, tokenSecret;
    QList<Uploader*> *uploaders;
    Uploader* activeUploader;
    AvailableUploadersListModel* uploadersModel;
    //Setting values
    int jpegQuality;
    QString email;
    int passwordLength;
    QByteArray passwordHash;
    QString fullScreenHotkeyStr;
    QString selectionHotkeyStr;
    QString windowHotkeyStr;
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
    bool autoCheckUpdates, notifyUpdates;
    bool showSaveDialog;
    bool userHasLoggedOut;
    bool loggedIn;
    bool soundNotifications;

    bool useProxy;
    bool autodetectProxy;
    bool proxyRequireAuth;
    QString proxyHostname;
    quint16 proxyPort;
    QString proxyUsername;
    QString proxyPassword;
    QString proxyType;
public slots:
    void dialogFinished(int r);
    void comboboxImageFormatChanged(int item);
private slots:
    void on_settings_clicked();
    void on_button_logOut_clicked();
    void recordHotkey(QTableWidgetItem* item);
    void keyRecorded(QString key);
    void hotkeyItemChanged(QTableWidgetItem * current, QTableWidgetItem * previous);
    void replyFinished(QNetworkReply* reply);
    void gotVersionNumber(QString versionNumber, bool outdated);
    void on_button_checkForUpdates_clicked();
    void on_button_dashboard_clicked();
    void on_list_uploaders_doubleClicked(const QModelIndex &index);

    void on_button_login_clicked();

    void on_button_plugins_clicked();

    void on_button_restoreDefaults_clicked();

    void on_comboBox_proxyType_currentIndexChanged(int index);

    void on_button_aboutqt_clicked();

    void on_button_licenses_clicked();

signals:
    void openDashboardPressed();
    void pluginsChanged(QList<QString> installed, QList<QString> uninstalled);
};

#endif // PREFERENCESDIALOG_H
