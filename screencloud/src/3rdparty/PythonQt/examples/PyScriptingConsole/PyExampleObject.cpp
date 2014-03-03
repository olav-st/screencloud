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
 *  Contact information: MeVis Research GmbH, Universitaetsallee 29,
 *  28359 Bremen, Germany or:
 *
 *  http://www.mevis.de
 *
 */

//----------------------------------------------------------------------------------
/*!
// \file    PyExampleObject.cpp
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-10
*/
//----------------------------------------------------------------------------------

#include "PyExampleObject.h"
#include <QMessageBox>
#include <QDir>

PyExampleObject::PyExampleObject():QObject(NULL)
{
}

PyObject* PyExampleObject::getMainModule() {
  return PythonQt::self()->getMainModule();
}

void PyExampleObject::showInformation(const QString& str)
{
 QMessageBox::information ( NULL, "Test", str);
}

QStringList PyExampleObject::readDirectory(const QString& dir)
{
  QDir d(dir);
  return d.entryList();
}

QMainWindow* PyExampleObject::createWindow()
{
  QMainWindow* m = new QMainWindow();
  QPushButton* b = new QPushButton(m);
  b->setObjectName("button1");

  m->show();
  return m;
}

QObject* PyExampleObject::findChild(QObject* o, const QString& name)
{
  return qFindChild<QObject*>(o, name);
}

QVariantMap PyExampleObject::testMap()
{
  QVariantMap m;
  m.insert("a", QStringList() << "test1" << "test2");
  m.insert("b", 12);
  m.insert("c", 12.);
  return m;
}
