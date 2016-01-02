#ifndef PROGRESSBAROVERLAY_H
#define PROGRESSBAROVERLAY_H

#include <QWidget>
#include <QPainter>
#include <QProgressBar>
#include <QStyleOptionProgressBar>
#include <QApplication>
#include <utils/log.h>

class BusyOverlay : public QProgressBar
{
    Q_OBJECT
public:
    explicit BusyOverlay(QWidget *parent = 0);

Q_SIGNALS:

public Q_SLOTS:

};

#endif // PROGRESSBAROVERLAY_H
