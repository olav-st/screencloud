#ifndef HANDLEGRAPHICSITEM_H
#define HANDLEGRAPHICSITEM_H

#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsEllipseItem>
#include <QPainter>
#include <QGraphicsDropShadowEffect>

class QPropertyAnimation;

class HandleGraphicsItem : public QObject, public QGraphicsPathItem
{
    Q_OBJECT
    Q_PROPERTY(qreal opacity READ opacity WRITE setOpacity)

public:
    HandleGraphicsItem(QObject *parentObject = 0,
                       QGraphicsItem *parentItem = 0);

    void fadeIn(int duration = 150);
    void fadeOut(int duration = 150);

Q_SIGNALS:
    void moved(const QPointF &newPos);

protected:
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);

private:
    QPropertyAnimation *m_opacityAnimation;
    bool m_moving;
    QGraphicsEllipseItem m_outerRing;
};

#endif // HANDLEGRAPHICSITEM_H
