#include <PythonQt.h>
#include "com_trolltech_qt_webkit0.h"


void PythonQt_init_QtWebKit(PyObject* module) {
PythonQt::priv()->registerClass(&QGraphicsWebView::staticMetaObject, "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QGraphicsWebView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsWebView>, module, 0);
PythonQt::priv()->registerCPPClass("QWebDatabase", "", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebDatabase>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QWebElement", "", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebElement>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QWebFrame::staticMetaObject, "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebFrame>, NULL, module, 0);
PythonQt::priv()->registerClass(&QWebHistoryInterface::staticMetaObject, "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebHistoryInterface>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebHistoryInterface>, module, 0);
PythonQt::priv()->registerCPPClass("QWebHitTestResult", "", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebHitTestResult>, NULL, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerClass(&QWebInspector::staticMetaObject, "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebInspector>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebInspector>, module, 0);
PythonQt::priv()->registerClass(&QWebPage::staticMetaObject, "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebPage>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebPage>, module, 0);
PythonQt::priv()->registerCPPClass("QWebPage::ChooseMultipleFilesExtensionOption", "QWebPage::ExtensionOption", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebPage_ChooseMultipleFilesExtensionOption>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebPage_ChooseMultipleFilesExtensionOption>, module, 0);
PythonQt::priv()->registerCPPClass("QWebPage::ChooseMultipleFilesExtensionReturn", "QWebPage::ExtensionReturn", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebPage_ChooseMultipleFilesExtensionReturn>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebPage_ChooseMultipleFilesExtensionReturn>, module, 0);
PythonQt::priv()->registerCPPClass("QWebPage::ErrorPageExtensionOption", "QWebPage::ExtensionOption", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebPage_ErrorPageExtensionOption>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebPage_ErrorPageExtensionOption>, module, 0);
PythonQt::priv()->registerCPPClass("QWebPage::ErrorPageExtensionReturn", "QWebPage::ExtensionReturn", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebPage_ErrorPageExtensionReturn>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebPage_ErrorPageExtensionReturn>, module, 0);
PythonQt::priv()->registerCPPClass("QWebPage::ExtensionOption", "", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebPage_ExtensionOption>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebPage_ExtensionOption>, module, 0);
PythonQt::priv()->registerCPPClass("QWebPage::ExtensionReturn", "", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebPage_ExtensionReturn>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebPage_ExtensionReturn>, module, 0);
PythonQt::priv()->registerClass(&QWebPluginFactory::staticMetaObject, "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebPluginFactory>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebPluginFactory>, module, 0);
PythonQt::priv()->registerCPPClass("QWebPluginFactory::ExtensionOption", "", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebPluginFactory_ExtensionOption>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebPluginFactory_ExtensionOption>, module, 0);
PythonQt::priv()->registerCPPClass("QWebPluginFactory::ExtensionReturn", "", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebPluginFactory_ExtensionReturn>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebPluginFactory_ExtensionReturn>, module, 0);
PythonQt::priv()->registerCPPClass("QWebPluginFactory::MimeType", "", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebPluginFactory_MimeType>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebPluginFactory_MimeType>, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QWebPluginFactory::Plugin", "", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebPluginFactory_Plugin>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebPluginFactory_Plugin>, module, 0);
PythonQt::priv()->registerCPPClass("QWebSecurityOrigin", "", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebSecurityOrigin>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QWebSettings", "", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebSettings>, NULL, module, 0);
PythonQt::priv()->registerClass(&QWebView::staticMetaObject, "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebView>, module, 0);

}
