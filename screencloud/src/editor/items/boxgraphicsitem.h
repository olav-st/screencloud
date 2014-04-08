#ifndef BOXGRAPHICSITEM_H
#define BOXGRAPHICSITEM_H

#include "abstractgraphicsrectitem.h"

class BoxGraphicsItem : public AbstractGraphicsRectItem
{
    Q_OBJECT

public:
    Q_INVOKABLE
    explicit BoxGraphicsItem(QGraphicsItem *parent = 0);
    virtual ~BoxGraphicsItem() {}

protected:
    virtual QRectF rect() const;
    virtual void setRect(const QRectF &rect);
};

#endif // BOXGRAPHICSITEM_H
