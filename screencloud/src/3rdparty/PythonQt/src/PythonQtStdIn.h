#ifndef _PYTHONQTSTDIN_H
#define _PYTHONQTSTDIN_H

/*
 *
 *  Copyright (C) 2011 MeVis Medical Solutions AG All Rights Reserved.
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
// \file    PythonQtStdIn.h
// \author  Jean-Christophe Fillion-Robin
// \author  Last changed by $Author: jcfr $
// \date    2011
*/
//----------------------------------------------------------------------------------


#include "PythonQtPythonInclude.h"
#include "structmember.h"
#include <QString>

//! declares the type of the stdout redirection class
extern PyTypeObject PythonQtStdInRedirectType;

//! declares the callback that is called from the write() function
typedef QString PythonQtInputChangedCB(void* callData);

//! declares the stdin redirection class
typedef struct {
  PyObject_HEAD
  PythonQtInputChangedCB* _cb;
  void * _callData;
} PythonQtStdInRedirect;

#endif
