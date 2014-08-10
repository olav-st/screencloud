#ifndef NUMBERPROPERTYTOOLEDITOR_H
#define NUMBERPROPERTYTOOLEDITOR_H

#include "propertytooleditor.h"

class NumberSelector;

class NumberPropertyToolEditor : public PropertyToolEditor
{
    Q_OBJECT

public:
    NumberPropertyToolEditor(QObject *parent = 0);

    virtual void setValue(const QVariant &var);

protected:
    void customEvent(QEvent *event);

private Q_SLOTS:
    void changeNumber(int number);
    void setNumber(const QVariant &var);

private:
    NumberSelector *m_ns;
};

inline
void NumberPropertyToolEditor::setValue(const QVariant &var)
{
    Q_UNUSED(var)
}

#endif // NUMBERPROPERTYTOOLEDITOR_H
