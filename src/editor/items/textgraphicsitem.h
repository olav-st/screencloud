#ifndef TEXTGRAPHICSITEM_H
#define TEXTGRAPHICSITEM_H

#include <QGraphicsTextItem>
class QPointF;

class QFocusEvent;
class QGraphicsSceneMouseEvent;
class TextGraphicsItem;

class TextGraphicsItem : public QGraphicsTextItem
{
    Q_OBJECT

public:
    explicit TextGraphicsItem(QGraphicsItem *parent = 0);

Q_SIGNALS:
    void focusGain();
    void textChanged();

protected:
    void focusInEvent(QFocusEvent *event);
    void keyPressEvent(QKeyEvent *event);
};

#endif // TEXTGRAPHICSITEM_H
