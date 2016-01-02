#include "numberpropertytooleditor.h"

#include "numberselector.h"
#include "kaptiongraphicstoolkit.h"

NumberPropertyToolEditor::NumberPropertyToolEditor(QObject *parent)
    : PropertyToolEditor(new NumberSelector(), parent)
{
    m_ns = static_cast<NumberSelector*>(widget());

    connect(m_ns, SIGNAL(numberChanged(int)),
            this, SLOT(changeNumber(int)));
    connect(this, SIGNAL(valueSet(QVariant)),
            this, SLOT(setNumber(QVariant)));

    m_ns->setNumber(1);
}

void NumberPropertyToolEditor::customEvent(QEvent *event)
{
    if (event->type() == KaptionGraphicsToolkit::ItemSetupEvent) {
        m_ns->increment();
    }
}

void NumberPropertyToolEditor::changeNumber(int number)
{
    changeValue(QVariant(number));
}

void NumberPropertyToolEditor::setNumber(const QVariant &var)
{
    m_ns->setNumber(var.toInt());
}
