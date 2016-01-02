#include "boxtextgraphicsitem.h"

#include <QGraphicsTextItem>
#include <QGraphicsSceneMouseEvent>
#include <QPointF>
#include <QFont>
#include <QDebug>
#include <QKeyEvent>
#include <QBrush>
#include <QPen>
#include <QGraphicsScene>

BoxTextGraphicsItem::BoxTextGraphicsItem(QGraphicsItem *parent)
    : BoxGraphicsItem(parent)
{
    m_gi = new TextGraphicsItem(shapeItem());
    m_gi->setTextInteractionFlags(Qt::TextEditable);
    m_gi->setDefaultTextColor(QColor(69, 70, 68));
    m_gi->setFocus();

    connect(m_gi, SIGNAL(focusGain()),
            this, SLOT(deselectItem()));
    connect(m_gi, SIGNAL(textChanged()),
            this, SLOT(adaptHeight()));
}

void BoxTextGraphicsItem::setColor(const QColor &color)
{
    BoxGraphicsItem::setColor(color);

    QPen p = shapeItem()->pen();
    p.setWidth(7);

    shapeItem()->setPen(p);

    QBrush b;
    b.setStyle(Qt::SolidPattern);
    b.setColor(QColor(255, 255, 255));

    shapeItem()->setBrush(b);
}

void BoxTextGraphicsItem::setFont(const QFont &font)
{
    m_gi->setFont(font);
    if (isCreated()) {
        adaptHeight();
    }
}

QFont BoxTextGraphicsItem::font() const
{
    return m_gi->font();
}

void BoxTextGraphicsItem::deselectItem()
{
    setSelected(false);
    Q_EMIT itemDeselected();
}

void BoxTextGraphicsItem::adaptHeight()
{
    QRectF r = rect();
    r.setHeight(getBoundedHeight(r));
    setRect(r);
    updateHandlesPosition();
}

qreal BoxTextGraphicsItem::getBoundedHeight(const QRectF &rect) const
{
    qreal h = m_gi->boundingRect().height()+18;
    if (rect.height() > h) {
        h = rect.height();
    }
    return h;
}

QVariant BoxTextGraphicsItem::itemChange(GraphicsItemChange change, const QVariant &value)
{
    if (change == ItemSelectedHasChanged) {
        bool selected = value.toBool();
        if (selected) {
            m_gi->clearFocus();
        }
    }

    return BoxGraphicsItem::itemChange(change, value);
}

void BoxTextGraphicsItem::updateRect(const QRectF &rect)
{
    QRectF r = rect;
    if (!r.isNull() && r.isValid()) {
        if (r.height() < m_gi->boundingRect().height()+18) {
            r.setHeight(m_gi->boundingRect().height()+18);
        }
        if (r.width() < MINTEXTWIDTH) {
            r.setWidth(MINTEXTWIDTH);
        }
        m_gi->show();
        adaptTextItemWidth(r);
        setRect(r);
        updateHandlesPosition();
    }
}

BoxTextGraphicsItem *BoxTextGraphicsItem::getNewInstance() const
{
    BoxTextGraphicsItem *item = new BoxTextGraphicsItem();
    item->m_gi->setPlainText(m_gi->toPlainText());
    item->m_gi->setFont(m_gi->font());
    return item;
}

void BoxTextGraphicsItem::adaptTextItemWidth(const QRectF &rect)
{
    m_gi->setTextWidth(rect.width()-20);
    m_gi->setPos(rect.topLeft()+QPointF(9, 9));
}
