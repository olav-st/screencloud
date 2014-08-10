#include "boxgraphicsitem.h"

BoxGraphicsItem::BoxGraphicsItem(QGraphicsItem *parent)
    : AbstractGraphicsRectItem(new QGraphicsRectItem(), parent)
{
}

QRectF BoxGraphicsItem::rect() const
{
    return static_cast<QGraphicsRectItem*>(shapeItem())->rect();
}

void BoxGraphicsItem::setRect(const QRectF &rect)
{
    static_cast<QGraphicsRectItem*>(shapeItem())->setRect(rect);
}
