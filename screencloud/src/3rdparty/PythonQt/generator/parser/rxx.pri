
isEmpty(RXXPATH):RXXPATH = $$PWD

INCLUDEPATH += $$RXXPATH

DEFINES += RXX_ALLOCATOR_INIT_0

HEADERS += $$RXXPATH/ast.h \
           $$RXXPATH/lexer.h \
           $$RXXPATH/list.h \
           $$RXXPATH/parser.h \
           $$RXXPATH/rxx_allocator.h \
           $$RXXPATH/rpp-allocator.h \
           $$RXXPATH/smallobject.h \
           $$RXXPATH/tokens.h \
           $$RXXPATH/symbol.h \
           $$RXXPATH/control.h \
           $$RXXPATH/visitor.h \
           $$RXXPATH/default_visitor.h \
           $$RXXPATH/dumptree.h \
           $$RXXPATH/binder.h \
           $$RXXPATH/codemodel.h \
           $$RXXPATH/codemodel_pointer.h \
           $$RXXPATH/codemodel_fwd.h \
           $$RXXPATH/type_compiler.h \
           $$RXXPATH/name_compiler.h \
           $$RXXPATH/declarator_compiler.h \
           $$RXXPATH/class_compiler.h \
           $$RXXPATH/codemodel_finder.h \
           $$RXXPATH/compiler_utils.h
SOURCES += $$RXXPATH/ast.cpp \
           $$RXXPATH/lexer.cpp \
           $$RXXPATH/list.cpp \
           $$RXXPATH/parser.cpp \
           $$RXXPATH/smallobject.cpp \
           $$RXXPATH/control.cpp \
           $$RXXPATH/visitor.cpp \
           $$RXXPATH/default_visitor.cpp \
           $$RXXPATH/dumptree.cpp \
           $$RXXPATH/tokens.cpp \
           $$RXXPATH/binder.cpp \
           $$RXXPATH/codemodel.cpp \
           $$RXXPATH/type_compiler.cpp \
           $$RXXPATH/name_compiler.cpp \
           $$RXXPATH/declarator_compiler.cpp \
           $$RXXPATH/class_compiler.cpp \
           $$RXXPATH/codemodel_finder.cpp \
           $$RXXPATH/compiler_utils.cpp
