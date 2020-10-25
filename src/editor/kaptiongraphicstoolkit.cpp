#include "kaptiongraphicstoolkit.h"

#include <QSet>
#include <QMetaProperty>
#include <QList>
#include <QLayout>
#include <QMetaObject>
#include <QApplication>
#include "editor/items/kaptiongraphicsitem.h"
#include "propertytooleditor.h"

const QEvent::Type KaptionGraphicsToolkit::ItemSetupEvent
= static_cast<QEvent::Type>(QEvent::registerEventType());

KaptionGraphicsToolkit::KaptionGraphicsToolkit(QWidget *propertyToolbar,
                                               QObject *parent)
    : QObject(parent),
      m_bttnSignalMapper(new QSignalMapper(this)),
      m_propertySignalMapper(new QSignalMapper(this)),
      m_propertyToolbar(propertyToolbar)
{
    connect(m_bttnSignalMapper, SIGNAL(mapped(QString)),
            this, SLOT(selectItem(QString)));
    connect(m_propertySignalMapper, SIGNAL(mapped(QString)),
            this, SLOT(updatePropertyValue(QString)));
    m_propertyOffset = KaptionGraphicsItem::staticMetaObject.propertyOffset();
}

void KaptionGraphicsToolkit::bindPropertyTool(PropertyToolEditor *tool,
                                              const QString &property)
{
    if (!tool) return;

    m_propertiesMap.insert(property, tool);

    m_propertySignalMapper->setMapping(tool, property);
    connect(tool, SIGNAL(valueChanged(QVariant)),
            m_propertySignalMapper, SLOT(map()));
}

GraphicsItemFactory::CreationPolicy KaptionGraphicsToolkit::itemCreationPolicy() const
{
    if (m_selectedItemClassName.isEmpty()) return GraphicsItemFactory::Undefined;

    return m_factory.creationPolicy(m_selectedItemClassName);
}

KaptionGraphicsItem *KaptionGraphicsToolkit::createItem() const
{
    if (m_selectedItemClassName.isEmpty()) return 0;

    KaptionGraphicsItem *item = m_factory.newInstance(m_selectedItemClassName);
    setupItem(item);
    return item;
}

void KaptionGraphicsToolkit::updateItemsPropertyValue(QList<KaptionGraphicsItem *> items,
                                                 const char *property,
                                                 const QVariant &value) const
{
    for (int i=0; i<items.size(); ++i) {
        KaptionGraphicsItem *item = items.at(i);
        if (!item) continue;
        item->setProperty(property, value);
    }
}

void KaptionGraphicsToolkit::updateToolkitState(QList<KaptionGraphicsItem *> items)
{
    if (items.isEmpty()) {
        /*
        if (m_selectedItemClassName.isEmpty()) {
            selectItem(m_buttonItemMap.constBegin().key());
        }
        */
        return;
    }

    QList<KaptionGraphicsItem*> singleItem;
    QString className;
    if (items.size() == 1) {
        className = items.at(0)->metaObject()->className();
        singleItem.append(items.at(0));
    } else {
        QSet<QString> itemsFound;
        for (int i=0; i<items.size(); ++i) {
            QString className = items.at(i)->metaObject()->className();
            itemsFound.insert(className);
        }
        if (itemsFound.size() == 1) {
            KaptionGraphicsItem *item = items.last();
            className = item->metaObject()->className();
            singleItem.append(item);
        }
    }

    if (!singleItem.isEmpty()) {
        m_selectedItemClassName = className;
        updateGraphicsItemButtonsCheckedState();
        updatePropertyToolbar(singleItem);
    } else {
        deselectItem();
        updatePropertyToolbar(items);
    }
}

void KaptionGraphicsToolkit::selectItem(const QString &className, bool upt)
{
    if (m_selectedItemClassName == className
            || !m_buttonItemMap.contains(className)) {
        return;
    }

    m_selectedItemClassName = className;
    updateGraphicsItemButtonsCheckedState();
    if (upt) updatePropertyToolbar(m_selectedItemClassName);
    Q_EMIT itemSelected();
}

void KaptionGraphicsToolkit::updatePropertyValue(const QString &property)
{
    Q_EMIT propertyValueChanged(property, m_propertiesMap.value(property)->value());
}

void KaptionGraphicsToolkit::deselectItem()
{
    m_selectedItemClassName.clear();
    updateGraphicsItemButtonsCheckedState();
}

void KaptionGraphicsToolkit::setupItem(KaptionGraphicsItem *item) const
{
    if (!item) return;

    const QMetaObject *metaObject = item->metaObject();
    for (int i=m_propertyOffset; i<metaObject->propertyCount(); ++i) {
        const char *prop = metaObject->property(i).name();
        if (m_propertiesMap.contains(prop)) {
            PropertyToolEditor *tool = m_propertiesMap.value(prop);
            item->setProperty(prop, tool->value());
            QApplication::postEvent(tool, new QEvent(ItemSetupEvent));
        }
    }
}

void KaptionGraphicsToolkit::updateGraphicsItemButtonsCheckedState()
{
    QMapIterator<QString, QPushButton*> iterator(m_buttonItemMap);
    while (iterator.hasNext()) {
        iterator.next();
        if (iterator.key() == m_selectedItemClassName) {
            iterator.value()->setChecked(true);
            iterator.value()->setDisabled(true);
        } else {
            iterator.value()->setChecked(false);
            iterator.value()->setDisabled(false);
        }
    }
}

void KaptionGraphicsToolkit::updatePropertyToolbar(const QString &className)
{
    if (!m_propertyToolbar) return;

    const KaptionGraphicsItem *item = m_factory.prototype(className);
    if (!item) return;
    QList<QString> properties;
    const QMetaObject  *metaObject = item->metaObject();
    for (int i=m_propertyOffset; i<metaObject->propertyCount(); ++i) {
        properties.append(metaObject->property(i).name());
    }

    QSet<QWidget*> widgetsToAdd;
    for (int i=0; i<properties.size(); ++i) {
        if (!m_propertiesMap.contains(properties.at(i))) continue;
        PropertyToolEditor *tool = m_propertiesMap.value(properties.at(i));
        widgetsToAdd << tool->widget();
    }

    populatePropertyToolbar(widgetsToAdd);
}

void KaptionGraphicsToolkit::updatePropertyToolbar(QList<KaptionGraphicsItem*> items)
{
    if (items.isEmpty() || !m_propertyToolbar) return;

    QMap<QString, QVariant> properties;
    QSet<QString> itemsReadCache;
    for (int i=0; i<items.size(); i++) {
        const QMetaObject *metaObject = items.at(i)->metaObject();
        QString className = metaObject->className();
        if (itemsReadCache.contains(className)) continue;
        itemsReadCache.insert(className);
        for (int j=m_propertyOffset; j<metaObject->propertyCount(); ++j) {
            const char *name = metaObject->property(j).name();
            if (!properties.contains(name)) {
                properties.insert(name, items.at(i)->property(name));
            }
        }
    }

    QMapIterator<QString, QVariant> iterator(properties);
    QSet<QWidget*> widgetsToAdd;
    while (iterator.hasNext()) {
        iterator.next();
        if (m_propertiesMap.contains(iterator.key())) {
            PropertyToolEditor *tool = m_propertiesMap.value(iterator.key());
            tool->setValue(iterator.value());
            widgetsToAdd << tool->widget();
        }
    }

    populatePropertyToolbar(widgetsToAdd);
}

void KaptionGraphicsToolkit::populatePropertyToolbar(QSet<QWidget *> widgetsToAdd)
{
    QLayout *layout = m_propertyToolbar->layout();

    QSet<QWidget*> widgetsToRemove;
    for (int i=0; i<layout->count(); ++i) {
        QWidget *w = layout->itemAt(i)->widget();
        if (w) {
            if (!widgetsToAdd.contains(w)) {
                widgetsToRemove << w;
            } else {
                widgetsToAdd.remove(w);
            }
        }
    }

    if (widgetsToAdd.size() > 0) {
        QSetIterator<QWidget*> iterator(widgetsToAdd);
        while (iterator.hasNext()) {
            QWidget *w = iterator.next();
            layout->addWidget(w);
        }
    }

    if (widgetsToRemove.size() > 0) {
        QSetIterator<QWidget*> iterator(widgetsToRemove);
        while (iterator.hasNext()) {
            QWidget *w = iterator.next();
            layout->removeWidget(w);
            w->setParent(0);
        }
    }
}
