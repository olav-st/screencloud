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
// \file    PythonQtTests.cpp
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQt.h"
#include <QApplication>
#include <QTextBrowser>
#include <QLayout>
#include <QGroupBox>
#include <QPushButton>
#include <QLineEdit>

int main( int argc, char **argv )
{
  QApplication qapp(argc, argv);
  
  // init PythonQt and Python
  PythonQt::init();
  
  // get the __main__ python module
  PythonQtObjectPtr mainModule = PythonQt::self()->getMainModule();
  
  // evaluate a simple python script and receive the result a qvariant:
  QVariant result = mainModule.evalScript("19*2+4", Py_eval_input);
  
  // create a small Qt GUI
  QVBoxLayout*  vbox = new QVBoxLayout;
  QGroupBox*    box  = new QGroupBox;
  QTextBrowser* browser = new QTextBrowser(box);
  QLineEdit*    edit = new QLineEdit(box);
  QPushButton*  button = new QPushButton(box);
  button->setObjectName("button1");
  edit->setObjectName("edit");
  browser->setObjectName("browser");
  vbox->addWidget(browser);
  vbox->addWidget(edit);
  vbox->addWidget(button);
  box->setLayout(vbox);
  
  // make the groupbox to the python under the name "box"
  mainModule.addObject("box", box);
    
  // evaluate the python script which is defined in the resources
  mainModule.evalFile(":GettingStarted.py");
  
  // define a python method that appends the passed text to the browser
  mainModule.evalScript("def appendText(text):\n  box.browser.append(text)");
  // shows how to call the method with a text that will be append to the browser
  mainModule.call("appendText", QVariantList() << "The ultimate answer is ");


  
  return qapp.exec();
}

