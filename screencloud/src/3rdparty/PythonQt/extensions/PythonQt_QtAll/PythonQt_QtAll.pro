
TARGET   = PythonQt_QtAll
TEMPLATE = lib

DESTDIR    = ../../lib

include ( ../../build/common.prf )  
include ( ../../build/PythonQt.prf )  

CONFIG += dll qt

DEFINES +=  PYTHONQT_QTALL_EXPORTS

HEADERS +=                \
  PythonQt_QtAll.h
  
SOURCES +=                \
  PythonQt_QtAll.cpp

CONFIG += uitools
QT += webkit gui svg sql network xml xmlpatterns opengl
#QT += phonon 

include (../../generated_cpp/com_trolltech_qt_core/com_trolltech_qt_core.pri)
include (../../generated_cpp/com_trolltech_qt_gui/com_trolltech_qt_gui.pri)
include (../../generated_cpp/com_trolltech_qt_svg/com_trolltech_qt_svg.pri)
include (../../generated_cpp/com_trolltech_qt_sql/com_trolltech_qt_sql.pri)
include (../../generated_cpp/com_trolltech_qt_network/com_trolltech_qt_network.pri)
include (../../generated_cpp/com_trolltech_qt_opengl/com_trolltech_qt_opengl.pri)
include (../../generated_cpp/com_trolltech_qt_webkit/com_trolltech_qt_webkit.pri)
include (../../generated_cpp/com_trolltech_qt_xml/com_trolltech_qt_xml.pri)
include (../../generated_cpp/com_trolltech_qt_uitools/com_trolltech_qt_uitools.pri)

#include (../../generated_cpp/com_trolltech_qt_xmlpatterns/com_trolltech_qt_xmlpatterns.pri)
#include (../../generated_cpp/com_trolltech_qt_phonon/com_trolltech_qt_phonon.pri)
