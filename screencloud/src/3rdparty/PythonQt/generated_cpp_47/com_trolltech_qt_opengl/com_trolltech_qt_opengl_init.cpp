#include <PythonQt.h>
#include "com_trolltech_qt_opengl0.h"


void PythonQt_init_QtOpenGL(PyObject* module) {
PythonQt::priv()->registerCPPClass("QGLColormap", "", "QtOpenGL", PythonQtCreateObject<PythonQtWrapper_QGLColormap>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGLColormap>, module, 0);
PythonQt::priv()->registerCPPClass("QGLContext", "", "QtOpenGL", PythonQtCreateObject<PythonQtWrapper_QGLContext>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGLContext>, module, 0);
PythonQt::priv()->registerCPPClass("QGLFramebufferObject", "", "QtOpenGL", PythonQtCreateObject<PythonQtWrapper_QGLFramebufferObject>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGLFramebufferObject>, module, 0);
PythonQt::self()->addParentClass("QGLFramebufferObject", "QPaintDevice",PythonQtUpcastingOffset<QGLFramebufferObject,QPaintDevice>());
PythonQt::priv()->registerCPPClass("QGLFramebufferObjectFormat", "", "QtOpenGL", PythonQtCreateObject<PythonQtWrapper_QGLFramebufferObjectFormat>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QGLPixelBuffer", "", "QtOpenGL", PythonQtCreateObject<PythonQtWrapper_QGLPixelBuffer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGLPixelBuffer>, module, 0);
PythonQt::self()->addParentClass("QGLPixelBuffer", "QPaintDevice",PythonQtUpcastingOffset<QGLPixelBuffer,QPaintDevice>());
PythonQt::priv()->registerClass(&QGLShader::staticMetaObject, "QtOpenGL", PythonQtCreateObject<PythonQtWrapper_QGLShader>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGLShader>, module, 0);
PythonQt::priv()->registerClass(&QGLShaderProgram::staticMetaObject, "QtOpenGL", PythonQtCreateObject<PythonQtWrapper_QGLShaderProgram>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGLShaderProgram>, module, 0);
PythonQt::priv()->registerClass(&QGLWidget::staticMetaObject, "QtOpenGL", PythonQtCreateObject<PythonQtWrapper_QGLWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGLWidget>, module, 0);

}
