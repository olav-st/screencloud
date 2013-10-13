project( screencloud )
set(VERSION_STRING 1.1.2)
cmake_minimum_required (VERSION 2.6)

#set module path
set( CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake/modules )
#include ScreenCloud src dir and 3rdparty dir
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/3rdparty)

option(WITH_PLUGIN_SUPPORT "Enable plugin support" ON)
option(MAC_APP_STORE "Disables automatic update checking for app store" OFF)
option(BUILD_DEB "Build deb package" OFF)
option(BUILD_RPM "Build rpm package" OFF)
option(UBUNTU_SOFTWARE_CENTER "Turn off automatic updating for software centre" OFF)

#Use a set of random key/IV for encryption of FTP/SFTP passwords
set(ENCRYPTION_KEY "" CACHE STRING "Random string used for encrypting FTP/SFTP passwords")
set(ENCRYPTION_IV "" CACHE STRING "Random string used for encrypting FTP/SFTP passwords")
if(NOT(ENCRYPTION_KEY OR ENCRYPTION_IV))
    #Generate a set of random keys
    string(RANDOM ENCRYPTION_KEY)
    string(RANDOM ENCRYPTION_IV)
    message(STATUS "Generated random encryption keys. (key = ${ENCRYPTION_KEY}, iv = ${ENCRYPTION_IV})")
endif()
add_definitions(-DENC_KEY="${ENCRYPTION_KEY}")
add_definitions(-DENC_INIT_VECTOR="${ENCRYPTION_IV}")

#These are sets of API keys used by the application. Since i cant include them in the sourcecode, you'll have to use your own when you compile
set(CONSUMER_KEY_SCREENCLOUD "" CACHE STRING "Consumer key for screencloud.net")
set(CONSUMER_SECRET_SCREENCLOUD "" CACHE STRING "Consumer secret for screencloud.net")
set(API_KEY_IMGUR "" CACHE STRING "API key for imgur")
set(CONSUMER_KEY_IMGUR "" CACHE STRING "Consumer key for imgur (authenticated)")
set(CONSUMER_SECRET_IMGUR "" CACHE STRING "Consumer secret for imgur (authenticated)")
set(CONSUMER_KEY_DROPBOX "" CACHE STRING "Consumer key for dropbox")
set(CONSUMER_SECRET_DROPBOX "" CACHE STRING "Consumer key for dropbox")
add_definitions(-DCONSUMER_KEY_SCREENCLOUD="${CONSUMER_KEY_SCREENCLOUD}")
add_definitions(-DCONSUMER_SECRET_SCREENCLOUD="${CONSUMER_SECRET_SCREENCLOUD}")
add_definitions(-DAPI_KEY_IMGUR="${API_KEY_IMGUR}")
add_definitions(-DCONSUMER_KEY_IMGUR="${CONSUMER_KEY_IMGUR}")
add_definitions(-DCONSUMER_SECRET_IMGUR="${CONSUMER_SECRET_IMGUR}")
add_definitions(-DCONSUMER_KEY_DROPBOX="${CONSUMER_KEY_DROPBOX}")
add_definitions(-DCONSUMER_SECRET_DROPBOX="${CONSUMER_SECRET_DROPBOX}")

if(NOT(CONSUMER_KEY_SCREENCLOUD OR CONSUMER_SECRET_SCREENCLOUD))
    MESSAGE(WARNING "ScreenCloud API keys not set, you won't be able to use the client with screencloud.net. (You'll still be able to compile)")
endif()

if(NOT(API_KEY_IMGUR OR CONSUMER_KEY_IMGUR OR CONSUMER_SECRET_IMGUR OR CONSUMER_KEY_DROPBOX OR CONSUMER_SECRET_DROPBOX))
    MESSAGE(WARNING "Some API keys are not set. You probably won't be able to use all plugins. (You'll still be able to compile)")
endif()


set( screencloud_SOURCES
    src/3rdparty/PJSSH.cpp
    src/audionotifier.cpp
    src/clickablelabel.cpp
    src/datetimedialog.cpp
    src/delegates/pushbuttondelegate.cpp
    src/downloadupdatedialog.cpp
    src/firstrunwizard/activatepage.cpp
    src/firstrunwizard/finishedpage.cpp
    src/firstrunwizard/firstrunwizard.cpp
    src/firstrunwizard/intropage.cpp
    src/firstrunwizard/loginpage.cpp
    src/firstrunwizard/newaccountpage.cpp
    src/firstrunwizard/shortcutspage.cpp
    src/firstrunwizard/tutorialpage1.cpp
    src/hotkeyeventfilter.cpp
    src/logindialog.cpp
    src/licensesdialog.cpp
    src/models/activeuploaderslistmodel.cpp
    src/models/availableuploaderslistmodel.cpp
    src/overlayitem.cpp
    src/preferencesdialog.cpp
    src/savescreenshotdialog.cpp
    src/screenshooter.cpp
    src/selectionoverlay.cpp
    src/systemtrayicon.cpp
    src/screenshotthumbview.cpp
    src/transparentrubberband.cpp
    src/uploaders/uploader.cpp
    src/utils/security.cpp
    src/utils/updater.cpp
    src/main.cpp
)
if(APPLE)
    set(screencloud_SOURCES ${screencloud_SOURCES}
    src/utils/startup_mac.mm
    )
else()
    set(screencloud_SOURCES ${screencloud_SOURCES}
    src/utils/startup.cpp
    )
endif()  

set( screencloud_HEADERS_MOC
    src/clickablelabel.h
    src/datetimedialog.h
    src/delegates/pushbuttondelegate.h
    src/downloadupdatedialog.h
    src/firstrunwizard/activatepage.h
    src/firstrunwizard/finishedpage.h 
    src/firstrunwizard/firstrunwizard.h
    src/firstrunwizard/intropage.h
    src/firstrunwizard/loginpage.h
    src/firstrunwizard/newaccountpage.h
    src/firstrunwizard/shortcutspage.h
    src/firstrunwizard/tutorialpage1.h
    src/hotkeyeventfilter.h 
    src/logindialog.h
    src/licensesdialog.h
    src/models/activeuploaderslistmodel.h
    src/models/availableuploaderslistmodel.h
    src/overlayitem.h
    src/savescreenshotdialog.h
    src/screenshooter.h
    src/selectionoverlay.h
    src/systemtrayicon.h
    src/screenshotthumbview.h
    src/transparentrubberband.h
    src/uploaders/uploader.h
    src/utils/updater.h
    src/preferencesdialog.h   
)

set(screencloud_HEADERS
    src/utils/OS.h
    src/utils/arch.h
)

set( screencloud_FORMS
    src/datetimedialog.ui
    src/downloadupdatedialog.ui
    src/logindialog.ui
    src/licensesdialog.ui
    src/savescreenshotdialog.ui
    src/preferencesdialog.ui
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
    set(screencloud_HEADERS_MOC ${screencloud_HEADERS_MOC}
        src/uploaders/clipboarduploader.h
    )
    set(screencloud_SOURCES ${screencloud_SOURCES}
        src/uploaders/clipboarduploader.cpp
    )
endif(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
if(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
    set( screencloud_RESOURCES ${screencloud_RESOURCES}
            res/resources_linux.qrc
    )
endif(${CMAKE_SYSTEM_NAME} MATCHES "Linux")

if(WITH_PLUGIN_SUPPORT)
    add_definitions(-DPLUGIN_SUPPORT=1)
    set(screencloud_SOURCES ${screencloud_SOURCES}
        src/plugin/plugininstaller.cpp
        src/plugin/pluginloader.cpp
        src/plugindialog.cpp
        src/models/pluginslistmodel.cpp
        src/uploaders/scripteduploader.cpp
    )
    set( screencloud_HEADERS_MOC ${screencloud_HEADERS_MOC}
        src/models/pluginslistmodel.h
        src/plugin/plugininstaller.h 
        src/plugin/pluginloader.h
        src/plugindialog.h
        src/uploaders/scripteduploader.h
    )
    set(screencloud_FORMS ${screencloud_FORMS} 
        src/plugindialog.ui
    )
endif(WITH_PLUGIN_SUPPORT)
if(MAC_APP_STORE)
    add_definitions(-DMAC_APPSTORE=1)
endif(MAC_APP_STORE)

if(UBUNTU_SOFTWARE_CENTER)
    add_definitions(-DUBUNTU_SOFTWARE_CENTER=1)
endif(UBUNTU_SOFTWARE_CENTER)

# enable warnings
add_definitions( -Wall )
#Set version string and update channel
add_definitions(-DVERSION="${VERSION_STRING}")
add_definitions(-DUPDATE_CHANNEL="windows")

set( QT_USE_QTNETWORK TRUE) 
set( QT_USE_QTXML TRUE )
set( QT_USE_QTUITOOLS TRUE)
if(WITH_PLUGIN_SUPPORT)
    set( QT_USE_QTSCRIPT TRUE)
endif(WITH_PLUGIN_SUPPORT)

if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
    set(CMAKE_EXE_LINKER_FLAGS
    "-framework Foundation -framework ServiceManagement"
    )
endif(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")

#Find Qt4 (absolutely required, good luck compiling without it...)
find_package(Qt4 REQUIRED)
include( ${QT_USE_FILE} )
set(REQUIRED_LIBS ${REQUIRED_LIBS}
    ${QT_LIBRARIES}
)

find_package(Qxt REQUIRED)
SET(QXT_USE_QXTCORE TRUE)
SET(QXT_USE_QXTGUI TRUE)
include_directories(${QXT_QXTCORE_INCLUDE_DIR})
include_directories(${QXT_QXTGUI_INCLUDE_DIR})
set(REQUIRED_LIBS ${REQUIRED_LIBS}
    ${QXT_QXTCORE_LIB_RELEASE}
    ${QXT_QXTGUI_LIB_RELEASE}
)

find_package(QSingleApplication REQUIRED)
if(QSINGLEAPPLICATION_FOUND)
    include_directories(${QSINGLEAPPLICATION_INCLUDE_DIR})
    include_directories(${QSINGLEAPPLICATION_INCLUDE_DIR})
    add_definitions(${QSINGLEAPPLICATION_DEFINITIONS})
    set(REQUIRED_LIBS ${REQUIRED_LIBS}
        ${QSINGLEAPPLICATION_LIBRARY}
    )
endif(QSINGLEAPPLICATION_FOUND)

find_package(QCA2 REQUIRED)
if(QCA2_FOUND)
    include_directories(${QCA2_INCLUDE_DIR})
    add_definitions(${QCA2_DEFINITIONS})
    set(REQUIRED_LIBS ${REQUIRED_LIBS}
        ${QCA2_LIBRARIES}
    )
endif(QCA2_FOUND)

find_package(QtOAuth REQUIRED)
if(QTOAUTH_FOUND)
    include_directories(${QTOAUTH_INCLUDE_DIR})
    include_directories(${QTOAUTH_INCLUDE_DIR}/QtOAuth)
    add_definitions(${QTOAUTH_DEFINITIONS})
    set(REQUIRED_LIBS ${REQUIRED_LIBS}
        ${QTOAUTH_LIBRARY}
    )
endif(QTOAUTH_FOUND)

find_package(SDL REQUIRED)
if(SDL_FOUND)
    include_directories(${SDL_INCLUDE_DIR})
    set(REQUIRED_LIBS ${REQUIRED_LIBS}
        ${SDL_LIBRARY}
    )
endif(SDL_FOUND)

find_package(SDL_mixer REQUIRED)
if(SDLMIXER_FOUND)
    include_directories(${SDLMIXER_INCLUDE_DIR})
    set(REQUIRED_LIBS ${REQUIRED_LIBS}
        ${SDLMIXER_LIBRARY}
    )
endif(SDLMIXER_FOUND)

find_package(LibSSH2 REQUIRED)
if(LIBSSH2_FOUND)
    include_directories(${LIBSSH2_INCLUDE_DIR})
    set(REQUIRED_LIBS ${REQUIRED_LIBS}
        ${LIBSSH2_LIBRARY}
    )
endif(LIBSSH2_FOUND)

if(WITH_PLUGIN_SUPPORT)
    find_package(QuaZip REQUIRED)
    include_directories(${QUAZIP_INCLUDE_DIR})
    set(OPTIONAL_LIBS ${OPTIONAL_LIBS}
        ${QUAZIP_LIBRARY}
        )
endif(WITH_PLUGIN_SUPPORT)

if(WIN32)
    set(OPTIONAL_LIBS ${OPTIONAL_LIBS}
        ws2_32
    )
endif(WIN32)


qt4_add_resources( screencloud_SOURCES_RC ${screencloud_RESOURCES} )
qt4_wrap_ui( screencloud_FORMS_HEADERS ${screencloud_FORMS} )
qt4_wrap_cpp( screencloud_SOURCES_MOC ${screencloud_HEADERS_MOC} )

# include headers produced by uic
include_directories( ${CMAKE_BINARY_DIR} )

if(WIN32)
    add_executable( screencloud WIN32 ${screencloud_SOURCES} ${screencloud_HEADERS} ${screencloud_SOURCES_MOC} ${screencloud_SOURCES_RC} ${screencloud_FORMS_HEADERS} )
else(WIN32)
    add_executable( screencloud ${screencloud_SOURCES} ${screencloud_HEADERS} ${screencloud_SOURCES_MOC} ${screencloud_SOURCES_RC} ${screencloud_FORMS_HEADERS} )
endif(WIN32) 

target_link_libraries( screencloud ${REQUIRED_LIBS} ${OPTIONAL_LIBS})

if(UNIX)
    find_program(ARCH_PROGRAM arch DOC "command to get system arch")
    set(CMAKE_INSTALL_PREFIX "/opt")
    #Install icons and desktop file
    install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/screencloud.desktop" DESTINATION "${CMAKE_INSTALL_PREFIX}/../usr/share/applications/" PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ)
    install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/images/icons/screencloud.svg" DESTINATION "${CMAKE_INSTALL_PREFIX}/../usr/share/icons/hicolor/scalable/apps" PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ)
    install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/images/icons/icons_linux/16x16/screencloud.png" DESTINATION "${CMAKE_INSTALL_PREFIX}/../usr/share/icons/hicolor/16x16/apps" PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ)
    install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/images/icons/icons_linux/32x32/screencloud.png" DESTINATION "${CMAKE_INSTALL_PREFIX}/../usr/share/icons/hicolor/32x32/apps" PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ)
    install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/images/icons/icons_linux/64x64/screencloud.png" DESTINATION "${CMAKE_INSTALL_PREFIX}/../usr/share/icons/hicolor/64x64/apps" PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ)
    install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/images/icons/icons_linux/128x128/screencloud.png" DESTINATION "${CMAKE_INSTALL_PREFIX}/../usr/share/icons/hicolor/128x128/apps" PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ)
    #install copyright and changelog
    INSTALL(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/doc/copyright" DESTINATION "${CMAKE_INSTALL_PREFIX}/../usr/share/doc/screencloud" PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ)
    INSTALL(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/doc/changelog.gz" DESTINATION "${CMAKE_INSTALL_PREFIX}/../usr/share/doc/screencloud" PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ)
    #INSTALL(FILES "${CMAKE_CURRENT_SOURCE_DIR}/res/doc/changelog.Debian.gz" DESTINATION "${CMAKE_INSTALL_PREFIX}/../usr/share/doc/screencloud" PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ)
    #Install binaries
    install(TARGETS screencloud RUNTIME DESTINATION "${CMAKE_INSTALL_PREFIX}/screencloud")
    install(PROGRAMS "${CMAKE_CURRENT_SOURCE_DIR}/res/screencloud.sh" DESTINATION "${CMAKE_INSTALL_PREFIX}/screencloud")
    #install libraries
    get_filename_component(QSINGLEAPPLICATION_LIBRARY_PATH ${QSINGLEAPPLICATION_LIBRARY} PATH)
    FILE(GLOB QSINGLEAPPLICATION_LIBRARY_WITH_SYMLINKS ${QSINGLEAPPLICATION_LIBRARY_PATH}/libQtSolutions_SingleApplication-head.so*)
    set(BUNDLED_LIBS ${BUNDLED_LIBS} ${QSINGLEAPPLICATION_LIBRARY_WITH_SYMLINKS})
    #get_filename_component(QXT_QXTCORE_LIB_RELEASE_PATH ${QXT_QXTCORE_LIB_RELEASE} PATH)
    #FILE(GLOB QXT_QXTCORE_LIB_WITH_SYMLINKS ${QXT_QXTCORE_LIB_RELEASE_PATH}/libQxtCore.so*)
    #set(BUNDLED_LIBS ${BUNDLED_LIBS} ${QXT_QXTCORE_LIB_WITH_SYMLINKS})
    #get_filename_component(QXT_QXTGUI_LIB_RELEASE_PATH ${QXT_QXTGUI_LIB_RELEASE} PATH)
    #FILE(GLOB QXT_QXTGUI_LIB_WITH_SYMLINKS ${QXT_QXTGUI_LIB_RELEASE_PATH}/libQxtGui.so*)
    #set(BUNDLED_LIBS ${BUNDLED_LIBS} ${QXT_QXTGUI_LIB_WITH_SYMLINKS})
    #get_filename_component(QUAZIP_LIBRARY_PATH ${QUAZIP_LIBRARY} PATH)
    #FILE(GLOB QUAZIP_LIBRARY_WITH_SYMLINKS ${QUAZIP_LIBRARY_PATH}/libquazip.so*)
    #set(BUNDLED_LIBS ${BUNDLED_LIBS} ${QUAZIP_LIBRARY_WITH_SYMLINKS})
    
    #install(FILES ${BUNDLED_LIBS} DESTINATION "${CMAKE_INSTALL_PREFIX}/screencloud" PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ)
    
    #Install sfx
    install(DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/res/sfx" DESTINATION "${CMAKE_INSTALL_PREFIX}/screencloud" FILE_PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ)
endif(UNIX)
