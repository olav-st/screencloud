#ifndef SCALEPROPERTYTOOLEDITOR_H
#define SCALEPROPERTYTOOLEDITOR_H

#include "propertytooleditor.h"

class QSlider;

class ScalePropertyToolEditor : public PropertyToolEditor
{
    Q_OBJECT

public:
    ScalePropertyToolEditor(QSlider *slider, QObject *parent = 0);

private Q_SLOTS:
    void changeScale(int value);
    void setSliderValue(const QVariant &variant);

private:
    QSlider *m_slider;
};

#endif // SCALEPROPERTYTOOLEDITOR_H
