#include "arrowgraphicsitem.h"

#include <QGraphicsPathItem>
#include <QPolygonF>
#include <QPointF>
#include <QPen>
#include <QBrush>
#include <QDebug>
#include <QPainter>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsRectItem>
#include <QGraphicsDropShadowEffect>
#include <QColor>
#include <cmath>
#include "editor/scale.h"
#include "handlegraphicsitem.h"

ArrowGraphicsItem::ArrowGraphicsItem(QGraphicsItem *parent)
    : KaptionGraphicsItem(new QGraphicsPathItem(), parent),
      m_headHandle(new HandleGraphicsItem(0, shapeItem())),
      m_tailHandle(new HandleGraphicsItem(0, shapeItem())),
      m_scaleFactor(1.0),
      m_scaleMin(0.625),
      m_scaleMax(2.0),
      m_scalePivot(1.0)
{
    connect(m_headHandle, SIGNAL(moved(QPointF)),
            this, SLOT(updateHead(QPointF)));

    connect(m_tailHandle, SIGNAL(moved(QPointF)),
            this, SLOT(updateTail(QPointF)));

    m_handles << m_headHandle << m_tailHandle;

    hideHandles();

    dropShadowEffect()->setOffset(QPointF(3, 3));
}

ArrowGraphicsItem::~ArrowGraphicsItem()
{ }

void ArrowGraphicsItem::setColor(const QColor &color)
{
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(color);

    QPen pen;
    pen.setStyle(Qt::SolidLine);
    pen.setWidth(1);
    pen.setCapStyle(Qt::RoundCap);
    pen.setJoinStyle(Qt::RoundJoin);
    pen.setBrush(brush);

    shapeItem()->setPen(pen);
    shapeItem()->setBrush(brush);
}

QColor ArrowGraphicsItem::color() const
{
    return shapeItem()->brush().color();
}

void ArrowGraphicsItem::setScale(const Scale &scale)
{
    qreal sf = scale.value(m_scaleMin, m_scaleMax, m_scalePivot);

    if (sf == m_scaleFactor) {
        return;
    }

    m_scaleFactor = sf;

    if (isCreated()) {
        QPainterPath arrow = createArrow(m_tailHandle->scenePos(),
                                         m_headHandle->scenePos(),
                                         m_scaleFactor);
        static_cast<QGraphicsPathItem*>(shapeItem())->setPath(arrow);
    }
}

Scale ArrowGraphicsItem::scale() const
{
    Scale scale(m_scaleMin, m_scaleMax, m_scalePivot);
    scale.setValue(m_scaleFactor);
    return scale;
}

void ArrowGraphicsItem::createShape(const QPointF &start, const QPointF &end)
{
    setArrow(createArrow(start, end, m_scaleFactor), end, calculateAngle(start, end));
    m_tailHandle->setPos(mapFromScene(start));
    m_headHandle->setPos(mapFromScene(end));
    setCreated(true);
}

ArrowGraphicsItem *ArrowGraphicsItem::copy() const
{
    QColor c = color();
    Scale s = scale();
    QPointF start = m_tailHandle->scenePos();
    QPointF end = m_headHandle->scenePos();

    ArrowGraphicsItem *item = new ArrowGraphicsItem();
    item->setColor(c);
    item->setScale(s);
    item->createShape(start, end);

    return item;
}

void ArrowGraphicsItem::updateHead(const QPointF &newHead)
{
    QPointF st = m_tailHandle->scenePos();
    setArrow(createArrow(st, newHead, m_scaleFactor), newHead, calculateAngle(st, newHead));
    m_tailHandle->setPos(mapFromScene(st));
}

void ArrowGraphicsItem::updateTail(const QPointF &newTail)
{
    QPointF sh = m_headHandle->scenePos();
    setArrow(createArrow(newTail, sh, m_scaleFactor), sh, calculateAngle(newTail, sh));
    m_headHandle->setPos(mapFromScene(sh));
    m_tailHandle->setPos(mapFromScene(newTail));
}

void ArrowGraphicsItem::setArrow(const QPainterPath &arrow, const QPointF &pos, qreal angle)
{
    static_cast<QGraphicsPathItem*>(shapeItem())->setPath(arrow);
    setPos(pos);
    setRotation(angle);
}

QPainterPath ArrowGraphicsItem::createArrow(const QPointF &tail, const QPointF &head, qreal scaleFactor ) const
{
    qreal a = 20.0;
    qreal b = 10.0;
    qreal c = 17.0;

    QPointF p = head - tail;
    qreal length = sqrt(pow(p.x(), 2) + pow(p.y(), 2));

    qreal minLength = a*scaleFactor + 12.0;
    if (length < minLength) {
        scaleFactor = Scale::convert(length,
                                     0.0, minLength, minLength,
                                     0.15, scaleFactor, scaleFactor);
    }

    a *= scaleFactor;
    b *= scaleFactor;
    c *= scaleFactor;

    QPointF p0(0, 0);
    QPointF p1(-a, b);
    QPointF p2(-c, 0);
    QPointF p3(-a, -b);

    QPolygonF arrowHead;
    arrowHead << p0 << p1 << p2 << p3;

    qreal n = 3.5;
    qreal k = 2.0;

    // Let's find k/n position on p1 p2 segment
    qreal d = (p1.x()*(n-k) + k*p2.x())/n;
    qreal e = (p1.y()*(n-k) + k*p2.y())/n;

    QPainterPath path;
    path.setFillRule(Qt::WindingFill);

    //draw the head
    path.addPolygon(arrowHead);
    path.closeSubpath();

    //draw the tail
    path.moveTo(d, e);
    path.quadTo(-(length*0.5), 1.2, -(length+1), 0);
    path.quadTo(-(length*0.5), -1.2, d, -e);
    path.lineTo(p2);
    path.lineTo(d, e);
    path.closeSubpath();

    return path;
}

qreal ArrowGraphicsItem::calculateAngle(const QPointF &start, const QPointF &end) const
{
    QPointF p = end - start;

    qreal a = p.x();
    qreal c = sqrt(pow(p.x(), 2) + pow(p.y(), 2));

    if (c == 0) {
        return 0;
    }

    qreal angle = acos(a/c) * 180/M_PI;
    if (end.y() > start.y()) {
        angle = 360-angle;
    }
    return -angle;
}
