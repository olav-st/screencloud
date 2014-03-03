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
// \file    PythonQtStdIn.cpp
// \author  Jean-Christophe Fillion-Robin
// \author  Last changed by $Author: jcfr $
// \date    2011
*/
//----------------------------------------------------------------------------------

#include "PythonQtStdIn.h"

static PyObject *PythonQtStdInRedirect_new(PyTypeObject *type, PyObject * /*args*/, PyObject * /*kwds*/)
{
  PythonQtStdInRedirect *self;
  self = (PythonQtStdInRedirect *)type->tp_alloc(type, 0);
  self->_cb = NULL;
  self->_callData = NULL;

  return (PyObject *)self;
}

static PyObject *PythonQtStdInRedirect_readline(PyObject * self, PyObject * args)
{
  PythonQtStdInRedirect*  s = (PythonQtStdInRedirect*)self;
  QString string;
  if (s->_cb) {
    string =  (*s->_cb)(s->_callData);
    }
  return Py_BuildValue(const_cast<char*>("s"), const_cast<char*>(string.toAscii().data()));
}

static PyMethodDef PythonQtStdInRedirect_methods[] = {
  {"readline", (PyCFunction)PythonQtStdInRedirect_readline, METH_VARARGS,
   "read input line"},
  {NULL,    NULL, 0 , NULL} /* sentinel */
};

static PyMemberDef PythonQtStdInRedirect_members[] = {
  {NULL}  /* Sentinel */
};

PyTypeObject PythonQtStdInRedirectType = {
    PyObject_HEAD_INIT(NULL)
    0,                         /*ob_size*/
    "PythonQtStdInRedirect",             /*tp_name*/
    sizeof(PythonQtStdInRedirect),             /*tp_basicsize*/
    0,                         /*tp_itemsize*/
    0, /*tp_dealloc*/
    0,                         /*tp_print*/
    0,                         /*tp_getattr*/
    0,                         /*tp_setattr*/
    0,           /*tp_compare*/
    0,              /*tp_repr*/
    0,                         /*tp_as_number*/
    0,                         /*tp_as_sequence*/
    0,                         /*tp_as_mapping*/
    0,                         /*tp_hash */
    0,                         /*tp_call*/
    0,                         /*tp_str*/
    0,                         /*tp_getattro*/
    0,                         /*tp_setattro*/
    0,                         /*tp_as_buffer*/
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE, /*tp_flags*/
    "PythonQtStdInRedirect",           /* tp_doc */
    0,                   /* tp_traverse */
    0,                   /* tp_clear */
    0,                   /* tp_richcompare */
    0,                   /* tp_weaklistoffset */
    0,                   /* tp_iter */
    0,                   /* tp_iternext */
    PythonQtStdInRedirect_methods,                   /* tp_methods */
    PythonQtStdInRedirect_members,                   /* tp_members */
    0,                   /* tp_getset */
    0,                         /* tp_base */
    0,                         /* tp_dict */
    0,                         /* tp_descr_get */
    0,                         /* tp_descr_set */
    0,                         /* tp_dictoffset */
    0,                         /* tp_init */
    0,                         /* tp_alloc */
    PythonQtStdInRedirect_new,                 /* tp_new */
};
