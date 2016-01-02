#ifndef KAPTIONGRAPHICSITEM_H
#define KAPTIONGRAPHICSITEM_H

#include <QGraphicsObject>
#include <QGraphicsDropShadowEffect>

class QAbstractGraphicsShapeItem;
class HandleGraphicsItem;

//FIXME: KaptionGraphicsItem design is broken.
//       This item is an ancestor for the real item, but it should not.
//       paint() method will draw twice the same stuff (first the real item, than
//       this item).
//       Furthermore this desing makes difficult (or impossible) to improve item
//       selection handling and painting.
//       For handlers i should group them with this object and not add them as
//       children
class KaptionGraphicsItem: public QGraphicsObject
{
    Q_OBJECT

public:
    KaptionGraphicsItem(QAbstractGraphicsShapeItem *shapeItem,
                        QGraphicsItem *parent = 0);
    virtual ~KaptionGraphicsItem() {}

    virtual void createShape(const QPointF &start, const QPointF &end) = 0;
    virtual bool isCreated() const;

    virtual bool isDynamicShape() const;

    virtual KaptionGraphicsItem *copy() const = 0;

    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter,
                       const QStyleOptionGraphicsItem *option,
                       QWidget *widget);

protected:
    virtual QVariant itemChange(GraphicsItemChange change, const QVariant &value);
    void showHandles();
    void hideHandles();
    QAbstractGraphicsShapeItem *shapeItem() const;
    QGraphicsDropShadowEffect *dropShadowEffect() const;
    void setCreated(bool created);

    QList<HandleGraphicsItem*> m_handles;

private:
    Q_DISABLE_COPY(KaptionGraphicsItem)

    QAbstractGraphicsShapeItem *m_item;
    bool m_created;
};

inline
bool KaptionGraphicsItem::isCreated() const
{
    return m_created;
}

inline
bool KaptionGraphicsItem::isDynamicShape() const
{
    return true;
}

inline
QRectF KaptionGraphicsItem::boundingRect() const
{
    return m_item->boundingRect();
}

inline
void KaptionGraphicsItem::paint(QPainter *painter,
                                       const QStyleOptionGraphicsItem *option,
                                       QWidget *widget)
{
    m_item->paint(painter, option, widget);
}

inline
void KaptionGraphicsItem::setCreated(bool created)
{
    m_created = created;
}

inline
QGraphicsDropShadowEffect *KaptionGraphicsItem::dropShadowEffect() const
{
    return static_cast<QGraphicsDropShadowEffect*>(m_item->graphicsEffect());
}

#endif // KAPTIONGRAPHICSITEM_H
