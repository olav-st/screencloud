#ifndef GRAPHICITEMFACTORY_H
#define GRAPHICITEMFACTORY_H

#include <QMap>

class KaptionGraphicsItem;
class QString;
class QMetaObject;

class GraphicsItemFactory
{

public:
    enum CreationPolicy {
        Undefined,
        Static,
        Dynamic
    };

    ~GraphicsItemFactory();

    QString registerPrototype(KaptionGraphicsItem *item);
    const KaptionGraphicsItem *prototype(const QString &className) const;
    CreationPolicy creationPolicy(const QString &className) const;
    KaptionGraphicsItem *newInstance(const QString &className) const;

private:
    QMap<QString, KaptionGraphicsItem*> m_prototypes;
};

#endif // GRAPHICITEMFACTORY_H
