#include "effectpropertytooleditor.h"

EffectPropertyToolEditor::EffectPropertyToolEditor(QPushButton *btn,
                                               QObject *parent)
    : PropertyToolEditor(btn, parent)
{
    m_btn = btn;
    connect(btn, SIGNAL(clicked()),
            this, SLOT(changeEffect()));

    changeEffect();
}

void EffectPropertyToolEditor::changeEffect()
{
    if(m_btn->isChecked())
    {
        changeValue("blur");
    }
    else
    {
        changeValue("pixelize");
    }
}
