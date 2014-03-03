#include "com_trolltech_qt_sql0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QSize>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlField>
#include <QSqlIndex>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QStringList>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qsize.h>
#include <qsqldatabase.h>
#include <qsqldriver.h>
#include <qsqlerror.h>
#include <qsqlfield.h>
#include <qsqlindex.h>
#include <qsqlquery.h>
#include <qsqlrecord.h>
#include <qsqlrelationaltablemodel.h>
#include <qsqlresult.h>
#include <qsqltablemodel.h>
#include <qstringlist.h>
#include <qvector.h>



QSqlDatabase* PythonQtWrapper_QSqlDatabase::new_QSqlDatabase()
{ 
return new PythonQtShell_QSqlDatabase(); }

QSqlDatabase* PythonQtWrapper_QSqlDatabase::new_QSqlDatabase(const QSqlDatabase&  other)
{ 
return new PythonQtShell_QSqlDatabase(other); }

QSqlDatabase  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_addDatabase(QSqlDriver*  driver, const QString&  connectionName)
{
  return (QSqlDatabase::addDatabase(driver, connectionName));
}

QSqlDatabase  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_addDatabase(const QString&  type, const QString&  connectionName)
{
  return (QSqlDatabase::addDatabase(type, connectionName));
}

QSqlDatabase  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_cloneDatabase(const QSqlDatabase&  other, const QString&  connectionName)
{
  return (QSqlDatabase::cloneDatabase(other, connectionName));
}

void PythonQtWrapper_QSqlDatabase::close(QSqlDatabase* theWrappedObject)
{
  ( theWrappedObject->close());
}

bool  PythonQtWrapper_QSqlDatabase::commit(QSqlDatabase* theWrappedObject)
{
  return ( theWrappedObject->commit());
}

QString  PythonQtWrapper_QSqlDatabase::connectOptions(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->connectOptions());
}

QString  PythonQtWrapper_QSqlDatabase::connectionName(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->connectionName());
}

QStringList  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_connectionNames()
{
  return (QSqlDatabase::connectionNames());
}

bool  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_contains(const QString&  connectionName)
{
  return (QSqlDatabase::contains(connectionName));
}

QSqlDatabase  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_database(const QString&  connectionName, bool  open)
{
  return (QSqlDatabase::database(connectionName, open));
}

QString  PythonQtWrapper_QSqlDatabase::databaseName(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->databaseName());
}

QSqlDriver*  PythonQtWrapper_QSqlDatabase::driver(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->driver());
}

QString  PythonQtWrapper_QSqlDatabase::driverName(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->driverName());
}

QStringList  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_drivers()
{
  return (QSqlDatabase::drivers());
}

QSqlQuery  PythonQtWrapper_QSqlDatabase::exec(QSqlDatabase* theWrappedObject, const QString&  query) const
{
  return ( theWrappedObject->exec(query));
}

QString  PythonQtWrapper_QSqlDatabase::hostName(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->hostName());
}

bool  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_isDriverAvailable(const QString&  name)
{
  return (QSqlDatabase::isDriverAvailable(name));
}

bool  PythonQtWrapper_QSqlDatabase::isOpen(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->isOpen());
}

bool  PythonQtWrapper_QSqlDatabase::isOpenError(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->isOpenError());
}

bool  PythonQtWrapper_QSqlDatabase::isValid(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QSqlError  PythonQtWrapper_QSqlDatabase::lastError(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->lastError());
}

QSql::NumericalPrecisionPolicy  PythonQtWrapper_QSqlDatabase::numericalPrecisionPolicy(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->numericalPrecisionPolicy());
}

bool  PythonQtWrapper_QSqlDatabase::open(QSqlDatabase* theWrappedObject)
{
  return ( theWrappedObject->open());
}

bool  PythonQtWrapper_QSqlDatabase::open(QSqlDatabase* theWrappedObject, const QString&  user, const QString&  password)
{
  return ( theWrappedObject->open(user, password));
}

QString  PythonQtWrapper_QSqlDatabase::password(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->password());
}

int  PythonQtWrapper_QSqlDatabase::port(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->port());
}

QSqlIndex  PythonQtWrapper_QSqlDatabase::primaryIndex(QSqlDatabase* theWrappedObject, const QString&  tablename) const
{
  return ( theWrappedObject->primaryIndex(tablename));
}

QSqlRecord  PythonQtWrapper_QSqlDatabase::record(QSqlDatabase* theWrappedObject, const QString&  tablename) const
{
  return ( theWrappedObject->record(tablename));
}

void PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_registerSqlDriver(const QString&  name, QSqlDriverCreatorBase*  creator)
{
  (QSqlDatabase::registerSqlDriver(name, creator));
}

void PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_removeDatabase(const QString&  connectionName)
{
  (QSqlDatabase::removeDatabase(connectionName));
}

bool  PythonQtWrapper_QSqlDatabase::rollback(QSqlDatabase* theWrappedObject)
{
  return ( theWrappedObject->rollback());
}

void PythonQtWrapper_QSqlDatabase::setConnectOptions(QSqlDatabase* theWrappedObject, const QString&  options)
{
  ( theWrappedObject->setConnectOptions(options));
}

void PythonQtWrapper_QSqlDatabase::setDatabaseName(QSqlDatabase* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setDatabaseName(name));
}

void PythonQtWrapper_QSqlDatabase::setHostName(QSqlDatabase* theWrappedObject, const QString&  host)
{
  ( theWrappedObject->setHostName(host));
}

void PythonQtWrapper_QSqlDatabase::setNumericalPrecisionPolicy(QSqlDatabase* theWrappedObject, QSql::NumericalPrecisionPolicy  precisionPolicy)
{
  ( theWrappedObject->setNumericalPrecisionPolicy(precisionPolicy));
}

void PythonQtWrapper_QSqlDatabase::setPassword(QSqlDatabase* theWrappedObject, const QString&  password)
{
  ( theWrappedObject->setPassword(password));
}

void PythonQtWrapper_QSqlDatabase::setPort(QSqlDatabase* theWrappedObject, int  p)
{
  ( theWrappedObject->setPort(p));
}

void PythonQtWrapper_QSqlDatabase::setUserName(QSqlDatabase* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setUserName(name));
}

QStringList  PythonQtWrapper_QSqlDatabase::tables(QSqlDatabase* theWrappedObject, QSql::TableType  type) const
{
  return ( theWrappedObject->tables(type));
}

bool  PythonQtWrapper_QSqlDatabase::transaction(QSqlDatabase* theWrappedObject)
{
  return ( theWrappedObject->transaction());
}

QString  PythonQtWrapper_QSqlDatabase::userName(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->userName());
}

QString PythonQtWrapper_QSqlDatabase::py_toString(QSqlDatabase* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



bool  PythonQtShell_QSqlDriver::beginTransaction()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "beginTransaction");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("beginTransaction", methodInfo, result);
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
  return QSqlDriver::beginTransaction();
}
void PythonQtShell_QSqlDriver::childEvent(QChildEvent*  arg__1)
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
  QSqlDriver::childEvent(arg__1);
}
void PythonQtShell_QSqlDriver::close()
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
  
}
bool  PythonQtShell_QSqlDriver::commitTransaction()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "commitTransaction");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("commitTransaction", methodInfo, result);
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
  return QSqlDriver::commitTransaction();
}
QSqlResult*  PythonQtShell_QSqlDriver::createResult() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "createResult");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSqlResult*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSqlResult* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("createResult", methodInfo, result);
        } else {
          returnValue = *((QSqlResult**)args[0]);
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
void PythonQtShell_QSqlDriver::customEvent(QEvent*  arg__1)
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
  QSqlDriver::customEvent(arg__1);
}
QString  PythonQtShell_QSqlDriver::escapeIdentifier(const QString&  identifier, QSqlDriver::IdentifierType  type) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "escapeIdentifier");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QString" , "const QString&" , "QSqlDriver::IdentifierType"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QString returnValue;
    void* args[3] = {NULL, (void*)&identifier, (void*)&type};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("escapeIdentifier", methodInfo, result);
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
  return QSqlDriver::escapeIdentifier(identifier, type);
}
bool  PythonQtShell_QSqlDriver::event(QEvent*  arg__1)
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
  return QSqlDriver::event(arg__1);
}
bool  PythonQtShell_QSqlDriver::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QSqlDriver::eventFilter(arg__1, arg__2);
}
QString  PythonQtShell_QSqlDriver::formatValue(const QSqlField&  field, bool  trimStrings) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "formatValue");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QString" , "const QSqlField&" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QString returnValue;
    void* args[3] = {NULL, (void*)&field, (void*)&trimStrings};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("formatValue", methodInfo, result);
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
  return QSqlDriver::formatValue(field, trimStrings);
}
QVariant  PythonQtShell_QSqlDriver::handle() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "handle");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QVariant returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("handle", methodInfo, result);
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
  return QSqlDriver::handle();
}
bool  PythonQtShell_QSqlDriver::hasFeature(QSqlDriver::DriverFeature  f) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hasFeature");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QSqlDriver::DriverFeature"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&f};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("hasFeature", methodInfo, result);
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
  return bool();
}
bool  PythonQtShell_QSqlDriver::isOpen() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isOpen");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("isOpen", methodInfo, result);
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
  return QSqlDriver::isOpen();
}
bool  PythonQtShell_QSqlDriver::open(const QString&  db, const QString&  user, const QString&  password, const QString&  host, int  port, const QString&  connOpts)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "open");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QString&" , "const QString&" , "const QString&" , "const QString&" , "int" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(7, argumentList);
      bool returnValue;
    void* args[7] = {NULL, (void*)&db, (void*)&user, (void*)&password, (void*)&host, (void*)&port, (void*)&connOpts};
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
  return bool();
}
QSqlIndex  PythonQtShell_QSqlDriver::primaryIndex(const QString&  tableName) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "primaryIndex");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSqlIndex" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QSqlIndex returnValue;
    void* args[2] = {NULL, (void*)&tableName};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("primaryIndex", methodInfo, result);
        } else {
          returnValue = *((QSqlIndex*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlDriver::primaryIndex(tableName);
}
QSqlRecord  PythonQtShell_QSqlDriver::record(const QString&  tableName) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "record");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSqlRecord" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QSqlRecord returnValue;
    void* args[2] = {NULL, (void*)&tableName};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("record", methodInfo, result);
        } else {
          returnValue = *((QSqlRecord*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlDriver::record(tableName);
}
bool  PythonQtShell_QSqlDriver::rollbackTransaction()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "rollbackTransaction");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("rollbackTransaction", methodInfo, result);
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
  return QSqlDriver::rollbackTransaction();
}
void PythonQtShell_QSqlDriver::setLastError(const QSqlError&  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setLastError");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QSqlError&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlDriver::setLastError(e);
}
void PythonQtShell_QSqlDriver::setOpen(bool  o)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setOpen");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&o};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlDriver::setOpen(o);
}
void PythonQtShell_QSqlDriver::setOpenError(bool  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setOpenError");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlDriver::setOpenError(e);
}
QString  PythonQtShell_QSqlDriver::sqlStatement(QSqlDriver::StatementType  type, const QString&  tableName, const QSqlRecord&  rec, bool  preparedStatement) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sqlStatement");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QString" , "QSqlDriver::StatementType" , "const QString&" , "const QSqlRecord&" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      QString returnValue;
    void* args[5] = {NULL, (void*)&type, (void*)&tableName, (void*)&rec, (void*)&preparedStatement};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sqlStatement", methodInfo, result);
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
  return QSqlDriver::sqlStatement(type, tableName, rec, preparedStatement);
}
QStringList  PythonQtShell_QSqlDriver::tables(QSql::TableType  tableType) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tables");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QStringList" , "QSql::TableType"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QStringList returnValue;
    void* args[2] = {NULL, (void*)&tableType};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("tables", methodInfo, result);
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
  return QSqlDriver::tables(tableType);
}
void PythonQtShell_QSqlDriver::timerEvent(QTimerEvent*  arg__1)
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
  QSqlDriver::timerEvent(arg__1);
}
QSqlDriver* PythonQtWrapper_QSqlDriver::new_QSqlDriver(QObject*  parent)
{ 
return new PythonQtShell_QSqlDriver(parent); }

bool  PythonQtWrapper_QSqlDriver::beginTransaction(QSqlDriver* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_beginTransaction());
}

bool  PythonQtWrapper_QSqlDriver::commitTransaction(QSqlDriver* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_commitTransaction());
}

QString  PythonQtWrapper_QSqlDriver::escapeIdentifier(QSqlDriver* theWrappedObject, const QString&  identifier, QSqlDriver::IdentifierType  type) const
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_escapeIdentifier(identifier, type));
}

QString  PythonQtWrapper_QSqlDriver::formatValue(QSqlDriver* theWrappedObject, const QSqlField&  field, bool  trimStrings) const
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_formatValue(field, trimStrings));
}

QVariant  PythonQtWrapper_QSqlDriver::handle(QSqlDriver* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_handle());
}

bool  PythonQtWrapper_QSqlDriver::isIdentifierEscaped(QSqlDriver* theWrappedObject, const QString&  identifier, QSqlDriver::IdentifierType  type) const
{
  return ( theWrappedObject->isIdentifierEscaped(identifier, type));
}

bool  PythonQtWrapper_QSqlDriver::isOpen(QSqlDriver* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_isOpen());
}

bool  PythonQtWrapper_QSqlDriver::isOpenError(QSqlDriver* theWrappedObject) const
{
  return ( theWrappedObject->isOpenError());
}

QSqlError  PythonQtWrapper_QSqlDriver::lastError(QSqlDriver* theWrappedObject) const
{
  return ( theWrappedObject->lastError());
}

QSql::NumericalPrecisionPolicy  PythonQtWrapper_QSqlDriver::numericalPrecisionPolicy(QSqlDriver* theWrappedObject) const
{
  return ( theWrappedObject->numericalPrecisionPolicy());
}

QSqlIndex  PythonQtWrapper_QSqlDriver::primaryIndex(QSqlDriver* theWrappedObject, const QString&  tableName) const
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_primaryIndex(tableName));
}

QSqlRecord  PythonQtWrapper_QSqlDriver::record(QSqlDriver* theWrappedObject, const QString&  tableName) const
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_record(tableName));
}

bool  PythonQtWrapper_QSqlDriver::rollbackTransaction(QSqlDriver* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_rollbackTransaction());
}

void PythonQtWrapper_QSqlDriver::setLastError(QSqlDriver* theWrappedObject, const QSqlError&  e)
{
  ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_setLastError(e));
}

void PythonQtWrapper_QSqlDriver::setNumericalPrecisionPolicy(QSqlDriver* theWrappedObject, QSql::NumericalPrecisionPolicy  precisionPolicy)
{
  ( theWrappedObject->setNumericalPrecisionPolicy(precisionPolicy));
}

void PythonQtWrapper_QSqlDriver::setOpen(QSqlDriver* theWrappedObject, bool  o)
{
  ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_setOpen(o));
}

void PythonQtWrapper_QSqlDriver::setOpenError(QSqlDriver* theWrappedObject, bool  e)
{
  ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_setOpenError(e));
}

QString  PythonQtWrapper_QSqlDriver::sqlStatement(QSqlDriver* theWrappedObject, QSqlDriver::StatementType  type, const QString&  tableName, const QSqlRecord&  rec, bool  preparedStatement) const
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_sqlStatement(type, tableName, rec, preparedStatement));
}

QString  PythonQtWrapper_QSqlDriver::stripDelimiters(QSqlDriver* theWrappedObject, const QString&  identifier, QSqlDriver::IdentifierType  type) const
{
  return ( theWrappedObject->stripDelimiters(identifier, type));
}

bool  PythonQtWrapper_QSqlDriver::subscribeToNotification(QSqlDriver* theWrappedObject, const QString&  name)
{
  return ( theWrappedObject->subscribeToNotification(name));
}

QStringList  PythonQtWrapper_QSqlDriver::subscribedToNotifications(QSqlDriver* theWrappedObject) const
{
  return ( theWrappedObject->subscribedToNotifications());
}

QStringList  PythonQtWrapper_QSqlDriver::tables(QSqlDriver* theWrappedObject, QSql::TableType  tableType) const
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_tables(tableType));
}

bool  PythonQtWrapper_QSqlDriver::unsubscribeFromNotification(QSqlDriver* theWrappedObject, const QString&  name)
{
  return ( theWrappedObject->unsubscribeFromNotification(name));
}



QSqlDriver*  PythonQtShell_QSqlDriverCreatorBase::createObject() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "createObject");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSqlDriver*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSqlDriver* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("createObject", methodInfo, result);
        } else {
          returnValue = *((QSqlDriver**)args[0]);
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
QSqlDriverCreatorBase* PythonQtWrapper_QSqlDriverCreatorBase::new_QSqlDriverCreatorBase()
{ 
return new PythonQtShell_QSqlDriverCreatorBase(); }



QSqlError* PythonQtWrapper_QSqlError::new_QSqlError(const QSqlError&  other)
{ 
return new QSqlError(other); }

QSqlError* PythonQtWrapper_QSqlError::new_QSqlError(const QString&  driverText, const QString&  databaseText, QSqlError::ErrorType  type, int  number)
{ 
return new QSqlError(driverText, databaseText, type, number); }

QString  PythonQtWrapper_QSqlError::databaseText(QSqlError* theWrappedObject) const
{
  return ( theWrappedObject->databaseText());
}

QString  PythonQtWrapper_QSqlError::driverText(QSqlError* theWrappedObject) const
{
  return ( theWrappedObject->driverText());
}

bool  PythonQtWrapper_QSqlError::isValid(QSqlError* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

int  PythonQtWrapper_QSqlError::number(QSqlError* theWrappedObject) const
{
  return ( theWrappedObject->number());
}

void PythonQtWrapper_QSqlError::setDatabaseText(QSqlError* theWrappedObject, const QString&  databaseText)
{
  ( theWrappedObject->setDatabaseText(databaseText));
}

void PythonQtWrapper_QSqlError::setDriverText(QSqlError* theWrappedObject, const QString&  driverText)
{
  ( theWrappedObject->setDriverText(driverText));
}

void PythonQtWrapper_QSqlError::setNumber(QSqlError* theWrappedObject, int  number)
{
  ( theWrappedObject->setNumber(number));
}

void PythonQtWrapper_QSqlError::setType(QSqlError* theWrappedObject, QSqlError::ErrorType  type)
{
  ( theWrappedObject->setType(type));
}

QString  PythonQtWrapper_QSqlError::text(QSqlError* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

QSqlError::ErrorType  PythonQtWrapper_QSqlError::type(QSqlError* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString PythonQtWrapper_QSqlError::py_toString(QSqlError* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QSqlField* PythonQtWrapper_QSqlField::new_QSqlField(const QSqlField&  other)
{ 
return new QSqlField(other); }

QSqlField* PythonQtWrapper_QSqlField::new_QSqlField(const QString&  fieldName, QVariant::Type  type)
{ 
return new QSqlField(fieldName, type); }

void PythonQtWrapper_QSqlField::clear(QSqlField* theWrappedObject)
{
  ( theWrappedObject->clear());
}

QVariant  PythonQtWrapper_QSqlField::defaultValue(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->defaultValue());
}

bool  PythonQtWrapper_QSqlField::isAutoValue(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->isAutoValue());
}

bool  PythonQtWrapper_QSqlField::isGenerated(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->isGenerated());
}

bool  PythonQtWrapper_QSqlField::isNull(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QSqlField::isReadOnly(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->isReadOnly());
}

bool  PythonQtWrapper_QSqlField::isValid(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

int  PythonQtWrapper_QSqlField::length(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

QString  PythonQtWrapper_QSqlField::name(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

bool  PythonQtWrapper_QSqlField::__ne__(QSqlField* theWrappedObject, const QSqlField&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QSqlField::__eq__(QSqlField* theWrappedObject, const QSqlField&  other) const
{
  return ( (*theWrappedObject)== other);
}

int  PythonQtWrapper_QSqlField::precision(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->precision());
}

QSqlField::RequiredStatus  PythonQtWrapper_QSqlField::requiredStatus(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->requiredStatus());
}

void PythonQtWrapper_QSqlField::setAutoValue(QSqlField* theWrappedObject, bool  autoVal)
{
  ( theWrappedObject->setAutoValue(autoVal));
}

void PythonQtWrapper_QSqlField::setDefaultValue(QSqlField* theWrappedObject, const QVariant&  value)
{
  ( theWrappedObject->setDefaultValue(value));
}

void PythonQtWrapper_QSqlField::setGenerated(QSqlField* theWrappedObject, bool  gen)
{
  ( theWrappedObject->setGenerated(gen));
}

void PythonQtWrapper_QSqlField::setLength(QSqlField* theWrappedObject, int  fieldLength)
{
  ( theWrappedObject->setLength(fieldLength));
}

void PythonQtWrapper_QSqlField::setName(QSqlField* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setName(name));
}

void PythonQtWrapper_QSqlField::setPrecision(QSqlField* theWrappedObject, int  precision)
{
  ( theWrappedObject->setPrecision(precision));
}

void PythonQtWrapper_QSqlField::setReadOnly(QSqlField* theWrappedObject, bool  readOnly)
{
  ( theWrappedObject->setReadOnly(readOnly));
}

void PythonQtWrapper_QSqlField::setRequired(QSqlField* theWrappedObject, bool  required)
{
  ( theWrappedObject->setRequired(required));
}

void PythonQtWrapper_QSqlField::setRequiredStatus(QSqlField* theWrappedObject, QSqlField::RequiredStatus  status)
{
  ( theWrappedObject->setRequiredStatus(status));
}

void PythonQtWrapper_QSqlField::setSqlType(QSqlField* theWrappedObject, int  type)
{
  ( theWrappedObject->setSqlType(type));
}

void PythonQtWrapper_QSqlField::setType(QSqlField* theWrappedObject, QVariant::Type  type)
{
  ( theWrappedObject->setType(type));
}

void PythonQtWrapper_QSqlField::setValue(QSqlField* theWrappedObject, const QVariant&  value)
{
  ( theWrappedObject->setValue(value));
}

QVariant::Type  PythonQtWrapper_QSqlField::type(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

int  PythonQtWrapper_QSqlField::typeID(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->typeID());
}

QVariant  PythonQtWrapper_QSqlField::value(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->value());
}

QString PythonQtWrapper_QSqlField::py_toString(QSqlField* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QSqlIndex* PythonQtWrapper_QSqlIndex::new_QSqlIndex(const QSqlIndex&  other)
{ 
return new QSqlIndex(other); }

QSqlIndex* PythonQtWrapper_QSqlIndex::new_QSqlIndex(const QString&  cursorName, const QString&  name)
{ 
return new QSqlIndex(cursorName, name); }

void PythonQtWrapper_QSqlIndex::append(QSqlIndex* theWrappedObject, const QSqlField&  field)
{
  ( theWrappedObject->append(field));
}

void PythonQtWrapper_QSqlIndex::append(QSqlIndex* theWrappedObject, const QSqlField&  field, bool  desc)
{
  ( theWrappedObject->append(field, desc));
}

QString  PythonQtWrapper_QSqlIndex::cursorName(QSqlIndex* theWrappedObject) const
{
  return ( theWrappedObject->cursorName());
}

bool  PythonQtWrapper_QSqlIndex::isDescending(QSqlIndex* theWrappedObject, int  i) const
{
  return ( theWrappedObject->isDescending(i));
}

QString  PythonQtWrapper_QSqlIndex::name(QSqlIndex* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

void PythonQtWrapper_QSqlIndex::setCursorName(QSqlIndex* theWrappedObject, const QString&  cursorName)
{
  ( theWrappedObject->setCursorName(cursorName));
}

void PythonQtWrapper_QSqlIndex::setDescending(QSqlIndex* theWrappedObject, int  i, bool  desc)
{
  ( theWrappedObject->setDescending(i, desc));
}

void PythonQtWrapper_QSqlIndex::setName(QSqlIndex* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setName(name));
}



QSqlQuery* PythonQtWrapper_QSqlQuery::new_QSqlQuery(QSqlDatabase  db)
{ 
return new QSqlQuery(db); }

QSqlQuery* PythonQtWrapper_QSqlQuery::new_QSqlQuery(QSqlResult*  r)
{ 
return new QSqlQuery(r); }

QSqlQuery* PythonQtWrapper_QSqlQuery::new_QSqlQuery(const QSqlQuery&  other)
{ 
return new QSqlQuery(other); }

QSqlQuery* PythonQtWrapper_QSqlQuery::new_QSqlQuery(const QString&  query, QSqlDatabase  db)
{ 
return new QSqlQuery(query, db); }

void PythonQtWrapper_QSqlQuery::addBindValue(QSqlQuery* theWrappedObject, const QVariant&  val, QSql::ParamType  type)
{
  ( theWrappedObject->addBindValue(val, type));
}

int  PythonQtWrapper_QSqlQuery::at(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->at());
}

void PythonQtWrapper_QSqlQuery::bindValue(QSqlQuery* theWrappedObject, const QString&  placeholder, const QVariant&  val, QSql::ParamType  type)
{
  ( theWrappedObject->bindValue(placeholder, val, type));
}

void PythonQtWrapper_QSqlQuery::bindValue(QSqlQuery* theWrappedObject, int  pos, const QVariant&  val, QSql::ParamType  type)
{
  ( theWrappedObject->bindValue(pos, val, type));
}

QVariant  PythonQtWrapper_QSqlQuery::boundValue(QSqlQuery* theWrappedObject, const QString&  placeholder) const
{
  return ( theWrappedObject->boundValue(placeholder));
}

QVariant  PythonQtWrapper_QSqlQuery::boundValue(QSqlQuery* theWrappedObject, int  pos) const
{
  return ( theWrappedObject->boundValue(pos));
}

QMap<QString , QVariant >  PythonQtWrapper_QSqlQuery::boundValues(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->boundValues());
}

void PythonQtWrapper_QSqlQuery::clear(QSqlQuery* theWrappedObject)
{
  ( theWrappedObject->clear());
}

const QSqlDriver*  PythonQtWrapper_QSqlQuery::driver(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->driver());
}

bool  PythonQtWrapper_QSqlQuery::exec(QSqlQuery* theWrappedObject)
{
  return ( theWrappedObject->exec());
}

bool  PythonQtWrapper_QSqlQuery::exec(QSqlQuery* theWrappedObject, const QString&  query)
{
  return ( theWrappedObject->exec(query));
}

bool  PythonQtWrapper_QSqlQuery::execBatch(QSqlQuery* theWrappedObject, QSqlQuery::BatchExecutionMode  mode)
{
  return ( theWrappedObject->execBatch(mode));
}

QString  PythonQtWrapper_QSqlQuery::executedQuery(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->executedQuery());
}

void PythonQtWrapper_QSqlQuery::finish(QSqlQuery* theWrappedObject)
{
  ( theWrappedObject->finish());
}

bool  PythonQtWrapper_QSqlQuery::first(QSqlQuery* theWrappedObject)
{
  return ( theWrappedObject->first());
}

bool  PythonQtWrapper_QSqlQuery::isActive(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

bool  PythonQtWrapper_QSqlQuery::isForwardOnly(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->isForwardOnly());
}

bool  PythonQtWrapper_QSqlQuery::isNull(QSqlQuery* theWrappedObject, int  field) const
{
  return ( theWrappedObject->isNull(field));
}

bool  PythonQtWrapper_QSqlQuery::isSelect(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->isSelect());
}

bool  PythonQtWrapper_QSqlQuery::isValid(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QSqlQuery::last(QSqlQuery* theWrappedObject)
{
  return ( theWrappedObject->last());
}

QSqlError  PythonQtWrapper_QSqlQuery::lastError(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->lastError());
}

QVariant  PythonQtWrapper_QSqlQuery::lastInsertId(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->lastInsertId());
}

QString  PythonQtWrapper_QSqlQuery::lastQuery(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->lastQuery());
}

bool  PythonQtWrapper_QSqlQuery::next(QSqlQuery* theWrappedObject)
{
  return ( theWrappedObject->next());
}

bool  PythonQtWrapper_QSqlQuery::nextResult(QSqlQuery* theWrappedObject)
{
  return ( theWrappedObject->nextResult());
}

int  PythonQtWrapper_QSqlQuery::numRowsAffected(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->numRowsAffected());
}

QSql::NumericalPrecisionPolicy  PythonQtWrapper_QSqlQuery::numericalPrecisionPolicy(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->numericalPrecisionPolicy());
}

bool  PythonQtWrapper_QSqlQuery::prepare(QSqlQuery* theWrappedObject, const QString&  query)
{
  return ( theWrappedObject->prepare(query));
}

bool  PythonQtWrapper_QSqlQuery::previous(QSqlQuery* theWrappedObject)
{
  return ( theWrappedObject->previous());
}

QSqlRecord  PythonQtWrapper_QSqlQuery::record(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->record());
}

const QSqlResult*  PythonQtWrapper_QSqlQuery::result(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->result());
}

bool  PythonQtWrapper_QSqlQuery::seek(QSqlQuery* theWrappedObject, int  i, bool  relative)
{
  return ( theWrappedObject->seek(i, relative));
}

void PythonQtWrapper_QSqlQuery::setForwardOnly(QSqlQuery* theWrappedObject, bool  forward)
{
  ( theWrappedObject->setForwardOnly(forward));
}

void PythonQtWrapper_QSqlQuery::setNumericalPrecisionPolicy(QSqlQuery* theWrappedObject, QSql::NumericalPrecisionPolicy  precisionPolicy)
{
  ( theWrappedObject->setNumericalPrecisionPolicy(precisionPolicy));
}

int  PythonQtWrapper_QSqlQuery::size(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QVariant  PythonQtWrapper_QSqlQuery::value(QSqlQuery* theWrappedObject, int  i) const
{
  return ( theWrappedObject->value(i));
}



QModelIndex  PythonQtShell_QSqlQueryModel::buddy(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "buddy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QModelIndex" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("buddy", methodInfo, result);
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
  return QSqlQueryModel::buddy(index);
}
bool  PythonQtShell_QSqlQueryModel::canFetchMore(const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "canFetchMore");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("canFetchMore", methodInfo, result);
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
  return QSqlQueryModel::canFetchMore(parent);
}
void PythonQtShell_QSqlQueryModel::childEvent(QChildEvent*  arg__1)
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
  QSqlQueryModel::childEvent(arg__1);
}
void PythonQtShell_QSqlQueryModel::clear()
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
  QSqlQueryModel::clear();
}
int  PythonQtShell_QSqlQueryModel::columnCount(const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "columnCount");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("columnCount", methodInfo, result);
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
  return QSqlQueryModel::columnCount(parent);
}
void PythonQtShell_QSqlQueryModel::customEvent(QEvent*  arg__1)
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
  QSqlQueryModel::customEvent(arg__1);
}
QVariant  PythonQtShell_QSqlQueryModel::data(const QModelIndex&  item, int  role) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "data");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "const QModelIndex&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&item, (void*)&role};
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
  return QSqlQueryModel::data(item, role);
}
bool  PythonQtShell_QSqlQueryModel::dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropMimeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QMimeData*" , "Qt::DropAction" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue;
    void* args[6] = {NULL, (void*)&data, (void*)&action, (void*)&row, (void*)&column, (void*)&parent};
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
  return QSqlQueryModel::dropMimeData(data, action, row, column, parent);
}
bool  PythonQtShell_QSqlQueryModel::event(QEvent*  arg__1)
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
  return QSqlQueryModel::event(arg__1);
}
bool  PythonQtShell_QSqlQueryModel::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QSqlQueryModel::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QSqlQueryModel::fetchMore(const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "fetchMore");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlQueryModel::fetchMore(parent);
}
Qt::ItemFlags  PythonQtShell_QSqlQueryModel::flags(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "flags");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"Qt::ItemFlags" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      Qt::ItemFlags returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("flags", methodInfo, result);
        } else {
          returnValue = *((Qt::ItemFlags*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlQueryModel::flags(index);
}
QVariant  PythonQtShell_QSqlQueryModel::headerData(int  section, Qt::Orientation  orientation, int  role) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "headerData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "int" , "Qt::Orientation" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QVariant returnValue;
    void* args[4] = {NULL, (void*)&section, (void*)&orientation, (void*)&role};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("headerData", methodInfo, result);
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
  return QSqlQueryModel::headerData(section, orientation, role);
}
QModelIndex  PythonQtShell_QSqlQueryModel::index(int  row, int  column, const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "index");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QModelIndex" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QModelIndex returnValue;
    void* args[4] = {NULL, (void*)&row, (void*)&column, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("index", methodInfo, result);
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
  return QSqlQueryModel::index(row, column, parent);
}
bool  PythonQtShell_QSqlQueryModel::insertColumns(int  column, int  count, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "insertColumns");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&column, (void*)&count, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("insertColumns", methodInfo, result);
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
  return QSqlQueryModel::insertColumns(column, count, parent);
}
bool  PythonQtShell_QSqlQueryModel::insertRows(int  row, int  count, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "insertRows");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&row, (void*)&count, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("insertRows", methodInfo, result);
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
  return QSqlQueryModel::insertRows(row, count, parent);
}
QMap<int , QVariant >  PythonQtShell_QSqlQueryModel::itemData(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QMap<int , QVariant >" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMap<int , QVariant > returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemData", methodInfo, result);
        } else {
          returnValue = *((QMap<int , QVariant >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlQueryModel::itemData(index);
}
QList<QModelIndex >  PythonQtShell_QSqlQueryModel::match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits, Qt::MatchFlags  flags) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "match");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QList<QModelIndex >" , "const QModelIndex&" , "int" , "const QVariant&" , "int" , "Qt::MatchFlags"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      QList<QModelIndex > returnValue;
    void* args[6] = {NULL, (void*)&start, (void*)&role, (void*)&value, (void*)&hits, (void*)&flags};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("match", methodInfo, result);
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
  return QSqlQueryModel::match(start, role, value, hits, flags);
}
QMimeData*  PythonQtShell_QSqlQueryModel::mimeData(const QList<QModelIndex >&  indexes) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mimeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QMimeData*" , "const QList<QModelIndex >&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMimeData* returnValue;
    void* args[2] = {NULL, (void*)&indexes};
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
  return QSqlQueryModel::mimeData(indexes);
}
QStringList  PythonQtShell_QSqlQueryModel::mimeTypes() const
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
  return QSqlQueryModel::mimeTypes();
}
void PythonQtShell_QSqlQueryModel::queryChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "queryChange");
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
  QSqlQueryModel::queryChange();
}
bool  PythonQtShell_QSqlQueryModel::removeColumns(int  column, int  count, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "removeColumns");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&column, (void*)&count, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("removeColumns", methodInfo, result);
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
  return QSqlQueryModel::removeColumns(column, count, parent);
}
bool  PythonQtShell_QSqlQueryModel::removeRows(int  row, int  count, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "removeRows");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&row, (void*)&count, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("removeRows", methodInfo, result);
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
  return QSqlQueryModel::removeRows(row, count, parent);
}
void PythonQtShell_QSqlQueryModel::revert()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "revert");
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
  QSqlQueryModel::revert();
}
int  PythonQtShell_QSqlQueryModel::rowCount(const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "rowCount");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("rowCount", methodInfo, result);
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
  return QSqlQueryModel::rowCount(parent);
}
bool  PythonQtShell_QSqlQueryModel::setData(const QModelIndex&  index, const QVariant&  value, int  role)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "const QVariant&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&index, (void*)&value, (void*)&role};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setData", methodInfo, result);
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
  return QSqlQueryModel::setData(index, value, role);
}
bool  PythonQtShell_QSqlQueryModel::setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setHeaderData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int" , "Qt::Orientation" , "const QVariant&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      bool returnValue;
    void* args[5] = {NULL, (void*)&section, (void*)&orientation, (void*)&value, (void*)&role};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setHeaderData", methodInfo, result);
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
  return QSqlQueryModel::setHeaderData(section, orientation, value, role);
}
bool  PythonQtShell_QSqlQueryModel::setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setItemData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "const QMap<int , QVariant >&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&index, (void*)&roles};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setItemData", methodInfo, result);
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
  return QSqlQueryModel::setItemData(index, roles);
}
void PythonQtShell_QSqlQueryModel::sort(int  column, Qt::SortOrder  order)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sort");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int" , "Qt::SortOrder"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&column, (void*)&order};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlQueryModel::sort(column, order);
}
QSize  PythonQtShell_QSqlQueryModel::span(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "span");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSize" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QSize returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("span", methodInfo, result);
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
  return QSqlQueryModel::span(index);
}
bool  PythonQtShell_QSqlQueryModel::submit()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "submit");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("submit", methodInfo, result);
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
  return QSqlQueryModel::submit();
}
Qt::DropActions  PythonQtShell_QSqlQueryModel::supportedDropActions() const
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
  return QSqlQueryModel::supportedDropActions();
}
void PythonQtShell_QSqlQueryModel::timerEvent(QTimerEvent*  arg__1)
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
  QSqlQueryModel::timerEvent(arg__1);
}
QSqlQueryModel* PythonQtWrapper_QSqlQueryModel::new_QSqlQueryModel(QObject*  parent)
{ 
return new PythonQtShell_QSqlQueryModel(parent); }

bool  PythonQtWrapper_QSqlQueryModel::canFetchMore(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent) const
{
  return ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_canFetchMore(parent));
}

void PythonQtWrapper_QSqlQueryModel::clear(QSqlQueryModel* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_clear());
}

int  PythonQtWrapper_QSqlQueryModel::columnCount(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent) const
{
  return ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_columnCount(parent));
}

QVariant  PythonQtWrapper_QSqlQueryModel::data(QSqlQueryModel* theWrappedObject, const QModelIndex&  item, int  role) const
{
  return ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_data(item, role));
}

void PythonQtWrapper_QSqlQueryModel::fetchMore(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent)
{
  ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_fetchMore(parent));
}

QVariant  PythonQtWrapper_QSqlQueryModel::headerData(QSqlQueryModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role) const
{
  return ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_headerData(section, orientation, role));
}

bool  PythonQtWrapper_QSqlQueryModel::insertColumns(QSqlQueryModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent)
{
  return ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_insertColumns(column, count, parent));
}

QSqlError  PythonQtWrapper_QSqlQueryModel::lastError(QSqlQueryModel* theWrappedObject) const
{
  return ( theWrappedObject->lastError());
}

QSqlQuery  PythonQtWrapper_QSqlQueryModel::query(QSqlQueryModel* theWrappedObject) const
{
  return ( theWrappedObject->query());
}

void PythonQtWrapper_QSqlQueryModel::queryChange(QSqlQueryModel* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_queryChange());
}

QSqlRecord  PythonQtWrapper_QSqlQueryModel::record(QSqlQueryModel* theWrappedObject) const
{
  return ( theWrappedObject->record());
}

QSqlRecord  PythonQtWrapper_QSqlQueryModel::record(QSqlQueryModel* theWrappedObject, int  row) const
{
  return ( theWrappedObject->record(row));
}

bool  PythonQtWrapper_QSqlQueryModel::removeColumns(QSqlQueryModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent)
{
  return ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_removeColumns(column, count, parent));
}

int  PythonQtWrapper_QSqlQueryModel::rowCount(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent) const
{
  return ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_rowCount(parent));
}

bool  PythonQtWrapper_QSqlQueryModel::setHeaderData(QSqlQueryModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role)
{
  return ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_setHeaderData(section, orientation, value, role));
}

void PythonQtWrapper_QSqlQueryModel::setQuery(QSqlQueryModel* theWrappedObject, const QSqlQuery&  query)
{
  ( theWrappedObject->setQuery(query));
}

void PythonQtWrapper_QSqlQueryModel::setQuery(QSqlQueryModel* theWrappedObject, const QString&  query, const QSqlDatabase&  db)
{
  ( theWrappedObject->setQuery(query, db));
}



QSqlRecord* PythonQtWrapper_QSqlRecord::new_QSqlRecord()
{ 
return new QSqlRecord(); }

QSqlRecord* PythonQtWrapper_QSqlRecord::new_QSqlRecord(const QSqlRecord&  other)
{ 
return new QSqlRecord(other); }

void PythonQtWrapper_QSqlRecord::append(QSqlRecord* theWrappedObject, const QSqlField&  field)
{
  ( theWrappedObject->append(field));
}

void PythonQtWrapper_QSqlRecord::clear(QSqlRecord* theWrappedObject)
{
  ( theWrappedObject->clear());
}

void PythonQtWrapper_QSqlRecord::clearValues(QSqlRecord* theWrappedObject)
{
  ( theWrappedObject->clearValues());
}

bool  PythonQtWrapper_QSqlRecord::contains(QSqlRecord* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->contains(name));
}

int  PythonQtWrapper_QSqlRecord::count(QSqlRecord* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

QSqlField  PythonQtWrapper_QSqlRecord::field(QSqlRecord* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->field(name));
}

QSqlField  PythonQtWrapper_QSqlRecord::field(QSqlRecord* theWrappedObject, int  i) const
{
  return ( theWrappedObject->field(i));
}

QString  PythonQtWrapper_QSqlRecord::fieldName(QSqlRecord* theWrappedObject, int  i) const
{
  return ( theWrappedObject->fieldName(i));
}

int  PythonQtWrapper_QSqlRecord::indexOf(QSqlRecord* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->indexOf(name));
}

void PythonQtWrapper_QSqlRecord::insert(QSqlRecord* theWrappedObject, int  pos, const QSqlField&  field)
{
  ( theWrappedObject->insert(pos, field));
}

bool  PythonQtWrapper_QSqlRecord::isEmpty(QSqlRecord* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QSqlRecord::isGenerated(QSqlRecord* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->isGenerated(name));
}

bool  PythonQtWrapper_QSqlRecord::isGenerated(QSqlRecord* theWrappedObject, int  i) const
{
  return ( theWrappedObject->isGenerated(i));
}

bool  PythonQtWrapper_QSqlRecord::isNull(QSqlRecord* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->isNull(name));
}

bool  PythonQtWrapper_QSqlRecord::isNull(QSqlRecord* theWrappedObject, int  i) const
{
  return ( theWrappedObject->isNull(i));
}

bool  PythonQtWrapper_QSqlRecord::__ne__(QSqlRecord* theWrappedObject, const QSqlRecord&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QSqlRecord::__eq__(QSqlRecord* theWrappedObject, const QSqlRecord&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QSqlRecord::remove(QSqlRecord* theWrappedObject, int  pos)
{
  ( theWrappedObject->remove(pos));
}

void PythonQtWrapper_QSqlRecord::replace(QSqlRecord* theWrappedObject, int  pos, const QSqlField&  field)
{
  ( theWrappedObject->replace(pos, field));
}

void PythonQtWrapper_QSqlRecord::setGenerated(QSqlRecord* theWrappedObject, const QString&  name, bool  generated)
{
  ( theWrappedObject->setGenerated(name, generated));
}

void PythonQtWrapper_QSqlRecord::setGenerated(QSqlRecord* theWrappedObject, int  i, bool  generated)
{
  ( theWrappedObject->setGenerated(i, generated));
}

void PythonQtWrapper_QSqlRecord::setNull(QSqlRecord* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setNull(name));
}

void PythonQtWrapper_QSqlRecord::setNull(QSqlRecord* theWrappedObject, int  i)
{
  ( theWrappedObject->setNull(i));
}

void PythonQtWrapper_QSqlRecord::setValue(QSqlRecord* theWrappedObject, const QString&  name, const QVariant&  val)
{
  ( theWrappedObject->setValue(name, val));
}

void PythonQtWrapper_QSqlRecord::setValue(QSqlRecord* theWrappedObject, int  i, const QVariant&  val)
{
  ( theWrappedObject->setValue(i, val));
}

QVariant  PythonQtWrapper_QSqlRecord::value(QSqlRecord* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->value(name));
}

QVariant  PythonQtWrapper_QSqlRecord::value(QSqlRecord* theWrappedObject, int  i) const
{
  return ( theWrappedObject->value(i));
}

QString PythonQtWrapper_QSqlRecord::py_toString(QSqlRecord* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QSqlRelation* PythonQtWrapper_QSqlRelation::new_QSqlRelation()
{ 
return new QSqlRelation(); }

QSqlRelation* PythonQtWrapper_QSqlRelation::new_QSqlRelation(const QString&  aTableName, const QString&  indexCol, const QString&  displayCol)
{ 
return new QSqlRelation(aTableName, indexCol, displayCol); }

QString  PythonQtWrapper_QSqlRelation::displayColumn(QSqlRelation* theWrappedObject) const
{
  return ( theWrappedObject->displayColumn());
}

QString  PythonQtWrapper_QSqlRelation::indexColumn(QSqlRelation* theWrappedObject) const
{
  return ( theWrappedObject->indexColumn());
}

bool  PythonQtWrapper_QSqlRelation::isValid(QSqlRelation* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QString  PythonQtWrapper_QSqlRelation::tableName(QSqlRelation* theWrappedObject) const
{
  return ( theWrappedObject->tableName());
}



QModelIndex  PythonQtShell_QSqlRelationalTableModel::buddy(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "buddy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QModelIndex" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("buddy", methodInfo, result);
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
  return QSqlRelationalTableModel::buddy(index);
}
bool  PythonQtShell_QSqlRelationalTableModel::canFetchMore(const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "canFetchMore");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("canFetchMore", methodInfo, result);
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
  return QSqlRelationalTableModel::canFetchMore(parent);
}
void PythonQtShell_QSqlRelationalTableModel::childEvent(QChildEvent*  arg__1)
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
  QSqlRelationalTableModel::childEvent(arg__1);
}
void PythonQtShell_QSqlRelationalTableModel::clear()
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
  QSqlRelationalTableModel::clear();
}
int  PythonQtShell_QSqlRelationalTableModel::columnCount(const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "columnCount");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("columnCount", methodInfo, result);
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
  return QSqlRelationalTableModel::columnCount(parent);
}
void PythonQtShell_QSqlRelationalTableModel::customEvent(QEvent*  arg__1)
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
  QSqlRelationalTableModel::customEvent(arg__1);
}
QVariant  PythonQtShell_QSqlRelationalTableModel::data(const QModelIndex&  item, int  role) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "data");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "const QModelIndex&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&item, (void*)&role};
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
  return QSqlRelationalTableModel::data(item, role);
}
bool  PythonQtShell_QSqlRelationalTableModel::deleteRowFromTable(int  row)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "deleteRowFromTable");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&row};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("deleteRowFromTable", methodInfo, result);
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
  return QSqlRelationalTableModel::deleteRowFromTable(row);
}
bool  PythonQtShell_QSqlRelationalTableModel::dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropMimeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QMimeData*" , "Qt::DropAction" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue;
    void* args[6] = {NULL, (void*)&data, (void*)&action, (void*)&row, (void*)&column, (void*)&parent};
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
  return QSqlRelationalTableModel::dropMimeData(data, action, row, column, parent);
}
bool  PythonQtShell_QSqlRelationalTableModel::event(QEvent*  arg__1)
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
  return QSqlRelationalTableModel::event(arg__1);
}
bool  PythonQtShell_QSqlRelationalTableModel::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QSqlRelationalTableModel::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QSqlRelationalTableModel::fetchMore(const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "fetchMore");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlRelationalTableModel::fetchMore(parent);
}
Qt::ItemFlags  PythonQtShell_QSqlRelationalTableModel::flags(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "flags");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"Qt::ItemFlags" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      Qt::ItemFlags returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("flags", methodInfo, result);
        } else {
          returnValue = *((Qt::ItemFlags*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlRelationalTableModel::flags(index);
}
QVariant  PythonQtShell_QSqlRelationalTableModel::headerData(int  section, Qt::Orientation  orientation, int  role) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "headerData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "int" , "Qt::Orientation" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QVariant returnValue;
    void* args[4] = {NULL, (void*)&section, (void*)&orientation, (void*)&role};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("headerData", methodInfo, result);
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
  return QSqlRelationalTableModel::headerData(section, orientation, role);
}
QModelIndex  PythonQtShell_QSqlRelationalTableModel::index(int  row, int  column, const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "index");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QModelIndex" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QModelIndex returnValue;
    void* args[4] = {NULL, (void*)&row, (void*)&column, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("index", methodInfo, result);
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
  return QSqlRelationalTableModel::index(row, column, parent);
}
bool  PythonQtShell_QSqlRelationalTableModel::insertColumns(int  column, int  count, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "insertColumns");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&column, (void*)&count, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("insertColumns", methodInfo, result);
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
  return QSqlRelationalTableModel::insertColumns(column, count, parent);
}
bool  PythonQtShell_QSqlRelationalTableModel::insertRowIntoTable(const QSqlRecord&  values)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "insertRowIntoTable");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QSqlRecord&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&values};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("insertRowIntoTable", methodInfo, result);
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
  return QSqlRelationalTableModel::insertRowIntoTable(values);
}
bool  PythonQtShell_QSqlRelationalTableModel::insertRows(int  row, int  count, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "insertRows");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&row, (void*)&count, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("insertRows", methodInfo, result);
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
  return QSqlRelationalTableModel::insertRows(row, count, parent);
}
QMap<int , QVariant >  PythonQtShell_QSqlRelationalTableModel::itemData(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QMap<int , QVariant >" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMap<int , QVariant > returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemData", methodInfo, result);
        } else {
          returnValue = *((QMap<int , QVariant >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlRelationalTableModel::itemData(index);
}
QList<QModelIndex >  PythonQtShell_QSqlRelationalTableModel::match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits, Qt::MatchFlags  flags) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "match");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QList<QModelIndex >" , "const QModelIndex&" , "int" , "const QVariant&" , "int" , "Qt::MatchFlags"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      QList<QModelIndex > returnValue;
    void* args[6] = {NULL, (void*)&start, (void*)&role, (void*)&value, (void*)&hits, (void*)&flags};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("match", methodInfo, result);
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
  return QSqlRelationalTableModel::match(start, role, value, hits, flags);
}
QMimeData*  PythonQtShell_QSqlRelationalTableModel::mimeData(const QList<QModelIndex >&  indexes) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mimeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QMimeData*" , "const QList<QModelIndex >&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMimeData* returnValue;
    void* args[2] = {NULL, (void*)&indexes};
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
  return QSqlRelationalTableModel::mimeData(indexes);
}
QStringList  PythonQtShell_QSqlRelationalTableModel::mimeTypes() const
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
  return QSqlRelationalTableModel::mimeTypes();
}
QString  PythonQtShell_QSqlRelationalTableModel::orderByClause() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "orderByClause");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QString"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("orderByClause", methodInfo, result);
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
  return QSqlRelationalTableModel::orderByClause();
}
void PythonQtShell_QSqlRelationalTableModel::queryChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "queryChange");
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
  QSqlRelationalTableModel::queryChange();
}
QSqlTableModel*  PythonQtShell_QSqlRelationalTableModel::relationModel(int  column) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "relationModel");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSqlTableModel*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QSqlTableModel* returnValue;
    void* args[2] = {NULL, (void*)&column};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("relationModel", methodInfo, result);
        } else {
          returnValue = *((QSqlTableModel**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlRelationalTableModel::relationModel(column);
}
bool  PythonQtShell_QSqlRelationalTableModel::removeColumns(int  column, int  count, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "removeColumns");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&column, (void*)&count, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("removeColumns", methodInfo, result);
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
  return QSqlRelationalTableModel::removeColumns(column, count, parent);
}
bool  PythonQtShell_QSqlRelationalTableModel::removeRows(int  row, int  count, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "removeRows");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&row, (void*)&count, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("removeRows", methodInfo, result);
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
  return QSqlRelationalTableModel::removeRows(row, count, parent);
}
void PythonQtShell_QSqlRelationalTableModel::revert()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "revert");
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
  QSqlRelationalTableModel::revert();
}
void PythonQtShell_QSqlRelationalTableModel::revertRow(int  row)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "revertRow");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&row};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlRelationalTableModel::revertRow(row);
}
int  PythonQtShell_QSqlRelationalTableModel::rowCount(const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "rowCount");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("rowCount", methodInfo, result);
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
  return QSqlRelationalTableModel::rowCount(parent);
}
bool  PythonQtShell_QSqlRelationalTableModel::select()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "select");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("select", methodInfo, result);
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
  return QSqlRelationalTableModel::select();
}
QString  PythonQtShell_QSqlRelationalTableModel::selectStatement() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectStatement");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QString"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("selectStatement", methodInfo, result);
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
  return QSqlRelationalTableModel::selectStatement();
}
bool  PythonQtShell_QSqlRelationalTableModel::setData(const QModelIndex&  item, const QVariant&  value, int  role)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "const QVariant&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&item, (void*)&value, (void*)&role};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setData", methodInfo, result);
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
  return QSqlRelationalTableModel::setData(item, value, role);
}
void PythonQtShell_QSqlRelationalTableModel::setEditStrategy(QSqlTableModel::EditStrategy  strategy)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setEditStrategy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QSqlTableModel::EditStrategy"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&strategy};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlRelationalTableModel::setEditStrategy(strategy);
}
void PythonQtShell_QSqlRelationalTableModel::setFilter(const QString&  filter)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&filter};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlRelationalTableModel::setFilter(filter);
}
bool  PythonQtShell_QSqlRelationalTableModel::setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setHeaderData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int" , "Qt::Orientation" , "const QVariant&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      bool returnValue;
    void* args[5] = {NULL, (void*)&section, (void*)&orientation, (void*)&value, (void*)&role};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setHeaderData", methodInfo, result);
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
  return QSqlRelationalTableModel::setHeaderData(section, orientation, value, role);
}
bool  PythonQtShell_QSqlRelationalTableModel::setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setItemData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "const QMap<int , QVariant >&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&index, (void*)&roles};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setItemData", methodInfo, result);
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
  return QSqlRelationalTableModel::setItemData(index, roles);
}
void PythonQtShell_QSqlRelationalTableModel::setRelation(int  column, const QSqlRelation&  relation)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setRelation");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int" , "const QSqlRelation&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&column, (void*)&relation};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlRelationalTableModel::setRelation(column, relation);
}
void PythonQtShell_QSqlRelationalTableModel::setSort(int  column, Qt::SortOrder  order)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setSort");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int" , "Qt::SortOrder"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&column, (void*)&order};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlRelationalTableModel::setSort(column, order);
}
void PythonQtShell_QSqlRelationalTableModel::setTable(const QString&  tableName)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setTable");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&tableName};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlRelationalTableModel::setTable(tableName);
}
void PythonQtShell_QSqlRelationalTableModel::sort(int  column, Qt::SortOrder  order)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sort");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int" , "Qt::SortOrder"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&column, (void*)&order};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlRelationalTableModel::sort(column, order);
}
QSize  PythonQtShell_QSqlRelationalTableModel::span(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "span");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSize" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QSize returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("span", methodInfo, result);
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
  return QSqlRelationalTableModel::span(index);
}
bool  PythonQtShell_QSqlRelationalTableModel::submit()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "submit");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("submit", methodInfo, result);
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
  return QSqlRelationalTableModel::submit();
}
Qt::DropActions  PythonQtShell_QSqlRelationalTableModel::supportedDropActions() const
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
  return QSqlRelationalTableModel::supportedDropActions();
}
void PythonQtShell_QSqlRelationalTableModel::timerEvent(QTimerEvent*  arg__1)
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
  QSqlRelationalTableModel::timerEvent(arg__1);
}
bool  PythonQtShell_QSqlRelationalTableModel::updateRowInTable(int  row, const QSqlRecord&  values)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateRowInTable");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int" , "const QSqlRecord&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&row, (void*)&values};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("updateRowInTable", methodInfo, result);
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
  return QSqlRelationalTableModel::updateRowInTable(row, values);
}
QSqlRelationalTableModel* PythonQtWrapper_QSqlRelationalTableModel::new_QSqlRelationalTableModel(QObject*  parent, QSqlDatabase  db)
{ 
return new PythonQtShell_QSqlRelationalTableModel(parent, db); }

void PythonQtWrapper_QSqlRelationalTableModel::clear(QSqlRelationalTableModel* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->promoted_clear());
}

QVariant  PythonQtWrapper_QSqlRelationalTableModel::data(QSqlRelationalTableModel* theWrappedObject, const QModelIndex&  item, int  role) const
{
  return ( ((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->promoted_data(item, role));
}

bool  PythonQtWrapper_QSqlRelationalTableModel::insertRowIntoTable(QSqlRelationalTableModel* theWrappedObject, const QSqlRecord&  values)
{
  return ( ((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->promoted_insertRowIntoTable(values));
}

QString  PythonQtWrapper_QSqlRelationalTableModel::orderByClause(QSqlRelationalTableModel* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->promoted_orderByClause());
}

QSqlRelation  PythonQtWrapper_QSqlRelationalTableModel::relation(QSqlRelationalTableModel* theWrappedObject, int  column) const
{
  return ( theWrappedObject->relation(column));
}

QSqlTableModel*  PythonQtWrapper_QSqlRelationalTableModel::relationModel(QSqlRelationalTableModel* theWrappedObject, int  column) const
{
  return ( ((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->promoted_relationModel(column));
}

bool  PythonQtWrapper_QSqlRelationalTableModel::removeColumns(QSqlRelationalTableModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent)
{
  return ( ((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->promoted_removeColumns(column, count, parent));
}

bool  PythonQtWrapper_QSqlRelationalTableModel::select(QSqlRelationalTableModel* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->promoted_select());
}

QString  PythonQtWrapper_QSqlRelationalTableModel::selectStatement(QSqlRelationalTableModel* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->promoted_selectStatement());
}

bool  PythonQtWrapper_QSqlRelationalTableModel::setData(QSqlRelationalTableModel* theWrappedObject, const QModelIndex&  item, const QVariant&  value, int  role)
{
  return ( ((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->promoted_setData(item, value, role));
}

void PythonQtWrapper_QSqlRelationalTableModel::setRelation(QSqlRelationalTableModel* theWrappedObject, int  column, const QSqlRelation&  relation)
{
  ( ((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->promoted_setRelation(column, relation));
}

void PythonQtWrapper_QSqlRelationalTableModel::setTable(QSqlRelationalTableModel* theWrappedObject, const QString&  tableName)
{
  ( ((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->promoted_setTable(tableName));
}

bool  PythonQtWrapper_QSqlRelationalTableModel::updateRowInTable(QSqlRelationalTableModel* theWrappedObject, int  row, const QSqlRecord&  values)
{
  return ( ((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->promoted_updateRowInTable(row, values));
}



void PythonQtShell_QSqlResult::bindValue(const QString&  placeholder, const QVariant&  val, QSql::ParamType  type)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "bindValue");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QString&" , "const QVariant&" , "QSql::ParamType"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&placeholder, (void*)&val, (void*)&type};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlResult::bindValue(placeholder, val, type);
}
void PythonQtShell_QSqlResult::bindValue(int  pos, const QVariant&  val, QSql::ParamType  type)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "bindValue");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int" , "const QVariant&" , "QSql::ParamType"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&pos, (void*)&val, (void*)&type};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlResult::bindValue(pos, val, type);
}
QVariant  PythonQtShell_QSqlResult::data(int  i)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "data");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&i};
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
  return QVariant();
}
bool  PythonQtShell_QSqlResult::exec()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "exec");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("exec", methodInfo, result);
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
  return QSqlResult::exec();
}
bool  PythonQtShell_QSqlResult::fetch(int  i)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "fetch");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&i};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("fetch", methodInfo, result);
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
  return bool();
}
bool  PythonQtShell_QSqlResult::fetchFirst()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "fetchFirst");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("fetchFirst", methodInfo, result);
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
  return bool();
}
bool  PythonQtShell_QSqlResult::fetchLast()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "fetchLast");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("fetchLast", methodInfo, result);
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
  return bool();
}
bool  PythonQtShell_QSqlResult::fetchNext()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "fetchNext");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("fetchNext", methodInfo, result);
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
  return QSqlResult::fetchNext();
}
bool  PythonQtShell_QSqlResult::fetchPrevious()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "fetchPrevious");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("fetchPrevious", methodInfo, result);
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
  return QSqlResult::fetchPrevious();
}
QVariant  PythonQtShell_QSqlResult::handle() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "handle");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QVariant returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("handle", methodInfo, result);
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
  return QSqlResult::handle();
}
bool  PythonQtShell_QSqlResult::isNull(int  i)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isNull");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&i};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isNull", methodInfo, result);
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
  return bool();
}
QVariant  PythonQtShell_QSqlResult::lastInsertId() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "lastInsertId");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QVariant returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("lastInsertId", methodInfo, result);
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
  return QSqlResult::lastInsertId();
}
int  PythonQtShell_QSqlResult::numRowsAffected()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "numRowsAffected");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("numRowsAffected", methodInfo, result);
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
bool  PythonQtShell_QSqlResult::prepare(const QString&  query)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "prepare");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&query};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("prepare", methodInfo, result);
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
  return QSqlResult::prepare(query);
}
QSqlRecord  PythonQtShell_QSqlResult::record() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "record");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSqlRecord"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSqlRecord returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("record", methodInfo, result);
        } else {
          returnValue = *((QSqlRecord*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlResult::record();
}
bool  PythonQtShell_QSqlResult::reset(const QString&  sqlquery)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "reset");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&sqlquery};
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
  return bool();
}
bool  PythonQtShell_QSqlResult::savePrepare(const QString&  sqlquery)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "savePrepare");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&sqlquery};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("savePrepare", methodInfo, result);
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
  return QSqlResult::savePrepare(sqlquery);
}
void PythonQtShell_QSqlResult::setActive(bool  a)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setActive");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&a};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlResult::setActive(a);
}
void PythonQtShell_QSqlResult::setAt(int  at)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&at};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlResult::setAt(at);
}
void PythonQtShell_QSqlResult::setForwardOnly(bool  forward)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setForwardOnly");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&forward};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlResult::setForwardOnly(forward);
}
void PythonQtShell_QSqlResult::setLastError(const QSqlError&  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setLastError");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QSqlError&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlResult::setLastError(e);
}
void PythonQtShell_QSqlResult::setQuery(const QString&  query)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&query};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlResult::setQuery(query);
}
void PythonQtShell_QSqlResult::setSelect(bool  s)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setSelect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&s};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlResult::setSelect(s);
}
int  PythonQtShell_QSqlResult::size()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "size");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("size", methodInfo, result);
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
void PythonQtShell_QSqlResult::virtual_hook(int  id, void*  data)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "virtual_hook");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int" , "void*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&id, (void*)&data};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlResult::virtual_hook(id, data);
}
void PythonQtWrapper_QSqlResult::bindValue(QSqlResult* theWrappedObject, const QString&  placeholder, const QVariant&  val, QSql::ParamType  type)
{
  ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_bindValue(placeholder, val, type));
}

void PythonQtWrapper_QSqlResult::bindValue(QSqlResult* theWrappedObject, int  pos, const QVariant&  val, QSql::ParamType  type)
{
  ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_bindValue(pos, val, type));
}

bool  PythonQtWrapper_QSqlResult::exec(QSqlResult* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_exec());
}

bool  PythonQtWrapper_QSqlResult::fetchNext(QSqlResult* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_fetchNext());
}

bool  PythonQtWrapper_QSqlResult::fetchPrevious(QSqlResult* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_fetchPrevious());
}

QVariant  PythonQtWrapper_QSqlResult::handle(QSqlResult* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_handle());
}

QVariant  PythonQtWrapper_QSqlResult::lastInsertId(QSqlResult* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_lastInsertId());
}

bool  PythonQtWrapper_QSqlResult::prepare(QSqlResult* theWrappedObject, const QString&  query)
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_prepare(query));
}

QSqlRecord  PythonQtWrapper_QSqlResult::record(QSqlResult* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_record());
}

bool  PythonQtWrapper_QSqlResult::savePrepare(QSqlResult* theWrappedObject, const QString&  sqlquery)
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_savePrepare(sqlquery));
}

void PythonQtWrapper_QSqlResult::setActive(QSqlResult* theWrappedObject, bool  a)
{
  ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_setActive(a));
}

void PythonQtWrapper_QSqlResult::setAt(QSqlResult* theWrappedObject, int  at)
{
  ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_setAt(at));
}

void PythonQtWrapper_QSqlResult::setForwardOnly(QSqlResult* theWrappedObject, bool  forward)
{
  ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_setForwardOnly(forward));
}

void PythonQtWrapper_QSqlResult::setLastError(QSqlResult* theWrappedObject, const QSqlError&  e)
{
  ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_setLastError(e));
}

void PythonQtWrapper_QSqlResult::setQuery(QSqlResult* theWrappedObject, const QString&  query)
{
  ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_setQuery(query));
}

void PythonQtWrapper_QSqlResult::setSelect(QSqlResult* theWrappedObject, bool  s)
{
  ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_setSelect(s));
}



QModelIndex  PythonQtShell_QSqlTableModel::buddy(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "buddy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QModelIndex" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("buddy", methodInfo, result);
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
  return QSqlTableModel::buddy(index);
}
bool  PythonQtShell_QSqlTableModel::canFetchMore(const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "canFetchMore");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("canFetchMore", methodInfo, result);
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
  return QSqlTableModel::canFetchMore(parent);
}
void PythonQtShell_QSqlTableModel::childEvent(QChildEvent*  arg__1)
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
  QSqlTableModel::childEvent(arg__1);
}
void PythonQtShell_QSqlTableModel::clear()
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
  QSqlTableModel::clear();
}
int  PythonQtShell_QSqlTableModel::columnCount(const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "columnCount");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("columnCount", methodInfo, result);
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
  return QSqlTableModel::columnCount(parent);
}
void PythonQtShell_QSqlTableModel::customEvent(QEvent*  arg__1)
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
  QSqlTableModel::customEvent(arg__1);
}
QVariant  PythonQtShell_QSqlTableModel::data(const QModelIndex&  idx, int  role) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "data");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "const QModelIndex&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&idx, (void*)&role};
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
  return QSqlTableModel::data(idx, role);
}
bool  PythonQtShell_QSqlTableModel::deleteRowFromTable(int  row)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "deleteRowFromTable");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&row};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("deleteRowFromTable", methodInfo, result);
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
  return QSqlTableModel::deleteRowFromTable(row);
}
bool  PythonQtShell_QSqlTableModel::dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropMimeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QMimeData*" , "Qt::DropAction" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue;
    void* args[6] = {NULL, (void*)&data, (void*)&action, (void*)&row, (void*)&column, (void*)&parent};
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
  return QSqlTableModel::dropMimeData(data, action, row, column, parent);
}
bool  PythonQtShell_QSqlTableModel::event(QEvent*  arg__1)
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
  return QSqlTableModel::event(arg__1);
}
bool  PythonQtShell_QSqlTableModel::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QSqlTableModel::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QSqlTableModel::fetchMore(const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "fetchMore");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlTableModel::fetchMore(parent);
}
Qt::ItemFlags  PythonQtShell_QSqlTableModel::flags(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "flags");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"Qt::ItemFlags" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      Qt::ItemFlags returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("flags", methodInfo, result);
        } else {
          returnValue = *((Qt::ItemFlags*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlTableModel::flags(index);
}
QVariant  PythonQtShell_QSqlTableModel::headerData(int  section, Qt::Orientation  orientation, int  role) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "headerData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "int" , "Qt::Orientation" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QVariant returnValue;
    void* args[4] = {NULL, (void*)&section, (void*)&orientation, (void*)&role};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("headerData", methodInfo, result);
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
  return QSqlTableModel::headerData(section, orientation, role);
}
QModelIndex  PythonQtShell_QSqlTableModel::index(int  row, int  column, const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "index");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QModelIndex" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QModelIndex returnValue;
    void* args[4] = {NULL, (void*)&row, (void*)&column, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("index", methodInfo, result);
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
  return QSqlTableModel::index(row, column, parent);
}
bool  PythonQtShell_QSqlTableModel::insertColumns(int  column, int  count, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "insertColumns");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&column, (void*)&count, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("insertColumns", methodInfo, result);
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
  return QSqlTableModel::insertColumns(column, count, parent);
}
bool  PythonQtShell_QSqlTableModel::insertRowIntoTable(const QSqlRecord&  values)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "insertRowIntoTable");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QSqlRecord&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&values};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("insertRowIntoTable", methodInfo, result);
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
  return QSqlTableModel::insertRowIntoTable(values);
}
bool  PythonQtShell_QSqlTableModel::insertRows(int  row, int  count, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "insertRows");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&row, (void*)&count, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("insertRows", methodInfo, result);
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
  return QSqlTableModel::insertRows(row, count, parent);
}
QMap<int , QVariant >  PythonQtShell_QSqlTableModel::itemData(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QMap<int , QVariant >" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMap<int , QVariant > returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemData", methodInfo, result);
        } else {
          returnValue = *((QMap<int , QVariant >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlTableModel::itemData(index);
}
QList<QModelIndex >  PythonQtShell_QSqlTableModel::match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits, Qt::MatchFlags  flags) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "match");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QList<QModelIndex >" , "const QModelIndex&" , "int" , "const QVariant&" , "int" , "Qt::MatchFlags"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      QList<QModelIndex > returnValue;
    void* args[6] = {NULL, (void*)&start, (void*)&role, (void*)&value, (void*)&hits, (void*)&flags};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("match", methodInfo, result);
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
  return QSqlTableModel::match(start, role, value, hits, flags);
}
QMimeData*  PythonQtShell_QSqlTableModel::mimeData(const QList<QModelIndex >&  indexes) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mimeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QMimeData*" , "const QList<QModelIndex >&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMimeData* returnValue;
    void* args[2] = {NULL, (void*)&indexes};
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
  return QSqlTableModel::mimeData(indexes);
}
QStringList  PythonQtShell_QSqlTableModel::mimeTypes() const
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
  return QSqlTableModel::mimeTypes();
}
QString  PythonQtShell_QSqlTableModel::orderByClause() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "orderByClause");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QString"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("orderByClause", methodInfo, result);
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
  return QSqlTableModel::orderByClause();
}
void PythonQtShell_QSqlTableModel::queryChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "queryChange");
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
  QSqlTableModel::queryChange();
}
bool  PythonQtShell_QSqlTableModel::removeColumns(int  column, int  count, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "removeColumns");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&column, (void*)&count, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("removeColumns", methodInfo, result);
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
  return QSqlTableModel::removeColumns(column, count, parent);
}
bool  PythonQtShell_QSqlTableModel::removeRows(int  row, int  count, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "removeRows");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&row, (void*)&count, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("removeRows", methodInfo, result);
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
  return QSqlTableModel::removeRows(row, count, parent);
}
void PythonQtShell_QSqlTableModel::revert()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "revert");
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
  QSqlTableModel::revert();
}
void PythonQtShell_QSqlTableModel::revertRow(int  row)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "revertRow");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&row};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlTableModel::revertRow(row);
}
int  PythonQtShell_QSqlTableModel::rowCount(const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "rowCount");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("rowCount", methodInfo, result);
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
  return QSqlTableModel::rowCount(parent);
}
bool  PythonQtShell_QSqlTableModel::select()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "select");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("select", methodInfo, result);
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
  return QSqlTableModel::select();
}
QString  PythonQtShell_QSqlTableModel::selectStatement() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectStatement");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QString"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("selectStatement", methodInfo, result);
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
  return QSqlTableModel::selectStatement();
}
bool  PythonQtShell_QSqlTableModel::setData(const QModelIndex&  index, const QVariant&  value, int  role)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "const QVariant&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&index, (void*)&value, (void*)&role};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setData", methodInfo, result);
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
  return QSqlTableModel::setData(index, value, role);
}
void PythonQtShell_QSqlTableModel::setEditStrategy(QSqlTableModel::EditStrategy  strategy)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setEditStrategy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QSqlTableModel::EditStrategy"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&strategy};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlTableModel::setEditStrategy(strategy);
}
void PythonQtShell_QSqlTableModel::setFilter(const QString&  filter)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&filter};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlTableModel::setFilter(filter);
}
bool  PythonQtShell_QSqlTableModel::setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setHeaderData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int" , "Qt::Orientation" , "const QVariant&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      bool returnValue;
    void* args[5] = {NULL, (void*)&section, (void*)&orientation, (void*)&value, (void*)&role};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setHeaderData", methodInfo, result);
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
  return QSqlTableModel::setHeaderData(section, orientation, value, role);
}
bool  PythonQtShell_QSqlTableModel::setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setItemData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "const QMap<int , QVariant >&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&index, (void*)&roles};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setItemData", methodInfo, result);
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
  return QSqlTableModel::setItemData(index, roles);
}
void PythonQtShell_QSqlTableModel::setSort(int  column, Qt::SortOrder  order)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setSort");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int" , "Qt::SortOrder"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&column, (void*)&order};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlTableModel::setSort(column, order);
}
void PythonQtShell_QSqlTableModel::setTable(const QString&  tableName)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setTable");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&tableName};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlTableModel::setTable(tableName);
}
void PythonQtShell_QSqlTableModel::sort(int  column, Qt::SortOrder  order)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sort");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int" , "Qt::SortOrder"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&column, (void*)&order};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlTableModel::sort(column, order);
}
QSize  PythonQtShell_QSqlTableModel::span(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "span");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSize" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QSize returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("span", methodInfo, result);
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
  return QSqlTableModel::span(index);
}
bool  PythonQtShell_QSqlTableModel::submit()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "submit");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("submit", methodInfo, result);
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
  return QSqlTableModel::submit();
}
Qt::DropActions  PythonQtShell_QSqlTableModel::supportedDropActions() const
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
  return QSqlTableModel::supportedDropActions();
}
void PythonQtShell_QSqlTableModel::timerEvent(QTimerEvent*  arg__1)
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
  QSqlTableModel::timerEvent(arg__1);
}
bool  PythonQtShell_QSqlTableModel::updateRowInTable(int  row, const QSqlRecord&  values)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateRowInTable");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int" , "const QSqlRecord&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&row, (void*)&values};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("updateRowInTable", methodInfo, result);
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
  return QSqlTableModel::updateRowInTable(row, values);
}
QSqlTableModel* PythonQtWrapper_QSqlTableModel::new_QSqlTableModel(QObject*  parent, QSqlDatabase  db)
{ 
return new PythonQtShell_QSqlTableModel(parent, db); }

void PythonQtWrapper_QSqlTableModel::clear(QSqlTableModel* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_clear());
}

QVariant  PythonQtWrapper_QSqlTableModel::data(QSqlTableModel* theWrappedObject, const QModelIndex&  idx, int  role) const
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_data(idx, role));
}

QSqlDatabase  PythonQtWrapper_QSqlTableModel::database(QSqlTableModel* theWrappedObject) const
{
  return ( theWrappedObject->database());
}

bool  PythonQtWrapper_QSqlTableModel::deleteRowFromTable(QSqlTableModel* theWrappedObject, int  row)
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_deleteRowFromTable(row));
}

QSqlTableModel::EditStrategy  PythonQtWrapper_QSqlTableModel::editStrategy(QSqlTableModel* theWrappedObject) const
{
  return ( theWrappedObject->editStrategy());
}

int  PythonQtWrapper_QSqlTableModel::fieldIndex(QSqlTableModel* theWrappedObject, const QString&  fieldName) const
{
  return ( theWrappedObject->fieldIndex(fieldName));
}

QString  PythonQtWrapper_QSqlTableModel::filter(QSqlTableModel* theWrappedObject) const
{
  return ( theWrappedObject->filter());
}

Qt::ItemFlags  PythonQtWrapper_QSqlTableModel::flags(QSqlTableModel* theWrappedObject, const QModelIndex&  index) const
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_flags(index));
}

QVariant  PythonQtWrapper_QSqlTableModel::headerData(QSqlTableModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role) const
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_headerData(section, orientation, role));
}

bool  PythonQtWrapper_QSqlTableModel::insertRecord(QSqlTableModel* theWrappedObject, int  row, const QSqlRecord&  record)
{
  return ( theWrappedObject->insertRecord(row, record));
}

bool  PythonQtWrapper_QSqlTableModel::insertRowIntoTable(QSqlTableModel* theWrappedObject, const QSqlRecord&  values)
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_insertRowIntoTable(values));
}

bool  PythonQtWrapper_QSqlTableModel::insertRows(QSqlTableModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent)
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_insertRows(row, count, parent));
}

bool  PythonQtWrapper_QSqlTableModel::isDirty(QSqlTableModel* theWrappedObject, const QModelIndex&  index) const
{
  return ( theWrappedObject->isDirty(index));
}

QString  PythonQtWrapper_QSqlTableModel::orderByClause(QSqlTableModel* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_orderByClause());
}

QSqlIndex  PythonQtWrapper_QSqlTableModel::primaryKey(QSqlTableModel* theWrappedObject) const
{
  return ( theWrappedObject->primaryKey());
}

bool  PythonQtWrapper_QSqlTableModel::removeColumns(QSqlTableModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent)
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_removeColumns(column, count, parent));
}

bool  PythonQtWrapper_QSqlTableModel::removeRows(QSqlTableModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent)
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_removeRows(row, count, parent));
}

void PythonQtWrapper_QSqlTableModel::revertRow(QSqlTableModel* theWrappedObject, int  row)
{
  ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_revertRow(row));
}

int  PythonQtWrapper_QSqlTableModel::rowCount(QSqlTableModel* theWrappedObject, const QModelIndex&  parent) const
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_rowCount(parent));
}

bool  PythonQtWrapper_QSqlTableModel::select(QSqlTableModel* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_select());
}

QString  PythonQtWrapper_QSqlTableModel::selectStatement(QSqlTableModel* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_selectStatement());
}

bool  PythonQtWrapper_QSqlTableModel::setData(QSqlTableModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role)
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_setData(index, value, role));
}

void PythonQtWrapper_QSqlTableModel::setEditStrategy(QSqlTableModel* theWrappedObject, QSqlTableModel::EditStrategy  strategy)
{
  ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_setEditStrategy(strategy));
}

void PythonQtWrapper_QSqlTableModel::setFilter(QSqlTableModel* theWrappedObject, const QString&  filter)
{
  ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_setFilter(filter));
}

bool  PythonQtWrapper_QSqlTableModel::setRecord(QSqlTableModel* theWrappedObject, int  row, const QSqlRecord&  record)
{
  return ( theWrappedObject->setRecord(row, record));
}

void PythonQtWrapper_QSqlTableModel::setSort(QSqlTableModel* theWrappedObject, int  column, Qt::SortOrder  order)
{
  ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_setSort(column, order));
}

void PythonQtWrapper_QSqlTableModel::setTable(QSqlTableModel* theWrappedObject, const QString&  tableName)
{
  ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_setTable(tableName));
}

void PythonQtWrapper_QSqlTableModel::sort(QSqlTableModel* theWrappedObject, int  column, Qt::SortOrder  order)
{
  ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_sort(column, order));
}

QString  PythonQtWrapper_QSqlTableModel::tableName(QSqlTableModel* theWrappedObject) const
{
  return ( theWrappedObject->tableName());
}

bool  PythonQtWrapper_QSqlTableModel::updateRowInTable(QSqlTableModel* theWrappedObject, int  row, const QSqlRecord&  values)
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_updateRowInTable(row, values));
}


