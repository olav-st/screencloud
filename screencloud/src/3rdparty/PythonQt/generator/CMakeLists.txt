cmake_minimum_required(VERSION 2.8)

#-----------------------------------------------------------------------------
project(PythonQtGenerator)
#-----------------------------------------------------------------------------

include(CTestUseLaunchers OPTIONAL)

#-----------------------------------------------------------------------------
# Setup Qt

set(minimum_required_qt_version "4.6.2")

find_package(Qt4)

if(QT4_FOUND)

  set(found_qt_version ${QT_VERSION_MAJOR}.${QT_VERSION_MINOR}.${QT_VERSION_PATCH})

  if(${found_qt_version} VERSION_LESS ${minimum_required_qt_version})
      message(FATAL_ERROR "error: PythonQt requires Qt >= ${minimum_required_qt_version} -- you cannot use Qt ${found_qt_version}.")
  endif()
  
  set(QT_USE_QTXML ON)
  
  include(${QT_USE_FILE})
else()
  message(FATAL_ERROR "error: Qt4 was not found on your system. You probably need to set the QT_QMAKE_EXECUTABLE variable")
endif()

#-----------------------------------------------------------------------------
# Sources

set(sources
  parser/ast.cpp
  parser/binder.cpp
  parser/class_compiler.cpp
  parser/codemodel.cpp
  parser/codemodel_finder.cpp
  parser/compiler_utils.cpp
  parser/control.cpp
  parser/declarator_compiler.cpp
  parser/default_visitor.cpp
  parser/dumptree.cpp
  parser/lexer.cpp
  parser/list.cpp
  parser/name_compiler.cpp
  parser/parser.cpp
  parser/smallobject.cpp
  parser/tokens.cpp
  parser/type_compiler.cpp
  parser/visitor.cpp
  
  abstractmetabuilder.cpp
  abstractmetalang.cpp
  asttoxml.cpp
  customtypes.cpp
  fileout.cpp
  generator.cpp
  generatorset.cpp
  generatorsetqtscript.cpp
  main.cpp
  metajava.cpp
  metaqtscriptbuilder.cpp
  metaqtscript.cpp
  prigenerator.cpp
  reporthandler.cpp
  setupgenerator.cpp
  shellgenerator.cpp
  shellheadergenerator.cpp
  shellimplgenerator.cpp
  typeparser.cpp
  typesystem.cpp
  )
  
#-----------------------------------------------------------------------------
# List headers.  This list is used for the install command.

set(headers
  )

#-----------------------------------------------------------------------------
# Headers that should run through moc

set(moc_sources
  fileout.h
  generator.h
  generatorset.h
  generatorsetqtscript.h
  prigenerator.h
  setupgenerator.h
  shellgenerator.h
  shellheadergenerator.h
  shellimplgenerator.h
  )
  
#-----------------------------------------------------------------------------
# UI files

set(ui_sources )

#-----------------------------------------------------------------------------
# Resources

set(qrc_sources
  generator.qrc
  )

#-----------------------------------------------------------------------------
# Do wrapping
qt4_wrap_cpp(gen_moc_sources ${moc_sources})
qt4_wrap_ui(gen_ui_sources ${ui_sources})
qt4_add_resources(gen_qrc_sources ${qrc_sources})

#-----------------------------------------------------------------------------
# Copy file expected by the generator and specify install rules

file(GLOB files_to_copy RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "build_*.txt" "typesystem_*.xml")
list(APPEND files_to_copy qtscript_masterinclude.h parser/rpp/pp-qt-configuration)
foreach(file ${files_to_copy})
  configure_file(
    ${file}
    ${CMAKE_CURRENT_BINARY_DIR}/${file}
    COPYONLY
    )
  get_filename_component(destination_dir ${file} PATH)
  install(FILES ${file} DESTINATION bin/${destination_dir})
endforeach()

#-----------------------------------------------------------------------------
# Build the library

SOURCE_GROUP("Resources" FILES
  ${qrc_sources}
  ${ui_sources}
  ${files_to_copy}
  )

include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/parser
  ${CMAKE_CURRENT_SOURCE_DIR}/parser/rpp
  )
  
add_definitions(-DRXX_ALLOCATOR_INIT_0)
  
add_executable(${PROJECT_NAME}
  ${sources}
  ${gen_moc_sources}
  ${gen_ui_sources}
  ${gen_qrc_sources}
)

target_link_libraries(${PROJECT_NAME} ${QT_LIBRARIES})

#-----------------------------------------------------------------------------
# Install library (on windows, put the dll in 'bin' and the archive in 'lib')

install(TARGETS ${PROJECT_NAME}
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)
