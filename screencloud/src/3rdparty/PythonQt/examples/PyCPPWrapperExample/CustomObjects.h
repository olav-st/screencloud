#ifndef _PYCUSTOMOBJECTS_H
#define _PYCUSTOMOBJECTS_H

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
// \file    CustomObjects.h
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2007-4
*/
//----------------------------------------------------------------------------------

#include "PythonQt.h"
#include "PythonQtCppWrapperFactory.h"
#include <QObject>


// declare our own custom object
class CustomObject {
public:
  CustomObject() {}
  CustomObject(const QString& first, const QString& last) { _firstName = first; _lastName = last; }

  QString _firstName;
  QString _lastName;

};


// add a decorator that allows to access the CustomObject from PythonQt
class CustomObjectWrapper : public QObject {

  Q_OBJECT

public slots:
  // add a constructor
  CustomObject* new_CustomObject(const QString& first, const QString& last) { return new CustomObject(first, last); }

  // add a destructor
  void delete_CustomObject(CustomObject* o) { delete o; }

  // add access methods
  QString firstName(CustomObject* o) { return o->_firstName; }

  QString lastName(CustomObject* o) { return o->_lastName; }

  void setFirstName(CustomObject* o, const QString& name) { o->_firstName = name; }

  void setLastName(CustomObject* o, const QString& name) { o->_lastName = name; }

};


//------------------------------------------------------------------------------------------------
// alternative: we create a wrapper factory, which creates a wrapper object for each CPP instance:
//------------------------------------------------------------------------------------------------

// declare our own custom object
class CustomObject2 {
public:
  CustomObject2() {}
  CustomObject2(const QString& first, const QString& last) { _firstName = first; _lastName = last; }

  QString _firstName;
  QString _lastName;

};


// add a decorator that allows to access the CustomObject from PythonQt
class CustomObject2Wrapper : public QObject {

  Q_OBJECT

public:
  CustomObject2Wrapper(CustomObject2* obj) { _ptr = obj; }

public slots:
  // add access methods
  QString firstName() { return _ptr->_firstName; }

  QString lastName() { return _ptr->_lastName; }

  void setFirstName(const QString& name) { _ptr->_firstName = name; }

  void setLastName(const QString& name) { _ptr->_lastName = name; }

private:
  CustomObject2* _ptr;
};

// additional constructor/destructor for CustomObject2 (optional)
class CustomObject2Constructor : public QObject {

  Q_OBJECT

public slots:
  // add a constructor
  CustomObject2* new_CustomObject2(const QString& first, const QString& last) { return new CustomObject2(first, last); }

  // add a destructor
  void delete_CustomObject2(CustomObject2* o) { delete o; }
};

// a factory that can create wrappers for CustomObject2
class CustomFactory : public PythonQtCppWrapperFactory
{
public:
  virtual QObject* create(const QByteArray& name, void *ptr) {
    if (name == "CustomObject2") {
      return new CustomObject2Wrapper((CustomObject2*)ptr);
    }
    return NULL;
  }
};

#endif
