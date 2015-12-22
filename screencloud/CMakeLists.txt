project( screencloud )
cmake_minimum_required(VERSION 2.8.11)
set(VERSION_STRING 1.3.0)


#set module path
set( CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake/modules )
#include ScreenCloud src dir and 3rdparty dir
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/3rdparty)

option(COLOR_OUTPUT "Use color ouput in terminal" ON)
option(QT_USE_QT5 "Use Qt 5.x instead of Qt 4.x" ON)
option(PYTHON_USE_PYTHON3 "Use Python 3.x instead of Python 2.x" ON)

#These are sets of API keys used by the application. Since i cant include them in the sourcecode, you'll have to use your own when you compile
set(CONSUMER_KEY_SCREENCLOUD "" CACHE STRING "Consumer key for screencloud.net")
set(CONSUMER_SECRET_SCREENCLOUD "" CACHE STRING "Consumer secret for screencloud.net")
add_definitions(-DCONSUMER_KEY_SCREENCLOUD="${CONSUMER_KEY_SCREENCLOUD}")
add_definitions(-DCONSUMER_SECRET_SCREENCLOUD="${CONSUMER_SECRET_SCREENCLOUD}")

if(NOT(CONSUMER_KEY_SCREENCLOUD OR CONSUMER_SECRET_SCREENCLOUD))
    MESSAGE(WARNING "ScreenCloud API keys not set, you won't be able to use the client with screencloud.net. (You'll still be able to compile)")
endif()

if(QT_USE_QT5)
    set(CMAKE_AUTOMOC ON)
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif(QT_USE_QT5)

set( screencloud_SOURCES
    src/dialog/downloadupdatedialog.cpp
    src/dialog/preferencesdialog.cpp
    src/dialog/licensesdialog.cpp
    src/dialog/savescreenshotdialog.cpp
    src/dialog/plugindialog.cpp
    src/dialog/logindialog.cpp
    src/dialog/changelogdialog.cpp
    src/dialog/editordialog.cpp
    src/editor/items/ellipsegraphicsitem.cpp
    src/editor/items/abstractgraphicsrectitem.cpp
    src/editor/items/handlegraphicsitem.cpp
    src/editor/items/boxgraphicsitem.cpp
    src/editor/items/numbereditem.cpp
    src/editor/items/boxtextgraphicsitem.cpp
    src/editor/items/textgraphicsitem.cpp
    src/editor/items/kaptiongraphicsitem.cpp
    src/editor/items/arrowgraphicsitem.cpp
    src/editor/kaptiongraphicstoolkit.cpp
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
    src/firstrunwizard/activatepage.cpp
    src/firstrunwizard/finishedpage.cpp
    src/firstrunwizard/firstrunwizard.cpp
    src/firstrunwizard/intropage.cpp
    src/firstrunwizard/loginpage.cpp
    src/firstrunwizard/newaccountpage.cpp
    src/firstrunwizard/shortcutspage.cpp
    src/firstrunwizard/welcomepage.cpp
    src/firstrunwizard/onlineservicespage.cpp
    src/models/uploaderslistmodel.cpp
    src/uploaders/clipboarduploader.cpp
    src/uploaders/screenclouduploader.cpp
    src/uploaders/pythonuploader.cpp
    src/uploaders/uploader.cpp
    src/hotkeyeventfilter.cpp
    src/screenshooter.cpp
    src/gui-elements/clickablelabel.cpp
    src/gui-elements/selectionoverlay.cpp
    src/gui-elements/busyoverlay.cpp
    src/systemtrayicon.cpp
    src/audionotifier.cpp
    src/uploadmanager.cpp
    src/utils/updater.cpp
    src/utils/network.cpp
    src/gui-elements/screenshotthumbview.cpp
    src/main.cpp
)
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
    )
endif()  

set( screencloud_HEADERS_MOC
    src/dialog/downloadupdatedialog.h
    src/dialog/preferencesdialog.h
    src/dialog/licensesdialog.h
    src/dialog/savescreenshotdialog.h
    src/dialog/plugindialog.h
    src/dialog/logindialog.h
    src/dialog/changelogdialog.h
    src/dialog/editordialog.h
    src/editor/items/ellipsegraphicsitem.h
    src/editor/items/abstractgraphicsrectitem.h
    src/editor/items/handlegraphicsitem.h
    src/editor/items/boxgraphicsitem.h
    src/editor/items/numbereditem.h
    src/editor/items/boxtextgraphicsitem.h
    src/editor/items/textgraphicsitem.h
    src/editor/items/kaptiongraphicsitem.h
    src/editor/items/arrowgraphicsitem.h
    src/editor/kaptiongraphicstoolkit.h
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
    src/firstrunwizard/activatepage.h
    src/firstrunwizard/finishedpage.h
    src/firstrunwizard/firstrunwizard.h
    src/firstrunwizard/intropage.h
    src/firstrunwizard/loginpage.h
    src/firstrunwizard/newaccountpage.h
    src/firstrunwizard/shortcutspage.h
    src/firstrunwizard/welcomepage.h
    src/firstrunwizard/onlineservicespage.h
    src/plugin/pluginmanager.h
    src/models/uploaderslistmodel.h
    src/uploaders/screenclouduploader.h
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
    src/utils/updater.h
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

set( screencloud_FORMS
    src/dialog/downloadupdatedialog.ui
    src/dialog/preferencesdialog.ui
    src/dialog/licensesdialog.ui
    src/dialog/savescreenshotdialog.ui
    src/dialog/plugindialog.ui
    src/dialog/logindialog.ui
    src/dialog/changelogdialog.ui
    src/dialog/editordialog.ui
)

set( screencloud_RESOURCES
        res/icons.qrc
)

if(${CMAKE_SYSTEM_NAME} MATCHES "Windows")
    set( screencloud_RESOURCES ${screencloud_RESOURCES}
            res/resources_win.qrc
    )
    # resource compilation for MinGW
    ADD_CUSTOM_COMMAND( OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/screencloud.o
                        COMMAND windres.exe -I${CMAKE_CURRENT_SOURCE_DIR} -i${CMAKE_CURRENT_SOURCE_DIR}/res/screencloud.rc 
                             -o ${CMAKE_CURRENT_BINARY_DIR}/screencloud.o )
    SET(screencloud_SOURCES ${screencloud_SOURCES} ${CMAKE_CURRENT_BINARY_DIR}/screencloud.o)

endif(${CMAKE_SYSTEM_NAME} MATCHES "Windows")
if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
    set( screencloud_RESOURCES ${screencloud_RESOURCES}
            res/resources_mac.qrc
    )
    add_subdirectory(../ScreenCloudHelper/ ScreenCloudHelper)
endif(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
if(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
    set( screencloud_RESOURCES ${screencloud_RESOURCES}
            res/resources_linux.qrc
    )
endif(${CMAKE_SYSTEM_NAME} MATCHES "Linux")

if(COLOR_OUTPUT)
    add_definitions(-DCOLOR_OUTPUT=1)
endif(COLOR_OUTPUT)

# enable warnings
add_definitions( -Wall )
#Set version string and update channel
add_definitions(-DVERSION="${VERSION_STRING}")
add_definitions(-DUPDATE_CHANNEL="windows")
add_definitions(-DGITHUB_PLUGIN_LIST_URL="https://raw.githubusercontent.com/olav-st/screencloud-plugins/master/plugin-list.xml")

if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
    set(CMAKE_EXE_LINKER_FLAGS
    "-framework Foundation -framework ServiceManagement -framework ApplicationServices"
    )
endif(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")

#required qt modules
set( QT_USE_QTNETWORK TRUE)
set( QT_USE_QTXML TRUE )
set( QT_USE_QTSVG TRUE )
find_package(QtMobility COMPONENTS MultimediaKit)
if(QT_MOBILITY_FOUND)
    message(STATUS "Using QtMobility to provide QAudioOutput.")
    include_directories(${QT_MOBILITY_MULTIMEDIAKIT_INCLUDE_DIR} ${QT_MOBILITY_INCLUDE_DIR})
    set(REQUIRED_LIBS ${REQUIRED_LIBS}
        ${QT_MOBILITY_MULTIMEDIAKIT_LIBRARY}
    )
else(QT_MOBILITY_FOUND)
    message(STATUS "Using Qt library to provide QAudioOutput.")
    set( QT_USE_QTMULTIMEDIA TRUE)
endif(QT_MOBILITY_FOUND)

#Find Qt4 or Qt5 (required)
if(QT_USE_QT5)
    find_package(Qt5Widgets REQUIRED)
    find_package(Qt5Network REQUIRED)
    find_package(Qt5Xml REQUIRED)
    find_package(Qt5Svg REQUIRED)
    find_package(Qt5Multimedia REQUIRED)
    find_package(Qt5Concurrent REQUIRED)
    if(UNIX AND NOT APPLE)
        find_package(Qt5X11Extras REQUIRED)
    endif(UNIX AND NOT APPLE)
else(QT_USE_QT5)
    find_package(Qt4 REQUIRED)
    include( ${QT_USE_FILE} )
    set(REQUIRED_LIBS ${REQUIRED_LIBS}
        ${QT_LIBRARIES}
    )
endif(QT_USE_QT5)

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
include_directories(${PYTHON_INCLUDE_DIRS})
set(REQUIRED_LIBS ${REQUIRED_LIBS}
    ${PYTHON_LIBRARIES}
)

#Include PythonQt in the build
find_package(PythonQt REQUIRED)
include_directories(${PYTHONQT_INCLUDE_DIR})
set(REQUIRED_LIBS ${REQUIRED_LIBS}
    ${PYTHONQT_LIBRARY}
)
find_package(PythonQt_QtAll REQUIRED)
include_directories(${PYTHONQT_QTALL_INCLUDE_DIR})
set(REQUIRED_LIBS ${REQUIRED_LIBS}
    ${PYTHONQT_QTALL_LIBRARY}
)

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

if(QT_USE_QT5)
    qt5_add_resources( screencloud_SOURCES_RC ${screencloud_RESOURCES} )
    qt5_wrap_ui( screencloud_FORMS_HEADERS ${screencloud_FORMS} )
elseif(QT_USE_QT5)
    qt4_add_resources( screencloud_SOURCES_RC ${screencloud_RESOURCES} )
    qt4_wrap_ui( screencloud_FORMS_HEADERS ${screencloud_FORMS} )
    qt4_wrap_cpp( screencloud_SOURCES_MOC ${screencloud_HEADERS_MOC})
endif(QT_USE_QT5)

# include headers produced by uic
include_directories( ${CMAKE_BINARY_DIR} )

add_executable( screencloud WIN32 MACOSX_BUNDLE ${screencloud_SOURCES} ${screencloud_HEADERS} ${screencloud_SOURCES_MOC} ${screencloud_SOURCES_RC} ${screencloud_FORMS_HEADERS}  )

if(QT_USE_QT5)
    qt5_use_modules(screencloud Widgets Network Xml Svg Multimedia Concurrent X11Extras)
endif(QT_USE_QT5)

target_link_libraries( screencloud ${REQUIRED_LIBS})

#Copy required files to build dir
file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/modules)
add_custom_command(TARGET screencloud PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/res/modules/ScreenCloud.py ${CMAKE_CURRENT_BINARY_DIR}/modules)
file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/sfx)
add_custom_command(TARGET screencloud PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/res/sfx/shutter.wav ${CMAKE_CURRENT_BINARY_DIR}/sfx)
add_custom_command(TARGET screencloud PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/res/sfx/notification.wav ${CMAKE_CURRENT_BINARY_DIR}/sfx)

if(UNIX AND NOT APPLE)
    #Use GNUInstallDirs for CMAKE_INSTALL_BINDIR etc.
    include(GNUInstallDirs)
    #Install icons
    install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/icons/screencloud.svg" DESTINATION "${CMAKE_INSTALL_DATADIR}/icons/hicolor/scalable/apps")
    install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/icons/icons_linux/16x16/screencloud.png" DESTINATION "${CMAKE_INSTALL_DATADIR}/icons/hicolor/16x16/apps")
    install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/icons/icons_linux/32x32/screencloud.png" DESTINATION "${CMAKE_INSTALL_DATADIR}/icons/hicolor/32x32/apps")
    install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/icons/icons_linux/64x64/screencloud.png" DESTINATION "${CMAKE_INSTALL_DATADIR}/icons/hicolor/64x64/apps")
    install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/icons/icons_linux/128x128/screencloud.png" DESTINATION "${CMAKE_INSTALL_DATADIR}/icons/hicolor/128x128/apps")
    #Install dekstop file
    install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/screencloud.desktop" DESTINATION "${CMAKE_INSTALL_DATADIR}/applications")
    #install copyright and changelog
    INSTALL(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/doc/copyright" DESTINATION "${CMAKE_INSTALL_DOCDIR}/screencloud" PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ)
    INSTALL(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/doc/changelog.gz" DESTINATION "${CMAKE_INSTALL_DOCDIR}/screencloud" PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ)
    #Install binaries
    install(TARGETS screencloud RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}")
    install(PROGRAMS "${CMAKE_CURRENT_SOURCE_DIR}/res/screencloud.sh" DESTINATION "${CMAKE_INSTALL_BINDIR}")
    #install python modules
    install(DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/res/modules" DESTINATION "${CMAKE_INSTALL_DATADIR}/screencloud" FILE_PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ)
    #Install sfx
    install(DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/res/sfx" DESTINATION "${CMAKE_INSTALL_DATADIR}/screencloud" FILE_PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ)
endif(UNIX AND NOT APPLE)
if(APPLE)
    set(CMAKE_INSTALL_PREFIX ${CMAKE_BINARY_DIR})
    install(TARGETS screencloud BUNDLE DESTINATION ${CMAKE_BINARY_DIR})
    #install libraries
    install(FILES "${CMAKE_CURRENT_BINARY_DIR}/PythonQt/libPythonQt.dylib" DESTINATION "${CMAKE_INSTALL_PREFIX}/screencloud.app/Contents/MacOS")
    #install python modules
    install(DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/res/modules" DESTINATION "${CMAKE_INSTALL_PREFIX}/screencloud.app/Contents/Resources")
    #Install sfx
    install(DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/res/sfx" DESTINATION "${CMAKE_INSTALL_PREFIX}/screencloud.app/Contents/Resources")
    #Install Qt plugins
    install(DIRECTORY "${QT_PLUGINS_DIR}/imageformats" DESTINATION "${CMAKE_INSTALL_PREFIX}/screencloud.app/Contents/PlugIns")
    install(DIRECTORY "${QT_PLUGINS_DIR}/iconengines" DESTINATION "${CMAKE_INSTALL_PREFIX}/screencloud.app/Contents/PlugIns")
    #install qt.conf
    install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/qt.conf" DESTINATION "${CMAKE_INSTALL_PREFIX}/screencloud.app/Contents/Resources")
    #use custom Info.plist
    set_target_properties(screencloud PROPERTIES MACOSX_BUNDLE_INFO_PLIST "${CMAKE_CURRENT_SOURCE_DIR}/res/Info.plist")
    #install icons
    install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/icons/icons_mac.icns" DESTINATION "${CMAKE_INSTALL_PREFIX}/screencloud.app/Contents/Resources")
    install(CODE "
    include(BundleUtilities)
    fixup_bundle(${CMAKE_BINARY_DIR}/screencloud.app \"\" \"\")
    ")
endif(APPLE)
if(WIN32)
    install(DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/../deploy/windows/" DESTINATION "${CMAKE_CURRENT_BINARY_DIR}")
    install(FILES "${CMAKE_CURRENT_BINARY_DIR}/screencloud.exe" DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/bin")
    #get the required qt plugins
    install(DIRECTORY "${QT_PLUGINS_DIR}/imageformats" DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/bin")
    install(DIRECTORY "${QT_PLUGINS_DIR}/iconengines" DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/bin")
    file(GLOB_RECURSE QT_PLUGINS_IMAGEFORMATS "${CMAKE_CURRENT_BINARY_DIR}/bin/imageformats/*${CMAKE_SHARED_LIBRARY_SUFFIX}")
    file(GLOB_RECURSE QT_PLUGINS_ICONENGINES "${CMAKE_CURRENT_BINARY_DIR}/bin/iconengines/*${CMAKE_SHARED_LIBRARY_SUFFIX}")
    #copy libeay32 and ssleay32
    install(FILES ${OPENSSL_LIBRARIES} DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/bin")
    #copy other dependencies with fixup_bundle
    install(CODE "
    include(BundleUtilities)
    fixup_bundle(${CMAKE_BINARY_DIR}/bin/screencloud.exe \"${QT_PLUGINS_IMAGEFORMATS} ${QT_PLUGINS_ICONENGINES}\" \"\")")
    install(CODE "execute_process(COMMAND cmd ARGS /k \"cd ${CMAKE_CURRENT_BINARY_DIR} && build_installer.bat \")")
endif(WIN32)
