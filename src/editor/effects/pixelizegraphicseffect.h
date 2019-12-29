#ifndef PIXELIZEGRAPHICSEFFECT_H
#define PIXELIZEGRAPHICSEFFECT_H

#include <QGraphicsEffect>
#include <QPainter>

class PixelizeGraphicsEffect : public QGraphicsEffect
{
    Q_OBJECT
public:
    explicit PixelizeGraphicsEffect(QObject *parent = nullptr);

    qreal pixelization() const;

public Q_SLOTS:
    void setPixelization(qreal pixelization);

protected:
    void draw(QPainter *painter);

private:
    qreal m_pixelization;
};

#endif // PIXELIZEGRAPHICSEFFECT_H
