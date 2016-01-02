#ifndef NUMBERSELECTOR_H
#define NUMBERSELECTOR_H

#include <QWidget>
#include <QList>

class QSignalMapper;
class QPushButton;

class QSpinBox;

class NumberSelector : public QWidget
{
    Q_OBJECT

public:
    explicit NumberSelector(QWidget *parent = 0);

    int number() const;

Q_SIGNALS:
    void numberChanged(int number);

public Q_SLOTS:
    void setNumber(int number);
    void increment();

private:
    QSpinBox *m_spinBox;
};

#endif // NUMBERSELECTOR_H
