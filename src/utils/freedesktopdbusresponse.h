//
// ScreenCloud - An easy to use screenshot sharing application
// Copyright (C) 2016 Olav Sortland Thoresen <olav.s.th@gmail.com>
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

#ifndef FREEDESKTOPDBUSRESPONSE_H
#define FREEDESKTOPDBUSRESPONSE_H

#include <QString>
#include <QVariantMap>

class FreedesktopDbusResponse : public QObject
{
    Q_OBJECT
public:
    FreedesktopDbusResponse(QObject* parent = 0);
    const QString& getScreenshotUri();

private:
    QString screenshotUri;

Q_SIGNALS:
    void responseRecevied();
    void screenshotSaved(QString uri);

public Q_SLOTS:
    void dbusScreenshotResponse(uint response, const QVariantMap &results);
};

#endif // FREEDESKTOPDBUSRESPONSE_H
