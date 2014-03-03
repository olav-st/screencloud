# --------- PyScriptingConsole profile -------------------
# Last changed by $Author: florian $
# $Id: PythonQt.pro 35381 2006-03-16 13:05:52Z florian $
# $Source$
# --------------------------------------------------

TARGET   = PyGettingStarted
TEMPLATE = app

DESTDIR           = ../../lib

CONFIG += console

include ( ../../build/common.prf )  
include ( ../../build/PythonQt.prf )  

SOURCES +=                    \
  main.cpp        

RESOURCES += PyGettingStarted.qrc
