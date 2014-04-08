#include "numbereditem.h"

#include <QBrush>
#include <QPen>
#include <QGraphicsEllipseItem>
#include <QFont>
#include <QFontMetrics>
#include <QDebug>
#include <cmath>
#include <time.h>
#include "editor/scale.h"

NumberedItem::NumberedItem(QGraphicsItem *parent)
    : KaptionGraphicsItem(new QGraphicsEllipseItem(), parent),
      m_size(42.5, 42.5)
{
    QGraphicsDropShadowEffect *textFx = new QGraphicsDropShadowEffect();
    textFx->setColor(QColor(63, 63, 63, 190));
    textFx->setBlurRadius(7);
    textFx->setOffset(QPoint(3, 3));

    QPen pen;
    pen.setStyle(Qt::SolidLine);
    pen.setCapStyle(Qt::RoundCap);
    pen.setJoinStyle(Qt::RoundJoin);
    pen.setBrush(Qt::white);

    m_pathItem = new QGraphicsPathItem(shapeItem());
    m_pathItem->setPen(pen);
    m_pathItem->setBrush(Qt::white);
    m_pathItem->setGraphicsEffect(textFx);

    dropShadowEffect()->setOffset(QPointF(3, 3));
}

void NumberedItem::setColor(const QColor &color)
{
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(color);

    QPen pen;
    pen.setStyle(Qt::SolidLine);
    pen.setWidth(1);
    pen.setBrush(brush);

    shapeItem()->setPen(pen);
    shapeItem()->setBrush(brush);
}

QColor NumberedItem::color() const
{
    return shapeItem()->brush().color();
}

void NumberedItem::setScale(const Scale &scale)
{
    qreal dim = scale.value(25.0, 80.0);
    m_size = QSizeF(dim ,dim);
    if (isCreated()) {
        QGraphicsEllipseItem *item = shapeItem();
        QRectF rect = item->rect();
        rect.setSize(m_size);
        item->setRect(rect);
        fitText(m_numberString, rect);
    }
}

Scale NumberedItem::scale() const
{
    Scale scale(25.0, 80.0);
    scale.setValue(m_size.width());
    return scale;
}

void NumberedItem::setFont(const QFont &font)
{
    m_font = font;
    if (isCreated()) {
        fitText(m_numberString, shapeItem()->rect());
    }
}

QFont NumberedItem::font() const
{
    return m_font;
}

void NumberedItem::setNumber(int num)
{
    m_numberString.setNum(num);
    if (isCreated()) {
        fitText(m_numberString, shapeItem()->rect());
    }
}

int NumberedItem::number() const
{
    return m_numberString.toInt();
}

void NumberedItem::createShape(const QPointF &start, const QPointF &end)
{
    if (!isCreated()) {
        createRect(start);
        setCreated(true);
    } else {
        createRect(end);
    }
}

NumberedItem *NumberedItem::copy() const
{
    QColor c = color();
    Scale s = scale();
    QFont f = font();

    QRectF rect = shapeItem()->rect();

    QPointF start = mapToScene(rect.topLeft());

    NumberedItem *item = new NumberedItem();
    item->setColor(c);
    item->setScale(s);
    item->setFont(f);
    item->createShape(start, QPointF());

    return item;
}

void NumberedItem::createRect(const QPointF &orig)
{
    QPointF center(orig.x() - m_size.width()/2, orig.y() - m_size.height()/2);
    QRectF rect(center, m_size);
    shapeItem()->setRect(rect);
    fitText(m_numberString, rect);
}

void NumberedItem::fitText(const QString &txt, const QRectF &r)
{
    QFont font = m_font;

    //I calculate the rect inscribed into the circle
    qreal l = sqrt(r.width()*r.width()/2);
    QRectF rect(0, 0, l, l);
    rect.moveCenter(r.center());

    float factor = fontScaleFactor(txt, font, rect);

    if (factor < 1 || factor > 1.25) {
        font.setPointSizeF(font.pointSizeF()*factor);
    }

    drawText(txt, font, rect);
}

float NumberedItem::fontScaleFactor(const QString &txt,
                                    const QFont &font,
                                    const QRectF &rect) const
{
    QFontMetrics fm(font);

    QRectF br = fm.tightBoundingRect(txt);
    int fw = br.width();
    int fh = br.height();

    return (fw < fh ? rect.width()/fh : rect.width()/fw);
}

void NumberedItem::drawText(const QString &txt,
                            const QFont &font,
                            const QRectF &rect)
{
    QFontMetrics fm(font);

    QRectF txtBr = fm.tightBoundingRect(txt);
    txtBr.moveCenter(rect.center());

    qreal x = txtBr.bottomLeft().x() - fm.leftBearing(txt.at(0));
    qreal y = txtBr.bottomLeft().y();

    QPainterPath path;
    path.setFillRule(Qt::WindingFill);
    path.addText(x, y, font, txt);

    m_pathItem->setPath(path);
}
