#include "kaptiongraphicsitem.h"

#include <QColor>
#include <QDebug>
#include "handlegraphicsitem.h"

KaptionGraphicsItem::KaptionGraphicsItem(QAbstractGraphicsShapeItem *shapeItem,
                                         QGraphicsItem *parent)
    : QGraphicsObject(parent),
      m_item(shapeItem),
      m_created(false)
{
    setFlags(QGraphicsItem::ItemIsMovable
             | QGraphicsItem::ItemIsSelectable);

    m_item->setParentItem(this);
    //m_item->setFlags(m_item->flags() | QGraphicsItem::ItemStacksBehindParent);

    QGraphicsDropShadowEffect *dropShadowFx = new QGraphicsDropShadowEffect();
    dropShadowFx->setColor(QColor(63, 63, 63, 220));
    dropShadowFx->setBlurRadius(10);

    m_item->setGraphicsEffect(dropShadowFx);
}

QVariant KaptionGraphicsItem::itemChange(GraphicsItemChange change, const QVariant &value)
{
    if (change == ItemSelectedHasChanged) {
        bool selected = value.toBool();
        if (selected) {
            showHandles();
        } else {
            hideHandles();
        }
    }

    return QGraphicsObject::itemChange(change, value);
}

void KaptionGraphicsItem::showHandles()
{
    for(int i=0; i<m_handles.size(); ++i) {
        m_handles.at(i)->show();
    }
}

void KaptionGraphicsItem::hideHandles()
{
    for(int i=0; i<m_handles.size(); ++i) {
        m_handles.at(i)->hide();
    }
}

QAbstractGraphicsShapeItem *KaptionGraphicsItem::shapeItem() const
{
    return m_item;
}
