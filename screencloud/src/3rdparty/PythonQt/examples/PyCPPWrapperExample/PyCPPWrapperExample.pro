# --------- PyCPPWrapperExample profile -------------------
# Last changed by $Author: florian $
# $Id: PythonQt.pro 35381 2006-03-16 13:05:52Z florian $
# $Source$
# --------------------------------------------------

TARGET   = PyCPPWrapperExample
TEMPLATE = app

DESTDIR           = ../../lib

include ( ../../build/common.prf )  
include ( ../../build/PythonQt.prf )  

HEADERS += \
  CustomObjects.h

SOURCES += \
  main.cpp \
  CustomObjects.cpp

RESOURCES += PyCPPWrapperExample.qrc
