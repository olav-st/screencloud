#ifndef PROPERTYTOOLEDITOR_H
#define PROPERTYTOOLEDITOR_H

#include <QObject>
#include <QVariant>
#include <QDebug>
#include <QEvent>
#include <QWidget>
#include <QPointer>

class PropertyToolEditor : public QObject
{
    Q_OBJECT

public:
    explicit PropertyToolEditor(QWidget *widget, QObject *parent = 0);
    virtual ~PropertyToolEditor();

    QVariant value() const;
    virtual void setValue(const QVariant &var);

    QWidget *widget() const;

Q_SIGNALS:
    void valueChanged(const QVariant &);
    void valueSet(const QVariant &);

protected:
    void changeValue(const QVariant &var);

private:
    QPointer<QWidget> m_widget;
    QVariant m_value;
};

inline
QVariant PropertyToolEditor::value() const
{
    return m_value;
}

inline
void PropertyToolEditor::setValue(const QVariant &var)
{
    if (var == m_value) return;

    m_value = var;
    emit valueSet(m_value);
}

inline
QWidget *PropertyToolEditor::widget() const
{
    return m_widget;
}

inline
void PropertyToolEditor::changeValue(const QVariant &var)
{
    if (var == m_value) return;

    m_value = var;
    emit valueChanged(m_value);
}

#endif // PROPERTYTOOLEDITOR_H
