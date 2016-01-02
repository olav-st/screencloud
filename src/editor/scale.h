#ifndef SCALE_H
#define SCALE_H

#include <Qt>
#include <QMetaType>

//TODO: Maybe a template?
class Scale
{
public:
    Scale();
    Scale(qreal min, qreal max);
    Scale(qreal min, qreal max, qreal pivot);
    Scale(const Scale &scale);

    qreal min() const;

    qreal max() const;

    qreal pivot() const;

    void setScale(qreal min, qreal max);
    void setScale(qreal min, qreal max, qreal pivot);

    qreal value() const;
    qreal value(qreal min, qreal max) const;
    qreal value(qreal min, qreal max, qreal pivot) const;
    void setValue(qreal value);

    static qreal convert(qreal o_value,
                         qreal o_min,
                         qreal o_max,
                         qreal n_min,
                         qreal n_max);

    static qreal convert(qreal o_value,
                         qreal o_min,
                         qreal o_max,
                         qreal o_pivot,
                         qreal n_min,
                         qreal n_max,
                         qreal n_pivot);

    bool operator==(const Scale &right) const;
    bool operator!=(const Scale &right) const;

private:
    qreal calculateCenter(qreal min, qreal max) const;

    qreal m_min;
    qreal m_max;
    qreal m_pivot;
    qreal m_value;
};

inline
qreal Scale::convert(qreal o_value, qreal o_min, qreal o_max, qreal n_min, qreal n_max)
{
    return ((o_value - o_min) * (n_max - n_min)) / (o_max - o_min) + n_min;
}

inline
qreal Scale::calculateCenter(qreal min, qreal max) const
{
    return (min+max)/2;
}

inline
qreal Scale::value(qreal min, qreal max) const
{
    return value(min, max, calculateCenter(min, max));
}

inline
bool Scale::operator ==(const Scale &right) const
{
    return min() == right.min() && max() == right.max() &&
            value() == right.value() && pivot() == right.pivot();
}

inline
bool Scale::operator !=(const Scale &right) const
{
    return min() != right.min() || max() != right.max() ||
            value() != right.value() || pivot() != right.pivot();
}

Q_DECLARE_METATYPE(Scale)

#endif // SCALE_H
