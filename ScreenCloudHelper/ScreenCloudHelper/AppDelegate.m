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

#import "AppDelegate.h"

@implementation AppDelegate


- (void)applicationDidFinishLaunching:(NSNotification *)aNotification
{
    NSString* appPath = [[[[[[NSBundle mainBundle] bundlePath]  // .app/Contents/Library/LoginItems/.app
                            stringByDeletingLastPathComponent] // .app/Contents/Library/LoginItems
                           stringByDeletingLastPathComponent] // .app/Contents/Library
                          stringByDeletingLastPathComponent] // .app/Contents
                         stringByDeletingLastPathComponent];// .app
    
    [[NSWorkspace sharedWorkspace] launchApplication:appPath];
    
    [NSApp terminate:nil];
}

@end
