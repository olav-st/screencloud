#include "scalepropertytooleditor.h"

#include <QSlider>
#include <QVariant>
#include "editor/scale.h"

ScalePropertyToolEditor::ScalePropertyToolEditor(QSlider *slider, QObject *parent)
    : PropertyToolEditor(slider->parentWidget(), parent),
      m_slider(slider)
{
    connect(m_slider, SIGNAL(valueChanged(int)),
            this, SLOT(changeScale(int)));
    connect(this, SIGNAL(valueSet(QVariant)),
            this, SLOT(setSliderValue(QVariant)));


    Scale scale(m_slider->minimum(), m_slider->maximum());
    scale.setValue(m_slider->sliderPosition());
    setValue(QVariant::fromValue(scale));
}

void ScalePropertyToolEditor::changeScale(int value)
{
    Scale scale(m_slider->minimum(), m_slider->maximum());
    scale.setValue(value);
    changeValue(QVariant::fromValue(scale));
}

void ScalePropertyToolEditor::setSliderValue(const QVariant &variant)
{
    Scale scale = variant.value<Scale>();
    int val = scale.value(m_slider->minimum(), m_slider->maximum());
    m_slider->blockSignals(true);
    m_slider->setSliderPosition(val);
    m_slider->blockSignals(false);
}
