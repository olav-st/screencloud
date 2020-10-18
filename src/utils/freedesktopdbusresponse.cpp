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

#include <utils/freedesktopdbusresponse.h>

FreedesktopDbusResponse::FreedesktopDbusResponse(QObject *parent)
{
}

const QString &FreedesktopDbusResponse::getScreenshotUri()
{
    return screenshotUri;
}

void FreedesktopDbusResponse::dbusScreenshotResponse(uint response, const QVariantMap &results)
{
    screenshotUri = "";
    if (!response) {
        if (results.contains(QLatin1String("uri"))) {
            screenshotUri = results.value(QLatin1String("uri")).toString();
            Q_EMIT screenshotSaved(screenshotUri);
        }
    }
    Q_EMIT responseRecevied();
}
