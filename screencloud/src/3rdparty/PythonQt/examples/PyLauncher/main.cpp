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
// \file    PyGuiExample.cpp
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2007-04
*/
//----------------------------------------------------------------------------------

#include "PythonQt.h"
#include "PythonQt_QtAll.h"
#include "gui/PythonQtScriptingConsole.h"

#include <QApplication>
#include <QDir>
#include <QMessageBox>


int main( int argc, char **argv )
{
  QApplication qapp(argc, argv);

  PythonQt::init(PythonQt::IgnoreSiteModule | PythonQt::RedirectStdOut);
  PythonQt_QtAll::init();

  PythonQtObjectPtr  mainContext = PythonQt::self()->getMainModule();

  bool showConsole = false;
  QStringList files;
  for (int i = 1; i < argc; i++) {
    QString arg = argv[i];
    QString argLower = arg.toLower();
    if (argLower == "-console" || argLower == "-c") {
      showConsole = true;
    } else {
      QString file = arg;
      QFileInfo info(file);
      if (info.exists()) {
        files << info.absoluteFilePath();
        // add the file's absolute path for local importing
        PythonQt::self()->addSysPath(info.absolutePath());
      } else {
        QMessageBox::warning(NULL, "PyLauncher", QString("File does not exist: %1").arg(file));
      }
    }
  }
  PythonQtScriptingConsole console(NULL, mainContext);

  foreach(QString file, files) {
    mainContext.evalFile(file);
  }
  if (showConsole || console.hadError()) {
    console.show();
  }

  return qapp.exec();
}

