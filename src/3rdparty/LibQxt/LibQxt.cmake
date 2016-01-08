# Files that make up LibQxt

set(screencloud_SOURCES ${screencloud_SOURCES}
    src/3rdparty/LibQxt/qxtglobalshortcut.cpp
    src/3rdparty/LibQxt/qxtwindowsystem.cpp
)

set(screencloud_HEADERS_MOC ${screencloud_HEADERS_MOC}
	src/3rdparty/LibQxt/qxtglobal.h
    src/3rdparty/LibQxt/qxtglobalshortcut.h
    src/3rdparty/LibQxt/qxtglobalshortcut_p.h
    src/3rdparty/LibQxt/qxtwindowsystem.h
)

if(WIN32)
    set(screencloud_SOURCES ${screencloud_SOURCES}
    src/3rdparty/LibQxt/win/qxtwindowsystem_win.cpp
    src/3rdparty/LibQxt/win/qxtglobalshortcut_win.cpp
    )
elseif(APPLE)
    set(screencloud_SOURCES ${screencloud_SOURCES}
    src/3rdparty/LibQxt/mac/qxtwindowsystem_mac.cpp
    src/3rdparty/LibQxt/mac/qxtglobalshortcut_mac.cpp
    )
else()
    set(screencloud_SOURCES ${screencloud_SOURCES}
    src/3rdparty/LibQxt/x11/qxtwindowsystem_x11.cpp
    src/3rdparty/LibQxt/x11/qxtglobalshortcut_x11.cpp
    )
endif() 

# Include directory
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/3rdparty/LibQxt)

#Required libs
if(UNIX AND NOT APPLE)
    find_package(X11 REQUIRED)
    include_directories(${X11_INCLUDE_DIR})
    set(REQUIRED_LIBS ${REQUIRED_LIBS}
      ${X11_LIBRARIES}
    )
endif(UNIX AND NOT APPLE)

#We need access to the private gui api when using qt5
if(QT_USE_QT5)
	include_directories(${Qt5Gui_PRIVATE_INCLUDE_DIRS})
endif(QT_USE_QT5)

#Fixes some dllimport errors on windows
add_definitions(-DQXT_STATIC=1)
