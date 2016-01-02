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

#include "pythonconsole.h"

PythonConsole::PythonConsole(QWidget *parent, PythonQtObjectPtr pythonContext) : QTextEdit(parent)
{
    this->pythonContext = pythonContext;
    colorDefault = textColor();
    colorError = Qt::red;
    prompt = "py>";

    connect(PythonQt::self(), SIGNAL(pythonStdOut(const QString&)), this, SLOT(stdOut(const QString&)));
    connect(PythonQt::self(), SIGNAL(pythonStdErr(const QString&)), this, SLOT(stdErr(const QString&)));

    appendPrompt();
}

void PythonConsole::stdOut(const QString &text)
{
    append(text);
}

void PythonConsole::stdErr(const QString &text)
{
    appendErrorMsg(text);
}

void PythonConsole::keyPressEvent(QKeyEvent *e)
{
    switch (e->key()) {
    case Qt::Key_Return:
    {
        QString line = toPlainText().split("\n").last();
        line.remove(prompt + " "); //Remove prompt
        executeCode(line);
        appendPrompt();
        break;
    }
    case Qt::Key_Backspace:
    {
        if(textCursor().position() > promptEndPos) //Make sure promt cant be erased
        {
            QTextEdit::keyPressEvent(e);
        }
        break;
    }
    default:
        QTextEdit::keyPressEvent(e);
        break;
    }

}

void PythonConsole::executeCode(const QString &code)
{
    QVariant result = pythonContext.evalScript(code);
    if(result.canConvert<QString>())
    {
        stdOut(result.toString());
    }
}

void PythonConsole::appendPrompt()
{
    append(QString(prompt) + " ");
    promptEndPos = textCursor().position();
}

void PythonConsole::appendErrorMsg(const QString &errorMsg)
{
    setTextColor(colorError);
    append(errorMsg);
    setTextColor(colorDefault);
}
