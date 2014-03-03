#ifndef _PYCUSTOMOBJECT_H
#define _PYCUSTOMOBJECT_H

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
// \file    CustomObject.h
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2007-4
*/
//----------------------------------------------------------------------------------

#include "PythonQt.h"
#include <QObject>


// declare our own copyable custom object
class CustomObject {
public:
  CustomObject() {}
  CustomObject(const QString& first, const QString& last) { _firstName = first; _lastName = last; }

  QString _firstName;
  QString _lastName;

};

// register it to the meta type system
Q_DECLARE_METATYPE(CustomObject)

// add a wrapper that allows to access the CustomObject from PythonQt
class CustomObjectWrapper : public QObject {

  Q_OBJECT

public slots:
  // add a constructor
  CustomObject* new_CustomObject(const QString& first, const QString& last) { return new CustomObject(first, last); }

  // add access methods

  QString firstName(CustomObject* o) { return o->_firstName; }

  QString lastName(CustomObject* o) { return o->_lastName; }

  void setFirstName(CustomObject* o, const QString& name) { o->_firstName = name; }

  void setLastName(CustomObject* o, const QString& name) { o->_lastName = name; }

};


#endif
