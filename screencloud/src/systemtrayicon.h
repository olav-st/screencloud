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

#ifndef SYSTEMTRAYICON_H
#define SYSTEMTRAYICON_H

#include <QSystemTrayIcon>
#include <QIcon>
#include <QMenu>
#include <QAction>
#include <QSettings>

#include <QxtGlobalShortcut>
#include <QKeySequence>
#include <QList>
#include <QMenu>
#include <QTimer>
#include <QDesktopServices>
#include <QClipboard>
#include "uploaders/uploader.h"
#include "screenshooter.h"
#include "selectionoverlay.h"
#include "audionotifier.h"
#include "savescreenshotdialog.h"
#include "preferencesdialog.h"
#include <utils/OS.h>
#include <utils/security.h>
#include <utils/updater.h>
#include <downloadupdatedialog.h>
#ifdef PLUGIN_SUPPORT
    #include <plugin/pluginloader.h>
#endif
#include <QNetworkProxy>

class SystemTrayIcon : public QSystemTrayIcon
{
    Q_OBJECT
public:
    explicit SystemTrayIcon(QObject *parent = 0, QString color = "");
    ~SystemTrayIcon();
    void loadSettings();
    void saveSettings();
    void createGlobalShortcuts();
    void createSystrayActions();
    void createSystrayMenu();
    void updateSystrayMenu();
    void updateGlobalShortcuts();
    int findUploaderIndex(QString shortname);
private:
    QByteArray token, tokenSecret;
    ScreenShooter* screenShooter;
    QMenu *trayMenu;
    QMenu *traySubmenuUploaders;
    QIcon systrayIconNormal;
    QIcon systrayIconUploading;
#ifdef Q_OS_MACX
    QIcon systrayIconSelected;
#endif
    Uploader* activeUploader;
    int activeUploaderIndex;
    QList<Uploader*> uploaders;
    QMap<QString, QAction*> submenuActions; //Key is uploaders shortname
    QPixmap fullScreenshot;
    SelectionOverlay* overlay;
    int screenshotDelay;
    //systray menu actions
    QAction* openDashboardAct;
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
    bool uploading;
    bool showNotifications;
    Updater* updater;
    bool autoCheckUpdates;
    AudioNotifier notifier;
#ifdef PLUGIN_SUPPORT
    PluginLoader* pluginLoader;
#endif
    bool useProxy, autodetectProxy;
    QNetworkProxy proxy;
private slots:
    void iconActivated(QSystemTrayIcon::ActivationReason reason);
    void openDashboard();
    void captureFullScreen();
    void captureSelection();
    void captureWindow();
    void openPreferencesWindow();
    void quitApplication();
    void saveScreenshot(QPixmap* screenshot);
    void openSelectionOverlay();
    void uploaderMenuItemChecked(bool checked);
    void screenshotSaved(QString url);
    void screenshotSavingError(QString errorMessage);
    void reloadPlugins(QList<QString> installed, QList<QString> uninstalled);
    void setAppProxy();

};

#endif // SYSTEMTRAYICON_H
