#include <PythonQt.h>
#include <QObject>
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
#include <qglobal.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmetaobject.h>
#include <qmetatype.h>
#include <qmimedata.h>
#include <qmutex.h>
#include <qobject.h>
#include <qpair.h>
#include <qparallelanimationgroup.h>
#include <qpauseanimation.h>
#include <qprocess.h>
#include <qpropertyanimation.h>
#include <qreadwritelock.h>
#include <qresource.h>
#include <qrunnable.h>
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



class PythonQtWrapper_QMetaClassInfo : public QObject
{ Q_OBJECT
public:
public slots:
QMetaClassInfo* new_QMetaClassInfo();
void delete_QMetaClassInfo(QMetaClassInfo* obj) { delete obj; } 
   const QMetaObject*  enclosingMetaObject(QMetaClassInfo* theWrappedObject) const;
   const char*  name(QMetaClassInfo* theWrappedObject) const;
   const char*  value(QMetaClassInfo* theWrappedObject) const;
};





class PythonQtWrapper_QMetaEnum : public QObject
{ Q_OBJECT
public:
public slots:
QMetaEnum* new_QMetaEnum();
void delete_QMetaEnum(QMetaEnum* obj) { delete obj; } 
   const QMetaObject*  enclosingMetaObject(QMetaEnum* theWrappedObject) const;
   bool  isFlag(QMetaEnum* theWrappedObject) const;
   bool  isValid(QMetaEnum* theWrappedObject) const;
   const char*  key(QMetaEnum* theWrappedObject, int  index) const;
   int  keyCount(QMetaEnum* theWrappedObject) const;
   int  keyToValue(QMetaEnum* theWrappedObject, const char*  key) const;
   int  keysToValue(QMetaEnum* theWrappedObject, const char*  keys) const;
   const char*  name(QMetaEnum* theWrappedObject) const;
   const char*  scope(QMetaEnum* theWrappedObject) const;
   int  value(QMetaEnum* theWrappedObject, int  index) const;
   const char*  valueToKey(QMetaEnum* theWrappedObject, int  value) const;
   QByteArray  valueToKeys(QMetaEnum* theWrappedObject, int  value) const;
};





class PythonQtWrapper_QMetaMethod : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Access Attributes MethodType )
enum Access{
  Private = QMetaMethod::Private,   Protected = QMetaMethod::Protected,   Public = QMetaMethod::Public};
enum Attributes{
  Compatibility = QMetaMethod::Compatibility,   Cloned = QMetaMethod::Cloned,   Scriptable = QMetaMethod::Scriptable};
enum MethodType{
  Method = QMetaMethod::Method,   Signal = QMetaMethod::Signal,   Slot = QMetaMethod::Slot,   Constructor = QMetaMethod::Constructor};
public slots:
QMetaMethod* new_QMetaMethod();
void delete_QMetaMethod(QMetaMethod* obj) { delete obj; } 
   QMetaMethod::Access  access(QMetaMethod* theWrappedObject) const;
   int  attributes(QMetaMethod* theWrappedObject) const;
   const QMetaObject*  enclosingMetaObject(QMetaMethod* theWrappedObject) const;
   int  methodIndex(QMetaMethod* theWrappedObject) const;
   QMetaMethod::MethodType  methodType(QMetaMethod* theWrappedObject) const;
   QList<QByteArray >  parameterNames(QMetaMethod* theWrappedObject) const;
   QList<QByteArray >  parameterTypes(QMetaMethod* theWrappedObject) const;
   int  revision(QMetaMethod* theWrappedObject) const;
   const char*  signature(QMetaMethod* theWrappedObject) const;
   const char*  tag(QMetaMethod* theWrappedObject) const;
   const char*  typeName(QMetaMethod* theWrappedObject) const;
};





class PythonQtWrapper_QMetaProperty : public QObject
{ Q_OBJECT
public:
public slots:
QMetaProperty* new_QMetaProperty();
void delete_QMetaProperty(QMetaProperty* obj) { delete obj; } 
   const QMetaObject*  enclosingMetaObject(QMetaProperty* theWrappedObject) const;
   QMetaEnum  enumerator(QMetaProperty* theWrappedObject) const;
   bool  hasNotifySignal(QMetaProperty* theWrappedObject) const;
   bool  hasStdCppSet(QMetaProperty* theWrappedObject) const;
   bool  isConstant(QMetaProperty* theWrappedObject) const;
   bool  isDesignable(QMetaProperty* theWrappedObject, const QObject*  obj = 0) const;
   bool  isEditable(QMetaProperty* theWrappedObject, const QObject*  obj = 0) const;
   bool  isEnumType(QMetaProperty* theWrappedObject) const;
   bool  isFinal(QMetaProperty* theWrappedObject) const;
   bool  isFlagType(QMetaProperty* theWrappedObject) const;
   bool  isReadable(QMetaProperty* theWrappedObject) const;
   bool  isResettable(QMetaProperty* theWrappedObject) const;
   bool  isScriptable(QMetaProperty* theWrappedObject, const QObject*  obj = 0) const;
   bool  isStored(QMetaProperty* theWrappedObject, const QObject*  obj = 0) const;
   bool  isUser(QMetaProperty* theWrappedObject, const QObject*  obj = 0) const;
   bool  isValid(QMetaProperty* theWrappedObject) const;
   bool  isWritable(QMetaProperty* theWrappedObject) const;
   const char*  name(QMetaProperty* theWrappedObject) const;
   QMetaMethod  notifySignal(QMetaProperty* theWrappedObject) const;
   int  notifySignalIndex(QMetaProperty* theWrappedObject) const;
   int  propertyIndex(QMetaProperty* theWrappedObject) const;
   QVariant  read(QMetaProperty* theWrappedObject, const QObject*  obj) const;
   bool  reset(QMetaProperty* theWrappedObject, QObject*  obj) const;
   int  revision(QMetaProperty* theWrappedObject) const;
   QVariant::Type  type(QMetaProperty* theWrappedObject) const;
   const char*  typeName(QMetaProperty* theWrappedObject) const;
   int  userType(QMetaProperty* theWrappedObject) const;
   bool  write(QMetaProperty* theWrappedObject, QObject*  obj, const QVariant&  value) const;
};





class PythonQtShell_QMetaType : public QMetaType
{
public:
    PythonQtShell_QMetaType():QMetaType(),_wrapper(NULL) {};

   ~PythonQtShell_QMetaType();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QMetaType : public QObject
{ Q_OBJECT
public:
public slots:
QMetaType* new_QMetaType();
void delete_QMetaType(QMetaType* obj) { delete obj; } 
   void*  static_QMetaType_construct(int  type, const void*  copy = 0);
   void static_QMetaType_destroy(int  type, void*  data);
   bool  static_QMetaType_isRegistered(int  type);
   bool  static_QMetaType_load(QDataStream&  stream, int  type, void*  data);
   int  static_QMetaType_registerTypedef(const char*  typeName, int  aliasId);
   bool  static_QMetaType_save(QDataStream&  stream, int  type, const void*  data);
   int  static_QMetaType_type(const char*  typeName);
   const char*  static_QMetaType_typeName(int  type);
   void static_QMetaType_unregisterType(const char*  typeName);
};





class PythonQtShell_QMimeData : public QMimeData
{
public:
    PythonQtShell_QMimeData():QMimeData(),_wrapper(NULL) {};

   ~PythonQtShell_QMimeData();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QStringList  formats() const;
virtual bool  hasFormat(const QString&  mimetype) const;
virtual QVariant  retrieveData(const QString&  mimetype, QVariant::Type  preferredType) const;
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMimeData : public QMimeData
{ public:
inline QStringList  promoted_formats() const { return QMimeData::formats(); }
inline bool  promoted_hasFormat(const QString&  mimetype) const { return QMimeData::hasFormat(mimetype); }
inline QVariant  promoted_retrieveData(const QString&  mimetype, QVariant::Type  preferredType) const { return QMimeData::retrieveData(mimetype, preferredType); }
};

class PythonQtWrapper_QMimeData : public QObject
{ Q_OBJECT
public:
public slots:
QMimeData* new_QMimeData();
void delete_QMimeData(QMimeData* obj) { delete obj; } 
   void clear(QMimeData* theWrappedObject);
   QVariant  colorData(QMimeData* theWrappedObject) const;
   QByteArray  data(QMimeData* theWrappedObject, const QString&  mimetype) const;
   QStringList  formats(QMimeData* theWrappedObject) const;
   bool  hasColor(QMimeData* theWrappedObject) const;
   bool  hasFormat(QMimeData* theWrappedObject, const QString&  mimetype) const;
   bool  hasHtml(QMimeData* theWrappedObject) const;
   bool  hasImage(QMimeData* theWrappedObject) const;
   bool  hasText(QMimeData* theWrappedObject) const;
   bool  hasUrls(QMimeData* theWrappedObject) const;
   QString  html(QMimeData* theWrappedObject) const;
   QVariant  imageData(QMimeData* theWrappedObject) const;
   void removeFormat(QMimeData* theWrappedObject, const QString&  mimetype);
   QVariant  retrieveData(QMimeData* theWrappedObject, const QString&  mimetype, QVariant::Type  preferredType) const;
   void setColorData(QMimeData* theWrappedObject, const QVariant&  color);
   void setData(QMimeData* theWrappedObject, const QString&  mimetype, const QByteArray&  data);
   void setHtml(QMimeData* theWrappedObject, const QString&  html);
   void setImageData(QMimeData* theWrappedObject, const QVariant&  image);
   void setText(QMimeData* theWrappedObject, const QString&  text);
   void setUrls(QMimeData* theWrappedObject, const QList<QUrl >&  urls);
   QString  text(QMimeData* theWrappedObject) const;
   QList<QUrl >  urls(QMimeData* theWrappedObject) const;
};





class PythonQtWrapper_QModelIndex : public QObject
{ Q_OBJECT
public:
public slots:
QModelIndex* new_QModelIndex();
QModelIndex* new_QModelIndex(const QModelIndex&  other);
void delete_QModelIndex(QModelIndex* obj) { delete obj; } 
   QModelIndex  child(QModelIndex* theWrappedObject, int  row, int  column) const;
   int  column(QModelIndex* theWrappedObject) const;
   QVariant  data(QModelIndex* theWrappedObject, int  role = Qt::DisplayRole) const;
   Qt::ItemFlags  flags(QModelIndex* theWrappedObject) const;
   qint64  internalId(QModelIndex* theWrappedObject) const;
   void*  internalPointer(QModelIndex* theWrappedObject) const;
   bool  isValid(QModelIndex* theWrappedObject) const;
   const QAbstractItemModel*  model(QModelIndex* theWrappedObject) const;
   bool  __ne__(QModelIndex* theWrappedObject, const QModelIndex&  other) const;
   bool  __lt__(QModelIndex* theWrappedObject, const QModelIndex&  other) const;
   bool  __eq__(QModelIndex* theWrappedObject, const QModelIndex&  other) const;
   QModelIndex  parent(QModelIndex* theWrappedObject) const;
   int  row(QModelIndex* theWrappedObject) const;
   QModelIndex  sibling(QModelIndex* theWrappedObject, int  row, int  column) const;
    QString py_toString(QModelIndex*);
};





class PythonQtWrapper_QMutex : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RecursionMode )
enum RecursionMode{
  NonRecursive = QMutex::NonRecursive,   Recursive = QMutex::Recursive};
public slots:
QMutex* new_QMutex(QMutex::RecursionMode  mode = QMutex::NonRecursive);
void delete_QMutex(QMutex* obj) { delete obj; } 
   void lock(QMutex* theWrappedObject);
   void lockInline(QMutex* theWrappedObject);
   bool  tryLock(QMutex* theWrappedObject);
   bool  tryLock(QMutex* theWrappedObject, int  timeout);
   bool  tryLockInline(QMutex* theWrappedObject);
   void unlock(QMutex* theWrappedObject);
   void unlockInline(QMutex* theWrappedObject);
};





class PythonQtShell_QObject : public QObject
{
public:
    PythonQtShell_QObject(QObject*  parent = 0):QObject(parent),_wrapper(NULL) {};

   ~PythonQtShell_QObject();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QObject : public QObject
{ public:
inline void promoted_childEvent(QChildEvent*  arg__1) { QObject::childEvent(arg__1); }
inline void promoted_customEvent(QEvent*  arg__1) { QObject::customEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QObject::event(arg__1); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QObject::eventFilter(arg__1, arg__2); }
inline void promoted_timerEvent(QTimerEvent*  arg__1) { QObject::timerEvent(arg__1); }
};

class PythonQtWrapper_QObject : public QObject
{ Q_OBJECT
public:
public slots:
QObject* new_QObject(QObject*  parent = 0);
void delete_QObject(QObject* obj) { delete obj; } 
   bool  blockSignals(QObject* theWrappedObject, bool  b);
   void childEvent(QObject* theWrappedObject, QChildEvent*  arg__1);
   const QList<QObject* >*  children(QObject* theWrappedObject) const;
   void customEvent(QObject* theWrappedObject, QEvent*  arg__1);
   void dumpObjectInfo(QObject* theWrappedObject);
   void dumpObjectTree(QObject* theWrappedObject);
   QList<QByteArray >  dynamicPropertyNames(QObject* theWrappedObject) const;
   bool  event(QObject* theWrappedObject, QEvent*  arg__1);
   bool  eventFilter(QObject* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   void installEventFilter(QObject* theWrappedObject, QObject*  arg__1);
   bool  isWidgetType(QObject* theWrappedObject) const;
   void killTimer(QObject* theWrappedObject, int  id);
   void moveToThread(QObject* theWrappedObject, QThread*  thread);
   QString  objectName(QObject* theWrappedObject) const;
   void removeEventFilter(QObject* theWrappedObject, QObject*  arg__1);
   void setObjectName(QObject* theWrappedObject, const QString&  name);
   bool  signalsBlocked(QObject* theWrappedObject) const;
   int  startTimer(QObject* theWrappedObject, int  interval);
   QThread*  thread(QObject* theWrappedObject) const;
   void timerEvent(QObject* theWrappedObject, QTimerEvent*  arg__1);
};





class PythonQtShell_QParallelAnimationGroup : public QParallelAnimationGroup
{
public:
    PythonQtShell_QParallelAnimationGroup(QObject*  parent = 0):QParallelAnimationGroup(parent),_wrapper(NULL) {};

   ~PythonQtShell_QParallelAnimationGroup();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  duration() const;
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void updateCurrentTime(int  currentTime);
virtual void updateDirection(QAbstractAnimation::Direction  direction);
virtual void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QParallelAnimationGroup : public QParallelAnimationGroup
{ public:
inline int  promoted_duration() const { return QParallelAnimationGroup::duration(); }
inline bool  promoted_event(QEvent*  event) { return QParallelAnimationGroup::event(event); }
inline void promoted_updateCurrentTime(int  currentTime) { QParallelAnimationGroup::updateCurrentTime(currentTime); }
inline void promoted_updateDirection(QAbstractAnimation::Direction  direction) { QParallelAnimationGroup::updateDirection(direction); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QParallelAnimationGroup::updateState(newState, oldState); }
};

class PythonQtWrapper_QParallelAnimationGroup : public QObject
{ Q_OBJECT
public:
public slots:
QParallelAnimationGroup* new_QParallelAnimationGroup(QObject*  parent = 0);
void delete_QParallelAnimationGroup(QParallelAnimationGroup* obj) { delete obj; } 
   int  duration(QParallelAnimationGroup* theWrappedObject) const;
   bool  event(QParallelAnimationGroup* theWrappedObject, QEvent*  event);
   void updateCurrentTime(QParallelAnimationGroup* theWrappedObject, int  currentTime);
   void updateDirection(QParallelAnimationGroup* theWrappedObject, QAbstractAnimation::Direction  direction);
   void updateState(QParallelAnimationGroup* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);
};





class PythonQtShell_QPauseAnimation : public QPauseAnimation
{
public:
    PythonQtShell_QPauseAnimation(QObject*  parent = 0):QPauseAnimation(parent),_wrapper(NULL) {};
    PythonQtShell_QPauseAnimation(int  msecs, QObject*  parent = 0):QPauseAnimation(msecs, parent),_wrapper(NULL) {};

   ~PythonQtShell_QPauseAnimation();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  duration() const;
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void updateCurrentTime(int  arg__1);
virtual void updateDirection(QAbstractAnimation::Direction  direction);
virtual void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPauseAnimation : public QPauseAnimation
{ public:
inline int  promoted_duration() const { return QPauseAnimation::duration(); }
inline bool  promoted_event(QEvent*  e) { return QPauseAnimation::event(e); }
inline void promoted_updateCurrentTime(int  arg__1) { QPauseAnimation::updateCurrentTime(arg__1); }
};

class PythonQtWrapper_QPauseAnimation : public QObject
{ Q_OBJECT
public:
public slots:
QPauseAnimation* new_QPauseAnimation(QObject*  parent = 0);
QPauseAnimation* new_QPauseAnimation(int  msecs, QObject*  parent = 0);
void delete_QPauseAnimation(QPauseAnimation* obj) { delete obj; } 
   int  duration(QPauseAnimation* theWrappedObject) const;
   bool  event(QPauseAnimation* theWrappedObject, QEvent*  e);
   void setDuration(QPauseAnimation* theWrappedObject, int  msecs);
   void updateCurrentTime(QPauseAnimation* theWrappedObject, int  arg__1);
};





class PythonQtShell_QProcess : public QProcess
{
public:
    PythonQtShell_QProcess(QObject*  parent = 0):QProcess(parent),_wrapper(NULL) {};

   ~PythonQtShell_QProcess();

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void close();
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  mode);
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual bool  seek(qint64  pos);
virtual void setupChildProcess();
virtual qint64  size() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  waitForBytesWritten(int  msecs = 30000);
virtual bool  waitForReadyRead(int  msecs = 30000);
virtual qint64  writeData(const char*  data, qint64  len);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QProcess : public QProcess
{ public:
inline bool  promoted_atEnd() const { return QProcess::atEnd(); }
inline qint64  promoted_bytesAvailable() const { return QProcess::bytesAvailable(); }
inline qint64  promoted_bytesToWrite() const { return QProcess::bytesToWrite(); }
inline bool  promoted_canReadLine() const { return QProcess::canReadLine(); }
inline void promoted_close() { QProcess::close(); }
inline bool  promoted_isSequential() const { return QProcess::isSequential(); }
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return QProcess::readData(data, maxlen); }
inline void promoted_setupChildProcess() { QProcess::setupChildProcess(); }
inline bool  promoted_waitForBytesWritten(int  msecs = 30000) { return QProcess::waitForBytesWritten(msecs); }
inline bool  promoted_waitForReadyRead(int  msecs = 30000) { return QProcess::waitForReadyRead(msecs); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return QProcess::writeData(data, len); }
};

class PythonQtWrapper_QProcess : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ProcessError ProcessChannelMode ProcessChannel ProcessState ExitStatus )
enum ProcessError{
  FailedToStart = QProcess::FailedToStart,   Crashed = QProcess::Crashed,   Timedout = QProcess::Timedout,   ReadError = QProcess::ReadError,   WriteError = QProcess::WriteError,   UnknownError = QProcess::UnknownError};
enum ProcessChannelMode{
  SeparateChannels = QProcess::SeparateChannels,   MergedChannels = QProcess::MergedChannels,   ForwardedChannels = QProcess::ForwardedChannels};
enum ProcessChannel{
  StandardOutput = QProcess::StandardOutput,   StandardError = QProcess::StandardError};
enum ProcessState{
  NotRunning = QProcess::NotRunning,   Starting = QProcess::Starting,   Running = QProcess::Running};
enum ExitStatus{
  NormalExit = QProcess::NormalExit,   CrashExit = QProcess::CrashExit};
public slots:
QProcess* new_QProcess(QObject*  parent = 0);
void delete_QProcess(QProcess* obj) { delete obj; } 
   bool  atEnd(QProcess* theWrappedObject) const;
   qint64  bytesAvailable(QProcess* theWrappedObject) const;
   qint64  bytesToWrite(QProcess* theWrappedObject) const;
   bool  canReadLine(QProcess* theWrappedObject) const;
   void close(QProcess* theWrappedObject);
   void closeReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel);
   void closeWriteChannel(QProcess* theWrappedObject);
   QStringList  environment(QProcess* theWrappedObject) const;
   QProcess::ProcessError  error(QProcess* theWrappedObject) const;
   int  static_QProcess_execute(const QString&  program);
   int  static_QProcess_execute(const QString&  program, const QStringList&  arguments);
   int  exitCode(QProcess* theWrappedObject) const;
   QProcess::ExitStatus  exitStatus(QProcess* theWrappedObject) const;
   bool  isSequential(QProcess* theWrappedObject) const;
   QProcess::ProcessChannelMode  processChannelMode(QProcess* theWrappedObject) const;
   QProcessEnvironment  processEnvironment(QProcess* theWrappedObject) const;
   QByteArray  readAllStandardError(QProcess* theWrappedObject);
   QByteArray  readAllStandardOutput(QProcess* theWrappedObject);
   QProcess::ProcessChannel  readChannel(QProcess* theWrappedObject) const;
   qint64  readData(QProcess* theWrappedObject, char*  data, qint64  maxlen);
   void setEnvironment(QProcess* theWrappedObject, const QStringList&  environment);
   void setProcessChannelMode(QProcess* theWrappedObject, QProcess::ProcessChannelMode  mode);
   void setProcessEnvironment(QProcess* theWrappedObject, const QProcessEnvironment&  environment);
   void setReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel);
   void setStandardErrorFile(QProcess* theWrappedObject, const QString&  fileName, QIODevice::OpenMode  mode = QIODevice::Truncate);
   void setStandardInputFile(QProcess* theWrappedObject, const QString&  fileName);
   void setStandardOutputFile(QProcess* theWrappedObject, const QString&  fileName, QIODevice::OpenMode  mode = QIODevice::Truncate);
   void setStandardOutputProcess(QProcess* theWrappedObject, QProcess*  destination);
   void setWorkingDirectory(QProcess* theWrappedObject, const QString&  dir);
   void setupChildProcess(QProcess* theWrappedObject);
   void start(QProcess* theWrappedObject, const QString&  program, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   void start(QProcess* theWrappedObject, const QString&  program, const QStringList&  arguments, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   bool  static_QProcess_startDetached(const QString&  program);
   bool  static_QProcess_startDetached(const QString&  program, const QStringList&  arguments);
   bool  static_QProcess_startDetached(const QString&  program, const QStringList&  arguments, const QString&  workingDirectory, qint64*  pid = 0);
   QProcess::ProcessState  state(QProcess* theWrappedObject) const;
   QStringList  static_QProcess_systemEnvironment();
   bool  waitForBytesWritten(QProcess* theWrappedObject, int  msecs = 30000);
   bool  waitForFinished(QProcess* theWrappedObject, int  msecs = 30000);
   bool  waitForReadyRead(QProcess* theWrappedObject, int  msecs = 30000);
   bool  waitForStarted(QProcess* theWrappedObject, int  msecs = 30000);
   QString  workingDirectory(QProcess* theWrappedObject) const;
   qint64  writeData(QProcess* theWrappedObject, const char*  data, qint64  len);
};





class PythonQtWrapper_QProcessEnvironment : public QObject
{ Q_OBJECT
public:
public slots:
QProcessEnvironment* new_QProcessEnvironment();
QProcessEnvironment* new_QProcessEnvironment(const QProcessEnvironment&  other);
void delete_QProcessEnvironment(QProcessEnvironment* obj) { delete obj; } 
   void clear(QProcessEnvironment* theWrappedObject);
   bool  contains(QProcessEnvironment* theWrappedObject, const QString&  name) const;
   void insert(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  e);
   void insert(QProcessEnvironment* theWrappedObject, const QString&  name, const QString&  value);
   bool  isEmpty(QProcessEnvironment* theWrappedObject) const;
   QStringList  keys(QProcessEnvironment* theWrappedObject) const;
   bool  __ne__(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  other) const;
   QProcessEnvironment*  operator_assign(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  other);
   bool  __eq__(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  other) const;
   void remove(QProcessEnvironment* theWrappedObject, const QString&  name);
   QProcessEnvironment  static_QProcessEnvironment_systemEnvironment();
   QStringList  toStringList(QProcessEnvironment* theWrappedObject) const;
   QString  value(QProcessEnvironment* theWrappedObject, const QString&  name, const QString&  defaultValue = QString()) const;
};





class PythonQtShell_QPropertyAnimation : public QPropertyAnimation
{
public:
    PythonQtShell_QPropertyAnimation(QObject*  parent = 0):QPropertyAnimation(parent),_wrapper(NULL) {};
    PythonQtShell_QPropertyAnimation(QObject*  target, const QByteArray&  propertyName, QObject*  parent = 0):QPropertyAnimation(target, propertyName, parent),_wrapper(NULL) {};

   ~PythonQtShell_QPropertyAnimation();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  duration() const;
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QVariant  interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void updateCurrentTime(int  arg__1);
virtual void updateCurrentValue(const QVariant&  value);
virtual void updateDirection(QAbstractAnimation::Direction  direction);
virtual void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPropertyAnimation : public QPropertyAnimation
{ public:
inline bool  promoted_event(QEvent*  event) { return QPropertyAnimation::event(event); }
inline void promoted_updateCurrentValue(const QVariant&  value) { QPropertyAnimation::updateCurrentValue(value); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QPropertyAnimation::updateState(newState, oldState); }
};

class PythonQtWrapper_QPropertyAnimation : public QObject
{ Q_OBJECT
public:
public slots:
QPropertyAnimation* new_QPropertyAnimation(QObject*  parent = 0);
QPropertyAnimation* new_QPropertyAnimation(QObject*  target, const QByteArray&  propertyName, QObject*  parent = 0);
void delete_QPropertyAnimation(QPropertyAnimation* obj) { delete obj; } 
   bool  event(QPropertyAnimation* theWrappedObject, QEvent*  event);
   QByteArray  propertyName(QPropertyAnimation* theWrappedObject) const;
   void setPropertyName(QPropertyAnimation* theWrappedObject, const QByteArray&  propertyName);
   void setTargetObject(QPropertyAnimation* theWrappedObject, QObject*  target);
   QObject*  targetObject(QPropertyAnimation* theWrappedObject) const;
   void updateCurrentValue(QPropertyAnimation* theWrappedObject, const QVariant&  value);
   void updateState(QPropertyAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);
};





class PythonQtWrapper_QReadWriteLock : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RecursionMode )
enum RecursionMode{
  NonRecursive = QReadWriteLock::NonRecursive,   Recursive = QReadWriteLock::Recursive};
public slots:
QReadWriteLock* new_QReadWriteLock();
QReadWriteLock* new_QReadWriteLock(QReadWriteLock::RecursionMode  recursionMode);
void delete_QReadWriteLock(QReadWriteLock* obj) { delete obj; } 
   void lockForRead(QReadWriteLock* theWrappedObject);
   void lockForWrite(QReadWriteLock* theWrappedObject);
   bool  tryLockForRead(QReadWriteLock* theWrappedObject);
   bool  tryLockForRead(QReadWriteLock* theWrappedObject, int  timeout);
   bool  tryLockForWrite(QReadWriteLock* theWrappedObject);
   bool  tryLockForWrite(QReadWriteLock* theWrappedObject, int  timeout);
   void unlock(QReadWriteLock* theWrappedObject);
};





class PythonQtShell_QResource : public QResource
{
public:
    PythonQtShell_QResource(const QString&  file = QString(), const QLocale&  locale = QLocale()):QResource(file, locale),_wrapper(NULL) {};

   ~PythonQtShell_QResource();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QResource : public QObject
{ Q_OBJECT
public:
public slots:
QResource* new_QResource(const QString&  file = QString(), const QLocale&  locale = QLocale());
void delete_QResource(QResource* obj) { delete obj; } 
   QString  absoluteFilePath(QResource* theWrappedObject) const;
   void static_QResource_addSearchPath(const QString&  path);
   const uchar*  data(QResource* theWrappedObject) const;
   QString  fileName(QResource* theWrappedObject) const;
   bool  isCompressed(QResource* theWrappedObject) const;
   bool  isValid(QResource* theWrappedObject) const;
   QLocale  locale(QResource* theWrappedObject) const;
   bool  static_QResource_registerResource(const QString&  rccFilename, const QString&  resourceRoot = QString());
   bool  static_QResource_registerResource(const uchar*  rccData, const QString&  resourceRoot = QString());
   QStringList  static_QResource_searchPaths();
   void setFileName(QResource* theWrappedObject, const QString&  file);
   void setLocale(QResource* theWrappedObject, const QLocale&  locale);
   qint64  size(QResource* theWrappedObject) const;
   bool  static_QResource_unregisterResource(const QString&  rccFilename, const QString&  resourceRoot = QString());
   bool  static_QResource_unregisterResource(const uchar*  rccData, const QString&  resourceRoot = QString());
};





class PythonQtShell_QRunnable : public QRunnable
{
public:
    PythonQtShell_QRunnable():QRunnable(),_wrapper(NULL) {};

   ~PythonQtShell_QRunnable();

virtual void run();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QRunnable : public QObject
{ Q_OBJECT
public:
public slots:
QRunnable* new_QRunnable();
void delete_QRunnable(QRunnable* obj) { delete obj; } 
   bool  autoDelete(QRunnable* theWrappedObject) const;
   void setAutoDelete(QRunnable* theWrappedObject, bool  _autoDelete);
};





class PythonQtWrapper_QSemaphore : public QObject
{ Q_OBJECT
public:
public slots:
QSemaphore* new_QSemaphore(int  n = 0);
void delete_QSemaphore(QSemaphore* obj) { delete obj; } 
   void acquire(QSemaphore* theWrappedObject, int  n = 1);
   int  available(QSemaphore* theWrappedObject) const;
   void release(QSemaphore* theWrappedObject, int  n = 1);
   bool  tryAcquire(QSemaphore* theWrappedObject, int  n = 1);
   bool  tryAcquire(QSemaphore* theWrappedObject, int  n, int  timeout);
};





class PythonQtShell_QSequentialAnimationGroup : public QSequentialAnimationGroup
{
public:
    PythonQtShell_QSequentialAnimationGroup(QObject*  parent = 0):QSequentialAnimationGroup(parent),_wrapper(NULL) {};

   ~PythonQtShell_QSequentialAnimationGroup();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  duration() const;
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void updateCurrentTime(int  arg__1);
virtual void updateDirection(QAbstractAnimation::Direction  direction);
virtual void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSequentialAnimationGroup : public QSequentialAnimationGroup
{ public:
inline int  promoted_duration() const { return QSequentialAnimationGroup::duration(); }
inline bool  promoted_event(QEvent*  event) { return QSequentialAnimationGroup::event(event); }
inline void promoted_updateCurrentTime(int  arg__1) { QSequentialAnimationGroup::updateCurrentTime(arg__1); }
inline void promoted_updateDirection(QAbstractAnimation::Direction  direction) { QSequentialAnimationGroup::updateDirection(direction); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QSequentialAnimationGroup::updateState(newState, oldState); }
};

class PythonQtWrapper_QSequentialAnimationGroup : public QObject
{ Q_OBJECT
public:
public slots:
QSequentialAnimationGroup* new_QSequentialAnimationGroup(QObject*  parent = 0);
void delete_QSequentialAnimationGroup(QSequentialAnimationGroup* obj) { delete obj; } 
   QPauseAnimation*  addPause(QSequentialAnimationGroup* theWrappedObject, int  msecs);
   QAbstractAnimation*  currentAnimation(QSequentialAnimationGroup* theWrappedObject) const;
   int  duration(QSequentialAnimationGroup* theWrappedObject) const;
   bool  event(QSequentialAnimationGroup* theWrappedObject, QEvent*  event);
   QPauseAnimation*  insertPause(QSequentialAnimationGroup* theWrappedObject, int  index, int  msecs);
   void updateCurrentTime(QSequentialAnimationGroup* theWrappedObject, int  arg__1);
   void updateDirection(QSequentialAnimationGroup* theWrappedObject, QAbstractAnimation::Direction  direction);
   void updateState(QSequentialAnimationGroup* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);
};





class PythonQtShell_QSettings : public QSettings
{
public:
    PythonQtShell_QSettings(QObject*  parent = 0):QSettings(parent),_wrapper(NULL) {};
    PythonQtShell_QSettings(QSettings::Format  format, QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = 0):QSettings(format, scope, organization, application, parent),_wrapper(NULL) {};
    PythonQtShell_QSettings(QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = 0):QSettings(scope, organization, application, parent),_wrapper(NULL) {};
    PythonQtShell_QSettings(const QString&  fileName, QSettings::Format  format, QObject*  parent = 0):QSettings(fileName, format, parent),_wrapper(NULL) {};
    PythonQtShell_QSettings(const QString&  organization, const QString&  application = QString(), QObject*  parent = 0):QSettings(organization, application, parent),_wrapper(NULL) {};

   ~PythonQtShell_QSettings();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSettings : public QSettings
{ public:
inline bool  promoted_event(QEvent*  event) { return QSettings::event(event); }
};

class PythonQtWrapper_QSettings : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Format Status Scope )
enum Format{
  NativeFormat = QSettings::NativeFormat,   IniFormat = QSettings::IniFormat,   InvalidFormat = QSettings::InvalidFormat,   CustomFormat1 = QSettings::CustomFormat1,   CustomFormat2 = QSettings::CustomFormat2,   CustomFormat3 = QSettings::CustomFormat3,   CustomFormat4 = QSettings::CustomFormat4,   CustomFormat5 = QSettings::CustomFormat5,   CustomFormat6 = QSettings::CustomFormat6,   CustomFormat7 = QSettings::CustomFormat7,   CustomFormat8 = QSettings::CustomFormat8,   CustomFormat9 = QSettings::CustomFormat9,   CustomFormat10 = QSettings::CustomFormat10,   CustomFormat11 = QSettings::CustomFormat11,   CustomFormat12 = QSettings::CustomFormat12,   CustomFormat13 = QSettings::CustomFormat13,   CustomFormat14 = QSettings::CustomFormat14,   CustomFormat15 = QSettings::CustomFormat15,   CustomFormat16 = QSettings::CustomFormat16};
enum Status{
  NoError = QSettings::NoError,   AccessError = QSettings::AccessError,   FormatError = QSettings::FormatError};
enum Scope{
  UserScope = QSettings::UserScope,   SystemScope = QSettings::SystemScope};
public slots:
QSettings* new_QSettings(QObject*  parent = 0);
QSettings* new_QSettings(QSettings::Format  format, QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = 0);
QSettings* new_QSettings(QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = 0);
QSettings* new_QSettings(const QString&  fileName, QSettings::Format  format, QObject*  parent = 0);
QSettings* new_QSettings(const QString&  organization, const QString&  application = QString(), QObject*  parent = 0);
void delete_QSettings(QSettings* obj) { delete obj; } 
   QStringList  allKeys(QSettings* theWrappedObject) const;
   QString  applicationName(QSettings* theWrappedObject) const;
   void beginGroup(QSettings* theWrappedObject, const QString&  prefix);
   int  beginReadArray(QSettings* theWrappedObject, const QString&  prefix);
   void beginWriteArray(QSettings* theWrappedObject, const QString&  prefix, int  size = -1);
   QStringList  childGroups(QSettings* theWrappedObject) const;
   QStringList  childKeys(QSettings* theWrappedObject) const;
   void clear(QSettings* theWrappedObject);
   bool  contains(QSettings* theWrappedObject, const QString&  key) const;
   QSettings::Format  static_QSettings_defaultFormat();
   void endArray(QSettings* theWrappedObject);
   void endGroup(QSettings* theWrappedObject);
   bool  event(QSettings* theWrappedObject, QEvent*  event);
   bool  fallbacksEnabled(QSettings* theWrappedObject) const;
   QString  fileName(QSettings* theWrappedObject) const;
   QSettings::Format  format(QSettings* theWrappedObject) const;
   QString  group(QSettings* theWrappedObject) const;
   QTextCodec*  iniCodec(QSettings* theWrappedObject) const;
   bool  isWritable(QSettings* theWrappedObject) const;
   QString  organizationName(QSettings* theWrappedObject) const;
   void remove(QSettings* theWrappedObject, const QString&  key);
   QSettings::Scope  scope(QSettings* theWrappedObject) const;
   void setArrayIndex(QSettings* theWrappedObject, int  i);
   void static_QSettings_setDefaultFormat(QSettings::Format  format);
   void setFallbacksEnabled(QSettings* theWrappedObject, bool  b);
   void setIniCodec(QSettings* theWrappedObject, QTextCodec*  codec);
   void setIniCodec(QSettings* theWrappedObject, const char*  codecName);
   void static_QSettings_setPath(QSettings::Format  format, QSettings::Scope  scope, const QString&  path);
   void setValue(QSettings* theWrappedObject, const QString&  key, const QVariant&  value);
   QSettings::Status  status(QSettings* theWrappedObject) const;
   void sync(QSettings* theWrappedObject);
   QVariant  value(QSettings* theWrappedObject, const QString&  key, const QVariant&  defaultValue = QVariant()) const;
};





class PythonQtShell_QSharedMemory : public QSharedMemory
{
public:
    PythonQtShell_QSharedMemory(QObject*  parent = 0):QSharedMemory(parent),_wrapper(NULL) {};
    PythonQtShell_QSharedMemory(const QString&  key, QObject*  parent = 0):QSharedMemory(key, parent),_wrapper(NULL) {};

   ~PythonQtShell_QSharedMemory();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSharedMemory : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SharedMemoryError AccessMode )
enum SharedMemoryError{
  NoError = QSharedMemory::NoError,   PermissionDenied = QSharedMemory::PermissionDenied,   InvalidSize = QSharedMemory::InvalidSize,   KeyError = QSharedMemory::KeyError,   AlreadyExists = QSharedMemory::AlreadyExists,   NotFound = QSharedMemory::NotFound,   LockError = QSharedMemory::LockError,   OutOfResources = QSharedMemory::OutOfResources,   UnknownError = QSharedMemory::UnknownError};
enum AccessMode{
  ReadOnly = QSharedMemory::ReadOnly,   ReadWrite = QSharedMemory::ReadWrite};
public slots:
QSharedMemory* new_QSharedMemory(QObject*  parent = 0);
QSharedMemory* new_QSharedMemory(const QString&  key, QObject*  parent = 0);
void delete_QSharedMemory(QSharedMemory* obj) { delete obj; } 
   bool  attach(QSharedMemory* theWrappedObject, QSharedMemory::AccessMode  mode = QSharedMemory::ReadWrite);
   const void*  constData(QSharedMemory* theWrappedObject) const;
   bool  create(QSharedMemory* theWrappedObject, int  size, QSharedMemory::AccessMode  mode = QSharedMemory::ReadWrite);
   void*  data(QSharedMemory* theWrappedObject);
   const void*  data(QSharedMemory* theWrappedObject) const;
   QSharedMemory::SharedMemoryError  error(QSharedMemory* theWrappedObject) const;
   QString  errorString(QSharedMemory* theWrappedObject) const;
   bool  isAttached(QSharedMemory* theWrappedObject) const;
   QString  key(QSharedMemory* theWrappedObject) const;
   bool  lock(QSharedMemory* theWrappedObject);
   QString  nativeKey(QSharedMemory* theWrappedObject) const;
   void setKey(QSharedMemory* theWrappedObject, const QString&  key);
   void setNativeKey(QSharedMemory* theWrappedObject, const QString&  key);
   int  size(QSharedMemory* theWrappedObject) const;
   bool  unlock(QSharedMemory* theWrappedObject);
};





class PythonQtShell_QSignalMapper : public QSignalMapper
{
public:
    PythonQtShell_QSignalMapper(QObject*  parent = 0):QSignalMapper(parent),_wrapper(NULL) {};

   ~PythonQtShell_QSignalMapper();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSignalMapper : public QObject
{ Q_OBJECT
public:
public slots:
QSignalMapper* new_QSignalMapper(QObject*  parent = 0);
void delete_QSignalMapper(QSignalMapper* obj) { delete obj; } 
   QObject*  mapping(QSignalMapper* theWrappedObject, QObject*  object) const;
   QObject*  mapping(QSignalMapper* theWrappedObject, const QString&  text) const;
   QObject*  mapping(QSignalMapper* theWrappedObject, int  id) const;
   void removeMappings(QSignalMapper* theWrappedObject, QObject*  sender);
   void setMapping(QSignalMapper* theWrappedObject, QObject*  sender, QObject*  object);
   void setMapping(QSignalMapper* theWrappedObject, QObject*  sender, const QString&  text);
   void setMapping(QSignalMapper* theWrappedObject, QObject*  sender, int  id);
};





class PythonQtShell_QSignalTransition : public QSignalTransition
{
public:
    PythonQtShell_QSignalTransition(QObject*  sender, const char*  signal, QState*  sourceState = 0):QSignalTransition(sender, signal, sourceState),_wrapper(NULL) {};
    PythonQtShell_QSignalTransition(QState*  sourceState = 0):QSignalTransition(sourceState),_wrapper(NULL) {};

   ~PythonQtShell_QSignalTransition();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  eventTest(QEvent*  event);
virtual void onTransition(QEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSignalTransition : public QSignalTransition
{ public:
inline bool  promoted_event(QEvent*  e) { return QSignalTransition::event(e); }
inline bool  promoted_eventTest(QEvent*  event) { return QSignalTransition::eventTest(event); }
inline void promoted_onTransition(QEvent*  event) { QSignalTransition::onTransition(event); }
};

class PythonQtWrapper_QSignalTransition : public QObject
{ Q_OBJECT
public:
public slots:
QSignalTransition* new_QSignalTransition(QObject*  sender, const char*  signal, QState*  sourceState = 0);
QSignalTransition* new_QSignalTransition(QState*  sourceState = 0);
void delete_QSignalTransition(QSignalTransition* obj) { delete obj; } 
   bool  event(QSignalTransition* theWrappedObject, QEvent*  e);
   bool  eventTest(QSignalTransition* theWrappedObject, QEvent*  event);
   void onTransition(QSignalTransition* theWrappedObject, QEvent*  event);
   QObject*  senderObject(QSignalTransition* theWrappedObject) const;
   void setSenderObject(QSignalTransition* theWrappedObject, QObject*  sender);
   void setSignal(QSignalTransition* theWrappedObject, const QByteArray&  signal);
   QByteArray  signal(QSignalTransition* theWrappedObject) const;
};





class PythonQtShell_QSocketNotifier : public QSocketNotifier
{
public:
    PythonQtShell_QSocketNotifier(int  socket, QSocketNotifier::Type  arg__2, QObject*  parent = 0):QSocketNotifier(socket, arg__2, parent),_wrapper(NULL) {};

   ~PythonQtShell_QSocketNotifier();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSocketNotifier : public QSocketNotifier
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return QSocketNotifier::event(arg__1); }
};

class PythonQtWrapper_QSocketNotifier : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  Read = QSocketNotifier::Read,   Write = QSocketNotifier::Write,   Exception = QSocketNotifier::Exception};
public slots:
QSocketNotifier* new_QSocketNotifier(int  socket, QSocketNotifier::Type  arg__2, QObject*  parent = 0);
void delete_QSocketNotifier(QSocketNotifier* obj) { delete obj; } 
   bool  event(QSocketNotifier* theWrappedObject, QEvent*  arg__1);
   bool  isEnabled(QSocketNotifier* theWrappedObject) const;
   int  socket(QSocketNotifier* theWrappedObject) const;
   QSocketNotifier::Type  type(QSocketNotifier* theWrappedObject) const;
};





class PythonQtShell_QState : public QState
{
public:
    PythonQtShell_QState(QState*  parent = 0):QState(parent),_wrapper(NULL) {};
    PythonQtShell_QState(QState::ChildMode  childMode, QState*  parent = 0):QState(childMode, parent),_wrapper(NULL) {};

   ~PythonQtShell_QState();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void onEntry(QEvent*  event);
virtual void onExit(QEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QState : public QState
{ public:
inline bool  promoted_event(QEvent*  e) { return QState::event(e); }
inline void promoted_onEntry(QEvent*  event) { QState::onEntry(event); }
inline void promoted_onExit(QEvent*  event) { QState::onExit(event); }
};

class PythonQtWrapper_QState : public QObject
{ Q_OBJECT
public:
public slots:
QState* new_QState(QState*  parent = 0);
QState* new_QState(QState::ChildMode  childMode, QState*  parent = 0);
void delete_QState(QState* obj) { delete obj; } 
   QAbstractTransition*  addTransition(QState* theWrappedObject, QAbstractState*  target);
   void addTransition(QState* theWrappedObject, QAbstractTransition*  transition);
   QSignalTransition*  addTransition(QState* theWrappedObject, QObject*  sender, const char*  signal, QAbstractState*  target);
   void assignProperty(QState* theWrappedObject, QObject*  object, const char*  name, const QVariant&  value);
   QState::ChildMode  childMode(QState* theWrappedObject) const;
   QAbstractState*  errorState(QState* theWrappedObject) const;
   bool  event(QState* theWrappedObject, QEvent*  e);
   QAbstractState*  initialState(QState* theWrappedObject) const;
   void onEntry(QState* theWrappedObject, QEvent*  event);
   void onExit(QState* theWrappedObject, QEvent*  event);
   void removeTransition(QState* theWrappedObject, QAbstractTransition*  transition);
   void setChildMode(QState* theWrappedObject, QState::ChildMode  mode);
   void setErrorState(QState* theWrappedObject, QAbstractState*  state);
   void setInitialState(QState* theWrappedObject, QAbstractState*  state);
   QList<QAbstractTransition* >  transitions(QState* theWrappedObject) const;
};





class PythonQtShell_QStateMachine : public QStateMachine
{
public:
    PythonQtShell_QStateMachine(QObject*  parent = 0):QStateMachine(parent),_wrapper(NULL) {};

   ~PythonQtShell_QStateMachine();

virtual void beginMicrostep(QEvent*  event);
virtual void beginSelectTransitions(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void endMicrostep(QEvent*  event);
virtual void endSelectTransitions(QEvent*  event);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void onEntry(QEvent*  event);
virtual void onExit(QEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QStateMachine : public QStateMachine
{ public:
inline void promoted_beginMicrostep(QEvent*  event) { QStateMachine::beginMicrostep(event); }
inline void promoted_beginSelectTransitions(QEvent*  event) { QStateMachine::beginSelectTransitions(event); }
inline void promoted_endMicrostep(QEvent*  event) { QStateMachine::endMicrostep(event); }
inline void promoted_endSelectTransitions(QEvent*  event) { QStateMachine::endSelectTransitions(event); }
inline bool  promoted_event(QEvent*  e) { return QStateMachine::event(e); }
inline bool  promoted_eventFilter(QObject*  watched, QEvent*  event) { return QStateMachine::eventFilter(watched, event); }
inline void promoted_onEntry(QEvent*  event) { QStateMachine::onEntry(event); }
inline void promoted_onExit(QEvent*  event) { QStateMachine::onExit(event); }
};

class PythonQtWrapper_QStateMachine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Error EventPriority )
enum Error{
  NoError = QStateMachine::NoError,   NoInitialStateError = QStateMachine::NoInitialStateError,   NoDefaultStateInHistoryStateError = QStateMachine::NoDefaultStateInHistoryStateError,   NoCommonAncestorForTransitionError = QStateMachine::NoCommonAncestorForTransitionError};
enum EventPriority{
  NormalPriority = QStateMachine::NormalPriority,   HighPriority = QStateMachine::HighPriority};
public slots:
QStateMachine* new_QStateMachine(QObject*  parent = 0);
void delete_QStateMachine(QStateMachine* obj) { delete obj; } 
   void addDefaultAnimation(QStateMachine* theWrappedObject, QAbstractAnimation*  animation);
   void addState(QStateMachine* theWrappedObject, QAbstractState*  state);
   void beginMicrostep(QStateMachine* theWrappedObject, QEvent*  event);
   void beginSelectTransitions(QStateMachine* theWrappedObject, QEvent*  event);
   bool  cancelDelayedEvent(QStateMachine* theWrappedObject, int  id);
   void clearError(QStateMachine* theWrappedObject);
   QSet<QAbstractState* >  configuration(QStateMachine* theWrappedObject) const;
   QList<QAbstractAnimation* >  defaultAnimations(QStateMachine* theWrappedObject) const;
   void endMicrostep(QStateMachine* theWrappedObject, QEvent*  event);
   void endSelectTransitions(QStateMachine* theWrappedObject, QEvent*  event);
   QStateMachine::Error  error(QStateMachine* theWrappedObject) const;
   QString  errorString(QStateMachine* theWrappedObject) const;
   bool  event(QStateMachine* theWrappedObject, QEvent*  e);
   bool  eventFilter(QStateMachine* theWrappedObject, QObject*  watched, QEvent*  event);
   QStateMachine::RestorePolicy  globalRestorePolicy(QStateMachine* theWrappedObject) const;
   bool  isAnimated(QStateMachine* theWrappedObject) const;
   bool  isRunning(QStateMachine* theWrappedObject) const;
   void onEntry(QStateMachine* theWrappedObject, QEvent*  event);
   void onExit(QStateMachine* theWrappedObject, QEvent*  event);
   int  postDelayedEvent(QStateMachine* theWrappedObject, QEvent*  event, int  delay);
   void postEvent(QStateMachine* theWrappedObject, QEvent*  event, QStateMachine::EventPriority  priority = QStateMachine::NormalPriority);
   void removeDefaultAnimation(QStateMachine* theWrappedObject, QAbstractAnimation*  animation);
   void removeState(QStateMachine* theWrappedObject, QAbstractState*  state);
   void setAnimated(QStateMachine* theWrappedObject, bool  enabled);
   void setGlobalRestorePolicy(QStateMachine* theWrappedObject, QStateMachine::RestorePolicy  restorePolicy);
};





class PythonQtWrapper_QStateMachine_SignalEvent : public QObject
{ Q_OBJECT
public:
public slots:
QStateMachine::SignalEvent* new_QStateMachine_SignalEvent(QObject*  sender, int  signalIndex, const QList<QVariant >&  arguments);
void delete_QStateMachine_SignalEvent(QStateMachine::SignalEvent* obj) { delete obj; } 
   QList<QVariant >  arguments(QStateMachine::SignalEvent* theWrappedObject) const;
   QObject*  sender(QStateMachine::SignalEvent* theWrappedObject) const;
   int  signalIndex(QStateMachine::SignalEvent* theWrappedObject) const;
};





class PythonQtWrapper_QStateMachine_WrappedEvent : public QObject
{ Q_OBJECT
public:
public slots:
QStateMachine::WrappedEvent* new_QStateMachine_WrappedEvent(QObject*  object, QEvent*  event);
void delete_QStateMachine_WrappedEvent(QStateMachine::WrappedEvent* obj) { delete obj; } 
   QEvent*  event(QStateMachine::WrappedEvent* theWrappedObject) const;
   QObject*  object(QStateMachine::WrappedEvent* theWrappedObject) const;
};





class PythonQtWrapper_QStringMatcher : public QObject
{ Q_OBJECT
public:
public slots:
QStringMatcher* new_QStringMatcher();
QStringMatcher* new_QStringMatcher(const QString&  pattern, Qt::CaseSensitivity  cs = Qt::CaseSensitive);
QStringMatcher* new_QStringMatcher(const QStringMatcher&  other);
void delete_QStringMatcher(QStringMatcher* obj) { delete obj; } 
   Qt::CaseSensitivity  caseSensitivity(QStringMatcher* theWrappedObject) const;
   int  indexIn(QStringMatcher* theWrappedObject, const QString&  str, int  from = 0) const;
   QString  pattern(QStringMatcher* theWrappedObject) const;
   void setCaseSensitivity(QStringMatcher* theWrappedObject, Qt::CaseSensitivity  cs);
   void setPattern(QStringMatcher* theWrappedObject, const QString&  pattern);
};





class PythonQtShell_QSysInfo : public QSysInfo
{
public:
    PythonQtShell_QSysInfo():QSysInfo(),_wrapper(NULL) {};

   ~PythonQtShell_QSysInfo();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSysInfo : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Endian Sizes )
enum Endian{
  BigEndian = QSysInfo::BigEndian,   LittleEndian = QSysInfo::LittleEndian,   ByteOrder = QSysInfo::ByteOrder};
enum Sizes{
  WordSize = QSysInfo::WordSize};
public slots:
QSysInfo* new_QSysInfo();
void delete_QSysInfo(QSysInfo* obj) { delete obj; } 
};


