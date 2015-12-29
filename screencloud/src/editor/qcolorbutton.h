#ifndef QCOLORBUTTON_H
#define QCOLORBUTTON_H

#include <QPushButton>

class QColorButton : public QPushButton
{
    Q_OBJECT
public:
    QColorButton(QWidget *parent = 0);
    
    //! Returns the currently selected color.
    QColor color() const;

public Q_SLOTS:
    //! Sets the currently selected color.
    void setColor(const QColor & color);

Q_SIGNALS:
    void selected(const QColor & color);
protected:
    void paintEvent(QPaintEvent *);
    void nextCheckState();
private:
    QColor col;
};

#endif // QCOLORBUTTON_H
