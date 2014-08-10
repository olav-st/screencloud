#ifndef ELLIPSEGRAPHICSITEM_H
#define ELLIPSEGRAPHICSITEM_H

#include "abstractgraphicsrectitem.h"

class EllipseGraphicsItem : public AbstractGraphicsRectItem
{
    Q_OBJECT

public:
    Q_INVOKABLE
    explicit EllipseGraphicsItem(QGraphicsItem *parent = 0);
    virtual ~EllipseGraphicsItem() {}

protected:
    virtual QRectF rect() const;
    virtual void setRect(const QRectF &rect);
};

#endif // ELLIPSEGRAPHICSITEM_H
