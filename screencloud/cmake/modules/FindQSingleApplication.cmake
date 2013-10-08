# - Try to find the QSINGLEAPPLICATION library
# Once done this will define
#
#  QSINGLEAPPLICATION_FOUND - system has the QSINGLEAPPLICATION library
#  QSINGLEAPPLICATION_INCLUDE_DIR - the QSINGLEAPPLICATION include directory
#  QSINGLEAPPLICATION_LIBRARY - Link this to use the QSINGLEAPPLICATION 
#  QSINGLEAPPLICATION_DEFINITIONS - Compiler switches required for using QSingleApplication

if (QSINGLEAPPLICATION_INCLUDE_DIR AND QSINGLEAPPLICATION_LIBRARY)
  # in cache already
  set(QSINGLEAPPLICATION_FOUND TRUE)
else (QSINGLEAPPLICATION_INCLUDE_DIR AND QSINGLEAPPLICATION_LIBRARY)
  if (NOT WIN32)
    find_package(PkgConfig)
    pkg_check_modules(PC_QSINGLEAPPLICATION QUIET qtsingleapplication)
    set(QSINGLEAPPLICATION_DEFINITIONS ${PC_QSINGLEAPPLICATION_CFLAGS_OTHER})
  endif(NOT WIN32)

  set(PC_QSINGLEAPPLICATION_LIBRARY_DIRS ${PC_QSINGLEAPPLICATION_LIBRARY_DIRS}
    /usr/lib/qtsingleapplication
    /usr/lib/QtSolutions
    /usr/lib/
    /usr/lib/x86_64-linux-gnu/qtsingleapplication
    /usr/lib/x86_64-linux-gnu/
    /usr/lib/i386-linux-gnu/
    /usr/lib64/QtSolutions
    /usr/lib64/qt4
    /usr/lib64
    /usr/local/lib/qtsingleapplication
    /usr/local/lib
    /opt/local/lib/qtsingleapplication
    /opt/local/lib/
  )
  set(PC_QSINGLEAPPLICATION_INCLUDE_DIRS ${PC_QSINGLEAPPLICATION_INCLUDE_DIRS}
    qt-solutions/qtsingleapplication/src
    qtsingleapplication/src
    build/qt-solutions/qtsingleapplication/src
    build/qtsingleapplication
    /usr/local/include/qtsingleapplication
    /usr/local/include
    /usr/include/qtsingleapplication
    /usr/include
    /opt/local/include/qtsingleapplication
    /opt/local/include
  )

  find_library(QSINGLEAPPLICATION_LIBRARY NAMES QtSolutions_SingleApplication-head QtSolutions_SingleApplication QtSolutions_SingleApplication-2.6 qtsingleapplication QtSingleApplication
    HINTS ${PC_QSINGLEAPPLICATION_LIBRARY_DIR} ${PC_QSINGLEAPPLICATION_LIBRARY_DIRS}
    PATH_SUFFIXES lib64/ lib/ qtsingleapplication/lib64 qtsingleapplication/lib QtSolutions/ qt-solutions/qtsingleapplication/lib64 qt-solutions/qtsingleapplication/lib
    PATHS
    ${CMAKE_CURRENT_BINARY_DIR}/qt-solutions/
    ${CMAKE_CURRENT_BINARY_DIR}/qtsingleapplication/
    ${CMAKE_CURRENT_BINARY_DIR}/lib/
    ${CMAKE_CURRENT_BINARY_DIR}../qt-solutions/
    ${CMAKE_CURRENT_BINARY_DIR}../qtsingleapplication/
    ${CMAKE_SOURCE_DIR}/qt-solutions/
    ${CMAKE_SOURCE_DIR}/qtsingleapplication/
    ${CMAKE_SOURCE_DIR}/../qt-solutions/
    ${CMAKE_SOURCE_DIR}/../qtsingleapplication/
    /usr/lib/qtsingleapplication
    /usr/lib/
    /usr/lib64/QtSolutions/
    /usr/lib64/
    /usr/lib/x86_64-linux-gnu/qtsingleapplication
    /usr/lib/x86_64-linux-gnu/
    /usr/lib/i386-linux-gnu/
    /usr/local/lib/qtsingleapplication
    /usr/local/lib
    /opt/local/lib/qtsingleapplication
    /opt/local/lib/
    NO_DEFAULT_PATH
  )
  find_path(QSINGLEAPPLICATION_INCLUDE_DIR qtsingleapplication.h
    HINTS ${PC_QSINGLEAPPLICATION_INCLUDEDIR} ${PC_QSINGLEAPPLICATION_INCLUDE_DIRS}
    PATH_SUFFIXES src/ qtsingleapplication/src qt-solutions/qtsingleapplication/src QtSolutions/
    PATHS
    ${CMAKE_CURRENT_BINARY_DIR}/qt-solutions/
    ${CMAKE_CURRENT_BINARY_DIR}/qtsingleapplication/
    ${CMAKE_CURRENT_BINARY_DIR}/lib/
    ${CMAKE_CURRENT_BINARY_DIR}../qt-solutions/
    ${CMAKE_CURRENT_BINARY_DIR}../qtsingleapplication/
    ${CMAKE_SOURCE_DIR}/qt-solutions/
    ${CMAKE_SOURCE_DIR}/qtsingleapplication/
    ${CMAKE_SOURCE_DIR}/../qt-solutions/
    ${CMAKE_SOURCE_DIR}/../qtsingleapplication/
    /usr/local/include/qtsingleapplication
    /usr/local/include
    /usr/include/qtsingleapplication
    /usr/include
    /opt/local/include/qtsingleapplication
    /opt/local/include
    NO_DEFAULT_PATH
  )

  include(FindPackageHandleStandardArgs)
  find_package_handle_standard_args(QSingleApplication DEFAULT_MSG QSINGLEAPPLICATION_LIBRARY QSINGLEAPPLICATION_INCLUDE_DIR)

  mark_as_advanced(QSINGLEAPPLICATION_INCLUDE_DIR QSINGLEAPPLICATION_LIBRARY)
endif (QSINGLEAPPLICATION_INCLUDE_DIR AND QSINGLEAPPLICATION_LIBRARY)
