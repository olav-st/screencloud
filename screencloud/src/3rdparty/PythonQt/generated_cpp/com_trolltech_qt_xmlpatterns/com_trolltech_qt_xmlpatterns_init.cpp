#include <PythonQt.h>
#include "com_trolltech_qt_xmlpatterns0.h"


void PythonQt_init_QtXmlPatterns(PyObject* module) {
PythonQt::priv()->registerClass(&QAbstractMessageHandler::staticMetaObject, "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QAbstractMessageHandler>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractMessageHandler>, module, 0);
PythonQt::priv()->registerClass(&QAbstractUriResolver::staticMetaObject, "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QAbstractUriResolver>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractUriResolver>, module, 0);
PythonQt::priv()->registerCPPClass("QAbstractXmlNodeModel", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QAbstractXmlNodeModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractXmlNodeModel>, module, 0);
PythonQt::priv()->registerCPPClass("QAbstractXmlReceiver", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QAbstractXmlReceiver>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractXmlReceiver>, module, 0);
PythonQt::priv()->registerCPPClass("QPatternist", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QPatternist>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QPatternistSDK", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QPatternistSDK>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QSimpleXmlNodeModel", "QAbstractXmlNodeModel", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QSimpleXmlNodeModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSimpleXmlNodeModel>, module, 0);
PythonQt::priv()->registerCPPClass("QSourceLocation", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QSourceLocation>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QXmlFormatter", "QXmlSerializer", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QXmlFormatter>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlFormatter>, module, 0);
PythonQt::priv()->registerCPPClass("QXmlItem", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QXmlItem>, NULL, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QXmlName", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QXmlName>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QXmlNamePool", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QXmlNamePool>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QXmlNodeModelIndex", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QXmlNodeModelIndex>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QXmlQuery", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QXmlQuery>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QXmlResultItems", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QXmlResultItems>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlResultItems>, module, 0);
PythonQt::priv()->registerCPPClass("QXmlSchema", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QXmlSchema>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QXmlSchemaValidator", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QXmlSchemaValidator>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QXmlSerializer", "QAbstractXmlReceiver", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QXmlSerializer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlSerializer>, module, 0);

}
