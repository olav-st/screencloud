#include "busyoverlay.h"

BusyOverlay::BusyOverlay(QWidget *parent) :
    QProgressBar(parent)
{
    setWindowFlags(Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint);
    //setPalette(Qt::transparent);
    this->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
    setAlignment(Qt::AlignCenter);
    setMinimumWidth(150);
    setMinimumHeight(28);
    setRange(0,0);
}
