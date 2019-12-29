#ifndef BLURGRAPHICSITEM_H
#define BLURGRAPHICSITEM_H

#include "abstractgraphicsrectitem.h"
#include "editor/effects/pixelizegraphicseffect.h"
#include <QGraphicsView>

class ObscureGraphicsItem : public AbstractGraphicsRectItem
{
    Q_OBJECT
    Q_PROPERTY(Scale size READ scale WRITE setScale)
    Q_PROPERTY(QString effect READ effect WRITE setEffect)

public:
    Q_INVOKABLE
    explicit ObscureGraphicsItem(QGraphicsItem *parent = 0);
    virtual ~ObscureGraphicsItem();

protected:
    virtual void updatePixmap(const QRectF &rect, const QPointF &point);
    virtual void updateRect(const QRectF &rect);
    virtual Scale scale() const;
    virtual QRectF rect() const;
    virtual const QString& effect() const;
    virtual void setColor(const QColor &color);
    virtual void setRect(const QRectF &rect);
    virtual void setScale(const Scale &scale);
    virtual void setEffect(const QString &effect);

private Q_SLOTS:
    void positionChanged();

private:
    QGraphicsPixmapItem* m_pi;
    QGraphicsBlurEffect* m_blurEffect;
    PixelizeGraphicsEffect* m_pixelizeEffect;
    QString m_effect;
    QPixmap m_pixmap;

};

#endif // BLURGRAPHICSITEM_H
