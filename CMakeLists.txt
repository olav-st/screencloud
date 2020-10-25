project( screencloud )
cmake_minimum_required(VERSION 2.8.12)
set(VERSION_STRING 1.5.3)


#set module path
set( CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake/modules )
#include ScreenCloud src dir and 3rdparty dir
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/3rdparty)

option(COLOR_OUTPUT "Use color ouput in terminal" ON)
option(PYTHON_USE_PYTHON3 "Use Python 3.x instead of Python 2.x" ON)
option(DISABLE_QT_KEYWORDS "Disable Qt keywords (for example 'slots') to avoid conflicts" OFF)
option(PYTHONQT_IGNORE_SITE "Ignore site module when initializing PythonQt" OFF)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set( screencloud_SOURCES
    src/dialog/downloadupdatedialog.cpp
    src/dialog/preferencesdialog.cpp
    src/dialog/licensesdialog.cpp
    src/dialog/savescreenshotdialog.cpp
    src/dialog/plugindialog.cpp
    src/dialog/changelogdialog.cpp
    src/dialog/editordialog.cpp
    src/dialog/selectfolderdialog.cpp
    src/editor/effects/pixelizegraphicseffect.cpp
    src/editor/items/ellipsegraphicsitem.cpp
    src/editor/items/abstractgraphicsrectitem.cpp
    src/editor/items/handlegraphicsitem.cpp
    src/editor/items/boxgraphicsitem.cpp
    src/editor/items/numbereditem.cpp
    src/editor/items/boxtextgraphicsitem.cpp
    src/editor/items/textgraphicsitem.cpp
    src/editor/items/kaptiongraphicsitem.cpp
    src/editor/items/arrowgraphicsitem.cpp
    src/editor/items/obscuregraphicsitem.cpp
    src/editor/kaptiongraphicstoolkit.cpp
    src/editor/effectpropertytooleditor.cpp
    src/editor/numberpropertytooleditor.cpp
    src/editor/numberselector.cpp
    src/editor/propertytooleditor.cpp
    src/editor/scale.cpp
    src/editor/scalepropertytooleditor.cpp
    src/editor/snapshotcanvas.cpp
    src/editor/colorpropertytooleditor.cpp
    src/editor/fontpropertytooleditor.cpp
    src/editor/graphicsitemfactory.cpp
    src/editor/qcolorbutton.cpp
    src/plugin/pluginmanager.cpp
    src/firstrunwizard/finishedpage.cpp
    src/firstrunwizard/firstrunwizard.cpp
    src/firstrunwizard/shortcutspage.cpp
    src/firstrunwizard/welcomepage.cpp
    src/firstrunwizard/onlineservicespage.cpp
    src/models/uploaderslistmodel.cpp
    src/uploaders/clipboarduploader.cpp
    src/uploaders/localfileuploader.cpp
    src/uploaders/pythonuploader.cpp
    src/uploaders/uploader.cpp
    src/hotkeyeventfilter.cpp
    src/screenshooter.cpp
    src/gui-elements/clickablelabel.cpp
    src/gui-elements/selectionoverlay.cpp
    src/gui-elements/busyoverlay.cpp
    src/gui-elements/pythonconsole.cpp
    src/systemtrayicon.cpp
    src/audionotifier.cpp
    src/uploadmanager.cpp
    src/utils/updater.cpp
    src/utils/network.cpp
    src/utils/systeminfo.cpp
    src/gui-elements/screenshotthumbview.cpp
    src/main.cpp
)

#Platform specific source files
if(WIN32)
    set(screencloud_SOURCES ${screencloud_SOURCES}
    src/utils/startup.cpp
    )
elseif(APPLE)
    set(screencloud_SOURCES ${screencloud_SOURCES}
    src/utils/startup_mac.mm
    )
else()
    set(screencloud_SOURCES ${screencloud_SOURCES}
    src/utils/startup.cpp
    src/utils/freedesktopdbusresponse.cpp
    )
endif()  

set( screencloud_HEADERS_MOC
    src/dialog/downloadupdatedialog.h
    src/dialog/preferencesdialog.h
    src/dialog/licensesdialog.h
    src/dialog/savescreenshotdialog.h
    src/dialog/plugindialog.h
    src/dialog/changelogdialog.h
    src/dialog/editordialog.h
    src/dialog/selectfolderdialog.h
    src/editor/effects/pixelizegraphicseffect.h
    src/editor/items/ellipsegraphicsitem.h
    src/editor/items/abstractgraphicsrectitem.h
    src/editor/items/handlegraphicsitem.h
    src/editor/items/boxgraphicsitem.h
    src/editor/items/numbereditem.h
    src/editor/items/boxtextgraphicsitem.h
    src/editor/items/textgraphicsitem.h
    src/editor/items/kaptiongraphicsitem.h
    src/editor/items/arrowgraphicsitem.h
    src/editor/items/obscuregraphicsitem.h
    src/editor/kaptiongraphicstoolkit.h
    src/editor/effectpropertytooleditor.h
    src/editor/numberpropertytooleditor.h
    src/editor/numberselector.h
    src/editor/propertytooleditor.h
    src/editor/scale.h
    src/editor/scalepropertytooleditor.h
    src/editor/snapshotcanvas.h
    src/editor/colorpropertytooleditor.h
    src/editor/fontpropertytooleditor.h
    src/editor/graphicsitemfactory.h
    src/editor/qcolorbutton.h
    src/firstrunwizard/finishedpage.h
    src/firstrunwizard/firstrunwizard.h
    src/firstrunwizard/shortcutspage.h
    src/firstrunwizard/welcomepage.h
    src/firstrunwizard/onlineservicespage.h
    src/plugin/pluginmanager.h
    src/models/uploaderslistmodel.h
    src/uploaders/localfileuploader.h
    src/uploaders/clipboarduploader.h
    src/uploaders/pythonuploader.h
    src/uploaders/uploader.h
    src/audionotifier.h
    src/uploadmanager.h
    src/hotkeyeventfilter.h
    src/screenshooter.h
    src/gui-elements/clickablelabel.h
    src/gui-elements/selectionoverlay.h
    src/gui-elements/busyoverlay.h
    src/gui-elements/pythonconsole.h
    src/utils/updater.h
    src/utils/systeminfo.h
    src/gui-elements/screenshotthumbview.h
    src/systemtrayicon.h
)

set(screencloud_HEADERS
    src/utils/OS.h
    src/utils/arch.h
    src/utils/log.h
    src/utils/network.h
    src/utils/delay.h
)

#Platform specific header files
if(WIN32)
elseif(APPLE)
else()
    set(screencloud_HEADERS_MOC ${screencloud_HEADERS_MOC}
    src/utils/freedesktopdbusresponse.h
    )
endif()

set( screencloud_FORMS
    src/dialog/downloadupdatedialog.ui
    src/dialog/preferencesdialog.ui
    src/dialog/licensesdialog.ui
    src/dialog/savescreenshotdialog.ui
    src/dialog/plugindialog.ui
    src/dialog/changelogdialog.ui
    src/dialog/editordialog.ui
    src/dialog/selectfolderdialog.ui
)

set( screencloud_RESOURCES
        res/icons.qrc
        res/sounds.qrc
)

#Platform specific resources
if(WIN32)
    set( screencloud_RESOURCES ${screencloud_RESOURCES}
            res/resources_win.qrc
    )
    set(screencloud_SOURCES ${screencloud_SOURCES} res/screencloud.rc)
elseif(APPLE)
    set( screencloud_RESOURCES ${screencloud_RESOURCES}
            res/resources_mac.qrc
    )
    add_subdirectory(ScreenCloudHelper/ ScreenCloudHelper)
else()
    set( screencloud_RESOURCES ${screencloud_RESOURCES}
            res/resources_linux.qrc
    )
endif()

if(COLOR_OUTPUT)
    add_definitions(-DCOLOR_OUTPUT=1)
endif(COLOR_OUTPUT)

if(PYTHONQT_IGNORE_SITE)
    add_definitions(-DPYTHONQT_IGNORE_SITE=1)
endif(PYTHONQT_IGNORE_SITE)

#disable qt keywords to avoid conflicts with python and others
if(DISABLE_QT_KEYWORDS)
    add_definitions(-DQT_NO_KEYWORDS)
endif(DISABLE_QT_KEYWORDS)
#Set version string and update channel
add_definitions(-DVERSION="${VERSION_STRING}")
add_definitions(-DUPDATE_CHANNEL="windows")
add_definitions(-DGITHUB_PLUGIN_LIST_URL="https://raw.githubusercontent.com/olav-st/screencloud-plugins/master/plugin-list.xml")

if(APPLE)
    set(CMAKE_EXE_LINKER_FLAGS
    "-framework Foundation -framework ServiceManagement -framework ApplicationServices"
    )
endif(APPLE)

#Find Qt5 (required)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Network REQUIRED)
find_package(Qt5Xml REQUIRED)
find_package(Qt5Svg REQUIRED)
find_package(Qt5Multimedia REQUIRED)
find_package(Qt5Concurrent REQUIRED)
find_package(Qt5UiTools REQUIRED)
set(REQUIRED_LIBS ${REQUIRED_LIBS}
    Qt5::Widgets
    Qt5::Network
    Qt5::Xml
    Qt5::Svg
    Qt5::Multimedia
    Qt5::Concurrent
    Qt5::UiTools
)
if(UNIX AND NOT APPLE)
    find_package(Qt5X11Extras REQUIRED)
    find_package(Qt5DBus REQUIRED)
    set(REQUIRED_LIBS ${REQUIRED_LIBS}        
        Qt5::X11Extras
        Qt5::DBus
    )
endif(UNIX AND NOT APPLE)
if(APPLE)
    find_package(Qt5DBus REQUIRED)
    set(REQUIRED_LIBS ${REQUIRED_LIBS}        
        Qt5::DBus
    )
endif(APPLE)


#Find QuaZip
find_package(QuaZip REQUIRED)
include_directories(${QUAZIP_INCLUDE_DIR})
include_directories(${ZLIB_INCLUDE_DIRS})
set(REQUIRED_LIBS ${REQUIRED_LIBS}
  ${QUAZIP_LIBRARY}
)

#Find Python
if(PYTHON_USE_PYTHON3)
    find_package(PythonLibs 3.3 REQUIRED)
else(PYTHON_USE_PYTHON3)
    find_package(PythonLibs 2.6 REQUIRED)
endif(PYTHON_USE_PYTHON3)
include_directories(${PYTHON_INCLUDE_DIR})
set(REQUIRED_LIBS ${REQUIRED_LIBS}
    ${PYTHON_LIBRARIES}
)

#Find PythonQt
find_package(PythonQt REQUIRED)
include_directories(${PYTHONQT_INCLUDE_DIR})
set(REQUIRED_LIBS ${REQUIRED_LIBS}
    ${PYTHONQT_LIBRARY}
)
#Try to find PythonQt_QtAll. If not found, PythonQt_QtBindings will be used
find_package(PythonQt_QtAll)
if(PYTHONQT_QTALL_FOUND)
    message(STATUS "Using PythonQt_QtAll for Qt bindings.")
    include_directories(${PYTHONQT_QTALL_INCLUDE_DIR})
    set(REQUIRED_LIBS ${REQUIRED_LIBS}
        ${PYTHONQT_QTALL_LIBRARY}
    )
    add_definitions(-DPYTHONQT_QTALL_FOUND=1)
else(PYTHONQT_QTALL_FOUND)
    message(STATUS "Using PythonQt_QtBindings (old) for Qt bindings.")
endif(PYTHONQT_QTALL_FOUND)

#Platform specific libs
if(WIN32)
    set(REQUIRED_LIBS ${REQUIRED_LIBS}
        ws2_32
    )
endif(WIN32)

#Find OpenSSL (for use later)
find_package(OpenSSL)
if(OPENSSL_FOUND)
    message(STATUS "OpenSSL libraries: ${OPENSSL_LIBRARIES}")
else(OPENSSL_FOUND)
    message(WARNING "Could not find OpenSSL libs. They are not required for compiling, but needs to be available at runtime.")
endif(OPENSSL_FOUND)

#Embed QtSingleApplication and LibQxt
message(STATUS "Including QtSingleApplication and parts of LibQxt.")
include(src/3rdparty/QtSingleApplication/QtSingleApplication.cmake)
include(src/3rdparty/LibQxt/LibQxt.cmake)

qt5_add_resources( screencloud_SOURCES_RC ${screencloud_RESOURCES} )
qt5_wrap_ui( screencloud_FORMS_HEADERS ${screencloud_FORMS} )

# include headers produced by uic
include_directories( ${CMAKE_BINARY_DIR} )

add_executable( screencloud WIN32 MACOSX_BUNDLE ${screencloud_SOURCES} ${screencloud_HEADERS} ${screencloud_SOURCES_MOC} ${screencloud_SOURCES_RC} ${screencloud_FORMS_HEADERS}  )

target_link_libraries( screencloud ${REQUIRED_LIBS})

#enable warnings
if(CMAKE_COMPILER_IS_GNUCC)
    set_property( TARGET screencloud APPEND_STRING PROPERTY COMPILE_FLAGS "-Wall -Wextra")
endif ( CMAKE_COMPILER_IS_GNUCC )
if(MSVC)
    set_property( TARGET screencloud APPEND_STRING PROPERTY COMPILE_FLAGS /W3 )
endif( MSVC )

#set version of binary
set_target_properties(screencloud PROPERTIES VERSION ${VERSION_STRING})

#Copy required files to build dir
file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/modules)
add_custom_command(TARGET screencloud PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/res/modules/ScreenCloud.py ${CMAKE_CURRENT_BINARY_DIR}/modules)

if(UNIX AND NOT APPLE)
    #Use GNUInstallDirs for CMAKE_INSTALL_BINDIR etc.
    include(GNUInstallDirs)
    #Install icons
    install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/icons/screencloud.svg" DESTINATION "${CMAKE_INSTALL_DATADIR}/icons/hicolor/scalable/apps")
    install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/icons/icons_linux/16x16/screencloud.png" DESTINATION "${CMAKE_INSTALL_DATADIR}/icons/hicolor/16x16/apps")
    install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/icons/icons_linux/32x32/screencloud.png" DESTINATION "${CMAKE_INSTALL_DATADIR}/icons/hicolor/32x32/apps")
    install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/icons/icons_linux/64x64/screencloud.png" DESTINATION "${CMAKE_INSTALL_DATADIR}/icons/hicolor/64x64/apps")
    install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/icons/icons_linux/128x128/screencloud.png" DESTINATION "${CMAKE_INSTALL_DATADIR}/icons/hicolor/128x128/apps")
    install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/icons/icons_linux/256x256/screencloud.png" DESTINATION "${CMAKE_INSTALL_DATADIR}/icons/hicolor/256x256/apps")
    #Install dekstop file
    install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/net.screencloud.screencloudapp.desktop" DESTINATION "${CMAKE_INSTALL_DATADIR}/applications")
    #install copyright, changelog and metainfo
    INSTALL(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/doc/copyright" DESTINATION "${CMAKE_INSTALL_DOCDIR}" PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ)
    INSTALL(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/doc/changelog" DESTINATION "${CMAKE_INSTALL_DOCDIR}" PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ)
    INSTALL(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/metainfo/net.screencloud.screencloudapp.appdata.xml" DESTINATION "${CMAKE_INSTALL_DATADIR}/metainfo" PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ)
    #Install binaries
    install(TARGETS screencloud RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}")
    install(PROGRAMS "${CMAKE_CURRENT_SOURCE_DIR}/res/screencloud.sh" DESTINATION "${CMAKE_INSTALL_BINDIR}")
    install(PROGRAMS "${CMAKE_CURRENT_SOURCE_DIR}/res/screencloud.sh" DESTINATION "${CMAKE_INSTALL_BINDIR}" RENAME "screencloud-${VERSION_STRING}.sh")
    #install python modules
    install(DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/res/modules" DESTINATION "${CMAKE_INSTALL_DATADIR}/screencloud" FILE_PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ)
endif(UNIX AND NOT APPLE)
if(APPLE)
    set(CMAKE_INSTALL_PREFIX ${CMAKE_BINARY_DIR})
    install(TARGETS screencloud BUNDLE DESTINATION ${CMAKE_INSTALL_PREFIX})
    #install python modules
    install(DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/res/modules" DESTINATION "${CMAKE_INSTALL_PREFIX}/screencloud.app/Contents/Resources")
    #Copy required qt plugins
    get_target_property(JPEGPLUGIN_LOCATION Qt5::QJpegPlugin LOCATION)
    get_target_property(GIFPLUGIN_LOCATION Qt5::QGifPlugin LOCATION)
    get_target_property(SVGICONPLUGIN_LOCATION Qt5::QSvgIconPlugin LOCATION)
    get_target_property(COCOAPLUGIN_LOCATION Qt5::QCocoaIntegrationPlugin LOCATION)
    get_target_property(QCOREAUDIO_LOCATION Qt5::CoreAudioPlugin LOCATION)
    install(FILES ${JPEGPLUGIN_LOCATION} ${GIFPLUGIN_LOCATION} DESTINATION "${CMAKE_INSTALL_PREFIX}/screencloud.app/Contents/PlugIns/imageformats")
    install(FILES ${SVGICONPLUGIN_LOCATION} DESTINATION "${CMAKE_INSTALL_PREFIX}/screencloud.app/Contents/PlugIns/iconengines")
    install(FILES ${COCOAPLUGIN_LOCATION} DESTINATION "${CMAKE_INSTALL_PREFIX}/screencloud.app/Contents/PlugIns/platforms")
    install(FILES ${QCOREAUDIO_LOCATION} DESTINATION "${CMAKE_INSTALL_PREFIX}/screencloud.app/Contents/PlugIns/audio")
    #install qt.conf
    install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/qt.conf" DESTINATION "${CMAKE_INSTALL_PREFIX}/screencloud.app/Contents/Resources")
    #add Info.plist
    set_target_properties(screencloud PROPERTIES
        MACOSX_BUNDLE_INFO_STRING "Simple screenshot sharing application."
        MACOSX_BUNDLE_ICON_FILE "icons_mac.icns"
        MACOSX_BUNDLE_GUI_IDENTIFIER "ScreenCloud"
        MACOSX_BUNDLE_LONG_VERSION_STRING "ScreenCloud Version ${VERSION_STRING}"
        MACOSX_BUNDLE_BUNDLE_NAME "ScreenCloud"
        MACOSX_BUNDLE_SHORT_VERSION_STRING ${VERSION_STRING}
        MACOSX_BUNDLE_BUNDLE_VERSION ${VERSION_STRING}
        MACOSX_BUNDLE_COPYRIGHT "Copyright 2016, Olav Sortland Thoresen. All Rights Reserved."
        MACOSX_BUNDLE_INFO_PLIST "${CMAKE_CURRENT_SOURCE_DIR}/res/Info.plist.in"
    )
    #install icons
    install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/icons/icons_mac.icns" DESTINATION "${CMAKE_INSTALL_PREFIX}/screencloud.app/Contents/Resources")
    #Find paths to required libs
    foreach(LIB ${REQUIRED_LIBS})
        if(LIB MATCHES "Qt5::")
            get_target_property(LIB ${LIB} LOCATION_${CMAKE_BUILD_TYPE})
        endif()
        get_filename_component(LIB_DIR ${LIB} DIRECTORY)
        if(LIB_DIR MATCHES ".*framework$") #Only match paths ending in .framework
            get_filename_component(LIB_DIR ${LIB_DIR} DIRECTORY) #get parent dir
        endif()
        set(LIB_DIRS ${LIB_DIRS}
            ${LIB_DIR}
            )
    endforeach()
    #We set rpath manually later
    set(CMAKE_SKIP_RPATH ON)
    #Use fixup_bundle to copy libs
    install(CODE "
    include(BundleUtilities)
    fixup_bundle(${CMAKE_BINARY_DIR}/screencloud.app \"\" \"${LIB_DIRS}\")
    ")
    #Hack to make qt plugin loading work
    install(CODE "execute_process(COMMAND install_name_tool -add_rpath @executable_path/../Frameworks ${CMAKE_INSTALL_PREFIX}/screencloud.app/Contents/MacOS/screencloud)")
endif(APPLE)
if(WIN32)
    install(TARGETS screencloud RUNTIME DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/bin")
    install(DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/deploy/windows/" DESTINATION "${CMAKE_CURRENT_BINARY_DIR}")
    #Find dirs for the libs we're linking against
    foreach(LIB ${REQUIRED_LIBS})
        if(LIB MATCHES "Qt5::")
            get_target_property(LIB ${LIB} LOCATION_${CMAKE_BUILD_TYPE})
        endif()
        get_filename_component(LIB_DIR ${LIB} DIRECTORY)
        set(LIB_DIRS ${LIB_DIRS}
            ${LIB_DIR}
            ${LIB_DIR}/bin
            ${LIB_DIR}/../bin
            )
    endforeach()
    #Hack to make fixup_bundle work on win 10
    set(LIB_DIRS ${LIB_DIRS}
        "C:/Program Files (x86)/Windows Kits/10/Redist/ucrt/DLLs/x86"
    )
    #Hack to make sure zlib dlls are found
    set(LIB_DIRS ${LIB_DIRS}
        ${ZLIB_INCLUDE_DIRS}/bin
    )
    #Hack to make sure OpenSSL dlls are found
    if(CMAKE_GENERATOR_PLATFORM STREQUAL "x64")
        set(RUNTIME_LIBS ${RUNTIME_LIBS}
            ${OPENSSL_INCLUDE_DIR}/../bin/libcrypto-1_1-x64.dll
            ${OPENSSL_INCLUDE_DIR}/../bin/libssl-1_1-x64.dll
        )
    else()
        set(RUNTIME_LIBS ${RUNTIME_LIBS}
            ${OPENSSL_INCLUDE_DIR}/../bin/libcrypto-1_1.dll
            ${OPENSSL_INCLUDE_DIR}/../bin/libssl-1_1.dll
        )
    endif()
    install(FILES ${RUNTIME_LIBS} DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/bin")
    #Copy required qt plugins
    get_target_property(JPEGPLUGIN_LOCATION Qt5::QJpegPlugin LOCATION)
    get_target_property(GIFPLUGIN_LOCATION Qt5::QGifPlugin LOCATION)
    get_target_property(SVGICONPLUGIN_LOCATION Qt5::QSvgIconPlugin LOCATION)
    get_target_property(WINDOWSPLATFORMPLUGIN_LOCATION Qt5::QWindowsIntegrationPlugin LOCATION)
    get_target_property(WINDOWSAUDIOPLUGIN_LOCATION Qt5::QWindowsAudioPlugin LOCATION)
    get_target_property(WINDOWSVISTASTYLEPLUGIN_LOCATION Qt5::QWindowsVistaStylePlugin LOCATION)
    install(FILES ${JPEGPLUGIN_LOCATION} ${GIFPLUGIN_LOCATION} DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/bin/imageformats")
    install(FILES ${SVGICONPLUGIN_LOCATION} DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/bin/iconengines")
    install(FILES ${WINDOWSPLATFORMPLUGIN_LOCATION} DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/bin/platforms")
    install(FILES ${WINDOWSAUDIOPLUGIN_LOCATION} DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/bin/audio")
    install(FILES ${WINDOWSVISTASTYLEPLUGIN_LOCATION} DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/bin/styles")
    #Copy pythons dlls dir
    install(DIRECTORY ${PYTHON_INCLUDE_DIR}/../DLLs DESTINATION "${CMAKE_CURRENT_BINARY_DIR}")
    #Use fixup_bundle to copy dlls
    install(CODE "
    include(BundleUtilities)
    fixup_bundle(${CMAKE_BINARY_DIR}/bin/screencloud.exe \"\" \"${LIB_DIRS}\")")
    install(CODE "execute_process(COMMAND cmd ARGS /k \"cd ${CMAKE_CURRENT_BINARY_DIR} && build_installer.bat ${VERSION_STRING} windows ${CMAKE_GENERATOR_PLATFORM} \")")
endif(WIN32)

########### Add uninstall target ###############
CONFIGURE_FILE(
  "${CMAKE_CURRENT_SOURCE_DIR}/cmake/cmake_uninstall.cmake.in"
  "${CMAKE_CURRENT_BINARY_DIR}/cmake/cmake_uninstall.cmake"
  IMMEDIATE @ONLY)
ADD_CUSTOM_TARGET(uninstall
  "${CMAKE_COMMAND}" -P "${CMAKE_CURRENT_BINARY_DIR}/cmake/cmake_uninstall.cmake")
