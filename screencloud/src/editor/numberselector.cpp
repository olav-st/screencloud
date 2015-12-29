#include "numberselector.h"

#include <QPushButton>
#include <QSpinBox>
#include <QVBoxLayout>
#include <QSignalMapper>

NumberSelector::NumberSelector(QWidget *parent)
    : QWidget(parent),
      m_spinBox(new QSpinBox(this))
{
    m_spinBox->setToolTip(tr("Edit item number"));
    m_spinBox->setMinimum(1);
    m_spinBox->setMaximum(99);
    m_spinBox->setFrame(false);

    connect(m_spinBox, SIGNAL(valueChanged(int)),
            this, SLOT(setNumber(int)));

    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(m_spinBox);

    setLayout(layout);
}

int NumberSelector::number() const
{
    return m_spinBox->value();
}

void NumberSelector::setNumber(int val)
{
    Q_EMIT numberChanged(m_spinBox->value());
}

void NumberSelector::increment()
{
    m_spinBox->setValue(m_spinBox->value()+1);
}
