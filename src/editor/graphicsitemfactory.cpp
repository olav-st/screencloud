#include "graphicsitemfactory.h"

#include <QMetaObject>
#include <QDebug>
#include "editor/items/kaptiongraphicsitem.h"

GraphicsItemFactory::~GraphicsItemFactory()
{
    QMapIterator<QString, KaptionGraphicsItem*> iterator(m_prototypes);
    while (iterator.hasNext()) {
        iterator.next();
        iterator.value()->deleteLater();
    }
}

QString GraphicsItemFactory::registerPrototype(KaptionGraphicsItem *item)
{
    QString className;
    if (!item) return className;
    className = item->metaObject()->className();
    m_prototypes[className] = item;
    return className;
}

const KaptionGraphicsItem *GraphicsItemFactory::prototype(const QString &className) const
{
    return m_prototypes.value(className, 0);
}

GraphicsItemFactory::CreationPolicy GraphicsItemFactory::creationPolicy(const QString &className) const
{
    CreationPolicy policy = Undefined;
    if (m_prototypes.contains(className)) {
        if (m_prototypes.value(className)->isDynamicShape()) {
            policy = Dynamic;
        } else {
            policy = Static;
        }
    }
    return policy;
}

KaptionGraphicsItem *GraphicsItemFactory::newInstance(const QString &className) const
{
    KaptionGraphicsItem *item;
    item = 0;
    if (m_prototypes.contains(className)) {
        item = static_cast<KaptionGraphicsItem*>
                (m_prototypes.value(className)->metaObject()->newInstance());
    }
    return item;
}
