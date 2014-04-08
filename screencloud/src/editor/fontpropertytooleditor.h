#ifndef FONTPROPERTYTOOLEDITOR_H
#define FONTPROPERTYTOOLEDITOR_H

#include "propertytooleditor.h"

class QPushButton;

class FontPropertyToolEditor : public PropertyToolEditor
{
    Q_OBJECT

public:
    FontPropertyToolEditor(QPushButton *bttn, QObject *parent = 0);

private Q_SLOTS:
    void changeFont();
};

#endif // FONTPROPERTYTOOLEDITOR_H
