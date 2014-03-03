cmake_minimum_required(VERSION 2.8)

#-----------------------------------------------------------------------------
project(PythonQt)
#-----------------------------------------------------------------------------

include(CTestUseLaunchers OPTIONAL)

#-----------------------------------------------------------------------------
# Python libraries

find_package(PythonLibs REQUIRED)
include_directories("${PYTHON_INCLUDE_DIR}")
add_definitions(-DPYTHONQT_USE_RELEASE_PYTHON_FALLBACK)

#-----------------------------------------------------------------------------
# Build options

option(PythonQt_Wrap_QtAll "Make all Qt components available in python" OFF)

set(qtlibs core gui network opengl sql svg uitools webkit xml xmlpatterns)
foreach(qtlib ${qtlibs})
  OPTION(PythonQt_Wrap_Qt${qtlib} "Make all of Qt${qtlib} available in python" OFF)
endforeach()

# Force option if it applies
if(PythonQt_Wrap_QtAll)
  list(REMOVE_ITEM qtlibs xmlpatterns) # xmlpatterns wrapper does *NOT* build at all :(  
  foreach(qtlib ${qtlibs})
    if(NOT ${PythonQt_Wrap_Qt${qtlib}})
      set(PythonQt_Wrap_Qt${qtlib} ON CACHE BOOL "Make all of Qt${qtlib} available in python" FORCE)
      message(STATUS "Enabling [PythonQt_Wrap_Qt${qtlib}] because of [PythonQt_Wrap_QtAll] evaluates to True")
    endif()
  endforeach()
endif()

option(PythonQt_DEBUG "Enable/Disable PythonQt debug output" OFF)
if(PythonQt_DEBUG)
  add_definitions(-DPYTHONQT_DEBUG)
else()
  remove_definitions(-DPYTHONQT_DEBUG)
endif()

#-----------------------------------------------------------------------------
# Setup Qt

set(minimum_required_qt_version "4.6.2")

find_package(Qt4)

if(QT4_FOUND)

  set(found_qt_version ${QT_VERSION_MAJOR}.${QT_VERSION_MINOR}.${QT_VERSION_PATCH})

  if(${found_qt_version} VERSION_LESS ${minimum_required_qt_version})
      message(FATAL_ERROR "error: PythonQt requires Qt >= ${minimum_required_qt_version} -- you cannot use Qt ${found_qt_version}.")
  endif()
  
  # Enable required qt module
  foreach(qtlib network opengl sql svg uitools webkit xml xmlpatterns)
    string(TOUPPER ${qtlib} qtlib_uppercase)
    if (NOT ${QT_QT${qtlib_uppercase}_FOUND})
      message(FATAL_ERROR "QT_QT${${qtlib_uppercase} *not* FOUND - Try to disable PythonQt_Wrap_Qt${qtlib}")
    endif()
    set(QT_USE_QT${qtlib_uppercase} ${PythonQt_Wrap_Qt${qtlib}})
  endforeach()
  
  include(${QT_USE_FILE})
else()
  message(FATAL_ERROR "error: Qt4 was not found on your system. You probably need to set the QT_QMAKE_EXECUTABLE variable")
endif()

#-----------------------------------------------------------------------------
# The variable "generated_cpp_suffix" allows to conditionnally compile the generated wrappers 
# associated with the Qt version being used.
set(generated_cpp_suffix "_${QT_VERSION_MAJOR}${QT_VERSION_MINOR}")
if("${generated_cpp_suffix}" STREQUAL "_48")
  set(generated_cpp_suffix "")
endif()
if("${generated_cpp_suffix}" STREQUAL "_46")
  set(generated_cpp_suffix "_47") # Also use 4.7 wrappers for 4.6.x version
endif()

#-----------------------------------------------------------------------------
# Sources

set(sources
    src/PythonQtClassInfo.cpp
    src/PythonQtClassWrapper.cpp
    src/PythonQtConversion.cpp
    src/PythonQt.cpp
    src/PythonQtImporter.cpp
    src/PythonQtInstanceWrapper.cpp
    src/PythonQtMethodInfo.cpp
    src/PythonQtMisc.cpp
    src/PythonQtObjectPtr.cpp
    src/PythonQtQFileImporter.cpp
    src/PythonQtSignalReceiver.cpp
    src/PythonQtSlot.cpp
    src/PythonQtSignal.cpp
    src/PythonQtStdDecorators.cpp
    src/PythonQtStdIn.cpp
    src/PythonQtStdOut.cpp
    src/gui/PythonQtScriptingConsole.cpp
    
    generated_cpp${generated_cpp_suffix}/PythonQt_QtBindings.cpp

    generated_cpp${generated_cpp_suffix}/com_trolltech_qt_core_builtin/com_trolltech_qt_core_builtin0.cpp
    generated_cpp${generated_cpp_suffix}/com_trolltech_qt_core_builtin/com_trolltech_qt_core_builtin_init.cpp
    generated_cpp${generated_cpp_suffix}/com_trolltech_qt_gui_builtin/com_trolltech_qt_gui_builtin0.cpp
    generated_cpp${generated_cpp_suffix}/com_trolltech_qt_gui_builtin/com_trolltech_qt_gui_builtin_init.cpp
)

#-----------------------------------------------------------------------------
# List headers.  This is list is used for the install command.

set(headers
    src/PythonQtClassInfo.h
    src/PythonQtClassWrapper.h
    src/PythonQtConversion.h
    src/PythonQtCppWrapperFactory.h
    src/PythonQtDoc.h
    src/PythonQt.h
    src/PythonQtImporter.h
    src/PythonQtImportFileInterface.h
    src/PythonQtInstanceWrapper.h
    src/PythonQtMethodInfo.h
    src/PythonQtMisc.h
    src/PythonQtObjectPtr.h
    src/PythonQtQFileImporter.h
    src/PythonQtSignalReceiver.h
    src/PythonQtSlot.h
    src/PythonQtSignal.h
    src/PythonQtStdDecorators.h
    src/PythonQtStdIn.h
    src/PythonQtStdOut.h
    src/PythonQtSystem.h
    src/PythonQtVariants.h
    src/PythonQtPythonInclude.h
    generated_cpp${generated_cpp_suffix}/PythonQt_QtBindings.h
)

#-----------------------------------------------------------------------------
# Headers that should run through moc

set(moc_sources
    src/PythonQt.h
    src/PythonQtSignalReceiver.h
    src/PythonQtStdDecorators.h
    src/gui/PythonQtScriptingConsole.h

    generated_cpp${generated_cpp_suffix}/com_trolltech_qt_core_builtin/com_trolltech_qt_core_builtin0.h
    generated_cpp${generated_cpp_suffix}/com_trolltech_qt_gui_builtin/com_trolltech_qt_gui_builtin0.h
)

#-----------------------------------------------------------------------------
# Add extra sources
foreach(qtlib core gui network opengl sql svg uitools webkit xml xmlpatterns)
  
  if (${PythonQt_Wrap_Qt${qtlib}})
    
    ADD_DEFINITIONS(-DPYTHONQT_WRAP_Qt${qtlib})
    
    set(file_prefix generated_cpp${generated_cpp_suffix}/com_trolltech_qt_${qtlib}/com_trolltech_qt_${qtlib})
    
    foreach(index RANGE 0 11)
    
      # Source files
      if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${file_prefix}${index}.cpp)
        list(APPEND sources ${file_prefix}${index}.cpp)
      endif()
      
      # Headers that should run through moc
      if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${file_prefix}${index}.h)
        list(APPEND moc_sources ${file_prefix}${index}.h)
      endif()
      
    endforeach()
    
    list(APPEND sources ${file_prefix}_init.cpp)

  endif()
endforeach()

#-----------------------------------------------------------------------------
# UI files
set(ui_sources )

#-----------------------------------------------------------------------------
# Resources
set(qrc_sources )

#-----------------------------------------------------------------------------
# Do wrapping
qt4_wrap_cpp(gen_moc_sources ${moc_sources})
qt4_wrap_ui(gen_ui_sources ${ui_sources})
qt4_add_resources(gen_qrc_sources ${qrc_sources})

#-----------------------------------------------------------------------------
# Build the library

include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}/src
  )
  
add_library(PythonQt SHARED
            ${sources}
            ${gen_moc_sources}
            ${gen_ui_sources}
            ${gen_qrc_sources}
  )
set_target_properties(PythonQt PROPERTIES DEFINE_SYMBOL PYTHONQT_EXPORTS)

#
# That should solve linkage error on Mac when the project is used in a superbuild setup
# See http://blog.onesadcookie.com/2008/01/installname-magic.html
#
set_target_properties(PythonQt  PROPERTIES
  INSTALL_NAME_DIR "${CMAKE_INSTALL_PREFIX}/lib"
  )

target_link_libraries(PythonQt
              ${PYTHON_LIBRARY}
              ${QT_LIBRARIES}
  )

#-----------------------------------------------------------------------------
# Install library (on windows, put the dll in 'bin' and the archive in 'lib')

#install(TARGETS PythonQt
#        RUNTIME DESTINATION bin
#        LIBRARY DESTINATION lib
#        ARCHIVE DESTINATION lib)
#install(FILES ${headers} DESTINATION include/PythonQt)
