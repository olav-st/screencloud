# - Try to find the QTLUA library
# Once done this will define
#
#  QTLUA_FOUND - system has the QTLUA library
#  QTLUA_INCLUDE_DIR - the QTLUA include directory
#  QTLUA_LIBRARY - Link this to use the QTLUA 
#  QTLUA_DEFINITIONS - Compiler switches required for using QtLua

if (QTLUA_INCLUDE_DIR AND QTLUA_LIBRARY)
  # in cache already
  set(QTLUA_FOUND TRUE)
else (QTLUA_INCLUDE_DIR AND QTLUA_LIBRARY)
  if (NOT WIN32)
    find_package(PkgConfig)
    pkg_check_modules(PC_QTLUA QUIET libqtlua)
    set(QTLUA_DEFINITIONS ${PC_QTLUA_CFLAGS_OTHER})
  endif(NOT WIN32)

  set(PC_QTLUA_LIBRARY_DIRS ${PC_QTLUA_LIBRARY_DIRS}
    /usr/lib/libqtlua
    /usr/lib/qtlua
    /usr/lib/
    /usr/lib/x86_64-linux-gnu/libqtlua
    /usr/lib/x86_64-linux-gnu/
    /usr/lib/i386-linux-gnu/
    /usr/lib64/qtlua
    /usr/lib64/qt5
    /usr/lib64
    /usr/local/lib/libqtlua
    /usr/local/lib
    /opt/local/lib/libqtlua
    /opt/local/lib/
  )
  set(PC_QTLUA_INCLUDE_DIRS ${PC_QTLUA_INCLUDE_DIRS}
    QtLua/libqtlua/src
    libqtlua/src
    build/QtLua/libqtlua/src
    build/libqtlua
    /usr/local/include/libqtlua
    /usr/local/include
    /usr/include/libqtlua
    /usr/include
    /opt/local/include/libqtlua
    /opt/local/include
  )

  find_library(QTLUA_LIBRARY NAMES libqtlua qtlua QtLua libQtLua libQtLua-2.0 libqtlua-2.0
    HINTS ${PC_QTLUA_LIBRARY_DIR} ${PC_QTLUA_LIBRARY_DIRS}
    PATH_SUFFIXES lib64/ lib/ libqtlua/lib64 libqtlua/lib qtlua/ QtLua/libqtlua/lib64 QtLua/libqtlua/lib
    PATHS
    ${CMAKE_CURRENT_BINARY_DIR}/QtLua/
    ${CMAKE_CURRENT_BINARY_DIR}/libqtlua/
    ${CMAKE_CURRENT_BINARY_DIR}/lib/
    ${CMAKE_CURRENT_BINARY_DIR}../QtLua/
    ${CMAKE_CURRENT_BINARY_DIR}../libqtlua/
    ${CMAKE_SOURCE_DIR}/QtLua/
    ${CMAKE_SOURCE_DIR}/libqtlua/
    ${CMAKE_SOURCE_DIR}/../QtLua/
    ${CMAKE_SOURCE_DIR}/../libqtlua/
    /usr/lib/libqtlua
    /usr/lib/
    /usr/lib64/qtlua/
    /usr/lib64/
    /usr/lib/x86_64-linux-gnu/libqtlua
    /usr/lib/x86_64-linux-gnu/
    /usr/lib/i386-linux-gnu/
    /usr/local/lib/libqtlua
    /usr/local/lib
    /opt/local/lib/libqtlua
    /opt/local/lib/
    NO_DEFAULT_PATH
  )
  find_path(QTLUA_INCLUDE_DIR qtluavalue.hxx
    HINTS ${PC_QTLUA_INCLUDEDIR} ${PC_QTLUA_INCLUDE_DIRS}
    PATH_SUFFIXES QtLua/ libqtlua/ qtlua/
    PATHS
    ${CMAKE_CURRENT_BINARY_DIR}/QtLua/
    ${CMAKE_CURRENT_BINARY_DIR}/libqtlua/
    ${CMAKE_CURRENT_BINARY_DIR}/lib/
    ${CMAKE_CURRENT_BINARY_DIR}../QtLua/
    ${CMAKE_CURRENT_BINARY_DIR}../libqtlua/
    ${CMAKE_SOURCE_DIR}/QtLua/
    ${CMAKE_SOURCE_DIR}/libqtlua/
    ${CMAKE_SOURCE_DIR}/../QtLua/
    ${CMAKE_SOURCE_DIR}/../libqtlua/
    /usr/local/include/libqtlua
    /usr/local/include
    /usr/include/libqtlua
    /usr/include
    /opt/local/include/libqtlua
    /opt/local/include
    NO_DEFAULT_PATH
  )

  include(FindPackageHandleStandardArgs)
  find_package_handle_standard_args(QtLua DEFAULT_MSG QTLUA_LIBRARY QTLUA_INCLUDE_DIR)

  mark_as_advanced(QTLUA_INCLUDE_DIR QTLUA_LIBRARY)
endif (QTLUA_INCLUDE_DIR AND QTLUA_LIBRARY)
