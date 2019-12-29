#include "obscuregraphicsitem.h"
#include <QPen>
#include <QGraphicsView>
#include <QGraphicsScene>
#include "handlegraphicsitem.h"
#include <QDebug>

ObscureGraphicsItem::ObscureGraphicsItem(QGraphicsItem *parent)
    : AbstractGraphicsRectItem(new QGraphicsRectItem(), parent)
{
    m_pi = new QGraphicsPixmapItem(shapeItem());
    m_pi->setZValue(-1);
    m_blurEffect = new QGraphicsBlurEffect();
    m_pixelizeEffect = new PixelizeGraphicsEffect();

    dropShadowEffect()->setBlurRadius(0);
    shapeItem()->setGraphicsEffect(NULL);

    connect(this, SIGNAL(xChanged()), this, SLOT(positionChanged()));
    connect(this, SIGNAL(yChanged()), this, SLOT(positionChanged()));
}

ObscureGraphicsItem::~ObscureGraphicsItem()
{
    delete m_pi;
}

void ObscureGraphicsItem::setColor(const QColor &color)
{
    AbstractGraphicsRectItem::setColor(color);

    QBrush brush;
    brush.setColor(QColor(0,0,0,0));
    QPen pen;
    pen.setBrush(brush);

    shapeItem()->setPen(pen);
}

QRectF ObscureGraphicsItem::rect() const
{
    return static_cast<QGraphicsRectItem*>(shapeItem())->rect();
}

const QString &ObscureGraphicsItem::effect() const
{
    return m_effect;
}

void ObscureGraphicsItem::setRect(const QRectF &rect)
{
    static_cast<QGraphicsRectItem*>(shapeItem())->setRect(rect);
}

void ObscureGraphicsItem::updatePixmap(const QRectF &rect, const QPointF &point)
{
    if(scene() != NULL)
    {
        QRectF viewRect = rect;
        viewRect.translate(point);
        if(!viewRect.isNull() && viewRect.isValid())
        {
            setOpacity(0);
            m_pi->setVisible(false);
            m_pixmap = QPixmap(viewRect.size().toSize());
            QPainter painter(&m_pixmap);
            scene()->update(viewRect);
            scene()->render(&painter, QRectF(), viewRect, Qt::IgnoreAspectRatio);
            m_pi->setPixmap(m_pixmap);
            m_pi->setPos(rect.topLeft());
            m_pi->setVisible(true);
            setOpacity(100);
        }
    }
}

void ObscureGraphicsItem::updateRect(const QRectF &rect)
{
    updatePixmap(rect, pos());
    AbstractGraphicsRectItem::updateRect(rect);
}

void ObscureGraphicsItem::setScale(const Scale &scale)
{
    m_pixelizeEffect->setPixelization(scale.value(2, 5));
    m_blurEffect->setBlurRadius(scale.value(2, 25));
    updatePixmap(rect(), pos());
}

void ObscureGraphicsItem::setEffect(const QString &effect)
{
    m_effect = effect;

    Scale prevScale = scale();
    delete m_pixelizeEffect;
    delete m_blurEffect;
    m_pixelizeEffect = new PixelizeGraphicsEffect();
    m_blurEffect = new QGraphicsBlurEffect();
    if(effect == "blur")
    {
        m_pi->setGraphicsEffect(m_blurEffect);

    }
    else
    {
        m_pi->setGraphicsEffect(m_pixelizeEffect);
    }
    setScale(prevScale);
    updatePixmap(rect(), pos());
}

void ObscureGraphicsItem::positionChanged()
{
    updatePixmap(rect(), pos());
}

Scale ObscureGraphicsItem::scale() const
{
    if(m_effect == "blur")
    {
        Scale scale(2, 25);
        scale.setValue(m_blurEffect->blurRadius());
        return scale;
    }else
    {
        Scale scale(2, 5);
        scale.setValue(m_pixelizeEffect->pixelization());
        return scale;
    }
}
