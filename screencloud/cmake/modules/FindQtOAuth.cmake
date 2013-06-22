# - Try to find the QtOAuth library
# Once done this will define
#
#  QTOAUTH_FOUND - system has the QtOAuth library
#  QTOAUTH_INCLUDE_DIR - the QtOAuth include directory
#  QTOAUTH_LIBRARY - Link this to use the QtOAuth 
#  QTOAUTH_DEFINITIONS - Compiler switches required for using QOAuth
#
# Copyright © 2010, Mehrdad Momeny <mehrdad.momeny@gmail.com>
# Copyright © 2010, Harald Sitter <apachelogger@ubuntu.com>
#
# Redistribution and use is allowed according to the terms of the BSD license.
# For details see the accompanying COPYING-CMAKE-SCRIPTS file.

if (QTOAUTH_INCLUDE_DIR AND QTOAUTH_LIBRARY)
  # in cache already
  set(QTOAUTH_FOUND TRUE)
else (QTOAUTH_INCLUDE_DIR AND QTOAUTH_LIBRARY)
  if (NOT WIN32)
    find_package(PkgConfig)
    pkg_check_modules(PC_QTOAUTH QUIET qoauth)
    set(QTOAUTH_DEFINITIONS ${PC_QTOAUTH_CFLAGS_OTHER})
  endif(NOT WIN32)

  find_library(QTOAUTH_LIBRARY NAMES qoauth
    HINTS ${PC_QTOAUTH_LIBDIR} ${PC_QTOAUTH_LIBRARY_DIRS}
  )

  find_path(QTOAUTH_INCLUDE_DIR QtOAuth/interface.h
    HINTS ${PC_QTOAUTH_INCLUDEDIR} ${PC_QTOAUTH_INCLUDE_DIRS}
  )

  include(FindPackageHandleStandardArgs)
  find_package_handle_standard_args(QtOAuth DEFAULT_MSG QTOAUTH_LIBRARY QTOAUTH_INCLUDE_DIR)

  mark_as_advanced(QTOAUTH_INCLUDE_DIR QTOAUTH_LIBRARY)
endif (QTOAUTH_INCLUDE_DIR AND QTOAUTH_LIBRARY)
