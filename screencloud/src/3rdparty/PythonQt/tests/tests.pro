# --------- PythonQtTest profile -------------------
# Last changed by $Author: florian $
# $Id: PythonQt.pro 35381 2006-03-16 13:05:52Z florian $
# $Source$
# --------------------------------------------------
TARGET   = PythonQtTest
TEMPLATE = app

CONFIG += qtestlib

include ( ../build/common.prf )
include ( ../build/PythonQt.prf )

HEADERS +=                    \
  PythonQtTests.h

SOURCES +=                    \
  PythonQtTestMain.cpp        \
  PythonQtTests.cpp
