#include "textgraphicsitem.h"

#include <QGraphicsTextItem>
#include <QGraphicsSceneMouseEvent>
#include <QPointF>
#include <QRectF>
#include <QFont>
#include <QDebug>
#include <QKeyEvent>
#include <QPen>
#include <QGraphicsScene>

TextGraphicsItem::TextGraphicsItem(QGraphicsItem *parent)
    : QGraphicsTextItem(parent)
{

}

void TextGraphicsItem::focusInEvent(QFocusEvent *event)
{
    Q_EMIT focusGain();
    QGraphicsTextItem::focusInEvent(event);
}

void TextGraphicsItem::keyPressEvent(QKeyEvent *event)
{
    QGraphicsTextItem::keyPressEvent(event);
    Q_EMIT textChanged();
}
