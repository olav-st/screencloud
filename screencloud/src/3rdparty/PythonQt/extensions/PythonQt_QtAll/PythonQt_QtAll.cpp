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

#include "PythonQt_QtAll.h"

#include "PythonQt.h"

void PythonQt_init_QtGui(PyObject*);
void PythonQt_init_QtSvg(PyObject*);
void PythonQt_init_QtSql(PyObject*);
void PythonQt_init_QtNetwork(PyObject*);
void PythonQt_init_QtCore(PyObject*);
void PythonQt_init_QtWebKit(PyObject*);
void PythonQt_init_QtOpenGL(PyObject*);
void PythonQt_init_QtXml(PyObject*);
void PythonQt_init_QtXmlPatterns(PyObject*);
void PythonQt_init_QtUiTools(PyObject*);
void PythonQt_init_QtPhonon(PyObject*);

namespace PythonQt_QtAll
{
  PYTHONQT_QTALL_EXPORT void init() {
    PythonQt_init_QtCore(0);
    PythonQt_init_QtNetwork(0);
    PythonQt_init_QtGui(0);
    PythonQt_init_QtXml(0);
    PythonQt_init_QtSvg(0);
    PythonQt_init_QtSql(0);
    PythonQt_init_QtWebKit(0);
    PythonQt_init_QtOpenGL(0);
    PythonQt_init_QtUiTools(0);
    // Does not compile yet:
//    PythonQt_init_QtXmlPatterns(0);
//    PythonQt_init_QtPhonon(0);
  };
};


