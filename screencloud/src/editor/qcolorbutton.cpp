#include "qcolorbutton.h"
#include <QPainter>
#include <QColorDialog>

QColorButton::QColorButton(QWidget *parent) :
    QPushButton(parent)
{
    setFixedSize(45, 23);
}

QColor QColorButton::color() const
{
    return col;
}

void QColorButton::setColor(const QColor & color)
{
    col = color;

    update();
}

void QColorButton::paintEvent(QPaintEvent *event)
{
    QPushButton::paintEvent(event);

    QPainter p(this);
    p.setPen(Qt::black);
    p.setBrush(col);
    p.drawRect(5,5,34,12);
}

void QColorButton::nextCheckState()
{
    QPushButton::nextCheckState();

    QColor savedColor = col;

    QColorDialog * dialog = new QColorDialog(this);
    dialog->setCurrentColor(col);
    connect(dialog, SIGNAL(currentColorChanged(QColor)), SLOT(setColor(const QColor &)));

    if (dialog->exec() == QDialog::Accepted) {
        emit selected(col);
    }else{
        setColor(savedColor);
    }
    delete dialog;
}
