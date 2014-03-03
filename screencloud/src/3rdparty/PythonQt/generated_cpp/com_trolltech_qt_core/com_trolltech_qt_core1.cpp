#include "com_trolltech_qt_core1.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QStringList>
#include <QUrl>
#include <QVarLengthArray>
#include <QVariant>
#include <qabstractanimation.h>
#include <qabstractitemmodel.h>
#include <qabstractstate.h>
#include <qabstracttransition.h>
#include <qanimationgroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qeasingcurve.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qmutex.h>
#include <qobject.h>
#include <qpair.h>
#include <qparallelanimationgroup.h>
#include <qpauseanimation.h>
#include <qprocess.h>
#include <qpropertyanimation.h>
#include <qreadwritelock.h>
#include <qsemaphore.h>
#include <qsequentialanimationgroup.h>
#include <qsettings.h>
#include <qsharedmemory.h>
#include <qsignalmapper.h>
#include <qsignaltransition.h>
#include <qsocketnotifier.h>
#include <qstate.h>
#include <qstatemachine.h>
#include <qstringlist.h>
#include <qstringmatcher.h>
#include <qtextcodec.h>
#include <qurl.h>
#include <qvector.h>

QMetaClassInfo* PythonQtWrapper_QMetaClassInfo::new_QMetaClassInfo()
{ 
return new QMetaClassInfo(); }

const QMetaObject*  PythonQtWrapper_QMetaClassInfo::enclosingMetaObject(QMetaClassInfo* theWrappedObject) const
{
  return ( theWrappedObject->enclosingMetaObject());
}

const char*  PythonQtWrapper_QMetaClassInfo::name(QMetaClassInfo* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

const char*  PythonQtWrapper_QMetaClassInfo::value(QMetaClassInfo* theWrappedObject) const
{
  return ( theWrappedObject->value());
}



QMetaEnum* PythonQtWrapper_QMetaEnum::new_QMetaEnum()
{ 
return new QMetaEnum(); }

const QMetaObject*  PythonQtWrapper_QMetaEnum::enclosingMetaObject(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->enclosingMetaObject());
}

bool  PythonQtWrapper_QMetaEnum::isFlag(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->isFlag());
}

bool  PythonQtWrapper_QMetaEnum::isValid(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

const char*  PythonQtWrapper_QMetaEnum::key(QMetaEnum* theWrappedObject, int  index) const
{
  return ( theWrappedObject->key(index));
}

int  PythonQtWrapper_QMetaEnum::keyCount(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->keyCount());
}

int  PythonQtWrapper_QMetaEnum::keyToValue(QMetaEnum* theWrappedObject, const char*  key) const
{
  return ( theWrappedObject->keyToValue(key));
}

int  PythonQtWrapper_QMetaEnum::keysToValue(QMetaEnum* theWrappedObject, const char*  keys) const
{
  return ( theWrappedObject->keysToValue(keys));
}

const char*  PythonQtWrapper_QMetaEnum::name(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

const char*  PythonQtWrapper_QMetaEnum::scope(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->scope());
}

int  PythonQtWrapper_QMetaEnum::value(QMetaEnum* theWrappedObject, int  index) const
{
  return ( theWrappedObject->value(index));
}

const char*  PythonQtWrapper_QMetaEnum::valueToKey(QMetaEnum* theWrappedObject, int  value) const
{
  return ( theWrappedObject->valueToKey(value));
}

QByteArray  PythonQtWrapper_QMetaEnum::valueToKeys(QMetaEnum* theWrappedObject, int  value) const
{
  return ( theWrappedObject->valueToKeys(value));
}



QMetaMethod* PythonQtWrapper_QMetaMethod::new_QMetaMethod()
{ 
return new QMetaMethod(); }

QMetaMethod::Access  PythonQtWrapper_QMetaMethod::access(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->access());
}

int  PythonQtWrapper_QMetaMethod::attributes(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->attributes());
}

const QMetaObject*  PythonQtWrapper_QMetaMethod::enclosingMetaObject(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->enclosingMetaObject());
}

int  PythonQtWrapper_QMetaMethod::methodIndex(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->methodIndex());
}

QMetaMethod::MethodType  PythonQtWrapper_QMetaMethod::methodType(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->methodType());
}

QList<QByteArray >  PythonQtWrapper_QMetaMethod::parameterNames(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->parameterNames());
}

QList<QByteArray >  PythonQtWrapper_QMetaMethod::parameterTypes(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->parameterTypes());
}

int  PythonQtWrapper_QMetaMethod::revision(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->revision());
}

const char*  PythonQtWrapper_QMetaMethod::signature(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->signature());
}

const char*  PythonQtWrapper_QMetaMethod::tag(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->tag());
}

const char*  PythonQtWrapper_QMetaMethod::typeName(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->typeName());
}



QMetaProperty* PythonQtWrapper_QMetaProperty::new_QMetaProperty()
{ 
return new QMetaProperty(); }

const QMetaObject*  PythonQtWrapper_QMetaProperty::enclosingMetaObject(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->enclosingMetaObject());
}

QMetaEnum  PythonQtWrapper_QMetaProperty::enumerator(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->enumerator());
}

bool  PythonQtWrapper_QMetaProperty::hasNotifySignal(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->hasNotifySignal());
}

bool  PythonQtWrapper_QMetaProperty::hasStdCppSet(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->hasStdCppSet());
}

bool  PythonQtWrapper_QMetaProperty::isConstant(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isConstant());
}

bool  PythonQtWrapper_QMetaProperty::isDesignable(QMetaProperty* theWrappedObject, const QObject*  obj) const
{
  return ( theWrappedObject->isDesignable(obj));
}

bool  PythonQtWrapper_QMetaProperty::isEditable(QMetaProperty* theWrappedObject, const QObject*  obj) const
{
  return ( theWrappedObject->isEditable(obj));
}

bool  PythonQtWrapper_QMetaProperty::isEnumType(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isEnumType());
}

bool  PythonQtWrapper_QMetaProperty::isFinal(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isFinal());
}

bool  PythonQtWrapper_QMetaProperty::isFlagType(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isFlagType());
}

bool  PythonQtWrapper_QMetaProperty::isReadable(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isReadable());
}

bool  PythonQtWrapper_QMetaProperty::isResettable(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isResettable());
}

bool  PythonQtWrapper_QMetaProperty::isScriptable(QMetaProperty* theWrappedObject, const QObject*  obj) const
{
  return ( theWrappedObject->isScriptable(obj));
}

bool  PythonQtWrapper_QMetaProperty::isStored(QMetaProperty* theWrappedObject, const QObject*  obj) const
{
  return ( theWrappedObject->isStored(obj));
}

bool  PythonQtWrapper_QMetaProperty::isUser(QMetaProperty* theWrappedObject, const QObject*  obj) const
{
  return ( theWrappedObject->isUser(obj));
}

bool  PythonQtWrapper_QMetaProperty::isValid(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QMetaProperty::isWritable(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isWritable());
}

const char*  PythonQtWrapper_QMetaProperty::name(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QMetaMethod  PythonQtWrapper_QMetaProperty::notifySignal(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->notifySignal());
}

int  PythonQtWrapper_QMetaProperty::notifySignalIndex(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->notifySignalIndex());
}

int  PythonQtWrapper_QMetaProperty::propertyIndex(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->propertyIndex());
}

QVariant  PythonQtWrapper_QMetaProperty::read(QMetaProperty* theWrappedObject, const QObject*  obj) const
{
  return ( theWrappedObject->read(obj));
}

bool  PythonQtWrapper_QMetaProperty::reset(QMetaProperty* theWrappedObject, QObject*  obj) const
{
  return ( theWrappedObject->reset(obj));
}

int  PythonQtWrapper_QMetaProperty::revision(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->revision());
}

QVariant::Type  PythonQtWrapper_QMetaProperty::type(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

const char*  PythonQtWrapper_QMetaProperty::typeName(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->typeName());
}

int  PythonQtWrapper_QMetaProperty::userType(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->userType());
}

bool  PythonQtWrapper_QMetaProperty::write(QMetaProperty* theWrappedObject, QObject*  obj, const QVariant&  value) const
{
  return ( theWrappedObject->write(obj, value));
}



PythonQtShell_QMetaType::~PythonQtShell_QMetaType() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QMetaType* PythonQtWrapper_QMetaType::new_QMetaType()
{ 
return new PythonQtShell_QMetaType(); }

void*  PythonQtWrapper_QMetaType::static_QMetaType_construct(int  type, const void*  copy)
{
  return (QMetaType::construct(type, copy));
}

void PythonQtWrapper_QMetaType::static_QMetaType_destroy(int  type, void*  data)
{
  (QMetaType::destroy(type, data));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_isRegistered(int  type)
{
  return (QMetaType::isRegistered(type));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_load(QDataStream&  stream, int  type, void*  data)
{
  return (QMetaType::load(stream, type, data));
}

int  PythonQtWrapper_QMetaType::static_QMetaType_registerTypedef(const char*  typeName, int  aliasId)
{
  return (QMetaType::registerTypedef(typeName, aliasId));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_save(QDataStream&  stream, int  type, const void*  data)
{
  return (QMetaType::save(stream, type, data));
}

int  PythonQtWrapper_QMetaType::static_QMetaType_type(const char*  typeName)
{
  return (QMetaType::type(typeName));
}

const char*  PythonQtWrapper_QMetaType::static_QMetaType_typeName(int  type)
{
  return (QMetaType::typeName(type));
}

void PythonQtWrapper_QMetaType::static_QMetaType_unregisterType(const char*  typeName)
{
  (QMetaType::unregisterType(typeName));
}



PythonQtShell_QMimeData::~PythonQtShell_QMimeData() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMimeData::childEvent(QChildEvent*  arg__1)
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
  QMimeData::childEvent(arg__1);
}
void PythonQtShell_QMimeData::customEvent(QEvent*  arg__1)
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
  QMimeData::customEvent(arg__1);
}
bool  PythonQtShell_QMimeData::event(QEvent*  arg__1)
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
  return QMimeData::event(arg__1);
}
bool  PythonQtShell_QMimeData::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QMimeData::eventFilter(arg__1, arg__2);
}
QStringList  PythonQtShell_QMimeData::formats() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "formats");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("formats", methodInfo, result);
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
  return QMimeData::formats();
}
bool  PythonQtShell_QMimeData::hasFormat(const QString&  mimetype) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hasFormat");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&mimetype};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("hasFormat", methodInfo, result);
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
  return QMimeData::hasFormat(mimetype);
}
QVariant  PythonQtShell_QMimeData::retrieveData(const QString&  mimetype, QVariant::Type  preferredType) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "retrieveData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "const QString&" , "QVariant::Type"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&mimetype, (void*)&preferredType};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("retrieveData", methodInfo, result);
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
  return QMimeData::retrieveData(mimetype, preferredType);
}
void PythonQtShell_QMimeData::timerEvent(QTimerEvent*  arg__1)
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
  QMimeData::timerEvent(arg__1);
}
QMimeData* PythonQtWrapper_QMimeData::new_QMimeData()
{ 
return new PythonQtShell_QMimeData(); }

void PythonQtWrapper_QMimeData::clear(QMimeData* theWrappedObject)
{
  ( theWrappedObject->clear());
}

QVariant  PythonQtWrapper_QMimeData::colorData(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->colorData());
}

QByteArray  PythonQtWrapper_QMimeData::data(QMimeData* theWrappedObject, const QString&  mimetype) const
{
  return ( theWrappedObject->data(mimetype));
}

QStringList  PythonQtWrapper_QMimeData::formats(QMimeData* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QMimeData*)theWrappedObject)->promoted_formats());
}

bool  PythonQtWrapper_QMimeData::hasColor(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasColor());
}

bool  PythonQtWrapper_QMimeData::hasFormat(QMimeData* theWrappedObject, const QString&  mimetype) const
{
  return ( ((PythonQtPublicPromoter_QMimeData*)theWrappedObject)->promoted_hasFormat(mimetype));
}

bool  PythonQtWrapper_QMimeData::hasHtml(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasHtml());
}

bool  PythonQtWrapper_QMimeData::hasImage(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasImage());
}

bool  PythonQtWrapper_QMimeData::hasText(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasText());
}

bool  PythonQtWrapper_QMimeData::hasUrls(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasUrls());
}

QString  PythonQtWrapper_QMimeData::html(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->html());
}

QVariant  PythonQtWrapper_QMimeData::imageData(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->imageData());
}

void PythonQtWrapper_QMimeData::removeFormat(QMimeData* theWrappedObject, const QString&  mimetype)
{
  ( theWrappedObject->removeFormat(mimetype));
}

QVariant  PythonQtWrapper_QMimeData::retrieveData(QMimeData* theWrappedObject, const QString&  mimetype, QVariant::Type  preferredType) const
{
  return ( ((PythonQtPublicPromoter_QMimeData*)theWrappedObject)->promoted_retrieveData(mimetype, preferredType));
}

void PythonQtWrapper_QMimeData::setColorData(QMimeData* theWrappedObject, const QVariant&  color)
{
  ( theWrappedObject->setColorData(color));
}

void PythonQtWrapper_QMimeData::setData(QMimeData* theWrappedObject, const QString&  mimetype, const QByteArray&  data)
{
  ( theWrappedObject->setData(mimetype, data));
}

void PythonQtWrapper_QMimeData::setHtml(QMimeData* theWrappedObject, const QString&  html)
{
  ( theWrappedObject->setHtml(html));
}

void PythonQtWrapper_QMimeData::setImageData(QMimeData* theWrappedObject, const QVariant&  image)
{
  ( theWrappedObject->setImageData(image));
}

void PythonQtWrapper_QMimeData::setText(QMimeData* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setText(text));
}

void PythonQtWrapper_QMimeData::setUrls(QMimeData* theWrappedObject, const QList<QUrl >&  urls)
{
  ( theWrappedObject->setUrls(urls));
}

QString  PythonQtWrapper_QMimeData::text(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

QList<QUrl >  PythonQtWrapper_QMimeData::urls(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->urls());
}



QModelIndex* PythonQtWrapper_QModelIndex::new_QModelIndex()
{ 
return new QModelIndex(); }

QModelIndex* PythonQtWrapper_QModelIndex::new_QModelIndex(const QModelIndex&  other)
{ 
return new QModelIndex(other); }

QModelIndex  PythonQtWrapper_QModelIndex::child(QModelIndex* theWrappedObject, int  row, int  column) const
{
  return ( theWrappedObject->child(row, column));
}

int  PythonQtWrapper_QModelIndex::column(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->column());
}

QVariant  PythonQtWrapper_QModelIndex::data(QModelIndex* theWrappedObject, int  role) const
{
  return ( theWrappedObject->data(role));
}

Qt::ItemFlags  PythonQtWrapper_QModelIndex::flags(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

qint64  PythonQtWrapper_QModelIndex::internalId(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->internalId());
}

void*  PythonQtWrapper_QModelIndex::internalPointer(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->internalPointer());
}

bool  PythonQtWrapper_QModelIndex::isValid(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

const QAbstractItemModel*  PythonQtWrapper_QModelIndex::model(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->model());
}

bool  PythonQtWrapper_QModelIndex::__ne__(QModelIndex* theWrappedObject, const QModelIndex&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QModelIndex::__lt__(QModelIndex* theWrappedObject, const QModelIndex&  other) const
{
  return ( (*theWrappedObject)< other);
}

bool  PythonQtWrapper_QModelIndex::__eq__(QModelIndex* theWrappedObject, const QModelIndex&  other) const
{
  return ( (*theWrappedObject)== other);
}

QModelIndex  PythonQtWrapper_QModelIndex::parent(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->parent());
}

int  PythonQtWrapper_QModelIndex::row(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->row());
}

QModelIndex  PythonQtWrapper_QModelIndex::sibling(QModelIndex* theWrappedObject, int  row, int  column) const
{
  return ( theWrappedObject->sibling(row, column));
}

QString PythonQtWrapper_QModelIndex::py_toString(QModelIndex* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QMutex* PythonQtWrapper_QMutex::new_QMutex(QMutex::RecursionMode  mode)
{ 
return new QMutex(mode); }

void PythonQtWrapper_QMutex::lock(QMutex* theWrappedObject)
{
  ( theWrappedObject->lock());
}

void PythonQtWrapper_QMutex::lockInline(QMutex* theWrappedObject)
{
  ( theWrappedObject->lockInline());
}

bool  PythonQtWrapper_QMutex::tryLock(QMutex* theWrappedObject)
{
  return ( theWrappedObject->tryLock());
}

bool  PythonQtWrapper_QMutex::tryLock(QMutex* theWrappedObject, int  timeout)
{
  return ( theWrappedObject->tryLock(timeout));
}

bool  PythonQtWrapper_QMutex::tryLockInline(QMutex* theWrappedObject)
{
  return ( theWrappedObject->tryLockInline());
}

void PythonQtWrapper_QMutex::unlock(QMutex* theWrappedObject)
{
  ( theWrappedObject->unlock());
}

void PythonQtWrapper_QMutex::unlockInline(QMutex* theWrappedObject)
{
  ( theWrappedObject->unlockInline());
}



PythonQtShell_QObject::~PythonQtShell_QObject() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QObject::childEvent(QChildEvent*  arg__1)
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
  QObject::childEvent(arg__1);
}
void PythonQtShell_QObject::customEvent(QEvent*  arg__1)
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
  QObject::customEvent(arg__1);
}
bool  PythonQtShell_QObject::event(QEvent*  arg__1)
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
  return QObject::event(arg__1);
}
bool  PythonQtShell_QObject::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QObject::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QObject::timerEvent(QTimerEvent*  arg__1)
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
  QObject::timerEvent(arg__1);
}
QObject* PythonQtWrapper_QObject::new_QObject(QObject*  parent)
{ 
return new PythonQtShell_QObject(parent); }

bool  PythonQtWrapper_QObject::blockSignals(QObject* theWrappedObject, bool  b)
{
  return ( theWrappedObject->blockSignals(b));
}

void PythonQtWrapper_QObject::childEvent(QObject* theWrappedObject, QChildEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QObject*)theWrappedObject)->promoted_childEvent(arg__1));
}

const QList<QObject* >*  PythonQtWrapper_QObject::children(QObject* theWrappedObject) const
{
  return &( theWrappedObject->children());
}

void PythonQtWrapper_QObject::customEvent(QObject* theWrappedObject, QEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QObject*)theWrappedObject)->promoted_customEvent(arg__1));
}

void PythonQtWrapper_QObject::dumpObjectInfo(QObject* theWrappedObject)
{
  ( theWrappedObject->dumpObjectInfo());
}

void PythonQtWrapper_QObject::dumpObjectTree(QObject* theWrappedObject)
{
  ( theWrappedObject->dumpObjectTree());
}

QList<QByteArray >  PythonQtWrapper_QObject::dynamicPropertyNames(QObject* theWrappedObject) const
{
  return ( theWrappedObject->dynamicPropertyNames());
}

bool  PythonQtWrapper_QObject::event(QObject* theWrappedObject, QEvent*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QObject*)theWrappedObject)->promoted_event(arg__1));
}

bool  PythonQtWrapper_QObject::eventFilter(QObject* theWrappedObject, QObject*  arg__1, QEvent*  arg__2)
{
  return ( ((PythonQtPublicPromoter_QObject*)theWrappedObject)->promoted_eventFilter(arg__1, arg__2));
}

void PythonQtWrapper_QObject::installEventFilter(QObject* theWrappedObject, QObject*  arg__1)
{
  ( theWrappedObject->installEventFilter(arg__1));
}

bool  PythonQtWrapper_QObject::isWidgetType(QObject* theWrappedObject) const
{
  return ( theWrappedObject->isWidgetType());
}

void PythonQtWrapper_QObject::killTimer(QObject* theWrappedObject, int  id)
{
  ( theWrappedObject->killTimer(id));
}

void PythonQtWrapper_QObject::moveToThread(QObject* theWrappedObject, QThread*  thread)
{
  ( theWrappedObject->moveToThread(thread));
}

QString  PythonQtWrapper_QObject::objectName(QObject* theWrappedObject) const
{
  return ( theWrappedObject->objectName());
}

void PythonQtWrapper_QObject::removeEventFilter(QObject* theWrappedObject, QObject*  arg__1)
{
  ( theWrappedObject->removeEventFilter(arg__1));
}

void PythonQtWrapper_QObject::setObjectName(QObject* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setObjectName(name));
}

bool  PythonQtWrapper_QObject::signalsBlocked(QObject* theWrappedObject) const
{
  return ( theWrappedObject->signalsBlocked());
}

int  PythonQtWrapper_QObject::startTimer(QObject* theWrappedObject, int  interval)
{
  return ( theWrappedObject->startTimer(interval));
}

QThread*  PythonQtWrapper_QObject::thread(QObject* theWrappedObject) const
{
  return ( theWrappedObject->thread());
}

void PythonQtWrapper_QObject::timerEvent(QObject* theWrappedObject, QTimerEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QObject*)theWrappedObject)->promoted_timerEvent(arg__1));
}



PythonQtShell_QParallelAnimationGroup::~PythonQtShell_QParallelAnimationGroup() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QParallelAnimationGroup::childEvent(QChildEvent*  arg__1)
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
  QParallelAnimationGroup::childEvent(arg__1);
}
void PythonQtShell_QParallelAnimationGroup::customEvent(QEvent*  arg__1)
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
  QParallelAnimationGroup::customEvent(arg__1);
}
int  PythonQtShell_QParallelAnimationGroup::duration() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "duration");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("duration", methodInfo, result);
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
  return QParallelAnimationGroup::duration();
}
bool  PythonQtShell_QParallelAnimationGroup::event(QEvent*  event)
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
  return QParallelAnimationGroup::event(event);
}
bool  PythonQtShell_QParallelAnimationGroup::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QParallelAnimationGroup::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QParallelAnimationGroup::timerEvent(QTimerEvent*  arg__1)
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
  QParallelAnimationGroup::timerEvent(arg__1);
}
void PythonQtShell_QParallelAnimationGroup::updateCurrentTime(int  currentTime)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateCurrentTime");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&currentTime};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QParallelAnimationGroup::updateCurrentTime(currentTime);
}
void PythonQtShell_QParallelAnimationGroup::updateDirection(QAbstractAnimation::Direction  direction)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateDirection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QAbstractAnimation::Direction"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&direction};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QParallelAnimationGroup::updateDirection(direction);
}
void PythonQtShell_QParallelAnimationGroup::updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateState");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QAbstractAnimation::State" , "QAbstractAnimation::State"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&newState, (void*)&oldState};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QParallelAnimationGroup::updateState(newState, oldState);
}
QParallelAnimationGroup* PythonQtWrapper_QParallelAnimationGroup::new_QParallelAnimationGroup(QObject*  parent)
{ 
return new PythonQtShell_QParallelAnimationGroup(parent); }

int  PythonQtWrapper_QParallelAnimationGroup::duration(QParallelAnimationGroup* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QParallelAnimationGroup*)theWrappedObject)->promoted_duration());
}

bool  PythonQtWrapper_QParallelAnimationGroup::event(QParallelAnimationGroup* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QParallelAnimationGroup*)theWrappedObject)->promoted_event(event));
}

void PythonQtWrapper_QParallelAnimationGroup::updateCurrentTime(QParallelAnimationGroup* theWrappedObject, int  currentTime)
{
  ( ((PythonQtPublicPromoter_QParallelAnimationGroup*)theWrappedObject)->promoted_updateCurrentTime(currentTime));
}

void PythonQtWrapper_QParallelAnimationGroup::updateDirection(QParallelAnimationGroup* theWrappedObject, QAbstractAnimation::Direction  direction)
{
  ( ((PythonQtPublicPromoter_QParallelAnimationGroup*)theWrappedObject)->promoted_updateDirection(direction));
}

void PythonQtWrapper_QParallelAnimationGroup::updateState(QParallelAnimationGroup* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState)
{
  ( ((PythonQtPublicPromoter_QParallelAnimationGroup*)theWrappedObject)->promoted_updateState(newState, oldState));
}



PythonQtShell_QPauseAnimation::~PythonQtShell_QPauseAnimation() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QPauseAnimation::childEvent(QChildEvent*  arg__1)
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
  QPauseAnimation::childEvent(arg__1);
}
void PythonQtShell_QPauseAnimation::customEvent(QEvent*  arg__1)
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
  QPauseAnimation::customEvent(arg__1);
}
int  PythonQtShell_QPauseAnimation::duration() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "duration");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("duration", methodInfo, result);
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
  return QPauseAnimation::duration();
}
bool  PythonQtShell_QPauseAnimation::event(QEvent*  e)
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
  return QPauseAnimation::event(e);
}
bool  PythonQtShell_QPauseAnimation::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QPauseAnimation::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QPauseAnimation::timerEvent(QTimerEvent*  arg__1)
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
  QPauseAnimation::timerEvent(arg__1);
}
void PythonQtShell_QPauseAnimation::updateCurrentTime(int  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateCurrentTime");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPauseAnimation::updateCurrentTime(arg__1);
}
void PythonQtShell_QPauseAnimation::updateDirection(QAbstractAnimation::Direction  direction)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateDirection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QAbstractAnimation::Direction"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&direction};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPauseAnimation::updateDirection(direction);
}
void PythonQtShell_QPauseAnimation::updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateState");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QAbstractAnimation::State" , "QAbstractAnimation::State"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&newState, (void*)&oldState};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPauseAnimation::updateState(newState, oldState);
}
QPauseAnimation* PythonQtWrapper_QPauseAnimation::new_QPauseAnimation(QObject*  parent)
{ 
return new PythonQtShell_QPauseAnimation(parent); }

QPauseAnimation* PythonQtWrapper_QPauseAnimation::new_QPauseAnimation(int  msecs, QObject*  parent)
{ 
return new PythonQtShell_QPauseAnimation(msecs, parent); }

int  PythonQtWrapper_QPauseAnimation::duration(QPauseAnimation* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPauseAnimation*)theWrappedObject)->promoted_duration());
}

bool  PythonQtWrapper_QPauseAnimation::event(QPauseAnimation* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QPauseAnimation*)theWrappedObject)->promoted_event(e));
}

void PythonQtWrapper_QPauseAnimation::setDuration(QPauseAnimation* theWrappedObject, int  msecs)
{
  ( theWrappedObject->setDuration(msecs));
}

void PythonQtWrapper_QPauseAnimation::updateCurrentTime(QPauseAnimation* theWrappedObject, int  arg__1)
{
  ( ((PythonQtPublicPromoter_QPauseAnimation*)theWrappedObject)->promoted_updateCurrentTime(arg__1));
}



PythonQtShell_QProcess::~PythonQtShell_QProcess() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QProcess::atEnd() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "atEnd");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("atEnd", methodInfo, result);
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
  return QProcess::atEnd();
}
qint64  PythonQtShell_QProcess::bytesAvailable() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "bytesAvailable");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("bytesAvailable", methodInfo, result);
        } else {
          returnValue = *((qint64*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QProcess::bytesAvailable();
}
qint64  PythonQtShell_QProcess::bytesToWrite() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "bytesToWrite");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("bytesToWrite", methodInfo, result);
        } else {
          returnValue = *((qint64*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QProcess::bytesToWrite();
}
bool  PythonQtShell_QProcess::canReadLine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "canReadLine");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("canReadLine", methodInfo, result);
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
  return QProcess::canReadLine();
}
void PythonQtShell_QProcess::childEvent(QChildEvent*  arg__1)
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
  QProcess::childEvent(arg__1);
}
void PythonQtShell_QProcess::close()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "close");
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
  QProcess::close();
}
void PythonQtShell_QProcess::customEvent(QEvent*  arg__1)
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
  QProcess::customEvent(arg__1);
}
bool  PythonQtShell_QProcess::event(QEvent*  arg__1)
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
  return QProcess::event(arg__1);
}
bool  PythonQtShell_QProcess::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QProcess::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QProcess::isSequential() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isSequential");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("isSequential", methodInfo, result);
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
  return QProcess::isSequential();
}
bool  PythonQtShell_QProcess::open(QIODevice::OpenMode  mode)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "open");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QIODevice::OpenMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&mode};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("open", methodInfo, result);
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
  return QProcess::open(mode);
}
qint64  PythonQtShell_QProcess::pos() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "pos");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("pos", methodInfo, result);
        } else {
          returnValue = *((qint64*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QProcess::pos();
}
qint64  PythonQtShell_QProcess::readData(char*  data, qint64  maxlen)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "readData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue;
    void* args[3] = {NULL, (void*)&data, (void*)&maxlen};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("readData", methodInfo, result);
        } else {
          returnValue = *((qint64*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QProcess::readData(data, maxlen);
}
qint64  PythonQtShell_QProcess::readLineData(char*  data, qint64  maxlen)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "readLineData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue;
    void* args[3] = {NULL, (void*)&data, (void*)&maxlen};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("readLineData", methodInfo, result);
        } else {
          returnValue = *((qint64*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QProcess::readLineData(data, maxlen);
}
bool  PythonQtShell_QProcess::reset()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "reset");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("reset", methodInfo, result);
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
  return QProcess::reset();
}
bool  PythonQtShell_QProcess::seek(qint64  pos)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "seek");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&pos};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("seek", methodInfo, result);
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
  return QProcess::seek(pos);
}
void PythonQtShell_QProcess::setupChildProcess()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setupChildProcess");
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
  QProcess::setupChildProcess();
}
qint64  PythonQtShell_QProcess::size() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "size");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("size", methodInfo, result);
        } else {
          returnValue = *((qint64*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QProcess::size();
}
void PythonQtShell_QProcess::timerEvent(QTimerEvent*  arg__1)
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
  QProcess::timerEvent(arg__1);
}
bool  PythonQtShell_QProcess::waitForBytesWritten(int  msecs)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "waitForBytesWritten");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&msecs};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("waitForBytesWritten", methodInfo, result);
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
  return QProcess::waitForBytesWritten(msecs);
}
bool  PythonQtShell_QProcess::waitForReadyRead(int  msecs)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "waitForReadyRead");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&msecs};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("waitForReadyRead", methodInfo, result);
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
  return QProcess::waitForReadyRead(msecs);
}
qint64  PythonQtShell_QProcess::writeData(const char*  data, qint64  len)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "writeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"qint64" , "const char*" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue;
    void* args[3] = {NULL, (void*)&data, (void*)&len};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("writeData", methodInfo, result);
        } else {
          returnValue = *((qint64*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QProcess::writeData(data, len);
}
QProcess* PythonQtWrapper_QProcess::new_QProcess(QObject*  parent)
{ 
return new PythonQtShell_QProcess(parent); }

bool  PythonQtWrapper_QProcess::atEnd(QProcess* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QProcess*)theWrappedObject)->promoted_atEnd());
}

qint64  PythonQtWrapper_QProcess::bytesAvailable(QProcess* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QProcess*)theWrappedObject)->promoted_bytesAvailable());
}

qint64  PythonQtWrapper_QProcess::bytesToWrite(QProcess* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QProcess*)theWrappedObject)->promoted_bytesToWrite());
}

bool  PythonQtWrapper_QProcess::canReadLine(QProcess* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QProcess*)theWrappedObject)->promoted_canReadLine());
}

void PythonQtWrapper_QProcess::close(QProcess* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QProcess*)theWrappedObject)->promoted_close());
}

void PythonQtWrapper_QProcess::closeReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel)
{
  ( theWrappedObject->closeReadChannel(channel));
}

void PythonQtWrapper_QProcess::closeWriteChannel(QProcess* theWrappedObject)
{
  ( theWrappedObject->closeWriteChannel());
}

QStringList  PythonQtWrapper_QProcess::environment(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->environment());
}

QProcess::ProcessError  PythonQtWrapper_QProcess::error(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

int  PythonQtWrapper_QProcess::static_QProcess_execute(const QString&  program)
{
  return (QProcess::execute(program));
}

int  PythonQtWrapper_QProcess::static_QProcess_execute(const QString&  program, const QStringList&  arguments)
{
  return (QProcess::execute(program, arguments));
}

int  PythonQtWrapper_QProcess::exitCode(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->exitCode());
}

QProcess::ExitStatus  PythonQtWrapper_QProcess::exitStatus(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->exitStatus());
}

bool  PythonQtWrapper_QProcess::isSequential(QProcess* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QProcess*)theWrappedObject)->promoted_isSequential());
}

QProcess::ProcessChannelMode  PythonQtWrapper_QProcess::processChannelMode(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->processChannelMode());
}

QProcessEnvironment  PythonQtWrapper_QProcess::processEnvironment(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->processEnvironment());
}

QByteArray  PythonQtWrapper_QProcess::readAllStandardError(QProcess* theWrappedObject)
{
  return ( theWrappedObject->readAllStandardError());
}

QByteArray  PythonQtWrapper_QProcess::readAllStandardOutput(QProcess* theWrappedObject)
{
  return ( theWrappedObject->readAllStandardOutput());
}

QProcess::ProcessChannel  PythonQtWrapper_QProcess::readChannel(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->readChannel());
}

qint64  PythonQtWrapper_QProcess::readData(QProcess* theWrappedObject, char*  data, qint64  maxlen)
{
  return ( ((PythonQtPublicPromoter_QProcess*)theWrappedObject)->promoted_readData(data, maxlen));
}

void PythonQtWrapper_QProcess::setEnvironment(QProcess* theWrappedObject, const QStringList&  environment)
{
  ( theWrappedObject->setEnvironment(environment));
}

void PythonQtWrapper_QProcess::setProcessChannelMode(QProcess* theWrappedObject, QProcess::ProcessChannelMode  mode)
{
  ( theWrappedObject->setProcessChannelMode(mode));
}

void PythonQtWrapper_QProcess::setProcessEnvironment(QProcess* theWrappedObject, const QProcessEnvironment&  environment)
{
  ( theWrappedObject->setProcessEnvironment(environment));
}

void PythonQtWrapper_QProcess::setReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel)
{
  ( theWrappedObject->setReadChannel(channel));
}

void PythonQtWrapper_QProcess::setStandardErrorFile(QProcess* theWrappedObject, const QString&  fileName, QIODevice::OpenMode  mode)
{
  ( theWrappedObject->setStandardErrorFile(fileName, mode));
}

void PythonQtWrapper_QProcess::setStandardInputFile(QProcess* theWrappedObject, const QString&  fileName)
{
  ( theWrappedObject->setStandardInputFile(fileName));
}

void PythonQtWrapper_QProcess::setStandardOutputFile(QProcess* theWrappedObject, const QString&  fileName, QIODevice::OpenMode  mode)
{
  ( theWrappedObject->setStandardOutputFile(fileName, mode));
}

void PythonQtWrapper_QProcess::setStandardOutputProcess(QProcess* theWrappedObject, QProcess*  destination)
{
  ( theWrappedObject->setStandardOutputProcess(destination));
}

void PythonQtWrapper_QProcess::setWorkingDirectory(QProcess* theWrappedObject, const QString&  dir)
{
  ( theWrappedObject->setWorkingDirectory(dir));
}

void PythonQtWrapper_QProcess::setupChildProcess(QProcess* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QProcess*)theWrappedObject)->promoted_setupChildProcess());
}

void PythonQtWrapper_QProcess::start(QProcess* theWrappedObject, const QString&  program, QIODevice::OpenMode  mode)
{
  ( theWrappedObject->start(program, mode));
}

void PythonQtWrapper_QProcess::start(QProcess* theWrappedObject, const QString&  program, const QStringList&  arguments, QIODevice::OpenMode  mode)
{
  ( theWrappedObject->start(program, arguments, mode));
}

bool  PythonQtWrapper_QProcess::static_QProcess_startDetached(const QString&  program)
{
  return (QProcess::startDetached(program));
}

bool  PythonQtWrapper_QProcess::static_QProcess_startDetached(const QString&  program, const QStringList&  arguments)
{
  return (QProcess::startDetached(program, arguments));
}

bool  PythonQtWrapper_QProcess::static_QProcess_startDetached(const QString&  program, const QStringList&  arguments, const QString&  workingDirectory, qint64*  pid)
{
  return (QProcess::startDetached(program, arguments, workingDirectory, pid));
}

QProcess::ProcessState  PythonQtWrapper_QProcess::state(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

QStringList  PythonQtWrapper_QProcess::static_QProcess_systemEnvironment()
{
  return (QProcess::systemEnvironment());
}

bool  PythonQtWrapper_QProcess::waitForBytesWritten(QProcess* theWrappedObject, int  msecs)
{
  return ( ((PythonQtPublicPromoter_QProcess*)theWrappedObject)->promoted_waitForBytesWritten(msecs));
}

bool  PythonQtWrapper_QProcess::waitForFinished(QProcess* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForFinished(msecs));
}

bool  PythonQtWrapper_QProcess::waitForReadyRead(QProcess* theWrappedObject, int  msecs)
{
  return ( ((PythonQtPublicPromoter_QProcess*)theWrappedObject)->promoted_waitForReadyRead(msecs));
}

bool  PythonQtWrapper_QProcess::waitForStarted(QProcess* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForStarted(msecs));
}

QString  PythonQtWrapper_QProcess::workingDirectory(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->workingDirectory());
}

qint64  PythonQtWrapper_QProcess::writeData(QProcess* theWrappedObject, const char*  data, qint64  len)
{
  return ( ((PythonQtPublicPromoter_QProcess*)theWrappedObject)->promoted_writeData(data, len));
}



QProcessEnvironment* PythonQtWrapper_QProcessEnvironment::new_QProcessEnvironment()
{ 
return new QProcessEnvironment(); }

QProcessEnvironment* PythonQtWrapper_QProcessEnvironment::new_QProcessEnvironment(const QProcessEnvironment&  other)
{ 
return new QProcessEnvironment(other); }

void PythonQtWrapper_QProcessEnvironment::clear(QProcessEnvironment* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QProcessEnvironment::contains(QProcessEnvironment* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->contains(name));
}

void PythonQtWrapper_QProcessEnvironment::insert(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  e)
{
  ( theWrappedObject->insert(e));
}

void PythonQtWrapper_QProcessEnvironment::insert(QProcessEnvironment* theWrappedObject, const QString&  name, const QString&  value)
{
  ( theWrappedObject->insert(name, value));
}

bool  PythonQtWrapper_QProcessEnvironment::isEmpty(QProcessEnvironment* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QStringList  PythonQtWrapper_QProcessEnvironment::keys(QProcessEnvironment* theWrappedObject) const
{
  return ( theWrappedObject->keys());
}

bool  PythonQtWrapper_QProcessEnvironment::__ne__(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QProcessEnvironment*  PythonQtWrapper_QProcessEnvironment::operator_assign(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QProcessEnvironment::__eq__(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QProcessEnvironment::remove(QProcessEnvironment* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->remove(name));
}

QProcessEnvironment  PythonQtWrapper_QProcessEnvironment::static_QProcessEnvironment_systemEnvironment()
{
  return (QProcessEnvironment::systemEnvironment());
}

QStringList  PythonQtWrapper_QProcessEnvironment::toStringList(QProcessEnvironment* theWrappedObject) const
{
  return ( theWrappedObject->toStringList());
}

QString  PythonQtWrapper_QProcessEnvironment::value(QProcessEnvironment* theWrappedObject, const QString&  name, const QString&  defaultValue) const
{
  return ( theWrappedObject->value(name, defaultValue));
}



PythonQtShell_QPropertyAnimation::~PythonQtShell_QPropertyAnimation() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QPropertyAnimation::childEvent(QChildEvent*  arg__1)
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
  QPropertyAnimation::childEvent(arg__1);
}
void PythonQtShell_QPropertyAnimation::customEvent(QEvent*  arg__1)
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
  QPropertyAnimation::customEvent(arg__1);
}
int  PythonQtShell_QPropertyAnimation::duration() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "duration");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("duration", methodInfo, result);
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
  return QPropertyAnimation::duration();
}
bool  PythonQtShell_QPropertyAnimation::event(QEvent*  event)
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
  return QPropertyAnimation::event(event);
}
bool  PythonQtShell_QPropertyAnimation::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QPropertyAnimation::eventFilter(arg__1, arg__2);
}
QVariant  PythonQtShell_QPropertyAnimation::interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "interpolated");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "const QVariant&" , "const QVariant&" , "qreal"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QVariant returnValue;
    void* args[4] = {NULL, (void*)&from, (void*)&to, (void*)&progress};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("interpolated", methodInfo, result);
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
  return QPropertyAnimation::interpolated(from, to, progress);
}
void PythonQtShell_QPropertyAnimation::timerEvent(QTimerEvent*  arg__1)
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
  QPropertyAnimation::timerEvent(arg__1);
}
void PythonQtShell_QPropertyAnimation::updateCurrentTime(int  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateCurrentTime");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPropertyAnimation::updateCurrentTime(arg__1);
}
void PythonQtShell_QPropertyAnimation::updateCurrentValue(const QVariant&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateCurrentValue");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPropertyAnimation::updateCurrentValue(value);
}
void PythonQtShell_QPropertyAnimation::updateDirection(QAbstractAnimation::Direction  direction)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateDirection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QAbstractAnimation::Direction"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&direction};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPropertyAnimation::updateDirection(direction);
}
void PythonQtShell_QPropertyAnimation::updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateState");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QAbstractAnimation::State" , "QAbstractAnimation::State"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&newState, (void*)&oldState};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPropertyAnimation::updateState(newState, oldState);
}
QPropertyAnimation* PythonQtWrapper_QPropertyAnimation::new_QPropertyAnimation(QObject*  parent)
{ 
return new PythonQtShell_QPropertyAnimation(parent); }

QPropertyAnimation* PythonQtWrapper_QPropertyAnimation::new_QPropertyAnimation(QObject*  target, const QByteArray&  propertyName, QObject*  parent)
{ 
return new PythonQtShell_QPropertyAnimation(target, propertyName, parent); }

bool  PythonQtWrapper_QPropertyAnimation::event(QPropertyAnimation* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QPropertyAnimation*)theWrappedObject)->promoted_event(event));
}

QByteArray  PythonQtWrapper_QPropertyAnimation::propertyName(QPropertyAnimation* theWrappedObject) const
{
  return ( theWrappedObject->propertyName());
}

void PythonQtWrapper_QPropertyAnimation::setPropertyName(QPropertyAnimation* theWrappedObject, const QByteArray&  propertyName)
{
  ( theWrappedObject->setPropertyName(propertyName));
}

void PythonQtWrapper_QPropertyAnimation::setTargetObject(QPropertyAnimation* theWrappedObject, QObject*  target)
{
  ( theWrappedObject->setTargetObject(target));
}

QObject*  PythonQtWrapper_QPropertyAnimation::targetObject(QPropertyAnimation* theWrappedObject) const
{
  return ( theWrappedObject->targetObject());
}

void PythonQtWrapper_QPropertyAnimation::updateCurrentValue(QPropertyAnimation* theWrappedObject, const QVariant&  value)
{
  ( ((PythonQtPublicPromoter_QPropertyAnimation*)theWrappedObject)->promoted_updateCurrentValue(value));
}

void PythonQtWrapper_QPropertyAnimation::updateState(QPropertyAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState)
{
  ( ((PythonQtPublicPromoter_QPropertyAnimation*)theWrappedObject)->promoted_updateState(newState, oldState));
}



QReadWriteLock* PythonQtWrapper_QReadWriteLock::new_QReadWriteLock()
{ 
return new QReadWriteLock(); }

QReadWriteLock* PythonQtWrapper_QReadWriteLock::new_QReadWriteLock(QReadWriteLock::RecursionMode  recursionMode)
{ 
return new QReadWriteLock(recursionMode); }

void PythonQtWrapper_QReadWriteLock::lockForRead(QReadWriteLock* theWrappedObject)
{
  ( theWrappedObject->lockForRead());
}

void PythonQtWrapper_QReadWriteLock::lockForWrite(QReadWriteLock* theWrappedObject)
{
  ( theWrappedObject->lockForWrite());
}

bool  PythonQtWrapper_QReadWriteLock::tryLockForRead(QReadWriteLock* theWrappedObject)
{
  return ( theWrappedObject->tryLockForRead());
}

bool  PythonQtWrapper_QReadWriteLock::tryLockForRead(QReadWriteLock* theWrappedObject, int  timeout)
{
  return ( theWrappedObject->tryLockForRead(timeout));
}

bool  PythonQtWrapper_QReadWriteLock::tryLockForWrite(QReadWriteLock* theWrappedObject)
{
  return ( theWrappedObject->tryLockForWrite());
}

bool  PythonQtWrapper_QReadWriteLock::tryLockForWrite(QReadWriteLock* theWrappedObject, int  timeout)
{
  return ( theWrappedObject->tryLockForWrite(timeout));
}

void PythonQtWrapper_QReadWriteLock::unlock(QReadWriteLock* theWrappedObject)
{
  ( theWrappedObject->unlock());
}



PythonQtShell_QResource::~PythonQtShell_QResource() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QResource* PythonQtWrapper_QResource::new_QResource(const QString&  file, const QLocale&  locale)
{ 
return new PythonQtShell_QResource(file, locale); }

QString  PythonQtWrapper_QResource::absoluteFilePath(QResource* theWrappedObject) const
{
  return ( theWrappedObject->absoluteFilePath());
}

void PythonQtWrapper_QResource::static_QResource_addSearchPath(const QString&  path)
{
  (QResource::addSearchPath(path));
}

const uchar*  PythonQtWrapper_QResource::data(QResource* theWrappedObject) const
{
  return ( theWrappedObject->data());
}

QString  PythonQtWrapper_QResource::fileName(QResource* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

bool  PythonQtWrapper_QResource::isCompressed(QResource* theWrappedObject) const
{
  return ( theWrappedObject->isCompressed());
}

bool  PythonQtWrapper_QResource::isValid(QResource* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QLocale  PythonQtWrapper_QResource::locale(QResource* theWrappedObject) const
{
  return ( theWrappedObject->locale());
}

bool  PythonQtWrapper_QResource::static_QResource_registerResource(const QString&  rccFilename, const QString&  resourceRoot)
{
  return (QResource::registerResource(rccFilename, resourceRoot));
}

bool  PythonQtWrapper_QResource::static_QResource_registerResource(const uchar*  rccData, const QString&  resourceRoot)
{
  return (QResource::registerResource(rccData, resourceRoot));
}

QStringList  PythonQtWrapper_QResource::static_QResource_searchPaths()
{
  return (QResource::searchPaths());
}

void PythonQtWrapper_QResource::setFileName(QResource* theWrappedObject, const QString&  file)
{
  ( theWrappedObject->setFileName(file));
}

void PythonQtWrapper_QResource::setLocale(QResource* theWrappedObject, const QLocale&  locale)
{
  ( theWrappedObject->setLocale(locale));
}

qint64  PythonQtWrapper_QResource::size(QResource* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

bool  PythonQtWrapper_QResource::static_QResource_unregisterResource(const QString&  rccFilename, const QString&  resourceRoot)
{
  return (QResource::unregisterResource(rccFilename, resourceRoot));
}

bool  PythonQtWrapper_QResource::static_QResource_unregisterResource(const uchar*  rccData, const QString&  resourceRoot)
{
  return (QResource::unregisterResource(rccData, resourceRoot));
}



PythonQtShell_QRunnable::~PythonQtShell_QRunnable() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QRunnable::run()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "run");
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
  
}
QRunnable* PythonQtWrapper_QRunnable::new_QRunnable()
{ 
return new PythonQtShell_QRunnable(); }

bool  PythonQtWrapper_QRunnable::autoDelete(QRunnable* theWrappedObject) const
{
  return ( theWrappedObject->autoDelete());
}

void PythonQtWrapper_QRunnable::setAutoDelete(QRunnable* theWrappedObject, bool  _autoDelete)
{
  ( theWrappedObject->setAutoDelete(_autoDelete));
}



QSemaphore* PythonQtWrapper_QSemaphore::new_QSemaphore(int  n)
{ 
return new QSemaphore(n); }

void PythonQtWrapper_QSemaphore::acquire(QSemaphore* theWrappedObject, int  n)
{
  ( theWrappedObject->acquire(n));
}

int  PythonQtWrapper_QSemaphore::available(QSemaphore* theWrappedObject) const
{
  return ( theWrappedObject->available());
}

void PythonQtWrapper_QSemaphore::release(QSemaphore* theWrappedObject, int  n)
{
  ( theWrappedObject->release(n));
}

bool  PythonQtWrapper_QSemaphore::tryAcquire(QSemaphore* theWrappedObject, int  n)
{
  return ( theWrappedObject->tryAcquire(n));
}

bool  PythonQtWrapper_QSemaphore::tryAcquire(QSemaphore* theWrappedObject, int  n, int  timeout)
{
  return ( theWrappedObject->tryAcquire(n, timeout));
}



PythonQtShell_QSequentialAnimationGroup::~PythonQtShell_QSequentialAnimationGroup() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QSequentialAnimationGroup::childEvent(QChildEvent*  arg__1)
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
  QSequentialAnimationGroup::childEvent(arg__1);
}
void PythonQtShell_QSequentialAnimationGroup::customEvent(QEvent*  arg__1)
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
  QSequentialAnimationGroup::customEvent(arg__1);
}
int  PythonQtShell_QSequentialAnimationGroup::duration() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "duration");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("duration", methodInfo, result);
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
  return QSequentialAnimationGroup::duration();
}
bool  PythonQtShell_QSequentialAnimationGroup::event(QEvent*  event)
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
  return QSequentialAnimationGroup::event(event);
}
bool  PythonQtShell_QSequentialAnimationGroup::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QSequentialAnimationGroup::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QSequentialAnimationGroup::timerEvent(QTimerEvent*  arg__1)
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
  QSequentialAnimationGroup::timerEvent(arg__1);
}
void PythonQtShell_QSequentialAnimationGroup::updateCurrentTime(int  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateCurrentTime");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSequentialAnimationGroup::updateCurrentTime(arg__1);
}
void PythonQtShell_QSequentialAnimationGroup::updateDirection(QAbstractAnimation::Direction  direction)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateDirection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QAbstractAnimation::Direction"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&direction};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSequentialAnimationGroup::updateDirection(direction);
}
void PythonQtShell_QSequentialAnimationGroup::updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateState");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QAbstractAnimation::State" , "QAbstractAnimation::State"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&newState, (void*)&oldState};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSequentialAnimationGroup::updateState(newState, oldState);
}
QSequentialAnimationGroup* PythonQtWrapper_QSequentialAnimationGroup::new_QSequentialAnimationGroup(QObject*  parent)
{ 
return new PythonQtShell_QSequentialAnimationGroup(parent); }

QPauseAnimation*  PythonQtWrapper_QSequentialAnimationGroup::addPause(QSequentialAnimationGroup* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->addPause(msecs));
}

QAbstractAnimation*  PythonQtWrapper_QSequentialAnimationGroup::currentAnimation(QSequentialAnimationGroup* theWrappedObject) const
{
  return ( theWrappedObject->currentAnimation());
}

int  PythonQtWrapper_QSequentialAnimationGroup::duration(QSequentialAnimationGroup* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->promoted_duration());
}

bool  PythonQtWrapper_QSequentialAnimationGroup::event(QSequentialAnimationGroup* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->promoted_event(event));
}

QPauseAnimation*  PythonQtWrapper_QSequentialAnimationGroup::insertPause(QSequentialAnimationGroup* theWrappedObject, int  index, int  msecs)
{
  return ( theWrappedObject->insertPause(index, msecs));
}

void PythonQtWrapper_QSequentialAnimationGroup::updateCurrentTime(QSequentialAnimationGroup* theWrappedObject, int  arg__1)
{
  ( ((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->promoted_updateCurrentTime(arg__1));
}

void PythonQtWrapper_QSequentialAnimationGroup::updateDirection(QSequentialAnimationGroup* theWrappedObject, QAbstractAnimation::Direction  direction)
{
  ( ((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->promoted_updateDirection(direction));
}

void PythonQtWrapper_QSequentialAnimationGroup::updateState(QSequentialAnimationGroup* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState)
{
  ( ((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->promoted_updateState(newState, oldState));
}



PythonQtShell_QSettings::~PythonQtShell_QSettings() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QSettings::childEvent(QChildEvent*  arg__1)
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
  QSettings::childEvent(arg__1);
}
void PythonQtShell_QSettings::customEvent(QEvent*  arg__1)
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
  QSettings::customEvent(arg__1);
}
bool  PythonQtShell_QSettings::event(QEvent*  event)
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
  return QSettings::event(event);
}
bool  PythonQtShell_QSettings::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QSettings::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QSettings::timerEvent(QTimerEvent*  arg__1)
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
  QSettings::timerEvent(arg__1);
}
QSettings* PythonQtWrapper_QSettings::new_QSettings(QObject*  parent)
{ 
return new PythonQtShell_QSettings(parent); }

QSettings* PythonQtWrapper_QSettings::new_QSettings(QSettings::Format  format, QSettings::Scope  scope, const QString&  organization, const QString&  application, QObject*  parent)
{ 
return new PythonQtShell_QSettings(format, scope, organization, application, parent); }

QSettings* PythonQtWrapper_QSettings::new_QSettings(QSettings::Scope  scope, const QString&  organization, const QString&  application, QObject*  parent)
{ 
return new PythonQtShell_QSettings(scope, organization, application, parent); }

QSettings* PythonQtWrapper_QSettings::new_QSettings(const QString&  fileName, QSettings::Format  format, QObject*  parent)
{ 
return new PythonQtShell_QSettings(fileName, format, parent); }

QSettings* PythonQtWrapper_QSettings::new_QSettings(const QString&  organization, const QString&  application, QObject*  parent)
{ 
return new PythonQtShell_QSettings(organization, application, parent); }

QStringList  PythonQtWrapper_QSettings::allKeys(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->allKeys());
}

QString  PythonQtWrapper_QSettings::applicationName(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->applicationName());
}

void PythonQtWrapper_QSettings::beginGroup(QSettings* theWrappedObject, const QString&  prefix)
{
  ( theWrappedObject->beginGroup(prefix));
}

int  PythonQtWrapper_QSettings::beginReadArray(QSettings* theWrappedObject, const QString&  prefix)
{
  return ( theWrappedObject->beginReadArray(prefix));
}

void PythonQtWrapper_QSettings::beginWriteArray(QSettings* theWrappedObject, const QString&  prefix, int  size)
{
  ( theWrappedObject->beginWriteArray(prefix, size));
}

QStringList  PythonQtWrapper_QSettings::childGroups(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->childGroups());
}

QStringList  PythonQtWrapper_QSettings::childKeys(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->childKeys());
}

void PythonQtWrapper_QSettings::clear(QSettings* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QSettings::contains(QSettings* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->contains(key));
}

QSettings::Format  PythonQtWrapper_QSettings::static_QSettings_defaultFormat()
{
  return (QSettings::defaultFormat());
}

void PythonQtWrapper_QSettings::endArray(QSettings* theWrappedObject)
{
  ( theWrappedObject->endArray());
}

void PythonQtWrapper_QSettings::endGroup(QSettings* theWrappedObject)
{
  ( theWrappedObject->endGroup());
}

bool  PythonQtWrapper_QSettings::event(QSettings* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QSettings*)theWrappedObject)->promoted_event(event));
}

bool  PythonQtWrapper_QSettings::fallbacksEnabled(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->fallbacksEnabled());
}

QString  PythonQtWrapper_QSettings::fileName(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

QSettings::Format  PythonQtWrapper_QSettings::format(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

QString  PythonQtWrapper_QSettings::group(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->group());
}

QTextCodec*  PythonQtWrapper_QSettings::iniCodec(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->iniCodec());
}

bool  PythonQtWrapper_QSettings::isWritable(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->isWritable());
}

QString  PythonQtWrapper_QSettings::organizationName(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->organizationName());
}

void PythonQtWrapper_QSettings::remove(QSettings* theWrappedObject, const QString&  key)
{
  ( theWrappedObject->remove(key));
}

QSettings::Scope  PythonQtWrapper_QSettings::scope(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->scope());
}

void PythonQtWrapper_QSettings::setArrayIndex(QSettings* theWrappedObject, int  i)
{
  ( theWrappedObject->setArrayIndex(i));
}

void PythonQtWrapper_QSettings::static_QSettings_setDefaultFormat(QSettings::Format  format)
{
  (QSettings::setDefaultFormat(format));
}

void PythonQtWrapper_QSettings::setFallbacksEnabled(QSettings* theWrappedObject, bool  b)
{
  ( theWrappedObject->setFallbacksEnabled(b));
}

void PythonQtWrapper_QSettings::setIniCodec(QSettings* theWrappedObject, QTextCodec*  codec)
{
  ( theWrappedObject->setIniCodec(codec));
}

void PythonQtWrapper_QSettings::setIniCodec(QSettings* theWrappedObject, const char*  codecName)
{
  ( theWrappedObject->setIniCodec(codecName));
}

void PythonQtWrapper_QSettings::static_QSettings_setPath(QSettings::Format  format, QSettings::Scope  scope, const QString&  path)
{
  (QSettings::setPath(format, scope, path));
}

void PythonQtWrapper_QSettings::setValue(QSettings* theWrappedObject, const QString&  key, const QVariant&  value)
{
  ( theWrappedObject->setValue(key, value));
}

QSettings::Status  PythonQtWrapper_QSettings::status(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->status());
}

void PythonQtWrapper_QSettings::sync(QSettings* theWrappedObject)
{
  ( theWrappedObject->sync());
}

QVariant  PythonQtWrapper_QSettings::value(QSettings* theWrappedObject, const QString&  key, const QVariant&  defaultValue) const
{
  return ( theWrappedObject->value(key, defaultValue));
}



PythonQtShell_QSharedMemory::~PythonQtShell_QSharedMemory() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QSharedMemory::childEvent(QChildEvent*  arg__1)
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
  QSharedMemory::childEvent(arg__1);
}
void PythonQtShell_QSharedMemory::customEvent(QEvent*  arg__1)
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
  QSharedMemory::customEvent(arg__1);
}
bool  PythonQtShell_QSharedMemory::event(QEvent*  arg__1)
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
  return QSharedMemory::event(arg__1);
}
bool  PythonQtShell_QSharedMemory::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QSharedMemory::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QSharedMemory::timerEvent(QTimerEvent*  arg__1)
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
  QSharedMemory::timerEvent(arg__1);
}
QSharedMemory* PythonQtWrapper_QSharedMemory::new_QSharedMemory(QObject*  parent)
{ 
return new PythonQtShell_QSharedMemory(parent); }

QSharedMemory* PythonQtWrapper_QSharedMemory::new_QSharedMemory(const QString&  key, QObject*  parent)
{ 
return new PythonQtShell_QSharedMemory(key, parent); }

bool  PythonQtWrapper_QSharedMemory::attach(QSharedMemory* theWrappedObject, QSharedMemory::AccessMode  mode)
{
  return ( theWrappedObject->attach(mode));
}

const void*  PythonQtWrapper_QSharedMemory::constData(QSharedMemory* theWrappedObject) const
{
  return ( theWrappedObject->constData());
}

bool  PythonQtWrapper_QSharedMemory::create(QSharedMemory* theWrappedObject, int  size, QSharedMemory::AccessMode  mode)
{
  return ( theWrappedObject->create(size, mode));
}

void*  PythonQtWrapper_QSharedMemory::data(QSharedMemory* theWrappedObject)
{
  return ( theWrappedObject->data());
}

const void*  PythonQtWrapper_QSharedMemory::data(QSharedMemory* theWrappedObject) const
{
  return ( theWrappedObject->data());
}

QSharedMemory::SharedMemoryError  PythonQtWrapper_QSharedMemory::error(QSharedMemory* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QSharedMemory::errorString(QSharedMemory* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QSharedMemory::isAttached(QSharedMemory* theWrappedObject) const
{
  return ( theWrappedObject->isAttached());
}

QString  PythonQtWrapper_QSharedMemory::key(QSharedMemory* theWrappedObject) const
{
  return ( theWrappedObject->key());
}

bool  PythonQtWrapper_QSharedMemory::lock(QSharedMemory* theWrappedObject)
{
  return ( theWrappedObject->lock());
}

QString  PythonQtWrapper_QSharedMemory::nativeKey(QSharedMemory* theWrappedObject) const
{
  return ( theWrappedObject->nativeKey());
}

void PythonQtWrapper_QSharedMemory::setKey(QSharedMemory* theWrappedObject, const QString&  key)
{
  ( theWrappedObject->setKey(key));
}

void PythonQtWrapper_QSharedMemory::setNativeKey(QSharedMemory* theWrappedObject, const QString&  key)
{
  ( theWrappedObject->setNativeKey(key));
}

int  PythonQtWrapper_QSharedMemory::size(QSharedMemory* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

bool  PythonQtWrapper_QSharedMemory::unlock(QSharedMemory* theWrappedObject)
{
  return ( theWrappedObject->unlock());
}



PythonQtShell_QSignalMapper::~PythonQtShell_QSignalMapper() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QSignalMapper::childEvent(QChildEvent*  arg__1)
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
  QSignalMapper::childEvent(arg__1);
}
void PythonQtShell_QSignalMapper::customEvent(QEvent*  arg__1)
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
  QSignalMapper::customEvent(arg__1);
}
bool  PythonQtShell_QSignalMapper::event(QEvent*  arg__1)
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
  return QSignalMapper::event(arg__1);
}
bool  PythonQtShell_QSignalMapper::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QSignalMapper::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QSignalMapper::timerEvent(QTimerEvent*  arg__1)
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
  QSignalMapper::timerEvent(arg__1);
}
QSignalMapper* PythonQtWrapper_QSignalMapper::new_QSignalMapper(QObject*  parent)
{ 
return new PythonQtShell_QSignalMapper(parent); }

QObject*  PythonQtWrapper_QSignalMapper::mapping(QSignalMapper* theWrappedObject, QObject*  object) const
{
  return ( theWrappedObject->mapping(object));
}

QObject*  PythonQtWrapper_QSignalMapper::mapping(QSignalMapper* theWrappedObject, const QString&  text) const
{
  return ( theWrappedObject->mapping(text));
}

QObject*  PythonQtWrapper_QSignalMapper::mapping(QSignalMapper* theWrappedObject, int  id) const
{
  return ( theWrappedObject->mapping(id));
}

void PythonQtWrapper_QSignalMapper::removeMappings(QSignalMapper* theWrappedObject, QObject*  sender)
{
  ( theWrappedObject->removeMappings(sender));
}

void PythonQtWrapper_QSignalMapper::setMapping(QSignalMapper* theWrappedObject, QObject*  sender, QObject*  object)
{
  ( theWrappedObject->setMapping(sender, object));
}

void PythonQtWrapper_QSignalMapper::setMapping(QSignalMapper* theWrappedObject, QObject*  sender, const QString&  text)
{
  ( theWrappedObject->setMapping(sender, text));
}

void PythonQtWrapper_QSignalMapper::setMapping(QSignalMapper* theWrappedObject, QObject*  sender, int  id)
{
  ( theWrappedObject->setMapping(sender, id));
}



PythonQtShell_QSignalTransition::~PythonQtShell_QSignalTransition() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QSignalTransition::childEvent(QChildEvent*  arg__1)
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
  QSignalTransition::childEvent(arg__1);
}
void PythonQtShell_QSignalTransition::customEvent(QEvent*  arg__1)
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
  QSignalTransition::customEvent(arg__1);
}
bool  PythonQtShell_QSignalTransition::event(QEvent*  e)
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
  return QSignalTransition::event(e);
}
bool  PythonQtShell_QSignalTransition::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QSignalTransition::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QSignalTransition::eventTest(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventTest");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("eventTest", methodInfo, result);
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
  return QSignalTransition::eventTest(event);
}
void PythonQtShell_QSignalTransition::onTransition(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "onTransition");
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
  QSignalTransition::onTransition(event);
}
void PythonQtShell_QSignalTransition::timerEvent(QTimerEvent*  arg__1)
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
  QSignalTransition::timerEvent(arg__1);
}
QSignalTransition* PythonQtWrapper_QSignalTransition::new_QSignalTransition(QObject*  sender, const char*  signal, QState*  sourceState)
{ 
return new PythonQtShell_QSignalTransition(sender, signal, sourceState); }

QSignalTransition* PythonQtWrapper_QSignalTransition::new_QSignalTransition(QState*  sourceState)
{ 
return new PythonQtShell_QSignalTransition(sourceState); }

bool  PythonQtWrapper_QSignalTransition::event(QSignalTransition* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QSignalTransition*)theWrappedObject)->promoted_event(e));
}

bool  PythonQtWrapper_QSignalTransition::eventTest(QSignalTransition* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QSignalTransition*)theWrappedObject)->promoted_eventTest(event));
}

void PythonQtWrapper_QSignalTransition::onTransition(QSignalTransition* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QSignalTransition*)theWrappedObject)->promoted_onTransition(event));
}

QObject*  PythonQtWrapper_QSignalTransition::senderObject(QSignalTransition* theWrappedObject) const
{
  return ( theWrappedObject->senderObject());
}

void PythonQtWrapper_QSignalTransition::setSenderObject(QSignalTransition* theWrappedObject, QObject*  sender)
{
  ( theWrappedObject->setSenderObject(sender));
}

void PythonQtWrapper_QSignalTransition::setSignal(QSignalTransition* theWrappedObject, const QByteArray&  signal)
{
  ( theWrappedObject->setSignal(signal));
}

QByteArray  PythonQtWrapper_QSignalTransition::signal(QSignalTransition* theWrappedObject) const
{
  return ( theWrappedObject->signal());
}



PythonQtShell_QSocketNotifier::~PythonQtShell_QSocketNotifier() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QSocketNotifier::childEvent(QChildEvent*  arg__1)
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
  QSocketNotifier::childEvent(arg__1);
}
void PythonQtShell_QSocketNotifier::customEvent(QEvent*  arg__1)
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
  QSocketNotifier::customEvent(arg__1);
}
bool  PythonQtShell_QSocketNotifier::event(QEvent*  arg__1)
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
  return QSocketNotifier::event(arg__1);
}
bool  PythonQtShell_QSocketNotifier::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QSocketNotifier::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QSocketNotifier::timerEvent(QTimerEvent*  arg__1)
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
  QSocketNotifier::timerEvent(arg__1);
}
QSocketNotifier* PythonQtWrapper_QSocketNotifier::new_QSocketNotifier(int  socket, QSocketNotifier::Type  arg__2, QObject*  parent)
{ 
return new PythonQtShell_QSocketNotifier(socket, arg__2, parent); }

bool  PythonQtWrapper_QSocketNotifier::event(QSocketNotifier* theWrappedObject, QEvent*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QSocketNotifier*)theWrappedObject)->promoted_event(arg__1));
}

bool  PythonQtWrapper_QSocketNotifier::isEnabled(QSocketNotifier* theWrappedObject) const
{
  return ( theWrappedObject->isEnabled());
}

int  PythonQtWrapper_QSocketNotifier::socket(QSocketNotifier* theWrappedObject) const
{
  return ( theWrappedObject->socket());
}

QSocketNotifier::Type  PythonQtWrapper_QSocketNotifier::type(QSocketNotifier* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



PythonQtShell_QState::~PythonQtShell_QState() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QState::childEvent(QChildEvent*  arg__1)
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
  QState::childEvent(arg__1);
}
void PythonQtShell_QState::customEvent(QEvent*  arg__1)
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
  QState::customEvent(arg__1);
}
bool  PythonQtShell_QState::event(QEvent*  e)
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
  return QState::event(e);
}
bool  PythonQtShell_QState::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QState::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QState::onEntry(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "onEntry");
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
  QState::onEntry(event);
}
void PythonQtShell_QState::onExit(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "onExit");
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
  QState::onExit(event);
}
void PythonQtShell_QState::timerEvent(QTimerEvent*  arg__1)
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
  QState::timerEvent(arg__1);
}
QState* PythonQtWrapper_QState::new_QState(QState*  parent)
{ 
return new PythonQtShell_QState(parent); }

QState* PythonQtWrapper_QState::new_QState(QState::ChildMode  childMode, QState*  parent)
{ 
return new PythonQtShell_QState(childMode, parent); }

QAbstractTransition*  PythonQtWrapper_QState::addTransition(QState* theWrappedObject, QAbstractState*  target)
{
  return ( theWrappedObject->addTransition(target));
}

void PythonQtWrapper_QState::addTransition(QState* theWrappedObject, QAbstractTransition*  transition)
{
  ( theWrappedObject->addTransition(transition));
}

QSignalTransition*  PythonQtWrapper_QState::addTransition(QState* theWrappedObject, QObject*  sender, const char*  signal, QAbstractState*  target)
{
  return ( theWrappedObject->addTransition(sender, signal, target));
}

void PythonQtWrapper_QState::assignProperty(QState* theWrappedObject, QObject*  object, const char*  name, const QVariant&  value)
{
  ( theWrappedObject->assignProperty(object, name, value));
}

QState::ChildMode  PythonQtWrapper_QState::childMode(QState* theWrappedObject) const
{
  return ( theWrappedObject->childMode());
}

QAbstractState*  PythonQtWrapper_QState::errorState(QState* theWrappedObject) const
{
  return ( theWrappedObject->errorState());
}

bool  PythonQtWrapper_QState::event(QState* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QState*)theWrappedObject)->promoted_event(e));
}

QAbstractState*  PythonQtWrapper_QState::initialState(QState* theWrappedObject) const
{
  return ( theWrappedObject->initialState());
}

void PythonQtWrapper_QState::onEntry(QState* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QState*)theWrappedObject)->promoted_onEntry(event));
}

void PythonQtWrapper_QState::onExit(QState* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QState*)theWrappedObject)->promoted_onExit(event));
}

void PythonQtWrapper_QState::removeTransition(QState* theWrappedObject, QAbstractTransition*  transition)
{
  ( theWrappedObject->removeTransition(transition));
}

void PythonQtWrapper_QState::setChildMode(QState* theWrappedObject, QState::ChildMode  mode)
{
  ( theWrappedObject->setChildMode(mode));
}

void PythonQtWrapper_QState::setErrorState(QState* theWrappedObject, QAbstractState*  state)
{
  ( theWrappedObject->setErrorState(state));
}

void PythonQtWrapper_QState::setInitialState(QState* theWrappedObject, QAbstractState*  state)
{
  ( theWrappedObject->setInitialState(state));
}

QList<QAbstractTransition* >  PythonQtWrapper_QState::transitions(QState* theWrappedObject) const
{
  return ( theWrappedObject->transitions());
}



PythonQtShell_QStateMachine::~PythonQtShell_QStateMachine() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QStateMachine::beginMicrostep(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "beginMicrostep");
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
  QStateMachine::beginMicrostep(event);
}
void PythonQtShell_QStateMachine::beginSelectTransitions(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "beginSelectTransitions");
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
  QStateMachine::beginSelectTransitions(event);
}
void PythonQtShell_QStateMachine::childEvent(QChildEvent*  arg__1)
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
  QStateMachine::childEvent(arg__1);
}
void PythonQtShell_QStateMachine::customEvent(QEvent*  arg__1)
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
  QStateMachine::customEvent(arg__1);
}
void PythonQtShell_QStateMachine::endMicrostep(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "endMicrostep");
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
  QStateMachine::endMicrostep(event);
}
void PythonQtShell_QStateMachine::endSelectTransitions(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "endSelectTransitions");
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
  QStateMachine::endSelectTransitions(event);
}
bool  PythonQtShell_QStateMachine::event(QEvent*  e)
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
  return QStateMachine::event(e);
}
bool  PythonQtShell_QStateMachine::eventFilter(QObject*  watched, QEvent*  event)
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
  return QStateMachine::eventFilter(watched, event);
}
void PythonQtShell_QStateMachine::onEntry(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "onEntry");
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
  QStateMachine::onEntry(event);
}
void PythonQtShell_QStateMachine::onExit(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "onExit");
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
  QStateMachine::onExit(event);
}
void PythonQtShell_QStateMachine::timerEvent(QTimerEvent*  arg__1)
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
  QStateMachine::timerEvent(arg__1);
}
QStateMachine* PythonQtWrapper_QStateMachine::new_QStateMachine(QObject*  parent)
{ 
return new PythonQtShell_QStateMachine(parent); }

void PythonQtWrapper_QStateMachine::addDefaultAnimation(QStateMachine* theWrappedObject, QAbstractAnimation*  animation)
{
  ( theWrappedObject->addDefaultAnimation(animation));
}

void PythonQtWrapper_QStateMachine::addState(QStateMachine* theWrappedObject, QAbstractState*  state)
{
  ( theWrappedObject->addState(state));
}

void PythonQtWrapper_QStateMachine::beginMicrostep(QStateMachine* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QStateMachine*)theWrappedObject)->promoted_beginMicrostep(event));
}

void PythonQtWrapper_QStateMachine::beginSelectTransitions(QStateMachine* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QStateMachine*)theWrappedObject)->promoted_beginSelectTransitions(event));
}

bool  PythonQtWrapper_QStateMachine::cancelDelayedEvent(QStateMachine* theWrappedObject, int  id)
{
  return ( theWrappedObject->cancelDelayedEvent(id));
}

void PythonQtWrapper_QStateMachine::clearError(QStateMachine* theWrappedObject)
{
  ( theWrappedObject->clearError());
}

QSet<QAbstractState* >  PythonQtWrapper_QStateMachine::configuration(QStateMachine* theWrappedObject) const
{
  return ( theWrappedObject->configuration());
}

QList<QAbstractAnimation* >  PythonQtWrapper_QStateMachine::defaultAnimations(QStateMachine* theWrappedObject) const
{
  return ( theWrappedObject->defaultAnimations());
}

void PythonQtWrapper_QStateMachine::endMicrostep(QStateMachine* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QStateMachine*)theWrappedObject)->promoted_endMicrostep(event));
}

void PythonQtWrapper_QStateMachine::endSelectTransitions(QStateMachine* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QStateMachine*)theWrappedObject)->promoted_endSelectTransitions(event));
}

QStateMachine::Error  PythonQtWrapper_QStateMachine::error(QStateMachine* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QStateMachine::errorString(QStateMachine* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QStateMachine::event(QStateMachine* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QStateMachine*)theWrappedObject)->promoted_event(e));
}

bool  PythonQtWrapper_QStateMachine::eventFilter(QStateMachine* theWrappedObject, QObject*  watched, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QStateMachine*)theWrappedObject)->promoted_eventFilter(watched, event));
}

QStateMachine::RestorePolicy  PythonQtWrapper_QStateMachine::globalRestorePolicy(QStateMachine* theWrappedObject) const
{
  return ( theWrappedObject->globalRestorePolicy());
}

bool  PythonQtWrapper_QStateMachine::isAnimated(QStateMachine* theWrappedObject) const
{
  return ( theWrappedObject->isAnimated());
}

bool  PythonQtWrapper_QStateMachine::isRunning(QStateMachine* theWrappedObject) const
{
  return ( theWrappedObject->isRunning());
}

void PythonQtWrapper_QStateMachine::onEntry(QStateMachine* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QStateMachine*)theWrappedObject)->promoted_onEntry(event));
}

void PythonQtWrapper_QStateMachine::onExit(QStateMachine* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QStateMachine*)theWrappedObject)->promoted_onExit(event));
}

int  PythonQtWrapper_QStateMachine::postDelayedEvent(QStateMachine* theWrappedObject, QEvent*  event, int  delay)
{
  return ( theWrappedObject->postDelayedEvent(event, delay));
}

void PythonQtWrapper_QStateMachine::postEvent(QStateMachine* theWrappedObject, QEvent*  event, QStateMachine::EventPriority  priority)
{
  ( theWrappedObject->postEvent(event, priority));
}

void PythonQtWrapper_QStateMachine::removeDefaultAnimation(QStateMachine* theWrappedObject, QAbstractAnimation*  animation)
{
  ( theWrappedObject->removeDefaultAnimation(animation));
}

void PythonQtWrapper_QStateMachine::removeState(QStateMachine* theWrappedObject, QAbstractState*  state)
{
  ( theWrappedObject->removeState(state));
}

void PythonQtWrapper_QStateMachine::setAnimated(QStateMachine* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setAnimated(enabled));
}

void PythonQtWrapper_QStateMachine::setGlobalRestorePolicy(QStateMachine* theWrappedObject, QStateMachine::RestorePolicy  restorePolicy)
{
  ( theWrappedObject->setGlobalRestorePolicy(restorePolicy));
}



QStateMachine::SignalEvent* PythonQtWrapper_QStateMachine_SignalEvent::new_QStateMachine_SignalEvent(QObject*  sender, int  signalIndex, const QList<QVariant >&  arguments)
{ 
return new QStateMachine::SignalEvent(sender, signalIndex, arguments); }

QList<QVariant >  PythonQtWrapper_QStateMachine_SignalEvent::arguments(QStateMachine::SignalEvent* theWrappedObject) const
{
  return ( theWrappedObject->arguments());
}

QObject*  PythonQtWrapper_QStateMachine_SignalEvent::sender(QStateMachine::SignalEvent* theWrappedObject) const
{
  return ( theWrappedObject->sender());
}

int  PythonQtWrapper_QStateMachine_SignalEvent::signalIndex(QStateMachine::SignalEvent* theWrappedObject) const
{
  return ( theWrappedObject->signalIndex());
}



QStateMachine::WrappedEvent* PythonQtWrapper_QStateMachine_WrappedEvent::new_QStateMachine_WrappedEvent(QObject*  object, QEvent*  event)
{ 
return new QStateMachine::WrappedEvent(object, event); }

QEvent*  PythonQtWrapper_QStateMachine_WrappedEvent::event(QStateMachine::WrappedEvent* theWrappedObject) const
{
  return ( theWrappedObject->event());
}

QObject*  PythonQtWrapper_QStateMachine_WrappedEvent::object(QStateMachine::WrappedEvent* theWrappedObject) const
{
  return ( theWrappedObject->object());
}



QStringMatcher* PythonQtWrapper_QStringMatcher::new_QStringMatcher()
{ 
return new QStringMatcher(); }

QStringMatcher* PythonQtWrapper_QStringMatcher::new_QStringMatcher(const QString&  pattern, Qt::CaseSensitivity  cs)
{ 
return new QStringMatcher(pattern, cs); }

QStringMatcher* PythonQtWrapper_QStringMatcher::new_QStringMatcher(const QStringMatcher&  other)
{ 
return new QStringMatcher(other); }

Qt::CaseSensitivity  PythonQtWrapper_QStringMatcher::caseSensitivity(QStringMatcher* theWrappedObject) const
{
  return ( theWrappedObject->caseSensitivity());
}

int  PythonQtWrapper_QStringMatcher::indexIn(QStringMatcher* theWrappedObject, const QString&  str, int  from) const
{
  return ( theWrappedObject->indexIn(str, from));
}

QString  PythonQtWrapper_QStringMatcher::pattern(QStringMatcher* theWrappedObject) const
{
  return ( theWrappedObject->pattern());
}

void PythonQtWrapper_QStringMatcher::setCaseSensitivity(QStringMatcher* theWrappedObject, Qt::CaseSensitivity  cs)
{
  ( theWrappedObject->setCaseSensitivity(cs));
}

void PythonQtWrapper_QStringMatcher::setPattern(QStringMatcher* theWrappedObject, const QString&  pattern)
{
  ( theWrappedObject->setPattern(pattern));
}



PythonQtShell_QSysInfo::~PythonQtShell_QSysInfo() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QSysInfo* PythonQtWrapper_QSysInfo::new_QSysInfo()
{ 
return new PythonQtShell_QSysInfo(); }


