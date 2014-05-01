project(ScreenCloudHelper)
cmake_minimum_required (VERSION 2.6)
set(CMAKE_C_FLAGS "-x objective-c")

set(ScreenCloudHelper_HEADERS
    ScreenCloudHelper/AppDelegate.h
    ScreenCloudHelper/ScreenCloudHelper-Prefix.pch
)
set(ScreenCloudHelper_SOURCES
    ScreenCloudHelper/AppDelegate.m
    ScreenCloudHelper/main.m
)
set(XIB_FILE
    ScreenCloudHelper/MainMenu.xib
)
set(ICON_FILE
    icons_mac.icns
)

add_executable(
    ScreenCloudHelper
    MACOSX_BUNDLE
    ${ScreenCloudHelper_HEADERS}
    ${ScreenCloudHelper_SOURCES}
    ${XIB_FILE}
    ${ICON_FILE}
)

set_source_files_properties(
    ${XIB_FILE}
    PROPERTIES
    MACOSX_PACKAGE_LOCATION
    Resources
)

set_source_files_properties(${ICON_FILE} PROPERTIES
                             MACOSX_PACKAGE_LOCATION Resources)

set_target_properties(
    ScreenCloudHelper
    PROPERTIES
    MACOSX_BUNDLE_INFO_PLIST
    ${CMAKE_CURRENT_SOURCE_DIR}/ScreenCloudHelper/ScreenCloudHelper-Info.plist
)

target_link_libraries(ScreenCloudHelper
    "-framework Cocoa"
    "-framework AppKit"
    "-framework CoreData"
    "-framework Foundation"
)
