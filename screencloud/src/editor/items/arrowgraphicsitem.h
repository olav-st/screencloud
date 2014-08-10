#ifndef ARROWGRAPHICSITEM_H
#define ARROWGRAPHICSITEM_H

#include "kaptiongraphicsitem.h"
#include "editor/scale.h"

class QPointF;
class QGraphicsPathItem;
class QPainterPath;
class QGraphicsRectItem;
class QGraphicsItem;
class HandleGraphicsItem;

class ArrowGraphicsItem : public KaptionGraphicsItem
{
    Q_OBJECT
    Q_PROPERTY(QColor color READ color WRITE setColor)
    Q_PROPERTY(Scale size READ scale WRITE setScale)

public:
    Q_INVOKABLE
    explicit ArrowGraphicsItem(QGraphicsItem *parent = 0);
    virtual ~ArrowGraphicsItem();

    virtual void setColor(const QColor &color);
    virtual QColor color() const;

    virtual void setScale(const Scale &scale);
    virtual Scale scale() const;

    virtual void createShape(const QPointF &start, const QPointF &end);

    virtual ArrowGraphicsItem *copy() const;

private Q_SLOTS:
    void updateHead(const QPointF &newHead);
    void updateTail(const QPointF &newTail);

private:
    void setArrow(const QPainterPath &arrow, const QPointF &pos, qreal angle);
    QPainterPath createArrow(const QPointF &tail,
                             const QPointF &head,
                             qreal scaleFactor) const;
    qreal calculateAngle(const QPointF &start, const QPointF &end) const;

    HandleGraphicsItem *m_headHandle;
    HandleGraphicsItem *m_tailHandle;
    qreal m_scaleFactor;
    qreal m_scaleMin;
    qreal m_scaleMax;
    qreal m_scalePivot;
};

#endif // ARROWGRAPHICSITEM_H
