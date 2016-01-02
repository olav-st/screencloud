#include "handlegraphicsitem.h"

#include <QGraphicsSceneMouseEvent>
#include <QBrush>
#include <QDebug>
#include <QPen>
#include <QPropertyAnimation>

HandleGraphicsItem::HandleGraphicsItem(QObject *parentObject,
                                       QGraphicsItem *parentItem)
    : QObject(parentObject),
      QGraphicsPathItem(parentItem),
      m_moving(false)
{
    setAcceptHoverEvents(true);

    QBrush b;
    b.setStyle(Qt::SolidPattern);
    b.setColor(QColor(51, 157, 213, 210));

    QRectF r(0, 0, 12, 12);
    r.moveCenter(QPoint(0, 0));
    QPainterPath p;
    p.addRoundedRect(r, 2, 2);

    setPath(p);
    setBrush(b);
    setPen(Qt::NoPen);

    m_outerRing.setParentItem(this);
    m_outerRing.setRect(r.adjusted(-6, -6, 6, 6));
    m_outerRing.setPen(QPen(b, 1));
    m_outerRing.hide();

    m_opacityAnimation = new QPropertyAnimation(this, "opacity", this);
}

void HandleGraphicsItem::fadeIn(int duration)
{
    if (!isVisible()) {
        show();
    }
    m_opacityAnimation->setDuration(duration);
    m_opacityAnimation->setStartValue(0);
    m_opacityAnimation->setEndValue(1);
    m_opacityAnimation->start();
}

void HandleGraphicsItem::fadeOut(int duration)
{
    m_opacityAnimation->setDuration(duration);
    m_opacityAnimation->setStartValue(1);
    m_opacityAnimation->setEndValue(0);
    m_opacityAnimation->start();
}

void HandleGraphicsItem::hoverEnterEvent(QGraphicsSceneHoverEvent *event)
{
    Q_UNUSED(event);
    m_outerRing.show();
}

void HandleGraphicsItem::hoverLeaveEvent(QGraphicsSceneHoverEvent *event)
{
    Q_UNUSED(event);
    m_outerRing.hide();
}

void HandleGraphicsItem::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        m_moving = true;
    } else {
        QGraphicsPathItem::mousePressEvent(event);
    }
}

void HandleGraphicsItem::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        m_moving = false;
    } else {
        QGraphicsPathItem::mouseReleaseEvent(event);
    }
}

void HandleGraphicsItem::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if (m_moving) {
        Q_EMIT moved(event->scenePos());
    } else {
        QGraphicsPathItem::mouseMoveEvent(event);
    }
}
