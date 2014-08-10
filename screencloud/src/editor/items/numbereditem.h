#ifndef NUMBEREDITEM_H
#define NUMBEREDITEM_H

#include "kaptiongraphicsitem.h"
#include "editor/scale.h"
#include <QFont>

class QGraphicsPathItem;

class NumberedItem : public KaptionGraphicsItem
{
    Q_OBJECT
    Q_PROPERTY(QColor color READ color WRITE setColor)
    Q_PROPERTY(Scale size READ scale WRITE setScale)
    Q_PROPERTY(QFont font READ font WRITE setFont)
    Q_PROPERTY(int number READ number WRITE setNumber)

public:
    Q_INVOKABLE
    explicit NumberedItem(QGraphicsItem *parent = 0);

    virtual void setColor(const QColor &color);
    virtual QColor color() const;

    virtual void setScale(const Scale &scale);
    virtual Scale scale() const;

    virtual void setFont(const QFont &font);
    virtual QFont font() const;

    virtual void setNumber(int num);
    virtual int number() const;

    virtual void createShape(const QPointF &start, const QPointF &end);

    virtual bool isDynamicShape() const;

    virtual NumberedItem *copy() const;

protected:
    QGraphicsEllipseItem *shapeItem() const;

private:
    void createRect(const QPointF &orig);
    void fitText(const QString &txt, const QRectF &rect);
    float fontScaleFactor(const QString &txt,
                          const QFont &font,
                          const QRectF &rect) const;
    void drawText(const QString &txt,
                  const QFont &font,
                  const QRectF &rect);

    QGraphicsPathItem *m_pathItem;
    QSizeF m_size;
    QString m_numberString;
    QFont m_font;
};

inline
QGraphicsEllipseItem *NumberedItem::shapeItem() const
{
    return static_cast<QGraphicsEllipseItem*>(KaptionGraphicsItem::shapeItem());
}

inline
bool NumberedItem::isDynamicShape() const
{
    return false;
}


#endif // NUMBEREDITEM_H
