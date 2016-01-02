#include "propertytooleditor.h"

#include <QWidget>

PropertyToolEditor::PropertyToolEditor(QWidget *widget, QObject *parent)
    : QObject(parent),
      m_widget(widget)
{
}

PropertyToolEditor::~PropertyToolEditor()
{
    if (!m_widget) return;

    if (!m_widget->parent() && !m_widget->parentWidget()) {
        m_widget->deleteLater();
    }
}
