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

FIND_PATH(QUAZIP_INCLUDE_DIR quazip/quazip.h
${CMAKE_INCLUDE_PATH}
${CMAKE_INSTALL_PREFIX}/include
)

FIND_LIBRARY(QUAZIP_LIBRARY NAMES quazip )

# handle the QUIETLY and REQUIRED arguments and set QUAZIP_FOUND to TRUE if
# all listed variables are TRUE
INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(quazip DEFAULT_MSG QUAZIP_LIBRARY QUAZIP_INCLUDE_DIR)

IF(QUAZIP_FOUND)
  SET( QUAZIP_LIBRARIES ${QUAZIP_LIBRARY} )
ELSE(QUAZIP_FOUND)
  SET( QUAZIP_LIBRARIES )
ENDIF(QUAZIP_FOUND)

MARK_AS_ADVANCED( QUAZIP_LIBRARY QUAZIP_INCLUDE_DIR )
