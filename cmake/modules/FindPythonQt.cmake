# Find PythonQt
#
# Sets PYTHONQT_FOUND, PYTHONQT_INCLUDE_DIR, PYTHONQT_LIBRARY, PYTHONQT_LIBRARIES
#

find_path(PYTHONQT_INSTALL_DIR NAMES include/PythonQt/PythonQt.h src/PythonQt.h DOC "Directory where PythonQt was installed.")
find_path(PYTHONQT_INCLUDE_DIR PythonQt.h PATHS "${PYTHONQT_INSTALL_DIR}/include/PythonQt" "${PYTHONQT_INSTALL_DIR}/src" DOC "Path to the PythonQt include directory")
file(GLOB PYTHONQT_LIB_FILE LIST_DIRECTORIES false RELATIVE "${PYTHONQT_INSTALL_DIR}/lib" "${PYTHONQT_INSTALL_DIR}/lib/*PythonQt-Qt[4-9]*.so")
string(REGEX REPLACE "^lib(.+)\\.so$" "\\1" PYTHONQT_LIB "${PYTHONQT_LIB_FILE}")
find_library(PYTHONQT_LIBRARY NAMES PythonQt QtPython "${PYTHONQT_LIB}" PATHS "${PYTHONQT_INSTALL_DIR}/lib" DOC "The PythonQt library.")

mark_as_advanced(PYTHONQT_INSTALL_DIR)
mark_as_advanced(PYTHONQT_INCLUDE_DIR)
mark_as_advanced(PYTHONQT_LIBRARY)

# On linux, also find libutil
if(UNIX AND NOT APPLE)
  find_library(PYTHONQT_LIBUTIL util)
  mark_as_advanced(PYTHONQT_LIBUTIL)
endif()

set(PYTHONQT_FOUND 0)
if(PYTHONQT_INCLUDE_DIR AND PYTHONQT_LIBRARY)
  # Currently CMake'ified PythonQt only supports building against a python Release build.
  # This applies independently of CTK build type (Release, Debug, ...)
  add_definitions(-DPYTHONQT_USE_RELEASE_PYTHON_FALLBACK)
  set(PYTHONQT_FOUND 1)
  set(PYTHONQT_LIBRARIES ${PYTHONQT_LIBRARY} ${PYTHONQT_LIBUTIL})
endif()

