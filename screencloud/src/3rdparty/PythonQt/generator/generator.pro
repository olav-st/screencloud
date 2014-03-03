TARGET = pythonqt_generator
CONFIG -= debug
CONFIG += release
DESTDIR = .

include(generator.pri)


# Input
HEADERS += \
        generatorsetqtscript.h \
        metaqtscriptbuilder.h \
        metaqtscript.h \
        shellgenerator.h \
        shellimplgenerator.h \
        shellheadergenerator.h \
        setupgenerator.h
   
SOURCES += \
        generatorsetqtscript.cpp \
        metaqtscriptbuilder.cpp \
        metaqtscript.cpp \
        shellgenerator.cpp \
        shellimplgenerator.cpp \
        shellheadergenerator.cpp \
        setupgenerator.cpp
