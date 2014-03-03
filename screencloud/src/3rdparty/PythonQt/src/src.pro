# --------- PythonQt profile -------------------
# Last changed by $Author: florian $
# $Id: PythonQt.pro 35381 2006-03-16 13:05:52Z florian $
# $Source$
# --------------------------------------------------

TARGET   = PythonQt
TEMPLATE = lib


DESTDIR    = ../lib

CONFIG += qt dll
CONFIG -= flat

include ( ../build/common.prf )  
include ( ../build/python.prf )  

include ( src.pri )  
