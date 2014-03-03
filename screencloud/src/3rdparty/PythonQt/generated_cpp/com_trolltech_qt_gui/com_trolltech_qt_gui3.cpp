#include "com_trolltech_qt_gui3.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QPainterPath>
#include <QPair>
#include <QTextCursor>
#include <QVarLengthArray>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicseffect.h>
#include <qgraphicsitem.h>
#include <qgraphicsitemanimation.h>
#include <qgraphicslayout.h>
#include <qgraphicslayoutitem.h>
#include <qgraphicslinearlayout.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicstransform.h>
#include <qgraphicsview.h>
#include <qgraphicswidget.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qline.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix.h>
#include <qmatrix4x4.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpair.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtimeline.h>
#include <qtransform.h>
#include <qvector3d.h>
#include <qwidget.h>

PythonQtShell_QGraphicsItemAnimation::~PythonQtShell_QGraphicsItemAnimation() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsItemAnimation::afterAnimationStep(qreal  step)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "afterAnimationStep");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "qreal"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&step};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemAnimation::afterAnimationStep(step);
}
void PythonQtShell_QGraphicsItemAnimation::beforeAnimationStep(qreal  step)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "beforeAnimationStep");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "qreal"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&step};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemAnimation::beforeAnimationStep(step);
}
void PythonQtShell_QGraphicsItemAnimation::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemAnimation::childEvent(arg__1);
}
void PythonQtShell_QGraphicsItemAnimation::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemAnimation::customEvent(arg__1);
}
bool  PythonQtShell_QGraphicsItemAnimation::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemAnimation::event(arg__1);
}
bool  PythonQtShell_QGraphicsItemAnimation::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemAnimation::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QGraphicsItemAnimation::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemAnimation::timerEvent(arg__1);
}
QGraphicsItemAnimation* PythonQtWrapper_QGraphicsItemAnimation::new_QGraphicsItemAnimation(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsItemAnimation(parent); }

void PythonQtWrapper_QGraphicsItemAnimation::afterAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step)
{
  ( ((PythonQtPublicPromoter_QGraphicsItemAnimation*)theWrappedObject)->promoted_afterAnimationStep(step));
}

void PythonQtWrapper_QGraphicsItemAnimation::beforeAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step)
{
  ( ((PythonQtPublicPromoter_QGraphicsItemAnimation*)theWrappedObject)->promoted_beforeAnimationStep(step));
}

void PythonQtWrapper_QGraphicsItemAnimation::clear(QGraphicsItemAnimation* theWrappedObject)
{
  ( theWrappedObject->clear());
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::horizontalScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->horizontalScaleAt(step));
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::horizontalShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->horizontalShearAt(step));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItemAnimation::item(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->item());
}

QMatrix  PythonQtWrapper_QGraphicsItemAnimation::matrixAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->matrixAt(step));
}

QPointF  PythonQtWrapper_QGraphicsItemAnimation::posAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->posAt(step));
}

QList<QPair<qreal , QPointF >  >  PythonQtWrapper_QGraphicsItemAnimation::posList(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->posList());
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::rotationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->rotationAt(step));
}

QList<QPair<qreal , qreal >  >  PythonQtWrapper_QGraphicsItemAnimation::rotationList(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->rotationList());
}

QList<QPair<qreal , QPointF >  >  PythonQtWrapper_QGraphicsItemAnimation::scaleList(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->scaleList());
}

void PythonQtWrapper_QGraphicsItemAnimation::setItem(QGraphicsItemAnimation* theWrappedObject, QGraphicsItem*  item)
{
  ( theWrappedObject->setItem(item));
}

void PythonQtWrapper_QGraphicsItemAnimation::setPosAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, const QPointF&  pos)
{
  ( theWrappedObject->setPosAt(step, pos));
}

void PythonQtWrapper_QGraphicsItemAnimation::setRotationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  angle)
{
  ( theWrappedObject->setRotationAt(step, angle));
}

void PythonQtWrapper_QGraphicsItemAnimation::setScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  sx, qreal  sy)
{
  ( theWrappedObject->setScaleAt(step, sx, sy));
}

void PythonQtWrapper_QGraphicsItemAnimation::setShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  sh, qreal  sv)
{
  ( theWrappedObject->setShearAt(step, sh, sv));
}

void PythonQtWrapper_QGraphicsItemAnimation::setTimeLine(QGraphicsItemAnimation* theWrappedObject, QTimeLine*  timeLine)
{
  ( theWrappedObject->setTimeLine(timeLine));
}

void PythonQtWrapper_QGraphicsItemAnimation::setTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  dx, qreal  dy)
{
  ( theWrappedObject->setTranslationAt(step, dx, dy));
}

QList<QPair<qreal , QPointF >  >  PythonQtWrapper_QGraphicsItemAnimation::shearList(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->shearList());
}

QTimeLine*  PythonQtWrapper_QGraphicsItemAnimation::timeLine(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->timeLine());
}

QList<QPair<qreal , QPointF >  >  PythonQtWrapper_QGraphicsItemAnimation::translationList(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->translationList());
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::verticalScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->verticalScaleAt(step));
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::verticalShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->verticalShearAt(step));
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::xTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->xTranslationAt(step));
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::yTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->yTranslationAt(step));
}



PythonQtShell_QGraphicsItemGroup::~PythonQtShell_QGraphicsItemGroup() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsItemGroup::advance(int  phase)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "advance");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&phase};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::advance(phase);
}
QRectF  PythonQtShell_QGraphicsItemGroup::boundingRect() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "boundingRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QRectF"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRectF returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("boundingRect", methodInfo, result);
        } else {
          returnValue = *((QRectF*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemGroup::boundingRect();
}
bool  PythonQtShell_QGraphicsItemGroup::collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "collidesWithItem");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGraphicsItem*" , "Qt::ItemSelectionMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&other, (void*)&mode};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("collidesWithItem", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemGroup::collidesWithItem(other, mode);
}
bool  PythonQtShell_QGraphicsItemGroup::collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "collidesWithPath");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QPainterPath&" , "Qt::ItemSelectionMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&path, (void*)&mode};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("collidesWithPath", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemGroup::collidesWithPath(path, mode);
}
bool  PythonQtShell_QGraphicsItemGroup::contains(const QPointF&  point) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contains");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QPointF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&point};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("contains", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemGroup::contains(point);
}
void PythonQtShell_QGraphicsItemGroup::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::contextMenuEvent(event);
}
void PythonQtShell_QGraphicsItemGroup::dragEnterEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::dragEnterEvent(event);
}
void PythonQtShell_QGraphicsItemGroup::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::dragLeaveEvent(event);
}
void PythonQtShell_QGraphicsItemGroup::dragMoveEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::dragMoveEvent(event);
}
void PythonQtShell_QGraphicsItemGroup::dropEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::dropEvent(event);
}
QVariant  PythonQtShell_QGraphicsItemGroup::extension(const QVariant&  variant) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "extension");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&variant};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("extension", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemGroup::extension(variant);
}
void PythonQtShell_QGraphicsItemGroup::focusInEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::focusInEvent(event);
}
void PythonQtShell_QGraphicsItemGroup::focusOutEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::focusOutEvent(event);
}
void PythonQtShell_QGraphicsItemGroup::hoverEnterEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::hoverEnterEvent(event);
}
void PythonQtShell_QGraphicsItemGroup::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::hoverLeaveEvent(event);
}
void PythonQtShell_QGraphicsItemGroup::hoverMoveEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::hoverMoveEvent(event);
}
void PythonQtShell_QGraphicsItemGroup::inputMethodEvent(QInputMethodEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QInputMethodEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::inputMethodEvent(event);
}
QVariant  PythonQtShell_QGraphicsItemGroup::inputMethodQuery(Qt::InputMethodQuery  query) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&query};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("inputMethodQuery", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemGroup::inputMethodQuery(query);
}
bool  PythonQtShell_QGraphicsItemGroup::isObscuredBy(const QGraphicsItem*  item) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isObscuredBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGraphicsItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&item};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isObscuredBy", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemGroup::isObscuredBy(item);
}
QVariant  PythonQtShell_QGraphicsItemGroup::itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "QGraphicsItem::GraphicsItemChange" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&change, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemChange", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemGroup::itemChange(change, value);
}
void PythonQtShell_QGraphicsItemGroup::keyPressEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::keyPressEvent(event);
}
void PythonQtShell_QGraphicsItemGroup::keyReleaseEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::keyReleaseEvent(event);
}
void PythonQtShell_QGraphicsItemGroup::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::mouseDoubleClickEvent(event);
}
void PythonQtShell_QGraphicsItemGroup::mouseMoveEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::mouseMoveEvent(event);
}
void PythonQtShell_QGraphicsItemGroup::mousePressEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::mousePressEvent(event);
}
void PythonQtShell_QGraphicsItemGroup::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::mouseReleaseEvent(event);
}
QPainterPath  PythonQtShell_QGraphicsItemGroup::opaqueArea() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "opaqueArea");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainterPath"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("opaqueArea", methodInfo, result);
        } else {
          returnValue = *((QPainterPath*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemGroup::opaqueArea();
}
void PythonQtShell_QGraphicsItemGroup::paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QStyleOptionGraphicsItem*" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&painter, (void*)&option, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::paint(painter, option, widget);
}
bool  PythonQtShell_QGraphicsItemGroup::sceneEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sceneEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sceneEvent", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemGroup::sceneEvent(event);
}
bool  PythonQtShell_QGraphicsItemGroup::sceneEventFilter(QGraphicsItem*  watched, QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sceneEventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QGraphicsItem*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&watched, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sceneEventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemGroup::sceneEventFilter(watched, event);
}
void PythonQtShell_QGraphicsItemGroup::setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setExtension");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsItem::Extension" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&extension, (void*)&variant};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::setExtension(extension, variant);
}
QPainterPath  PythonQtShell_QGraphicsItemGroup::shape() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "shape");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainterPath"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("shape", methodInfo, result);
        } else {
          returnValue = *((QPainterPath*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemGroup::shape();
}
bool  PythonQtShell_QGraphicsItemGroup::supportsExtension(QGraphicsItem::Extension  extension) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "supportsExtension");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QGraphicsItem::Extension"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&extension};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("supportsExtension", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemGroup::supportsExtension(extension);
}
int  PythonQtShell_QGraphicsItemGroup::type() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "type");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("type", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemGroup::type();
}
void PythonQtShell_QGraphicsItemGroup::wheelEvent(QGraphicsSceneWheelEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::wheelEvent(event);
}
QGraphicsItemGroup* PythonQtWrapper_QGraphicsItemGroup::new_QGraphicsItemGroup(QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsItemGroup(parent, scene); }

void PythonQtWrapper_QGraphicsItemGroup::addToGroup(QGraphicsItemGroup* theWrappedObject, QGraphicsItem*  item)
{
  ( theWrappedObject->addToGroup(item));
}

QRectF  PythonQtWrapper_QGraphicsItemGroup::boundingRect(QGraphicsItemGroup* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItemGroup*)theWrappedObject)->promoted_boundingRect());
}

bool  PythonQtWrapper_QGraphicsItemGroup::isObscuredBy(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItemGroup*)theWrappedObject)->promoted_isObscuredBy(item));
}

QPainterPath  PythonQtWrapper_QGraphicsItemGroup::opaqueArea(QGraphicsItemGroup* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItemGroup*)theWrappedObject)->promoted_opaqueArea());
}

void PythonQtWrapper_QGraphicsItemGroup::paint(QGraphicsItemGroup* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( ((PythonQtPublicPromoter_QGraphicsItemGroup*)theWrappedObject)->promoted_paint(painter, option, widget));
}

void PythonQtWrapper_QGraphicsItemGroup::removeFromGroup(QGraphicsItemGroup* theWrappedObject, QGraphicsItem*  item)
{
  ( theWrappedObject->removeFromGroup(item));
}

int  PythonQtWrapper_QGraphicsItemGroup::type(QGraphicsItemGroup* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItemGroup*)theWrappedObject)->promoted_type());
}



PythonQtShell_QGraphicsLayout::~PythonQtShell_QGraphicsLayout() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QGraphicsLayout::count() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "count");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("count", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return int();
}
void PythonQtShell_QGraphicsLayout::getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "getContentsMargins");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "qreal*" , "qreal*" , "qreal*" , "qreal*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&left, (void*)&top, (void*)&right, (void*)&bottom};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLayout::getContentsMargins(left, top, right, bottom);
}
void PythonQtShell_QGraphicsLayout::invalidate()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "invalidate");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLayout::invalidate();
}
QGraphicsLayoutItem*  PythonQtShell_QGraphicsLayout::itemAt(int  i) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QGraphicsLayoutItem*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QGraphicsLayoutItem* returnValue;
    void* args[2] = {NULL, (void*)&i};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemAt", methodInfo, result);
        } else {
          returnValue = *((QGraphicsLayoutItem**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return 0;
}
void PythonQtShell_QGraphicsLayout::removeAt(int  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "removeAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  
}
void PythonQtShell_QGraphicsLayout::setGeometry(const QRectF&  rect)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setGeometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QRectF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&rect};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLayout::setGeometry(rect);
}
QSizeF  PythonQtShell_QGraphicsLayout::sizeHint(Qt::SizeHint  which, const QSizeF&  constraint) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sizeHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSizeF" , "Qt::SizeHint" , "const QSizeF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QSizeF returnValue;
    void* args[3] = {NULL, (void*)&which, (void*)&constraint};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sizeHint", methodInfo, result);
        } else {
          returnValue = *((QSizeF*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSizeF();
}
void PythonQtShell_QGraphicsLayout::updateGeometry()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateGeometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLayout::updateGeometry();
}
void PythonQtShell_QGraphicsLayout::widgetEvent(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "widgetEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLayout::widgetEvent(e);
}
QGraphicsLayout* PythonQtWrapper_QGraphicsLayout::new_QGraphicsLayout(QGraphicsLayoutItem*  parent)
{ 
return new PythonQtShell_QGraphicsLayout(parent); }

void PythonQtWrapper_QGraphicsLayout::activate(QGraphicsLayout* theWrappedObject)
{
  ( theWrappedObject->activate());
}

void PythonQtWrapper_QGraphicsLayout::getContentsMargins(QGraphicsLayout* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const
{
  ( ((PythonQtPublicPromoter_QGraphicsLayout*)theWrappedObject)->promoted_getContentsMargins(left, top, right, bottom));
}

bool  PythonQtWrapper_QGraphicsLayout::static_QGraphicsLayout_instantInvalidatePropagation()
{
  return (QGraphicsLayout::instantInvalidatePropagation());
}

void PythonQtWrapper_QGraphicsLayout::invalidate(QGraphicsLayout* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGraphicsLayout*)theWrappedObject)->promoted_invalidate());
}

bool  PythonQtWrapper_QGraphicsLayout::isActivated(QGraphicsLayout* theWrappedObject) const
{
  return ( theWrappedObject->isActivated());
}

void PythonQtWrapper_QGraphicsLayout::setContentsMargins(QGraphicsLayout* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom)
{
  ( theWrappedObject->setContentsMargins(left, top, right, bottom));
}

void PythonQtWrapper_QGraphicsLayout::static_QGraphicsLayout_setInstantInvalidatePropagation(bool  enable)
{
  (QGraphicsLayout::setInstantInvalidatePropagation(enable));
}

void PythonQtWrapper_QGraphicsLayout::updateGeometry(QGraphicsLayout* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGraphicsLayout*)theWrappedObject)->promoted_updateGeometry());
}

void PythonQtWrapper_QGraphicsLayout::widgetEvent(QGraphicsLayout* theWrappedObject, QEvent*  e)
{
  ( ((PythonQtPublicPromoter_QGraphicsLayout*)theWrappedObject)->promoted_widgetEvent(e));
}



PythonQtShell_QGraphicsLayoutItem::~PythonQtShell_QGraphicsLayoutItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsLayoutItem::getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "getContentsMargins");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "qreal*" , "qreal*" , "qreal*" , "qreal*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&left, (void*)&top, (void*)&right, (void*)&bottom};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLayoutItem::getContentsMargins(left, top, right, bottom);
}
void PythonQtShell_QGraphicsLayoutItem::setGeometry(const QRectF&  rect)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setGeometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QRectF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&rect};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLayoutItem::setGeometry(rect);
}
QSizeF  PythonQtShell_QGraphicsLayoutItem::sizeHint(Qt::SizeHint  which, const QSizeF&  constraint) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sizeHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSizeF" , "Qt::SizeHint" , "const QSizeF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QSizeF returnValue;
    void* args[3] = {NULL, (void*)&which, (void*)&constraint};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sizeHint", methodInfo, result);
        } else {
          returnValue = *((QSizeF*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSizeF();
}
void PythonQtShell_QGraphicsLayoutItem::updateGeometry()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateGeometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLayoutItem::updateGeometry();
}
QGraphicsLayoutItem* PythonQtWrapper_QGraphicsLayoutItem::new_QGraphicsLayoutItem(QGraphicsLayoutItem*  parent, bool  isLayout)
{ 
return new PythonQtShell_QGraphicsLayoutItem(parent, isLayout); }

QRectF  PythonQtWrapper_QGraphicsLayoutItem::contentsRect(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->contentsRect());
}

QSizeF  PythonQtWrapper_QGraphicsLayoutItem::effectiveSizeHint(QGraphicsLayoutItem* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint) const
{
  return ( theWrappedObject->effectiveSizeHint(which, constraint));
}

QRectF  PythonQtWrapper_QGraphicsLayoutItem::geometry(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->geometry());
}

void PythonQtWrapper_QGraphicsLayoutItem::getContentsMargins(QGraphicsLayoutItem* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const
{
  ( ((PythonQtPublicPromoter_QGraphicsLayoutItem*)theWrappedObject)->promoted_getContentsMargins(left, top, right, bottom));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsLayoutItem::graphicsItem(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->graphicsItem());
}

bool  PythonQtWrapper_QGraphicsLayoutItem::isLayout(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->isLayout());
}

qreal  PythonQtWrapper_QGraphicsLayoutItem::maximumHeight(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->maximumHeight());
}

QSizeF  PythonQtWrapper_QGraphicsLayoutItem::maximumSize(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->maximumSize());
}

qreal  PythonQtWrapper_QGraphicsLayoutItem::maximumWidth(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->maximumWidth());
}

qreal  PythonQtWrapper_QGraphicsLayoutItem::minimumHeight(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->minimumHeight());
}

QSizeF  PythonQtWrapper_QGraphicsLayoutItem::minimumSize(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->minimumSize());
}

qreal  PythonQtWrapper_QGraphicsLayoutItem::minimumWidth(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->minimumWidth());
}

bool  PythonQtWrapper_QGraphicsLayoutItem::ownedByLayout(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->ownedByLayout());
}

QGraphicsLayoutItem*  PythonQtWrapper_QGraphicsLayoutItem::parentLayoutItem(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->parentLayoutItem());
}

qreal  PythonQtWrapper_QGraphicsLayoutItem::preferredHeight(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->preferredHeight());
}

QSizeF  PythonQtWrapper_QGraphicsLayoutItem::preferredSize(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->preferredSize());
}

qreal  PythonQtWrapper_QGraphicsLayoutItem::preferredWidth(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->preferredWidth());
}

void PythonQtWrapper_QGraphicsLayoutItem::setGeometry(QGraphicsLayoutItem* theWrappedObject, const QRectF&  rect)
{
  ( ((PythonQtPublicPromoter_QGraphicsLayoutItem*)theWrappedObject)->promoted_setGeometry(rect));
}

void PythonQtWrapper_QGraphicsLayoutItem::setMaximumHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height)
{
  ( theWrappedObject->setMaximumHeight(height));
}

void PythonQtWrapper_QGraphicsLayoutItem::setMaximumSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size)
{
  ( theWrappedObject->setMaximumSize(size));
}

void PythonQtWrapper_QGraphicsLayoutItem::setMaximumSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h)
{
  ( theWrappedObject->setMaximumSize(w, h));
}

void PythonQtWrapper_QGraphicsLayoutItem::setMaximumWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setMaximumWidth(width));
}

void PythonQtWrapper_QGraphicsLayoutItem::setMinimumHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height)
{
  ( theWrappedObject->setMinimumHeight(height));
}

void PythonQtWrapper_QGraphicsLayoutItem::setMinimumSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size)
{
  ( theWrappedObject->setMinimumSize(size));
}

void PythonQtWrapper_QGraphicsLayoutItem::setMinimumSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h)
{
  ( theWrappedObject->setMinimumSize(w, h));
}

void PythonQtWrapper_QGraphicsLayoutItem::setMinimumWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setMinimumWidth(width));
}

void PythonQtWrapper_QGraphicsLayoutItem::setParentLayoutItem(QGraphicsLayoutItem* theWrappedObject, QGraphicsLayoutItem*  parent)
{
  ( theWrappedObject->setParentLayoutItem(parent));
}

void PythonQtWrapper_QGraphicsLayoutItem::setPreferredHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height)
{
  ( theWrappedObject->setPreferredHeight(height));
}

void PythonQtWrapper_QGraphicsLayoutItem::setPreferredSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size)
{
  ( theWrappedObject->setPreferredSize(size));
}

void PythonQtWrapper_QGraphicsLayoutItem::setPreferredSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h)
{
  ( theWrappedObject->setPreferredSize(w, h));
}

void PythonQtWrapper_QGraphicsLayoutItem::setPreferredWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setPreferredWidth(width));
}

void PythonQtWrapper_QGraphicsLayoutItem::setSizePolicy(QGraphicsLayoutItem* theWrappedObject, QSizePolicy::Policy  hPolicy, QSizePolicy::Policy  vPolicy, QSizePolicy::ControlType  controlType)
{
  ( theWrappedObject->setSizePolicy(hPolicy, vPolicy, controlType));
}

void PythonQtWrapper_QGraphicsLayoutItem::setSizePolicy(QGraphicsLayoutItem* theWrappedObject, const QSizePolicy&  policy)
{
  ( theWrappedObject->setSizePolicy(policy));
}

QSizePolicy  PythonQtWrapper_QGraphicsLayoutItem::sizePolicy(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->sizePolicy());
}

void PythonQtWrapper_QGraphicsLayoutItem::updateGeometry(QGraphicsLayoutItem* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGraphicsLayoutItem*)theWrappedObject)->promoted_updateGeometry());
}



PythonQtShell_QGraphicsLineItem::~PythonQtShell_QGraphicsLineItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsLineItem::advance(int  phase)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "advance");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&phase};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::advance(phase);
}
QRectF  PythonQtShell_QGraphicsLineItem::boundingRect() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "boundingRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QRectF"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRectF returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("boundingRect", methodInfo, result);
        } else {
          returnValue = *((QRectF*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLineItem::boundingRect();
}
bool  PythonQtShell_QGraphicsLineItem::collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "collidesWithItem");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGraphicsItem*" , "Qt::ItemSelectionMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&other, (void*)&mode};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("collidesWithItem", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLineItem::collidesWithItem(other, mode);
}
bool  PythonQtShell_QGraphicsLineItem::collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "collidesWithPath");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QPainterPath&" , "Qt::ItemSelectionMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&path, (void*)&mode};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("collidesWithPath", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLineItem::collidesWithPath(path, mode);
}
bool  PythonQtShell_QGraphicsLineItem::contains(const QPointF&  point) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contains");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QPointF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&point};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("contains", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLineItem::contains(point);
}
void PythonQtShell_QGraphicsLineItem::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::contextMenuEvent(event);
}
void PythonQtShell_QGraphicsLineItem::dragEnterEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::dragEnterEvent(event);
}
void PythonQtShell_QGraphicsLineItem::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::dragLeaveEvent(event);
}
void PythonQtShell_QGraphicsLineItem::dragMoveEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::dragMoveEvent(event);
}
void PythonQtShell_QGraphicsLineItem::dropEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::dropEvent(event);
}
QVariant  PythonQtShell_QGraphicsLineItem::extension(const QVariant&  variant) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "extension");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&variant};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("extension", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLineItem::extension(variant);
}
void PythonQtShell_QGraphicsLineItem::focusInEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::focusInEvent(event);
}
void PythonQtShell_QGraphicsLineItem::focusOutEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::focusOutEvent(event);
}
void PythonQtShell_QGraphicsLineItem::hoverEnterEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::hoverEnterEvent(event);
}
void PythonQtShell_QGraphicsLineItem::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::hoverLeaveEvent(event);
}
void PythonQtShell_QGraphicsLineItem::hoverMoveEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::hoverMoveEvent(event);
}
void PythonQtShell_QGraphicsLineItem::inputMethodEvent(QInputMethodEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QInputMethodEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::inputMethodEvent(event);
}
QVariant  PythonQtShell_QGraphicsLineItem::inputMethodQuery(Qt::InputMethodQuery  query) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&query};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("inputMethodQuery", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLineItem::inputMethodQuery(query);
}
bool  PythonQtShell_QGraphicsLineItem::isObscuredBy(const QGraphicsItem*  item) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isObscuredBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGraphicsItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&item};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isObscuredBy", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLineItem::isObscuredBy(item);
}
QVariant  PythonQtShell_QGraphicsLineItem::itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "QGraphicsItem::GraphicsItemChange" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&change, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemChange", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLineItem::itemChange(change, value);
}
void PythonQtShell_QGraphicsLineItem::keyPressEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::keyPressEvent(event);
}
void PythonQtShell_QGraphicsLineItem::keyReleaseEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::keyReleaseEvent(event);
}
void PythonQtShell_QGraphicsLineItem::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::mouseDoubleClickEvent(event);
}
void PythonQtShell_QGraphicsLineItem::mouseMoveEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::mouseMoveEvent(event);
}
void PythonQtShell_QGraphicsLineItem::mousePressEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::mousePressEvent(event);
}
void PythonQtShell_QGraphicsLineItem::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::mouseReleaseEvent(event);
}
QPainterPath  PythonQtShell_QGraphicsLineItem::opaqueArea() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "opaqueArea");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainterPath"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("opaqueArea", methodInfo, result);
        } else {
          returnValue = *((QPainterPath*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLineItem::opaqueArea();
}
void PythonQtShell_QGraphicsLineItem::paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QStyleOptionGraphicsItem*" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&painter, (void*)&option, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::paint(painter, option, widget);
}
bool  PythonQtShell_QGraphicsLineItem::sceneEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sceneEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sceneEvent", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLineItem::sceneEvent(event);
}
bool  PythonQtShell_QGraphicsLineItem::sceneEventFilter(QGraphicsItem*  watched, QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sceneEventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QGraphicsItem*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&watched, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sceneEventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLineItem::sceneEventFilter(watched, event);
}
QPainterPath  PythonQtShell_QGraphicsLineItem::shape() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "shape");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainterPath"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("shape", methodInfo, result);
        } else {
          returnValue = *((QPainterPath*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLineItem::shape();
}
int  PythonQtShell_QGraphicsLineItem::type() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "type");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("type", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLineItem::type();
}
void PythonQtShell_QGraphicsLineItem::wheelEvent(QGraphicsSceneWheelEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::wheelEvent(event);
}
QGraphicsLineItem* PythonQtWrapper_QGraphicsLineItem::new_QGraphicsLineItem(QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsLineItem(parent, scene); }

QGraphicsLineItem* PythonQtWrapper_QGraphicsLineItem::new_QGraphicsLineItem(const QLineF&  line, QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsLineItem(line, parent, scene); }

QGraphicsLineItem* PythonQtWrapper_QGraphicsLineItem::new_QGraphicsLineItem(qreal  x1, qreal  y1, qreal  x2, qreal  y2, QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsLineItem(x1, y1, x2, y2, parent, scene); }

QRectF  PythonQtWrapper_QGraphicsLineItem::boundingRect(QGraphicsLineItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->promoted_boundingRect());
}

bool  PythonQtWrapper_QGraphicsLineItem::contains(QGraphicsLineItem* theWrappedObject, const QPointF&  point) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->promoted_contains(point));
}

QVariant  PythonQtWrapper_QGraphicsLineItem::extension(QGraphicsLineItem* theWrappedObject, const QVariant&  variant) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->promoted_extension(variant));
}

bool  PythonQtWrapper_QGraphicsLineItem::isObscuredBy(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->promoted_isObscuredBy(item));
}

QLineF  PythonQtWrapper_QGraphicsLineItem::line(QGraphicsLineItem* theWrappedObject) const
{
  return ( theWrappedObject->line());
}

QPainterPath  PythonQtWrapper_QGraphicsLineItem::opaqueArea(QGraphicsLineItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->promoted_opaqueArea());
}

void PythonQtWrapper_QGraphicsLineItem::paint(QGraphicsLineItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( ((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->promoted_paint(painter, option, widget));
}

QPen  PythonQtWrapper_QGraphicsLineItem::pen(QGraphicsLineItem* theWrappedObject) const
{
  return ( theWrappedObject->pen());
}

void PythonQtWrapper_QGraphicsLineItem::setLine(QGraphicsLineItem* theWrappedObject, const QLineF&  line)
{
  ( theWrappedObject->setLine(line));
}

void PythonQtWrapper_QGraphicsLineItem::setLine(QGraphicsLineItem* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2)
{
  ( theWrappedObject->setLine(x1, y1, x2, y2));
}

void PythonQtWrapper_QGraphicsLineItem::setPen(QGraphicsLineItem* theWrappedObject, const QPen&  pen)
{
  ( theWrappedObject->setPen(pen));
}

QPainterPath  PythonQtWrapper_QGraphicsLineItem::shape(QGraphicsLineItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->promoted_shape());
}

int  PythonQtWrapper_QGraphicsLineItem::type(QGraphicsLineItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->promoted_type());
}



PythonQtShell_QGraphicsLinearLayout::~PythonQtShell_QGraphicsLinearLayout() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QGraphicsLinearLayout::count() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "count");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("count", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLinearLayout::count();
}
void PythonQtShell_QGraphicsLinearLayout::getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "getContentsMargins");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "qreal*" , "qreal*" , "qreal*" , "qreal*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&left, (void*)&top, (void*)&right, (void*)&bottom};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLinearLayout::getContentsMargins(left, top, right, bottom);
}
void PythonQtShell_QGraphicsLinearLayout::invalidate()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "invalidate");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLinearLayout::invalidate();
}
QGraphicsLayoutItem*  PythonQtShell_QGraphicsLinearLayout::itemAt(int  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QGraphicsLayoutItem*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QGraphicsLayoutItem* returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemAt", methodInfo, result);
        } else {
          returnValue = *((QGraphicsLayoutItem**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLinearLayout::itemAt(index);
}
void PythonQtShell_QGraphicsLinearLayout::removeAt(int  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "removeAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLinearLayout::removeAt(index);
}
void PythonQtShell_QGraphicsLinearLayout::updateGeometry()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateGeometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLinearLayout::updateGeometry();
}
void PythonQtShell_QGraphicsLinearLayout::widgetEvent(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "widgetEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLinearLayout::widgetEvent(e);
}
QGraphicsLinearLayout* PythonQtWrapper_QGraphicsLinearLayout::new_QGraphicsLinearLayout(QGraphicsLayoutItem*  parent)
{ 
return new PythonQtShell_QGraphicsLinearLayout(parent); }

QGraphicsLinearLayout* PythonQtWrapper_QGraphicsLinearLayout::new_QGraphicsLinearLayout(Qt::Orientation  orientation, QGraphicsLayoutItem*  parent)
{ 
return new PythonQtShell_QGraphicsLinearLayout(orientation, parent); }

void PythonQtWrapper_QGraphicsLinearLayout::addItem(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item)
{
  ( theWrappedObject->addItem(item));
}

void PythonQtWrapper_QGraphicsLinearLayout::addStretch(QGraphicsLinearLayout* theWrappedObject, int  stretch)
{
  ( theWrappedObject->addStretch(stretch));
}

Qt::Alignment  PythonQtWrapper_QGraphicsLinearLayout::alignment(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item) const
{
  return ( theWrappedObject->alignment(item));
}

int  PythonQtWrapper_QGraphicsLinearLayout::count(QGraphicsLinearLayout* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsLinearLayout*)theWrappedObject)->promoted_count());
}

void PythonQtWrapper_QGraphicsLinearLayout::dump(QGraphicsLinearLayout* theWrappedObject, int  indent) const
{
  ( theWrappedObject->dump(indent));
}

void PythonQtWrapper_QGraphicsLinearLayout::insertItem(QGraphicsLinearLayout* theWrappedObject, int  index, QGraphicsLayoutItem*  item)
{
  ( theWrappedObject->insertItem(index, item));
}

void PythonQtWrapper_QGraphicsLinearLayout::insertStretch(QGraphicsLinearLayout* theWrappedObject, int  index, int  stretch)
{
  ( theWrappedObject->insertStretch(index, stretch));
}

void PythonQtWrapper_QGraphicsLinearLayout::invalidate(QGraphicsLinearLayout* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGraphicsLinearLayout*)theWrappedObject)->promoted_invalidate());
}

QGraphicsLayoutItem*  PythonQtWrapper_QGraphicsLinearLayout::itemAt(QGraphicsLinearLayout* theWrappedObject, int  index) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsLinearLayout*)theWrappedObject)->promoted_itemAt(index));
}

qreal  PythonQtWrapper_QGraphicsLinearLayout::itemSpacing(QGraphicsLinearLayout* theWrappedObject, int  index) const
{
  return ( theWrappedObject->itemSpacing(index));
}

Qt::Orientation  PythonQtWrapper_QGraphicsLinearLayout::orientation(QGraphicsLinearLayout* theWrappedObject) const
{
  return ( theWrappedObject->orientation());
}

void PythonQtWrapper_QGraphicsLinearLayout::removeAt(QGraphicsLinearLayout* theWrappedObject, int  index)
{
  ( ((PythonQtPublicPromoter_QGraphicsLinearLayout*)theWrappedObject)->promoted_removeAt(index));
}

void PythonQtWrapper_QGraphicsLinearLayout::removeItem(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item)
{
  ( theWrappedObject->removeItem(item));
}

void PythonQtWrapper_QGraphicsLinearLayout::setAlignment(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item, Qt::Alignment  alignment)
{
  ( theWrappedObject->setAlignment(item, alignment));
}

void PythonQtWrapper_QGraphicsLinearLayout::setGeometry(QGraphicsLinearLayout* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->setGeometry(rect));
}

void PythonQtWrapper_QGraphicsLinearLayout::setItemSpacing(QGraphicsLinearLayout* theWrappedObject, int  index, qreal  spacing)
{
  ( theWrappedObject->setItemSpacing(index, spacing));
}

void PythonQtWrapper_QGraphicsLinearLayout::setOrientation(QGraphicsLinearLayout* theWrappedObject, Qt::Orientation  orientation)
{
  ( theWrappedObject->setOrientation(orientation));
}

void PythonQtWrapper_QGraphicsLinearLayout::setSpacing(QGraphicsLinearLayout* theWrappedObject, qreal  spacing)
{
  ( theWrappedObject->setSpacing(spacing));
}

void PythonQtWrapper_QGraphicsLinearLayout::setStretchFactor(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item, int  stretch)
{
  ( theWrappedObject->setStretchFactor(item, stretch));
}

QSizeF  PythonQtWrapper_QGraphicsLinearLayout::sizeHint(QGraphicsLinearLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint) const
{
  return ( theWrappedObject->sizeHint(which, constraint));
}

qreal  PythonQtWrapper_QGraphicsLinearLayout::spacing(QGraphicsLinearLayout* theWrappedObject) const
{
  return ( theWrappedObject->spacing());
}

int  PythonQtWrapper_QGraphicsLinearLayout::stretchFactor(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item) const
{
  return ( theWrappedObject->stretchFactor(item));
}



PythonQtShell_QGraphicsObject::~PythonQtShell_QGraphicsObject() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsObject::advance(int  phase)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "advance");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&phase};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::advance(phase);
}
QRectF  PythonQtShell_QGraphicsObject::boundingRect() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "boundingRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QRectF"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRectF returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("boundingRect", methodInfo, result);
        } else {
          returnValue = *((QRectF*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QRectF();
}
void PythonQtShell_QGraphicsObject::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::childEvent(arg__1);
}
bool  PythonQtShell_QGraphicsObject::collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "collidesWithItem");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGraphicsItem*" , "Qt::ItemSelectionMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&other, (void*)&mode};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("collidesWithItem", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::collidesWithItem(other, mode);
}
bool  PythonQtShell_QGraphicsObject::collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "collidesWithPath");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QPainterPath&" , "Qt::ItemSelectionMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&path, (void*)&mode};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("collidesWithPath", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::collidesWithPath(path, mode);
}
bool  PythonQtShell_QGraphicsObject::contains(const QPointF&  point) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contains");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QPointF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&point};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("contains", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::contains(point);
}
void PythonQtShell_QGraphicsObject::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::contextMenuEvent(event);
}
void PythonQtShell_QGraphicsObject::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::customEvent(arg__1);
}
void PythonQtShell_QGraphicsObject::dragEnterEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::dragEnterEvent(event);
}
void PythonQtShell_QGraphicsObject::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::dragLeaveEvent(event);
}
void PythonQtShell_QGraphicsObject::dragMoveEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::dragMoveEvent(event);
}
void PythonQtShell_QGraphicsObject::dropEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::dropEvent(event);
}
bool  PythonQtShell_QGraphicsObject::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::event(arg__1);
}
bool  PythonQtShell_QGraphicsObject::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::eventFilter(arg__1, arg__2);
}
QVariant  PythonQtShell_QGraphicsObject::extension(const QVariant&  variant) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "extension");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&variant};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("extension", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::extension(variant);
}
void PythonQtShell_QGraphicsObject::focusInEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::focusInEvent(event);
}
void PythonQtShell_QGraphicsObject::focusOutEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::focusOutEvent(event);
}
void PythonQtShell_QGraphicsObject::hoverEnterEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::hoverEnterEvent(event);
}
void PythonQtShell_QGraphicsObject::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::hoverLeaveEvent(event);
}
void PythonQtShell_QGraphicsObject::hoverMoveEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::hoverMoveEvent(event);
}
void PythonQtShell_QGraphicsObject::inputMethodEvent(QInputMethodEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QInputMethodEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::inputMethodEvent(event);
}
QVariant  PythonQtShell_QGraphicsObject::inputMethodQuery(Qt::InputMethodQuery  query) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&query};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("inputMethodQuery", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::inputMethodQuery(query);
}
bool  PythonQtShell_QGraphicsObject::isObscuredBy(const QGraphicsItem*  item) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isObscuredBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGraphicsItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&item};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isObscuredBy", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::isObscuredBy(item);
}
QVariant  PythonQtShell_QGraphicsObject::itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "QGraphicsItem::GraphicsItemChange" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&change, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemChange", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::itemChange(change, value);
}
void PythonQtShell_QGraphicsObject::keyPressEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::keyPressEvent(event);
}
void PythonQtShell_QGraphicsObject::keyReleaseEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::keyReleaseEvent(event);
}
void PythonQtShell_QGraphicsObject::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::mouseDoubleClickEvent(event);
}
void PythonQtShell_QGraphicsObject::mouseMoveEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::mouseMoveEvent(event);
}
void PythonQtShell_QGraphicsObject::mousePressEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::mousePressEvent(event);
}
void PythonQtShell_QGraphicsObject::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::mouseReleaseEvent(event);
}
QPainterPath  PythonQtShell_QGraphicsObject::opaqueArea() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "opaqueArea");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainterPath"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("opaqueArea", methodInfo, result);
        } else {
          returnValue = *((QPainterPath*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::opaqueArea();
}
void PythonQtShell_QGraphicsObject::paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QStyleOptionGraphicsItem*" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&painter, (void*)&option, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  
}
bool  PythonQtShell_QGraphicsObject::sceneEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sceneEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sceneEvent", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::sceneEvent(event);
}
bool  PythonQtShell_QGraphicsObject::sceneEventFilter(QGraphicsItem*  watched, QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sceneEventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QGraphicsItem*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&watched, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sceneEventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::sceneEventFilter(watched, event);
}
void PythonQtShell_QGraphicsObject::setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setExtension");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsItem::Extension" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&extension, (void*)&variant};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::setExtension(extension, variant);
}
QPainterPath  PythonQtShell_QGraphicsObject::shape() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "shape");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainterPath"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("shape", methodInfo, result);
        } else {
          returnValue = *((QPainterPath*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::shape();
}
bool  PythonQtShell_QGraphicsObject::supportsExtension(QGraphicsItem::Extension  extension) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "supportsExtension");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QGraphicsItem::Extension"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&extension};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("supportsExtension", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::supportsExtension(extension);
}
void PythonQtShell_QGraphicsObject::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::timerEvent(arg__1);
}
int  PythonQtShell_QGraphicsObject::type() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "type");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("type", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::type();
}
void PythonQtShell_QGraphicsObject::wheelEvent(QGraphicsSceneWheelEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::wheelEvent(event);
}
QGraphicsObject* PythonQtWrapper_QGraphicsObject::new_QGraphicsObject(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsObject(parent); }

void PythonQtWrapper_QGraphicsObject::grabGesture(QGraphicsObject* theWrappedObject, Qt::GestureType  type, Qt::GestureFlags  flags)
{
  ( theWrappedObject->grabGesture(type, flags));
}

void PythonQtWrapper_QGraphicsObject::ungrabGesture(QGraphicsObject* theWrappedObject, Qt::GestureType  type)
{
  ( theWrappedObject->ungrabGesture(type));
}

QString PythonQtWrapper_QGraphicsObject::py_toString(QGraphicsObject* obj) {
  QString result;
  QDebug d(&result);
  d << obj;
  return result;
}



PythonQtShell_QGraphicsOpacityEffect::~PythonQtShell_QGraphicsOpacityEffect() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QRectF  PythonQtShell_QGraphicsOpacityEffect::boundingRectFor(const QRectF&  sourceRect) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "boundingRectFor");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QRectF" , "const QRectF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRectF returnValue;
    void* args[2] = {NULL, (void*)&sourceRect};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("boundingRectFor", methodInfo, result);
        } else {
          returnValue = *((QRectF*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsOpacityEffect::boundingRectFor(sourceRect);
}
void PythonQtShell_QGraphicsOpacityEffect::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsOpacityEffect::childEvent(arg__1);
}
void PythonQtShell_QGraphicsOpacityEffect::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsOpacityEffect::customEvent(arg__1);
}
void PythonQtShell_QGraphicsOpacityEffect::draw(QPainter*  painter)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "draw");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&painter};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsOpacityEffect::draw(painter);
}
bool  PythonQtShell_QGraphicsOpacityEffect::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsOpacityEffect::event(arg__1);
}
bool  PythonQtShell_QGraphicsOpacityEffect::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsOpacityEffect::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QGraphicsOpacityEffect::sourceChanged(QGraphicsEffect::ChangeFlags  flags)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sourceChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsEffect::ChangeFlags"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&flags};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsOpacityEffect::sourceChanged(flags);
}
void PythonQtShell_QGraphicsOpacityEffect::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsOpacityEffect::timerEvent(arg__1);
}
QGraphicsOpacityEffect* PythonQtWrapper_QGraphicsOpacityEffect::new_QGraphicsOpacityEffect(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsOpacityEffect(parent); }

void PythonQtWrapper_QGraphicsOpacityEffect::draw(QGraphicsOpacityEffect* theWrappedObject, QPainter*  painter)
{
  ( ((PythonQtPublicPromoter_QGraphicsOpacityEffect*)theWrappedObject)->promoted_draw(painter));
}

qreal  PythonQtWrapper_QGraphicsOpacityEffect::opacity(QGraphicsOpacityEffect* theWrappedObject) const
{
  return ( theWrappedObject->opacity());
}

QBrush  PythonQtWrapper_QGraphicsOpacityEffect::opacityMask(QGraphicsOpacityEffect* theWrappedObject) const
{
  return ( theWrappedObject->opacityMask());
}



PythonQtShell_QGraphicsPathItem::~PythonQtShell_QGraphicsPathItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QGraphicsPathItem::isObscuredBy(const QGraphicsItem*  item) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isObscuredBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGraphicsItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&item};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isObscuredBy", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPathItem::isObscuredBy(item);
}
QPainterPath  PythonQtShell_QGraphicsPathItem::opaqueArea() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "opaqueArea");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainterPath"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("opaqueArea", methodInfo, result);
        } else {
          returnValue = *((QPainterPath*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPathItem::opaqueArea();
}
QGraphicsPathItem* PythonQtWrapper_QGraphicsPathItem::new_QGraphicsPathItem(QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsPathItem(parent, scene); }

QGraphicsPathItem* PythonQtWrapper_QGraphicsPathItem::new_QGraphicsPathItem(const QPainterPath&  path, QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsPathItem(path, parent, scene); }

QRectF  PythonQtWrapper_QGraphicsPathItem::boundingRect(QGraphicsPathItem* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

bool  PythonQtWrapper_QGraphicsPathItem::contains(QGraphicsPathItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->contains(point));
}

bool  PythonQtWrapper_QGraphicsPathItem::isObscuredBy(QGraphicsPathItem* theWrappedObject, const QGraphicsItem*  item) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsPathItem*)theWrappedObject)->promoted_isObscuredBy(item));
}

QPainterPath  PythonQtWrapper_QGraphicsPathItem::opaqueArea(QGraphicsPathItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsPathItem*)theWrappedObject)->promoted_opaqueArea());
}

void PythonQtWrapper_QGraphicsPathItem::paint(QGraphicsPathItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( theWrappedObject->paint(painter, option, widget));
}

QPainterPath  PythonQtWrapper_QGraphicsPathItem::path(QGraphicsPathItem* theWrappedObject) const
{
  return ( theWrappedObject->path());
}

void PythonQtWrapper_QGraphicsPathItem::setPath(QGraphicsPathItem* theWrappedObject, const QPainterPath&  path)
{
  ( theWrappedObject->setPath(path));
}

QPainterPath  PythonQtWrapper_QGraphicsPathItem::shape(QGraphicsPathItem* theWrappedObject) const
{
  return ( theWrappedObject->shape());
}

int  PythonQtWrapper_QGraphicsPathItem::type(QGraphicsPathItem* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



PythonQtShell_QGraphicsPixmapItem::~PythonQtShell_QGraphicsPixmapItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsPixmapItem::advance(int  phase)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "advance");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&phase};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::advance(phase);
}
QRectF  PythonQtShell_QGraphicsPixmapItem::boundingRect() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "boundingRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QRectF"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRectF returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("boundingRect", methodInfo, result);
        } else {
          returnValue = *((QRectF*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPixmapItem::boundingRect();
}
bool  PythonQtShell_QGraphicsPixmapItem::collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "collidesWithItem");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGraphicsItem*" , "Qt::ItemSelectionMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&other, (void*)&mode};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("collidesWithItem", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPixmapItem::collidesWithItem(other, mode);
}
bool  PythonQtShell_QGraphicsPixmapItem::collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "collidesWithPath");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QPainterPath&" , "Qt::ItemSelectionMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&path, (void*)&mode};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("collidesWithPath", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPixmapItem::collidesWithPath(path, mode);
}
bool  PythonQtShell_QGraphicsPixmapItem::contains(const QPointF&  point) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contains");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QPointF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&point};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("contains", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPixmapItem::contains(point);
}
void PythonQtShell_QGraphicsPixmapItem::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::contextMenuEvent(event);
}
void PythonQtShell_QGraphicsPixmapItem::dragEnterEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::dragEnterEvent(event);
}
void PythonQtShell_QGraphicsPixmapItem::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::dragLeaveEvent(event);
}
void PythonQtShell_QGraphicsPixmapItem::dragMoveEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::dragMoveEvent(event);
}
void PythonQtShell_QGraphicsPixmapItem::dropEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::dropEvent(event);
}
QVariant  PythonQtShell_QGraphicsPixmapItem::extension(const QVariant&  variant) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "extension");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&variant};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("extension", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPixmapItem::extension(variant);
}
void PythonQtShell_QGraphicsPixmapItem::focusInEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::focusInEvent(event);
}
void PythonQtShell_QGraphicsPixmapItem::focusOutEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::focusOutEvent(event);
}
void PythonQtShell_QGraphicsPixmapItem::hoverEnterEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::hoverEnterEvent(event);
}
void PythonQtShell_QGraphicsPixmapItem::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::hoverLeaveEvent(event);
}
void PythonQtShell_QGraphicsPixmapItem::hoverMoveEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::hoverMoveEvent(event);
}
void PythonQtShell_QGraphicsPixmapItem::inputMethodEvent(QInputMethodEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QInputMethodEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::inputMethodEvent(event);
}
QVariant  PythonQtShell_QGraphicsPixmapItem::inputMethodQuery(Qt::InputMethodQuery  query) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&query};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("inputMethodQuery", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPixmapItem::inputMethodQuery(query);
}
bool  PythonQtShell_QGraphicsPixmapItem::isObscuredBy(const QGraphicsItem*  item) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isObscuredBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGraphicsItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&item};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isObscuredBy", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPixmapItem::isObscuredBy(item);
}
QVariant  PythonQtShell_QGraphicsPixmapItem::itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "QGraphicsItem::GraphicsItemChange" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&change, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemChange", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPixmapItem::itemChange(change, value);
}
void PythonQtShell_QGraphicsPixmapItem::keyPressEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::keyPressEvent(event);
}
void PythonQtShell_QGraphicsPixmapItem::keyReleaseEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::keyReleaseEvent(event);
}
void PythonQtShell_QGraphicsPixmapItem::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::mouseDoubleClickEvent(event);
}
void PythonQtShell_QGraphicsPixmapItem::mouseMoveEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::mouseMoveEvent(event);
}
void PythonQtShell_QGraphicsPixmapItem::mousePressEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::mousePressEvent(event);
}
void PythonQtShell_QGraphicsPixmapItem::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::mouseReleaseEvent(event);
}
QPainterPath  PythonQtShell_QGraphicsPixmapItem::opaqueArea() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "opaqueArea");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainterPath"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("opaqueArea", methodInfo, result);
        } else {
          returnValue = *((QPainterPath*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPixmapItem::opaqueArea();
}
void PythonQtShell_QGraphicsPixmapItem::paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QStyleOptionGraphicsItem*" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&painter, (void*)&option, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::paint(painter, option, widget);
}
bool  PythonQtShell_QGraphicsPixmapItem::sceneEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sceneEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sceneEvent", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPixmapItem::sceneEvent(event);
}
bool  PythonQtShell_QGraphicsPixmapItem::sceneEventFilter(QGraphicsItem*  watched, QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sceneEventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QGraphicsItem*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&watched, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sceneEventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPixmapItem::sceneEventFilter(watched, event);
}
QPainterPath  PythonQtShell_QGraphicsPixmapItem::shape() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "shape");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainterPath"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("shape", methodInfo, result);
        } else {
          returnValue = *((QPainterPath*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPixmapItem::shape();
}
int  PythonQtShell_QGraphicsPixmapItem::type() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "type");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("type", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPixmapItem::type();
}
void PythonQtShell_QGraphicsPixmapItem::wheelEvent(QGraphicsSceneWheelEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::wheelEvent(event);
}
QGraphicsPixmapItem* PythonQtWrapper_QGraphicsPixmapItem::new_QGraphicsPixmapItem(QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsPixmapItem(parent, scene); }

QGraphicsPixmapItem* PythonQtWrapper_QGraphicsPixmapItem::new_QGraphicsPixmapItem(const QPixmap&  pixmap, QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsPixmapItem(pixmap, parent, scene); }

QRectF  PythonQtWrapper_QGraphicsPixmapItem::boundingRect(QGraphicsPixmapItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->promoted_boundingRect());
}

bool  PythonQtWrapper_QGraphicsPixmapItem::contains(QGraphicsPixmapItem* theWrappedObject, const QPointF&  point) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->promoted_contains(point));
}

QVariant  PythonQtWrapper_QGraphicsPixmapItem::extension(QGraphicsPixmapItem* theWrappedObject, const QVariant&  variant) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->promoted_extension(variant));
}

bool  PythonQtWrapper_QGraphicsPixmapItem::isObscuredBy(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->promoted_isObscuredBy(item));
}

QPointF  PythonQtWrapper_QGraphicsPixmapItem::offset(QGraphicsPixmapItem* theWrappedObject) const
{
  return ( theWrappedObject->offset());
}

QPainterPath  PythonQtWrapper_QGraphicsPixmapItem::opaqueArea(QGraphicsPixmapItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->promoted_opaqueArea());
}

void PythonQtWrapper_QGraphicsPixmapItem::paint(QGraphicsPixmapItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( ((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->promoted_paint(painter, option, widget));
}

QPixmap  PythonQtWrapper_QGraphicsPixmapItem::pixmap(QGraphicsPixmapItem* theWrappedObject) const
{
  return ( theWrappedObject->pixmap());
}

void PythonQtWrapper_QGraphicsPixmapItem::setOffset(QGraphicsPixmapItem* theWrappedObject, const QPointF&  offset)
{
  ( theWrappedObject->setOffset(offset));
}

void PythonQtWrapper_QGraphicsPixmapItem::setOffset(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y)
{
  ( theWrappedObject->setOffset(x, y));
}

void PythonQtWrapper_QGraphicsPixmapItem::setPixmap(QGraphicsPixmapItem* theWrappedObject, const QPixmap&  pixmap)
{
  ( theWrappedObject->setPixmap(pixmap));
}

void PythonQtWrapper_QGraphicsPixmapItem::setShapeMode(QGraphicsPixmapItem* theWrappedObject, QGraphicsPixmapItem::ShapeMode  mode)
{
  ( theWrappedObject->setShapeMode(mode));
}

void PythonQtWrapper_QGraphicsPixmapItem::setTransformationMode(QGraphicsPixmapItem* theWrappedObject, Qt::TransformationMode  mode)
{
  ( theWrappedObject->setTransformationMode(mode));
}

QPainterPath  PythonQtWrapper_QGraphicsPixmapItem::shape(QGraphicsPixmapItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->promoted_shape());
}

QGraphicsPixmapItem::ShapeMode  PythonQtWrapper_QGraphicsPixmapItem::shapeMode(QGraphicsPixmapItem* theWrappedObject) const
{
  return ( theWrappedObject->shapeMode());
}

Qt::TransformationMode  PythonQtWrapper_QGraphicsPixmapItem::transformationMode(QGraphicsPixmapItem* theWrappedObject) const
{
  return ( theWrappedObject->transformationMode());
}

int  PythonQtWrapper_QGraphicsPixmapItem::type(QGraphicsPixmapItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->promoted_type());
}



PythonQtShell_QGraphicsPolygonItem::~PythonQtShell_QGraphicsPolygonItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QGraphicsPolygonItem::isObscuredBy(const QGraphicsItem*  item) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isObscuredBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGraphicsItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&item};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isObscuredBy", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPolygonItem::isObscuredBy(item);
}
QPainterPath  PythonQtShell_QGraphicsPolygonItem::opaqueArea() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "opaqueArea");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainterPath"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("opaqueArea", methodInfo, result);
        } else {
          returnValue = *((QPainterPath*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPolygonItem::opaqueArea();
}
QGraphicsPolygonItem* PythonQtWrapper_QGraphicsPolygonItem::new_QGraphicsPolygonItem(QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsPolygonItem(parent, scene); }

QGraphicsPolygonItem* PythonQtWrapper_QGraphicsPolygonItem::new_QGraphicsPolygonItem(const QPolygonF&  polygon, QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsPolygonItem(polygon, parent, scene); }

QRectF  PythonQtWrapper_QGraphicsPolygonItem::boundingRect(QGraphicsPolygonItem* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

bool  PythonQtWrapper_QGraphicsPolygonItem::contains(QGraphicsPolygonItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->contains(point));
}

Qt::FillRule  PythonQtWrapper_QGraphicsPolygonItem::fillRule(QGraphicsPolygonItem* theWrappedObject) const
{
  return ( theWrappedObject->fillRule());
}

bool  PythonQtWrapper_QGraphicsPolygonItem::isObscuredBy(QGraphicsPolygonItem* theWrappedObject, const QGraphicsItem*  item) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->promoted_isObscuredBy(item));
}

QPainterPath  PythonQtWrapper_QGraphicsPolygonItem::opaqueArea(QGraphicsPolygonItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->promoted_opaqueArea());
}

void PythonQtWrapper_QGraphicsPolygonItem::paint(QGraphicsPolygonItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( theWrappedObject->paint(painter, option, widget));
}

QPolygonF  PythonQtWrapper_QGraphicsPolygonItem::polygon(QGraphicsPolygonItem* theWrappedObject) const
{
  return ( theWrappedObject->polygon());
}

void PythonQtWrapper_QGraphicsPolygonItem::setFillRule(QGraphicsPolygonItem* theWrappedObject, Qt::FillRule  rule)
{
  ( theWrappedObject->setFillRule(rule));
}

void PythonQtWrapper_QGraphicsPolygonItem::setPolygon(QGraphicsPolygonItem* theWrappedObject, const QPolygonF&  polygon)
{
  ( theWrappedObject->setPolygon(polygon));
}

QPainterPath  PythonQtWrapper_QGraphicsPolygonItem::shape(QGraphicsPolygonItem* theWrappedObject) const
{
  return ( theWrappedObject->shape());
}

int  PythonQtWrapper_QGraphicsPolygonItem::type(QGraphicsPolygonItem* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



PythonQtShell_QGraphicsProxyWidget::~PythonQtShell_QGraphicsProxyWidget() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsProxyWidget::changeEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::changeEvent(event);
}
void PythonQtShell_QGraphicsProxyWidget::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::childEvent(arg__1);
}
void PythonQtShell_QGraphicsProxyWidget::closeEvent(QCloseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QCloseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::closeEvent(event);
}
void PythonQtShell_QGraphicsProxyWidget::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::customEvent(arg__1);
}
bool  PythonQtShell_QGraphicsProxyWidget::event(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsProxyWidget::event(event);
}
bool  PythonQtShell_QGraphicsProxyWidget::eventFilter(QObject*  object, QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&object, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsProxyWidget::eventFilter(object, event);
}
bool  PythonQtShell_QGraphicsProxyWidget::focusNextPrevChild(bool  next)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusNextPrevChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&next};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("focusNextPrevChild", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsProxyWidget::focusNextPrevChild(next);
}
void PythonQtShell_QGraphicsProxyWidget::getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "getContentsMargins");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "qreal*" , "qreal*" , "qreal*" , "qreal*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&left, (void*)&top, (void*)&right, (void*)&bottom};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::getContentsMargins(left, top, right, bottom);
}
void PythonQtShell_QGraphicsProxyWidget::grabKeyboardEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "grabKeyboardEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::grabKeyboardEvent(event);
}
void PythonQtShell_QGraphicsProxyWidget::grabMouseEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "grabMouseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::grabMouseEvent(event);
}
void PythonQtShell_QGraphicsProxyWidget::hideEvent(QHideEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QHideEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::hideEvent(event);
}
void PythonQtShell_QGraphicsProxyWidget::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::hoverLeaveEvent(event);
}
void PythonQtShell_QGraphicsProxyWidget::hoverMoveEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::hoverMoveEvent(event);
}
void PythonQtShell_QGraphicsProxyWidget::initStyleOption(QStyleOption*  option) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "initStyleOption");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QStyleOption*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&option};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::initStyleOption(option);
}
void PythonQtShell_QGraphicsProxyWidget::moveEvent(QGraphicsSceneMoveEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::moveEvent(event);
}
void PythonQtShell_QGraphicsProxyWidget::paintWindowFrame(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintWindowFrame");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QStyleOptionGraphicsItem*" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&painter, (void*)&option, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::paintWindowFrame(painter, option, widget);
}
void PythonQtShell_QGraphicsProxyWidget::polishEvent()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "polishEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::polishEvent();
}
QVariant  PythonQtShell_QGraphicsProxyWidget::propertyChange(const QString&  propertyName, const QVariant&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "propertyChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "const QString&" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&propertyName, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("propertyChange", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsProxyWidget::propertyChange(propertyName, value);
}
void PythonQtShell_QGraphicsProxyWidget::resizeEvent(QGraphicsSceneResizeEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneResizeEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::resizeEvent(event);
}
void PythonQtShell_QGraphicsProxyWidget::setGeometry(const QRectF&  rect)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setGeometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QRectF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&rect};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::setGeometry(rect);
}
void PythonQtShell_QGraphicsProxyWidget::showEvent(QShowEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QShowEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::showEvent(event);
}
QSizeF  PythonQtShell_QGraphicsProxyWidget::sizeHint(Qt::SizeHint  which, const QSizeF&  constraint) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sizeHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSizeF" , "Qt::SizeHint" , "const QSizeF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QSizeF returnValue;
    void* args[3] = {NULL, (void*)&which, (void*)&constraint};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sizeHint", methodInfo, result);
        } else {
          returnValue = *((QSizeF*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsProxyWidget::sizeHint(which, constraint);
}
void PythonQtShell_QGraphicsProxyWidget::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::timerEvent(arg__1);
}
void PythonQtShell_QGraphicsProxyWidget::ungrabKeyboardEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "ungrabKeyboardEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::ungrabKeyboardEvent(event);
}
void PythonQtShell_QGraphicsProxyWidget::ungrabMouseEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "ungrabMouseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::ungrabMouseEvent(event);
}
void PythonQtShell_QGraphicsProxyWidget::updateGeometry()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateGeometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::updateGeometry();
}
bool  PythonQtShell_QGraphicsProxyWidget::windowFrameEvent(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "windowFrameEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("windowFrameEvent", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsProxyWidget::windowFrameEvent(e);
}
Qt::WindowFrameSection  PythonQtShell_QGraphicsProxyWidget::windowFrameSectionAt(const QPointF&  pos) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "windowFrameSectionAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"Qt::WindowFrameSection" , "const QPointF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      Qt::WindowFrameSection returnValue;
    void* args[2] = {NULL, (void*)&pos};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("windowFrameSectionAt", methodInfo, result);
        } else {
          returnValue = *((Qt::WindowFrameSection*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsProxyWidget::windowFrameSectionAt(pos);
}
QGraphicsProxyWidget* PythonQtWrapper_QGraphicsProxyWidget::new_QGraphicsProxyWidget(QGraphicsItem*  parent, Qt::WindowFlags  wFlags)
{ 
return new PythonQtShell_QGraphicsProxyWidget(parent, wFlags); }

QGraphicsProxyWidget*  PythonQtWrapper_QGraphicsProxyWidget::createProxyForChildWidget(QGraphicsProxyWidget* theWrappedObject, QWidget*  child)
{
  return ( theWrappedObject->createProxyForChildWidget(child));
}

bool  PythonQtWrapper_QGraphicsProxyWidget::event(QGraphicsProxyWidget* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_event(event));
}

bool  PythonQtWrapper_QGraphicsProxyWidget::eventFilter(QGraphicsProxyWidget* theWrappedObject, QObject*  object, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_eventFilter(object, event));
}

bool  PythonQtWrapper_QGraphicsProxyWidget::focusNextPrevChild(QGraphicsProxyWidget* theWrappedObject, bool  next)
{
  return ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_focusNextPrevChild(next));
}

void PythonQtWrapper_QGraphicsProxyWidget::grabMouseEvent(QGraphicsProxyWidget* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_grabMouseEvent(event));
}

void PythonQtWrapper_QGraphicsProxyWidget::hideEvent(QGraphicsProxyWidget* theWrappedObject, QHideEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_hideEvent(event));
}

void PythonQtWrapper_QGraphicsProxyWidget::hoverLeaveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_hoverLeaveEvent(event));
}

void PythonQtWrapper_QGraphicsProxyWidget::hoverMoveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_hoverMoveEvent(event));
}

void PythonQtWrapper_QGraphicsProxyWidget::paint(QGraphicsProxyWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( theWrappedObject->paint(painter, option, widget));
}

void PythonQtWrapper_QGraphicsProxyWidget::resizeEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneResizeEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_resizeEvent(event));
}

void PythonQtWrapper_QGraphicsProxyWidget::setGeometry(QGraphicsProxyWidget* theWrappedObject, const QRectF&  rect)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_setGeometry(rect));
}

void PythonQtWrapper_QGraphicsProxyWidget::setWidget(QGraphicsProxyWidget* theWrappedObject, QWidget*  widget)
{
  ( theWrappedObject->setWidget(widget));
}

void PythonQtWrapper_QGraphicsProxyWidget::showEvent(QGraphicsProxyWidget* theWrappedObject, QShowEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_showEvent(event));
}

QSizeF  PythonQtWrapper_QGraphicsProxyWidget::sizeHint(QGraphicsProxyWidget* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_sizeHint(which, constraint));
}

QRectF  PythonQtWrapper_QGraphicsProxyWidget::subWidgetRect(QGraphicsProxyWidget* theWrappedObject, const QWidget*  widget) const
{
  return ( theWrappedObject->subWidgetRect(widget));
}

int  PythonQtWrapper_QGraphicsProxyWidget::type(QGraphicsProxyWidget* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

void PythonQtWrapper_QGraphicsProxyWidget::ungrabMouseEvent(QGraphicsProxyWidget* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_ungrabMouseEvent(event));
}

QWidget*  PythonQtWrapper_QGraphicsProxyWidget::widget(QGraphicsProxyWidget* theWrappedObject) const
{
  return ( theWrappedObject->widget());
}



PythonQtShell_QGraphicsRectItem::~PythonQtShell_QGraphicsRectItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QGraphicsRectItem::isObscuredBy(const QGraphicsItem*  item) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isObscuredBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGraphicsItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&item};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isObscuredBy", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsRectItem::isObscuredBy(item);
}
QPainterPath  PythonQtShell_QGraphicsRectItem::opaqueArea() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "opaqueArea");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainterPath"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("opaqueArea", methodInfo, result);
        } else {
          returnValue = *((QPainterPath*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsRectItem::opaqueArea();
}
QGraphicsRectItem* PythonQtWrapper_QGraphicsRectItem::new_QGraphicsRectItem(QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsRectItem(parent, scene); }

QGraphicsRectItem* PythonQtWrapper_QGraphicsRectItem::new_QGraphicsRectItem(const QRectF&  rect, QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsRectItem(rect, parent, scene); }

QGraphicsRectItem* PythonQtWrapper_QGraphicsRectItem::new_QGraphicsRectItem(qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsRectItem(x, y, w, h, parent, scene); }

QRectF  PythonQtWrapper_QGraphicsRectItem::boundingRect(QGraphicsRectItem* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

bool  PythonQtWrapper_QGraphicsRectItem::contains(QGraphicsRectItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->contains(point));
}

bool  PythonQtWrapper_QGraphicsRectItem::isObscuredBy(QGraphicsRectItem* theWrappedObject, const QGraphicsItem*  item) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsRectItem*)theWrappedObject)->promoted_isObscuredBy(item));
}

QPainterPath  PythonQtWrapper_QGraphicsRectItem::opaqueArea(QGraphicsRectItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsRectItem*)theWrappedObject)->promoted_opaqueArea());
}

void PythonQtWrapper_QGraphicsRectItem::paint(QGraphicsRectItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( theWrappedObject->paint(painter, option, widget));
}

QRectF  PythonQtWrapper_QGraphicsRectItem::rect(QGraphicsRectItem* theWrappedObject) const
{
  return ( theWrappedObject->rect());
}

void PythonQtWrapper_QGraphicsRectItem::setRect(QGraphicsRectItem* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->setRect(rect));
}

void PythonQtWrapper_QGraphicsRectItem::setRect(QGraphicsRectItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
  ( theWrappedObject->setRect(x, y, w, h));
}

QPainterPath  PythonQtWrapper_QGraphicsRectItem::shape(QGraphicsRectItem* theWrappedObject) const
{
  return ( theWrappedObject->shape());
}

int  PythonQtWrapper_QGraphicsRectItem::type(QGraphicsRectItem* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



PythonQtShell_QGraphicsRotation::~PythonQtShell_QGraphicsRotation() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsRotation::applyTo(QMatrix4x4*  matrix) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "applyTo");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMatrix4x4*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&matrix};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsRotation::applyTo(matrix);
}
void PythonQtShell_QGraphicsRotation::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsRotation::childEvent(arg__1);
}
void PythonQtShell_QGraphicsRotation::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsRotation::customEvent(arg__1);
}
bool  PythonQtShell_QGraphicsRotation::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsRotation::event(arg__1);
}
bool  PythonQtShell_QGraphicsRotation::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsRotation::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QGraphicsRotation::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsRotation::timerEvent(arg__1);
}
QGraphicsRotation* PythonQtWrapper_QGraphicsRotation::new_QGraphicsRotation(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsRotation(parent); }

qreal  PythonQtWrapper_QGraphicsRotation::angle(QGraphicsRotation* theWrappedObject) const
{
  return ( theWrappedObject->angle());
}

void PythonQtWrapper_QGraphicsRotation::applyTo(QGraphicsRotation* theWrappedObject, QMatrix4x4*  matrix) const
{
  ( ((PythonQtPublicPromoter_QGraphicsRotation*)theWrappedObject)->promoted_applyTo(matrix));
}

QVector3D  PythonQtWrapper_QGraphicsRotation::axis(QGraphicsRotation* theWrappedObject) const
{
  return ( theWrappedObject->axis());
}

QVector3D  PythonQtWrapper_QGraphicsRotation::origin(QGraphicsRotation* theWrappedObject) const
{
  return ( theWrappedObject->origin());
}

void PythonQtWrapper_QGraphicsRotation::setAngle(QGraphicsRotation* theWrappedObject, qreal  arg__1)
{
  ( theWrappedObject->setAngle(arg__1));
}

void PythonQtWrapper_QGraphicsRotation::setAxis(QGraphicsRotation* theWrappedObject, Qt::Axis  axis)
{
  ( theWrappedObject->setAxis(axis));
}

void PythonQtWrapper_QGraphicsRotation::setAxis(QGraphicsRotation* theWrappedObject, const QVector3D&  axis)
{
  ( theWrappedObject->setAxis(axis));
}

void PythonQtWrapper_QGraphicsRotation::setOrigin(QGraphicsRotation* theWrappedObject, const QVector3D&  point)
{
  ( theWrappedObject->setOrigin(point));
}



PythonQtShell_QGraphicsScale::~PythonQtShell_QGraphicsScale() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsScale::applyTo(QMatrix4x4*  matrix) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "applyTo");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMatrix4x4*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&matrix};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScale::applyTo(matrix);
}
void PythonQtShell_QGraphicsScale::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScale::childEvent(arg__1);
}
void PythonQtShell_QGraphicsScale::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScale::customEvent(arg__1);
}
bool  PythonQtShell_QGraphicsScale::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsScale::event(arg__1);
}
bool  PythonQtShell_QGraphicsScale::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsScale::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QGraphicsScale::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScale::timerEvent(arg__1);
}
QGraphicsScale* PythonQtWrapper_QGraphicsScale::new_QGraphicsScale(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsScale(parent); }

void PythonQtWrapper_QGraphicsScale::applyTo(QGraphicsScale* theWrappedObject, QMatrix4x4*  matrix) const
{
  ( ((PythonQtPublicPromoter_QGraphicsScale*)theWrappedObject)->promoted_applyTo(matrix));
}

QVector3D  PythonQtWrapper_QGraphicsScale::origin(QGraphicsScale* theWrappedObject) const
{
  return ( theWrappedObject->origin());
}

void PythonQtWrapper_QGraphicsScale::setOrigin(QGraphicsScale* theWrappedObject, const QVector3D&  point)
{
  ( theWrappedObject->setOrigin(point));
}

void PythonQtWrapper_QGraphicsScale::setXScale(QGraphicsScale* theWrappedObject, qreal  arg__1)
{
  ( theWrappedObject->setXScale(arg__1));
}

void PythonQtWrapper_QGraphicsScale::setYScale(QGraphicsScale* theWrappedObject, qreal  arg__1)
{
  ( theWrappedObject->setYScale(arg__1));
}

void PythonQtWrapper_QGraphicsScale::setZScale(QGraphicsScale* theWrappedObject, qreal  arg__1)
{
  ( theWrappedObject->setZScale(arg__1));
}

qreal  PythonQtWrapper_QGraphicsScale::xScale(QGraphicsScale* theWrappedObject) const
{
  return ( theWrappedObject->xScale());
}

qreal  PythonQtWrapper_QGraphicsScale::yScale(QGraphicsScale* theWrappedObject) const
{
  return ( theWrappedObject->yScale());
}

qreal  PythonQtWrapper_QGraphicsScale::zScale(QGraphicsScale* theWrappedObject) const
{
  return ( theWrappedObject->zScale());
}



PythonQtShell_QGraphicsScene::~PythonQtShell_QGraphicsScene() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsScene::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::childEvent(arg__1);
}
void PythonQtShell_QGraphicsScene::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::contextMenuEvent(event);
}
void PythonQtShell_QGraphicsScene::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::customEvent(arg__1);
}
void PythonQtShell_QGraphicsScene::dragEnterEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::dragEnterEvent(event);
}
void PythonQtShell_QGraphicsScene::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::dragLeaveEvent(event);
}
void PythonQtShell_QGraphicsScene::dragMoveEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::dragMoveEvent(event);
}
void PythonQtShell_QGraphicsScene::drawBackground(QPainter*  painter, const QRectF&  rect)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawBackground");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QRectF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&painter, (void*)&rect};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::drawBackground(painter, rect);
}
void PythonQtShell_QGraphicsScene::drawForeground(QPainter*  painter, const QRectF&  rect)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawForeground");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QRectF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&painter, (void*)&rect};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::drawForeground(painter, rect);
}
void PythonQtShell_QGraphicsScene::drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawItems");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "int" , "QGraphicsItem**" , "const QStyleOptionGraphicsItem*" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
    void* args[6] = {NULL, (void*)&painter, (void*)&numItems, (void*)&items, (void*)&options, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::drawItems(painter, numItems, items, options, widget);
}
void PythonQtShell_QGraphicsScene::dropEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::dropEvent(event);
}
bool  PythonQtShell_QGraphicsScene::event(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsScene::event(event);
}
bool  PythonQtShell_QGraphicsScene::eventFilter(QObject*  watched, QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&watched, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsScene::eventFilter(watched, event);
}
void PythonQtShell_QGraphicsScene::focusInEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::focusInEvent(event);
}
void PythonQtShell_QGraphicsScene::focusOutEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::focusOutEvent(event);
}
void PythonQtShell_QGraphicsScene::helpEvent(QGraphicsSceneHelpEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "helpEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHelpEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::helpEvent(event);
}
void PythonQtShell_QGraphicsScene::inputMethodEvent(QInputMethodEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QInputMethodEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::inputMethodEvent(event);
}
QVariant  PythonQtShell_QGraphicsScene::inputMethodQuery(Qt::InputMethodQuery  query) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&query};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("inputMethodQuery", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsScene::inputMethodQuery(query);
}
void PythonQtShell_QGraphicsScene::keyPressEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::keyPressEvent(event);
}
void PythonQtShell_QGraphicsScene::keyReleaseEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::keyReleaseEvent(event);
}
void PythonQtShell_QGraphicsScene::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::mouseDoubleClickEvent(event);
}
void PythonQtShell_QGraphicsScene::mouseMoveEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::mouseMoveEvent(event);
}
void PythonQtShell_QGraphicsScene::mousePressEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::mousePressEvent(event);
}
void PythonQtShell_QGraphicsScene::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::mouseReleaseEvent(event);
}
void PythonQtShell_QGraphicsScene::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::timerEvent(arg__1);
}
void PythonQtShell_QGraphicsScene::wheelEvent(QGraphicsSceneWheelEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::wheelEvent(event);
}
QGraphicsScene* PythonQtWrapper_QGraphicsScene::new_QGraphicsScene(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsScene(parent); }

QGraphicsScene* PythonQtWrapper_QGraphicsScene::new_QGraphicsScene(const QRectF&  sceneRect, QObject*  parent)
{ 
return new PythonQtShell_QGraphicsScene(sceneRect, parent); }

QGraphicsScene* PythonQtWrapper_QGraphicsScene::new_QGraphicsScene(qreal  x, qreal  y, qreal  width, qreal  height, QObject*  parent)
{ 
return new PythonQtShell_QGraphicsScene(x, y, width, height, parent); }

QGraphicsItem*  PythonQtWrapper_QGraphicsScene::activePanel(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->activePanel());
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsScene::activeWindow(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->activeWindow());
}

QGraphicsEllipseItem*  PythonQtWrapper_QGraphicsScene::addEllipse(QGraphicsScene* theWrappedObject, const QRectF&  rect, const QPen&  pen, const QBrush&  brush)
{
  return ( theWrappedObject->addEllipse(rect, pen, brush));
}

QGraphicsEllipseItem*  PythonQtWrapper_QGraphicsScene::addEllipse(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, const QPen&  pen, const QBrush&  brush)
{
  return ( theWrappedObject->addEllipse(x, y, w, h, pen, brush));
}

void PythonQtWrapper_QGraphicsScene::addItem(QGraphicsScene* theWrappedObject, QGraphicsItem*  item)
{
  ( theWrappedObject->addItem(item));
}

QGraphicsLineItem*  PythonQtWrapper_QGraphicsScene::addLine(QGraphicsScene* theWrappedObject, const QLineF&  line, const QPen&  pen)
{
  return ( theWrappedObject->addLine(line, pen));
}

QGraphicsLineItem*  PythonQtWrapper_QGraphicsScene::addLine(QGraphicsScene* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2, const QPen&  pen)
{
  return ( theWrappedObject->addLine(x1, y1, x2, y2, pen));
}

QGraphicsPathItem*  PythonQtWrapper_QGraphicsScene::addPath(QGraphicsScene* theWrappedObject, const QPainterPath&  path, const QPen&  pen, const QBrush&  brush)
{
  return ( theWrappedObject->addPath(path, pen, brush));
}

QGraphicsPixmapItem*  PythonQtWrapper_QGraphicsScene::addPixmap(QGraphicsScene* theWrappedObject, const QPixmap&  pixmap)
{
  return ( theWrappedObject->addPixmap(pixmap));
}

QGraphicsPolygonItem*  PythonQtWrapper_QGraphicsScene::addPolygon(QGraphicsScene* theWrappedObject, const QPolygonF&  polygon, const QPen&  pen, const QBrush&  brush)
{
  return ( theWrappedObject->addPolygon(polygon, pen, brush));
}

QGraphicsRectItem*  PythonQtWrapper_QGraphicsScene::addRect(QGraphicsScene* theWrappedObject, const QRectF&  rect, const QPen&  pen, const QBrush&  brush)
{
  return ( theWrappedObject->addRect(rect, pen, brush));
}

QGraphicsRectItem*  PythonQtWrapper_QGraphicsScene::addRect(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, const QPen&  pen, const QBrush&  brush)
{
  return ( theWrappedObject->addRect(x, y, w, h, pen, brush));
}

QGraphicsSimpleTextItem*  PythonQtWrapper_QGraphicsScene::addSimpleText(QGraphicsScene* theWrappedObject, const QString&  text, const QFont&  font)
{
  return ( theWrappedObject->addSimpleText(text, font));
}

QGraphicsTextItem*  PythonQtWrapper_QGraphicsScene::addText(QGraphicsScene* theWrappedObject, const QString&  text, const QFont&  font)
{
  return ( theWrappedObject->addText(text, font));
}

QGraphicsProxyWidget*  PythonQtWrapper_QGraphicsScene::addWidget(QGraphicsScene* theWrappedObject, QWidget*  widget, Qt::WindowFlags  wFlags)
{
  return ( theWrappedObject->addWidget(widget, wFlags));
}

QBrush  PythonQtWrapper_QGraphicsScene::backgroundBrush(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->backgroundBrush());
}

int  PythonQtWrapper_QGraphicsScene::bspTreeDepth(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->bspTreeDepth());
}

void PythonQtWrapper_QGraphicsScene::clearFocus(QGraphicsScene* theWrappedObject)
{
  ( theWrappedObject->clearFocus());
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::collidingItems(QGraphicsScene* theWrappedObject, const QGraphicsItem*  item, Qt::ItemSelectionMode  mode) const
{
  return ( theWrappedObject->collidingItems(item, mode));
}

void PythonQtWrapper_QGraphicsScene::contextMenuEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneContextMenuEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_contextMenuEvent(event));
}

QGraphicsItemGroup*  PythonQtWrapper_QGraphicsScene::createItemGroup(QGraphicsScene* theWrappedObject, const QList<QGraphicsItem* >&  items)
{
  return ( theWrappedObject->createItemGroup(items));
}

void PythonQtWrapper_QGraphicsScene::destroyItemGroup(QGraphicsScene* theWrappedObject, QGraphicsItemGroup*  group)
{
  ( theWrappedObject->destroyItemGroup(group));
}

void PythonQtWrapper_QGraphicsScene::dragEnterEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_dragEnterEvent(event));
}

void PythonQtWrapper_QGraphicsScene::dragLeaveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_dragLeaveEvent(event));
}

void PythonQtWrapper_QGraphicsScene::dragMoveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_dragMoveEvent(event));
}

void PythonQtWrapper_QGraphicsScene::drawBackground(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  rect)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_drawBackground(painter, rect));
}

void PythonQtWrapper_QGraphicsScene::drawForeground(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  rect)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_drawForeground(painter, rect));
}

void PythonQtWrapper_QGraphicsScene::drawItems(QGraphicsScene* theWrappedObject, QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_drawItems(painter, numItems, items, options, widget));
}

void PythonQtWrapper_QGraphicsScene::dropEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_dropEvent(event));
}

bool  PythonQtWrapper_QGraphicsScene::event(QGraphicsScene* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_event(event));
}

bool  PythonQtWrapper_QGraphicsScene::eventFilter(QGraphicsScene* theWrappedObject, QObject*  watched, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_eventFilter(watched, event));
}

void PythonQtWrapper_QGraphicsScene::focusInEvent(QGraphicsScene* theWrappedObject, QFocusEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_focusInEvent(event));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsScene::focusItem(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->focusItem());
}

void PythonQtWrapper_QGraphicsScene::focusOutEvent(QGraphicsScene* theWrappedObject, QFocusEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_focusOutEvent(event));
}

QFont  PythonQtWrapper_QGraphicsScene::font(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

QBrush  PythonQtWrapper_QGraphicsScene::foregroundBrush(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->foregroundBrush());
}

bool  PythonQtWrapper_QGraphicsScene::hasFocus(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->hasFocus());
}

qreal  PythonQtWrapper_QGraphicsScene::height(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

void PythonQtWrapper_QGraphicsScene::helpEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneHelpEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_helpEvent(event));
}

void PythonQtWrapper_QGraphicsScene::inputMethodEvent(QGraphicsScene* theWrappedObject, QInputMethodEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_inputMethodEvent(event));
}

QVariant  PythonQtWrapper_QGraphicsScene::inputMethodQuery(QGraphicsScene* theWrappedObject, Qt::InputMethodQuery  query) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_inputMethodQuery(query));
}

void PythonQtWrapper_QGraphicsScene::invalidate(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsScene::SceneLayers  layers)
{
  ( theWrappedObject->invalidate(x, y, w, h, layers));
}

bool  PythonQtWrapper_QGraphicsScene::isActive(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

bool  PythonQtWrapper_QGraphicsScene::isSortCacheEnabled(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->isSortCacheEnabled());
}

QGraphicsItem*  PythonQtWrapper_QGraphicsScene::itemAt(QGraphicsScene* theWrappedObject, const QPointF&  pos) const
{
  return ( theWrappedObject->itemAt(pos));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsScene::itemAt(QGraphicsScene* theWrappedObject, const QPointF&  pos, const QTransform&  deviceTransform) const
{
  return ( theWrappedObject->itemAt(pos, deviceTransform));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsScene::itemAt(QGraphicsScene* theWrappedObject, qreal  x, qreal  y) const
{
  return ( theWrappedObject->itemAt(x, y));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsScene::itemAt(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, const QTransform&  deviceTransform) const
{
  return ( theWrappedObject->itemAt(x, y, deviceTransform));
}

QGraphicsScene::ItemIndexMethod  PythonQtWrapper_QGraphicsScene::itemIndexMethod(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->itemIndexMethod());
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->items());
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject, Qt::SortOrder  order) const
{
  return ( theWrappedObject->items(order));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode) const
{
  return ( theWrappedObject->items(path, mode));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode, Qt::SortOrder  order, const QTransform&  deviceTransform) const
{
  return ( theWrappedObject->items(path, mode, order, deviceTransform));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject, const QPointF&  pos) const
{
  return ( theWrappedObject->items(pos));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject, const QPointF&  pos, Qt::ItemSelectionMode  mode, Qt::SortOrder  order, const QTransform&  deviceTransform) const
{
  return ( theWrappedObject->items(pos, mode, order, deviceTransform));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject, const QPolygonF&  polygon, Qt::ItemSelectionMode  mode) const
{
  return ( theWrappedObject->items(polygon, mode));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject, const QPolygonF&  polygon, Qt::ItemSelectionMode  mode, Qt::SortOrder  order, const QTransform&  deviceTransform) const
{
  return ( theWrappedObject->items(polygon, mode, order, deviceTransform));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject, const QRectF&  rect, Qt::ItemSelectionMode  mode) const
{
  return ( theWrappedObject->items(rect, mode));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject, const QRectF&  rect, Qt::ItemSelectionMode  mode, Qt::SortOrder  order, const QTransform&  deviceTransform) const
{
  return ( theWrappedObject->items(rect, mode, order, deviceTransform));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, Qt::ItemSelectionMode  mode) const
{
  return ( theWrappedObject->items(x, y, w, h, mode));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, Qt::ItemSelectionMode  mode, Qt::SortOrder  order, const QTransform&  deviceTransform) const
{
  return ( theWrappedObject->items(x, y, w, h, mode, order, deviceTransform));
}

QRectF  PythonQtWrapper_QGraphicsScene::itemsBoundingRect(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->itemsBoundingRect());
}

void PythonQtWrapper_QGraphicsScene::keyPressEvent(QGraphicsScene* theWrappedObject, QKeyEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_keyPressEvent(event));
}

void PythonQtWrapper_QGraphicsScene::keyReleaseEvent(QGraphicsScene* theWrappedObject, QKeyEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_keyReleaseEvent(event));
}

void PythonQtWrapper_QGraphicsScene::mouseDoubleClickEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_mouseDoubleClickEvent(event));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsScene::mouseGrabberItem(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->mouseGrabberItem());
}

void PythonQtWrapper_QGraphicsScene::mouseMoveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_mouseMoveEvent(event));
}

void PythonQtWrapper_QGraphicsScene::mousePressEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_mousePressEvent(event));
}

void PythonQtWrapper_QGraphicsScene::mouseReleaseEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_mouseReleaseEvent(event));
}

QPalette  PythonQtWrapper_QGraphicsScene::palette(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->palette());
}

void PythonQtWrapper_QGraphicsScene::removeItem(QGraphicsScene* theWrappedObject, QGraphicsItem*  item)
{
  ( theWrappedObject->removeItem(item));
}

void PythonQtWrapper_QGraphicsScene::render(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  target, const QRectF&  source, Qt::AspectRatioMode  aspectRatioMode)
{
  ( theWrappedObject->render(painter, target, source, aspectRatioMode));
}

QRectF  PythonQtWrapper_QGraphicsScene::sceneRect(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->sceneRect());
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::selectedItems(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->selectedItems());
}

QPainterPath  PythonQtWrapper_QGraphicsScene::selectionArea(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->selectionArea());
}

bool  PythonQtWrapper_QGraphicsScene::sendEvent(QGraphicsScene* theWrappedObject, QGraphicsItem*  item, QEvent*  event)
{
  return ( theWrappedObject->sendEvent(item, event));
}

void PythonQtWrapper_QGraphicsScene::setActivePanel(QGraphicsScene* theWrappedObject, QGraphicsItem*  item)
{
  ( theWrappedObject->setActivePanel(item));
}

void PythonQtWrapper_QGraphicsScene::setActiveWindow(QGraphicsScene* theWrappedObject, QGraphicsWidget*  widget)
{
  ( theWrappedObject->setActiveWindow(widget));
}

void PythonQtWrapper_QGraphicsScene::setBackgroundBrush(QGraphicsScene* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setBackgroundBrush(brush));
}

void PythonQtWrapper_QGraphicsScene::setBspTreeDepth(QGraphicsScene* theWrappedObject, int  depth)
{
  ( theWrappedObject->setBspTreeDepth(depth));
}

void PythonQtWrapper_QGraphicsScene::setFocus(QGraphicsScene* theWrappedObject, Qt::FocusReason  focusReason)
{
  ( theWrappedObject->setFocus(focusReason));
}

void PythonQtWrapper_QGraphicsScene::setFocusItem(QGraphicsScene* theWrappedObject, QGraphicsItem*  item, Qt::FocusReason  focusReason)
{
  ( theWrappedObject->setFocusItem(item, focusReason));
}

void PythonQtWrapper_QGraphicsScene::setFont(QGraphicsScene* theWrappedObject, const QFont&  font)
{
  ( theWrappedObject->setFont(font));
}

void PythonQtWrapper_QGraphicsScene::setForegroundBrush(QGraphicsScene* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setForegroundBrush(brush));
}

void PythonQtWrapper_QGraphicsScene::setItemIndexMethod(QGraphicsScene* theWrappedObject, QGraphicsScene::ItemIndexMethod  method)
{
  ( theWrappedObject->setItemIndexMethod(method));
}

void PythonQtWrapper_QGraphicsScene::setPalette(QGraphicsScene* theWrappedObject, const QPalette&  palette)
{
  ( theWrappedObject->setPalette(palette));
}

void PythonQtWrapper_QGraphicsScene::setSceneRect(QGraphicsScene* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->setSceneRect(rect));
}

void PythonQtWrapper_QGraphicsScene::setSceneRect(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
  ( theWrappedObject->setSceneRect(x, y, w, h));
}

void PythonQtWrapper_QGraphicsScene::setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path)
{
  ( theWrappedObject->setSelectionArea(path));
}

void PythonQtWrapper_QGraphicsScene::setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode)
{
  ( theWrappedObject->setSelectionArea(path, mode));
}

void PythonQtWrapper_QGraphicsScene::setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode, const QTransform&  deviceTransform)
{
  ( theWrappedObject->setSelectionArea(path, mode, deviceTransform));
}

void PythonQtWrapper_QGraphicsScene::setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path, const QTransform&  deviceTransform)
{
  ( theWrappedObject->setSelectionArea(path, deviceTransform));
}

void PythonQtWrapper_QGraphicsScene::setSortCacheEnabled(QGraphicsScene* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setSortCacheEnabled(enabled));
}

void PythonQtWrapper_QGraphicsScene::setStickyFocus(QGraphicsScene* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setStickyFocus(enabled));
}

void PythonQtWrapper_QGraphicsScene::setStyle(QGraphicsScene* theWrappedObject, QStyle*  style)
{
  ( theWrappedObject->setStyle(style));
}

bool  PythonQtWrapper_QGraphicsScene::stickyFocus(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->stickyFocus());
}

QStyle*  PythonQtWrapper_QGraphicsScene::style(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->style());
}

void PythonQtWrapper_QGraphicsScene::update(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
  ( theWrappedObject->update(x, y, w, h));
}

QList<QGraphicsView* >  PythonQtWrapper_QGraphicsScene::views(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->views());
}

void PythonQtWrapper_QGraphicsScene::wheelEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneWheelEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_wheelEvent(event));
}

qreal  PythonQtWrapper_QGraphicsScene::width(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->width());
}



QGraphicsSceneContextMenuEvent* PythonQtWrapper_QGraphicsSceneContextMenuEvent::new_QGraphicsSceneContextMenuEvent(QEvent::Type  type)
{ 
return new QGraphicsSceneContextMenuEvent(type); }

Qt::KeyboardModifiers  PythonQtWrapper_QGraphicsSceneContextMenuEvent::modifiers(QGraphicsSceneContextMenuEvent* theWrappedObject) const
{
  return ( theWrappedObject->modifiers());
}

QPointF  PythonQtWrapper_QGraphicsSceneContextMenuEvent::pos(QGraphicsSceneContextMenuEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QGraphicsSceneContextMenuEvent::Reason  PythonQtWrapper_QGraphicsSceneContextMenuEvent::reason(QGraphicsSceneContextMenuEvent* theWrappedObject) const
{
  return ( theWrappedObject->reason());
}

QPointF  PythonQtWrapper_QGraphicsSceneContextMenuEvent::scenePos(QGraphicsSceneContextMenuEvent* theWrappedObject) const
{
  return ( theWrappedObject->scenePos());
}

QPoint  PythonQtWrapper_QGraphicsSceneContextMenuEvent::screenPos(QGraphicsSceneContextMenuEvent* theWrappedObject) const
{
  return ( theWrappedObject->screenPos());
}

void PythonQtWrapper_QGraphicsSceneContextMenuEvent::setModifiers(QGraphicsSceneContextMenuEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers)
{
  ( theWrappedObject->setModifiers(modifiers));
}

void PythonQtWrapper_QGraphicsSceneContextMenuEvent::setPos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setPos(pos));
}

void PythonQtWrapper_QGraphicsSceneContextMenuEvent::setReason(QGraphicsSceneContextMenuEvent* theWrappedObject, QGraphicsSceneContextMenuEvent::Reason  reason)
{
  ( theWrappedObject->setReason(reason));
}

void PythonQtWrapper_QGraphicsSceneContextMenuEvent::setScenePos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setScenePos(pos));
}

void PythonQtWrapper_QGraphicsSceneContextMenuEvent::setScreenPos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->setScreenPos(pos));
}



QGraphicsSceneDragDropEvent* PythonQtWrapper_QGraphicsSceneDragDropEvent::new_QGraphicsSceneDragDropEvent(QEvent::Type  type)
{ 
return new QGraphicsSceneDragDropEvent(type); }

void PythonQtWrapper_QGraphicsSceneDragDropEvent::acceptProposedAction(QGraphicsSceneDragDropEvent* theWrappedObject)
{
  ( theWrappedObject->acceptProposedAction());
}

Qt::MouseButtons  PythonQtWrapper_QGraphicsSceneDragDropEvent::buttons(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->buttons());
}

Qt::DropAction  PythonQtWrapper_QGraphicsSceneDragDropEvent::dropAction(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->dropAction());
}

const QMimeData*  PythonQtWrapper_QGraphicsSceneDragDropEvent::mimeData(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->mimeData());
}

Qt::KeyboardModifiers  PythonQtWrapper_QGraphicsSceneDragDropEvent::modifiers(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->modifiers());
}

QPointF  PythonQtWrapper_QGraphicsSceneDragDropEvent::pos(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

Qt::DropActions  PythonQtWrapper_QGraphicsSceneDragDropEvent::possibleActions(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->possibleActions());
}

Qt::DropAction  PythonQtWrapper_QGraphicsSceneDragDropEvent::proposedAction(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->proposedAction());
}

QPointF  PythonQtWrapper_QGraphicsSceneDragDropEvent::scenePos(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->scenePos());
}

QPoint  PythonQtWrapper_QGraphicsSceneDragDropEvent::screenPos(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->screenPos());
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setButtons(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::MouseButtons  buttons)
{
  ( theWrappedObject->setButtons(buttons));
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setDropAction(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropAction  action)
{
  ( theWrappedObject->setDropAction(action));
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setModifiers(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers)
{
  ( theWrappedObject->setModifiers(modifiers));
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setPos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setPos(pos));
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setPossibleActions(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropActions  actions)
{
  ( theWrappedObject->setPossibleActions(actions));
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setProposedAction(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropAction  action)
{
  ( theWrappedObject->setProposedAction(action));
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setScenePos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setScenePos(pos));
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setScreenPos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->setScreenPos(pos));
}

QWidget*  PythonQtWrapper_QGraphicsSceneDragDropEvent::source(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->source());
}



QGraphicsSceneEvent* PythonQtWrapper_QGraphicsSceneEvent::new_QGraphicsSceneEvent(QEvent::Type  type)
{ 
return new QGraphicsSceneEvent(type); }

QWidget*  PythonQtWrapper_QGraphicsSceneEvent::widget(QGraphicsSceneEvent* theWrappedObject) const
{
  return ( theWrappedObject->widget());
}



QGraphicsSceneHelpEvent* PythonQtWrapper_QGraphicsSceneHelpEvent::new_QGraphicsSceneHelpEvent(QEvent::Type  type)
{ 
return new QGraphicsSceneHelpEvent(type); }

QPointF  PythonQtWrapper_QGraphicsSceneHelpEvent::scenePos(QGraphicsSceneHelpEvent* theWrappedObject) const
{
  return ( theWrappedObject->scenePos());
}

QPoint  PythonQtWrapper_QGraphicsSceneHelpEvent::screenPos(QGraphicsSceneHelpEvent* theWrappedObject) const
{
  return ( theWrappedObject->screenPos());
}

void PythonQtWrapper_QGraphicsSceneHelpEvent::setScenePos(QGraphicsSceneHelpEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setScenePos(pos));
}

void PythonQtWrapper_QGraphicsSceneHelpEvent::setScreenPos(QGraphicsSceneHelpEvent* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->setScreenPos(pos));
}



QGraphicsSceneHoverEvent* PythonQtWrapper_QGraphicsSceneHoverEvent::new_QGraphicsSceneHoverEvent(QEvent::Type  type)
{ 
return new QGraphicsSceneHoverEvent(type); }

QPointF  PythonQtWrapper_QGraphicsSceneHoverEvent::lastPos(QGraphicsSceneHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->lastPos());
}

QPointF  PythonQtWrapper_QGraphicsSceneHoverEvent::lastScenePos(QGraphicsSceneHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->lastScenePos());
}

QPoint  PythonQtWrapper_QGraphicsSceneHoverEvent::lastScreenPos(QGraphicsSceneHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->lastScreenPos());
}

Qt::KeyboardModifiers  PythonQtWrapper_QGraphicsSceneHoverEvent::modifiers(QGraphicsSceneHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->modifiers());
}

QPointF  PythonQtWrapper_QGraphicsSceneHoverEvent::pos(QGraphicsSceneHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QPointF  PythonQtWrapper_QGraphicsSceneHoverEvent::scenePos(QGraphicsSceneHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->scenePos());
}

QPoint  PythonQtWrapper_QGraphicsSceneHoverEvent::screenPos(QGraphicsSceneHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->screenPos());
}

void PythonQtWrapper_QGraphicsSceneHoverEvent::setLastPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setLastPos(pos));
}

void PythonQtWrapper_QGraphicsSceneHoverEvent::setLastScenePos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setLastScenePos(pos));
}

void PythonQtWrapper_QGraphicsSceneHoverEvent::setLastScreenPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->setLastScreenPos(pos));
}

void PythonQtWrapper_QGraphicsSceneHoverEvent::setModifiers(QGraphicsSceneHoverEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers)
{
  ( theWrappedObject->setModifiers(modifiers));
}

void PythonQtWrapper_QGraphicsSceneHoverEvent::setPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setPos(pos));
}

void PythonQtWrapper_QGraphicsSceneHoverEvent::setScenePos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setScenePos(pos));
}

void PythonQtWrapper_QGraphicsSceneHoverEvent::setScreenPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->setScreenPos(pos));
}



QGraphicsSceneMouseEvent* PythonQtWrapper_QGraphicsSceneMouseEvent::new_QGraphicsSceneMouseEvent(QEvent::Type  type)
{ 
return new QGraphicsSceneMouseEvent(type); }

Qt::MouseButton  PythonQtWrapper_QGraphicsSceneMouseEvent::button(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->button());
}

QPointF  PythonQtWrapper_QGraphicsSceneMouseEvent::buttonDownPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const
{
  return ( theWrappedObject->buttonDownPos(button));
}

QPointF  PythonQtWrapper_QGraphicsSceneMouseEvent::buttonDownScenePos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const
{
  return ( theWrappedObject->buttonDownScenePos(button));
}

QPoint  PythonQtWrapper_QGraphicsSceneMouseEvent::buttonDownScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const
{
  return ( theWrappedObject->buttonDownScreenPos(button));
}

Qt::MouseButtons  PythonQtWrapper_QGraphicsSceneMouseEvent::buttons(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->buttons());
}

QPointF  PythonQtWrapper_QGraphicsSceneMouseEvent::lastPos(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->lastPos());
}

QPointF  PythonQtWrapper_QGraphicsSceneMouseEvent::lastScenePos(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->lastScenePos());
}

QPoint  PythonQtWrapper_QGraphicsSceneMouseEvent::lastScreenPos(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->lastScreenPos());
}

Qt::KeyboardModifiers  PythonQtWrapper_QGraphicsSceneMouseEvent::modifiers(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->modifiers());
}

QPointF  PythonQtWrapper_QGraphicsSceneMouseEvent::pos(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QPointF  PythonQtWrapper_QGraphicsSceneMouseEvent::scenePos(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->scenePos());
}

QPoint  PythonQtWrapper_QGraphicsSceneMouseEvent::screenPos(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->screenPos());
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setButton(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button)
{
  ( theWrappedObject->setButton(button));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setButtonDownPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPointF&  pos)
{
  ( theWrappedObject->setButtonDownPos(button, pos));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setButtonDownScenePos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPointF&  pos)
{
  ( theWrappedObject->setButtonDownScenePos(button, pos));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setButtonDownScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPoint&  pos)
{
  ( theWrappedObject->setButtonDownScreenPos(button, pos));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setButtons(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButtons  buttons)
{
  ( theWrappedObject->setButtons(buttons));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setLastPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setLastPos(pos));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setLastScenePos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setLastScenePos(pos));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setLastScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->setLastScreenPos(pos));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setModifiers(QGraphicsSceneMouseEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers)
{
  ( theWrappedObject->setModifiers(modifiers));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setPos(pos));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setScenePos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setScenePos(pos));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->setScreenPos(pos));
}



QGraphicsSceneMoveEvent* PythonQtWrapper_QGraphicsSceneMoveEvent::new_QGraphicsSceneMoveEvent()
{ 
return new QGraphicsSceneMoveEvent(); }

QPointF  PythonQtWrapper_QGraphicsSceneMoveEvent::newPos(QGraphicsSceneMoveEvent* theWrappedObject) const
{
  return ( theWrappedObject->newPos());
}

QPointF  PythonQtWrapper_QGraphicsSceneMoveEvent::oldPos(QGraphicsSceneMoveEvent* theWrappedObject) const
{
  return ( theWrappedObject->oldPos());
}

void PythonQtWrapper_QGraphicsSceneMoveEvent::setNewPos(QGraphicsSceneMoveEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setNewPos(pos));
}

void PythonQtWrapper_QGraphicsSceneMoveEvent::setOldPos(QGraphicsSceneMoveEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setOldPos(pos));
}



QGraphicsSceneResizeEvent* PythonQtWrapper_QGraphicsSceneResizeEvent::new_QGraphicsSceneResizeEvent()
{ 
return new QGraphicsSceneResizeEvent(); }

QSizeF  PythonQtWrapper_QGraphicsSceneResizeEvent::newSize(QGraphicsSceneResizeEvent* theWrappedObject) const
{
  return ( theWrappedObject->newSize());
}

QSizeF  PythonQtWrapper_QGraphicsSceneResizeEvent::oldSize(QGraphicsSceneResizeEvent* theWrappedObject) const
{
  return ( theWrappedObject->oldSize());
}

void PythonQtWrapper_QGraphicsSceneResizeEvent::setNewSize(QGraphicsSceneResizeEvent* theWrappedObject, const QSizeF&  size)
{
  ( theWrappedObject->setNewSize(size));
}

void PythonQtWrapper_QGraphicsSceneResizeEvent::setOldSize(QGraphicsSceneResizeEvent* theWrappedObject, const QSizeF&  size)
{
  ( theWrappedObject->setOldSize(size));
}



QGraphicsSceneWheelEvent* PythonQtWrapper_QGraphicsSceneWheelEvent::new_QGraphicsSceneWheelEvent(QEvent::Type  type)
{ 
return new QGraphicsSceneWheelEvent(type); }

Qt::MouseButtons  PythonQtWrapper_QGraphicsSceneWheelEvent::buttons(QGraphicsSceneWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->buttons());
}

int  PythonQtWrapper_QGraphicsSceneWheelEvent::delta(QGraphicsSceneWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->delta());
}

Qt::KeyboardModifiers  PythonQtWrapper_QGraphicsSceneWheelEvent::modifiers(QGraphicsSceneWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->modifiers());
}

Qt::Orientation  PythonQtWrapper_QGraphicsSceneWheelEvent::orientation(QGraphicsSceneWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->orientation());
}

QPointF  PythonQtWrapper_QGraphicsSceneWheelEvent::pos(QGraphicsSceneWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QPointF  PythonQtWrapper_QGraphicsSceneWheelEvent::scenePos(QGraphicsSceneWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->scenePos());
}

QPoint  PythonQtWrapper_QGraphicsSceneWheelEvent::screenPos(QGraphicsSceneWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->screenPos());
}

void PythonQtWrapper_QGraphicsSceneWheelEvent::setButtons(QGraphicsSceneWheelEvent* theWrappedObject, Qt::MouseButtons  buttons)
{
  ( theWrappedObject->setButtons(buttons));
}

void PythonQtWrapper_QGraphicsSceneWheelEvent::setDelta(QGraphicsSceneWheelEvent* theWrappedObject, int  delta)
{
  ( theWrappedObject->setDelta(delta));
}

void PythonQtWrapper_QGraphicsSceneWheelEvent::setModifiers(QGraphicsSceneWheelEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers)
{
  ( theWrappedObject->setModifiers(modifiers));
}

void PythonQtWrapper_QGraphicsSceneWheelEvent::setOrientation(QGraphicsSceneWheelEvent* theWrappedObject, Qt::Orientation  orientation)
{
  ( theWrappedObject->setOrientation(orientation));
}

void PythonQtWrapper_QGraphicsSceneWheelEvent::setPos(QGraphicsSceneWheelEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setPos(pos));
}

void PythonQtWrapper_QGraphicsSceneWheelEvent::setScenePos(QGraphicsSceneWheelEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setScenePos(pos));
}

void PythonQtWrapper_QGraphicsSceneWheelEvent::setScreenPos(QGraphicsSceneWheelEvent* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->setScreenPos(pos));
}



PythonQtShell_QGraphicsSimpleTextItem::~PythonQtShell_QGraphicsSimpleTextItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QGraphicsSimpleTextItem::isObscuredBy(const QGraphicsItem*  item) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isObscuredBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGraphicsItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&item};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isObscuredBy", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsSimpleTextItem::isObscuredBy(item);
}
QPainterPath  PythonQtShell_QGraphicsSimpleTextItem::opaqueArea() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "opaqueArea");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainterPath"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("opaqueArea", methodInfo, result);
        } else {
          returnValue = *((QPainterPath*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsSimpleTextItem::opaqueArea();
}
QGraphicsSimpleTextItem* PythonQtWrapper_QGraphicsSimpleTextItem::new_QGraphicsSimpleTextItem(QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsSimpleTextItem(parent, scene); }

QGraphicsSimpleTextItem* PythonQtWrapper_QGraphicsSimpleTextItem::new_QGraphicsSimpleTextItem(const QString&  text, QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsSimpleTextItem(text, parent, scene); }

QRectF  PythonQtWrapper_QGraphicsSimpleTextItem::boundingRect(QGraphicsSimpleTextItem* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

bool  PythonQtWrapper_QGraphicsSimpleTextItem::contains(QGraphicsSimpleTextItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->contains(point));
}

QFont  PythonQtWrapper_QGraphicsSimpleTextItem::font(QGraphicsSimpleTextItem* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

bool  PythonQtWrapper_QGraphicsSimpleTextItem::isObscuredBy(QGraphicsSimpleTextItem* theWrappedObject, const QGraphicsItem*  item) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->promoted_isObscuredBy(item));
}

QPainterPath  PythonQtWrapper_QGraphicsSimpleTextItem::opaqueArea(QGraphicsSimpleTextItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->promoted_opaqueArea());
}

void PythonQtWrapper_QGraphicsSimpleTextItem::paint(QGraphicsSimpleTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( theWrappedObject->paint(painter, option, widget));
}

void PythonQtWrapper_QGraphicsSimpleTextItem::setFont(QGraphicsSimpleTextItem* theWrappedObject, const QFont&  font)
{
  ( theWrappedObject->setFont(font));
}

void PythonQtWrapper_QGraphicsSimpleTextItem::setText(QGraphicsSimpleTextItem* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setText(text));
}

QPainterPath  PythonQtWrapper_QGraphicsSimpleTextItem::shape(QGraphicsSimpleTextItem* theWrappedObject) const
{
  return ( theWrappedObject->shape());
}

QString  PythonQtWrapper_QGraphicsSimpleTextItem::text(QGraphicsSimpleTextItem* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

int  PythonQtWrapper_QGraphicsSimpleTextItem::type(QGraphicsSimpleTextItem* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



PythonQtShell_QGraphicsTextItem::~PythonQtShell_QGraphicsTextItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsTextItem::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::childEvent(arg__1);
}
void PythonQtShell_QGraphicsTextItem::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::customEvent(arg__1);
}
bool  PythonQtShell_QGraphicsTextItem::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsTextItem::event(arg__1);
}
bool  PythonQtShell_QGraphicsTextItem::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsTextItem::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QGraphicsTextItem::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::timerEvent(arg__1);
}
QGraphicsTextItem* PythonQtWrapper_QGraphicsTextItem::new_QGraphicsTextItem(QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsTextItem(parent, scene); }

QGraphicsTextItem* PythonQtWrapper_QGraphicsTextItem::new_QGraphicsTextItem(const QString&  text, QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsTextItem(text, parent, scene); }

void PythonQtWrapper_QGraphicsTextItem::adjustSize(QGraphicsTextItem* theWrappedObject)
{
  ( theWrappedObject->adjustSize());
}

QRectF  PythonQtWrapper_QGraphicsTextItem::boundingRect(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

bool  PythonQtWrapper_QGraphicsTextItem::contains(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->contains(point));
}

QColor  PythonQtWrapper_QGraphicsTextItem::defaultTextColor(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->defaultTextColor());
}

QTextDocument*  PythonQtWrapper_QGraphicsTextItem::document(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->document());
}

QFont  PythonQtWrapper_QGraphicsTextItem::font(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

bool  PythonQtWrapper_QGraphicsTextItem::isObscuredBy(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item) const
{
  return ( theWrappedObject->isObscuredBy(item));
}

QPainterPath  PythonQtWrapper_QGraphicsTextItem::opaqueArea(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->opaqueArea());
}

bool  PythonQtWrapper_QGraphicsTextItem::openExternalLinks(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->openExternalLinks());
}

void PythonQtWrapper_QGraphicsTextItem::paint(QGraphicsTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( theWrappedObject->paint(painter, option, widget));
}

void PythonQtWrapper_QGraphicsTextItem::setDefaultTextColor(QGraphicsTextItem* theWrappedObject, const QColor&  c)
{
  ( theWrappedObject->setDefaultTextColor(c));
}

void PythonQtWrapper_QGraphicsTextItem::setDocument(QGraphicsTextItem* theWrappedObject, QTextDocument*  document)
{
  ( theWrappedObject->setDocument(document));
}

void PythonQtWrapper_QGraphicsTextItem::setFont(QGraphicsTextItem* theWrappedObject, const QFont&  font)
{
  ( theWrappedObject->setFont(font));
}

void PythonQtWrapper_QGraphicsTextItem::setHtml(QGraphicsTextItem* theWrappedObject, const QString&  html)
{
  ( theWrappedObject->setHtml(html));
}

void PythonQtWrapper_QGraphicsTextItem::setOpenExternalLinks(QGraphicsTextItem* theWrappedObject, bool  open)
{
  ( theWrappedObject->setOpenExternalLinks(open));
}

void PythonQtWrapper_QGraphicsTextItem::setPlainText(QGraphicsTextItem* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setPlainText(text));
}

void PythonQtWrapper_QGraphicsTextItem::setTabChangesFocus(QGraphicsTextItem* theWrappedObject, bool  b)
{
  ( theWrappedObject->setTabChangesFocus(b));
}

void PythonQtWrapper_QGraphicsTextItem::setTextCursor(QGraphicsTextItem* theWrappedObject, const QTextCursor&  cursor)
{
  ( theWrappedObject->setTextCursor(cursor));
}

void PythonQtWrapper_QGraphicsTextItem::setTextInteractionFlags(QGraphicsTextItem* theWrappedObject, Qt::TextInteractionFlags  flags)
{
  ( theWrappedObject->setTextInteractionFlags(flags));
}

void PythonQtWrapper_QGraphicsTextItem::setTextWidth(QGraphicsTextItem* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setTextWidth(width));
}

QPainterPath  PythonQtWrapper_QGraphicsTextItem::shape(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->shape());
}

bool  PythonQtWrapper_QGraphicsTextItem::tabChangesFocus(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->tabChangesFocus());
}

QTextCursor  PythonQtWrapper_QGraphicsTextItem::textCursor(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->textCursor());
}

Qt::TextInteractionFlags  PythonQtWrapper_QGraphicsTextItem::textInteractionFlags(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->textInteractionFlags());
}

qreal  PythonQtWrapper_QGraphicsTextItem::textWidth(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->textWidth());
}

QString  PythonQtWrapper_QGraphicsTextItem::toHtml(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->toHtml());
}

QString  PythonQtWrapper_QGraphicsTextItem::toPlainText(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->toPlainText());
}

int  PythonQtWrapper_QGraphicsTextItem::type(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



PythonQtShell_QGraphicsTransform::~PythonQtShell_QGraphicsTransform() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsTransform::applyTo(QMatrix4x4*  matrix) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "applyTo");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMatrix4x4*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&matrix};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  
}
void PythonQtShell_QGraphicsTransform::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTransform::childEvent(arg__1);
}
void PythonQtShell_QGraphicsTransform::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTransform::customEvent(arg__1);
}
bool  PythonQtShell_QGraphicsTransform::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsTransform::event(arg__1);
}
bool  PythonQtShell_QGraphicsTransform::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsTransform::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QGraphicsTransform::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTransform::timerEvent(arg__1);
}
QGraphicsTransform* PythonQtWrapper_QGraphicsTransform::new_QGraphicsTransform(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsTransform(parent); }



PythonQtShell_QGraphicsView::~PythonQtShell_QGraphicsView() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsView::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QActionEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::actionEvent(arg__1);
}
void PythonQtShell_QGraphicsView::changeEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::changeEvent(arg__1);
}
void PythonQtShell_QGraphicsView::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::childEvent(arg__1);
}
void PythonQtShell_QGraphicsView::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QCloseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::closeEvent(arg__1);
}
void PythonQtShell_QGraphicsView::contextMenuEvent(QContextMenuEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::contextMenuEvent(event);
}
void PythonQtShell_QGraphicsView::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::customEvent(arg__1);
}
int  PythonQtShell_QGraphicsView::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("devType", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsView::devType();
}
void PythonQtShell_QGraphicsView::dragEnterEvent(QDragEnterEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragEnterEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::dragEnterEvent(event);
}
void PythonQtShell_QGraphicsView::dragLeaveEvent(QDragLeaveEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::dragLeaveEvent(event);
}
void PythonQtShell_QGraphicsView::dragMoveEvent(QDragMoveEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::dragMoveEvent(event);
}
void PythonQtShell_QGraphicsView::drawBackground(QPainter*  painter, const QRectF&  rect)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawBackground");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QRectF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&painter, (void*)&rect};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::drawBackground(painter, rect);
}
void PythonQtShell_QGraphicsView::drawForeground(QPainter*  painter, const QRectF&  rect)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawForeground");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QRectF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&painter, (void*)&rect};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::drawForeground(painter, rect);
}
void PythonQtShell_QGraphicsView::drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawItems");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "int" , "QGraphicsItem**" , "const QStyleOptionGraphicsItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&painter, (void*)&numItems, (void*)&items, (void*)&options};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::drawItems(painter, numItems, items, options);
}
void PythonQtShell_QGraphicsView::dropEvent(QDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::dropEvent(event);
}
void PythonQtShell_QGraphicsView::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::enterEvent(arg__1);
}
bool  PythonQtShell_QGraphicsView::event(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsView::event(event);
}
bool  PythonQtShell_QGraphicsView::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsView::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QGraphicsView::focusInEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::focusInEvent(event);
}
bool  PythonQtShell_QGraphicsView::focusNextPrevChild(bool  next)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusNextPrevChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&next};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("focusNextPrevChild", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsView::focusNextPrevChild(next);
}
void PythonQtShell_QGraphicsView::focusOutEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::focusOutEvent(event);
}
int  PythonQtShell_QGraphicsView::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("heightForWidth", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsView::heightForWidth(arg__1);
}
void PythonQtShell_QGraphicsView::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QHideEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::hideEvent(arg__1);
}
void PythonQtShell_QGraphicsView::inputMethodEvent(QInputMethodEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QInputMethodEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::inputMethodEvent(event);
}
QVariant  PythonQtShell_QGraphicsView::inputMethodQuery(Qt::InputMethodQuery  query) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&query};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("inputMethodQuery", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsView::inputMethodQuery(query);
}
void PythonQtShell_QGraphicsView::keyPressEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::keyPressEvent(event);
}
void PythonQtShell_QGraphicsView::keyReleaseEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::keyReleaseEvent(event);
}
void PythonQtShell_QGraphicsView::languageChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "languageChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::languageChange();
}
void PythonQtShell_QGraphicsView::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::leaveEvent(arg__1);
}
int  PythonQtShell_QGraphicsView::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("metric", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsView::metric(arg__1);
}
void PythonQtShell_QGraphicsView::mouseDoubleClickEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::mouseDoubleClickEvent(event);
}
void PythonQtShell_QGraphicsView::mouseMoveEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::mouseMoveEvent(event);
}
void PythonQtShell_QGraphicsView::mousePressEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::mousePressEvent(event);
}
void PythonQtShell_QGraphicsView::mouseReleaseEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::mouseReleaseEvent(event);
}
void PythonQtShell_QGraphicsView::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QGraphicsView::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPaintEngine*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPaintEngine* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("paintEngine", methodInfo, result);
        } else {
          returnValue = *((QPaintEngine**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsView::paintEngine();
}
void PythonQtShell_QGraphicsView::paintEvent(QPaintEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPaintEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::paintEvent(event);
}
void PythonQtShell_QGraphicsView::resizeEvent(QResizeEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QResizeEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::resizeEvent(event);
}
void PythonQtShell_QGraphicsView::scrollContentsBy(int  dx, int  dy)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "scrollContentsBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&dx, (void*)&dy};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::scrollContentsBy(dx, dy);
}
void PythonQtShell_QGraphicsView::showEvent(QShowEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QShowEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::showEvent(event);
}
void PythonQtShell_QGraphicsView::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTabletEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::tabletEvent(arg__1);
}
void PythonQtShell_QGraphicsView::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::timerEvent(arg__1);
}
bool  PythonQtShell_QGraphicsView::viewportEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "viewportEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("viewportEvent", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsView::viewportEvent(event);
}
void PythonQtShell_QGraphicsView::wheelEvent(QWheelEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::wheelEvent(event);
}
QGraphicsView* PythonQtWrapper_QGraphicsView::new_QGraphicsView(QGraphicsScene*  scene, QWidget*  parent)
{ 
return new PythonQtShell_QGraphicsView(scene, parent); }

QGraphicsView* PythonQtWrapper_QGraphicsView::new_QGraphicsView(QWidget*  parent)
{ 
return new PythonQtShell_QGraphicsView(parent); }

Qt::Alignment  PythonQtWrapper_QGraphicsView::alignment(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->alignment());
}

QBrush  PythonQtWrapper_QGraphicsView::backgroundBrush(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->backgroundBrush());
}

QGraphicsView::CacheMode  PythonQtWrapper_QGraphicsView::cacheMode(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->cacheMode());
}

void PythonQtWrapper_QGraphicsView::centerOn(QGraphicsView* theWrappedObject, const QGraphicsItem*  item)
{
  ( theWrappedObject->centerOn(item));
}

void PythonQtWrapper_QGraphicsView::centerOn(QGraphicsView* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->centerOn(pos));
}

void PythonQtWrapper_QGraphicsView::centerOn(QGraphicsView* theWrappedObject, qreal  x, qreal  y)
{
  ( theWrappedObject->centerOn(x, y));
}

void PythonQtWrapper_QGraphicsView::contextMenuEvent(QGraphicsView* theWrappedObject, QContextMenuEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_contextMenuEvent(event));
}

void PythonQtWrapper_QGraphicsView::dragEnterEvent(QGraphicsView* theWrappedObject, QDragEnterEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_dragEnterEvent(event));
}

void PythonQtWrapper_QGraphicsView::dragLeaveEvent(QGraphicsView* theWrappedObject, QDragLeaveEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_dragLeaveEvent(event));
}

QGraphicsView::DragMode  PythonQtWrapper_QGraphicsView::dragMode(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->dragMode());
}

void PythonQtWrapper_QGraphicsView::dragMoveEvent(QGraphicsView* theWrappedObject, QDragMoveEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_dragMoveEvent(event));
}

void PythonQtWrapper_QGraphicsView::drawBackground(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  rect)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_drawBackground(painter, rect));
}

void PythonQtWrapper_QGraphicsView::drawForeground(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  rect)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_drawForeground(painter, rect));
}

void PythonQtWrapper_QGraphicsView::drawItems(QGraphicsView* theWrappedObject, QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_drawItems(painter, numItems, items, options));
}

void PythonQtWrapper_QGraphicsView::dropEvent(QGraphicsView* theWrappedObject, QDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_dropEvent(event));
}

void PythonQtWrapper_QGraphicsView::ensureVisible(QGraphicsView* theWrappedObject, const QGraphicsItem*  item, int  xmargin, int  ymargin)
{
  ( theWrappedObject->ensureVisible(item, xmargin, ymargin));
}

void PythonQtWrapper_QGraphicsView::ensureVisible(QGraphicsView* theWrappedObject, const QRectF&  rect, int  xmargin, int  ymargin)
{
  ( theWrappedObject->ensureVisible(rect, xmargin, ymargin));
}

void PythonQtWrapper_QGraphicsView::ensureVisible(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin, int  ymargin)
{
  ( theWrappedObject->ensureVisible(x, y, w, h, xmargin, ymargin));
}

bool  PythonQtWrapper_QGraphicsView::event(QGraphicsView* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_event(event));
}

void PythonQtWrapper_QGraphicsView::fitInView(QGraphicsView* theWrappedObject, const QGraphicsItem*  item, Qt::AspectRatioMode  aspectRadioMode)
{
  ( theWrappedObject->fitInView(item, aspectRadioMode));
}

void PythonQtWrapper_QGraphicsView::fitInView(QGraphicsView* theWrappedObject, const QRectF&  rect, Qt::AspectRatioMode  aspectRadioMode)
{
  ( theWrappedObject->fitInView(rect, aspectRadioMode));
}

void PythonQtWrapper_QGraphicsView::fitInView(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, Qt::AspectRatioMode  aspectRadioMode)
{
  ( theWrappedObject->fitInView(x, y, w, h, aspectRadioMode));
}

void PythonQtWrapper_QGraphicsView::focusInEvent(QGraphicsView* theWrappedObject, QFocusEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_focusInEvent(event));
}

bool  PythonQtWrapper_QGraphicsView::focusNextPrevChild(QGraphicsView* theWrappedObject, bool  next)
{
  return ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_focusNextPrevChild(next));
}

void PythonQtWrapper_QGraphicsView::focusOutEvent(QGraphicsView* theWrappedObject, QFocusEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_focusOutEvent(event));
}

QBrush  PythonQtWrapper_QGraphicsView::foregroundBrush(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->foregroundBrush());
}

void PythonQtWrapper_QGraphicsView::inputMethodEvent(QGraphicsView* theWrappedObject, QInputMethodEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_inputMethodEvent(event));
}

QVariant  PythonQtWrapper_QGraphicsView::inputMethodQuery(QGraphicsView* theWrappedObject, Qt::InputMethodQuery  query) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_inputMethodQuery(query));
}

bool  PythonQtWrapper_QGraphicsView::isInteractive(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->isInteractive());
}

bool  PythonQtWrapper_QGraphicsView::isTransformed(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->isTransformed());
}

QGraphicsItem*  PythonQtWrapper_QGraphicsView::itemAt(QGraphicsView* theWrappedObject, const QPoint&  pos) const
{
  return ( theWrappedObject->itemAt(pos));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsView::itemAt(QGraphicsView* theWrappedObject, int  x, int  y) const
{
  return ( theWrappedObject->itemAt(x, y));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsView::items(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->items());
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsView::items(QGraphicsView* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode) const
{
  return ( theWrappedObject->items(path, mode));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsView::items(QGraphicsView* theWrappedObject, const QPoint&  pos) const
{
  return ( theWrappedObject->items(pos));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsView::items(QGraphicsView* theWrappedObject, const QPolygon&  polygon, Qt::ItemSelectionMode  mode) const
{
  return ( theWrappedObject->items(polygon, mode));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsView::items(QGraphicsView* theWrappedObject, const QRect&  rect, Qt::ItemSelectionMode  mode) const
{
  return ( theWrappedObject->items(rect, mode));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsView::items(QGraphicsView* theWrappedObject, int  x, int  y) const
{
  return ( theWrappedObject->items(x, y));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsView::items(QGraphicsView* theWrappedObject, int  x, int  y, int  w, int  h, Qt::ItemSelectionMode  mode) const
{
  return ( theWrappedObject->items(x, y, w, h, mode));
}

void PythonQtWrapper_QGraphicsView::keyPressEvent(QGraphicsView* theWrappedObject, QKeyEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_keyPressEvent(event));
}

void PythonQtWrapper_QGraphicsView::keyReleaseEvent(QGraphicsView* theWrappedObject, QKeyEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_keyReleaseEvent(event));
}

QPainterPath  PythonQtWrapper_QGraphicsView::mapFromScene(QGraphicsView* theWrappedObject, const QPainterPath&  path) const
{
  return ( theWrappedObject->mapFromScene(path));
}

QPoint  PythonQtWrapper_QGraphicsView::mapFromScene(QGraphicsView* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->mapFromScene(point));
}

QPolygon  PythonQtWrapper_QGraphicsView::mapFromScene(QGraphicsView* theWrappedObject, const QPolygonF&  polygon) const
{
  return ( theWrappedObject->mapFromScene(polygon));
}

QPolygon  PythonQtWrapper_QGraphicsView::mapFromScene(QGraphicsView* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapFromScene(rect));
}

QPoint  PythonQtWrapper_QGraphicsView::mapFromScene(QGraphicsView* theWrappedObject, qreal  x, qreal  y) const
{
  return ( theWrappedObject->mapFromScene(x, y));
}

QPolygon  PythonQtWrapper_QGraphicsView::mapFromScene(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapFromScene(x, y, w, h));
}

QPainterPath  PythonQtWrapper_QGraphicsView::mapToScene(QGraphicsView* theWrappedObject, const QPainterPath&  path) const
{
  return ( theWrappedObject->mapToScene(path));
}

QPointF  PythonQtWrapper_QGraphicsView::mapToScene(QGraphicsView* theWrappedObject, const QPoint&  point) const
{
  return ( theWrappedObject->mapToScene(point));
}

QPolygonF  PythonQtWrapper_QGraphicsView::mapToScene(QGraphicsView* theWrappedObject, const QPolygon&  polygon) const
{
  return ( theWrappedObject->mapToScene(polygon));
}

QPolygonF  PythonQtWrapper_QGraphicsView::mapToScene(QGraphicsView* theWrappedObject, const QRect&  rect) const
{
  return ( theWrappedObject->mapToScene(rect));
}

QPointF  PythonQtWrapper_QGraphicsView::mapToScene(QGraphicsView* theWrappedObject, int  x, int  y) const
{
  return ( theWrappedObject->mapToScene(x, y));
}

QPolygonF  PythonQtWrapper_QGraphicsView::mapToScene(QGraphicsView* theWrappedObject, int  x, int  y, int  w, int  h) const
{
  return ( theWrappedObject->mapToScene(x, y, w, h));
}

QMatrix  PythonQtWrapper_QGraphicsView::matrix(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->matrix());
}

void PythonQtWrapper_QGraphicsView::mouseDoubleClickEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_mouseDoubleClickEvent(event));
}

void PythonQtWrapper_QGraphicsView::mouseMoveEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_mouseMoveEvent(event));
}

void PythonQtWrapper_QGraphicsView::mousePressEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_mousePressEvent(event));
}

void PythonQtWrapper_QGraphicsView::mouseReleaseEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_mouseReleaseEvent(event));
}

QGraphicsView::OptimizationFlags  PythonQtWrapper_QGraphicsView::optimizationFlags(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->optimizationFlags());
}

void PythonQtWrapper_QGraphicsView::paintEvent(QGraphicsView* theWrappedObject, QPaintEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_paintEvent(event));
}

void PythonQtWrapper_QGraphicsView::render(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  target, const QRect&  source, Qt::AspectRatioMode  aspectRatioMode)
{
  ( theWrappedObject->render(painter, target, source, aspectRatioMode));
}

QPainter::RenderHints  PythonQtWrapper_QGraphicsView::renderHints(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->renderHints());
}

void PythonQtWrapper_QGraphicsView::resetCachedContent(QGraphicsView* theWrappedObject)
{
  ( theWrappedObject->resetCachedContent());
}

void PythonQtWrapper_QGraphicsView::resetMatrix(QGraphicsView* theWrappedObject)
{
  ( theWrappedObject->resetMatrix());
}

void PythonQtWrapper_QGraphicsView::resetTransform(QGraphicsView* theWrappedObject)
{
  ( theWrappedObject->resetTransform());
}

QGraphicsView::ViewportAnchor  PythonQtWrapper_QGraphicsView::resizeAnchor(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->resizeAnchor());
}

void PythonQtWrapper_QGraphicsView::resizeEvent(QGraphicsView* theWrappedObject, QResizeEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_resizeEvent(event));
}

void PythonQtWrapper_QGraphicsView::rotate(QGraphicsView* theWrappedObject, qreal  angle)
{
  ( theWrappedObject->rotate(angle));
}

Qt::ItemSelectionMode  PythonQtWrapper_QGraphicsView::rubberBandSelectionMode(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->rubberBandSelectionMode());
}

void PythonQtWrapper_QGraphicsView::scale(QGraphicsView* theWrappedObject, qreal  sx, qreal  sy)
{
  ( theWrappedObject->scale(sx, sy));
}

QGraphicsScene*  PythonQtWrapper_QGraphicsView::scene(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->scene());
}

QRectF  PythonQtWrapper_QGraphicsView::sceneRect(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->sceneRect());
}

void PythonQtWrapper_QGraphicsView::scrollContentsBy(QGraphicsView* theWrappedObject, int  dx, int  dy)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_scrollContentsBy(dx, dy));
}

void PythonQtWrapper_QGraphicsView::setAlignment(QGraphicsView* theWrappedObject, Qt::Alignment  alignment)
{
  ( theWrappedObject->setAlignment(alignment));
}

void PythonQtWrapper_QGraphicsView::setBackgroundBrush(QGraphicsView* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setBackgroundBrush(brush));
}

void PythonQtWrapper_QGraphicsView::setCacheMode(QGraphicsView* theWrappedObject, QGraphicsView::CacheMode  mode)
{
  ( theWrappedObject->setCacheMode(mode));
}

void PythonQtWrapper_QGraphicsView::setDragMode(QGraphicsView* theWrappedObject, QGraphicsView::DragMode  mode)
{
  ( theWrappedObject->setDragMode(mode));
}

void PythonQtWrapper_QGraphicsView::setForegroundBrush(QGraphicsView* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setForegroundBrush(brush));
}

void PythonQtWrapper_QGraphicsView::setInteractive(QGraphicsView* theWrappedObject, bool  allowed)
{
  ( theWrappedObject->setInteractive(allowed));
}

void PythonQtWrapper_QGraphicsView::setMatrix(QGraphicsView* theWrappedObject, const QMatrix&  matrix, bool  combine)
{
  ( theWrappedObject->setMatrix(matrix, combine));
}

void PythonQtWrapper_QGraphicsView::setOptimizationFlag(QGraphicsView* theWrappedObject, QGraphicsView::OptimizationFlag  flag, bool  enabled)
{
  ( theWrappedObject->setOptimizationFlag(flag, enabled));
}

void PythonQtWrapper_QGraphicsView::setOptimizationFlags(QGraphicsView* theWrappedObject, QGraphicsView::OptimizationFlags  flags)
{
  ( theWrappedObject->setOptimizationFlags(flags));
}

void PythonQtWrapper_QGraphicsView::setRenderHint(QGraphicsView* theWrappedObject, QPainter::RenderHint  hint, bool  enabled)
{
  ( theWrappedObject->setRenderHint(hint, enabled));
}

void PythonQtWrapper_QGraphicsView::setRenderHints(QGraphicsView* theWrappedObject, QPainter::RenderHints  hints)
{
  ( theWrappedObject->setRenderHints(hints));
}

void PythonQtWrapper_QGraphicsView::setResizeAnchor(QGraphicsView* theWrappedObject, QGraphicsView::ViewportAnchor  anchor)
{
  ( theWrappedObject->setResizeAnchor(anchor));
}

void PythonQtWrapper_QGraphicsView::setRubberBandSelectionMode(QGraphicsView* theWrappedObject, Qt::ItemSelectionMode  mode)
{
  ( theWrappedObject->setRubberBandSelectionMode(mode));
}

void PythonQtWrapper_QGraphicsView::setScene(QGraphicsView* theWrappedObject, QGraphicsScene*  scene)
{
  ( theWrappedObject->setScene(scene));
}

void PythonQtWrapper_QGraphicsView::setSceneRect(QGraphicsView* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->setSceneRect(rect));
}

void PythonQtWrapper_QGraphicsView::setSceneRect(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
  ( theWrappedObject->setSceneRect(x, y, w, h));
}

void PythonQtWrapper_QGraphicsView::setTransform(QGraphicsView* theWrappedObject, const QTransform&  matrix, bool  combine)
{
  ( theWrappedObject->setTransform(matrix, combine));
}

void PythonQtWrapper_QGraphicsView::setTransformationAnchor(QGraphicsView* theWrappedObject, QGraphicsView::ViewportAnchor  anchor)
{
  ( theWrappedObject->setTransformationAnchor(anchor));
}

void PythonQtWrapper_QGraphicsView::setViewportUpdateMode(QGraphicsView* theWrappedObject, QGraphicsView::ViewportUpdateMode  mode)
{
  ( theWrappedObject->setViewportUpdateMode(mode));
}

void PythonQtWrapper_QGraphicsView::shear(QGraphicsView* theWrappedObject, qreal  sh, qreal  sv)
{
  ( theWrappedObject->shear(sh, sv));
}

void PythonQtWrapper_QGraphicsView::showEvent(QGraphicsView* theWrappedObject, QShowEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_showEvent(event));
}

QSize  PythonQtWrapper_QGraphicsView::sizeHint(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

QTransform  PythonQtWrapper_QGraphicsView::transform(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->transform());
}

QGraphicsView::ViewportAnchor  PythonQtWrapper_QGraphicsView::transformationAnchor(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->transformationAnchor());
}

void PythonQtWrapper_QGraphicsView::translate(QGraphicsView* theWrappedObject, qreal  dx, qreal  dy)
{
  ( theWrappedObject->translate(dx, dy));
}

bool  PythonQtWrapper_QGraphicsView::viewportEvent(QGraphicsView* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_viewportEvent(event));
}

QTransform  PythonQtWrapper_QGraphicsView::viewportTransform(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->viewportTransform());
}

QGraphicsView::ViewportUpdateMode  PythonQtWrapper_QGraphicsView::viewportUpdateMode(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->viewportUpdateMode());
}

void PythonQtWrapper_QGraphicsView::wheelEvent(QGraphicsView* theWrappedObject, QWheelEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_wheelEvent(event));
}



PythonQtShell_QGraphicsWidget::~PythonQtShell_QGraphicsWidget() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsWidget::changeEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsWidget::changeEvent(event);
}
void PythonQtShell_QGraphicsWidget::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsWidget::childEvent(arg__1);
}
void PythonQtShell_QGraphicsWidget::closeEvent(QCloseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QCloseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsWidget::closeEvent(event);
}
void PythonQtShell_QGraphicsWidget::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsWidget::customEvent(arg__1);
}
bool  PythonQtShell_QGraphicsWidget::event(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsWidget::event(event);
}
bool  PythonQtShell_QGraphicsWidget::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsWidget::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QGraphicsWidget::focusNextPrevChild(bool  next)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusNextPrevChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&next};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("focusNextPrevChild", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsWidget::focusNextPrevChild(next);
}
void PythonQtShell_QGraphicsWidget::getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "getContentsMargins");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "qreal*" , "qreal*" , "qreal*" , "qreal*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&left, (void*)&top, (void*)&right, (void*)&bottom};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsWidget::getContentsMargins(left, top, right, bottom);
}
void PythonQtShell_QGraphicsWidget::grabKeyboardEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "grabKeyboardEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsWidget::grabKeyboardEvent(event);
}
void PythonQtShell_QGraphicsWidget::grabMouseEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "grabMouseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsWidget::grabMouseEvent(event);
}
void PythonQtShell_QGraphicsWidget::hideEvent(QHideEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QHideEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsWidget::hideEvent(event);
}
void PythonQtShell_QGraphicsWidget::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsWidget::hoverLeaveEvent(event);
}
void PythonQtShell_QGraphicsWidget::hoverMoveEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsWidget::hoverMoveEvent(event);
}
void PythonQtShell_QGraphicsWidget::initStyleOption(QStyleOption*  option) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "initStyleOption");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QStyleOption*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&option};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsWidget::initStyleOption(option);
}
void PythonQtShell_QGraphicsWidget::moveEvent(QGraphicsSceneMoveEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsWidget::moveEvent(event);
}
void PythonQtShell_QGraphicsWidget::paintWindowFrame(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintWindowFrame");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QStyleOptionGraphicsItem*" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&painter, (void*)&option, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsWidget::paintWindowFrame(painter, option, widget);
}
void PythonQtShell_QGraphicsWidget::polishEvent()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "polishEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsWidget::polishEvent();
}
QVariant  PythonQtShell_QGraphicsWidget::propertyChange(const QString&  propertyName, const QVariant&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "propertyChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "const QString&" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&propertyName, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("propertyChange", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsWidget::propertyChange(propertyName, value);
}
void PythonQtShell_QGraphicsWidget::resizeEvent(QGraphicsSceneResizeEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneResizeEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsWidget::resizeEvent(event);
}
void PythonQtShell_QGraphicsWidget::setGeometry(const QRectF&  rect)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setGeometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QRectF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&rect};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsWidget::setGeometry(rect);
}
void PythonQtShell_QGraphicsWidget::showEvent(QShowEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QShowEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsWidget::showEvent(event);
}
QSizeF  PythonQtShell_QGraphicsWidget::sizeHint(Qt::SizeHint  which, const QSizeF&  constraint) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sizeHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSizeF" , "Qt::SizeHint" , "const QSizeF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QSizeF returnValue;
    void* args[3] = {NULL, (void*)&which, (void*)&constraint};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sizeHint", methodInfo, result);
        } else {
          returnValue = *((QSizeF*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsWidget::sizeHint(which, constraint);
}
void PythonQtShell_QGraphicsWidget::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsWidget::timerEvent(arg__1);
}
void PythonQtShell_QGraphicsWidget::ungrabKeyboardEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "ungrabKeyboardEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsWidget::ungrabKeyboardEvent(event);
}
void PythonQtShell_QGraphicsWidget::ungrabMouseEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "ungrabMouseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsWidget::ungrabMouseEvent(event);
}
void PythonQtShell_QGraphicsWidget::updateGeometry()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateGeometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsWidget::updateGeometry();
}
bool  PythonQtShell_QGraphicsWidget::windowFrameEvent(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "windowFrameEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("windowFrameEvent", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsWidget::windowFrameEvent(e);
}
Qt::WindowFrameSection  PythonQtShell_QGraphicsWidget::windowFrameSectionAt(const QPointF&  pos) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "windowFrameSectionAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"Qt::WindowFrameSection" , "const QPointF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      Qt::WindowFrameSection returnValue;
    void* args[2] = {NULL, (void*)&pos};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("windowFrameSectionAt", methodInfo, result);
        } else {
          returnValue = *((Qt::WindowFrameSection*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsWidget::windowFrameSectionAt(pos);
}
QGraphicsWidget* PythonQtWrapper_QGraphicsWidget::new_QGraphicsWidget(QGraphicsItem*  parent, Qt::WindowFlags  wFlags)
{ 
return new PythonQtShell_QGraphicsWidget(parent, wFlags); }

QList<QAction* >  PythonQtWrapper_QGraphicsWidget::actions(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->actions());
}

void PythonQtWrapper_QGraphicsWidget::addAction(QGraphicsWidget* theWrappedObject, QAction*  action)
{
  ( theWrappedObject->addAction(action));
}

void PythonQtWrapper_QGraphicsWidget::addActions(QGraphicsWidget* theWrappedObject, QList<QAction* >  actions)
{
  ( theWrappedObject->addActions(actions));
}

void PythonQtWrapper_QGraphicsWidget::adjustSize(QGraphicsWidget* theWrappedObject)
{
  ( theWrappedObject->adjustSize());
}

bool  PythonQtWrapper_QGraphicsWidget::autoFillBackground(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->autoFillBackground());
}

QRectF  PythonQtWrapper_QGraphicsWidget::boundingRect(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

void PythonQtWrapper_QGraphicsWidget::changeEvent(QGraphicsWidget* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_changeEvent(event));
}

void PythonQtWrapper_QGraphicsWidget::closeEvent(QGraphicsWidget* theWrappedObject, QCloseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_closeEvent(event));
}

bool  PythonQtWrapper_QGraphicsWidget::event(QGraphicsWidget* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_event(event));
}

bool  PythonQtWrapper_QGraphicsWidget::focusNextPrevChild(QGraphicsWidget* theWrappedObject, bool  next)
{
  return ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_focusNextPrevChild(next));
}

Qt::FocusPolicy  PythonQtWrapper_QGraphicsWidget::focusPolicy(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->focusPolicy());
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsWidget::focusWidget(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->focusWidget());
}

QFont  PythonQtWrapper_QGraphicsWidget::font(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

void PythonQtWrapper_QGraphicsWidget::getContentsMargins(QGraphicsWidget* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_getContentsMargins(left, top, right, bottom));
}

void PythonQtWrapper_QGraphicsWidget::getWindowFrameMargins(QGraphicsWidget* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const
{
  ( theWrappedObject->getWindowFrameMargins(left, top, right, bottom));
}

void PythonQtWrapper_QGraphicsWidget::grabKeyboardEvent(QGraphicsWidget* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_grabKeyboardEvent(event));
}

void PythonQtWrapper_QGraphicsWidget::grabMouseEvent(QGraphicsWidget* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_grabMouseEvent(event));
}

int  PythonQtWrapper_QGraphicsWidget::grabShortcut(QGraphicsWidget* theWrappedObject, const QKeySequence&  sequence, Qt::ShortcutContext  context)
{
  return ( theWrappedObject->grabShortcut(sequence, context));
}

void PythonQtWrapper_QGraphicsWidget::hideEvent(QGraphicsWidget* theWrappedObject, QHideEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_hideEvent(event));
}

void PythonQtWrapper_QGraphicsWidget::hoverLeaveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_hoverLeaveEvent(event));
}

void PythonQtWrapper_QGraphicsWidget::hoverMoveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_hoverMoveEvent(event));
}

void PythonQtWrapper_QGraphicsWidget::initStyleOption(QGraphicsWidget* theWrappedObject, QStyleOption*  option) const
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_initStyleOption(option));
}

void PythonQtWrapper_QGraphicsWidget::insertAction(QGraphicsWidget* theWrappedObject, QAction*  before, QAction*  action)
{
  ( theWrappedObject->insertAction(before, action));
}

void PythonQtWrapper_QGraphicsWidget::insertActions(QGraphicsWidget* theWrappedObject, QAction*  before, QList<QAction* >  actions)
{
  ( theWrappedObject->insertActions(before, actions));
}

bool  PythonQtWrapper_QGraphicsWidget::isActiveWindow(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->isActiveWindow());
}

QGraphicsLayout*  PythonQtWrapper_QGraphicsWidget::layout(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->layout());
}

Qt::LayoutDirection  PythonQtWrapper_QGraphicsWidget::layoutDirection(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->layoutDirection());
}

void PythonQtWrapper_QGraphicsWidget::moveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneMoveEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_moveEvent(event));
}

void PythonQtWrapper_QGraphicsWidget::paint(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( theWrappedObject->paint(painter, option, widget));
}

void PythonQtWrapper_QGraphicsWidget::paintWindowFrame(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_paintWindowFrame(painter, option, widget));
}

QPalette  PythonQtWrapper_QGraphicsWidget::palette(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->palette());
}

void PythonQtWrapper_QGraphicsWidget::polishEvent(QGraphicsWidget* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_polishEvent());
}

QVariant  PythonQtWrapper_QGraphicsWidget::propertyChange(QGraphicsWidget* theWrappedObject, const QString&  propertyName, const QVariant&  value)
{
  return ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_propertyChange(propertyName, value));
}

QRectF  PythonQtWrapper_QGraphicsWidget::rect(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->rect());
}

void PythonQtWrapper_QGraphicsWidget::releaseShortcut(QGraphicsWidget* theWrappedObject, int  id)
{
  ( theWrappedObject->releaseShortcut(id));
}

void PythonQtWrapper_QGraphicsWidget::removeAction(QGraphicsWidget* theWrappedObject, QAction*  action)
{
  ( theWrappedObject->removeAction(action));
}

void PythonQtWrapper_QGraphicsWidget::resize(QGraphicsWidget* theWrappedObject, const QSizeF&  size)
{
  ( theWrappedObject->resize(size));
}

void PythonQtWrapper_QGraphicsWidget::resize(QGraphicsWidget* theWrappedObject, qreal  w, qreal  h)
{
  ( theWrappedObject->resize(w, h));
}

void PythonQtWrapper_QGraphicsWidget::resizeEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneResizeEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_resizeEvent(event));
}

void PythonQtWrapper_QGraphicsWidget::setAttribute(QGraphicsWidget* theWrappedObject, Qt::WidgetAttribute  attribute, bool  on)
{
  ( theWrappedObject->setAttribute(attribute, on));
}

void PythonQtWrapper_QGraphicsWidget::setAutoFillBackground(QGraphicsWidget* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setAutoFillBackground(enabled));
}

void PythonQtWrapper_QGraphicsWidget::setContentsMargins(QGraphicsWidget* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom)
{
  ( theWrappedObject->setContentsMargins(left, top, right, bottom));
}

void PythonQtWrapper_QGraphicsWidget::setFocusPolicy(QGraphicsWidget* theWrappedObject, Qt::FocusPolicy  policy)
{
  ( theWrappedObject->setFocusPolicy(policy));
}

void PythonQtWrapper_QGraphicsWidget::setFont(QGraphicsWidget* theWrappedObject, const QFont&  font)
{
  ( theWrappedObject->setFont(font));
}

void PythonQtWrapper_QGraphicsWidget::setGeometry(QGraphicsWidget* theWrappedObject, const QRectF&  rect)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_setGeometry(rect));
}

void PythonQtWrapper_QGraphicsWidget::setGeometry(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
  ( theWrappedObject->setGeometry(x, y, w, h));
}

void PythonQtWrapper_QGraphicsWidget::setLayout(QGraphicsWidget* theWrappedObject, QGraphicsLayout*  layout)
{
  ( theWrappedObject->setLayout(layout));
}

void PythonQtWrapper_QGraphicsWidget::setLayoutDirection(QGraphicsWidget* theWrappedObject, Qt::LayoutDirection  direction)
{
  ( theWrappedObject->setLayoutDirection(direction));
}

void PythonQtWrapper_QGraphicsWidget::setPalette(QGraphicsWidget* theWrappedObject, const QPalette&  palette)
{
  ( theWrappedObject->setPalette(palette));
}

void PythonQtWrapper_QGraphicsWidget::setShortcutAutoRepeat(QGraphicsWidget* theWrappedObject, int  id, bool  enabled)
{
  ( theWrappedObject->setShortcutAutoRepeat(id, enabled));
}

void PythonQtWrapper_QGraphicsWidget::setShortcutEnabled(QGraphicsWidget* theWrappedObject, int  id, bool  enabled)
{
  ( theWrappedObject->setShortcutEnabled(id, enabled));
}

void PythonQtWrapper_QGraphicsWidget::setStyle(QGraphicsWidget* theWrappedObject, QStyle*  style)
{
  ( theWrappedObject->setStyle(style));
}

void PythonQtWrapper_QGraphicsWidget::static_QGraphicsWidget_setTabOrder(QGraphicsWidget*  first, QGraphicsWidget*  second)
{
  (QGraphicsWidget::setTabOrder(first, second));
}

void PythonQtWrapper_QGraphicsWidget::setWindowFlags(QGraphicsWidget* theWrappedObject, Qt::WindowFlags  wFlags)
{
  ( theWrappedObject->setWindowFlags(wFlags));
}

void PythonQtWrapper_QGraphicsWidget::setWindowFrameMargins(QGraphicsWidget* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom)
{
  ( theWrappedObject->setWindowFrameMargins(left, top, right, bottom));
}

void PythonQtWrapper_QGraphicsWidget::setWindowTitle(QGraphicsWidget* theWrappedObject, const QString&  title)
{
  ( theWrappedObject->setWindowTitle(title));
}

QPainterPath  PythonQtWrapper_QGraphicsWidget::shape(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->shape());
}

void PythonQtWrapper_QGraphicsWidget::showEvent(QGraphicsWidget* theWrappedObject, QShowEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_showEvent(event));
}

QSizeF  PythonQtWrapper_QGraphicsWidget::size(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QSizeF  PythonQtWrapper_QGraphicsWidget::sizeHint(QGraphicsWidget* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_sizeHint(which, constraint));
}

QStyle*  PythonQtWrapper_QGraphicsWidget::style(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->style());
}

bool  PythonQtWrapper_QGraphicsWidget::testAttribute(QGraphicsWidget* theWrappedObject, Qt::WidgetAttribute  attribute) const
{
  return ( theWrappedObject->testAttribute(attribute));
}

int  PythonQtWrapper_QGraphicsWidget::type(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

void PythonQtWrapper_QGraphicsWidget::ungrabKeyboardEvent(QGraphicsWidget* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_ungrabKeyboardEvent(event));
}

void PythonQtWrapper_QGraphicsWidget::ungrabMouseEvent(QGraphicsWidget* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_ungrabMouseEvent(event));
}

void PythonQtWrapper_QGraphicsWidget::unsetLayoutDirection(QGraphicsWidget* theWrappedObject)
{
  ( theWrappedObject->unsetLayoutDirection());
}

void PythonQtWrapper_QGraphicsWidget::unsetWindowFrameMargins(QGraphicsWidget* theWrappedObject)
{
  ( theWrappedObject->unsetWindowFrameMargins());
}

void PythonQtWrapper_QGraphicsWidget::updateGeometry(QGraphicsWidget* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_updateGeometry());
}

Qt::WindowFlags  PythonQtWrapper_QGraphicsWidget::windowFlags(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->windowFlags());
}

bool  PythonQtWrapper_QGraphicsWidget::windowFrameEvent(QGraphicsWidget* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_windowFrameEvent(e));
}

QRectF  PythonQtWrapper_QGraphicsWidget::windowFrameGeometry(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->windowFrameGeometry());
}

QRectF  PythonQtWrapper_QGraphicsWidget::windowFrameRect(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->windowFrameRect());
}

Qt::WindowFrameSection  PythonQtWrapper_QGraphicsWidget::windowFrameSectionAt(QGraphicsWidget* theWrappedObject, const QPointF&  pos) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_windowFrameSectionAt(pos));
}

QString  PythonQtWrapper_QGraphicsWidget::windowTitle(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->windowTitle());
}

Qt::WindowType  PythonQtWrapper_QGraphicsWidget::windowType(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->windowType());
}


