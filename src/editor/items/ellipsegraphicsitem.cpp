#include "ellipsegraphicsitem.h"

#include <QGraphicsEllipseItem>

EllipseGraphicsItem::EllipseGraphicsItem(QGraphicsItem *parent)
    : AbstractGraphicsRectItem(new QGraphicsEllipseItem(), parent)
{
}

QRectF EllipseGraphicsItem::rect() const
{
    return static_cast<QGraphicsEllipseItem*>(shapeItem())->rect();
}

void EllipseGraphicsItem::setRect(const QRectF &rect)
{
    static_cast<QGraphicsEllipseItem*>(shapeItem())->setRect(rect);
}
