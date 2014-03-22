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
#include <QDebug>
#import <Foundation/Foundation.h>
#import <ServiceManagement/ServiceManagement.h>

Startup::Startup()
{
}

void Startup::setRunOnStartup(bool runOnStartup)
{
    if(runOnStartup)
    {
        NSString *ref = @"com.screencloud.ScreenCloudHelper";
            if (!SMLoginItemSetEnabled((CFStringRef)ref, true)) {
                NSLog(@"SMLoginItemSetEnabled failed.");
            }
    }else{
        NSString *ref = @"com.screencloud.ScreenCloudHelper";
            if (!SMLoginItemSetEnabled((CFStringRef)ref, false)) {
                NSLog(@"SMLoginItemSetEnabled failed.");
            }
    }
}
