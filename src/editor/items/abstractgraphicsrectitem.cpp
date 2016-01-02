#include "abstractgraphicsrectitem.h"

#include <QGraphicsDropShadowEffect>
#include "handlegraphicsitem.h"
#include "editor/scale.h"

AbstractGraphicsRectItem::AbstractGraphicsRectItem(QAbstractGraphicsShapeItem *shapeItem,
                                                   QGraphicsItem *parent)
    : KaptionGraphicsItem(shapeItem, parent),
      m_hTL(new HandleGraphicsItem(0, shapeItem)),
      m_hTR(new HandleGraphicsItem(0, shapeItem)),
      m_hBL(new HandleGraphicsItem(0, shapeItem)),
      m_hBR(new HandleGraphicsItem(0, shapeItem)),
      m_startingPoint(0)
{
    connect(m_hTL, SIGNAL(moved(QPointF)),
            this, SLOT(updateTopLeft(QPointF)));
    connect(m_hTR, SIGNAL(moved(QPointF)),
            this, SLOT(updateTopRight(QPointF)));
    connect(m_hBL, SIGNAL(moved(QPointF)),
            this, SLOT(updateBottomLeft(QPointF)));
    connect(m_hBR, SIGNAL(moved(QPointF)),
            this, SLOT(updateBottomRight(QPointF)));

    m_handles << m_hTL << m_hTR << m_hBL << m_hBR;

    hideHandles();

    dropShadowEffect()->setOffset(dropShadowEffect()->offset() - QPoint(5, 5));
}

AbstractGraphicsRectItem::~AbstractGraphicsRectItem()
{
    delete m_startingPoint;
}

void AbstractGraphicsRectItem::setColor(const QColor &color)
{
    if (m_borderColor == color) {
        return;
    }

    m_borderColor = color;

    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(color);

    QPen pen;
    pen.setStyle(Qt::SolidLine);
    pen.setWidth(5);
    pen.setCapStyle(Qt::RoundCap);
    pen.setJoinStyle(Qt::RoundJoin);
    pen.setBrush(brush);

    shapeItem()->setPen(pen);
}

QColor AbstractGraphicsRectItem::color() const
{
    return m_borderColor;
}

void AbstractGraphicsRectItem::setScale(const Scale &scale)
{
    QPen pen = shapeItem()->pen();
    pen.setWidthF(scale.value(3.0, 12.0, 5.0));
    shapeItem()->setPen(pen);
}

Scale AbstractGraphicsRectItem::scale() const
{
    Scale scale(3.0, 12.0, 5.0);
    scale.setValue(shapeItem()->pen().widthF());
    return scale;
}

void AbstractGraphicsRectItem::createShape(const QPointF &start, const QPointF &end)
{
    QPointF tl, br;
    QPointF d = end-start;
    if (d.x() > 0 && d.y() > 0) {
        tl = start;
        br = end;
    } else if (d.x() < 0 && d.y() < 0) {
        tl = end;
        br = start;
    } else if (d.x() > 0 && d.y() < 0) {
        tl = QPointF(start.x(), end.y());
        br = QPointF(end.x(), start.y());
    } else if (d.x() < 0 && d.y() > 0) {
        tl = QPointF(end.x(), start.y());
        br = QPointF(start.x(), end.y());
    }
    updateRect(QRectF(tl, br));
    setCreated(true);
}

AbstractGraphicsRectItem *AbstractGraphicsRectItem::copy() const
{
    QColor c = color();
    Scale s = scale();
    QPointF start = m_hTL->scenePos();
    QPointF end = m_hBR->scenePos();

    AbstractGraphicsRectItem *item
            = static_cast<AbstractGraphicsRectItem*>
                (this->metaObject()->newInstance());
    item->setColor(c);
    item->setScale(s);
    item->createShape(start, end);

    return item;
}

void AbstractGraphicsRectItem::updateRect(const QRectF &rect)
{
    if (!rect.isNull() && rect.isValid()) {
        setRect(rect);
        updateHandlesPosition();
    }
}

void AbstractGraphicsRectItem::updateHandlesPosition()
{
    m_hTL->setPos(rect().topLeft());
    m_hTR->setPos(rect().topRight());
    m_hBL->setPos(rect().bottomLeft());
    m_hBR->setPos(rect().bottomRight());
}

void AbstractGraphicsRectItem::updateTopLeft(const QPointF &newPos)
{
    QRectF r = rect();
    r.setTopLeft(mapFromScene(newPos));
    updateRect(r);
}

void AbstractGraphicsRectItem::updateTopRight(const QPointF &newPos)
{
    QRectF r = rect();
    r.setTopRight(mapFromScene(newPos));
    updateRect(r);
}

void AbstractGraphicsRectItem::updateBottomLeft(const QPointF &newPos)
{
    QRectF r = rect();
    r.setBottomLeft(mapFromScene(newPos));
    updateRect(r);
}

void AbstractGraphicsRectItem::updateBottomRight(const QPointF &newPos)
{
    QRectF r = rect();
    r.setBottomRight(mapFromScene(newPos));
    updateRect(r);
}
