#ifndef _PYEXAMPLEDECORATORS_H
#define _PYEXAMPLEDECORATORS_H

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
// \file    PyExampleDecorators.h
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2007-4
*/
//----------------------------------------------------------------------------------

#include "PythonQt.h"
#include <QDebug>
#include <QObject>
#include <QPushButton>

// an example CPP object
class YourCPPObject {
public:
  YourCPPObject(int arg1, float arg2) { a = arg1; b = arg2; }

  float doSomething(int arg1) { return arg1*a*b; };

  private:

  int a;
  float b;
};

// an example decorator
class PyExampleDecorators : public QObject
{
  Q_OBJECT

public slots:
  // add a constructor to QSize variant that takes a QPoint
  QSize* new_QSize(const QPoint& p) { return new QSize(p.x(), p.y()); }

  // add a constructor for QPushButton that takes a text and a parent widget
  QPushButton* new_QPushButton(const QString& text, QWidget* parent=NULL) { return new QPushButton(text, parent); }

  // add a constructor for a CPP object
  YourCPPObject* new_YourCPPObject(int arg1, float arg2) { return new YourCPPObject(arg1, arg2); }

  // add a destructor for a CPP object
  void delete_YourCPPObject(YourCPPObject* obj) { delete obj; }

  // add a static method to QWidget
  QWidget* static_QWidget_mouseGrabber() { return QWidget::mouseGrabber(); }

  // add an additional slot to QWidget (make move() callable, which is not declared as a slot in QWidget)
  void move(QWidget* w, const QPoint& p) { w->move(p); }

  // add an additional slot to QWidget, overloading the above move method
  void move(QWidget* w, int x, int y) { w->move(x,y); }

  // add a method to your own CPP object
  int doSomething(YourCPPObject* obj, int arg1) { return obj->doSomething(arg1); }
};


#endif
