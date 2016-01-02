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

#include "startup.h"
#include <utils/log.h>
#import <Foundation/Foundation.h>
#import <ServiceManagement/ServiceManagement.h>

Startup::Startup()
{
}

void Startup::setRunOnStartup(bool runOnStartup)
{
    CFBundleRef mainBundle = CFBundleGetMainBundle();
    NSURL *mainBundleURL = [[NSBundle mainBundle] bundleURL];
    NSURL *url = [mainBundleURL URLByAppendingPathComponent: @"Contents/Library/LoginItems/ScreenCloudHelper.app"];
    if (LSRegisterURL((CFURLRef)url, true) != noErr) {
        WARNING("LSRegisterURL failed. URL: " + QString([[url absoluteString] UTF8String]));
    }

    if(runOnStartup)
    {
        NSString *ref = @"com.screencloud.ScreenCloudHelper";
        if (!SMLoginItemSetEnabled((CFStringRef)ref, true)) {
            WARNING("SMLoginItemSetEnabled(true) failed.");
        }
    }else{
        NSString *ref = @"com.screencloud.ScreenCloudHelper";
        if (!SMLoginItemSetEnabled((CFStringRef)ref, false)) {
            WARNING("SMLoginItemSetEnabled(false) failed.");
        }
    }
}
