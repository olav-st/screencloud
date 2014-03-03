#include "com_trolltech_qt_gui10.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QTextCursor>
#include <QTextFrame>
#include <QTextLayout>
#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qboxlayout.h>
#include <qbrush.h>
#include <qbuttongroup.h>
#include <qbytearray.h>
#include <qcalendarwidget.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdatetimeedit.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qheaderview.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qline.h>
#include <qlineedit.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix.h>
#include <qmenu.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextlist.h>
#include <qtextobject.h>
#include <qtextoption.h>
#include <qtexttable.h>
#include <qtoolbar.h>
#include <qtoolbox.h>
#include <qtoolbutton.h>
#include <qtransform.h>
#include <qtreeview.h>
#include <qtreewidget.h>
#include <qundogroup.h>
#include <qundostack.h>
#include <qundoview.h>
#include <qvector.h>
#include <qwidget.h>

QTextInlineObject* PythonQtWrapper_QTextInlineObject::new_QTextInlineObject()
{ 
return new QTextInlineObject(); }

qreal  PythonQtWrapper_QTextInlineObject::ascent(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->ascent());
}

qreal  PythonQtWrapper_QTextInlineObject::descent(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->descent());
}

QTextFormat  PythonQtWrapper_QTextInlineObject::format(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

int  PythonQtWrapper_QTextInlineObject::formatIndex(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->formatIndex());
}

qreal  PythonQtWrapper_QTextInlineObject::height(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

bool  PythonQtWrapper_QTextInlineObject::isValid(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QRectF  PythonQtWrapper_QTextInlineObject::rect(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->rect());
}

void PythonQtWrapper_QTextInlineObject::setAscent(QTextInlineObject* theWrappedObject, qreal  a)
{
  ( theWrappedObject->setAscent(a));
}

void PythonQtWrapper_QTextInlineObject::setDescent(QTextInlineObject* theWrappedObject, qreal  d)
{
  ( theWrappedObject->setDescent(d));
}

void PythonQtWrapper_QTextInlineObject::setWidth(QTextInlineObject* theWrappedObject, qreal  w)
{
  ( theWrappedObject->setWidth(w));
}

Qt::LayoutDirection  PythonQtWrapper_QTextInlineObject::textDirection(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->textDirection());
}

int  PythonQtWrapper_QTextInlineObject::textPosition(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->textPosition());
}

qreal  PythonQtWrapper_QTextInlineObject::width(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->width());
}



PythonQtShell_QTextItem::~PythonQtShell_QTextItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextItem* PythonQtWrapper_QTextItem::new_QTextItem()
{ 
return new PythonQtShell_QTextItem(); }

qreal  PythonQtWrapper_QTextItem::ascent(QTextItem* theWrappedObject) const
{
  return ( theWrappedObject->ascent());
}

qreal  PythonQtWrapper_QTextItem::descent(QTextItem* theWrappedObject) const
{
  return ( theWrappedObject->descent());
}

QFont  PythonQtWrapper_QTextItem::font(QTextItem* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

QTextItem::RenderFlags  PythonQtWrapper_QTextItem::renderFlags(QTextItem* theWrappedObject) const
{
  return ( theWrappedObject->renderFlags());
}

QString  PythonQtWrapper_QTextItem::text(QTextItem* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

qreal  PythonQtWrapper_QTextItem::width(QTextItem* theWrappedObject) const
{
  return ( theWrappedObject->width());
}



QTextLine* PythonQtWrapper_QTextLine::new_QTextLine()
{ 
return new QTextLine(); }

qreal  PythonQtWrapper_QTextLine::ascent(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->ascent());
}

qreal  PythonQtWrapper_QTextLine::cursorToX(QTextLine* theWrappedObject, int  cursorPos, QTextLine::Edge  edge) const
{
  return ( theWrappedObject->cursorToX(cursorPos, edge));
}

qreal  PythonQtWrapper_QTextLine::descent(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->descent());
}

void PythonQtWrapper_QTextLine::draw(QTextLine* theWrappedObject, QPainter*  p, const QPointF&  point, const QTextLayout::FormatRange*  selection) const
{
  ( theWrappedObject->draw(p, point, selection));
}

qreal  PythonQtWrapper_QTextLine::height(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

qreal  PythonQtWrapper_QTextLine::horizontalAdvance(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->horizontalAdvance());
}

bool  PythonQtWrapper_QTextLine::isValid(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

qreal  PythonQtWrapper_QTextLine::leading(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->leading());
}

bool  PythonQtWrapper_QTextLine::leadingIncluded(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->leadingIncluded());
}

int  PythonQtWrapper_QTextLine::lineNumber(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->lineNumber());
}

QRectF  PythonQtWrapper_QTextLine::naturalTextRect(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->naturalTextRect());
}

qreal  PythonQtWrapper_QTextLine::naturalTextWidth(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->naturalTextWidth());
}

QPointF  PythonQtWrapper_QTextLine::position(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

QRectF  PythonQtWrapper_QTextLine::rect(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->rect());
}

void PythonQtWrapper_QTextLine::setLeadingIncluded(QTextLine* theWrappedObject, bool  included)
{
  ( theWrappedObject->setLeadingIncluded(included));
}

void PythonQtWrapper_QTextLine::setLineWidth(QTextLine* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setLineWidth(width));
}

void PythonQtWrapper_QTextLine::setNumColumns(QTextLine* theWrappedObject, int  columns)
{
  ( theWrappedObject->setNumColumns(columns));
}

void PythonQtWrapper_QTextLine::setNumColumns(QTextLine* theWrappedObject, int  columns, qreal  alignmentWidth)
{
  ( theWrappedObject->setNumColumns(columns, alignmentWidth));
}

void PythonQtWrapper_QTextLine::setPosition(QTextLine* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setPosition(pos));
}

int  PythonQtWrapper_QTextLine::textLength(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->textLength());
}

int  PythonQtWrapper_QTextLine::textStart(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->textStart());
}

qreal  PythonQtWrapper_QTextLine::width(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->width());
}

qreal  PythonQtWrapper_QTextLine::x(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

int  PythonQtWrapper_QTextLine::xToCursor(QTextLine* theWrappedObject, qreal  x, QTextLine::CursorPosition  arg__2) const
{
  return ( theWrappedObject->xToCursor(x, arg__2));
}

qreal  PythonQtWrapper_QTextLine::y(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->y());
}



PythonQtShell_QTextList::~PythonQtShell_QTextList() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTextList::blockFormatChanged(const QTextBlock&  block)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "blockFormatChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QTextBlock&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&block};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextList::blockFormatChanged(block);
}
void PythonQtShell_QTextList::blockInserted(const QTextBlock&  block)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "blockInserted");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QTextBlock&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&block};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextList::blockInserted(block);
}
void PythonQtShell_QTextList::blockRemoved(const QTextBlock&  block)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "blockRemoved");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QTextBlock&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&block};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextList::blockRemoved(block);
}
void PythonQtShell_QTextList::childEvent(QChildEvent*  arg__1)
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
  QTextList::childEvent(arg__1);
}
void PythonQtShell_QTextList::customEvent(QEvent*  arg__1)
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
  QTextList::customEvent(arg__1);
}
bool  PythonQtShell_QTextList::event(QEvent*  arg__1)
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
  return QTextList::event(arg__1);
}
bool  PythonQtShell_QTextList::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QTextList::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTextList::timerEvent(QTimerEvent*  arg__1)
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
  QTextList::timerEvent(arg__1);
}
QTextList* PythonQtWrapper_QTextList::new_QTextList(QTextDocument*  doc)
{ 
return new PythonQtShell_QTextList(doc); }

void PythonQtWrapper_QTextList::add(QTextList* theWrappedObject, const QTextBlock&  block)
{
  ( theWrappedObject->add(block));
}

int  PythonQtWrapper_QTextList::count(QTextList* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

QTextListFormat  PythonQtWrapper_QTextList::format(QTextList* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

QTextBlock  PythonQtWrapper_QTextList::item(QTextList* theWrappedObject, int  i) const
{
  return ( theWrappedObject->item(i));
}

int  PythonQtWrapper_QTextList::itemNumber(QTextList* theWrappedObject, const QTextBlock&  arg__1) const
{
  return ( theWrappedObject->itemNumber(arg__1));
}

QString  PythonQtWrapper_QTextList::itemText(QTextList* theWrappedObject, const QTextBlock&  arg__1) const
{
  return ( theWrappedObject->itemText(arg__1));
}

void PythonQtWrapper_QTextList::remove(QTextList* theWrappedObject, const QTextBlock&  arg__1)
{
  ( theWrappedObject->remove(arg__1));
}

void PythonQtWrapper_QTextList::removeItem(QTextList* theWrappedObject, int  i)
{
  ( theWrappedObject->removeItem(i));
}

void PythonQtWrapper_QTextList::setFormat(QTextList* theWrappedObject, const QTextListFormat&  format)
{
  ( theWrappedObject->setFormat(format));
}



PythonQtShell_QTextListFormat::~PythonQtShell_QTextListFormat() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextListFormat* PythonQtWrapper_QTextListFormat::new_QTextListFormat()
{ 
return new PythonQtShell_QTextListFormat(); }

int  PythonQtWrapper_QTextListFormat::indent(QTextListFormat* theWrappedObject) const
{
  return ( theWrappedObject->indent());
}

bool  PythonQtWrapper_QTextListFormat::isValid(QTextListFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QString  PythonQtWrapper_QTextListFormat::numberPrefix(QTextListFormat* theWrappedObject) const
{
  return ( theWrappedObject->numberPrefix());
}

QString  PythonQtWrapper_QTextListFormat::numberSuffix(QTextListFormat* theWrappedObject) const
{
  return ( theWrappedObject->numberSuffix());
}

void PythonQtWrapper_QTextListFormat::setIndent(QTextListFormat* theWrappedObject, int  indent)
{
  ( theWrappedObject->setIndent(indent));
}

void PythonQtWrapper_QTextListFormat::setNumberPrefix(QTextListFormat* theWrappedObject, const QString&  numberPrefix)
{
  ( theWrappedObject->setNumberPrefix(numberPrefix));
}

void PythonQtWrapper_QTextListFormat::setNumberSuffix(QTextListFormat* theWrappedObject, const QString&  numberSuffix)
{
  ( theWrappedObject->setNumberSuffix(numberSuffix));
}

void PythonQtWrapper_QTextListFormat::setStyle(QTextListFormat* theWrappedObject, QTextListFormat::Style  style)
{
  ( theWrappedObject->setStyle(style));
}

QTextListFormat::Style  PythonQtWrapper_QTextListFormat::style(QTextListFormat* theWrappedObject) const
{
  return ( theWrappedObject->style());
}



PythonQtShell_QTextObject::~PythonQtShell_QTextObject() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTextObject::childEvent(QChildEvent*  arg__1)
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
  QTextObject::childEvent(arg__1);
}
void PythonQtShell_QTextObject::customEvent(QEvent*  arg__1)
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
  QTextObject::customEvent(arg__1);
}
bool  PythonQtShell_QTextObject::event(QEvent*  arg__1)
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
  return QTextObject::event(arg__1);
}
bool  PythonQtShell_QTextObject::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QTextObject::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTextObject::timerEvent(QTimerEvent*  arg__1)
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
  QTextObject::timerEvent(arg__1);
}
QTextDocument*  PythonQtWrapper_QTextObject::document(QTextObject* theWrappedObject) const
{
  return ( theWrappedObject->document());
}

QTextFormat  PythonQtWrapper_QTextObject::format(QTextObject* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

int  PythonQtWrapper_QTextObject::formatIndex(QTextObject* theWrappedObject) const
{
  return ( theWrappedObject->formatIndex());
}

int  PythonQtWrapper_QTextObject::objectIndex(QTextObject* theWrappedObject) const
{
  return ( theWrappedObject->objectIndex());
}



QTextOption* PythonQtWrapper_QTextOption::new_QTextOption()
{ 
return new QTextOption(); }

QTextOption* PythonQtWrapper_QTextOption::new_QTextOption(Qt::Alignment  alignment)
{ 
return new QTextOption(alignment); }

QTextOption* PythonQtWrapper_QTextOption::new_QTextOption(const QTextOption&  o)
{ 
return new QTextOption(o); }

Qt::Alignment  PythonQtWrapper_QTextOption::alignment(QTextOption* theWrappedObject) const
{
  return ( theWrappedObject->alignment());
}

QTextOption::Flags  PythonQtWrapper_QTextOption::flags(QTextOption* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

QTextOption*  PythonQtWrapper_QTextOption::operator_assign(QTextOption* theWrappedObject, const QTextOption&  o)
{
  return &( (*theWrappedObject)= o);
}

void PythonQtWrapper_QTextOption::setAlignment(QTextOption* theWrappedObject, Qt::Alignment  alignment)
{
  ( theWrappedObject->setAlignment(alignment));
}

void PythonQtWrapper_QTextOption::setFlags(QTextOption* theWrappedObject, QTextOption::Flags  flags)
{
  ( theWrappedObject->setFlags(flags));
}

void PythonQtWrapper_QTextOption::setTabArray(QTextOption* theWrappedObject, QList<qreal >  tabStops)
{
  ( theWrappedObject->setTabArray(tabStops));
}

void PythonQtWrapper_QTextOption::setTabStop(QTextOption* theWrappedObject, qreal  tabStop)
{
  ( theWrappedObject->setTabStop(tabStop));
}

void PythonQtWrapper_QTextOption::setTabs(QTextOption* theWrappedObject, QList<QTextOption::Tab >  tabStops)
{
  ( theWrappedObject->setTabs(tabStops));
}

void PythonQtWrapper_QTextOption::setTextDirection(QTextOption* theWrappedObject, Qt::LayoutDirection  aDirection)
{
  ( theWrappedObject->setTextDirection(aDirection));
}

void PythonQtWrapper_QTextOption::setUseDesignMetrics(QTextOption* theWrappedObject, bool  b)
{
  ( theWrappedObject->setUseDesignMetrics(b));
}

void PythonQtWrapper_QTextOption::setWrapMode(QTextOption* theWrappedObject, QTextOption::WrapMode  wrap)
{
  ( theWrappedObject->setWrapMode(wrap));
}

QList<qreal >  PythonQtWrapper_QTextOption::tabArray(QTextOption* theWrappedObject) const
{
  return ( theWrappedObject->tabArray());
}

qreal  PythonQtWrapper_QTextOption::tabStop(QTextOption* theWrappedObject) const
{
  return ( theWrappedObject->tabStop());
}

QList<QTextOption::Tab >  PythonQtWrapper_QTextOption::tabs(QTextOption* theWrappedObject) const
{
  return ( theWrappedObject->tabs());
}

Qt::LayoutDirection  PythonQtWrapper_QTextOption::textDirection(QTextOption* theWrappedObject) const
{
  return ( theWrappedObject->textDirection());
}

bool  PythonQtWrapper_QTextOption::useDesignMetrics(QTextOption* theWrappedObject) const
{
  return ( theWrappedObject->useDesignMetrics());
}

QTextOption::WrapMode  PythonQtWrapper_QTextOption::wrapMode(QTextOption* theWrappedObject) const
{
  return ( theWrappedObject->wrapMode());
}



PythonQtShell_QTextOption_Tab::~PythonQtShell_QTextOption_Tab() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextOption::Tab* PythonQtWrapper_QTextOption_Tab::new_QTextOption_Tab()
{ 
return new PythonQtShell_QTextOption_Tab(); }

QTextOption::Tab* PythonQtWrapper_QTextOption_Tab::new_QTextOption_Tab(qreal  pos, QTextOption::TabType  tabType, QChar  delim)
{ 
return new PythonQtShell_QTextOption_Tab(pos, tabType, delim); }

bool  PythonQtWrapper_QTextOption_Tab::__ne__(QTextOption::Tab* theWrappedObject, const QTextOption::Tab&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QTextOption_Tab::__eq__(QTextOption::Tab* theWrappedObject, const QTextOption::Tab&  other) const
{
  return ( (*theWrappedObject)== other);
}



PythonQtShell_QTextTable::~PythonQtShell_QTextTable() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTextTable::childEvent(QChildEvent*  arg__1)
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
  QTextTable::childEvent(arg__1);
}
void PythonQtShell_QTextTable::customEvent(QEvent*  arg__1)
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
  QTextTable::customEvent(arg__1);
}
bool  PythonQtShell_QTextTable::event(QEvent*  arg__1)
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
  return QTextTable::event(arg__1);
}
bool  PythonQtShell_QTextTable::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QTextTable::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTextTable::timerEvent(QTimerEvent*  arg__1)
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
  QTextTable::timerEvent(arg__1);
}
QTextTable* PythonQtWrapper_QTextTable::new_QTextTable(QTextDocument*  doc)
{ 
return new PythonQtShell_QTextTable(doc); }

void PythonQtWrapper_QTextTable::appendColumns(QTextTable* theWrappedObject, int  count)
{
  ( theWrappedObject->appendColumns(count));
}

void PythonQtWrapper_QTextTable::appendRows(QTextTable* theWrappedObject, int  count)
{
  ( theWrappedObject->appendRows(count));
}

QTextTableCell  PythonQtWrapper_QTextTable::cellAt(QTextTable* theWrappedObject, const QTextCursor&  c) const
{
  return ( theWrappedObject->cellAt(c));
}

QTextTableCell  PythonQtWrapper_QTextTable::cellAt(QTextTable* theWrappedObject, int  position) const
{
  return ( theWrappedObject->cellAt(position));
}

QTextTableCell  PythonQtWrapper_QTextTable::cellAt(QTextTable* theWrappedObject, int  row, int  col) const
{
  return ( theWrappedObject->cellAt(row, col));
}

int  PythonQtWrapper_QTextTable::columns(QTextTable* theWrappedObject) const
{
  return ( theWrappedObject->columns());
}

QTextTableFormat  PythonQtWrapper_QTextTable::format(QTextTable* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

void PythonQtWrapper_QTextTable::insertColumns(QTextTable* theWrappedObject, int  pos, int  num)
{
  ( theWrappedObject->insertColumns(pos, num));
}

void PythonQtWrapper_QTextTable::insertRows(QTextTable* theWrappedObject, int  pos, int  num)
{
  ( theWrappedObject->insertRows(pos, num));
}

void PythonQtWrapper_QTextTable::mergeCells(QTextTable* theWrappedObject, const QTextCursor&  cursor)
{
  ( theWrappedObject->mergeCells(cursor));
}

void PythonQtWrapper_QTextTable::mergeCells(QTextTable* theWrappedObject, int  row, int  col, int  numRows, int  numCols)
{
  ( theWrappedObject->mergeCells(row, col, numRows, numCols));
}

void PythonQtWrapper_QTextTable::removeColumns(QTextTable* theWrappedObject, int  pos, int  num)
{
  ( theWrappedObject->removeColumns(pos, num));
}

void PythonQtWrapper_QTextTable::removeRows(QTextTable* theWrappedObject, int  pos, int  num)
{
  ( theWrappedObject->removeRows(pos, num));
}

void PythonQtWrapper_QTextTable::resize(QTextTable* theWrappedObject, int  rows, int  cols)
{
  ( theWrappedObject->resize(rows, cols));
}

QTextCursor  PythonQtWrapper_QTextTable::rowEnd(QTextTable* theWrappedObject, const QTextCursor&  c) const
{
  return ( theWrappedObject->rowEnd(c));
}

QTextCursor  PythonQtWrapper_QTextTable::rowStart(QTextTable* theWrappedObject, const QTextCursor&  c) const
{
  return ( theWrappedObject->rowStart(c));
}

int  PythonQtWrapper_QTextTable::rows(QTextTable* theWrappedObject) const
{
  return ( theWrappedObject->rows());
}

void PythonQtWrapper_QTextTable::setFormat(QTextTable* theWrappedObject, const QTextTableFormat&  format)
{
  ( theWrappedObject->setFormat(format));
}

void PythonQtWrapper_QTextTable::splitCell(QTextTable* theWrappedObject, int  row, int  col, int  numRows, int  numCols)
{
  ( theWrappedObject->splitCell(row, col, numRows, numCols));
}



QTextTableCell* PythonQtWrapper_QTextTableCell::new_QTextTableCell()
{ 
return new QTextTableCell(); }

QTextTableCell* PythonQtWrapper_QTextTableCell::new_QTextTableCell(const QTextTableCell&  o)
{ 
return new QTextTableCell(o); }

QTextFrame::iterator  PythonQtWrapper_QTextTableCell::begin(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->begin());
}

int  PythonQtWrapper_QTextTableCell::column(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->column());
}

int  PythonQtWrapper_QTextTableCell::columnSpan(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->columnSpan());
}

QTextFrame::iterator  PythonQtWrapper_QTextTableCell::end(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->end());
}

QTextCursor  PythonQtWrapper_QTextTableCell::firstCursorPosition(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->firstCursorPosition());
}

int  PythonQtWrapper_QTextTableCell::firstPosition(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->firstPosition());
}

QTextCharFormat  PythonQtWrapper_QTextTableCell::format(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

bool  PythonQtWrapper_QTextTableCell::isValid(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QTextCursor  PythonQtWrapper_QTextTableCell::lastCursorPosition(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->lastCursorPosition());
}

int  PythonQtWrapper_QTextTableCell::lastPosition(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->lastPosition());
}

bool  PythonQtWrapper_QTextTableCell::__ne__(QTextTableCell* theWrappedObject, const QTextTableCell&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QTextTableCell::__eq__(QTextTableCell* theWrappedObject, const QTextTableCell&  other) const
{
  return ( (*theWrappedObject)== other);
}

int  PythonQtWrapper_QTextTableCell::row(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->row());
}

int  PythonQtWrapper_QTextTableCell::rowSpan(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->rowSpan());
}

void PythonQtWrapper_QTextTableCell::setFormat(QTextTableCell* theWrappedObject, const QTextCharFormat&  format)
{
  ( theWrappedObject->setFormat(format));
}

int  PythonQtWrapper_QTextTableCell::tableCellFormatIndex(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->tableCellFormatIndex());
}



PythonQtShell_QTextTableCellFormat::~PythonQtShell_QTextTableCellFormat() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextTableCellFormat* PythonQtWrapper_QTextTableCellFormat::new_QTextTableCellFormat()
{ 
return new PythonQtShell_QTextTableCellFormat(); }

qreal  PythonQtWrapper_QTextTableCellFormat::bottomPadding(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->bottomPadding());
}

bool  PythonQtWrapper_QTextTableCellFormat::isValid(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

qreal  PythonQtWrapper_QTextTableCellFormat::leftPadding(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->leftPadding());
}

qreal  PythonQtWrapper_QTextTableCellFormat::rightPadding(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->rightPadding());
}

void PythonQtWrapper_QTextTableCellFormat::setBottomPadding(QTextTableCellFormat* theWrappedObject, qreal  padding)
{
  ( theWrappedObject->setBottomPadding(padding));
}

void PythonQtWrapper_QTextTableCellFormat::setLeftPadding(QTextTableCellFormat* theWrappedObject, qreal  padding)
{
  ( theWrappedObject->setLeftPadding(padding));
}

void PythonQtWrapper_QTextTableCellFormat::setPadding(QTextTableCellFormat* theWrappedObject, qreal  padding)
{
  ( theWrappedObject->setPadding(padding));
}

void PythonQtWrapper_QTextTableCellFormat::setRightPadding(QTextTableCellFormat* theWrappedObject, qreal  padding)
{
  ( theWrappedObject->setRightPadding(padding));
}

void PythonQtWrapper_QTextTableCellFormat::setTopPadding(QTextTableCellFormat* theWrappedObject, qreal  padding)
{
  ( theWrappedObject->setTopPadding(padding));
}

qreal  PythonQtWrapper_QTextTableCellFormat::topPadding(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->topPadding());
}



PythonQtShell_QTextTableFormat::~PythonQtShell_QTextTableFormat() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextTableFormat* PythonQtWrapper_QTextTableFormat::new_QTextTableFormat()
{ 
return new PythonQtShell_QTextTableFormat(); }

Qt::Alignment  PythonQtWrapper_QTextTableFormat::alignment(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->alignment());
}

qreal  PythonQtWrapper_QTextTableFormat::cellPadding(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->cellPadding());
}

qreal  PythonQtWrapper_QTextTableFormat::cellSpacing(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->cellSpacing());
}

void PythonQtWrapper_QTextTableFormat::clearColumnWidthConstraints(QTextTableFormat* theWrappedObject)
{
  ( theWrappedObject->clearColumnWidthConstraints());
}

QVector<QTextLength >  PythonQtWrapper_QTextTableFormat::columnWidthConstraints(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->columnWidthConstraints());
}

int  PythonQtWrapper_QTextTableFormat::columns(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->columns());
}

int  PythonQtWrapper_QTextTableFormat::headerRowCount(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->headerRowCount());
}

bool  PythonQtWrapper_QTextTableFormat::isValid(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

void PythonQtWrapper_QTextTableFormat::setAlignment(QTextTableFormat* theWrappedObject, Qt::Alignment  alignment)
{
  ( theWrappedObject->setAlignment(alignment));
}

void PythonQtWrapper_QTextTableFormat::setCellPadding(QTextTableFormat* theWrappedObject, qreal  padding)
{
  ( theWrappedObject->setCellPadding(padding));
}

void PythonQtWrapper_QTextTableFormat::setCellSpacing(QTextTableFormat* theWrappedObject, qreal  spacing)
{
  ( theWrappedObject->setCellSpacing(spacing));
}

void PythonQtWrapper_QTextTableFormat::setColumnWidthConstraints(QTextTableFormat* theWrappedObject, const QVector<QTextLength >&  constraints)
{
  ( theWrappedObject->setColumnWidthConstraints(constraints));
}

void PythonQtWrapper_QTextTableFormat::setColumns(QTextTableFormat* theWrappedObject, int  columns)
{
  ( theWrappedObject->setColumns(columns));
}

void PythonQtWrapper_QTextTableFormat::setHeaderRowCount(QTextTableFormat* theWrappedObject, int  count)
{
  ( theWrappedObject->setHeaderRowCount(count));
}



PythonQtShell_QTileRules::~PythonQtShell_QTileRules() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTileRules* PythonQtWrapper_QTileRules::new_QTileRules(Qt::TileRule  horizontalRule, Qt::TileRule  verticalRule)
{ 
return new PythonQtShell_QTileRules(horizontalRule, verticalRule); }

QTileRules* PythonQtWrapper_QTileRules::new_QTileRules(Qt::TileRule  rule)
{ 
return new PythonQtShell_QTileRules(rule); }



PythonQtShell_QTimeEdit::~PythonQtShell_QTimeEdit() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTimeEdit::actionEvent(QActionEvent*  arg__1)
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
  QTimeEdit::actionEvent(arg__1);
}
void PythonQtShell_QTimeEdit::changeEvent(QEvent*  event)
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
  QTimeEdit::changeEvent(event);
}
void PythonQtShell_QTimeEdit::childEvent(QChildEvent*  arg__1)
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
  QTimeEdit::childEvent(arg__1);
}
void PythonQtShell_QTimeEdit::clear()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "clear");
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
  QTimeEdit::clear();
}
void PythonQtShell_QTimeEdit::closeEvent(QCloseEvent*  event)
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
  QTimeEdit::closeEvent(event);
}
void PythonQtShell_QTimeEdit::contextMenuEvent(QContextMenuEvent*  event)
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
  QTimeEdit::contextMenuEvent(event);
}
void PythonQtShell_QTimeEdit::customEvent(QEvent*  arg__1)
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
  QTimeEdit::customEvent(arg__1);
}
QDateTime  PythonQtShell_QTimeEdit::dateTimeFromText(const QString&  text) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dateTimeFromText");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QDateTime" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QDateTime returnValue;
    void* args[2] = {NULL, (void*)&text};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("dateTimeFromText", methodInfo, result);
        } else {
          returnValue = *((QDateTime*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTimeEdit::dateTimeFromText(text);
}
int  PythonQtShell_QTimeEdit::devType() const
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
  return QTimeEdit::devType();
}
void PythonQtShell_QTimeEdit::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragEnterEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTimeEdit::dragEnterEvent(arg__1);
}
void PythonQtShell_QTimeEdit::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTimeEdit::dragLeaveEvent(arg__1);
}
void PythonQtShell_QTimeEdit::dragMoveEvent(QDragMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTimeEdit::dragMoveEvent(arg__1);
}
void PythonQtShell_QTimeEdit::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTimeEdit::dropEvent(arg__1);
}
void PythonQtShell_QTimeEdit::enterEvent(QEvent*  arg__1)
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
  QTimeEdit::enterEvent(arg__1);
}
bool  PythonQtShell_QTimeEdit::event(QEvent*  event)
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
  return QTimeEdit::event(event);
}
bool  PythonQtShell_QTimeEdit::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QTimeEdit::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTimeEdit::fixup(QString&  input) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "fixup");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&input};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTimeEdit::fixup(input);
}
void PythonQtShell_QTimeEdit::focusInEvent(QFocusEvent*  event)
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
  QTimeEdit::focusInEvent(event);
}
bool  PythonQtShell_QTimeEdit::focusNextPrevChild(bool  next)
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
  return QTimeEdit::focusNextPrevChild(next);
}
void PythonQtShell_QTimeEdit::focusOutEvent(QFocusEvent*  event)
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
  QTimeEdit::focusOutEvent(event);
}
int  PythonQtShell_QTimeEdit::heightForWidth(int  arg__1) const
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
  return QTimeEdit::heightForWidth(arg__1);
}
void PythonQtShell_QTimeEdit::hideEvent(QHideEvent*  event)
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
  QTimeEdit::hideEvent(event);
}
void PythonQtShell_QTimeEdit::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QInputMethodEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTimeEdit::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QTimeEdit::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QTimeEdit::inputMethodQuery(arg__1);
}
void PythonQtShell_QTimeEdit::keyPressEvent(QKeyEvent*  event)
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
  QTimeEdit::keyPressEvent(event);
}
void PythonQtShell_QTimeEdit::keyReleaseEvent(QKeyEvent*  event)
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
  QTimeEdit::keyReleaseEvent(event);
}
void PythonQtShell_QTimeEdit::languageChange()
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
  QTimeEdit::languageChange();
}
void PythonQtShell_QTimeEdit::leaveEvent(QEvent*  arg__1)
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
  QTimeEdit::leaveEvent(arg__1);
}
int  PythonQtShell_QTimeEdit::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QTimeEdit::metric(arg__1);
}
void PythonQtShell_QTimeEdit::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTimeEdit::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QTimeEdit::mouseMoveEvent(QMouseEvent*  event)
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
  QTimeEdit::mouseMoveEvent(event);
}
void PythonQtShell_QTimeEdit::mousePressEvent(QMouseEvent*  event)
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
  QTimeEdit::mousePressEvent(event);
}
void PythonQtShell_QTimeEdit::mouseReleaseEvent(QMouseEvent*  event)
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
  QTimeEdit::mouseReleaseEvent(event);
}
void PythonQtShell_QTimeEdit::moveEvent(QMoveEvent*  arg__1)
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
  QTimeEdit::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QTimeEdit::paintEngine() const
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
  return QTimeEdit::paintEngine();
}
void PythonQtShell_QTimeEdit::paintEvent(QPaintEvent*  event)
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
  QTimeEdit::paintEvent(event);
}
void PythonQtShell_QTimeEdit::resizeEvent(QResizeEvent*  event)
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
  QTimeEdit::resizeEvent(event);
}
void PythonQtShell_QTimeEdit::showEvent(QShowEvent*  event)
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
  QTimeEdit::showEvent(event);
}
void PythonQtShell_QTimeEdit::stepBy(int  steps)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "stepBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&steps};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTimeEdit::stepBy(steps);
}
QAbstractSpinBox::StepEnabled  PythonQtShell_QTimeEdit::stepEnabled() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "stepEnabled");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QAbstractSpinBox::StepEnabled"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QAbstractSpinBox::StepEnabled returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("stepEnabled", methodInfo, result);
        } else {
          returnValue = *((QAbstractSpinBox::StepEnabled*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTimeEdit::stepEnabled();
}
void PythonQtShell_QTimeEdit::tabletEvent(QTabletEvent*  arg__1)
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
  QTimeEdit::tabletEvent(arg__1);
}
QString  PythonQtShell_QTimeEdit::textFromDateTime(const QDateTime&  dt) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "textFromDateTime");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QString" , "const QDateTime&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QString returnValue;
    void* args[2] = {NULL, (void*)&dt};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("textFromDateTime", methodInfo, result);
        } else {
          returnValue = *((QString*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTimeEdit::textFromDateTime(dt);
}
void PythonQtShell_QTimeEdit::timerEvent(QTimerEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTimeEdit::timerEvent(event);
}
QValidator::State  PythonQtShell_QTimeEdit::validate(QString&  input, int&  pos) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "validate");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QValidator::State" , "QString&" , "int&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QValidator::State returnValue;
    void* args[3] = {NULL, (void*)&input, (void*)&pos};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("validate", methodInfo, result);
        } else {
          returnValue = *((QValidator::State*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTimeEdit::validate(input, pos);
}
void PythonQtShell_QTimeEdit::wheelEvent(QWheelEvent*  event)
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
  QTimeEdit::wheelEvent(event);
}
QTimeEdit* PythonQtWrapper_QTimeEdit::new_QTimeEdit(QWidget*  parent)
{ 
return new PythonQtShell_QTimeEdit(parent); }

QTimeEdit* PythonQtWrapper_QTimeEdit::new_QTimeEdit(const QTime&  time, QWidget*  parent)
{ 
return new PythonQtShell_QTimeEdit(time, parent); }



PythonQtShell_QToolBar::~PythonQtShell_QToolBar() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QToolBar::actionEvent(QActionEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QActionEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBar::actionEvent(event);
}
void PythonQtShell_QToolBar::changeEvent(QEvent*  event)
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
  QToolBar::changeEvent(event);
}
void PythonQtShell_QToolBar::childEvent(QChildEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBar::childEvent(event);
}
void PythonQtShell_QToolBar::closeEvent(QCloseEvent*  arg__1)
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
  QToolBar::closeEvent(arg__1);
}
void PythonQtShell_QToolBar::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBar::contextMenuEvent(arg__1);
}
void PythonQtShell_QToolBar::customEvent(QEvent*  arg__1)
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
  QToolBar::customEvent(arg__1);
}
int  PythonQtShell_QToolBar::devType() const
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
  return QToolBar::devType();
}
void PythonQtShell_QToolBar::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragEnterEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBar::dragEnterEvent(arg__1);
}
void PythonQtShell_QToolBar::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBar::dragLeaveEvent(arg__1);
}
void PythonQtShell_QToolBar::dragMoveEvent(QDragMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBar::dragMoveEvent(arg__1);
}
void PythonQtShell_QToolBar::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBar::dropEvent(arg__1);
}
void PythonQtShell_QToolBar::enterEvent(QEvent*  arg__1)
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
  QToolBar::enterEvent(arg__1);
}
bool  PythonQtShell_QToolBar::event(QEvent*  event)
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
  return QToolBar::event(event);
}
bool  PythonQtShell_QToolBar::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QToolBar::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QToolBar::focusInEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBar::focusInEvent(arg__1);
}
bool  PythonQtShell_QToolBar::focusNextPrevChild(bool  next)
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
  return QToolBar::focusNextPrevChild(next);
}
void PythonQtShell_QToolBar::focusOutEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBar::focusOutEvent(arg__1);
}
int  PythonQtShell_QToolBar::heightForWidth(int  arg__1) const
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
  return QToolBar::heightForWidth(arg__1);
}
void PythonQtShell_QToolBar::hideEvent(QHideEvent*  arg__1)
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
  QToolBar::hideEvent(arg__1);
}
void PythonQtShell_QToolBar::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QInputMethodEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBar::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QToolBar::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QToolBar::inputMethodQuery(arg__1);
}
void PythonQtShell_QToolBar::keyPressEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBar::keyPressEvent(arg__1);
}
void PythonQtShell_QToolBar::keyReleaseEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBar::keyReleaseEvent(arg__1);
}
void PythonQtShell_QToolBar::languageChange()
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
  QToolBar::languageChange();
}
void PythonQtShell_QToolBar::leaveEvent(QEvent*  arg__1)
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
  QToolBar::leaveEvent(arg__1);
}
int  PythonQtShell_QToolBar::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QToolBar::metric(arg__1);
}
QSize  PythonQtShell_QToolBar::minimumSizeHint() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "getMinimumSizeHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSize"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSize returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("getMinimumSizeHint", methodInfo, result);
        } else {
          returnValue = *((QSize*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QToolBar::minimumSizeHint();
}
void PythonQtShell_QToolBar::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBar::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QToolBar::mouseMoveEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBar::mouseMoveEvent(arg__1);
}
void PythonQtShell_QToolBar::mousePressEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBar::mousePressEvent(arg__1);
}
void PythonQtShell_QToolBar::mouseReleaseEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBar::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QToolBar::moveEvent(QMoveEvent*  arg__1)
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
  QToolBar::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QToolBar::paintEngine() const
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
  return QToolBar::paintEngine();
}
void PythonQtShell_QToolBar::paintEvent(QPaintEvent*  event)
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
  QToolBar::paintEvent(event);
}
void PythonQtShell_QToolBar::resizeEvent(QResizeEvent*  event)
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
  QToolBar::resizeEvent(event);
}
void PythonQtShell_QToolBar::showEvent(QShowEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QShowEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBar::showEvent(arg__1);
}
QSize  PythonQtShell_QToolBar::sizeHint() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "getSizeHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSize"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSize returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("getSizeHint", methodInfo, result);
        } else {
          returnValue = *((QSize*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QToolBar::sizeHint();
}
void PythonQtShell_QToolBar::tabletEvent(QTabletEvent*  arg__1)
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
  QToolBar::tabletEvent(arg__1);
}
void PythonQtShell_QToolBar::timerEvent(QTimerEvent*  arg__1)
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
  QToolBar::timerEvent(arg__1);
}
void PythonQtShell_QToolBar::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBar::wheelEvent(arg__1);
}
QToolBar* PythonQtWrapper_QToolBar::new_QToolBar(QWidget*  parent)
{ 
return new PythonQtShell_QToolBar(parent); }

QToolBar* PythonQtWrapper_QToolBar::new_QToolBar(const QString&  title, QWidget*  parent)
{ 
return new PythonQtShell_QToolBar(title, parent); }

QAction*  PythonQtWrapper_QToolBar::actionAt(QToolBar* theWrappedObject, const QPoint&  p) const
{
  return ( theWrappedObject->actionAt(p));
}

QAction*  PythonQtWrapper_QToolBar::actionAt(QToolBar* theWrappedObject, int  x, int  y) const
{
  return ( theWrappedObject->actionAt(x, y));
}

void PythonQtWrapper_QToolBar::actionEvent(QToolBar* theWrappedObject, QActionEvent*  event)
{
  ( ((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->promoted_actionEvent(event));
}

QRect  PythonQtWrapper_QToolBar::actionGeometry(QToolBar* theWrappedObject, QAction*  action) const
{
  return ( theWrappedObject->actionGeometry(action));
}

void PythonQtWrapper_QToolBar::addAction(QToolBar* theWrappedObject, QAction*  action)
{
  ( theWrappedObject->addAction(action));
}

QAction*  PythonQtWrapper_QToolBar::addAction(QToolBar* theWrappedObject, const QIcon&  icon, const QString&  text)
{
  return ( theWrappedObject->addAction(icon, text));
}

QAction*  PythonQtWrapper_QToolBar::addAction(QToolBar* theWrappedObject, const QIcon&  icon, const QString&  text, const QObject*  receiver, const char*  member)
{
  return ( theWrappedObject->addAction(icon, text, receiver, member));
}

QAction*  PythonQtWrapper_QToolBar::addAction(QToolBar* theWrappedObject, const QString&  text)
{
  return ( theWrappedObject->addAction(text));
}

QAction*  PythonQtWrapper_QToolBar::addAction(QToolBar* theWrappedObject, const QString&  text, const QObject*  receiver, const char*  member)
{
  return ( theWrappedObject->addAction(text, receiver, member));
}

QAction*  PythonQtWrapper_QToolBar::addSeparator(QToolBar* theWrappedObject)
{
  return ( theWrappedObject->addSeparator());
}

QAction*  PythonQtWrapper_QToolBar::addWidget(QToolBar* theWrappedObject, QWidget*  widget)
{
  return ( theWrappedObject->addWidget(widget));
}

Qt::ToolBarAreas  PythonQtWrapper_QToolBar::allowedAreas(QToolBar* theWrappedObject) const
{
  return ( theWrappedObject->allowedAreas());
}

void PythonQtWrapper_QToolBar::changeEvent(QToolBar* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->promoted_changeEvent(event));
}

void PythonQtWrapper_QToolBar::childEvent(QToolBar* theWrappedObject, QChildEvent*  event)
{
  ( ((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->promoted_childEvent(event));
}

void PythonQtWrapper_QToolBar::clear(QToolBar* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QToolBar::event(QToolBar* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->promoted_event(event));
}

QSize  PythonQtWrapper_QToolBar::iconSize(QToolBar* theWrappedObject) const
{
  return ( theWrappedObject->iconSize());
}

QAction*  PythonQtWrapper_QToolBar::insertSeparator(QToolBar* theWrappedObject, QAction*  before)
{
  return ( theWrappedObject->insertSeparator(before));
}

QAction*  PythonQtWrapper_QToolBar::insertWidget(QToolBar* theWrappedObject, QAction*  before, QWidget*  widget)
{
  return ( theWrappedObject->insertWidget(before, widget));
}

bool  PythonQtWrapper_QToolBar::isAreaAllowed(QToolBar* theWrappedObject, Qt::ToolBarArea  area) const
{
  return ( theWrappedObject->isAreaAllowed(area));
}

bool  PythonQtWrapper_QToolBar::isFloatable(QToolBar* theWrappedObject) const
{
  return ( theWrappedObject->isFloatable());
}

bool  PythonQtWrapper_QToolBar::isFloating(QToolBar* theWrappedObject) const
{
  return ( theWrappedObject->isFloating());
}

bool  PythonQtWrapper_QToolBar::isMovable(QToolBar* theWrappedObject) const
{
  return ( theWrappedObject->isMovable());
}

Qt::Orientation  PythonQtWrapper_QToolBar::orientation(QToolBar* theWrappedObject) const
{
  return ( theWrappedObject->orientation());
}

void PythonQtWrapper_QToolBar::paintEvent(QToolBar* theWrappedObject, QPaintEvent*  event)
{
  ( ((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->promoted_paintEvent(event));
}

void PythonQtWrapper_QToolBar::resizeEvent(QToolBar* theWrappedObject, QResizeEvent*  event)
{
  ( ((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->promoted_resizeEvent(event));
}

void PythonQtWrapper_QToolBar::setAllowedAreas(QToolBar* theWrappedObject, Qt::ToolBarAreas  areas)
{
  ( theWrappedObject->setAllowedAreas(areas));
}

void PythonQtWrapper_QToolBar::setFloatable(QToolBar* theWrappedObject, bool  floatable)
{
  ( theWrappedObject->setFloatable(floatable));
}

void PythonQtWrapper_QToolBar::setMovable(QToolBar* theWrappedObject, bool  movable)
{
  ( theWrappedObject->setMovable(movable));
}

void PythonQtWrapper_QToolBar::setOrientation(QToolBar* theWrappedObject, Qt::Orientation  orientation)
{
  ( theWrappedObject->setOrientation(orientation));
}

QAction*  PythonQtWrapper_QToolBar::toggleViewAction(QToolBar* theWrappedObject) const
{
  return ( theWrappedObject->toggleViewAction());
}

Qt::ToolButtonStyle  PythonQtWrapper_QToolBar::toolButtonStyle(QToolBar* theWrappedObject) const
{
  return ( theWrappedObject->toolButtonStyle());
}

QWidget*  PythonQtWrapper_QToolBar::widgetForAction(QToolBar* theWrappedObject, QAction*  action) const
{
  return ( theWrappedObject->widgetForAction(action));
}



QToolBarChangeEvent* PythonQtWrapper_QToolBarChangeEvent::new_QToolBarChangeEvent(bool  t)
{ 
return new QToolBarChangeEvent(t); }

bool  PythonQtWrapper_QToolBarChangeEvent::toggle(QToolBarChangeEvent* theWrappedObject) const
{
  return ( theWrappedObject->toggle());
}



PythonQtShell_QToolBox::~PythonQtShell_QToolBox() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QToolBox::actionEvent(QActionEvent*  arg__1)
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
  QToolBox::actionEvent(arg__1);
}
void PythonQtShell_QToolBox::changeEvent(QEvent*  arg__1)
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
  QToolBox::changeEvent(arg__1);
}
void PythonQtShell_QToolBox::childEvent(QChildEvent*  arg__1)
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
  QToolBox::childEvent(arg__1);
}
void PythonQtShell_QToolBox::closeEvent(QCloseEvent*  arg__1)
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
  QToolBox::closeEvent(arg__1);
}
void PythonQtShell_QToolBox::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBox::contextMenuEvent(arg__1);
}
void PythonQtShell_QToolBox::customEvent(QEvent*  arg__1)
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
  QToolBox::customEvent(arg__1);
}
int  PythonQtShell_QToolBox::devType() const
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
  return QToolBox::devType();
}
void PythonQtShell_QToolBox::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragEnterEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBox::dragEnterEvent(arg__1);
}
void PythonQtShell_QToolBox::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBox::dragLeaveEvent(arg__1);
}
void PythonQtShell_QToolBox::dragMoveEvent(QDragMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBox::dragMoveEvent(arg__1);
}
void PythonQtShell_QToolBox::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBox::dropEvent(arg__1);
}
void PythonQtShell_QToolBox::enterEvent(QEvent*  arg__1)
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
  QToolBox::enterEvent(arg__1);
}
bool  PythonQtShell_QToolBox::event(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
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
  return QToolBox::event(e);
}
bool  PythonQtShell_QToolBox::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QToolBox::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QToolBox::focusInEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBox::focusInEvent(arg__1);
}
bool  PythonQtShell_QToolBox::focusNextPrevChild(bool  next)
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
  return QToolBox::focusNextPrevChild(next);
}
void PythonQtShell_QToolBox::focusOutEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBox::focusOutEvent(arg__1);
}
int  PythonQtShell_QToolBox::heightForWidth(int  arg__1) const
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
  return QToolBox::heightForWidth(arg__1);
}
void PythonQtShell_QToolBox::hideEvent(QHideEvent*  arg__1)
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
  QToolBox::hideEvent(arg__1);
}
void PythonQtShell_QToolBox::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QInputMethodEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBox::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QToolBox::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QToolBox::inputMethodQuery(arg__1);
}
void PythonQtShell_QToolBox::itemInserted(int  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemInserted");
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
  QToolBox::itemInserted(index);
}
void PythonQtShell_QToolBox::itemRemoved(int  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemRemoved");
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
  QToolBox::itemRemoved(index);
}
void PythonQtShell_QToolBox::keyPressEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBox::keyPressEvent(arg__1);
}
void PythonQtShell_QToolBox::keyReleaseEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBox::keyReleaseEvent(arg__1);
}
void PythonQtShell_QToolBox::languageChange()
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
  QToolBox::languageChange();
}
void PythonQtShell_QToolBox::leaveEvent(QEvent*  arg__1)
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
  QToolBox::leaveEvent(arg__1);
}
int  PythonQtShell_QToolBox::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QToolBox::metric(arg__1);
}
QSize  PythonQtShell_QToolBox::minimumSizeHint() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "getMinimumSizeHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSize"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSize returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("getMinimumSizeHint", methodInfo, result);
        } else {
          returnValue = *((QSize*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QToolBox::minimumSizeHint();
}
void PythonQtShell_QToolBox::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBox::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QToolBox::mouseMoveEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBox::mouseMoveEvent(arg__1);
}
void PythonQtShell_QToolBox::mousePressEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBox::mousePressEvent(arg__1);
}
void PythonQtShell_QToolBox::mouseReleaseEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBox::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QToolBox::moveEvent(QMoveEvent*  arg__1)
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
  QToolBox::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QToolBox::paintEngine() const
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
  return QToolBox::paintEngine();
}
void PythonQtShell_QToolBox::paintEvent(QPaintEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPaintEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBox::paintEvent(arg__1);
}
void PythonQtShell_QToolBox::resizeEvent(QResizeEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QResizeEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBox::resizeEvent(arg__1);
}
void PythonQtShell_QToolBox::showEvent(QShowEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QShowEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBox::showEvent(e);
}
void PythonQtShell_QToolBox::tabletEvent(QTabletEvent*  arg__1)
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
  QToolBox::tabletEvent(arg__1);
}
void PythonQtShell_QToolBox::timerEvent(QTimerEvent*  arg__1)
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
  QToolBox::timerEvent(arg__1);
}
void PythonQtShell_QToolBox::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolBox::wheelEvent(arg__1);
}
QToolBox* PythonQtWrapper_QToolBox::new_QToolBox(QWidget*  parent, Qt::WindowFlags  f)
{ 
return new PythonQtShell_QToolBox(parent, f); }

int  PythonQtWrapper_QToolBox::addItem(QToolBox* theWrappedObject, QWidget*  widget, const QIcon&  icon, const QString&  text)
{
  return ( theWrappedObject->addItem(widget, icon, text));
}

int  PythonQtWrapper_QToolBox::addItem(QToolBox* theWrappedObject, QWidget*  widget, const QString&  text)
{
  return ( theWrappedObject->addItem(widget, text));
}

void PythonQtWrapper_QToolBox::changeEvent(QToolBox* theWrappedObject, QEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QToolBox*)theWrappedObject)->promoted_changeEvent(arg__1));
}

int  PythonQtWrapper_QToolBox::count(QToolBox* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

int  PythonQtWrapper_QToolBox::currentIndex(QToolBox* theWrappedObject) const
{
  return ( theWrappedObject->currentIndex());
}

QWidget*  PythonQtWrapper_QToolBox::currentWidget(QToolBox* theWrappedObject) const
{
  return ( theWrappedObject->currentWidget());
}

bool  PythonQtWrapper_QToolBox::event(QToolBox* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QToolBox*)theWrappedObject)->promoted_event(e));
}

int  PythonQtWrapper_QToolBox::indexOf(QToolBox* theWrappedObject, QWidget*  widget) const
{
  return ( theWrappedObject->indexOf(widget));
}

int  PythonQtWrapper_QToolBox::insertItem(QToolBox* theWrappedObject, int  index, QWidget*  widget, const QIcon&  icon, const QString&  text)
{
  return ( theWrappedObject->insertItem(index, widget, icon, text));
}

int  PythonQtWrapper_QToolBox::insertItem(QToolBox* theWrappedObject, int  index, QWidget*  widget, const QString&  text)
{
  return ( theWrappedObject->insertItem(index, widget, text));
}

bool  PythonQtWrapper_QToolBox::isItemEnabled(QToolBox* theWrappedObject, int  index) const
{
  return ( theWrappedObject->isItemEnabled(index));
}

QIcon  PythonQtWrapper_QToolBox::itemIcon(QToolBox* theWrappedObject, int  index) const
{
  return ( theWrappedObject->itemIcon(index));
}

void PythonQtWrapper_QToolBox::itemInserted(QToolBox* theWrappedObject, int  index)
{
  ( ((PythonQtPublicPromoter_QToolBox*)theWrappedObject)->promoted_itemInserted(index));
}

void PythonQtWrapper_QToolBox::itemRemoved(QToolBox* theWrappedObject, int  index)
{
  ( ((PythonQtPublicPromoter_QToolBox*)theWrappedObject)->promoted_itemRemoved(index));
}

QString  PythonQtWrapper_QToolBox::itemText(QToolBox* theWrappedObject, int  index) const
{
  return ( theWrappedObject->itemText(index));
}

QString  PythonQtWrapper_QToolBox::itemToolTip(QToolBox* theWrappedObject, int  index) const
{
  return ( theWrappedObject->itemToolTip(index));
}

void PythonQtWrapper_QToolBox::removeItem(QToolBox* theWrappedObject, int  index)
{
  ( theWrappedObject->removeItem(index));
}

void PythonQtWrapper_QToolBox::setItemEnabled(QToolBox* theWrappedObject, int  index, bool  enabled)
{
  ( theWrappedObject->setItemEnabled(index, enabled));
}

void PythonQtWrapper_QToolBox::setItemIcon(QToolBox* theWrappedObject, int  index, const QIcon&  icon)
{
  ( theWrappedObject->setItemIcon(index, icon));
}

void PythonQtWrapper_QToolBox::setItemText(QToolBox* theWrappedObject, int  index, const QString&  text)
{
  ( theWrappedObject->setItemText(index, text));
}

void PythonQtWrapper_QToolBox::setItemToolTip(QToolBox* theWrappedObject, int  index, const QString&  toolTip)
{
  ( theWrappedObject->setItemToolTip(index, toolTip));
}

void PythonQtWrapper_QToolBox::showEvent(QToolBox* theWrappedObject, QShowEvent*  e)
{
  ( ((PythonQtPublicPromoter_QToolBox*)theWrappedObject)->promoted_showEvent(e));
}

QWidget*  PythonQtWrapper_QToolBox::widget(QToolBox* theWrappedObject, int  index) const
{
  return ( theWrappedObject->widget(index));
}



PythonQtShell_QToolButton::~PythonQtShell_QToolButton() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QToolButton::actionEvent(QActionEvent*  arg__1)
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
  QToolButton::actionEvent(arg__1);
}
void PythonQtShell_QToolButton::changeEvent(QEvent*  arg__1)
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
  QToolButton::changeEvent(arg__1);
}
void PythonQtShell_QToolButton::checkStateSet()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "checkStateSet");
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
  QToolButton::checkStateSet();
}
void PythonQtShell_QToolButton::childEvent(QChildEvent*  arg__1)
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
  QToolButton::childEvent(arg__1);
}
void PythonQtShell_QToolButton::closeEvent(QCloseEvent*  arg__1)
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
  QToolButton::closeEvent(arg__1);
}
void PythonQtShell_QToolButton::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolButton::contextMenuEvent(arg__1);
}
void PythonQtShell_QToolButton::customEvent(QEvent*  arg__1)
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
  QToolButton::customEvent(arg__1);
}
int  PythonQtShell_QToolButton::devType() const
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
  return QToolButton::devType();
}
void PythonQtShell_QToolButton::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragEnterEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolButton::dragEnterEvent(arg__1);
}
void PythonQtShell_QToolButton::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolButton::dragLeaveEvent(arg__1);
}
void PythonQtShell_QToolButton::dragMoveEvent(QDragMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolButton::dragMoveEvent(arg__1);
}
void PythonQtShell_QToolButton::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolButton::dropEvent(arg__1);
}
void PythonQtShell_QToolButton::enterEvent(QEvent*  arg__1)
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
  QToolButton::enterEvent(arg__1);
}
bool  PythonQtShell_QToolButton::event(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
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
  return QToolButton::event(e);
}
bool  PythonQtShell_QToolButton::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QToolButton::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QToolButton::focusInEvent(QFocusEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolButton::focusInEvent(e);
}
bool  PythonQtShell_QToolButton::focusNextPrevChild(bool  next)
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
  return QToolButton::focusNextPrevChild(next);
}
void PythonQtShell_QToolButton::focusOutEvent(QFocusEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolButton::focusOutEvent(e);
}
int  PythonQtShell_QToolButton::heightForWidth(int  arg__1) const
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
  return QToolButton::heightForWidth(arg__1);
}
void PythonQtShell_QToolButton::hideEvent(QHideEvent*  arg__1)
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
  QToolButton::hideEvent(arg__1);
}
bool  PythonQtShell_QToolButton::hitButton(const QPoint&  pos) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hitButton");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QPoint&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&pos};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("hitButton", methodInfo, result);
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
  return QToolButton::hitButton(pos);
}
void PythonQtShell_QToolButton::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QInputMethodEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolButton::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QToolButton::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QToolButton::inputMethodQuery(arg__1);
}
void PythonQtShell_QToolButton::keyPressEvent(QKeyEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolButton::keyPressEvent(e);
}
void PythonQtShell_QToolButton::keyReleaseEvent(QKeyEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolButton::keyReleaseEvent(e);
}
void PythonQtShell_QToolButton::languageChange()
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
  QToolButton::languageChange();
}
void PythonQtShell_QToolButton::leaveEvent(QEvent*  arg__1)
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
  QToolButton::leaveEvent(arg__1);
}
int  PythonQtShell_QToolButton::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QToolButton::metric(arg__1);
}
void PythonQtShell_QToolButton::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolButton::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QToolButton::mouseMoveEvent(QMouseEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolButton::mouseMoveEvent(e);
}
void PythonQtShell_QToolButton::mousePressEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolButton::mousePressEvent(arg__1);
}
void PythonQtShell_QToolButton::mouseReleaseEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolButton::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QToolButton::moveEvent(QMoveEvent*  arg__1)
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
  QToolButton::moveEvent(arg__1);
}
void PythonQtShell_QToolButton::nextCheckState()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "nextCheckState");
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
  QToolButton::nextCheckState();
}
QPaintEngine*  PythonQtShell_QToolButton::paintEngine() const
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
  return QToolButton::paintEngine();
}
void PythonQtShell_QToolButton::paintEvent(QPaintEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPaintEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolButton::paintEvent(arg__1);
}
void PythonQtShell_QToolButton::resizeEvent(QResizeEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QResizeEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolButton::resizeEvent(arg__1);
}
void PythonQtShell_QToolButton::showEvent(QShowEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QShowEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolButton::showEvent(arg__1);
}
void PythonQtShell_QToolButton::tabletEvent(QTabletEvent*  arg__1)
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
  QToolButton::tabletEvent(arg__1);
}
void PythonQtShell_QToolButton::timerEvent(QTimerEvent*  arg__1)
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
  QToolButton::timerEvent(arg__1);
}
void PythonQtShell_QToolButton::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QToolButton::wheelEvent(arg__1);
}
QToolButton* PythonQtWrapper_QToolButton::new_QToolButton(QWidget*  parent)
{ 
return new PythonQtShell_QToolButton(parent); }

void PythonQtWrapper_QToolButton::actionEvent(QToolButton* theWrappedObject, QActionEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->promoted_actionEvent(arg__1));
}

Qt::ArrowType  PythonQtWrapper_QToolButton::arrowType(QToolButton* theWrappedObject) const
{
  return ( theWrappedObject->arrowType());
}

bool  PythonQtWrapper_QToolButton::autoRaise(QToolButton* theWrappedObject) const
{
  return ( theWrappedObject->autoRaise());
}

void PythonQtWrapper_QToolButton::changeEvent(QToolButton* theWrappedObject, QEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->promoted_changeEvent(arg__1));
}

QAction*  PythonQtWrapper_QToolButton::defaultAction(QToolButton* theWrappedObject) const
{
  return ( theWrappedObject->defaultAction());
}

void PythonQtWrapper_QToolButton::enterEvent(QToolButton* theWrappedObject, QEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->promoted_enterEvent(arg__1));
}

bool  PythonQtWrapper_QToolButton::event(QToolButton* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->promoted_event(e));
}

bool  PythonQtWrapper_QToolButton::hitButton(QToolButton* theWrappedObject, const QPoint&  pos) const
{
  return ( ((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->promoted_hitButton(pos));
}

void PythonQtWrapper_QToolButton::leaveEvent(QToolButton* theWrappedObject, QEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->promoted_leaveEvent(arg__1));
}

QMenu*  PythonQtWrapper_QToolButton::menu(QToolButton* theWrappedObject) const
{
  return ( theWrappedObject->menu());
}

QSize  PythonQtWrapper_QToolButton::minimumSizeHint(QToolButton* theWrappedObject) const
{
  return ( theWrappedObject->minimumSizeHint());
}

void PythonQtWrapper_QToolButton::mousePressEvent(QToolButton* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->promoted_mousePressEvent(arg__1));
}

void PythonQtWrapper_QToolButton::mouseReleaseEvent(QToolButton* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->promoted_mouseReleaseEvent(arg__1));
}

void PythonQtWrapper_QToolButton::nextCheckState(QToolButton* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->promoted_nextCheckState());
}

void PythonQtWrapper_QToolButton::paintEvent(QToolButton* theWrappedObject, QPaintEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->promoted_paintEvent(arg__1));
}

QToolButton::ToolButtonPopupMode  PythonQtWrapper_QToolButton::popupMode(QToolButton* theWrappedObject) const
{
  return ( theWrappedObject->popupMode());
}

void PythonQtWrapper_QToolButton::setArrowType(QToolButton* theWrappedObject, Qt::ArrowType  type)
{
  ( theWrappedObject->setArrowType(type));
}

void PythonQtWrapper_QToolButton::setAutoRaise(QToolButton* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setAutoRaise(enable));
}

void PythonQtWrapper_QToolButton::setMenu(QToolButton* theWrappedObject, QMenu*  menu)
{
  ( theWrappedObject->setMenu(menu));
}

void PythonQtWrapper_QToolButton::setPopupMode(QToolButton* theWrappedObject, QToolButton::ToolButtonPopupMode  mode)
{
  ( theWrappedObject->setPopupMode(mode));
}

QSize  PythonQtWrapper_QToolButton::sizeHint(QToolButton* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

void PythonQtWrapper_QToolButton::timerEvent(QToolButton* theWrappedObject, QTimerEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->promoted_timerEvent(arg__1));
}

Qt::ToolButtonStyle  PythonQtWrapper_QToolButton::toolButtonStyle(QToolButton* theWrappedObject) const
{
  return ( theWrappedObject->toolButtonStyle());
}



QFont  PythonQtWrapper_QToolTip::static_QToolTip_font()
{
  return (QToolTip::font());
}

void PythonQtWrapper_QToolTip::static_QToolTip_hideText()
{
  (QToolTip::hideText());
}

bool  PythonQtWrapper_QToolTip::static_QToolTip_isVisible()
{
  return (QToolTip::isVisible());
}

QPalette  PythonQtWrapper_QToolTip::static_QToolTip_palette()
{
  return (QToolTip::palette());
}

void PythonQtWrapper_QToolTip::static_QToolTip_setFont(const QFont&  arg__1)
{
  (QToolTip::setFont(arg__1));
}

void PythonQtWrapper_QToolTip::static_QToolTip_setPalette(const QPalette&  arg__1)
{
  (QToolTip::setPalette(arg__1));
}

void PythonQtWrapper_QToolTip::static_QToolTip_showText(const QPoint&  pos, const QString&  text, QWidget*  w)
{
  (QToolTip::showText(pos, text, w));
}

void PythonQtWrapper_QToolTip::static_QToolTip_showText(const QPoint&  pos, const QString&  text, QWidget*  w, const QRect&  rect)
{
  (QToolTip::showText(pos, text, w, rect));
}

QString  PythonQtWrapper_QToolTip::static_QToolTip_text()
{
  return (QToolTip::text());
}



PythonQtShell_QTouchEvent::~PythonQtShell_QTouchEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTouchEvent* PythonQtWrapper_QTouchEvent::new_QTouchEvent(QEvent::Type  eventType, QTouchEvent::DeviceType  deviceType, Qt::KeyboardModifiers  modifiers, Qt::TouchPointStates  touchPointStates, const QList<QTouchEvent::TouchPoint >&  touchPoints)
{ 
return new PythonQtShell_QTouchEvent(eventType, deviceType, modifiers, touchPointStates, touchPoints); }

QTouchEvent::DeviceType  PythonQtWrapper_QTouchEvent::deviceType(QTouchEvent* theWrappedObject) const
{
  return ( theWrappedObject->deviceType());
}

void PythonQtWrapper_QTouchEvent::setDeviceType(QTouchEvent* theWrappedObject, QTouchEvent::DeviceType  adeviceType)
{
  ( theWrappedObject->setDeviceType(adeviceType));
}

void PythonQtWrapper_QTouchEvent::setTouchPointStates(QTouchEvent* theWrappedObject, Qt::TouchPointStates  aTouchPointStates)
{
  ( theWrappedObject->setTouchPointStates(aTouchPointStates));
}

void PythonQtWrapper_QTouchEvent::setTouchPoints(QTouchEvent* theWrappedObject, const QList<QTouchEvent::TouchPoint >&  atouchPoints)
{
  ( theWrappedObject->setTouchPoints(atouchPoints));
}

void PythonQtWrapper_QTouchEvent::setWidget(QTouchEvent* theWrappedObject, QWidget*  awidget)
{
  ( theWrappedObject->setWidget(awidget));
}

Qt::TouchPointStates  PythonQtWrapper_QTouchEvent::touchPointStates(QTouchEvent* theWrappedObject) const
{
  return ( theWrappedObject->touchPointStates());
}

const QList<QTouchEvent::TouchPoint >*  PythonQtWrapper_QTouchEvent::touchPoints(QTouchEvent* theWrappedObject) const
{
  return &( theWrappedObject->touchPoints());
}

QWidget*  PythonQtWrapper_QTouchEvent::widget(QTouchEvent* theWrappedObject) const
{
  return ( theWrappedObject->widget());
}



QTouchEvent::TouchPoint* PythonQtWrapper_QTouchEvent_TouchPoint::new_QTouchEvent_TouchPoint(const QTouchEvent::TouchPoint&  other)
{ 
return new QTouchEvent::TouchPoint(other); }

QTouchEvent::TouchPoint* PythonQtWrapper_QTouchEvent_TouchPoint::new_QTouchEvent_TouchPoint(int  id)
{ 
return new QTouchEvent::TouchPoint(id); }

int  PythonQtWrapper_QTouchEvent_TouchPoint::id(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->id());
}

bool  PythonQtWrapper_QTouchEvent_TouchPoint::isPrimary(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->isPrimary());
}

QPointF  PythonQtWrapper_QTouchEvent_TouchPoint::lastNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->lastNormalizedPos());
}

QPointF  PythonQtWrapper_QTouchEvent_TouchPoint::lastPos(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->lastPos());
}

QPointF  PythonQtWrapper_QTouchEvent_TouchPoint::lastScenePos(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->lastScenePos());
}

QPointF  PythonQtWrapper_QTouchEvent_TouchPoint::lastScreenPos(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->lastScreenPos());
}

QPointF  PythonQtWrapper_QTouchEvent_TouchPoint::normalizedPos(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->normalizedPos());
}

QTouchEvent::TouchPoint*  PythonQtWrapper_QTouchEvent_TouchPoint::operator_assign(QTouchEvent::TouchPoint* theWrappedObject, const QTouchEvent::TouchPoint&  other)
{
  return &( (*theWrappedObject)= other);
}

QPointF  PythonQtWrapper_QTouchEvent_TouchPoint::pos(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

qreal  PythonQtWrapper_QTouchEvent_TouchPoint::pressure(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->pressure());
}

QRectF  PythonQtWrapper_QTouchEvent_TouchPoint::rect(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->rect());
}

QPointF  PythonQtWrapper_QTouchEvent_TouchPoint::scenePos(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->scenePos());
}

QRectF  PythonQtWrapper_QTouchEvent_TouchPoint::sceneRect(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->sceneRect());
}

QPointF  PythonQtWrapper_QTouchEvent_TouchPoint::screenPos(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->screenPos());
}

QRectF  PythonQtWrapper_QTouchEvent_TouchPoint::screenRect(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->screenRect());
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setId(QTouchEvent::TouchPoint* theWrappedObject, int  id)
{
  ( theWrappedObject->setId(id));
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setLastNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastNormalizedPos)
{
  ( theWrappedObject->setLastNormalizedPos(lastNormalizedPos));
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setLastPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastPos)
{
  ( theWrappedObject->setLastPos(lastPos));
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setLastScenePos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastScenePos)
{
  ( theWrappedObject->setLastScenePos(lastScenePos));
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setLastScreenPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastScreenPos)
{
  ( theWrappedObject->setLastScreenPos(lastScreenPos));
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  normalizedPos)
{
  ( theWrappedObject->setNormalizedPos(normalizedPos));
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setPos(pos));
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setPressure(QTouchEvent::TouchPoint* theWrappedObject, qreal  pressure)
{
  ( theWrappedObject->setPressure(pressure));
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setRect(QTouchEvent::TouchPoint* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->setRect(rect));
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setScenePos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  scenePos)
{
  ( theWrappedObject->setScenePos(scenePos));
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setSceneRect(QTouchEvent::TouchPoint* theWrappedObject, const QRectF&  sceneRect)
{
  ( theWrappedObject->setSceneRect(sceneRect));
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setScreenPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  screenPos)
{
  ( theWrappedObject->setScreenPos(screenPos));
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setScreenRect(QTouchEvent::TouchPoint* theWrappedObject, const QRectF&  screenRect)
{
  ( theWrappedObject->setScreenRect(screenRect));
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setStartNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startNormalizedPos)
{
  ( theWrappedObject->setStartNormalizedPos(startNormalizedPos));
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setStartPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startPos)
{
  ( theWrappedObject->setStartPos(startPos));
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setStartScenePos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startScenePos)
{
  ( theWrappedObject->setStartScenePos(startScenePos));
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setStartScreenPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startScreenPos)
{
  ( theWrappedObject->setStartScreenPos(startScreenPos));
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setState(QTouchEvent::TouchPoint* theWrappedObject, Qt::TouchPointStates  state)
{
  ( theWrappedObject->setState(state));
}

QPointF  PythonQtWrapper_QTouchEvent_TouchPoint::startNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->startNormalizedPos());
}

QPointF  PythonQtWrapper_QTouchEvent_TouchPoint::startPos(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->startPos());
}

QPointF  PythonQtWrapper_QTouchEvent_TouchPoint::startScenePos(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->startScenePos());
}

QPointF  PythonQtWrapper_QTouchEvent_TouchPoint::startScreenPos(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->startScreenPos());
}

Qt::TouchPointState  PythonQtWrapper_QTouchEvent_TouchPoint::state(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->state());
}



QTransform* PythonQtWrapper_QTransform::new_QTransform()
{ 
return new QTransform(); }

QTransform* PythonQtWrapper_QTransform::new_QTransform(const QMatrix&  mtx)
{ 
return new QTransform(mtx); }

QTransform* PythonQtWrapper_QTransform::new_QTransform(qreal  h11, qreal  h12, qreal  h13, qreal  h21, qreal  h22, qreal  h23, qreal  h31, qreal  h32, qreal  h33)
{ 
return new QTransform(h11, h12, h13, h21, h22, h23, h31, h32, h33); }

QTransform* PythonQtWrapper_QTransform::new_QTransform(qreal  h11, qreal  h12, qreal  h21, qreal  h22, qreal  dx, qreal  dy)
{ 
return new QTransform(h11, h12, h21, h22, dx, dy); }

QTransform  PythonQtWrapper_QTransform::adjoint(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->adjoint());
}

qreal  PythonQtWrapper_QTransform::det(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->det());
}

qreal  PythonQtWrapper_QTransform::determinant(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->determinant());
}

qreal  PythonQtWrapper_QTransform::dx(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->dx());
}

qreal  PythonQtWrapper_QTransform::dy(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->dy());
}

QTransform  PythonQtWrapper_QTransform::static_QTransform_fromScale(qreal  dx, qreal  dy)
{
  return (QTransform::fromScale(dx, dy));
}

QTransform  PythonQtWrapper_QTransform::static_QTransform_fromTranslate(qreal  dx, qreal  dy)
{
  return (QTransform::fromTranslate(dx, dy));
}

QTransform  PythonQtWrapper_QTransform::inverted(QTransform* theWrappedObject, bool*  invertible) const
{
  return ( theWrappedObject->inverted(invertible));
}

bool  PythonQtWrapper_QTransform::isAffine(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->isAffine());
}

bool  PythonQtWrapper_QTransform::isIdentity(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->isIdentity());
}

bool  PythonQtWrapper_QTransform::isInvertible(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->isInvertible());
}

bool  PythonQtWrapper_QTransform::isRotating(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->isRotating());
}

bool  PythonQtWrapper_QTransform::isScaling(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->isScaling());
}

bool  PythonQtWrapper_QTransform::isTranslating(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->isTranslating());
}

qreal  PythonQtWrapper_QTransform::m11(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->m11());
}

qreal  PythonQtWrapper_QTransform::m12(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->m12());
}

qreal  PythonQtWrapper_QTransform::m13(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->m13());
}

qreal  PythonQtWrapper_QTransform::m21(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->m21());
}

qreal  PythonQtWrapper_QTransform::m22(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->m22());
}

qreal  PythonQtWrapper_QTransform::m23(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->m23());
}

qreal  PythonQtWrapper_QTransform::m31(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->m31());
}

qreal  PythonQtWrapper_QTransform::m32(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->m32());
}

qreal  PythonQtWrapper_QTransform::m33(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->m33());
}

QLine  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QLine&  l) const
{
  return ( theWrappedObject->map(l));
}

QLineF  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QLineF&  l) const
{
  return ( theWrappedObject->map(l));
}

QPainterPath  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QPainterPath&  p) const
{
  return ( theWrappedObject->map(p));
}

QPoint  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QPoint&  p) const
{
  return ( theWrappedObject->map(p));
}

QPointF  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QPointF&  p) const
{
  return ( theWrappedObject->map(p));
}

QPolygon  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QPolygon&  a) const
{
  return ( theWrappedObject->map(a));
}

QPolygonF  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QPolygonF&  a) const
{
  return ( theWrappedObject->map(a));
}

QRegion  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QRegion&  r) const
{
  return ( theWrappedObject->map(r));
}

void PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, qreal  x, qreal  y, qreal*  tx, qreal*  ty) const
{
  ( theWrappedObject->map(x, y, tx, ty));
}

QRect  PythonQtWrapper_QTransform::mapRect(QTransform* theWrappedObject, const QRect&  arg__1) const
{
  return ( theWrappedObject->mapRect(arg__1));
}

QRectF  PythonQtWrapper_QTransform::mapRect(QTransform* theWrappedObject, const QRectF&  arg__1) const
{
  return ( theWrappedObject->mapRect(arg__1));
}

QPolygon  PythonQtWrapper_QTransform::mapToPolygon(QTransform* theWrappedObject, const QRect&  r) const
{
  return ( theWrappedObject->mapToPolygon(r));
}

bool  PythonQtWrapper_QTransform::__ne__(QTransform* theWrappedObject, const QTransform&  arg__1) const
{
  return ( (*theWrappedObject)!= arg__1);
}

QTransform  PythonQtWrapper_QTransform::multiplied(QTransform* theWrappedObject, const QTransform&  o) const
{
  return ( (*theWrappedObject)* o);
}

QTransform  PythonQtWrapper_QTransform::__mul__(QTransform* theWrappedObject, qreal  n)
{
  return ( (*theWrappedObject)* n);
}

QTransform*  PythonQtWrapper_QTransform::__imul__(QTransform* theWrappedObject, const QTransform&  arg__1)
{
  return &( (*theWrappedObject)*= arg__1);
}

QTransform*  PythonQtWrapper_QTransform::__imul__(QTransform* theWrappedObject, qreal  div)
{
  return &( (*theWrappedObject)*= div);
}

QTransform  PythonQtWrapper_QTransform::__add__(QTransform* theWrappedObject, qreal  n)
{
  return ( (*theWrappedObject)+ n);
}

QTransform*  PythonQtWrapper_QTransform::__iadd__(QTransform* theWrappedObject, qreal  div)
{
  return &( (*theWrappedObject)+= div);
}

QTransform  PythonQtWrapper_QTransform::__sub__(QTransform* theWrappedObject, qreal  n)
{
  return ( (*theWrappedObject)- n);
}

QTransform*  PythonQtWrapper_QTransform::__isub__(QTransform* theWrappedObject, qreal  div)
{
  return &( (*theWrappedObject)-= div);
}

QTransform  PythonQtWrapper_QTransform::__div__(QTransform* theWrappedObject, qreal  n)
{
  return ( (*theWrappedObject)/ n);
}

QTransform*  PythonQtWrapper_QTransform::__idiv__(QTransform* theWrappedObject, qreal  div)
{
  return &( (*theWrappedObject)/= div);
}

void PythonQtWrapper_QTransform::writeTo(QTransform* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QTransform::__eq__(QTransform* theWrappedObject, const QTransform&  arg__1) const
{
  return ( (*theWrappedObject)== arg__1);
}

void PythonQtWrapper_QTransform::readFrom(QTransform* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

bool  PythonQtWrapper_QTransform::static_QTransform_quadToQuad(const QPolygonF&  one, const QPolygonF&  two, QTransform&  result)
{
  return (QTransform::quadToQuad(one, two, result));
}

bool  PythonQtWrapper_QTransform::static_QTransform_quadToSquare(const QPolygonF&  quad, QTransform&  result)
{
  return (QTransform::quadToSquare(quad, result));
}

void PythonQtWrapper_QTransform::reset(QTransform* theWrappedObject)
{
  ( theWrappedObject->reset());
}

QTransform*  PythonQtWrapper_QTransform::rotate(QTransform* theWrappedObject, qreal  a, Qt::Axis  axis)
{
  return &( theWrappedObject->rotate(a, axis));
}

QTransform*  PythonQtWrapper_QTransform::rotateRadians(QTransform* theWrappedObject, qreal  a, Qt::Axis  axis)
{
  return &( theWrappedObject->rotateRadians(a, axis));
}

QTransform*  PythonQtWrapper_QTransform::scale(QTransform* theWrappedObject, qreal  sx, qreal  sy)
{
  return &( theWrappedObject->scale(sx, sy));
}

void PythonQtWrapper_QTransform::setMatrix(QTransform* theWrappedObject, qreal  m11, qreal  m12, qreal  m13, qreal  m21, qreal  m22, qreal  m23, qreal  m31, qreal  m32, qreal  m33)
{
  ( theWrappedObject->setMatrix(m11, m12, m13, m21, m22, m23, m31, m32, m33));
}

QTransform*  PythonQtWrapper_QTransform::shear(QTransform* theWrappedObject, qreal  sh, qreal  sv)
{
  return &( theWrappedObject->shear(sh, sv));
}

bool  PythonQtWrapper_QTransform::static_QTransform_squareToQuad(const QPolygonF&  square, QTransform&  result)
{
  return (QTransform::squareToQuad(square, result));
}

const QMatrix*  PythonQtWrapper_QTransform::toAffine(QTransform* theWrappedObject) const
{
  return &( theWrappedObject->toAffine());
}

QTransform*  PythonQtWrapper_QTransform::translate(QTransform* theWrappedObject, qreal  dx, qreal  dy)
{
  return &( theWrappedObject->translate(dx, dy));
}

QTransform  PythonQtWrapper_QTransform::transposed(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->transposed());
}

QTransform::TransformationType  PythonQtWrapper_QTransform::type(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString PythonQtWrapper_QTransform::py_toString(QTransform* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QTreeView::~PythonQtShell_QTreeView() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTreeView::actionEvent(QActionEvent*  arg__1)
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
  QTreeView::actionEvent(arg__1);
}
void PythonQtShell_QTreeView::changeEvent(QEvent*  arg__1)
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
  QTreeView::changeEvent(arg__1);
}
void PythonQtShell_QTreeView::childEvent(QChildEvent*  arg__1)
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
  QTreeView::childEvent(arg__1);
}
void PythonQtShell_QTreeView::closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEditor");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWidget*" , "QAbstractItemDelegate::EndEditHint"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&editor, (void*)&hint};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::closeEditor(editor, hint);
}
void PythonQtShell_QTreeView::closeEvent(QCloseEvent*  arg__1)
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
  QTreeView::closeEvent(arg__1);
}
void PythonQtShell_QTreeView::commitData(QWidget*  editor)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "commitData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&editor};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::commitData(editor);
}
void PythonQtShell_QTreeView::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::contextMenuEvent(arg__1);
}
void PythonQtShell_QTreeView::currentChanged(const QModelIndex&  current, const QModelIndex&  previous)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "currentChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&current, (void*)&previous};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::currentChanged(current, previous);
}
void PythonQtShell_QTreeView::customEvent(QEvent*  arg__1)
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
  QTreeView::customEvent(arg__1);
}
void PythonQtShell_QTreeView::dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dataChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&topLeft, (void*)&bottomRight};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::dataChanged(topLeft, bottomRight);
}
int  PythonQtShell_QTreeView::devType() const
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
  return QTreeView::devType();
}
void PythonQtShell_QTreeView::doItemsLayout()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "doItemsLayout");
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
  QTreeView::doItemsLayout();
}
void PythonQtShell_QTreeView::dragEnterEvent(QDragEnterEvent*  event)
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
  QTreeView::dragEnterEvent(event);
}
void PythonQtShell_QTreeView::dragLeaveEvent(QDragLeaveEvent*  event)
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
  QTreeView::dragLeaveEvent(event);
}
void PythonQtShell_QTreeView::dragMoveEvent(QDragMoveEvent*  event)
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
  QTreeView::dragMoveEvent(event);
}
void PythonQtShell_QTreeView::drawBranches(QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawBranches");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QRect&" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&painter, (void*)&rect, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::drawBranches(painter, rect, index);
}
void PythonQtShell_QTreeView::drawRow(QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawRow");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QStyleOptionViewItem&" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&painter, (void*)&options, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::drawRow(painter, options, index);
}
void PythonQtShell_QTreeView::dropEvent(QDropEvent*  event)
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
  QTreeView::dropEvent(event);
}
bool  PythonQtShell_QTreeView::edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "edit");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "QAbstractItemView::EditTrigger" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&index, (void*)&trigger, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("edit", methodInfo, result);
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
  return QTreeView::edit(index, trigger, event);
}
void PythonQtShell_QTreeView::editorDestroyed(QObject*  editor)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "editorDestroyed");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&editor};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::editorDestroyed(editor);
}
void PythonQtShell_QTreeView::enterEvent(QEvent*  arg__1)
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
  QTreeView::enterEvent(arg__1);
}
bool  PythonQtShell_QTreeView::event(QEvent*  event)
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
  return QTreeView::event(event);
}
bool  PythonQtShell_QTreeView::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QTreeView::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTreeView::focusInEvent(QFocusEvent*  event)
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
  QTreeView::focusInEvent(event);
}
bool  PythonQtShell_QTreeView::focusNextPrevChild(bool  next)
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
  return QTreeView::focusNextPrevChild(next);
}
void PythonQtShell_QTreeView::focusOutEvent(QFocusEvent*  event)
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
  QTreeView::focusOutEvent(event);
}
int  PythonQtShell_QTreeView::heightForWidth(int  arg__1) const
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
  return QTreeView::heightForWidth(arg__1);
}
void PythonQtShell_QTreeView::hideEvent(QHideEvent*  arg__1)
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
  QTreeView::hideEvent(arg__1);
}
int  PythonQtShell_QTreeView::horizontalOffset() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "horizontalOffset");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("horizontalOffset", methodInfo, result);
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
  return QTreeView::horizontalOffset();
}
void PythonQtShell_QTreeView::horizontalScrollbarAction(int  action)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "horizontalScrollbarAction");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&action};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::horizontalScrollbarAction(action);
}
void PythonQtShell_QTreeView::horizontalScrollbarValueChanged(int  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "horizontalScrollbarValueChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::horizontalScrollbarValueChanged(value);
}
QModelIndex  PythonQtShell_QTreeView::indexAt(const QPoint&  p) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "indexAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QModelIndex" , "const QPoint&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue;
    void* args[2] = {NULL, (void*)&p};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("indexAt", methodInfo, result);
        } else {
          returnValue = *((QModelIndex*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTreeView::indexAt(p);
}
void PythonQtShell_QTreeView::inputMethodEvent(QInputMethodEvent*  event)
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
  QTreeView::inputMethodEvent(event);
}
QVariant  PythonQtShell_QTreeView::inputMethodQuery(Qt::InputMethodQuery  query) const
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
  return QTreeView::inputMethodQuery(query);
}
bool  PythonQtShell_QTreeView::isIndexHidden(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isIndexHidden");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isIndexHidden", methodInfo, result);
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
  return QTreeView::isIndexHidden(index);
}
void PythonQtShell_QTreeView::keyPressEvent(QKeyEvent*  event)
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
  QTreeView::keyPressEvent(event);
}
void PythonQtShell_QTreeView::keyReleaseEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::keyReleaseEvent(arg__1);
}
void PythonQtShell_QTreeView::keyboardSearch(const QString&  search)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyboardSearch");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&search};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::keyboardSearch(search);
}
void PythonQtShell_QTreeView::languageChange()
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
  QTreeView::languageChange();
}
void PythonQtShell_QTreeView::leaveEvent(QEvent*  arg__1)
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
  QTreeView::leaveEvent(arg__1);
}
int  PythonQtShell_QTreeView::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QTreeView::metric(arg__1);
}
void PythonQtShell_QTreeView::mouseDoubleClickEvent(QMouseEvent*  event)
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
  QTreeView::mouseDoubleClickEvent(event);
}
void PythonQtShell_QTreeView::mouseMoveEvent(QMouseEvent*  event)
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
  QTreeView::mouseMoveEvent(event);
}
void PythonQtShell_QTreeView::mousePressEvent(QMouseEvent*  event)
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
  QTreeView::mousePressEvent(event);
}
void PythonQtShell_QTreeView::mouseReleaseEvent(QMouseEvent*  event)
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
  QTreeView::mouseReleaseEvent(event);
}
void PythonQtShell_QTreeView::moveEvent(QMoveEvent*  arg__1)
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
  QTreeView::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QTreeView::paintEngine() const
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
  return QTreeView::paintEngine();
}
void PythonQtShell_QTreeView::paintEvent(QPaintEvent*  event)
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
  QTreeView::paintEvent(event);
}
void PythonQtShell_QTreeView::reset()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "reset");
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
  QTreeView::reset();
}
void PythonQtShell_QTreeView::resizeEvent(QResizeEvent*  event)
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
  QTreeView::resizeEvent(event);
}
void PythonQtShell_QTreeView::rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "rowsAboutToBeRemoved");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&" , "int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&parent, (void*)&start, (void*)&end};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::rowsAboutToBeRemoved(parent, start, end);
}
void PythonQtShell_QTreeView::rowsInserted(const QModelIndex&  parent, int  start, int  end)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "rowsInserted");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&" , "int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&parent, (void*)&start, (void*)&end};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::rowsInserted(parent, start, end);
}
void PythonQtShell_QTreeView::scrollContentsBy(int  dx, int  dy)
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
  QTreeView::scrollContentsBy(dx, dy);
}
void PythonQtShell_QTreeView::scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "scrollTo");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&" , "QAbstractItemView::ScrollHint"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&index, (void*)&hint};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::scrollTo(index, hint);
}
void PythonQtShell_QTreeView::selectAll()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectAll");
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
  QTreeView::selectAll();
}
QList<QModelIndex >  PythonQtShell_QTreeView::selectedIndexes() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectedIndexes");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QList<QModelIndex >"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QList<QModelIndex > returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("selectedIndexes", methodInfo, result);
        } else {
          returnValue = *((QList<QModelIndex >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTreeView::selectedIndexes();
}
void PythonQtShell_QTreeView::selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectionChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QItemSelection&" , "const QItemSelection&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&selected, (void*)&deselected};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::selectionChanged(selected, deselected);
}
QItemSelectionModel::SelectionFlags  PythonQtShell_QTreeView::selectionCommand(const QModelIndex&  index, const QEvent*  event) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectionCommand");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QItemSelectionModel::SelectionFlags" , "const QModelIndex&" , "const QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QItemSelectionModel::SelectionFlags returnValue;
    void* args[3] = {NULL, (void*)&index, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("selectionCommand", methodInfo, result);
        } else {
          returnValue = *((QItemSelectionModel::SelectionFlags*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTreeView::selectionCommand(index, event);
}
void PythonQtShell_QTreeView::setModel(QAbstractItemModel*  model)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setModel");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QAbstractItemModel*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&model};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::setModel(model);
}
void PythonQtShell_QTreeView::setRootIndex(const QModelIndex&  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setRootIndex");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::setRootIndex(index);
}
void PythonQtShell_QTreeView::setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setSelection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QRect&" , "QItemSelectionModel::SelectionFlags"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&rect, (void*)&command};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::setSelection(rect, command);
}
void PythonQtShell_QTreeView::setSelectionModel(QItemSelectionModel*  selectionModel)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setSelectionModel");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QItemSelectionModel*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&selectionModel};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::setSelectionModel(selectionModel);
}
void PythonQtShell_QTreeView::showEvent(QShowEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QShowEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::showEvent(arg__1);
}
int  PythonQtShell_QTreeView::sizeHintForColumn(int  column) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sizeHintForColumn");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&column};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sizeHintForColumn", methodInfo, result);
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
  return QTreeView::sizeHintForColumn(column);
}
int  PythonQtShell_QTreeView::sizeHintForRow(int  row) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sizeHintForRow");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&row};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sizeHintForRow", methodInfo, result);
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
  return QTreeView::sizeHintForRow(row);
}
void PythonQtShell_QTreeView::startDrag(Qt::DropActions  supportedActions)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "startDrag");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "Qt::DropActions"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&supportedActions};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::startDrag(supportedActions);
}
void PythonQtShell_QTreeView::tabletEvent(QTabletEvent*  arg__1)
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
  QTreeView::tabletEvent(arg__1);
}
void PythonQtShell_QTreeView::timerEvent(QTimerEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::timerEvent(event);
}
void PythonQtShell_QTreeView::updateEditorData()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateEditorData");
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
  QTreeView::updateEditorData();
}
void PythonQtShell_QTreeView::updateEditorGeometries()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateEditorGeometries");
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
  QTreeView::updateEditorGeometries();
}
void PythonQtShell_QTreeView::updateGeometries()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateGeometries");
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
  QTreeView::updateGeometries();
}
int  PythonQtShell_QTreeView::verticalOffset() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "verticalOffset");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("verticalOffset", methodInfo, result);
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
  return QTreeView::verticalOffset();
}
void PythonQtShell_QTreeView::verticalScrollbarAction(int  action)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "verticalScrollbarAction");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&action};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::verticalScrollbarAction(action);
}
void PythonQtShell_QTreeView::verticalScrollbarValueChanged(int  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "verticalScrollbarValueChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::verticalScrollbarValueChanged(value);
}
QStyleOptionViewItem  PythonQtShell_QTreeView::viewOptions() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "viewOptions");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QStyleOptionViewItem"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QStyleOptionViewItem returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("viewOptions", methodInfo, result);
        } else {
          returnValue = *((QStyleOptionViewItem*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTreeView::viewOptions();
}
bool  PythonQtShell_QTreeView::viewportEvent(QEvent*  event)
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
  return QTreeView::viewportEvent(event);
}
QRect  PythonQtShell_QTreeView::visualRect(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "visualRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QRect" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRect returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("visualRect", methodInfo, result);
        } else {
          returnValue = *((QRect*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTreeView::visualRect(index);
}
QRegion  PythonQtShell_QTreeView::visualRegionForSelection(const QItemSelection&  selection) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "visualRegionForSelection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QRegion" , "const QItemSelection&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRegion returnValue;
    void* args[2] = {NULL, (void*)&selection};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("visualRegionForSelection", methodInfo, result);
        } else {
          returnValue = *((QRegion*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTreeView::visualRegionForSelection(selection);
}
void PythonQtShell_QTreeView::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::wheelEvent(arg__1);
}
QTreeView* PythonQtWrapper_QTreeView::new_QTreeView(QWidget*  parent)
{ 
return new PythonQtShell_QTreeView(parent); }

bool  PythonQtWrapper_QTreeView::allColumnsShowFocus(QTreeView* theWrappedObject) const
{
  return ( theWrappedObject->allColumnsShowFocus());
}

int  PythonQtWrapper_QTreeView::autoExpandDelay(QTreeView* theWrappedObject) const
{
  return ( theWrappedObject->autoExpandDelay());
}

int  PythonQtWrapper_QTreeView::columnAt(QTreeView* theWrappedObject, int  x) const
{
  return ( theWrappedObject->columnAt(x));
}

int  PythonQtWrapper_QTreeView::columnViewportPosition(QTreeView* theWrappedObject, int  column) const
{
  return ( theWrappedObject->columnViewportPosition(column));
}

int  PythonQtWrapper_QTreeView::columnWidth(QTreeView* theWrappedObject, int  column) const
{
  return ( theWrappedObject->columnWidth(column));
}

void PythonQtWrapper_QTreeView::currentChanged(QTreeView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  previous)
{
  ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_currentChanged(current, previous));
}

void PythonQtWrapper_QTreeView::dataChanged(QTreeView* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight)
{
  ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_dataChanged(topLeft, bottomRight));
}

void PythonQtWrapper_QTreeView::doItemsLayout(QTreeView* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_doItemsLayout());
}

void PythonQtWrapper_QTreeView::dragMoveEvent(QTreeView* theWrappedObject, QDragMoveEvent*  event)
{
  ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_dragMoveEvent(event));
}

void PythonQtWrapper_QTreeView::drawBranches(QTreeView* theWrappedObject, QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const
{
  ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_drawBranches(painter, rect, index));
}

void PythonQtWrapper_QTreeView::drawRow(QTreeView* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const
{
  ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_drawRow(painter, options, index));
}

bool  PythonQtWrapper_QTreeView::expandsOnDoubleClick(QTreeView* theWrappedObject) const
{
  return ( theWrappedObject->expandsOnDoubleClick());
}

QHeaderView*  PythonQtWrapper_QTreeView::header(QTreeView* theWrappedObject) const
{
  return ( theWrappedObject->header());
}

int  PythonQtWrapper_QTreeView::horizontalOffset(QTreeView* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_horizontalOffset());
}

void PythonQtWrapper_QTreeView::horizontalScrollbarAction(QTreeView* theWrappedObject, int  action)
{
  ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_horizontalScrollbarAction(action));
}

int  PythonQtWrapper_QTreeView::indentation(QTreeView* theWrappedObject) const
{
  return ( theWrappedObject->indentation());
}

QModelIndex  PythonQtWrapper_QTreeView::indexAbove(QTreeView* theWrappedObject, const QModelIndex&  index) const
{
  return ( theWrappedObject->indexAbove(index));
}

QModelIndex  PythonQtWrapper_QTreeView::indexAt(QTreeView* theWrappedObject, const QPoint&  p) const
{
  return ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_indexAt(p));
}

QModelIndex  PythonQtWrapper_QTreeView::indexBelow(QTreeView* theWrappedObject, const QModelIndex&  index) const
{
  return ( theWrappedObject->indexBelow(index));
}

bool  PythonQtWrapper_QTreeView::isAnimated(QTreeView* theWrappedObject) const
{
  return ( theWrappedObject->isAnimated());
}

bool  PythonQtWrapper_QTreeView::isColumnHidden(QTreeView* theWrappedObject, int  column) const
{
  return ( theWrappedObject->isColumnHidden(column));
}

bool  PythonQtWrapper_QTreeView::isExpanded(QTreeView* theWrappedObject, const QModelIndex&  index) const
{
  return ( theWrappedObject->isExpanded(index));
}

bool  PythonQtWrapper_QTreeView::isFirstColumnSpanned(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent) const
{
  return ( theWrappedObject->isFirstColumnSpanned(row, parent));
}

bool  PythonQtWrapper_QTreeView::isHeaderHidden(QTreeView* theWrappedObject) const
{
  return ( theWrappedObject->isHeaderHidden());
}

bool  PythonQtWrapper_QTreeView::isIndexHidden(QTreeView* theWrappedObject, const QModelIndex&  index) const
{
  return ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_isIndexHidden(index));
}

bool  PythonQtWrapper_QTreeView::isRowHidden(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent) const
{
  return ( theWrappedObject->isRowHidden(row, parent));
}

bool  PythonQtWrapper_QTreeView::isSortingEnabled(QTreeView* theWrappedObject) const
{
  return ( theWrappedObject->isSortingEnabled());
}

bool  PythonQtWrapper_QTreeView::itemsExpandable(QTreeView* theWrappedObject) const
{
  return ( theWrappedObject->itemsExpandable());
}

void PythonQtWrapper_QTreeView::keyPressEvent(QTreeView* theWrappedObject, QKeyEvent*  event)
{
  ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_keyPressEvent(event));
}

void PythonQtWrapper_QTreeView::keyboardSearch(QTreeView* theWrappedObject, const QString&  search)
{
  ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_keyboardSearch(search));
}

void PythonQtWrapper_QTreeView::mouseDoubleClickEvent(QTreeView* theWrappedObject, QMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_mouseDoubleClickEvent(event));
}

void PythonQtWrapper_QTreeView::mouseMoveEvent(QTreeView* theWrappedObject, QMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_mouseMoveEvent(event));
}

void PythonQtWrapper_QTreeView::mousePressEvent(QTreeView* theWrappedObject, QMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_mousePressEvent(event));
}

void PythonQtWrapper_QTreeView::mouseReleaseEvent(QTreeView* theWrappedObject, QMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_mouseReleaseEvent(event));
}

void PythonQtWrapper_QTreeView::paintEvent(QTreeView* theWrappedObject, QPaintEvent*  event)
{
  ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_paintEvent(event));
}

void PythonQtWrapper_QTreeView::reset(QTreeView* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_reset());
}

bool  PythonQtWrapper_QTreeView::rootIsDecorated(QTreeView* theWrappedObject) const
{
  return ( theWrappedObject->rootIsDecorated());
}

void PythonQtWrapper_QTreeView::rowsAboutToBeRemoved(QTreeView* theWrappedObject, const QModelIndex&  parent, int  start, int  end)
{
  ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_rowsAboutToBeRemoved(parent, start, end));
}

void PythonQtWrapper_QTreeView::rowsInserted(QTreeView* theWrappedObject, const QModelIndex&  parent, int  start, int  end)
{
  ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_rowsInserted(parent, start, end));
}

void PythonQtWrapper_QTreeView::scrollContentsBy(QTreeView* theWrappedObject, int  dx, int  dy)
{
  ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_scrollContentsBy(dx, dy));
}

void PythonQtWrapper_QTreeView::scrollTo(QTreeView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint)
{
  ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_scrollTo(index, hint));
}

void PythonQtWrapper_QTreeView::selectAll(QTreeView* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_selectAll());
}

QList<QModelIndex >  PythonQtWrapper_QTreeView::selectedIndexes(QTreeView* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_selectedIndexes());
}

void PythonQtWrapper_QTreeView::selectionChanged(QTreeView* theWrappedObject, const QItemSelection&  selected, const QItemSelection&  deselected)
{
  ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_selectionChanged(selected, deselected));
}

void PythonQtWrapper_QTreeView::setAllColumnsShowFocus(QTreeView* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setAllColumnsShowFocus(enable));
}

void PythonQtWrapper_QTreeView::setAnimated(QTreeView* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setAnimated(enable));
}

void PythonQtWrapper_QTreeView::setAutoExpandDelay(QTreeView* theWrappedObject, int  delay)
{
  ( theWrappedObject->setAutoExpandDelay(delay));
}

void PythonQtWrapper_QTreeView::setColumnHidden(QTreeView* theWrappedObject, int  column, bool  hide)
{
  ( theWrappedObject->setColumnHidden(column, hide));
}

void PythonQtWrapper_QTreeView::setColumnWidth(QTreeView* theWrappedObject, int  column, int  width)
{
  ( theWrappedObject->setColumnWidth(column, width));
}

void PythonQtWrapper_QTreeView::setExpanded(QTreeView* theWrappedObject, const QModelIndex&  index, bool  expand)
{
  ( theWrappedObject->setExpanded(index, expand));
}

void PythonQtWrapper_QTreeView::setExpandsOnDoubleClick(QTreeView* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setExpandsOnDoubleClick(enable));
}

void PythonQtWrapper_QTreeView::setFirstColumnSpanned(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent, bool  span)
{
  ( theWrappedObject->setFirstColumnSpanned(row, parent, span));
}

void PythonQtWrapper_QTreeView::setHeader(QTreeView* theWrappedObject, QHeaderView*  header)
{
  ( theWrappedObject->setHeader(header));
}

void PythonQtWrapper_QTreeView::setHeaderHidden(QTreeView* theWrappedObject, bool  hide)
{
  ( theWrappedObject->setHeaderHidden(hide));
}

void PythonQtWrapper_QTreeView::setIndentation(QTreeView* theWrappedObject, int  i)
{
  ( theWrappedObject->setIndentation(i));
}

void PythonQtWrapper_QTreeView::setItemsExpandable(QTreeView* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setItemsExpandable(enable));
}

void PythonQtWrapper_QTreeView::setModel(QTreeView* theWrappedObject, QAbstractItemModel*  model)
{
  ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_setModel(model));
}

void PythonQtWrapper_QTreeView::setRootIndex(QTreeView* theWrappedObject, const QModelIndex&  index)
{
  ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_setRootIndex(index));
}

void PythonQtWrapper_QTreeView::setRootIsDecorated(QTreeView* theWrappedObject, bool  show)
{
  ( theWrappedObject->setRootIsDecorated(show));
}

void PythonQtWrapper_QTreeView::setRowHidden(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent, bool  hide)
{
  ( theWrappedObject->setRowHidden(row, parent, hide));
}

void PythonQtWrapper_QTreeView::setSelection(QTreeView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  command)
{
  ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_setSelection(rect, command));
}

void PythonQtWrapper_QTreeView::setSelectionModel(QTreeView* theWrappedObject, QItemSelectionModel*  selectionModel)
{
  ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_setSelectionModel(selectionModel));
}

void PythonQtWrapper_QTreeView::setSortingEnabled(QTreeView* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setSortingEnabled(enable));
}

void PythonQtWrapper_QTreeView::setUniformRowHeights(QTreeView* theWrappedObject, bool  uniform)
{
  ( theWrappedObject->setUniformRowHeights(uniform));
}

void PythonQtWrapper_QTreeView::setWordWrap(QTreeView* theWrappedObject, bool  on)
{
  ( theWrappedObject->setWordWrap(on));
}

int  PythonQtWrapper_QTreeView::sizeHintForColumn(QTreeView* theWrappedObject, int  column) const
{
  return ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_sizeHintForColumn(column));
}

void PythonQtWrapper_QTreeView::sortByColumn(QTreeView* theWrappedObject, int  column, Qt::SortOrder  order)
{
  ( theWrappedObject->sortByColumn(column, order));
}

void PythonQtWrapper_QTreeView::timerEvent(QTreeView* theWrappedObject, QTimerEvent*  event)
{
  ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_timerEvent(event));
}

bool  PythonQtWrapper_QTreeView::uniformRowHeights(QTreeView* theWrappedObject) const
{
  return ( theWrappedObject->uniformRowHeights());
}

void PythonQtWrapper_QTreeView::updateGeometries(QTreeView* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_updateGeometries());
}

int  PythonQtWrapper_QTreeView::verticalOffset(QTreeView* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_verticalOffset());
}

bool  PythonQtWrapper_QTreeView::viewportEvent(QTreeView* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_viewportEvent(event));
}

QRect  PythonQtWrapper_QTreeView::visualRect(QTreeView* theWrappedObject, const QModelIndex&  index) const
{
  return ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_visualRect(index));
}

QRegion  PythonQtWrapper_QTreeView::visualRegionForSelection(QTreeView* theWrappedObject, const QItemSelection&  selection) const
{
  return ( ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_visualRegionForSelection(selection));
}

bool  PythonQtWrapper_QTreeView::wordWrap(QTreeView* theWrappedObject) const
{
  return ( theWrappedObject->wordWrap());
}



PythonQtShell_QTreeWidget::~PythonQtShell_QTreeWidget() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTreeWidget::actionEvent(QActionEvent*  arg__1)
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
  QTreeWidget::actionEvent(arg__1);
}
void PythonQtShell_QTreeWidget::changeEvent(QEvent*  arg__1)
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
  QTreeWidget::changeEvent(arg__1);
}
void PythonQtShell_QTreeWidget::childEvent(QChildEvent*  arg__1)
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
  QTreeWidget::childEvent(arg__1);
}
void PythonQtShell_QTreeWidget::closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEditor");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWidget*" , "QAbstractItemDelegate::EndEditHint"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&editor, (void*)&hint};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidget::closeEditor(editor, hint);
}
void PythonQtShell_QTreeWidget::closeEvent(QCloseEvent*  arg__1)
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
  QTreeWidget::closeEvent(arg__1);
}
void PythonQtShell_QTreeWidget::commitData(QWidget*  editor)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "commitData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&editor};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidget::commitData(editor);
}
void PythonQtShell_QTreeWidget::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidget::contextMenuEvent(arg__1);
}
void PythonQtShell_QTreeWidget::currentChanged(const QModelIndex&  current, const QModelIndex&  previous)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "currentChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&current, (void*)&previous};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidget::currentChanged(current, previous);
}
void PythonQtShell_QTreeWidget::customEvent(QEvent*  arg__1)
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
  QTreeWidget::customEvent(arg__1);
}
void PythonQtShell_QTreeWidget::dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dataChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&topLeft, (void*)&bottomRight};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidget::dataChanged(topLeft, bottomRight);
}
int  PythonQtShell_QTreeWidget::devType() const
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
  return QTreeWidget::devType();
}
void PythonQtShell_QTreeWidget::doItemsLayout()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "doItemsLayout");
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
  QTreeWidget::doItemsLayout();
}
void PythonQtShell_QTreeWidget::dragEnterEvent(QDragEnterEvent*  event)
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
  QTreeWidget::dragEnterEvent(event);
}
void PythonQtShell_QTreeWidget::dragLeaveEvent(QDragLeaveEvent*  event)
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
  QTreeWidget::dragLeaveEvent(event);
}
void PythonQtShell_QTreeWidget::dragMoveEvent(QDragMoveEvent*  event)
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
  QTreeWidget::dragMoveEvent(event);
}
void PythonQtShell_QTreeWidget::drawBranches(QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawBranches");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QRect&" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&painter, (void*)&rect, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidget::drawBranches(painter, rect, index);
}
void PythonQtShell_QTreeWidget::drawRow(QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawRow");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QStyleOptionViewItem&" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&painter, (void*)&options, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidget::drawRow(painter, options, index);
}
void PythonQtShell_QTreeWidget::dropEvent(QDropEvent*  event)
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
  QTreeWidget::dropEvent(event);
}
bool  PythonQtShell_QTreeWidget::dropMimeData(QTreeWidgetItem*  parent, int  index, const QMimeData*  data, Qt::DropAction  action)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropMimeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QTreeWidgetItem*" , "int" , "const QMimeData*" , "Qt::DropAction"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      bool returnValue;
    void* args[5] = {NULL, (void*)&parent, (void*)&index, (void*)&data, (void*)&action};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("dropMimeData", methodInfo, result);
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
  return QTreeWidget::dropMimeData(parent, index, data, action);
}
bool  PythonQtShell_QTreeWidget::edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "edit");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "QAbstractItemView::EditTrigger" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&index, (void*)&trigger, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("edit", methodInfo, result);
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
  return QTreeWidget::edit(index, trigger, event);
}
void PythonQtShell_QTreeWidget::editorDestroyed(QObject*  editor)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "editorDestroyed");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&editor};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidget::editorDestroyed(editor);
}
void PythonQtShell_QTreeWidget::enterEvent(QEvent*  arg__1)
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
  QTreeWidget::enterEvent(arg__1);
}
bool  PythonQtShell_QTreeWidget::event(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
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
  return QTreeWidget::event(e);
}
bool  PythonQtShell_QTreeWidget::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QTreeWidget::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTreeWidget::focusInEvent(QFocusEvent*  event)
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
  QTreeWidget::focusInEvent(event);
}
bool  PythonQtShell_QTreeWidget::focusNextPrevChild(bool  next)
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
  return QTreeWidget::focusNextPrevChild(next);
}
void PythonQtShell_QTreeWidget::focusOutEvent(QFocusEvent*  event)
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
  QTreeWidget::focusOutEvent(event);
}
int  PythonQtShell_QTreeWidget::heightForWidth(int  arg__1) const
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
  return QTreeWidget::heightForWidth(arg__1);
}
void PythonQtShell_QTreeWidget::hideEvent(QHideEvent*  arg__1)
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
  QTreeWidget::hideEvent(arg__1);
}
int  PythonQtShell_QTreeWidget::horizontalOffset() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "horizontalOffset");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("horizontalOffset", methodInfo, result);
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
  return QTreeWidget::horizontalOffset();
}
void PythonQtShell_QTreeWidget::horizontalScrollbarAction(int  action)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "horizontalScrollbarAction");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&action};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidget::horizontalScrollbarAction(action);
}
void PythonQtShell_QTreeWidget::horizontalScrollbarValueChanged(int  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "horizontalScrollbarValueChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidget::horizontalScrollbarValueChanged(value);
}
QModelIndex  PythonQtShell_QTreeWidget::indexAt(const QPoint&  p) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "indexAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QModelIndex" , "const QPoint&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue;
    void* args[2] = {NULL, (void*)&p};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("indexAt", methodInfo, result);
        } else {
          returnValue = *((QModelIndex*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTreeWidget::indexAt(p);
}
void PythonQtShell_QTreeWidget::inputMethodEvent(QInputMethodEvent*  event)
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
  QTreeWidget::inputMethodEvent(event);
}
QVariant  PythonQtShell_QTreeWidget::inputMethodQuery(Qt::InputMethodQuery  query) const
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
  return QTreeWidget::inputMethodQuery(query);
}
bool  PythonQtShell_QTreeWidget::isIndexHidden(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isIndexHidden");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isIndexHidden", methodInfo, result);
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
  return QTreeWidget::isIndexHidden(index);
}
void PythonQtShell_QTreeWidget::keyPressEvent(QKeyEvent*  event)
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
  QTreeWidget::keyPressEvent(event);
}
void PythonQtShell_QTreeWidget::keyReleaseEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidget::keyReleaseEvent(arg__1);
}
void PythonQtShell_QTreeWidget::keyboardSearch(const QString&  search)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyboardSearch");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&search};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidget::keyboardSearch(search);
}
void PythonQtShell_QTreeWidget::languageChange()
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
  QTreeWidget::languageChange();
}
void PythonQtShell_QTreeWidget::leaveEvent(QEvent*  arg__1)
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
  QTreeWidget::leaveEvent(arg__1);
}
int  PythonQtShell_QTreeWidget::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QTreeWidget::metric(arg__1);
}
QMimeData*  PythonQtShell_QTreeWidget::mimeData(const QList<QTreeWidgetItem* >  items) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mimeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QMimeData*" , "const QList<QTreeWidgetItem* >"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMimeData* returnValue;
    void* args[2] = {NULL, (void*)&items};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("mimeData", methodInfo, result);
        } else {
          returnValue = *((QMimeData**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTreeWidget::mimeData(items);
}
QStringList  PythonQtShell_QTreeWidget::mimeTypes() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mimeTypes");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QStringList"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QStringList returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("mimeTypes", methodInfo, result);
        } else {
          returnValue = *((QStringList*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTreeWidget::mimeTypes();
}
void PythonQtShell_QTreeWidget::mouseDoubleClickEvent(QMouseEvent*  event)
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
  QTreeWidget::mouseDoubleClickEvent(event);
}
void PythonQtShell_QTreeWidget::mouseMoveEvent(QMouseEvent*  event)
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
  QTreeWidget::mouseMoveEvent(event);
}
void PythonQtShell_QTreeWidget::mousePressEvent(QMouseEvent*  event)
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
  QTreeWidget::mousePressEvent(event);
}
void PythonQtShell_QTreeWidget::mouseReleaseEvent(QMouseEvent*  event)
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
  QTreeWidget::mouseReleaseEvent(event);
}
void PythonQtShell_QTreeWidget::moveEvent(QMoveEvent*  arg__1)
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
  QTreeWidget::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QTreeWidget::paintEngine() const
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
  return QTreeWidget::paintEngine();
}
void PythonQtShell_QTreeWidget::paintEvent(QPaintEvent*  event)
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
  QTreeWidget::paintEvent(event);
}
void PythonQtShell_QTreeWidget::reset()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "reset");
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
  QTreeWidget::reset();
}
void PythonQtShell_QTreeWidget::resizeEvent(QResizeEvent*  event)
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
  QTreeWidget::resizeEvent(event);
}
void PythonQtShell_QTreeWidget::rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "rowsAboutToBeRemoved");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&" , "int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&parent, (void*)&start, (void*)&end};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidget::rowsAboutToBeRemoved(parent, start, end);
}
void PythonQtShell_QTreeWidget::rowsInserted(const QModelIndex&  parent, int  start, int  end)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "rowsInserted");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&" , "int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&parent, (void*)&start, (void*)&end};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidget::rowsInserted(parent, start, end);
}
void PythonQtShell_QTreeWidget::scrollContentsBy(int  dx, int  dy)
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
  QTreeWidget::scrollContentsBy(dx, dy);
}
void PythonQtShell_QTreeWidget::scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "scrollTo");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&" , "QAbstractItemView::ScrollHint"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&index, (void*)&hint};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidget::scrollTo(index, hint);
}
void PythonQtShell_QTreeWidget::selectAll()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectAll");
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
  QTreeWidget::selectAll();
}
QList<QModelIndex >  PythonQtShell_QTreeWidget::selectedIndexes() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectedIndexes");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QList<QModelIndex >"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QList<QModelIndex > returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("selectedIndexes", methodInfo, result);
        } else {
          returnValue = *((QList<QModelIndex >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTreeWidget::selectedIndexes();
}
void PythonQtShell_QTreeWidget::selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectionChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QItemSelection&" , "const QItemSelection&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&selected, (void*)&deselected};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidget::selectionChanged(selected, deselected);
}
QItemSelectionModel::SelectionFlags  PythonQtShell_QTreeWidget::selectionCommand(const QModelIndex&  index, const QEvent*  event) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectionCommand");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QItemSelectionModel::SelectionFlags" , "const QModelIndex&" , "const QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QItemSelectionModel::SelectionFlags returnValue;
    void* args[3] = {NULL, (void*)&index, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("selectionCommand", methodInfo, result);
        } else {
          returnValue = *((QItemSelectionModel::SelectionFlags*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTreeWidget::selectionCommand(index, event);
}
void PythonQtShell_QTreeWidget::setRootIndex(const QModelIndex&  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setRootIndex");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidget::setRootIndex(index);
}
void PythonQtShell_QTreeWidget::setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setSelection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QRect&" , "QItemSelectionModel::SelectionFlags"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&rect, (void*)&command};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidget::setSelection(rect, command);
}
void PythonQtShell_QTreeWidget::setSelectionModel(QItemSelectionModel*  selectionModel)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setSelectionModel");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QItemSelectionModel*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&selectionModel};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidget::setSelectionModel(selectionModel);
}
void PythonQtShell_QTreeWidget::showEvent(QShowEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QShowEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidget::showEvent(arg__1);
}
int  PythonQtShell_QTreeWidget::sizeHintForColumn(int  column) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sizeHintForColumn");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&column};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sizeHintForColumn", methodInfo, result);
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
  return QTreeWidget::sizeHintForColumn(column);
}
int  PythonQtShell_QTreeWidget::sizeHintForRow(int  row) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sizeHintForRow");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&row};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sizeHintForRow", methodInfo, result);
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
  return QTreeWidget::sizeHintForRow(row);
}
void PythonQtShell_QTreeWidget::startDrag(Qt::DropActions  supportedActions)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "startDrag");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "Qt::DropActions"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&supportedActions};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidget::startDrag(supportedActions);
}
Qt::DropActions  PythonQtShell_QTreeWidget::supportedDropActions() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "supportedDropActions");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"Qt::DropActions"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      Qt::DropActions returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("supportedDropActions", methodInfo, result);
        } else {
          returnValue = *((Qt::DropActions*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTreeWidget::supportedDropActions();
}
void PythonQtShell_QTreeWidget::tabletEvent(QTabletEvent*  arg__1)
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
  QTreeWidget::tabletEvent(arg__1);
}
void PythonQtShell_QTreeWidget::timerEvent(QTimerEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidget::timerEvent(event);
}
void PythonQtShell_QTreeWidget::updateEditorData()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateEditorData");
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
  QTreeWidget::updateEditorData();
}
void PythonQtShell_QTreeWidget::updateEditorGeometries()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateEditorGeometries");
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
  QTreeWidget::updateEditorGeometries();
}
void PythonQtShell_QTreeWidget::updateGeometries()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateGeometries");
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
  QTreeWidget::updateGeometries();
}
int  PythonQtShell_QTreeWidget::verticalOffset() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "verticalOffset");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("verticalOffset", methodInfo, result);
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
  return QTreeWidget::verticalOffset();
}
void PythonQtShell_QTreeWidget::verticalScrollbarAction(int  action)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "verticalScrollbarAction");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&action};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidget::verticalScrollbarAction(action);
}
void PythonQtShell_QTreeWidget::verticalScrollbarValueChanged(int  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "verticalScrollbarValueChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidget::verticalScrollbarValueChanged(value);
}
QStyleOptionViewItem  PythonQtShell_QTreeWidget::viewOptions() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "viewOptions");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QStyleOptionViewItem"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QStyleOptionViewItem returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("viewOptions", methodInfo, result);
        } else {
          returnValue = *((QStyleOptionViewItem*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTreeWidget::viewOptions();
}
bool  PythonQtShell_QTreeWidget::viewportEvent(QEvent*  event)
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
  return QTreeWidget::viewportEvent(event);
}
QRect  PythonQtShell_QTreeWidget::visualRect(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "visualRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QRect" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRect returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("visualRect", methodInfo, result);
        } else {
          returnValue = *((QRect*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTreeWidget::visualRect(index);
}
QRegion  PythonQtShell_QTreeWidget::visualRegionForSelection(const QItemSelection&  selection) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "visualRegionForSelection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QRegion" , "const QItemSelection&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRegion returnValue;
    void* args[2] = {NULL, (void*)&selection};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("visualRegionForSelection", methodInfo, result);
        } else {
          returnValue = *((QRegion*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTreeWidget::visualRegionForSelection(selection);
}
void PythonQtShell_QTreeWidget::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidget::wheelEvent(arg__1);
}
QTreeWidget* PythonQtWrapper_QTreeWidget::new_QTreeWidget(QWidget*  parent)
{ 
return new PythonQtShell_QTreeWidget(parent); }

void PythonQtWrapper_QTreeWidget::addTopLevelItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item)
{
  ( theWrappedObject->addTopLevelItem(item));
}

void PythonQtWrapper_QTreeWidget::addTopLevelItems(QTreeWidget* theWrappedObject, const QList<QTreeWidgetItem* >&  items)
{
  ( theWrappedObject->addTopLevelItems(items));
}

void PythonQtWrapper_QTreeWidget::closePersistentEditor(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column)
{
  ( theWrappedObject->closePersistentEditor(item, column));
}

int  PythonQtWrapper_QTreeWidget::columnCount(QTreeWidget* theWrappedObject) const
{
  return ( theWrappedObject->columnCount());
}

int  PythonQtWrapper_QTreeWidget::currentColumn(QTreeWidget* theWrappedObject) const
{
  return ( theWrappedObject->currentColumn());
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidget::currentItem(QTreeWidget* theWrappedObject) const
{
  return ( theWrappedObject->currentItem());
}

void PythonQtWrapper_QTreeWidget::dropEvent(QTreeWidget* theWrappedObject, QDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QTreeWidget*)theWrappedObject)->promoted_dropEvent(event));
}

bool  PythonQtWrapper_QTreeWidget::dropMimeData(QTreeWidget* theWrappedObject, QTreeWidgetItem*  parent, int  index, const QMimeData*  data, Qt::DropAction  action)
{
  return ( ((PythonQtPublicPromoter_QTreeWidget*)theWrappedObject)->promoted_dropMimeData(parent, index, data, action));
}

void PythonQtWrapper_QTreeWidget::editItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column)
{
  ( theWrappedObject->editItem(item, column));
}

bool  PythonQtWrapper_QTreeWidget::event(QTreeWidget* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QTreeWidget*)theWrappedObject)->promoted_event(e));
}

QList<QTreeWidgetItem* >  PythonQtWrapper_QTreeWidget::findItems(QTreeWidget* theWrappedObject, const QString&  text, Qt::MatchFlags  flags, int  column) const
{
  return ( theWrappedObject->findItems(text, flags, column));
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidget::headerItem(QTreeWidget* theWrappedObject) const
{
  return ( theWrappedObject->headerItem());
}

int  PythonQtWrapper_QTreeWidget::indexOfTopLevelItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item) const
{
  return ( theWrappedObject->indexOfTopLevelItem(item));
}

void PythonQtWrapper_QTreeWidget::insertTopLevelItem(QTreeWidget* theWrappedObject, int  index, QTreeWidgetItem*  item)
{
  ( theWrappedObject->insertTopLevelItem(index, item));
}

void PythonQtWrapper_QTreeWidget::insertTopLevelItems(QTreeWidget* theWrappedObject, int  index, const QList<QTreeWidgetItem* >&  items)
{
  ( theWrappedObject->insertTopLevelItems(index, items));
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidget::invisibleRootItem(QTreeWidget* theWrappedObject) const
{
  return ( theWrappedObject->invisibleRootItem());
}

bool  PythonQtWrapper_QTreeWidget::isFirstItemColumnSpanned(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item) const
{
  return ( theWrappedObject->isFirstItemColumnSpanned(item));
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidget::itemAbove(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item) const
{
  return ( theWrappedObject->itemAbove(item));
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidget::itemAt(QTreeWidget* theWrappedObject, const QPoint&  p) const
{
  return ( theWrappedObject->itemAt(p));
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidget::itemAt(QTreeWidget* theWrappedObject, int  x, int  y) const
{
  return ( theWrappedObject->itemAt(x, y));
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidget::itemBelow(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item) const
{
  return ( theWrappedObject->itemBelow(item));
}

QWidget*  PythonQtWrapper_QTreeWidget::itemWidget(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column) const
{
  return ( theWrappedObject->itemWidget(item, column));
}

QStringList  PythonQtWrapper_QTreeWidget::mimeTypes(QTreeWidget* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QTreeWidget*)theWrappedObject)->promoted_mimeTypes());
}

void PythonQtWrapper_QTreeWidget::openPersistentEditor(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column)
{
  ( theWrappedObject->openPersistentEditor(item, column));
}

void PythonQtWrapper_QTreeWidget::removeItemWidget(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column)
{
  ( theWrappedObject->removeItemWidget(item, column));
}

QList<QTreeWidgetItem* >  PythonQtWrapper_QTreeWidget::selectedItems(QTreeWidget* theWrappedObject) const
{
  return ( theWrappedObject->selectedItems());
}

void PythonQtWrapper_QTreeWidget::setColumnCount(QTreeWidget* theWrappedObject, int  columns)
{
  ( theWrappedObject->setColumnCount(columns));
}

void PythonQtWrapper_QTreeWidget::setCurrentItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item)
{
  ( theWrappedObject->setCurrentItem(item));
}

void PythonQtWrapper_QTreeWidget::setCurrentItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column)
{
  ( theWrappedObject->setCurrentItem(item, column));
}

void PythonQtWrapper_QTreeWidget::setCurrentItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column, QItemSelectionModel::SelectionFlags  command)
{
  ( theWrappedObject->setCurrentItem(item, column, command));
}

void PythonQtWrapper_QTreeWidget::setFirstItemColumnSpanned(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item, bool  span)
{
  ( theWrappedObject->setFirstItemColumnSpanned(item, span));
}

void PythonQtWrapper_QTreeWidget::setHeaderItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item)
{
  ( theWrappedObject->setHeaderItem(item));
}

void PythonQtWrapper_QTreeWidget::setHeaderLabel(QTreeWidget* theWrappedObject, const QString&  label)
{
  ( theWrappedObject->setHeaderLabel(label));
}

void PythonQtWrapper_QTreeWidget::setHeaderLabels(QTreeWidget* theWrappedObject, const QStringList&  labels)
{
  ( theWrappedObject->setHeaderLabels(labels));
}

void PythonQtWrapper_QTreeWidget::setItemWidget(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column, QWidget*  widget)
{
  ( theWrappedObject->setItemWidget(item, column, widget));
}

void PythonQtWrapper_QTreeWidget::setSelectionModel(QTreeWidget* theWrappedObject, QItemSelectionModel*  selectionModel)
{
  ( ((PythonQtPublicPromoter_QTreeWidget*)theWrappedObject)->promoted_setSelectionModel(selectionModel));
}

int  PythonQtWrapper_QTreeWidget::sortColumn(QTreeWidget* theWrappedObject) const
{
  return ( theWrappedObject->sortColumn());
}

void PythonQtWrapper_QTreeWidget::sortItems(QTreeWidget* theWrappedObject, int  column, Qt::SortOrder  order)
{
  ( theWrappedObject->sortItems(column, order));
}

Qt::DropActions  PythonQtWrapper_QTreeWidget::supportedDropActions(QTreeWidget* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QTreeWidget*)theWrappedObject)->promoted_supportedDropActions());
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidget::takeTopLevelItem(QTreeWidget* theWrappedObject, int  index)
{
  return ( theWrappedObject->takeTopLevelItem(index));
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidget::topLevelItem(QTreeWidget* theWrappedObject, int  index) const
{
  return ( theWrappedObject->topLevelItem(index));
}

int  PythonQtWrapper_QTreeWidget::topLevelItemCount(QTreeWidget* theWrappedObject) const
{
  return ( theWrappedObject->topLevelItemCount());
}

QRect  PythonQtWrapper_QTreeWidget::visualItemRect(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item) const
{
  return ( theWrappedObject->visualItemRect(item));
}



PythonQtShell_QTreeWidgetItem::~PythonQtShell_QTreeWidgetItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTreeWidgetItem*  PythonQtShell_QTreeWidgetItem::clone() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "clone");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QTreeWidgetItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QTreeWidgetItem* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
        } else {
          returnValue = *((QTreeWidgetItem**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTreeWidgetItem::clone();
}
QVariant  PythonQtShell_QTreeWidgetItem::data(int  column, int  role) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "data");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&column, (void*)&role};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("data", methodInfo, result);
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
  return QTreeWidgetItem::data(column, role);
}
bool  PythonQtShell_QTreeWidgetItem::__lt__(const QTreeWidgetItem&  other) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "__lt__");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QTreeWidgetItem&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&other};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("__lt__", methodInfo, result);
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
  return QTreeWidgetItem::operator<(other);
}
void PythonQtShell_QTreeWidgetItem::read(QDataStream&  in)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "read");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDataStream&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&in};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidgetItem::read(in);
}
void PythonQtShell_QTreeWidgetItem::setData(int  column, int  role, const QVariant&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int" , "int" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&column, (void*)&role, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidgetItem::setData(column, role, value);
}
void PythonQtShell_QTreeWidgetItem::write(QDataStream&  out) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "write");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDataStream&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&out};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidgetItem::write(out);
}
QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(QTreeWidget*  view, QTreeWidgetItem*  after, int  type)
{ 
return new PythonQtShell_QTreeWidgetItem(view, after, type); }

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(QTreeWidget*  view, const QStringList&  strings, int  type)
{ 
return new PythonQtShell_QTreeWidgetItem(view, strings, type); }

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(QTreeWidget*  view, int  type)
{ 
return new PythonQtShell_QTreeWidgetItem(view, type); }

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(QTreeWidgetItem*  parent, QTreeWidgetItem*  after, int  type)
{ 
return new PythonQtShell_QTreeWidgetItem(parent, after, type); }

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(QTreeWidgetItem*  parent, const QStringList&  strings, int  type)
{ 
return new PythonQtShell_QTreeWidgetItem(parent, strings, type); }

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(QTreeWidgetItem*  parent, int  type)
{ 
return new PythonQtShell_QTreeWidgetItem(parent, type); }

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(const QStringList&  strings, int  type)
{ 
return new PythonQtShell_QTreeWidgetItem(strings, type); }

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(int  type)
{ 
return new PythonQtShell_QTreeWidgetItem(type); }

void PythonQtWrapper_QTreeWidgetItem::addChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child)
{
  ( theWrappedObject->addChild(child));
}

void PythonQtWrapper_QTreeWidgetItem::addChildren(QTreeWidgetItem* theWrappedObject, const QList<QTreeWidgetItem* >&  children)
{
  ( theWrappedObject->addChildren(children));
}

QBrush  PythonQtWrapper_QTreeWidgetItem::background(QTreeWidgetItem* theWrappedObject, int  column) const
{
  return ( theWrappedObject->background(column));
}

Qt::CheckState  PythonQtWrapper_QTreeWidgetItem::checkState(QTreeWidgetItem* theWrappedObject, int  column) const
{
  return ( theWrappedObject->checkState(column));
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidgetItem::child(QTreeWidgetItem* theWrappedObject, int  index) const
{
  return ( theWrappedObject->child(index));
}

int  PythonQtWrapper_QTreeWidgetItem::childCount(QTreeWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->childCount());
}

QTreeWidgetItem::ChildIndicatorPolicy  PythonQtWrapper_QTreeWidgetItem::childIndicatorPolicy(QTreeWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->childIndicatorPolicy());
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidgetItem::clone(QTreeWidgetItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QTreeWidgetItem*)theWrappedObject)->promoted_clone());
}

int  PythonQtWrapper_QTreeWidgetItem::columnCount(QTreeWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->columnCount());
}

QVariant  PythonQtWrapper_QTreeWidgetItem::data(QTreeWidgetItem* theWrappedObject, int  column, int  role) const
{
  return ( ((PythonQtPublicPromoter_QTreeWidgetItem*)theWrappedObject)->promoted_data(column, role));
}

Qt::ItemFlags  PythonQtWrapper_QTreeWidgetItem::flags(QTreeWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

QFont  PythonQtWrapper_QTreeWidgetItem::font(QTreeWidgetItem* theWrappedObject, int  column) const
{
  return ( theWrappedObject->font(column));
}

QBrush  PythonQtWrapper_QTreeWidgetItem::foreground(QTreeWidgetItem* theWrappedObject, int  column) const
{
  return ( theWrappedObject->foreground(column));
}

QIcon  PythonQtWrapper_QTreeWidgetItem::icon(QTreeWidgetItem* theWrappedObject, int  column) const
{
  return ( theWrappedObject->icon(column));
}

int  PythonQtWrapper_QTreeWidgetItem::indexOfChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child) const
{
  return ( theWrappedObject->indexOfChild(child));
}

void PythonQtWrapper_QTreeWidgetItem::insertChild(QTreeWidgetItem* theWrappedObject, int  index, QTreeWidgetItem*  child)
{
  ( theWrappedObject->insertChild(index, child));
}

void PythonQtWrapper_QTreeWidgetItem::insertChildren(QTreeWidgetItem* theWrappedObject, int  index, const QList<QTreeWidgetItem* >&  children)
{
  ( theWrappedObject->insertChildren(index, children));
}

bool  PythonQtWrapper_QTreeWidgetItem::isDisabled(QTreeWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->isDisabled());
}

bool  PythonQtWrapper_QTreeWidgetItem::isExpanded(QTreeWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->isExpanded());
}

bool  PythonQtWrapper_QTreeWidgetItem::isFirstColumnSpanned(QTreeWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->isFirstColumnSpanned());
}

bool  PythonQtWrapper_QTreeWidgetItem::isHidden(QTreeWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->isHidden());
}

bool  PythonQtWrapper_QTreeWidgetItem::isSelected(QTreeWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->isSelected());
}

void PythonQtWrapper_QTreeWidgetItem::writeTo(QTreeWidgetItem* theWrappedObject, QDataStream&  out)
{
  out <<  (*theWrappedObject);
}

void PythonQtWrapper_QTreeWidgetItem::readFrom(QTreeWidgetItem* theWrappedObject, QDataStream&  in)
{
  in >>  (*theWrappedObject);
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidgetItem::parent(QTreeWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->parent());
}

void PythonQtWrapper_QTreeWidgetItem::removeChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child)
{
  ( theWrappedObject->removeChild(child));
}

void PythonQtWrapper_QTreeWidgetItem::setBackground(QTreeWidgetItem* theWrappedObject, int  column, const QBrush&  brush)
{
  ( theWrappedObject->setBackground(column, brush));
}

void PythonQtWrapper_QTreeWidgetItem::setCheckState(QTreeWidgetItem* theWrappedObject, int  column, Qt::CheckState  state)
{
  ( theWrappedObject->setCheckState(column, state));
}

void PythonQtWrapper_QTreeWidgetItem::setChildIndicatorPolicy(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem::ChildIndicatorPolicy  policy)
{
  ( theWrappedObject->setChildIndicatorPolicy(policy));
}

void PythonQtWrapper_QTreeWidgetItem::setData(QTreeWidgetItem* theWrappedObject, int  column, int  role, const QVariant&  value)
{
  ( ((PythonQtPublicPromoter_QTreeWidgetItem*)theWrappedObject)->promoted_setData(column, role, value));
}

void PythonQtWrapper_QTreeWidgetItem::setDisabled(QTreeWidgetItem* theWrappedObject, bool  disabled)
{
  ( theWrappedObject->setDisabled(disabled));
}

void PythonQtWrapper_QTreeWidgetItem::setExpanded(QTreeWidgetItem* theWrappedObject, bool  expand)
{
  ( theWrappedObject->setExpanded(expand));
}

void PythonQtWrapper_QTreeWidgetItem::setFirstColumnSpanned(QTreeWidgetItem* theWrappedObject, bool  span)
{
  ( theWrappedObject->setFirstColumnSpanned(span));
}

void PythonQtWrapper_QTreeWidgetItem::setFlags(QTreeWidgetItem* theWrappedObject, Qt::ItemFlags  flags)
{
  ( theWrappedObject->setFlags(flags));
}

void PythonQtWrapper_QTreeWidgetItem::setFont(QTreeWidgetItem* theWrappedObject, int  column, const QFont&  font)
{
  ( theWrappedObject->setFont(column, font));
}

void PythonQtWrapper_QTreeWidgetItem::setForeground(QTreeWidgetItem* theWrappedObject, int  column, const QBrush&  brush)
{
  ( theWrappedObject->setForeground(column, brush));
}

void PythonQtWrapper_QTreeWidgetItem::setHidden(QTreeWidgetItem* theWrappedObject, bool  hide)
{
  ( theWrappedObject->setHidden(hide));
}

void PythonQtWrapper_QTreeWidgetItem::setIcon(QTreeWidgetItem* theWrappedObject, int  column, const QIcon&  icon)
{
  ( theWrappedObject->setIcon(column, icon));
}

void PythonQtWrapper_QTreeWidgetItem::setSelected(QTreeWidgetItem* theWrappedObject, bool  select)
{
  ( theWrappedObject->setSelected(select));
}

void PythonQtWrapper_QTreeWidgetItem::setSizeHint(QTreeWidgetItem* theWrappedObject, int  column, const QSize&  size)
{
  ( theWrappedObject->setSizeHint(column, size));
}

void PythonQtWrapper_QTreeWidgetItem::setStatusTip(QTreeWidgetItem* theWrappedObject, int  column, const QString&  statusTip)
{
  ( theWrappedObject->setStatusTip(column, statusTip));
}

void PythonQtWrapper_QTreeWidgetItem::setText(QTreeWidgetItem* theWrappedObject, int  column, const QString&  text)
{
  ( theWrappedObject->setText(column, text));
}

void PythonQtWrapper_QTreeWidgetItem::setTextAlignment(QTreeWidgetItem* theWrappedObject, int  column, int  alignment)
{
  ( theWrappedObject->setTextAlignment(column, alignment));
}

void PythonQtWrapper_QTreeWidgetItem::setToolTip(QTreeWidgetItem* theWrappedObject, int  column, const QString&  toolTip)
{
  ( theWrappedObject->setToolTip(column, toolTip));
}

void PythonQtWrapper_QTreeWidgetItem::setWhatsThis(QTreeWidgetItem* theWrappedObject, int  column, const QString&  whatsThis)
{
  ( theWrappedObject->setWhatsThis(column, whatsThis));
}

QSize  PythonQtWrapper_QTreeWidgetItem::sizeHint(QTreeWidgetItem* theWrappedObject, int  column) const
{
  return ( theWrappedObject->sizeHint(column));
}

void PythonQtWrapper_QTreeWidgetItem::sortChildren(QTreeWidgetItem* theWrappedObject, int  column, Qt::SortOrder  order)
{
  ( theWrappedObject->sortChildren(column, order));
}

QString  PythonQtWrapper_QTreeWidgetItem::statusTip(QTreeWidgetItem* theWrappedObject, int  column) const
{
  return ( theWrappedObject->statusTip(column));
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidgetItem::takeChild(QTreeWidgetItem* theWrappedObject, int  index)
{
  return ( theWrappedObject->takeChild(index));
}

QList<QTreeWidgetItem* >  PythonQtWrapper_QTreeWidgetItem::takeChildren(QTreeWidgetItem* theWrappedObject)
{
  return ( theWrappedObject->takeChildren());
}

QString  PythonQtWrapper_QTreeWidgetItem::text(QTreeWidgetItem* theWrappedObject, int  column) const
{
  return ( theWrappedObject->text(column));
}

int  PythonQtWrapper_QTreeWidgetItem::textAlignment(QTreeWidgetItem* theWrappedObject, int  column) const
{
  return ( theWrappedObject->textAlignment(column));
}

QString  PythonQtWrapper_QTreeWidgetItem::toolTip(QTreeWidgetItem* theWrappedObject, int  column) const
{
  return ( theWrappedObject->toolTip(column));
}

QTreeWidget*  PythonQtWrapper_QTreeWidgetItem::treeWidget(QTreeWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->treeWidget());
}

int  PythonQtWrapper_QTreeWidgetItem::type(QTreeWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString  PythonQtWrapper_QTreeWidgetItem::whatsThis(QTreeWidgetItem* theWrappedObject, int  column) const
{
  return ( theWrappedObject->whatsThis(column));
}



PythonQtShell_QUndoCommand::~PythonQtShell_QUndoCommand() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QUndoCommand::id() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "id");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("id", methodInfo, result);
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
  return QUndoCommand::id();
}
bool  PythonQtShell_QUndoCommand::mergeWith(const QUndoCommand*  other)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mergeWith");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QUndoCommand*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&other};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("mergeWith", methodInfo, result);
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
  return QUndoCommand::mergeWith(other);
}
void PythonQtShell_QUndoCommand::redo()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "redo");
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
  QUndoCommand::redo();
}
void PythonQtShell_QUndoCommand::undo()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "undo");
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
  QUndoCommand::undo();
}
QUndoCommand* PythonQtWrapper_QUndoCommand::new_QUndoCommand(QUndoCommand*  parent)
{ 
return new PythonQtShell_QUndoCommand(parent); }

QUndoCommand* PythonQtWrapper_QUndoCommand::new_QUndoCommand(const QString&  text, QUndoCommand*  parent)
{ 
return new PythonQtShell_QUndoCommand(text, parent); }

QString  PythonQtWrapper_QUndoCommand::actionText(QUndoCommand* theWrappedObject) const
{
  return ( theWrappedObject->actionText());
}

const QUndoCommand*  PythonQtWrapper_QUndoCommand::child(QUndoCommand* theWrappedObject, int  index) const
{
  return ( theWrappedObject->child(index));
}

int  PythonQtWrapper_QUndoCommand::childCount(QUndoCommand* theWrappedObject) const
{
  return ( theWrappedObject->childCount());
}

int  PythonQtWrapper_QUndoCommand::id(QUndoCommand* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QUndoCommand*)theWrappedObject)->promoted_id());
}

bool  PythonQtWrapper_QUndoCommand::mergeWith(QUndoCommand* theWrappedObject, const QUndoCommand*  other)
{
  return ( ((PythonQtPublicPromoter_QUndoCommand*)theWrappedObject)->promoted_mergeWith(other));
}

void PythonQtWrapper_QUndoCommand::redo(QUndoCommand* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QUndoCommand*)theWrappedObject)->promoted_redo());
}

void PythonQtWrapper_QUndoCommand::setText(QUndoCommand* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setText(text));
}

QString  PythonQtWrapper_QUndoCommand::text(QUndoCommand* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

void PythonQtWrapper_QUndoCommand::undo(QUndoCommand* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QUndoCommand*)theWrappedObject)->promoted_undo());
}



PythonQtShell_QUndoGroup::~PythonQtShell_QUndoGroup() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QUndoGroup::childEvent(QChildEvent*  arg__1)
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
  QUndoGroup::childEvent(arg__1);
}
void PythonQtShell_QUndoGroup::customEvent(QEvent*  arg__1)
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
  QUndoGroup::customEvent(arg__1);
}
bool  PythonQtShell_QUndoGroup::event(QEvent*  arg__1)
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
  return QUndoGroup::event(arg__1);
}
bool  PythonQtShell_QUndoGroup::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QUndoGroup::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QUndoGroup::timerEvent(QTimerEvent*  arg__1)
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
  QUndoGroup::timerEvent(arg__1);
}
QUndoGroup* PythonQtWrapper_QUndoGroup::new_QUndoGroup(QObject*  parent)
{ 
return new PythonQtShell_QUndoGroup(parent); }

QUndoStack*  PythonQtWrapper_QUndoGroup::activeStack(QUndoGroup* theWrappedObject) const
{
  return ( theWrappedObject->activeStack());
}

void PythonQtWrapper_QUndoGroup::addStack(QUndoGroup* theWrappedObject, QUndoStack*  stack)
{
  ( theWrappedObject->addStack(stack));
}

bool  PythonQtWrapper_QUndoGroup::canRedo(QUndoGroup* theWrappedObject) const
{
  return ( theWrappedObject->canRedo());
}

bool  PythonQtWrapper_QUndoGroup::canUndo(QUndoGroup* theWrappedObject) const
{
  return ( theWrappedObject->canUndo());
}

QAction*  PythonQtWrapper_QUndoGroup::createRedoAction(QUndoGroup* theWrappedObject, QObject*  parent, const QString&  prefix) const
{
  return ( theWrappedObject->createRedoAction(parent, prefix));
}

QAction*  PythonQtWrapper_QUndoGroup::createUndoAction(QUndoGroup* theWrappedObject, QObject*  parent, const QString&  prefix) const
{
  return ( theWrappedObject->createUndoAction(parent, prefix));
}

bool  PythonQtWrapper_QUndoGroup::isClean(QUndoGroup* theWrappedObject) const
{
  return ( theWrappedObject->isClean());
}

QString  PythonQtWrapper_QUndoGroup::redoText(QUndoGroup* theWrappedObject) const
{
  return ( theWrappedObject->redoText());
}

void PythonQtWrapper_QUndoGroup::removeStack(QUndoGroup* theWrappedObject, QUndoStack*  stack)
{
  ( theWrappedObject->removeStack(stack));
}

QList<QUndoStack* >  PythonQtWrapper_QUndoGroup::stacks(QUndoGroup* theWrappedObject) const
{
  return ( theWrappedObject->stacks());
}

QString  PythonQtWrapper_QUndoGroup::undoText(QUndoGroup* theWrappedObject) const
{
  return ( theWrappedObject->undoText());
}



PythonQtShell_QUndoStack::~PythonQtShell_QUndoStack() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QUndoStack::childEvent(QChildEvent*  arg__1)
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
  QUndoStack::childEvent(arg__1);
}
void PythonQtShell_QUndoStack::customEvent(QEvent*  arg__1)
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
  QUndoStack::customEvent(arg__1);
}
bool  PythonQtShell_QUndoStack::event(QEvent*  arg__1)
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
  return QUndoStack::event(arg__1);
}
bool  PythonQtShell_QUndoStack::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QUndoStack::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QUndoStack::timerEvent(QTimerEvent*  arg__1)
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
  QUndoStack::timerEvent(arg__1);
}
QUndoStack* PythonQtWrapper_QUndoStack::new_QUndoStack(QObject*  parent)
{ 
return new PythonQtShell_QUndoStack(parent); }

void PythonQtWrapper_QUndoStack::beginMacro(QUndoStack* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->beginMacro(text));
}

bool  PythonQtWrapper_QUndoStack::canRedo(QUndoStack* theWrappedObject) const
{
  return ( theWrappedObject->canRedo());
}

bool  PythonQtWrapper_QUndoStack::canUndo(QUndoStack* theWrappedObject) const
{
  return ( theWrappedObject->canUndo());
}

int  PythonQtWrapper_QUndoStack::cleanIndex(QUndoStack* theWrappedObject) const
{
  return ( theWrappedObject->cleanIndex());
}

void PythonQtWrapper_QUndoStack::clear(QUndoStack* theWrappedObject)
{
  ( theWrappedObject->clear());
}

const QUndoCommand*  PythonQtWrapper_QUndoStack::command(QUndoStack* theWrappedObject, int  index) const
{
  return ( theWrappedObject->command(index));
}

int  PythonQtWrapper_QUndoStack::count(QUndoStack* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

QAction*  PythonQtWrapper_QUndoStack::createRedoAction(QUndoStack* theWrappedObject, QObject*  parent, const QString&  prefix) const
{
  return ( theWrappedObject->createRedoAction(parent, prefix));
}

QAction*  PythonQtWrapper_QUndoStack::createUndoAction(QUndoStack* theWrappedObject, QObject*  parent, const QString&  prefix) const
{
  return ( theWrappedObject->createUndoAction(parent, prefix));
}

void PythonQtWrapper_QUndoStack::endMacro(QUndoStack* theWrappedObject)
{
  ( theWrappedObject->endMacro());
}

int  PythonQtWrapper_QUndoStack::index(QUndoStack* theWrappedObject) const
{
  return ( theWrappedObject->index());
}

bool  PythonQtWrapper_QUndoStack::isActive(QUndoStack* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

bool  PythonQtWrapper_QUndoStack::isClean(QUndoStack* theWrappedObject) const
{
  return ( theWrappedObject->isClean());
}

void PythonQtWrapper_QUndoStack::push(QUndoStack* theWrappedObject, QUndoCommand*  cmd)
{
  ( theWrappedObject->push(cmd));
}

QString  PythonQtWrapper_QUndoStack::redoText(QUndoStack* theWrappedObject) const
{
  return ( theWrappedObject->redoText());
}

void PythonQtWrapper_QUndoStack::setUndoLimit(QUndoStack* theWrappedObject, int  limit)
{
  ( theWrappedObject->setUndoLimit(limit));
}

QString  PythonQtWrapper_QUndoStack::text(QUndoStack* theWrappedObject, int  idx) const
{
  return ( theWrappedObject->text(idx));
}

int  PythonQtWrapper_QUndoStack::undoLimit(QUndoStack* theWrappedObject) const
{
  return ( theWrappedObject->undoLimit());
}

QString  PythonQtWrapper_QUndoStack::undoText(QUndoStack* theWrappedObject) const
{
  return ( theWrappedObject->undoText());
}



PythonQtShell_QUndoView::~PythonQtShell_QUndoView() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QUndoView::actionEvent(QActionEvent*  arg__1)
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
  QUndoView::actionEvent(arg__1);
}
void PythonQtShell_QUndoView::changeEvent(QEvent*  arg__1)
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
  QUndoView::changeEvent(arg__1);
}
void PythonQtShell_QUndoView::childEvent(QChildEvent*  arg__1)
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
  QUndoView::childEvent(arg__1);
}
void PythonQtShell_QUndoView::closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEditor");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWidget*" , "QAbstractItemDelegate::EndEditHint"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&editor, (void*)&hint};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::closeEditor(editor, hint);
}
void PythonQtShell_QUndoView::closeEvent(QCloseEvent*  arg__1)
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
  QUndoView::closeEvent(arg__1);
}
void PythonQtShell_QUndoView::commitData(QWidget*  editor)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "commitData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&editor};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::commitData(editor);
}
void PythonQtShell_QUndoView::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::contextMenuEvent(arg__1);
}
void PythonQtShell_QUndoView::currentChanged(const QModelIndex&  current, const QModelIndex&  previous)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "currentChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&current, (void*)&previous};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::currentChanged(current, previous);
}
void PythonQtShell_QUndoView::customEvent(QEvent*  arg__1)
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
  QUndoView::customEvent(arg__1);
}
void PythonQtShell_QUndoView::dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dataChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&topLeft, (void*)&bottomRight};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::dataChanged(topLeft, bottomRight);
}
int  PythonQtShell_QUndoView::devType() const
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
  return QUndoView::devType();
}
void PythonQtShell_QUndoView::doItemsLayout()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "doItemsLayout");
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
  QUndoView::doItemsLayout();
}
void PythonQtShell_QUndoView::dragEnterEvent(QDragEnterEvent*  event)
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
  QUndoView::dragEnterEvent(event);
}
void PythonQtShell_QUndoView::dragLeaveEvent(QDragLeaveEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::dragLeaveEvent(e);
}
void PythonQtShell_QUndoView::dragMoveEvent(QDragMoveEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::dragMoveEvent(e);
}
void PythonQtShell_QUndoView::dropEvent(QDropEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::dropEvent(e);
}
bool  PythonQtShell_QUndoView::edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "edit");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "QAbstractItemView::EditTrigger" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&index, (void*)&trigger, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("edit", methodInfo, result);
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
  return QUndoView::edit(index, trigger, event);
}
void PythonQtShell_QUndoView::editorDestroyed(QObject*  editor)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "editorDestroyed");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&editor};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::editorDestroyed(editor);
}
void PythonQtShell_QUndoView::enterEvent(QEvent*  arg__1)
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
  QUndoView::enterEvent(arg__1);
}
bool  PythonQtShell_QUndoView::event(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
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
  return QUndoView::event(e);
}
bool  PythonQtShell_QUndoView::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QUndoView::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QUndoView::focusInEvent(QFocusEvent*  event)
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
  QUndoView::focusInEvent(event);
}
bool  PythonQtShell_QUndoView::focusNextPrevChild(bool  next)
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
  return QUndoView::focusNextPrevChild(next);
}
void PythonQtShell_QUndoView::focusOutEvent(QFocusEvent*  event)
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
  QUndoView::focusOutEvent(event);
}
int  PythonQtShell_QUndoView::heightForWidth(int  arg__1) const
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
  return QUndoView::heightForWidth(arg__1);
}
void PythonQtShell_QUndoView::hideEvent(QHideEvent*  arg__1)
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
  QUndoView::hideEvent(arg__1);
}
int  PythonQtShell_QUndoView::horizontalOffset() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "horizontalOffset");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("horizontalOffset", methodInfo, result);
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
  return QUndoView::horizontalOffset();
}
void PythonQtShell_QUndoView::horizontalScrollbarAction(int  action)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "horizontalScrollbarAction");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&action};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::horizontalScrollbarAction(action);
}
void PythonQtShell_QUndoView::horizontalScrollbarValueChanged(int  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "horizontalScrollbarValueChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::horizontalScrollbarValueChanged(value);
}
QModelIndex  PythonQtShell_QUndoView::indexAt(const QPoint&  p) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "indexAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QModelIndex" , "const QPoint&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue;
    void* args[2] = {NULL, (void*)&p};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("indexAt", methodInfo, result);
        } else {
          returnValue = *((QModelIndex*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QUndoView::indexAt(p);
}
void PythonQtShell_QUndoView::inputMethodEvent(QInputMethodEvent*  event)
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
  QUndoView::inputMethodEvent(event);
}
QVariant  PythonQtShell_QUndoView::inputMethodQuery(Qt::InputMethodQuery  query) const
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
  return QUndoView::inputMethodQuery(query);
}
bool  PythonQtShell_QUndoView::isIndexHidden(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isIndexHidden");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isIndexHidden", methodInfo, result);
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
  return QUndoView::isIndexHidden(index);
}
void PythonQtShell_QUndoView::keyPressEvent(QKeyEvent*  event)
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
  QUndoView::keyPressEvent(event);
}
void PythonQtShell_QUndoView::keyReleaseEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::keyReleaseEvent(arg__1);
}
void PythonQtShell_QUndoView::keyboardSearch(const QString&  search)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyboardSearch");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&search};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::keyboardSearch(search);
}
void PythonQtShell_QUndoView::languageChange()
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
  QUndoView::languageChange();
}
void PythonQtShell_QUndoView::leaveEvent(QEvent*  arg__1)
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
  QUndoView::leaveEvent(arg__1);
}
int  PythonQtShell_QUndoView::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QUndoView::metric(arg__1);
}
void PythonQtShell_QUndoView::mouseDoubleClickEvent(QMouseEvent*  event)
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
  QUndoView::mouseDoubleClickEvent(event);
}
void PythonQtShell_QUndoView::mouseMoveEvent(QMouseEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::mouseMoveEvent(e);
}
void PythonQtShell_QUndoView::mousePressEvent(QMouseEvent*  event)
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
  QUndoView::mousePressEvent(event);
}
void PythonQtShell_QUndoView::mouseReleaseEvent(QMouseEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::mouseReleaseEvent(e);
}
void PythonQtShell_QUndoView::moveEvent(QMoveEvent*  arg__1)
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
  QUndoView::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QUndoView::paintEngine() const
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
  return QUndoView::paintEngine();
}
void PythonQtShell_QUndoView::paintEvent(QPaintEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPaintEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::paintEvent(e);
}
void PythonQtShell_QUndoView::reset()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "reset");
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
  QUndoView::reset();
}
void PythonQtShell_QUndoView::resizeEvent(QResizeEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QResizeEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::resizeEvent(e);
}
void PythonQtShell_QUndoView::rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "rowsAboutToBeRemoved");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&" , "int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&parent, (void*)&start, (void*)&end};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::rowsAboutToBeRemoved(parent, start, end);
}
void PythonQtShell_QUndoView::rowsInserted(const QModelIndex&  parent, int  start, int  end)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "rowsInserted");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&" , "int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&parent, (void*)&start, (void*)&end};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::rowsInserted(parent, start, end);
}
void PythonQtShell_QUndoView::scrollContentsBy(int  dx, int  dy)
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
  QUndoView::scrollContentsBy(dx, dy);
}
void PythonQtShell_QUndoView::scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "scrollTo");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&" , "QAbstractItemView::ScrollHint"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&index, (void*)&hint};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::scrollTo(index, hint);
}
void PythonQtShell_QUndoView::selectAll()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectAll");
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
  QUndoView::selectAll();
}
QList<QModelIndex >  PythonQtShell_QUndoView::selectedIndexes() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectedIndexes");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QList<QModelIndex >"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QList<QModelIndex > returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("selectedIndexes", methodInfo, result);
        } else {
          returnValue = *((QList<QModelIndex >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QUndoView::selectedIndexes();
}
void PythonQtShell_QUndoView::selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectionChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QItemSelection&" , "const QItemSelection&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&selected, (void*)&deselected};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::selectionChanged(selected, deselected);
}
QItemSelectionModel::SelectionFlags  PythonQtShell_QUndoView::selectionCommand(const QModelIndex&  index, const QEvent*  event) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectionCommand");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QItemSelectionModel::SelectionFlags" , "const QModelIndex&" , "const QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QItemSelectionModel::SelectionFlags returnValue;
    void* args[3] = {NULL, (void*)&index, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("selectionCommand", methodInfo, result);
        } else {
          returnValue = *((QItemSelectionModel::SelectionFlags*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QUndoView::selectionCommand(index, event);
}
void PythonQtShell_QUndoView::setModel(QAbstractItemModel*  model)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setModel");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QAbstractItemModel*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&model};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::setModel(model);
}
void PythonQtShell_QUndoView::setRootIndex(const QModelIndex&  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setRootIndex");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::setRootIndex(index);
}
void PythonQtShell_QUndoView::setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setSelection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QRect&" , "QItemSelectionModel::SelectionFlags"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&rect, (void*)&command};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::setSelection(rect, command);
}
void PythonQtShell_QUndoView::setSelectionModel(QItemSelectionModel*  selectionModel)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setSelectionModel");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QItemSelectionModel*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&selectionModel};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::setSelectionModel(selectionModel);
}
void PythonQtShell_QUndoView::showEvent(QShowEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QShowEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::showEvent(arg__1);
}
int  PythonQtShell_QUndoView::sizeHintForColumn(int  column) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sizeHintForColumn");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&column};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sizeHintForColumn", methodInfo, result);
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
  return QUndoView::sizeHintForColumn(column);
}
int  PythonQtShell_QUndoView::sizeHintForRow(int  row) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sizeHintForRow");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&row};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sizeHintForRow", methodInfo, result);
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
  return QUndoView::sizeHintForRow(row);
}
void PythonQtShell_QUndoView::startDrag(Qt::DropActions  supportedActions)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "startDrag");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "Qt::DropActions"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&supportedActions};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::startDrag(supportedActions);
}
void PythonQtShell_QUndoView::tabletEvent(QTabletEvent*  arg__1)
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
  QUndoView::tabletEvent(arg__1);
}
void PythonQtShell_QUndoView::timerEvent(QTimerEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::timerEvent(e);
}
void PythonQtShell_QUndoView::updateEditorData()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateEditorData");
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
  QUndoView::updateEditorData();
}
void PythonQtShell_QUndoView::updateEditorGeometries()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateEditorGeometries");
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
  QUndoView::updateEditorGeometries();
}
void PythonQtShell_QUndoView::updateGeometries()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateGeometries");
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
  QUndoView::updateGeometries();
}
int  PythonQtShell_QUndoView::verticalOffset() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "verticalOffset");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("verticalOffset", methodInfo, result);
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
  return QUndoView::verticalOffset();
}
void PythonQtShell_QUndoView::verticalScrollbarAction(int  action)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "verticalScrollbarAction");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&action};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::verticalScrollbarAction(action);
}
void PythonQtShell_QUndoView::verticalScrollbarValueChanged(int  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "verticalScrollbarValueChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::verticalScrollbarValueChanged(value);
}
QStyleOptionViewItem  PythonQtShell_QUndoView::viewOptions() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "viewOptions");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QStyleOptionViewItem"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QStyleOptionViewItem returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("viewOptions", methodInfo, result);
        } else {
          returnValue = *((QStyleOptionViewItem*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QUndoView::viewOptions();
}
bool  PythonQtShell_QUndoView::viewportEvent(QEvent*  event)
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
  return QUndoView::viewportEvent(event);
}
QRect  PythonQtShell_QUndoView::visualRect(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "visualRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QRect" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRect returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("visualRect", methodInfo, result);
        } else {
          returnValue = *((QRect*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QUndoView::visualRect(index);
}
QRegion  PythonQtShell_QUndoView::visualRegionForSelection(const QItemSelection&  selection) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "visualRegionForSelection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QRegion" , "const QItemSelection&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRegion returnValue;
    void* args[2] = {NULL, (void*)&selection};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("visualRegionForSelection", methodInfo, result);
        } else {
          returnValue = *((QRegion*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QUndoView::visualRegionForSelection(selection);
}
void PythonQtShell_QUndoView::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoView::wheelEvent(arg__1);
}
QUndoView* PythonQtWrapper_QUndoView::new_QUndoView(QUndoGroup*  group, QWidget*  parent)
{ 
return new PythonQtShell_QUndoView(group, parent); }

QUndoView* PythonQtWrapper_QUndoView::new_QUndoView(QUndoStack*  stack, QWidget*  parent)
{ 
return new PythonQtShell_QUndoView(stack, parent); }

QUndoView* PythonQtWrapper_QUndoView::new_QUndoView(QWidget*  parent)
{ 
return new PythonQtShell_QUndoView(parent); }

QIcon  PythonQtWrapper_QUndoView::cleanIcon(QUndoView* theWrappedObject) const
{
  return ( theWrappedObject->cleanIcon());
}

QString  PythonQtWrapper_QUndoView::emptyLabel(QUndoView* theWrappedObject) const
{
  return ( theWrappedObject->emptyLabel());
}

QUndoGroup*  PythonQtWrapper_QUndoView::group(QUndoView* theWrappedObject) const
{
  return ( theWrappedObject->group());
}

void PythonQtWrapper_QUndoView::setCleanIcon(QUndoView* theWrappedObject, const QIcon&  icon)
{
  ( theWrappedObject->setCleanIcon(icon));
}

void PythonQtWrapper_QUndoView::setEmptyLabel(QUndoView* theWrappedObject, const QString&  label)
{
  ( theWrappedObject->setEmptyLabel(label));
}

QUndoStack*  PythonQtWrapper_QUndoView::stack(QUndoView* theWrappedObject) const
{
  return ( theWrappedObject->stack());
}



PythonQtShell_QVBoxLayout::~PythonQtShell_QVBoxLayout() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QVBoxLayout::addItem(QLayoutItem*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "addItem");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QLayoutItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QVBoxLayout::addItem(arg__1);
}
void PythonQtShell_QVBoxLayout::childEvent(QChildEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QVBoxLayout::childEvent(e);
}
int  PythonQtShell_QVBoxLayout::count() const
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
  return QVBoxLayout::count();
}
void PythonQtShell_QVBoxLayout::customEvent(QEvent*  arg__1)
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
  QVBoxLayout::customEvent(arg__1);
}
bool  PythonQtShell_QVBoxLayout::event(QEvent*  arg__1)
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
  return QVBoxLayout::event(arg__1);
}
bool  PythonQtShell_QVBoxLayout::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QVBoxLayout::eventFilter(arg__1, arg__2);
}
Qt::Orientations  PythonQtShell_QVBoxLayout::expandingDirections() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "expandingDirections");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"Qt::Orientations"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      Qt::Orientations returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("expandingDirections", methodInfo, result);
        } else {
          returnValue = *((Qt::Orientations*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QVBoxLayout::expandingDirections();
}
QRect  PythonQtShell_QVBoxLayout::geometry() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "geometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QRect"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRect returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("geometry", methodInfo, result);
        } else {
          returnValue = *((QRect*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QVBoxLayout::geometry();
}
int  PythonQtShell_QVBoxLayout::indexOf(QWidget*  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "indexOf");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("indexOf", methodInfo, result);
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
  return QVBoxLayout::indexOf(arg__1);
}
void PythonQtShell_QVBoxLayout::invalidate()
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
  QVBoxLayout::invalidate();
}
bool  PythonQtShell_QVBoxLayout::isEmpty() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isEmpty");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isEmpty", methodInfo, result);
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
  return QVBoxLayout::isEmpty();
}
QLayoutItem*  PythonQtShell_QVBoxLayout::itemAt(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QLayoutItem*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QLayoutItem* returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemAt", methodInfo, result);
        } else {
          returnValue = *((QLayoutItem**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QVBoxLayout::itemAt(arg__1);
}
QLayout*  PythonQtShell_QVBoxLayout::layout()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "layout");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QLayout*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QLayout* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("layout", methodInfo, result);
        } else {
          returnValue = *((QLayout**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QVBoxLayout::layout();
}
QSize  PythonQtShell_QVBoxLayout::maximumSize() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "maximumSize");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSize"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSize returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("maximumSize", methodInfo, result);
        } else {
          returnValue = *((QSize*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QVBoxLayout::maximumSize();
}
QSize  PythonQtShell_QVBoxLayout::minimumSize() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "minimumSize");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSize"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSize returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("minimumSize", methodInfo, result);
        } else {
          returnValue = *((QSize*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QVBoxLayout::minimumSize();
}
void PythonQtShell_QVBoxLayout::setGeometry(const QRect&  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setGeometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QRect&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QVBoxLayout::setGeometry(arg__1);
}
QLayoutItem*  PythonQtShell_QVBoxLayout::takeAt(int  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "takeAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QLayoutItem*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QLayoutItem* returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("takeAt", methodInfo, result);
        } else {
          returnValue = *((QLayoutItem**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QVBoxLayout::takeAt(arg__1);
}
void PythonQtShell_QVBoxLayout::timerEvent(QTimerEvent*  arg__1)
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
  QVBoxLayout::timerEvent(arg__1);
}
QVBoxLayout* PythonQtWrapper_QVBoxLayout::new_QVBoxLayout()
{ 
return new PythonQtShell_QVBoxLayout(); }

QVBoxLayout* PythonQtWrapper_QVBoxLayout::new_QVBoxLayout(QWidget*  parent)
{ 
return new PythonQtShell_QVBoxLayout(parent); }


