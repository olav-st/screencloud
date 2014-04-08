#ifndef KAPTIONGRAPHICSTOOLKIT_H
#define KAPTIONGRAPHICSTOOLKIT_H

#include <QObject>
#include <QPushButton>
#include <QMap>
#include <QString>
#include <QSignalMapper>
#include <QMetaObject>
#include <QEvent>
#include "graphicsitemfactory.h"

class PropertyToolEditor;

//TODO: if this class was aware of the scene (or just item selection
//      changed) there would be less confusion...
class KaptionGraphicsToolkit : public QObject
{
    Q_OBJECT

public:
    static const QEvent::Type ItemSetupEvent;

    explicit KaptionGraphicsToolkit(QWidget *propertyToolbar, QObject *parent = 0);

    template <typename T>
    void bindButtonToGraphicsItem(QPushButton *bttn,
                                  bool select = false);

    void bindPropertyTool(PropertyToolEditor *tool,
                            const QString &property);

    GraphicsItemFactory::CreationPolicy itemCreationPolicy() const;
    KaptionGraphicsItem *createItem() const;

    void updateUi();

    //TODO: valutate if this method could be exported outside
    void updateItemsPropertyValue(QList<KaptionGraphicsItem*> items,
                                  const char *property,
                                  const QVariant &value) const;

    void updateToolkitState(QList<KaptionGraphicsItem*> items);

Q_SIGNALS:
    void propertyValueChanged(const QString &name,
                              const QVariant &value);
    void itemSelected();

private Q_SLOTS:
    void selectItem(const QString &className, bool upt = true);
    void updatePropertyValue(const QString &property);

private:
    void deselectItem();
    void setupItem(KaptionGraphicsItem *item) const;
    void updateGraphicsItemButtonsCheckedState();
    void updatePropertyToolbar(const QString &className);
    void updatePropertyToolbar(QList<KaptionGraphicsItem*> items);
    void populatePropertyToolbar(QSet<QWidget*> widgetsToAdd);

    GraphicsItemFactory m_factory;
    QSignalMapper *m_bttnSignalMapper;
    QSignalMapper *m_propertySignalMapper;
    QMap<QString, QPushButton*> m_buttonItemMap;
    QMap<QString, PropertyToolEditor*> m_propertiesMap;
    QString m_selectedItemClassName;
    int m_propertyOffset;
    QWidget *m_propertyToolbar;
};

template <typename T>
void KaptionGraphicsToolkit::bindButtonToGraphicsItem(QPushButton *bttn,
                                                      bool select)
{
    if (!bttn) return;

    //TODO: assert(is_derived(Item, KaptionGraphicsItem)

    QString className = m_factory.registerPrototype(new T);

    m_buttonItemMap[className] = bttn;

    m_bttnSignalMapper->setMapping(bttn, className);
    connect(bttn, SIGNAL(clicked()),
            m_bttnSignalMapper, SLOT(map()));

    if (select) {
        selectItem(className, false);
    }
}

inline
void KaptionGraphicsToolkit::updateUi()
{
    updateGraphicsItemButtonsCheckedState();
    updatePropertyToolbar(m_selectedItemClassName);
}

#endif // KAPTIONGRAPHICSTOOLKIT_H
