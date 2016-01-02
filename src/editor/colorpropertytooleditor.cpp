#include "colorpropertytooleditor.h"

#include "qcolorbutton.h"
#include <QVariant>

ColorPropertyToolEditor::ColorPropertyToolEditor(QColorButton *btn, QObject *parent)
    : PropertyToolEditor(btn, parent)
{
    connect(btn, SIGNAL(selected(QColor)),
            this, SLOT(changeColor(QColor)));
    connect(this, SIGNAL(valueSet(QVariant)),
            this, SLOT(setColor(QVariant)));

    setValue(QVariant::fromValue(btn->color()));
}

ColorPropertyToolEditor::~ColorPropertyToolEditor()
{}

void ColorPropertyToolEditor::changeColor(const QColor &color)
{
    changeValue(QVariant(color));
}

void ColorPropertyToolEditor::setColor(const QVariant &var)
{
    QColorButton *btn = static_cast<QColorButton*>(widget());
    btn->blockSignals(true);
    btn->setColor(var.value<QColor>());
    btn->blockSignals(false);
}
