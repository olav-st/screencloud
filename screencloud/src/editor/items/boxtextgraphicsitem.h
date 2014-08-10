#ifndef BOXTEXTGRAPHICSITEM_H
#define BOXTEXTGRAPHICSITEM_H

#include "boxgraphicsitem.h"
#include "textgraphicsitem.h"
#include <QObject>
#include <QFont>

class QPointF;

class BoxTextGraphicsItem : public BoxGraphicsItem
{
    Q_OBJECT
    Q_PROPERTY(QFont font READ font WRITE setFont)

public:
    Q_INVOKABLE
    explicit BoxTextGraphicsItem(QGraphicsItem *parent = 0);
    virtual ~BoxTextGraphicsItem() {}

    virtual void setColor(const QColor &color);

    void setFont(const QFont &font);
    QFont font() const;

Q_SIGNALS:
    void itemDeselected();

protected:
    virtual QVariant itemChange(GraphicsItemChange change, const QVariant &value);
    virtual void updateRect(const QRectF &rect);

    virtual BoxTextGraphicsItem *getNewInstance() const;

protected Q_SLOTS:
    void deselectItem();
    void adaptHeight();

private:
    const static int MINTEXTWIDTH = 50;

    // @todo: Queste due funzioni le posso spostare in
    //        TextGraphicsItem
    void adaptTextItemWidth(const QRectF &rect);
    qreal getBoundedHeight(const QRectF &rect) const;

    TextGraphicsItem *m_gi;
};

#endif // BOXTEXTGRAPHICSITEM_H
