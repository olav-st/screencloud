# Find PythonQt_QtAll
#
# Sets PYTHONQT_QTALL_FOUND, PYTHONQT_QTALL_INCLUDE_DIR, PYTHONQT_QTALL_LIBRARY, PYTHONQT_QTALL_LIBRARIES
#


find_path(PYTHONQT_QTALL_INSTALL_DIR NAMES include/PythonQt/PythonQt_QtAll.h include/PythonQt/extensions/PythonQt_QtAll/PythonQt_QtAll.h DOC "Directory where PythonQt_QtAll.h was installed.")
find_path(PYTHONQT_QTALL_INCLUDE_DIR PythonQt_QtAll.h PATHS "${PYTHONQT_QTALL_INSTALL_DIR}/include/PythonQt" "${PYTHONQT_QTALL_INSTALL_DIR}/include/PythonQt/extensions/PythonQt_QtAll" ${CMAKE_INCLUDE_PATH} ${CMAKE_INSTALL_PREFIX}/include ${CMAKE_INSTALL_PREFIX}/include/PythonQt ${CMAKE_INSTALL_PREFIX}/include/PythonQt/extensions/PythonQt_QtAll DOC "Path to the PythonQt_QtAll include directory")
file(GLOB PYTHONQT_QTALL_LIB_FILE LIST_DIRECTORIES false RELATIVE "${PYTHONQT_INSTALL_DIR}/lib" "${PYTHONQT_INSTALL_DIR}/lib/*PythonQt_QtAll-Qt[4-9]*.so")
string(REGEX REPLACE "^lib(.+)\\.so$" "\\1" PYTHONQT_QTALL_LIB "${PYTHONQT_QTALL_LIB_FILE}")

find_library(PYTHONQT_QTALL_LIBRARY NAMES PythonQt_QtAll QtPython_QtAll "${PYTHONQT_QTALL_LIB}" PATHS "${PYTHONQT_QTALL_INSTALL_DIR}/extensions/PythonQt_QtAll" DOC "The PythonQt_QtAll library.")

mark_as_advanced(PYTHONQT_QTALL_INSTALL_DIR)
mark_as_advanced(PYTHONQT_QTALL_INCLUDE_DIR)
mark_as_advanced(PYTHONQT_QTALL_LIBRARY)

set(PYTHONQT_QTALL_FOUND 0)
if(PYTHONQT_QTALL_INCLUDE_DIR AND PYTHONQT_QTALL_LIBRARY)
  # Currently CMake'ified PYTHONQT_QTALL only supports building against a python Release build.
  # This applies independently of CTK build type (Release, Debug, ...)
  add_definitions(-DPYTHONQT_QTALL_USE_RELEASE_PYTHON_FALLBACK)
  set(PYTHONQT_QTALL_FOUND 1)
  set(PYTHONQT_QTALL_LIBRARIES ${PYTHONQT_QTALL_LIBRARY} ${PYTHONQT_QTALL_LIBUTIL})
endif()

