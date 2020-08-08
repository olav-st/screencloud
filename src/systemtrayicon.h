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

#ifndef SYSTEMTRAYICON_H
#define SYSTEMTRAYICON_H

#include <QSystemTrayIcon>
#include <QIcon>
#include <QMenu>
#include <QAction>
#include <QSettings>
#include <QKeySequence>
#include <qxtglobalshortcut.h>
#include <QList>
#include <QMenu>
#include <QTimer>
#include <QDesktopServices>
#include <QClipboard>
#include <utils/OS.h>
#include <QNetworkProxy>
#include <QMessageBox>
#include <screenshooter.h>
#include <uploaders/uploader.h>
#include <dialog/preferencesdialog.h>
#include <utils/updater.h>
#include <gui-elements/selectionoverlay.h>
#include <plugin/pluginmanager.h>
#include <uploadmanager.h>
#include <dialog/savescreenshotdialog.h>
#include <audionotifier.h>

class SystemTrayIcon : public QSystemTrayIcon
{
    Q_OBJECT
public:
    explicit SystemTrayIcon(QObject *parent = 0, QString color = "", bool openPerfWindow = false);
    ~SystemTrayIcon();
    void loadSettings();
    void saveSettings();
    void createGlobalShortcuts();
    void createSystrayActions();
    void createSystrayMenu();
    void populateSaveSubmenu();
    void updateSystrayMenu();
    void updateGlobalShortcuts();
private:
    QString token, tokenSecret;
    PreferencesDialog* prefDialog;
    SaveScreenshotDialog* saveDialog;
    SelectionOverlay* overlay;
    UploadManager uploadManager;
    QString currentUploaderShortname;
    QImage screenshot;
    QMenu *trayMenu;
    QMenu *traySubmenuUploaders;
    QIcon systrayIconNormal;
    QIcon systrayIconUploading;
#ifdef Q_OS_MACX
    QIcon systrayIconSelected;
#endif
    QMap<QString, QAction*> submenuActions; //Key is uploaders shortname
    int screenshotDelay;
    //systray menu actions;
    QAction* cptFullScreenAct;
    QAction* cptSelectionAct;
    QAction* cptWindowAct;
    QAction* preferencesAct;
    QAction* quitAct;
    QAction* askMeAct;
    //Systray Menu key combo
    QKeySequence keySqFullScreen;
    QKeySequence keySqSelection;
    QKeySequence keySqWindow;
    //Systray global shortcuts
    QxtGlobalShortcut* hotkeyFullScreen;
    QxtGlobalShortcut* hotkeySelection;
    QxtGlobalShortcut* hotkeyWindow;
    bool showSaveDialog;
    bool uploading, capturing;
    bool showNotifications;
    bool captureWindowBorders, captureMultipleMonitors;
    Updater updater;
    bool autoCheckUpdates;
    AudioNotifier notifier;
    bool useProxy, autodetectProxy;
    QNetworkProxy proxy;
private Q_SLOTS:
    void iconActivated(QSystemTrayIcon::ActivationReason reason);
    void captureFullScreenAction();
    void captureSelectionAction();
    void captureWindowAction();
    void captureFullScreen();
    void captureSelection(QRect& rect, QPixmap& fullScreenshot);
    void selectionCanceled();
    void captureWindow();
    void saveScreenshot(QString name = "", QString uploaderShortname = "");
    void openPreferencesWindow();
    void preferencesWindowFinished(int result);
    void openSaveDialog();
    void saveDialogFinished(int result);
    void quitApplication();
    void openSelectionOverlay();
    void uploaderMenuItemChecked(bool checked);
    void screenshotSaved(QString url);
    void screenshotSavingError(QString errorMessage);
    void setAppProxy();
    void pluginsUpdated();

};

#endif // SYSTEMTRAYICON_H
