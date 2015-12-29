/* * ScreenCloud - An easy to use screenshot sharing application
 * Copyright (C) 2014 Olav Sortland Thoresen <olav.s.th@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
 * PARTICULAR PURPOSE. See the GNU General Public License for more details.
 */

#ifndef PYTHONCONSOLE_H
#define PYTHONCONSOLE_H

#include <QTextEdit>
#include <PythonQt.h>
#include <PythonQtObjectPtr.h>
#include <QColor>
#include <QKeyEvent>

class PythonConsole : public QTextEdit
{
    Q_OBJECT
public:
    explicit PythonConsole(QWidget *parent, PythonQtObjectPtr pythonContext);

signals:

public slots:
    void stdOut(const QString& text);
    void stdErr(const QString& text);
    void keyPressEvent (QKeyEvent * e);

private:
    void executeCode(const QString& code);
    void appendPrompt();
    void appendErrorMsg(const QString& errorMsg);

    PythonQtObjectPtr pythonContext;
    QColor colorDefault, colorError;
    QString prompt;
    int promptEndPos;
};

#endif // PYTHONCONSOLE_H
