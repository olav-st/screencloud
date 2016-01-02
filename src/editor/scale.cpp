#include "editor/scale.h"

Scale::Scale()
{
}

Scale::Scale(qreal min, qreal max)
    : m_min(min),
      m_max(max),
      m_pivot(calculateCenter(min, max)),
      m_value(min)
{
}

Scale::Scale(qreal min, qreal max, qreal pivot)
    : m_min(min),
      m_max(max),
      m_pivot(pivot),
      m_value(min)
{
}

Scale::Scale(const Scale &scale)
    : m_min(scale.min()),
      m_max(scale.max()),
      m_pivot(scale.pivot()),
      m_value(scale.value())
{
}

qreal Scale::min() const
{
    return m_min;
}

qreal Scale::max() const
{
    return m_max;
}

qreal Scale::pivot() const
{
    return m_pivot;
}

void Scale::setScale(qreal min, qreal max)
{
    setScale(min, max, calculateCenter(min, max));
}

void Scale::setScale(qreal min, qreal max, qreal pivot)
{
    m_min = min;
    m_max = max;
    m_pivot = pivot;
}

qreal Scale::value() const
{
    return m_value;
}

qreal Scale::value(qreal min, qreal max, qreal pivot) const
{
    return convert(m_value, m_min, m_max, m_pivot, min, max, pivot);
}

void Scale::setValue(qreal value)
{
    m_value = value;
}

qreal Scale::convert(qreal o_value,
                     qreal o_min,
                     qreal o_max,
                     qreal o_pivot,
                     qreal n_min,
                     qreal n_max,
                     qreal n_pivot)
{
    if (o_min == n_min && o_max == n_max && o_pivot == n_pivot) {
        return o_value;
    }

    qreal n_value;
    if (o_value >= o_pivot) {
        n_value = convert(o_value, o_pivot, o_max, n_pivot, n_max);
    } else {
        n_value = convert(o_value, o_min, o_pivot, n_min, n_pivot);
    }
    return n_value;
}
