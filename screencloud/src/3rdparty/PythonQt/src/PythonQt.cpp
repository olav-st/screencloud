/*
*
*  Copyright (C) 2010 MeVis Medical Solutions AG All Rights Reserved.
*
*  This library is free software; you can redistribute it and/or
*  modify it under the terms of the GNU Lesser General Public
*  License as published by the Free Software Foundation; either
*  version 2.1 of the License, or (at your option) any later version.
*
*  This library is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
*  Lesser General Public License for more details.
*
*  Further, this software is distributed without any warranty that it is
*  free of the rightful claim of any third person regarding infringement
*  or the like.  Any license provided herein, whether implied or
*  otherwise, applies only to this software file.  Patent licenses, if
*  any, provided herein do not apply to combinations of this program with
*  other software, or any other product whatsoever.
*
*  You should have received a copy of the GNU Lesser General Public
*  License along with this library; if not, write to the Free Software
*  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*
*  Contact information: MeVis Medical Solutions AG, Universitaetsallee 29,
*  28359 Bremen, Germany or:
*
*  http://www.mevis.de
*
*/

//----------------------------------------------------------------------------------
/*!
// \file    PythonQt.cpp
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQt.h"
#include "PythonQtImporter.h"
#include "PythonQtClassInfo.h"
#include "PythonQtMethodInfo.h"
#include "PythonQtSignal.h"
#include "PythonQtSignalReceiver.h"
#include "PythonQtConversion.h"
#include "PythonQtStdIn.h"
#include "PythonQtStdOut.h"
#include "PythonQtCppWrapperFactory.h"
#include "PythonQtVariants.h"
#include "PythonQtStdDecorators.h"
#include "PythonQtQFileImporter.h"
#include <pydebug.h>
#include <vector>

PythonQt* PythonQt::_self = NULL;
int       PythonQt::_uniqueModuleCount = 0;

void PythonQt_init_QtGuiBuiltin(PyObject*);
void PythonQt_init_QtCoreBuiltin(PyObject*);


PyObject* PythonQtConvertFromStringRef(const void* inObject, int /*metaTypeId*/)
{
  return PythonQtConv::QStringToPyObject(((QStringRef*)inObject)->toString());
}

void PythonQt::init(int flags, const QByteArray& pythonQtModuleName)
{
  if (!_self) {
    _self = new PythonQt(flags, pythonQtModuleName);
    
    PythonQt::priv()->setupSharedLibrarySuffixes();

    PythonQtMethodInfo::addParameterTypeAlias("QObjectList", "QList<QObject*>");
    qRegisterMetaType<QList<QObject*> >("QList<void*>");

    int stringRefId = qRegisterMetaType<QStringRef>("QStringRef");
    PythonQtConv::registerMetaTypeToPythonConverter(stringRefId, PythonQtConvertFromStringRef);

    PythonQtRegisterToolClassesTemplateConverter(int);
    PythonQtRegisterToolClassesTemplateConverter(float);
    PythonQtRegisterToolClassesTemplateConverter(double);
    PythonQtRegisterToolClassesTemplateConverter(qint32);
    PythonQtRegisterToolClassesTemplateConverter(quint32);
    PythonQtRegisterToolClassesTemplateConverter(qint64);
    PythonQtRegisterToolClassesTemplateConverter(quint64);
    // TODO: which other POD types should be available for QList etc.

    PythonQt_init_QtCoreBuiltin(NULL);
    PythonQt_init_QtGuiBuiltin(NULL);

    PythonQt::self()->addDecorators(new PythonQtStdDecorators());
    PythonQt::self()->registerCPPClass("QMetaObject",0, "QtCore", PythonQtCreateObject<PythonQtWrapper_QMetaObject>);

    PythonQtRegisterToolClassesTemplateConverter(QByteArray);
    PythonQtRegisterToolClassesTemplateConverter(QDate);
    PythonQtRegisterToolClassesTemplateConverter(QTime);
    PythonQtRegisterToolClassesTemplateConverter(QDateTime);
    PythonQtRegisterToolClassesTemplateConverter(QUrl);
    PythonQtRegisterToolClassesTemplateConverter(QLocale);
    PythonQtRegisterToolClassesTemplateConverter(QRect);
    PythonQtRegisterToolClassesTemplateConverter(QRectF);
    PythonQtRegisterToolClassesTemplateConverter(QSize);
    PythonQtRegisterToolClassesTemplateConverter(QSizeF);
    PythonQtRegisterToolClassesTemplateConverter(QLine);
    PythonQtRegisterToolClassesTemplateConverter(QLineF);
    PythonQtRegisterToolClassesTemplateConverter(QPoint);
    PythonQtRegisterToolClassesTemplateConverter(QPointF);
    PythonQtRegisterToolClassesTemplateConverter(QRegExp);

    PythonQtRegisterToolClassesTemplateConverter(QFont);
    PythonQtRegisterToolClassesTemplateConverter(QPixmap);
    PythonQtRegisterToolClassesTemplateConverter(QBrush);
    PythonQtRegisterToolClassesTemplateConverter(QColor);
    PythonQtRegisterToolClassesTemplateConverter(QPalette);
    PythonQtRegisterToolClassesTemplateConverter(QIcon);
    PythonQtRegisterToolClassesTemplateConverter(QImage);
    PythonQtRegisterToolClassesTemplateConverter(QPolygon);
    PythonQtRegisterToolClassesTemplateConverter(QRegion);
    PythonQtRegisterToolClassesTemplateConverter(QBitmap);
    PythonQtRegisterToolClassesTemplateConverter(QCursor);
    PythonQtRegisterToolClassesTemplateConverter(QSizePolicy);
    PythonQtRegisterToolClassesTemplateConverter(QKeySequence);
    PythonQtRegisterToolClassesTemplateConverter(QPen);
    PythonQtRegisterToolClassesTemplateConverter(QTextLength);
    PythonQtRegisterToolClassesTemplateConverter(QTextFormat);
    PythonQtRegisterToolClassesTemplateConverter(QMatrix);


    PyObject* pack = PythonQt::priv()->packageByName("QtCore");
    PyObject* pack2 = PythonQt::priv()->packageByName("Qt");
    PyObject* qtNamespace = PythonQt::priv()->getClassInfo("Qt")->pythonQtClassWrapper();
    const char* names[16] = {"SIGNAL", "SLOT", "qAbs", "qBound","qDebug","qWarning","qCritical","qFatal"
                        ,"qFuzzyCompare", "qMax","qMin","qRound","qRound64","qVersion","qrand","qsrand"};
    for (unsigned int i = 0;i<16; i++) {
      PyObject* obj = PyObject_GetAttrString(qtNamespace, names[i]);
      if (obj) {
        PyModule_AddObject(pack, names[i], obj);
        Py_INCREF(obj);
        PyModule_AddObject(pack2, names[i], obj);
      } else {
        std::cerr << "method not found " << names[i];
      }
    }
  }
}

void PythonQt::cleanup()
{
  if (_self) {
    delete _self;
    _self = NULL;
  }
}

PythonQt* PythonQt::self() { return _self; }

PythonQt::PythonQt(int flags, const QByteArray& pythonQtModuleName)
{
  _p = new PythonQtPrivate;
  _p->_initFlags = flags;

  _p->_PythonQtObjectPtr_metaId = qRegisterMetaType<PythonQtObjectPtr>("PythonQtObjectPtr");

  if ((flags & PythonAlreadyInitialized) == 0) {
    Py_SetProgramName(const_cast<char*>("PythonQt"));
    if (flags & IgnoreSiteModule) {
      // this prevents the automatic importing of Python site files
      Py_NoSiteFlag = 1;
    }
    Py_Initialize();
  }

  // add our own python object types for qt object slots
  if (PyType_Ready(&PythonQtSlotFunction_Type) < 0) {
    std::cerr << "could not initialize PythonQtSlotFunction_Type" << ", in " << __FILE__ << ":" << __LINE__ << std::endl;
  }
  Py_INCREF(&PythonQtSlotFunction_Type);

  if (PyType_Ready(&PythonQtSignalFunction_Type) < 0) {
    std::cerr << "could not initialize PythonQtSignalFunction_Type" << ", in " << __FILE__ << ":" << __LINE__ << std::endl;
  }
  Py_INCREF(&PythonQtSignalFunction_Type);

  // according to Python docs, set the type late here, since it can not safely be stored in the struct when declaring it
  PythonQtClassWrapper_Type.tp_base = &PyType_Type;
  // add our own python object types for classes
  if (PyType_Ready(&PythonQtClassWrapper_Type) < 0) {
    std::cerr << "could not initialize PythonQtClassWrapper_Type" << ", in " << __FILE__ << ":" << __LINE__ << std::endl;
  }
  Py_INCREF(&PythonQtClassWrapper_Type);

  // add our own python object types for CPP instances
  if (PyType_Ready(&PythonQtInstanceWrapper_Type) < 0) {
    PythonQt::handleError();
    std::cerr << "could not initialize PythonQtInstanceWrapper_Type" << ", in " << __FILE__ << ":" << __LINE__ << std::endl;
  }
  Py_INCREF(&PythonQtInstanceWrapper_Type);

  // add our own python object types for redirection of stdout
  if (PyType_Ready(&PythonQtStdOutRedirectType) < 0) {
    std::cerr << "could not initialize PythonQtStdOutRedirectType" << ", in " << __FILE__ << ":" << __LINE__ << std::endl;
  }
  Py_INCREF(&PythonQtStdOutRedirectType);

  // add our own python object types for redirection of stdin
  if (PyType_Ready(&PythonQtStdInRedirectType) < 0) {
    std::cerr << "could not initialize PythonQtStdInRedirectType" << ", in " << __FILE__ << ":" << __LINE__ << std::endl;
  }
  Py_INCREF(&PythonQtStdInRedirectType);

  initPythonQtModule(flags & RedirectStdOut, pythonQtModuleName);

}

PythonQt::~PythonQt() {
  delete _p;
  _p = NULL;
}

PythonQtPrivate::~PythonQtPrivate() {
  delete _defaultImporter;
  _defaultImporter = NULL;

  {
    QHashIterator<QByteArray, PythonQtClassInfo *> i(_knownClassInfos);
    while (i.hasNext()) {
      delete i.next().value();
    }
  }
  PythonQtConv::global_valueStorage.clear();
  PythonQtConv::global_ptrStorage.clear();
  PythonQtConv::global_variantStorage.clear();

  PythonQtMethodInfo::cleanupCachedMethodInfos();
}

void PythonQt::setRedirectStdInCallback(PythonQtInputChangedCB* callback, void * callbackData)
{
  if (!callback)
    {
    std::cerr << "PythonQt::setRedirectStdInCallback - callback parameter is NULL !" << std::endl;
    return;
    }

  PythonQtObjectPtr sys;
  PythonQtObjectPtr in;
  sys.setNewRef(PyImport_ImportModule("sys"));

  // Backup original 'sys.stdin' if not yet done
  PyRun_SimpleString("if not hasattr(sys, 'pythonqt_original_stdin'):"
                     "sys.pythonqt_original_stdin = sys.stdin");

  in = PythonQtStdInRedirectType.tp_new(&PythonQtStdInRedirectType, NULL, NULL);
  ((PythonQtStdInRedirect*)in.object())->_cb = callback;
  ((PythonQtStdInRedirect*)in.object())->_callData = callbackData;
  // replace the built in file objects with our own objects
  PyModule_AddObject(sys, "stdin", in);

  // Backup custom 'stdin' into 'pythonqt_stdin'
  PyRun_SimpleString("sys.pythonqt_stdin = sys.stdin");
}

void PythonQt::setRedirectStdInCallbackEnabled(bool enabled)
{
  if (enabled)
    {
    PyRun_SimpleString("if hasattr(sys, 'pythonqt_stdin'):"
                       "sys.stdin = sys.pythonqt_stdin");
    }
  else
    {
    PyRun_SimpleString("if hasattr(sys,'pythonqt_original_stdin'):"
                       "sys.stdin = sys.pythonqt_original_stdin");
    }
}

PythonQtImportFileInterface* PythonQt::importInterface()
{
  return _self->_p->_importInterface?_self->_p->_importInterface:_self->_p->_defaultImporter;
}

void PythonQt::qObjectNoLongerWrappedCB(QObject* o)
{
  if (_self->_p->_noLongerWrappedCB) {
    (*_self->_p->_noLongerWrappedCB)(o);
  };
}

void PythonQt::registerClass(const QMetaObject* metaobject, const char* package, PythonQtQObjectCreatorFunctionCB* wrapperCreator, PythonQtShellSetInstanceWrapperCB* shell)
{
  _p->registerClass(metaobject, package, wrapperCreator, shell);
}

void PythonQtPrivate::registerClass(const QMetaObject* metaobject, const char* package, PythonQtQObjectCreatorFunctionCB* wrapperCreator, PythonQtShellSetInstanceWrapperCB* shell, PyObject* module, int typeSlots)
{
  // we register all classes in the hierarchy
  const QMetaObject* m = metaobject;
  bool first = true;
  while (m) {
    PythonQtClassInfo* info = lookupClassInfoAndCreateIfNotPresent(m->className());
    if (!info->pythonQtClassWrapper()) {
      info->setTypeSlots(typeSlots);
      info->setupQObject(m);
      createPythonQtClassWrapper(info, package, module);
      if (m->superClass()) {
        PythonQtClassInfo* parentInfo = lookupClassInfoAndCreateIfNotPresent(m->superClass()->className());
        info->addParentClass(PythonQtClassInfo::ParentClassInfo(parentInfo));
      }
    } else if (first && module) {
      // There is a wrapper already, but if we got a module, we want to place the wrapper into that module as well,
      // since it might have been placed into "private" earlier on.
      // If the wrapper was already added to module before, it is just readded, which does no harm.
      PyObject* classWrapper = info->pythonQtClassWrapper();
      // AddObject steals a reference, so we need to INCREF
      Py_INCREF(classWrapper);
      PyModule_AddObject(module, info->className(), classWrapper);
    }
    if (first) {
      first = false;
      if (wrapperCreator) {
        info->setDecoratorProvider(wrapperCreator);
      }
      if (shell) {
        info->setShellSetInstanceWrapperCB(shell);
      }
    }
    m = m->superClass();
  }
}

void PythonQtPrivate::createPythonQtClassWrapper(PythonQtClassInfo* info, const char* package, PyObject* module)
{
  PyObject* pack = module?module:packageByName(package);
  PyObject* pyobj = (PyObject*)createNewPythonQtClassWrapper(info, pack);
  PyModule_AddObject(pack, info->className(), pyobj);
  if (!module && package && strncmp(package,"Qt",2)==0) {
    // since PyModule_AddObject steals the reference, we need a incref once more...
    Py_INCREF(pyobj);
    // put all qt objects into Qt as well
    PyModule_AddObject(packageByName("Qt"), info->className(), pyobj);
  }
  info->setPythonQtClassWrapper(pyobj);
}

PyObject* PythonQtPrivate::wrapQObject(QObject* obj)
{
  if (!obj) {
    Py_INCREF(Py_None);
    return Py_None;
  }
  PythonQtInstanceWrapper* wrap = findWrapperAndRemoveUnused(obj);
  if (wrap && wrap->_wrappedPtr) {
    // uh oh, we want to wrap a QObject, but have a C++ wrapper at that
    // address, so probably that C++ wrapper has been deleted earlier and
    // now we see a QObject with the same address.
    // Do not use the old wrapper anymore.
    wrap = NULL;
  }
  if (!wrap) {
    // smuggling it in...
    PythonQtClassInfo* classInfo = _knownClassInfos.value(obj->metaObject()->className());
    if (!classInfo || classInfo->pythonQtClassWrapper()==NULL) {
      registerClass(obj->metaObject());
      classInfo = _knownClassInfos.value(obj->metaObject()->className());
    }
    wrap = createNewPythonQtInstanceWrapper(obj, classInfo);
    //    mlabDebugConst("MLABPython","new qobject wrapper added " << " " << wrap->_obj->className() << " " << wrap->classInfo()->wrappedClassName().latin1());
  } else {
    Py_INCREF(wrap);
    //    mlabDebugConst("MLABPython","qobject wrapper reused " << wrap->_obj->className() << " " << wrap->classInfo()->wrappedClassName().latin1());
  }
  return (PyObject*)wrap;
}

PyObject* PythonQtPrivate::wrapPtr(void* ptr, const QByteArray& name)
{
  if (!ptr) {
    Py_INCREF(Py_None);
    return Py_None;
  }

  PythonQtInstanceWrapper* wrap = findWrapperAndRemoveUnused(ptr);
  PythonQtInstanceWrapper* possibleStillAliveWrapper = NULL;
  if (wrap && wrap->_wrappedPtr) {
    // we have a previous C++ wrapper... if the wrapper is for a C++ object,
    // we are not sure if it may have been deleted earlier and we just see the same C++
    // pointer once again. To make sure that we do not reuse a wrapper of the wrong type,
    // we compare the classInfo() pointer and only reuse the wrapper if it has the same
    // info. This is only needed for non-QObjects, since we know it when a QObject gets deleted.
    possibleStillAliveWrapper = wrap;
    wrap = NULL;
  }
  if (!wrap) {
    PythonQtClassInfo* info = _knownClassInfos.value(name);
    if (!info) {
      // maybe it is a PyObject, which we can return directly
      if (name == "PyObject") {
        PyObject* p = (PyObject*)ptr;
        Py_INCREF(p);
        return p;
      }

      // we do not know the metaobject yet, but we might know it by its name:
      if (_knownQObjectClassNames.find(name)!=_knownQObjectClassNames.end()) {
        // yes, we know it, so we can convert to QObject
        QObject* qptr = (QObject*)ptr;
        registerClass(qptr->metaObject());
        info = _knownClassInfos.value(qptr->metaObject()->className());
      }
    }
    if (info && info->isQObject()) {
      QObject* qptr = (QObject*)ptr;
      // if the object is a derived object, we want to switch the class info to the one of the derived class:
      if (name!=(qptr->metaObject()->className())) {
        info = _knownClassInfos.value(qptr->metaObject()->className());
        if (!info) {
          registerClass(qptr->metaObject());
          info = _knownClassInfos.value(qptr->metaObject()->className());
        }
      }
      wrap = createNewPythonQtInstanceWrapper(qptr, info);
      //    mlabDebugConst("MLABPython","new qobject wrapper added " << " " << wrap->_obj->className() << " " << wrap->classInfo()->wrappedClassName().latin1());
      return (PyObject*)wrap;
    }

    // not a known QObject, try to wrap via foreign wrapper factories 
    PyObject* foreignWrapper = NULL;
    for (int i=0; i<_foreignWrapperFactories.size(); i++) {
      foreignWrapper = _foreignWrapperFactories.at(i)->wrap(name, ptr);
      if (foreignWrapper) {
        return foreignWrapper;
      }
    }

    // not a known QObject, so try our wrapper factory:
    QObject* wrapper = NULL;
    for (int i=0; i<_cppWrapperFactories.size(); i++) {
      wrapper = _cppWrapperFactories.at(i)->create(name, ptr);
      if (wrapper) {
        break;
      }
    }

    if (info) {
      // try to downcast in the class hierarchy, which will modify info and ptr if it is successfull
      ptr  = info->castDownIfPossible(ptr, &info);

      // if downcasting found out that the object is a QObject,
      // handle it like one:
      if (info && info->isQObject()) {
        QObject* qptr = (QObject*)ptr;
        // if the object is a derived object, we want to switch the class info to the one of the derived class:
        if (name!=(qptr->metaObject()->className())) {
          registerClass(qptr->metaObject());
          info = _knownClassInfos.value(qptr->metaObject()->className());
        }
        wrap = createNewPythonQtInstanceWrapper(qptr, info);
        //    mlabDebugConst("MLABPython","new qobject wrapper added " << " " << wrap->_obj->className() << " " << wrap->classInfo()->wrappedClassName().latin1());
        return (PyObject*)wrap;
      }
    }

    if (!info || info->pythonQtClassWrapper()==NULL) {
      // still unknown, register as CPP class
      registerCPPClass(name.constData());
      info = _knownClassInfos.value(name);
    }
    if (wrapper && (info->metaObject() != wrapper->metaObject())) {
      // if we a have a QObject wrapper and the metaobjects do not match, set the metaobject again!
      info->setMetaObject(wrapper->metaObject());
    }

    if (possibleStillAliveWrapper && possibleStillAliveWrapper->classInfo() == info) {
      wrap = possibleStillAliveWrapper;
      Py_INCREF(wrap);
    } else {
      wrap = createNewPythonQtInstanceWrapper(wrapper, info, ptr);
    }
    //          mlabDebugConst("MLABPython","new c++ wrapper added " << wrap->_wrappedPtr << " " << wrap->_obj->className() << " " << wrap->classInfo()->wrappedClassName().latin1());
  } else {
    Py_INCREF(wrap);
    //mlabDebugConst("MLABPython","c++ wrapper reused " << wrap->_wrappedPtr << " " << wrap->_obj->className() << " " << wrap->classInfo()->wrappedClassName().latin1());
  }
  return (PyObject*)wrap;
}

PyObject* PythonQtPrivate::dummyTuple() {
  static PyObject* dummyTuple = NULL;
  if (dummyTuple==NULL) {
    dummyTuple = PyTuple_New(1);
    PyTuple_SET_ITEM(dummyTuple, 0 , PyString_FromString("dummy"));
  }
  return dummyTuple;
}


PythonQtInstanceWrapper* PythonQtPrivate::createNewPythonQtInstanceWrapper(QObject* obj, PythonQtClassInfo* info, void* wrappedPtr) {
  // call the associated class type to create a new instance...
  PythonQtInstanceWrapper* result = (PythonQtInstanceWrapper*)PyObject_Call(info->pythonQtClassWrapper(), dummyTuple(), NULL);

  result->setQObject(obj);
  result->_wrappedPtr = wrappedPtr;
  result->_ownedByPythonQt = false;
  result->_useQMetaTypeDestroy = false;

  if (wrappedPtr) {
    _wrappedObjects.insert(wrappedPtr, result);
  } else {
    _wrappedObjects.insert(obj, result);
    if (obj->parent()== NULL && _wrappedCB) {
      // tell someone who is interested that the qobject is wrapped the first time, if it has no parent
      (*_wrappedCB)(obj);
    }
  }
  return result;
}

PythonQtClassWrapper* PythonQtPrivate::createNewPythonQtClassWrapper(PythonQtClassInfo* info, PyObject* parentModule) {
  PythonQtClassWrapper* result;

  PyObject* className = PyString_FromString(info->className());

  PyObject* baseClasses = PyTuple_New(1);
  PyTuple_SET_ITEM(baseClasses, 0, (PyObject*)&PythonQtInstanceWrapper_Type);

  PyObject* typeDict = PyDict_New();
  PyObject* moduleName = PyObject_GetAttrString(parentModule, "__name__");
  PyDict_SetItemString(typeDict, "__module__", moduleName);

  PyObject* args  = Py_BuildValue("OOO", className, baseClasses, typeDict);

  // set the class info so that PythonQtClassWrapper_new can read it
  _currentClassInfoForClassWrapperCreation = info;
  // create the new type object by calling the type
  result = (PythonQtClassWrapper *)PyObject_Call((PyObject *)&PythonQtClassWrapper_Type, args, NULL);

  Py_DECREF(baseClasses);
  Py_DECREF(typeDict);
  Py_DECREF(args);
  Py_DECREF(className);

  return result;
}

PyObject*  PythonQtPrivate::createEnumValueInstance(PyObject* enumType, unsigned int enumValue)
{
  PyObject* args = Py_BuildValue("(i)", enumValue);
  PyObject* result = PyObject_Call(enumType, args, NULL);
  Py_DECREF(args);
  return result;
}

PyObject* PythonQtPrivate::createNewPythonQtEnumWrapper(const char* enumName, PyObject* parentObject) {
  PyObject* result;

  PyObject* className = PyString_FromString(enumName);

  PyObject* baseClasses = PyTuple_New(1);
  PyTuple_SET_ITEM(baseClasses, 0, (PyObject*)&PyInt_Type);

  PyObject* module = PyObject_GetAttrString(parentObject, "__module__");
  PyObject* typeDict = PyDict_New();
  PyDict_SetItemString(typeDict, "__module__", module);

  PyObject* args  = Py_BuildValue("OOO", className, baseClasses, typeDict);

  // create the new int derived type object by calling the core type
  result = PyObject_Call((PyObject *)&PyType_Type, args, NULL);

  Py_DECREF(baseClasses);
  Py_DECREF(typeDict);
  Py_DECREF(args);
  Py_DECREF(className);

  return result;
}

PythonQtSignalReceiver* PythonQt::getSignalReceiver(QObject* obj)
{
  PythonQtSignalReceiver* r = _p->_signalReceivers[obj];
  if (!r) {
    r = new PythonQtSignalReceiver(obj);
    _p->_signalReceivers.insert(obj, r);
  }
  return r;
}

bool PythonQt::addSignalHandler(QObject* obj, const char* signal, PyObject* module, const QString& objectname)
{
  bool flag = false;
  PythonQtObjectPtr callable = lookupCallable(module, objectname);
  if (callable) {
    PythonQtSignalReceiver* r = getSignalReceiver(obj);
    flag = r->addSignalHandler(signal, callable);
    if (!flag) {
      // signal not found
    }
  } else {
    // callable not found
  }
  return flag;
}

bool PythonQt::addSignalHandler(QObject* obj, const char* signal, PyObject* receiver)
{
  bool flag = false;
  PythonQtSignalReceiver* r = getSignalReceiver(obj);
  if (r) {
    flag = r->addSignalHandler(signal, receiver);
  }
  return flag;
}

bool PythonQt::removeSignalHandler(QObject* obj, const char* signal, PyObject* module, const QString& objectname)
{
  bool flag = false;
  PythonQtObjectPtr callable = lookupCallable(module, objectname);
  if (callable) {
    PythonQtSignalReceiver* r = _p->_signalReceivers[obj];
    if (r) {
      flag = r->removeSignalHandler(signal, callable);
    }
  } else {
    // callable not found
  }
  return flag;
}

bool PythonQt::removeSignalHandler(QObject* obj, const char* signal, PyObject* receiver)
{
  bool flag = false;
  PythonQtSignalReceiver* r = _p->_signalReceivers[obj];
  if (r) {
    flag = r->removeSignalHandler(signal, receiver);
  }
  return flag;
}

PythonQtObjectPtr PythonQt::lookupCallable(PyObject* module, const QString& name)
{
  PythonQtObjectPtr p = lookupObject(module, name);
  if (p) {
    if (PyCallable_Check(p)) {
      return p;
    }
  }
  PyErr_Clear();
  return NULL;
}

PythonQtObjectPtr PythonQt::lookupObject(PyObject* module, const QString& name)
{
  QStringList l = name.split('.');
  PythonQtObjectPtr p = module;
  PythonQtObjectPtr prev;
  QByteArray b;
  for (QStringList::ConstIterator i = l.begin(); i!=l.end() && p; ++i) {
    prev = p;
    b = (*i).toLatin1();
    if (PyDict_Check(p)) {
      p = PyDict_GetItemString(p, b.data());
    } else {
      p.setNewRef(PyObject_GetAttrString(p, b.data()));
    }
  }
  PyErr_Clear();
  return p;
}

PythonQtObjectPtr PythonQt::getMainModule() {
  //both borrowed
  PythonQtObjectPtr dict = PyImport_GetModuleDict();
  return PyDict_GetItemString(dict, "__main__");
}

PythonQtObjectPtr PythonQt::importModule(const QString& name)
{
  PythonQtObjectPtr mod;
  mod.setNewRef(PyImport_ImportModule(name.toLatin1().constData()));
  return mod;
}


QVariant PythonQt::evalCode(PyObject* object, PyObject* pycode) {
  QVariant result;
  clearError();
  if (pycode) {
    PyObject* dict = NULL;
    PyObject* globals = NULL;
    if (PyModule_Check(object)) {
      dict = PyModule_GetDict(object);
      globals = dict;
    } else if (PyDict_Check(object)) {
      dict = object;
      globals = dict;
    } else {
      dict = PyObject_GetAttrString(object, "__dict__");
      globals = PyObject_GetAttrString(PyImport_ImportModule(PyString_AS_STRING(PyObject_GetAttrString(object, "__module__"))),"__dict__");
    }
    PyObject* r = NULL;
    if (dict) {
      r = PyEval_EvalCode((PyCodeObject*)pycode, globals , dict);
    }
    if (r) {
      result = PythonQtConv::PyObjToQVariant(r);
      Py_DECREF(r);
    } else {
      handleError();
    }
  } else {
    handleError();
  }
  return result;
}

QVariant PythonQt::evalScript(PyObject* object, const QString& script, int start)
{
  QVariant result;
  PythonQtObjectPtr p;
  PyObject* dict = NULL;
  clearError();
  if (PyModule_Check(object)) {
    dict = PyModule_GetDict(object);
  } else if (PyDict_Check(object)) {
    dict = object;
  }
  if (dict) {
    p.setNewRef(PyRun_String(script.toLatin1().data(), start, dict, dict));
  }
  if (p) {
    result = PythonQtConv::PyObjToQVariant(p);
  } else {
    handleError();
  }
  return result;
}

void PythonQt::evalFile(PyObject* module, const QString& filename)
{
  PythonQtObjectPtr code = parseFile(filename);
  clearError();
  if (code) {
    evalCode(module, code);
  } else {
    handleError();
  }
}

PythonQtObjectPtr PythonQt::parseFile(const QString& filename)
{
  PythonQtObjectPtr p;
  p.setNewRef(PythonQtImport::getCodeFromPyc(filename));
  clearError();
  if (!p) {
    handleError();
  }
  return p;
}

PythonQtObjectPtr PythonQt::createModuleFromFile(const QString& name, const QString& filename)
{
  PythonQtObjectPtr code = parseFile(filename);
  PythonQtObjectPtr module = _p->createModule(name, code);
  return module;
}

PythonQtObjectPtr PythonQt::createModuleFromScript(const QString& name, const QString& script)
{
  PyErr_Clear();
  QString scriptCode = script;
  if (scriptCode.isEmpty()) {
    // we always need at least a linefeed
    scriptCode = "\n";
  }
  PythonQtObjectPtr pycode;
  pycode.setNewRef(Py_CompileString((char*)scriptCode.toLatin1().data(), "",  Py_file_input));
  PythonQtObjectPtr module = _p->createModule(name, pycode);
  return module;
}

PythonQtObjectPtr PythonQt::createUniqueModule()
{
  static QString pyQtStr("PythonQt_module");
  QString moduleName = pyQtStr+QString::number(_uniqueModuleCount++);
  return createModuleFromScript(moduleName);
}

void PythonQt::addObject(PyObject* object, const QString& name, QObject* qObject)
{
  if (PyModule_Check(object)) {
    PyModule_AddObject(object, name.toLatin1().data(), _p->wrapQObject(qObject));
  } else if (PyDict_Check(object)) {
    PyDict_SetItemString(object, name.toLatin1().data(), _p->wrapQObject(qObject));
  } else {
    PyObject_SetAttrString(object, name.toLatin1().data(), _p->wrapQObject(qObject));
  }
}

void PythonQt::addVariable(PyObject* object, const QString& name, const QVariant& v)
{
  if (PyModule_Check(object)) {
    PyModule_AddObject(object, name.toLatin1().data(), PythonQtConv::QVariantToPyObject(v));
  } else if (PyDict_Check(object)) {
    PyDict_SetItemString(object, name.toLatin1().data(), PythonQtConv::QVariantToPyObject(v));
  } else {
    PyObject_SetAttrString(object, name.toLatin1().data(), PythonQtConv::QVariantToPyObject(v));
  }
}

void PythonQt::removeVariable(PyObject* object, const QString& name)
{
  if (PyDict_Check(object)) {
    PyDict_DelItemString(object, name.toLatin1().data());
  } else {
    PyObject_DelAttrString(object, name.toLatin1().data());
  }
}

QVariant PythonQt::getVariable(PyObject* object, const QString& objectname)
{
  QVariant result;
  PythonQtObjectPtr obj = lookupObject(object, objectname);
  if (obj) {
    result = PythonQtConv::PyObjToQVariant(obj);
  }
  return result;
}

QStringList PythonQt::introspection(PyObject* module, const QString& objectname, PythonQt::ObjectType type)
{
  QStringList results;

  PythonQtObjectPtr object;
  if (objectname.isEmpty()) {
    object = module;
  } else {
    object = lookupObject(module, objectname);
    if (!object && type == CallOverloads) {
      PyObject* dict = lookupObject(module, "__builtins__");
      if (dict) {
        object = PyDict_GetItemString(dict, objectname.toLatin1().constData());
      }
    }
  }

  if (object) {
    results = introspectObject(object, type);
  }
  
  return results;
}

QStringList PythonQt::introspectObject(PyObject* object, ObjectType type)
{
  QStringList results;

  if (type == CallOverloads) {
    if (PythonQtSlotFunction_Check(object)) {
      PythonQtSlotFunctionObject* o = (PythonQtSlotFunctionObject*)object;
      PythonQtSlotInfo* info = o->m_ml;

      while (info) {
        results << info->fullSignature();
        info = info->nextInfo();
      }
    } else if (PythonQtSignalFunction_Check(object)) {
      PythonQtSignalFunctionObject* o = (PythonQtSignalFunctionObject*)object;
      PythonQtSlotInfo* info = o->m_ml;

      while (info) {
        results << info->fullSignature();
        info = info->nextInfo();
      }
    } else if (object->ob_type == &PythonQtClassWrapper_Type) {
      PythonQtClassWrapper* o = (PythonQtClassWrapper*)object;
      PythonQtSlotInfo* info = o->classInfo()->constructors();

      while (info) {
        results << info->fullSignature();
        info = info->nextInfo();
      }
    } else {
      QString signature = _p->getSignature(object);
      if (!signature.isEmpty()) {
        results << signature;
      } else {
        PyObject* doc = PyObject_GetAttrString(object, "__doc__");
        if (doc) {
          results << PyString_AsString(doc);
          Py_DECREF(doc);
        }
      }
    }
  } else {
    PyObject* keys = NULL;
    bool isDict = false;
    if (PyDict_Check(object)) {
      keys = PyDict_Keys(object);
      isDict = true;
    } else {
      keys = PyObject_Dir(object);
    }
    if (keys) {
      int count = PyList_Size(keys);
      PyObject* key;
      PyObject* value;
      QString keystr;
      for (int i = 0;i<count;i++) {
        key = PyList_GetItem(keys,i);
        if (isDict) {
          value = PyDict_GetItem(object, key);
          Py_INCREF(value);
        } else {
          value = PyObject_GetAttr(object, key);
        }
        if (!value) continue;
        keystr = PyString_AsString(key);
        static const QString underscoreStr("__tmp");
        if (!keystr.startsWith(underscoreStr)) {
          switch (type) {
          case Anything:
            results << keystr;
            break;
          case Class:
            if (value->ob_type == &PyClass_Type || value->ob_type == &PyType_Type) {
              results << keystr;
            }
            break;
          case Variable:
            if (value->ob_type != &PyClass_Type
              && value->ob_type != &PyCFunction_Type
              && value->ob_type != &PyFunction_Type
              && value->ob_type != &PyMethod_Type
              && value->ob_type != &PyModule_Type
              && value->ob_type != &PyType_Type
              && value->ob_type != &PythonQtSlotFunction_Type
              ) {
              results << keystr;
            }
            break;
          case Function:
            if (value->ob_type == &PyCFunction_Type ||
                value->ob_type == &PyFunction_Type ||
                value->ob_type == &PyMethod_Type ||
                value->ob_type == &PythonQtSlotFunction_Type
              ) {
              results << keystr;
            }
            break;
          case Module:
            if (value->ob_type == &PyModule_Type) {
              results << keystr;
            }
            break;
          default:
            std::cerr << "PythonQt: introspection: unknown case" << ", in " << __FILE__ << ":" << __LINE__ << std::endl;
          }
        }
        Py_DECREF(value);
      }
      Py_DECREF(keys);
    }
    if ((type == Anything) || (type == Variable)) {
      if (object->ob_type == &PythonQtClassWrapper_Type) {
        PythonQtClassWrapper* o = (PythonQtClassWrapper*)object;
        PythonQtClassInfo* info = o->classInfo();
        results += info->propertyList();
      }
    }
  }
  return results;
}

PyObject* PythonQt::getObjectByType(const QString& typeName)
{
  PythonQtObjectPtr sys;
  sys.setNewRef(PyImport_ImportModule("sys"));
  PythonQtObjectPtr modules = lookupObject(sys, "modules");
  Q_ASSERT(PyDict_Check(modules));
  
  QStringList tmp = typeName.split(".");
  QString simpleTypeName = tmp.takeLast();
  QString moduleName = tmp.join(".");
  
  PyObject* object = NULL;
  PyObject* moduleObject = PyDict_GetItemString(modules, moduleName.toLatin1().constData());
  if (moduleObject) {
    object = PyObject_GetAttrString(moduleObject, simpleTypeName.toLatin1().constData());
  }
  
  if (!object) {
    moduleObject = PyDict_GetItemString(modules, "__builtin__");
    if (moduleObject) {
      object = PyObject_GetAttrString(moduleObject, simpleTypeName.toLatin1().constData());
    }
  }
  
  return object;
}
  
QStringList PythonQt::introspectType(const QString& typeName, ObjectType type)
{
  QStringList results;
  PyObject* object = getObjectByType(typeName);
  if (!object) {
    // the last item may be a member, split it away and try again
    QStringList tmp = typeName.split(".");
    QString memberName = tmp.takeLast();
    QString typeName;
    if (tmp.isEmpty()) {
      typeName = memberName;
      memberName.clear();
    } else {
      typeName = tmp.takeLast();
    }
    PyObject* typeObject = getObjectByType(typeName);
    if (typeObject) {
      object = PyObject_GetAttrString(typeObject, memberName.toLatin1().constData());
    }
  }
  if (object) {
    results = introspectObject(object, type);
    Py_DECREF(object);
  }
  return results;
}

QVariant PythonQt::call(PyObject* object, const QString& name, const QVariantList& args, const QVariantMap& kwargs)
{
  PythonQtObjectPtr callable = lookupCallable(object, name);
  if (callable) {
    return call(callable, args, kwargs);
  } else {
    return QVariant();
  }
}

QVariant PythonQt::call(PyObject* callable, const QVariantList& args, const QVariantMap& kwargs)
{
  QVariant r;
  PythonQtObjectPtr result;
  result.setNewRef(callAndReturnPyObject(callable, args, kwargs));
  clearError();
  if (result) {
    r = PythonQtConv::PyObjToQVariant(result);
  } else {
    PythonQt::self()->handleError();
  }
  return r;
}

PyObject* PythonQt::callAndReturnPyObject(PyObject* callable, const QVariantList& args, const QVariantMap& kwargs)
{
  PyObject* result = NULL;
  if (callable) {
    bool err = false;
    PythonQtObjectPtr pargs;
    int count = args.size();
    if ((count > 0) || (kwargs.count() > 0)) { // create empty tuple if kwargs are given
      pargs.setNewRef(PyTuple_New(count));

      // transform QVariant arguments to Python
      for (int i = 0; i < count; i++) {
        PyObject* arg = PythonQtConv::QVariantToPyObject(args.at(i));
        if (arg) {
          // steals reference, no unref
          PyTuple_SetItem(pargs, i,arg);
        } else {
          err = true;
          break;
        }
      }
    }
    if (!err) {
      if (kwargs.isEmpty()) {
        // do a direct call if we have no keyword arguments
        PyErr_Clear();
        result = PyObject_CallObject(callable, pargs);
      } else {
        // convert keyword arguments to Python
        PythonQtObjectPtr pkwargs;
        pkwargs.setNewRef(PyDict_New());
        QMapIterator<QString, QVariant> it(kwargs);
        while (it.hasNext()) {
          it.next();
          PyObject* arg = PythonQtConv::QVariantToPyObject(it.value());
          if (arg) {
            PyDict_SetItemString(pkwargs, it.key().toLatin1().constData(), arg);
          } else {
            err = true;
            break;
          }
        }
        if (!err) {
          // call with arguments and keyword arguments
          PyErr_Clear();
          result = PyObject_Call(callable, pargs, pkwargs);
        }
      }
    }
  }
  return result;
}

void PythonQt::addInstanceDecorators(QObject* o)
{
  _p->addDecorators(o, PythonQtPrivate::InstanceDecorator);
}

void PythonQt::addClassDecorators(QObject* o)
{
  _p->addDecorators(o, PythonQtPrivate::StaticDecorator | PythonQtPrivate::ConstructorDecorator | PythonQtPrivate::DestructorDecorator);
}

void PythonQt::addDecorators(QObject* o)
{
  _p->addDecorators(o, PythonQtPrivate::AllDecorators);
}

void PythonQt::registerQObjectClassNames(const QStringList& names)
{
  _p->registerQObjectClassNames(names);
}

void PythonQt::setImporter(PythonQtImportFileInterface* importInterface)
{
  _p->_importInterface = importInterface;
  PythonQtImport::init();
}

void PythonQt::setImporterIgnorePaths(const QStringList& paths)
{
  _p->_importIgnorePaths = paths;
}

const QStringList& PythonQt::getImporterIgnorePaths()
{
  return _p->_importIgnorePaths;
}

void PythonQt::addWrapperFactory(PythonQtCppWrapperFactory* factory)
{
  _p->_cppWrapperFactories.append(factory);
}

void PythonQt::addWrapperFactory( PythonQtForeignWrapperFactory* factory )
{
  _p->_foreignWrapperFactories.append(factory);
}

//---------------------------------------------------------------------------------------------------
PythonQtPrivate::PythonQtPrivate()
{
  _importInterface = NULL;
  _defaultImporter = new PythonQtQFileImporter;
  _noLongerWrappedCB = NULL;
  _wrappedCB = NULL;
  _currentClassInfoForClassWrapperCreation = NULL;
  _profilingCB = NULL;
  _hadError = false;
  _systemExitExceptionHandlerEnabled = false;
}

void PythonQtPrivate::setupSharedLibrarySuffixes()
{
  _sharedLibrarySuffixes.clear();
  PythonQtObjectPtr imp;
  imp.setNewRef(PyImport_ImportModule("imp"));
  int cExtensionCode = imp.getVariable("C_EXTENSION").toInt();
  QVariant result = imp.call("get_suffixes");
#ifdef __linux
  #ifdef _DEBUG
  // First look for shared libraries with the '_d' suffix in debug mode on Linux.
  // This is a workaround, because python does not append the '_d' suffix on Linux
  // and would always load the release library otherwise.
  _sharedLibrarySuffixes << "_d.so";
  #endif
#endif
  foreach (QVariant entry, result.toList()) {
    QVariantList suffixEntry = entry.toList();
    if (suffixEntry.count()==3) {
      int code = suffixEntry.at(2).toInt();
      if (code == cExtensionCode) {
        _sharedLibrarySuffixes << suffixEntry.at(0).toString();
      }
    }
  }
}

PythonQtClassInfo* PythonQtPrivate::currentClassInfoForClassWrapperCreation()
{
  PythonQtClassInfo* info = _currentClassInfoForClassWrapperCreation;
  _currentClassInfoForClassWrapperCreation = NULL;
  return info;
}

void PythonQtPrivate::addDecorators(QObject* o, int decoTypes)
{
  o->setParent(this);
  int numMethods = o->metaObject()->methodCount();
  for (int i = 0; i < numMethods; i++) {
    QMetaMethod m = o->metaObject()->method(i);
    if ((m.methodType() == QMetaMethod::Method ||
      m.methodType() == QMetaMethod::Slot) && m.access() == QMetaMethod::Public) {
      if (qstrncmp(m.signature(), "new_", 4)==0) {
        if ((decoTypes & ConstructorDecorator) == 0) continue;
        const PythonQtMethodInfo* info = PythonQtMethodInfo::getCachedMethodInfo(m, NULL);
        if (info->parameters().at(0).pointerCount == 1) {
          QByteArray signature = m.signature();
          QByteArray nameOfClass = signature.mid(4, signature.indexOf('(')-4);
          PythonQtClassInfo* classInfo = lookupClassInfoAndCreateIfNotPresent(nameOfClass);
          PythonQtSlotInfo* newSlot = new PythonQtSlotInfo(NULL, m, i, o, PythonQtSlotInfo::ClassDecorator);
          classInfo->addConstructor(newSlot);
        }
      } else if (qstrncmp(m.signature(), "delete_", 7)==0) {
        if ((decoTypes & DestructorDecorator) == 0) continue;
        QByteArray signature = m.signature();
        QByteArray nameOfClass = signature.mid(7, signature.indexOf('(')-7);
        PythonQtClassInfo* classInfo = lookupClassInfoAndCreateIfNotPresent(nameOfClass);
        PythonQtSlotInfo* newSlot = new PythonQtSlotInfo(NULL, m, i, o, PythonQtSlotInfo::ClassDecorator);
        classInfo->setDestructor(newSlot);
      } else if (qstrncmp(m.signature(), "static_", 7)==0) {
        if ((decoTypes & StaticDecorator) == 0) continue;
        QByteArray signature = m.signature();
        QByteArray nameOfClass = signature.mid(7);
        nameOfClass = nameOfClass.mid(0, nameOfClass.indexOf('_'));
        PythonQtClassInfo* classInfo = lookupClassInfoAndCreateIfNotPresent(nameOfClass);
        PythonQtSlotInfo* newSlot = new PythonQtSlotInfo(NULL, m, i, o, PythonQtSlotInfo::ClassDecorator);
        classInfo->addDecoratorSlot(newSlot);
      } else {
        if ((decoTypes & InstanceDecorator) == 0) continue;
        const PythonQtMethodInfo* info = PythonQtMethodInfo::getCachedMethodInfo(m, NULL);
        if (info->parameters().count()>1) {
          PythonQtMethodInfo::ParameterInfo p = info->parameters().at(1);
          if (p.pointerCount==1) {
            PythonQtClassInfo* classInfo = lookupClassInfoAndCreateIfNotPresent(p.name);
            PythonQtSlotInfo* newSlot = new PythonQtSlotInfo(NULL, m, i, o, PythonQtSlotInfo::InstanceDecorator);
            classInfo->addDecoratorSlot(newSlot);
          }
        }
      }
    }
  }
}

void PythonQtPrivate::registerQObjectClassNames(const QStringList& names)
{
  foreach(QString name, names) {
    _knownQObjectClassNames.insert(name.toLatin1(), true);
  }
}

void PythonQtPrivate::removeSignalEmitter(QObject* obj)
{
  _signalReceivers.remove(obj);
}

namespace
{
//! adapted from python source file "pythonrun.c", function "handle_system_exit"
//! return the exitcode instead of calling "Py_Exit".
//! it gives the application an opportunity to properly terminate.
int custom_system_exit_exception_handler()
{
  PyObject *exception, *value, *tb;
  int exitcode = 0;

//  if (Py_InspectFlag)
//    /* Don't exit if -i flag was given. This flag is set to 0
//     * when entering interactive mode for inspecting. */
//    return exitcode;

  PyErr_Fetch(&exception, &value, &tb);
  if (Py_FlushLine())
    PyErr_Clear();
  fflush(stdout);
  if (value == NULL || value == Py_None)
    goto done;
  if (PyExceptionInstance_Check(value)) {
    /* The error code should be in the `code' attribute. */
    PyObject *code = PyObject_GetAttrString(value, "code");
    if (code) {
      Py_DECREF(value);
      value = code;
      if (value == Py_None)
        goto done;
    }
    /* If we failed to dig out the 'code' attribute,
       just let the else clause below print the error. */
  }
  if (PyInt_Check(value))
    exitcode = (int)PyInt_AsLong(value);
  else {
    PyObject *sys_stderr = PySys_GetObject(const_cast<char*>("stderr"));
    if (sys_stderr != NULL && sys_stderr != Py_None) {
      PyFile_WriteObject(value, sys_stderr, Py_PRINT_RAW);
    } else {
      PyObject_Print(value, stderr, Py_PRINT_RAW);
      fflush(stderr);
    }
    PySys_WriteStderr("\n");
    exitcode = 1;
  }
  done:
    /* Restore and clear the exception info, in order to properly decref
     * the exception, value, and traceback.      If we just exit instead,
     * these leak, which confuses PYTHONDUMPREFS output, and may prevent
     * some finalizers from running.
     */
    PyErr_Restore(exception, value, tb);
    PyErr_Clear();
    return exitcode;
    //Py_Exit(exitcode);
}
}

bool PythonQt::handleError()
{
  bool flag = false;
  if (PyErr_Occurred()) {

    if (_p->_systemExitExceptionHandlerEnabled &&
        PyErr_ExceptionMatches(PyExc_SystemExit)) {
      int exitcode = custom_system_exit_exception_handler();
      emit PythonQt::self()->systemExitExceptionRaised(exitcode);
      }
    else
      {
      // currently we just print the error and the stderr handler parses the errors
      PyErr_Print();

      /*
      // EXTRA: the format of the ptype and ptraceback is not really documented, so I use PyErr_Print() above
      PyObject *ptype;
      PyObject *pvalue;
      PyObject *ptraceback;
      PyErr_Fetch( &ptype, &pvalue, &ptraceback);

        Py_XDECREF(ptype);
        Py_XDECREF(pvalue);
        Py_XDECREF(ptraceback);
      */
      PyErr_Clear();
      }
    flag = true;
  }
  _p->_hadError = flag;
  return flag;
}

bool PythonQt::hadError()const
{
  return _p->_hadError;
}

void PythonQt::clearError()
{
  _p->_hadError = false;
}

void PythonQt::setSystemExitExceptionHandlerEnabled(bool value)
{
  _p->_systemExitExceptionHandlerEnabled = value;
}

bool PythonQt::systemExitExceptionHandlerEnabled() const
{
  return _p->_systemExitExceptionHandlerEnabled;
}

void PythonQt::addSysPath(const QString& path)
{
  PythonQtObjectPtr sys;
  sys.setNewRef(PyImport_ImportModule("sys"));
  PythonQtObjectPtr obj = lookupObject(sys, "path");
  PyList_Insert(obj, 0, PythonQtConv::QStringToPyObject(path));
}

void PythonQt::overwriteSysPath(const QStringList& paths)
{
  PythonQtObjectPtr sys;
  sys.setNewRef(PyImport_ImportModule("sys"));
  PyModule_AddObject(sys, "path", PythonQtConv::QStringListToPyList(paths));
}

void PythonQt::setModuleImportPath(PyObject* module, const QStringList& paths)
{
  PyModule_AddObject(module, "__path__", PythonQtConv::QStringListToPyList(paths));
}

void PythonQt::stdOutRedirectCB(const QString& str)
{
  if (!PythonQt::self()) {
    std::cout << str.toLatin1().data() << std::endl;
    return;
  }
  emit PythonQt::self()->pythonStdOut(str);
}

void PythonQt::stdErrRedirectCB(const QString& str)
{
  if (!PythonQt::self()) {
    std::cerr << str.toLatin1().data() << std::endl;
    return;
  }
  emit PythonQt::self()->pythonStdErr(str);
}

void PythonQt::setQObjectWrappedCallback(PythonQtQObjectWrappedCB* cb)
{
  _p->_wrappedCB = cb;
}

void PythonQt::setQObjectNoLongerWrappedCallback(PythonQtQObjectNoLongerWrappedCB* cb)
{
  _p->_noLongerWrappedCB = cb;
}

void PythonQt::setProfilingCallback(ProfilingCB* cb)
{
  _p->_profilingCB = cb;
}


static PyMethodDef PythonQtMethods[] = {
  {NULL, NULL, 0, NULL}
};

void PythonQt::initPythonQtModule(bool redirectStdOut, const QByteArray& pythonQtModuleName)
{
  QByteArray name = "PythonQt";
  if (!pythonQtModuleName.isEmpty()) {
    name = pythonQtModuleName;
  }
  _p->_pythonQtModule = Py_InitModule(name.constData(), PythonQtMethods);
  _p->_pythonQtModuleName = name;

  if (redirectStdOut) {
    PythonQtObjectPtr sys;
    PythonQtObjectPtr out;
    PythonQtObjectPtr err;
    sys.setNewRef(PyImport_ImportModule("sys"));
    // create a redirection object for stdout and stderr
    out = PythonQtStdOutRedirectType.tp_new(&PythonQtStdOutRedirectType,NULL, NULL);
    ((PythonQtStdOutRedirect*)out.object())->_cb = stdOutRedirectCB;
    err = PythonQtStdOutRedirectType.tp_new(&PythonQtStdOutRedirectType,NULL, NULL);
    ((PythonQtStdOutRedirect*)err.object())->_cb = stdErrRedirectCB;
    // replace the built in file objects with our own objects
    PyModule_AddObject(sys, "stdout", out);
    PyModule_AddObject(sys, "stderr", err);
  }
}

QString PythonQt::getReturnTypeOfWrappedMethod(PyObject* module, const QString& name)
{
  QStringList tmp = name.split(".");
  QString methodName = tmp.takeLast();
  QString variableName = tmp.join(".");
  // TODO: the variableName may be a type name, this needs to be handled differently,
  // because it is not necessarily known in the module context
  PythonQtObjectPtr variableObject = lookupObject(module, variableName);  
  if (variableObject.isNull()) {
    return "";
  }
  
  return getReturnTypeOfWrappedMethodHelper(variableObject, methodName, name);
}

QString PythonQt::getReturnTypeOfWrappedMethod(const QString& typeName, const QString& methodName)
{
  PythonQtObjectPtr typeObject = getObjectByType(typeName);
  if (typeObject.isNull()) {
    return "";
  }
  return getReturnTypeOfWrappedMethodHelper(typeObject, methodName, typeName + "." + methodName);
}

QString PythonQt::getReturnTypeOfWrappedMethodHelper(const PythonQtObjectPtr& variableObject, const QString& methodName, const QString& context)
{
  PythonQtObjectPtr methodObject;
  if (PyDict_Check(variableObject)) {
    methodObject = PyDict_GetItemString(variableObject, methodName.toLatin1().constData());
  } else {
    methodObject.setNewRef(PyObject_GetAttrString(variableObject, methodName.toLatin1().constData()));
  }
  if (methodObject.isNull()) {
    return "";
  }
    
  QString type;
  
  if (methodObject->ob_type == &PyClass_Type || methodObject->ob_type == &PyType_Type) {
    // the methodObject is not a method, but the name of a type/class. This means
    // a constructor is called. Return the context.
    type = context;
  } else if (methodObject->ob_type == &PythonQtSlotFunction_Type) {
    QString className;
    
    if (PyObject_TypeCheck(variableObject, &PythonQtInstanceWrapper_Type)) {
      // the type name of wrapped instance is the class name
      className = variableObject->ob_type->tp_name;
    } else {
      PyObject* classNameObject = PyObject_GetAttrString(variableObject, "__name__");
      if (classNameObject) {
        Q_ASSERT(PyString_Check(classNameObject));
        className = PyString_AsString(classNameObject);
        Py_DECREF(classNameObject);
      }
    }

    if (!className.isEmpty()) {
      PythonQtClassInfo* info = _p->_knownClassInfos.value(className.toLatin1().constData());
      if (info) {
        PythonQtSlotInfo* slotInfo = info->member(methodName.toLatin1().constData())._slot;
        if (slotInfo) {
          if (slotInfo->metaMethod()) {
            type = slotInfo->metaMethod()->typeName();
            if (!type.isEmpty()) {
              QChar c = type.at(type.length()-1);
              while (c == '*' || c == '&') {
                type.truncate(type.length()-1);
                if (!type.isEmpty()) {
                  c = type.at(type.length()-1);
                } else {
                  break;
                }
              }
              // split away template arguments
              type = type.split("<").first();
              // split away const
              type = type.split(" ").last().trimmed();
              
              // if the type is a known class info, then create the full type name, i.e. include the
              // module name. For example, the slot may return a QDate, then this looks up the
              // name _PythonQt.QtCore.QDate.
              PythonQtClassInfo* typeInfo = _p->_knownClassInfos.value(type.toLatin1().constData());
              if (typeInfo && typeInfo->pythonQtClassWrapper()) {
                PyObject* s = PyObject_GetAttrString(typeInfo->pythonQtClassWrapper(), "__module__");
                Q_ASSERT(PyString_Check(s));
                type = QString(PyString_AsString(s)) + "." + type;
                Py_DECREF(s);
                s = PyObject_GetAttrString(typeInfo->pythonQtClassWrapper(), "__name__");
                Q_ASSERT(PyString_Check(s));
                Py_DECREF(s);
              }
            }
          }
        }
      }
    }
  }
  return type;
}

void PythonQt::registerCPPClass(const char* typeName, const char* parentTypeName, const char* package, PythonQtQObjectCreatorFunctionCB* wrapperCreator,  PythonQtShellSetInstanceWrapperCB* shell)
{
  _p->registerCPPClass(typeName, parentTypeName, package, wrapperCreator, shell);
}


PythonQtClassInfo* PythonQtPrivate::lookupClassInfoAndCreateIfNotPresent(const char* typeName)
{
  PythonQtClassInfo* info = _knownClassInfos.value(typeName);
  if (!info) {
    info = new PythonQtClassInfo();
    info->setupCPPObject(typeName);
    _knownClassInfos.insert(typeName, info);
  }
  return info;
}

void PythonQt::addPolymorphicHandler(const char* typeName, PythonQtPolymorphicHandlerCB* cb)
{
  _p->addPolymorphicHandler(typeName, cb);
}

void PythonQtPrivate::addPolymorphicHandler(const char* typeName, PythonQtPolymorphicHandlerCB* cb)
{
  PythonQtClassInfo* info = lookupClassInfoAndCreateIfNotPresent(typeName);
  info->addPolymorphicHandler(cb);
}

bool PythonQt::addParentClass(const char* typeName, const char* parentTypeName, int upcastingOffset)
{
  return _p->addParentClass(typeName, parentTypeName, upcastingOffset);
}

bool PythonQtPrivate::addParentClass(const char* typeName, const char* parentTypeName, int upcastingOffset)
{
  PythonQtClassInfo* info = _knownClassInfos.value(typeName);
  if (info) {
    PythonQtClassInfo* parentInfo = lookupClassInfoAndCreateIfNotPresent(parentTypeName);
    info->addParentClass(PythonQtClassInfo::ParentClassInfo(parentInfo, upcastingOffset));
    return true;
  } else {
    return false;
  }
}

void PythonQtPrivate::registerCPPClass(const char* typeName, const char* parentTypeName, const char* package, PythonQtQObjectCreatorFunctionCB* wrapperCreator,  PythonQtShellSetInstanceWrapperCB* shell, PyObject* module, int typeSlots)
{
  PythonQtClassInfo* info = lookupClassInfoAndCreateIfNotPresent(typeName);
  if (!info->pythonQtClassWrapper()) {
    info->setTypeSlots(typeSlots);
    info->setupCPPObject(typeName);
    createPythonQtClassWrapper(info, package, module);
  }
  if (parentTypeName && strcmp(parentTypeName,"")!=0) {
    addParentClass(typeName, parentTypeName, 0);
  }
  if (wrapperCreator) {
    info->setDecoratorProvider(wrapperCreator);
  }
  if (shell) {
    info->setShellSetInstanceWrapperCB(shell);
  }
}

PyObject* PythonQtPrivate::packageByName(const char* name)
{
  if (name==NULL || name[0]==0) {
    name = "private";
  }
  PyObject* v = _packages.value(name);
  if (!v) {
    v = PyImport_AddModule((_pythonQtModuleName + "." + name).constData());
    _packages.insert(name, v);
    // AddObject steals the reference, so increment it!
    Py_INCREF(v);
    PyModule_AddObject(_pythonQtModule, name, v);
  }
  return v;
}

void PythonQtPrivate::handleVirtualOverloadReturnError(const char* signature, const PythonQtMethodInfo* methodInfo, PyObject* result)
{
  QString error = "Return value '" + PythonQtConv::PyObjGetString(result) + "' can not be converted to expected C++ type '" + methodInfo->parameters().at(0).name + "' as return value of virtual method " + signature;
  PyErr_SetString(PyExc_AttributeError, error.toLatin1().data());
  PythonQt::self()->handleError();
}

PyObject* PythonQt::helpCalled(PythonQtClassInfo* info)
{
  if (_p->_initFlags & ExternalHelp) {
    emit pythonHelpRequest(QByteArray(info->className()));
    return Py_BuildValue("");
  } else {
    return PyString_FromString(info->help().toLatin1().data());
  }
}

void PythonQt::clearNotFoundCachedMembers()
{
  foreach(PythonQtClassInfo* info, _p->_knownClassInfos) {
    info->clearNotFoundCachedMembers();
  }
}

void PythonQt::removeWrapperFactory( PythonQtCppWrapperFactory* factory )
{
  _p->_cppWrapperFactories.removeAll(factory);
}

void PythonQt::removeWrapperFactory( PythonQtForeignWrapperFactory* factory )
{
  _p->_foreignWrapperFactories.removeAll(factory);
}

void PythonQtPrivate::removeWrapperPointer(void* obj)
{
  _wrappedObjects.remove(obj);
}

void PythonQtPrivate::addWrapperPointer(void* obj, PythonQtInstanceWrapper* wrapper)
{
  _wrappedObjects.insert(obj, wrapper);
}

PythonQtInstanceWrapper* PythonQtPrivate::findWrapperAndRemoveUnused(void* obj)
{
  PythonQtInstanceWrapper* wrap = _wrappedObjects.value(obj);
  if (wrap && !wrap->_wrappedPtr && wrap->_obj == NULL) {
    // this is a wrapper whose QObject was already removed due to destruction
    // so the obj pointer has to be a new QObject with the same address...
    // we remove the old one and set the copy to NULL
    wrap->_objPointerCopy = NULL;
    removeWrapperPointer(obj);
    wrap = NULL;
  }
  return wrap;
}

PythonQtObjectPtr PythonQtPrivate::createModule(const QString& name, PyObject* pycode)
{
  PythonQtObjectPtr result;
  PythonQt::self()->clearError();
  if (pycode) {
    result.setNewRef(PyImport_ExecCodeModule((char*)name.toLatin1().data(), pycode));
  } else {
    PythonQt::self()->handleError();
  }
  return result;
}

void* PythonQtPrivate::unwrapForeignWrapper( const QByteArray& classname, PyObject* obj )
{
  void* foreignObject = NULL;
  for (int i=0; i<_foreignWrapperFactories.size(); i++) {
    foreignObject = _foreignWrapperFactories.at(i)->unwrap(classname, obj);
    if (foreignObject) {
      return foreignObject;
    }
  }
  return NULL;
}

bool PythonQtPrivate::isMethodDescriptor(PyObject* object) const
{
  // This implementation is the same as in inspect.ismethoddescriptor(), inspect.py.
  if (PyObject_HasAttrString(object, "__get__") &&
      !PyObject_HasAttrString(object, "__set__") &&
      !PyMethod_Check(object) &&
      !PyFunction_Check(object) &&
      !PyClass_Check(object)) {
    return true;
  }
  return false;
}

QString PythonQtPrivate::getSignature(PyObject* object)
{
  QString signature;
  
  if (object) {
    PyMethodObject* method = NULL;
    PyFunctionObject* func = NULL;
    
    bool decrefMethod = false;
    
    if (object->ob_type == &PyClass_Type || object->ob_type == &PyType_Type) {
      method = (PyMethodObject*)PyObject_GetAttrString(object, "__init__");
      decrefMethod = true;
    } else if (object->ob_type == &PyFunction_Type) {
      func = (PyFunctionObject*)object;
    } else if (object->ob_type == &PyMethod_Type) {
      method = (PyMethodObject*)object;
    }
    if (method)  {
      if (PyFunction_Check(method->im_func)) {
        func = (PyFunctionObject*)method->im_func;
      } else if (isMethodDescriptor((PyObject*)method)) {
        QString docstr;
        PyObject* doc = PyObject_GetAttrString(object, "__doc__");
        if (doc) {
          docstr = PyString_AsString(doc);
          Py_DECREF(doc);
        }

        PyObject* s = PyObject_GetAttrString(object, "__name__");
        if (s) {
          Q_ASSERT(PyString_Check(s));
          signature = PyString_AsString(s);
          if (docstr.startsWith(signature + "(")) {
            signature = docstr;
          } else {
            signature += "(...)";
            if (!docstr.isEmpty()) {
              signature += "\n\n" + docstr;
            }
          }
          Py_DECREF(s);
        }
      }
    }
    
    if (func) {
      QString funcName;
      PyObject* s = PyObject_GetAttrString((PyObject*)func, "__name__");
      if (s) {
        Q_ASSERT(PyString_Check(s));
        funcName = PyString_AsString(s);
        Py_DECREF(s);
      }
      if (method && funcName == "__init__") {
        PyObject* s = PyObject_GetAttrString(object, "__name__");
        if (s) {
          Q_ASSERT(PyString_Check(s));
          funcName = PyString_AsString(s);
          Py_DECREF(s);
        }
      }
        
      QStringList arguments;
      QStringList defaults;
      QString varargs;
      QString varkeywords;
      // NOTE: This implementation is based on function getargs() in inspect.py.
      //       inspect.getargs() can handle anonymous (tuple) arguments, while this code does not.
      //       It can be implemented, but it may be rarely needed and not necessary.
      PyCodeObject* code = (PyCodeObject*)func->func_code;
      if (code->co_varnames) {
        int nargs = code->co_argcount;
        Q_ASSERT(PyTuple_Check(code->co_varnames));
        for (int i=0; i<nargs; i++) {
          PyObject* name = PyTuple_GetItem(code->co_varnames, i);
          Q_ASSERT(PyString_Check(name));
          arguments << PyString_AsString(name);
        }
        if (code->co_flags & CO_VARARGS) {
          PyObject* s = PyTuple_GetItem(code->co_varnames, nargs);
          Q_ASSERT(PyString_Check(s));
          varargs = PyString_AsString(s);
          nargs += 1;
        }
        if (code->co_flags & CO_VARKEYWORDS) {
          PyObject* s = PyTuple_GetItem(code->co_varnames, nargs);
          Q_ASSERT(PyString_Check(s));
          varkeywords = PyString_AsString(s);
        }
      }
      
      PyObject* defaultsTuple = func->func_defaults;
      if (defaultsTuple) {
        Q_ASSERT(PyTuple_Check(defaultsTuple));
        for (Py_ssize_t i=0; i<PyTuple_Size(defaultsTuple); i++) {
          PyObject* d = PyTuple_GetItem(defaultsTuple, i);
          PyObject* s = PyObject_Repr(d);
          Q_ASSERT(PyString_Check(s));
          defaults << PyString_AsString(s);
          Py_DECREF(s);
        }
      }
      
      int firstdefault = arguments.size() - defaults.size();
      for (int i=0; i<arguments.size(); i++) {
        if (!signature.isEmpty()) { signature += ", "; }
        if (!method || i>0 || arguments[i] != "self") {
          signature += arguments[i];
          if (i >= firstdefault) {
            signature += "=" + defaults[i-firstdefault];
          }
        }
      }
      if (!varargs.isEmpty()) {
        if (!signature.isEmpty()) { signature += ", "; }
        signature += "*" + varargs;
      }
      if (!varkeywords.isEmpty()) {
        if (!signature.isEmpty()) { signature += ", "; }
        signature += "**" + varkeywords;
      }
      signature = funcName + "(" + signature + ")";
    }
    
    if (method && decrefMethod) {
      Py_DECREF(method);
    }
  }
  
  return signature;
}

void PythonQtPrivate::shellClassDeleted( void* shellClass )
{
  PythonQtInstanceWrapper* wrap = _wrappedObjects.value(shellClass);
  if (wrap && wrap->_wrappedPtr) {
    // this is a pure C++ wrapper and the shell has gone, so we need
    // to set the _wrappedPtr to NULL on the wrapper
    wrap->_wrappedPtr = NULL;
    // and then we remove the wrapper, since the wrapped class is gone
    _wrappedObjects.remove(shellClass);
  }
  // if the wrapper is a QObject, we do not handle this here,
  // it will be handled by the QPointer<> to the QObject, which becomes NULL
  // via the QObject destructor.
}

PyObject* PythonQtPrivate::wrapMemoryAsBuffer( const void* data, Py_ssize_t size )
{
  // P3K port needed later on!
  return PyBuffer_FromMemory((void*)data, size);
}

PyObject* PythonQtPrivate::wrapMemoryAsBuffer( void* data, Py_ssize_t size )
{
  // P3K port needed later on!
  return PyBuffer_FromReadWriteMemory(data, size);
}
