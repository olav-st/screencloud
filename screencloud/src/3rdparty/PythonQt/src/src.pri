DEFINES +=  PYTHONQT_EXPORTS

HEADERS +=                    \
  $$PWD/PythonQt.h                  \
  $$PWD/PythonQtStdDecorators.h     \
  $$PWD/PythonQtClassInfo.h         \
  $$PWD/PythonQtImporter.h          \
  $$PWD/PythonQtObjectPtr.h         \
  $$PWD/PythonQtSignal.h            \
  $$PWD/PythonQtSlot.h              \
  $$PWD/PythonQtStdIn.h             \
  $$PWD/PythonQtStdOut.h            \
  $$PWD/PythonQtMisc.h              \
  $$PWD/PythonQtMethodInfo.h        \
  $$PWD/PythonQtImportFileInterface.h \
  $$PWD/PythonQtConversion.h        \
  $$PWD/PythonQtSignalReceiver.h    \
  $$PWD/PythonQtInstanceWrapper.h   \
  $$PWD/PythonQtClassWrapper.h \
  $$PWD/PythonQtCppWrapperFactory.h \
  $$PWD/PythonQtQFileImporter.h     \
  $$PWD/PythonQtQFileImporter.h     \
  $$PWD/PythonQtVariants.h          \
  $$PWD/gui/PythonQtScriptingConsole.h    \
  $$PWD/PythonQtSystem.h
  
SOURCES +=                    \
  $$PWD/PythonQtStdDecorators.cpp   \
  $$PWD/PythonQt.cpp                \
  $$PWD/PythonQtClassInfo.cpp       \
  $$PWD/PythonQtImporter.cpp        \
  $$PWD/PythonQtObjectPtr.cpp       \
  $$PWD/PythonQtStdIn.cpp           \
  $$PWD/PythonQtStdOut.cpp          \
  $$PWD/PythonQtSignal.cpp          \
  $$PWD/PythonQtSlot.cpp            \
  $$PWD/PythonQtMisc.cpp            \
  $$PWD/PythonQtMethodInfo.cpp      \
  $$PWD/PythonQtConversion.cpp      \
  $$PWD/PythonQtSignalReceiver.cpp  \
  $$PWD/PythonQtInstanceWrapper.cpp \
  $$PWD/PythonQtQFileImporter.cpp   \
  $$PWD/PythonQtClassWrapper.cpp    \
  $$PWD/gui/PythonQtScriptingConsole.cpp \

include($$PWD/../generated_cpp/com_trolltech_qt_core_builtin/com_trolltech_qt_core_builtin.pri)
include($$PWD/../generated_cpp/com_trolltech_qt_gui_builtin/com_trolltech_qt_gui_builtin.pri)
