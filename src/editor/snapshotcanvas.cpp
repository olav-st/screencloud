#include "snapshotcanvas.h"

#include <QDebug>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QPixmap>
#include <QPointF>
#include <QMouseEvent>
#include <QList>
#include <QSize>
#include <QApplication>
#include <QDesktopWidget>
#include <QScrollBar>
#include <QStyle>
#include <QResizeEvent>
#include <QMenu>
#include <QAction>

#include "items/arrowgraphicsitem.h"
#include "items/boxgraphicsitem.h"
#include "items/boxtextgraphicsitem.h"
#include "items/ellipsegraphicsitem.h"
#include "items/numbereditem.h"

SnapshotCanvas::SnapshotCanvas(QWidget *parent)
    : QGraphicsView(parent),
      m_origin(0, 0),
      m_currentDrawingItem(0),
      m_scene(0),
      m_mouseDown(false),
      m_pixmapItem(0),
      m_captureKeyboardEvents(true),
      m_toolkit(0),
      m_contextMenu(new QMenu(this))
{
    m_contextMenu->addAction(tr("Move on top"), this, SLOT(moveSelectedItemOnTop()));
    m_contextMenu->addAction(tr("Move on bottom"), this, SLOT(moveSelectedItemOnBottom()));
}

SnapshotCanvas::~SnapshotCanvas()
{
    for(int i = 0; i<m_itemsClipboard.size(); ++i) {
        delete m_itemsClipboard.at(i);
    }
}

void SnapshotCanvas::setPixmap(const QPixmap &pixmap)
{
    delete m_scene;
    m_scene = new QGraphicsScene(this);
    m_scene->setBackgroundBrush(QColor(180, 180, 180));

    connect(m_scene, SIGNAL(selectionChanged()),
            this, SLOT(slotSelectionChanged()));

    m_pixmapItem = new QGraphicsPixmapItem(pixmap);

    QGraphicsDropShadowEffect *dropShadowFX = new QGraphicsDropShadowEffect();
    dropShadowFX->setColor(QColor(63, 63, 63, 220));
    dropShadowFX->setOffset(0, 0);
    dropShadowFX->setBlurRadius(20);
    m_pixmapItem->setGraphicsEffect(dropShadowFX);

    m_scene->addItem(m_pixmapItem);
    m_scene->setSceneRect(pixmap.rect());

    setScene(m_scene);

    adjustMaximumSize();
}

void SnapshotCanvas::deselectItems()
{
    m_scene->clearSelection();
}

void SnapshotCanvas::resizeEvent(QResizeEvent *event)
{
    adjustMaximumSize();
    QGraphicsView::resizeEvent(event);
}

void SnapshotCanvas::slotSelectionChanged()
{
    if (!m_scene) return;

    QList<QGraphicsItem*> tmp = m_scene->selectedItems();
    QList<KaptionGraphicsItem*> items;
    for (int i=0; i<tmp.size(); ++i) {
        items.append(static_cast<KaptionGraphicsItem*>(tmp.at(i)));
    }
    m_toolkit->updateToolkitState(items);
    if (!items.isEmpty()) {
        m_captureKeyboardEvents = true;
    }
}

void SnapshotCanvas::slotDisableKeyboardEventsCapture()
{
    m_captureKeyboardEvents = false;
}

void SnapshotCanvas::updateItemProperty(const QString &prop, const QVariant &var)
{
    if (!m_scene) return;

    QList<QGraphicsItem*> tmp = m_scene->selectedItems();
    QList<KaptionGraphicsItem*> items;
    for (int i=0; i<tmp.size(); ++i) {
        items.append(static_cast<KaptionGraphicsItem*>(tmp.at(i)));
    }
    m_toolkit->updateItemsPropertyValue(items, qPrintable(prop), var);
}

void SnapshotCanvas::copy()
{
    QList<QGraphicsItem *> items = m_scene->selectedItems();
    if (!items.isEmpty()) {
        while(!m_itemsClipboard.isEmpty()) {
            delete m_itemsClipboard.takeFirst();
        }
        for (int i = 0; i<items.size(); ++i) {
            m_itemsClipboard << static_cast<KaptionGraphicsItem*>(items.at(i))->copy();
        }
    }
}

void SnapshotCanvas::paste()
{
    QList<KaptionGraphicsItem*> tmp;
    while(!m_itemsClipboard.isEmpty()) {
        KaptionGraphicsItem *item = m_itemsClipboard.takeFirst();
        item->moveBy(-10, 10);
        addItemToScene(item);
        tmp << item->copy();
    }
    m_itemsClipboard = tmp; //Recursive pasting
}

void SnapshotCanvas::moveSelectedItemOnTop()
{
    if (m_scene->selectedItems().isEmpty()) return;

    QGraphicsItem *itemToMove = m_scene->selectedItems().first();
    m_zIndexList.removeOne(itemToMove);
    m_zIndexList.append(itemToMove);
    rebuildZIndexOrder();
}

void SnapshotCanvas::moveSelectedItemOnBottom()
{
    if (m_scene->selectedItems().isEmpty()) return;

    QGraphicsItem *itemToMove = m_scene->selectedItems().first();
    m_zIndexList.removeOne(itemToMove);
    m_zIndexList.prepend(itemToMove);
    rebuildZIndexOrder();
}

void SnapshotCanvas::mousePressEvent(QMouseEvent *event)
{
    if (!m_toolkit) {
        QGraphicsView::mousePressEvent(event);
        return;
    }

    QGraphicsItem *item = itemAt(event->pos());
    if (item == m_pixmapItem) {
        bool itemDeselected = false;
        if (!m_scene->selectedItems().isEmpty()) {
            deselectItems();
            itemDeselected = true;
        }
        if (event->button() == Qt::LeftButton) {
            if (m_toolkit->itemCreationPolicy()
                    == GraphicsItemFactory::Static) {
                if (!itemDeselected) {
                    m_mouseDown = true;
                    m_currentDrawingItem = m_toolkit->createItem();
                    m_currentDrawingItem->createShape(mapToScene(event->pos()),
                                                      QPointF());
                    addItemToScene(m_currentDrawingItem);
                }
            } else {
                m_mouseDown = true;
                m_origin = mapToScene(event->pos());
            }
        }
    } else {
        QGraphicsView::mousePressEvent(event);
    }
}

void SnapshotCanvas::mouseMoveEvent(QMouseEvent *event)
{
    if (!m_toolkit) {
        QGraphicsView::mouseMoveEvent(event);
        return;
    }

    if (m_mouseDown) {
        QPointF pos = mapToScene(event->pos());
        if (!m_currentDrawingItem &&
                m_toolkit->itemCreationPolicy()
                    == GraphicsItemFactory::Dynamic) {
            m_currentDrawingItem = m_toolkit->createItem();
            m_currentDrawingItem->createShape(m_origin, pos);
            addItemToScene(m_currentDrawingItem);
        } else {
            m_currentDrawingItem->createShape(m_origin, pos);
        }
    } else {
        QGraphicsView::mouseMoveEvent(event);
    }
}

void SnapshotCanvas::mouseReleaseEvent(QMouseEvent *event)
{
    m_mouseDown = false;
    m_currentDrawingItem = 0;
    m_origin = QPointF(0, 0);
    QGraphicsView::mouseReleaseEvent(event);
}

void SnapshotCanvas::keyPressEvent(QKeyEvent *event)
{
    if (!m_captureKeyboardEvents) {
        QGraphicsView::keyPressEvent(event);
        return;
    }

    switch(event->key()) {
    case Qt::Key_Backspace:
    case Qt::Key_Delete:
        removeSelectedItems();
        break;
    case Qt::Key_Escape:
        deselectItems();
        break;
    case Qt::Key_Up:
        moveSelectedItemsBy(0, -2);
        break;
    case Qt::Key_Right:
        moveSelectedItemsBy(2, 0);
        break;
    case Qt::Key_Down:
        moveSelectedItemsBy(0, 2);
        break;
    case Qt::Key_Left:
        moveSelectedItemsBy(-2, 0);
        break;
    }

    if (event->matches(QKeySequence::SelectAll)) {
        QPainterPath selectionArea;
        selectionArea.addRect(sceneRect());
        m_scene->setSelectionArea(selectionArea);
    } else if (event->matches(QKeySequence::Copy)) {
        copy();
    } else if (event->matches(QKeySequence::Paste)) {
        paste();
    }
}

void SnapshotCanvas::contextMenuEvent(QContextMenuEvent *event)
{
    QGraphicsItem *item = itemAt(event->pos());
    if (item && item != m_pixmapItem) {
        deselectItems();
        item = item->topLevelItem();
        item->setSelected(true);
        if (item == m_zIndexList.last()) {
            m_contextMenu->actions().at(0)->setEnabled(false);
        } else {
            m_contextMenu->actions().at(0)->setEnabled(true);
        }
        if (item == m_zIndexList.first()) {
            m_contextMenu->actions().at(1)->setEnabled(false);
        } else {
            m_contextMenu->actions().at(1)->setEnabled(true);
        }
        m_contextMenu->exec(event->globalPos());
    }
}

void SnapshotCanvas::addItemToScene(KaptionGraphicsItem *item)
{
    if (!item || !m_scene) return;

    tryToConnectTextItem(item);
    item->setZValue(m_zIndexList.size());
    m_zIndexList.append(item);
    m_scene->addItem(item);
}

void SnapshotCanvas::removeSelectedItems()
{
    QList<QGraphicsItem *> items = m_scene->selectedItems();
    for (int i=0; i<items.length(); i++) {
        //m_scene->removeItem(items.at(i)); <- BSP Tree index QT bug??? Should ask on IRC...
        m_zIndexList.removeOne(items.at(i));
        delete items.at(i);
    }

    rebuildZIndexOrder();
}

void SnapshotCanvas::moveSelectedItemsBy(int dx, int dy)
{
    QList<QGraphicsItem *> items = m_scene->selectedItems();
    for (int i=0; i<items.length(); i++) {
        items.at(i)->moveBy(dx, dy);
    }
}

void SnapshotCanvas::adjustMaximumSize()
{
    QRectF sr = sceneRect();

    int width = sr.width() + frameWidth() * 2;
    int height = sr.height() + frameWidth() * 2;

    if (minimumWidth() > width) {
        width = minimumWidth();
    }

    if (minimumHeight() > height) {
        height = minimumHeight();
    }

    int scrollBarExtent = style()->pixelMetric(QStyle::PM_ScrollBarExtent);

    if (verticalScrollBar()->isVisible()) {
        width += scrollBarExtent + frameWidth() * 2;
    }

    if (horizontalScrollBar()->isVisible()) {
        height += scrollBarExtent + frameWidth() * 2;
    }

    setMaximumSize(width, height);
}

void SnapshotCanvas::tryToConnectTextItem(KaptionGraphicsItem *item)
{
    //TODO: there must be a better way to solve this other than those two ways

    //int index = item->metaObject()->indexOfSignal("itemDeselected()");
    //if (index != -1) {
    BoxTextGraphicsItem *btgi = qobject_cast<BoxTextGraphicsItem*>(item);
    if (btgi) {
        connect(btgi, SIGNAL(itemDeselected()),
                this, SLOT(deselectItems()));
        connect(btgi, SIGNAL(itemDeselected()),
                this, SLOT(slotDisableKeyboardEventsCapture()));
    }
}

void SnapshotCanvas::rebuildZIndexOrder()
{
    QLinkedListIterator<QGraphicsItem*> i(m_zIndexList);
    int z = 0;
    while (i.hasNext()) {
        i.next()->setZValue(z);
        ++z;
    }
}
