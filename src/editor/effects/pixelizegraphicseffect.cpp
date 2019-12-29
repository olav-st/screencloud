#include "pixelizegraphicseffect.h"

PixelizeGraphicsEffect::PixelizeGraphicsEffect(QObject *parent) : QGraphicsEffect(parent)
{
    setPixelization(5);
}

qreal PixelizeGraphicsEffect::pixelization() const
{
    return m_pixelization;
}

void PixelizeGraphicsEffect::setPixelization(qreal pixelization)
{
    m_pixelization = pixelization;
}

void PixelizeGraphicsEffect::draw(QPainter *painter)
{
    if(sourcePixmap().isNull())
    {
        return;
    }
    QPixmap downscaled = sourcePixmap().scaled(sourcePixmap().rect().size() / m_pixelization, Qt::IgnoreAspectRatio, Qt::FastTransformation);
    if(!downscaled.isNull())
    {
        QPixmap pixelized = downscaled.scaled(sourcePixmap().rect().size(), Qt::IgnoreAspectRatio, Qt::FastTransformation);
        painter->drawPixmap(pixelized.rect(), pixelized);
    }
}
