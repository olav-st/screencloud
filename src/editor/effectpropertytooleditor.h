#ifndef EFFECTPROPERTYTOOLEDITOR_H
#define EFFECTPROPERTYTOOLEDITOR_H

#include "propertytooleditor.h"
#include <QPushButton>

class EffectPropertyToolEditor : public PropertyToolEditor
{
    Q_OBJECT

public:
    EffectPropertyToolEditor(QPushButton *btn, QObject *parent = 0);

private Q_SLOTS:
    void changeEffect();

private:
    QPushButton* m_btn;
};

#endif // EFFECTPROPERTYTOOLEDITOR_H
