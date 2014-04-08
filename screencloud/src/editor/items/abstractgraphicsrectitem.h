#ifndef ABSTRACTGRAPHICSRECTITEM_H
#define ABSTRACTGRAPHICSRECTITEM_H

#include "kaptiongraphicsitem.h"
#include "editor/scale.h"

class AbstractGraphicsRectItem: public KaptionGraphicsItem
{
    Q_OBJECT
    Q_PROPERTY(QColor color READ color WRITE setColor)
    Q_PROPERTY(Scale size READ scale WRITE setScale)

public:
    AbstractGraphicsRectItem(QAbstractGraphicsShapeItem *shapeItem,
                             QGraphicsItem *parent = 0);
    virtual ~AbstractGraphicsRectItem();

    virtual void setColor(const QColor &color);
    virtual QColor color() const;

    virtual void setScale(const Scale &scale);
    virtual Scale scale() const;

    virtual void createShape(const QPointF &start, const QPointF &end);

    virtual AbstractGraphicsRectItem *copy() const;

protected:
    virtual QRectF rect() const = 0;
    virtual void setRect(const QRectF &rect) = 0;

    virtual void updateRect(const QRectF &rect);
    void updateHandlesPosition();

private Q_SLOTS:
    void updateTopLeft(const QPointF &newPos);
    void updateTopRight(const QPointF &newPos);
    void updateBottomLeft(const QPointF &newPos);
    void updateBottomRight(const QPointF &newPos);

private:
    HandleGraphicsItem *m_hTL;
    HandleGraphicsItem *m_hTR;
    HandleGraphicsItem *m_hBL;
    HandleGraphicsItem *m_hBR;
    QColor m_borderColor;
    QPointF *m_startingPoint;
};

#endif // ABSTRACTGRAPHICSRECTITEM_H
