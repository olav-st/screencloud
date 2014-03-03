#ifndef _PYTHONQTSTDDECORATORS_H
#define _PYTHONQTSTDDECORATORS_H

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
// \file    PythonQtStdDecorators.h
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2007-04
*/
//----------------------------------------------------------------------------------

#include "PythonQtPythonInclude.h"

#include "PythonQtSystem.h"

#include <QObject>
#include <QVariantList>
#include <QTextDocument>
#include <QColor>
#include <QDateTime>
#include <QDate>
#include <QTime>
#include <QImage>
#include <QMetaMethod>
#include <QMetaEnum>
#include <QMetaProperty>

class PYTHONQT_EXPORT PythonQtStdDecorators : public QObject
{
  Q_OBJECT

public slots:
  bool connect(QObject* sender, const QByteArray& signal, PyObject* callable);
  bool connect(QObject* sender, const QByteArray& signal, QObject* receiver, const QByteArray& slot,  Qt::ConnectionType type = Qt::AutoConnection);
  bool connect(QObject* receiver, QObject* sender, const QByteArray& signal, const QByteArray& slot,  Qt::ConnectionType type = Qt::AutoConnection) { return connect(sender, signal, receiver, slot, type); }
  bool static_QObject_connect(QObject* sender, const QByteArray& signal, PyObject* callable) { return connect(sender, signal, callable); }
  bool static_QObject_connect(QObject* sender, const QByteArray& signal, QObject* receiver, const QByteArray& slot,  Qt::ConnectionType type = Qt::AutoConnection)  { return connect(sender, signal, receiver, slot, type); }
  bool disconnect(QObject* sender, const QByteArray& signal, PyObject* callable = NULL);
  bool disconnect(QObject* sender, const QByteArray& signal, QObject* receiver, const QByteArray& slot);
  bool static_QObject_disconnect(QObject* sender, const QByteArray& signal, PyObject* callable = NULL) { return disconnect(sender, signal, callable); }
  bool static_QObject_disconnect(QObject* sender, const QByteArray& signal, QObject* receiver, const QByteArray& slot) { return connect(sender, signal, receiver, slot); }

  const QMetaObject* metaObject( QObject* obj );

  QObject* parent(QObject* o);
  void setParent(QObject* o, QObject* parent);

  const QObjectList* children(QObject* o);
  QObject* findChild(QObject* parent, PyObject* type, const QString& name = QString());
  QList<QObject*> findChildren(QObject* parent, PyObject* type, const QString& name= QString());
  QList<QObject*> findChildren(QObject* parent, PyObject* type, const QRegExp& regExp);

  bool setProperty(QObject* o, const char* name, const QVariant& value);
  QVariant property(QObject* o, const char* name);

  double static_Qt_qAbs(double a) { return qAbs(a); }
  double static_Qt_qBound(double a,double b,double c) { return qBound(a,b,c); }
  void static_Qt_qDebug(const QByteArray& msg) { qDebug("%s", msg.constData()); }
  // TODO: multi arg qDebug...
  void static_Qt_qWarning(const QByteArray& msg) { qWarning("%s", msg.constData()); }
  // TODO: multi arg qWarning...
  void static_Qt_qCritical(const QByteArray& msg) { qCritical("%s", msg.constData()); }
  // TODO: multi arg qCritical...
  void static_Qt_qFatal(const QByteArray& msg) { qFatal("%s", msg.constData()); }
  // TODO: multi arg qFatal...
  bool static_Qt_qFuzzyCompare(double a, double b) { return qFuzzyCompare(a, b); }
  double static_Qt_qMax(double a, double b) { return qMax(a, b); }
  double static_Qt_qMin(double a, double b) { return qMin(a, b); }
  int static_Qt_qRound(double a) { return qRound(a); }
  qint64 static_Qt_qRound64(double a) { return qRound64(a); }
  const char* static_Qt_qVersion() { return qVersion(); }
  int static_Qt_qrand() { return qrand(); }
  void static_Qt_qsrand(uint a) { qsrand(a); }

  QString tr(QObject* obj, const QByteArray& text, const QByteArray& ambig = QByteArray(), int n = -1);

  QByteArray static_Qt_SIGNAL(const QByteArray& s) { return QByteArray("2") + s; }
  QByteArray static_Qt_SLOT(const QByteArray& s) { return QByteArray("1") + s; }

private:
  QObject* findChild(QObject* parent, const char* typeName, const QMetaObject* meta, const QString& name);
  int findChildren(QObject* parent, const char* typeName, const QMetaObject* meta, const QString& name, QList<QObject*>& list);
  int findChildren(QObject* parent, const char* typeName, const QMetaObject* meta, const QRegExp& regExp, QList<QObject*>& list);
};

class PythonQtWrapper_QMetaObject : public QObject
{
  Q_OBJECT

public slots:
  const char *className(QMetaObject* obj) const { return obj->className(); }
  const QMetaObject *superClass(QMetaObject* obj) const { return obj->superClass(); }

  int methodOffset(QMetaObject* obj) const { return obj->methodOffset(); }
  int enumeratorOffset(QMetaObject* obj) const { return obj->enumeratorOffset(); }
  int propertyOffset(QMetaObject* obj) const { return obj->propertyOffset(); }
  int classInfoOffset(QMetaObject* obj) const { return obj->classInfoOffset(); }

  int constructorCount(QMetaObject* obj) const { return obj->constructorCount(); }
  int methodCount(QMetaObject* obj) const { return obj->methodCount(); }
  int enumeratorCount(QMetaObject* obj) const { return obj->enumeratorCount(); }
  int propertyCount(QMetaObject* obj) const { return obj->propertyCount(); }
  int classInfoCount(QMetaObject* obj) const { return obj->classInfoCount(); }

  int indexOfConstructor(QMetaObject* obj, const char *constructor) const { return obj->indexOfConstructor(constructor); }
  int indexOfMethod(QMetaObject* obj, const char *method) const { return obj->indexOfMethod(method); }
  int indexOfSignal(QMetaObject* obj, const char *signal) const { return obj->indexOfSignal(signal); }
  int indexOfSlot(QMetaObject* obj, const char *slot) const { return obj->indexOfSlot(slot); }
  int indexOfEnumerator(QMetaObject* obj, const char *name) const { return obj->indexOfEnumerator(name); }
  int indexOfProperty(QMetaObject* obj, const char *name) const { return obj->indexOfProperty(name); }
  int indexOfClassInfo(QMetaObject* obj, const char *name) const { return obj->indexOfClassInfo(name); }

  QMetaMethod constructor(QMetaObject* obj, int index) const { return obj->constructor(index); }
  QMetaMethod method(QMetaObject* obj, int index) const { return obj->method(index); }
  QMetaEnum enumerator(QMetaObject* obj, int index) const { return obj->enumerator(index); }
  QMetaProperty property(QMetaObject* obj, int index) const { return obj->property(index); }
  QMetaClassInfo classInfo(QMetaObject* obj, int index) const { return obj->classInfo(index); }
  QMetaProperty userProperty(QMetaObject* obj) const { return obj->userProperty(); }

  bool static_QMetaObject_checkConnectArgs(const char *signal, const char *method) { return QMetaObject::checkConnectArgs(signal, method); }
  QByteArray static_QMetaObject_normalizedSignature(const char *method) { return QMetaObject::normalizedSignature(method); }
  QByteArray static_QMetaObject_normalizedType(const char *type) { return QMetaObject::normalizedType(type); }

};

#endif
