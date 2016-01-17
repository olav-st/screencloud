project(ScreenCloudHelper)
cmake_minimum_required (VERSION 2.8.12)

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

find_program(IBTOOL ibtool HINTS "/usr/bin" "${OSX_DEVELOPER_ROOT}/usr/bin")
if (${IBTOOL} STREQUAL "IBTOOL-NOTFOUND")
  message(SEND_ERROR "ibtool can not be found and is needed to compile the .xib files.")
endif()

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

#install login helper
set(CMAKE_INSTALL_PREFIX ${CMAKE_BINARY_DIR})
install(TARGETS ScreenCloudHelper BUNDLE DESTINATION "${CMAKE_INSTALL_PREFIX}/screencloud.app/Contents/Library/LoginItems")

add_custom_command (TARGET ScreenCloudHelper POST_BUILD
                      COMMAND ${IBTOOL} --errors --warnings --notices --output-format human-readable-text
                              --compile ${CMAKE_CURRENT_BINARY_DIR}/\${CONFIGURATION}/ScreenCloudHelper.app/Contents/Resources/MainMenu.nib
                             ${CMAKE_CURRENT_SOURCE_DIR}/ScreenCloudHelper/MainMenu.xib
                      COMMENT "Compiling ScreenCloudHelper/MainMenu.xib")
