#ifndef SNAPSHOTCANVAS_H
#define SNAPSHOTCANVAS_H

#include <QGraphicsView>
#include <QLinkedList>
#include "kaptiongraphicstoolkit.h"
#include "editor/scale.h"

class QPixmap;
class QGraphicsScene;
class KaptionGraphicsItem;
class QPointF;
class QSize;
class QGraphicsDropShadowEffect;
class KaptionShape;
class KMenu;

class SnapshotCanvas : public QGraphicsView
{
    Q_OBJECT

public:
    explicit SnapshotCanvas(QWidget *parent = 0);
    ~SnapshotCanvas();

    void setToolkit(KaptionGraphicsToolkit *toolkit);

    void setPixmap(const QPixmap &pixmap);

Q_SIGNALS:
    void itemsSelected(QList<KaptionGraphicsItem*> items);

public Q_SLOTS:
    void deselectItems();

private Q_SLOTS:
    void slotSelectionChanged();
    void slotDisableKeyboardEventsCapture();
    void updateItemProperty(const QString &, const QVariant &);
    void copy();
    void paste();
    void moveSelectedItemOnTop();
    void moveSelectedItemOnBottom();

protected:
    virtual void resizeEvent(QResizeEvent *event);

private:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void keyPressEvent(QKeyEvent *event);
    void contextMenuEvent(QContextMenuEvent *event);
    void addItemToScene(KaptionGraphicsItem *item);
    void removeSelectedItems();
    void moveSelectedItemsBy(int dx, int dy);
    void adjustMaximumSize();
    void tryToConnectTextItem(KaptionGraphicsItem *item);
    void rebuildZIndexOrder();

    QPointF m_origin;
    KaptionGraphicsItem *m_currentDrawingItem;
    QGraphicsScene *m_scene;
    bool m_mouseDown;
    QGraphicsPixmapItem *m_pixmapItem;
    QList<KaptionGraphicsItem*> m_itemsClipboard;
    bool m_captureKeyboardEvents;
    KaptionGraphicsToolkit *m_toolkit;
    QMenu *m_contextMenu;
    QLinkedList<QGraphicsItem*> m_zIndexList;
};

inline
void SnapshotCanvas::setToolkit(KaptionGraphicsToolkit *toolkit) {
    if (!toolkit) return;
    m_toolkit = toolkit;
    connect(m_toolkit, SIGNAL(propertyValueChanged(QString,QVariant)),
            this, SLOT(updateItemProperty(QString,QVariant)));
    connect(m_toolkit, SIGNAL(itemSelected()),
            this, SLOT(deselectItems()));
}

#endif // SNAPSHOTCANVAS_H
