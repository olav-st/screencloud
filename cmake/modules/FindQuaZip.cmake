# - Find quazip
# Find the native quazip includes and library
#
# QUAZIP_INCLUDE_DIR - where to find quazip.h, etc.
# QUAZIP_LIBRARIES - List of libraries when using quazip.
# QUAZIP_FOUND - True if quazip found.


IF (QUAZIP_INCLUDE_DIR)
  # Already in cache, be silent
  SET(QUAZIP_FIND_QUIETLY TRUE)
ENDIF (QUAZIP_INCLUDE_DIR)

FIND_PATH(QUAZIP_INCLUDE_DIR NAMES quazip.h PATHS
${CMAKE_INCLUDE_PATH}
${CMAKE_INSTALL_PREFIX}/include
PATH_SUFFIXES include/quazip5 include/quazip
)

FIND_LIBRARY(QUAZIP_LIBRARY NAMES quazip5 quazip-qt5 quazip )

# handle the QUIETLY and REQUIRED arguments and set QUAZIP_FOUND to TRUE if
# all listed variables are TRUE
INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(quazip DEFAULT_MSG QUAZIP_LIBRARY QUAZIP_INCLUDE_DIR)

#If on windows, use qt zlib headers
IF(UNIX)
        find_package(ZLIB REQUIRED)
ELSE(UNIX)
        SET(ZLIB_INCLUDE_DIRS "${QT_ROOT}/src/3rdparty/zlib" CACHE STRING "Path to ZLIB headers of Qt")
        IF(NOT EXISTS "${ZLIB_INCLUDE_DIRS}/zlib.h")
                MESSAGE("Please specify a valid zlib include dir")
        ENDIF(NOT EXISTS "${ZLIB_INCLUDE_DIRS}/zlib.h")
ENDIF(UNIX)

IF(QUAZIP_FOUND)
  SET( QUAZIP_LIBRARIES ${QUAZIP_LIBRARY} )
ELSE(QUAZIP_FOUND)
  SET( QUAZIP_LIBRARIES )
ENDIF(QUAZIP_FOUND)

MARK_AS_ADVANCED( QUAZIP_LIBRARY QUAZIP_INCLUDE_DIR )
