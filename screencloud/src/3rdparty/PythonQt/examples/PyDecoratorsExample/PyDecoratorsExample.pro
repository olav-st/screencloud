# --------- PyGuiExample profile -------------------
# Last changed by $Author: florian $
# $Id: PythonQt.pro 35381 2006-03-16 13:05:52Z florian $
# $Source$
# --------------------------------------------------

TARGET   = PyDecoratorsExample
TEMPLATE = app

DESTDIR           = ../../lib

include ( ../../build/common.prf )  
include ( ../../build/PythonQt.prf )  
  

HEADERS += \
  PyExampleDecorators.h

SOURCES += \
  main.cpp \
  PyExampleDecorators.cpp

RESOURCES += PyDecoratorsExample.qrc
