#ifndef GLOBALSHORTCUT_H
#define GLOBALSHORTCUT_H

/*
 * Global (system-wide) shorcut class, inspired by QxtGlobalShorcut
*/

#include <QObject>
#include <QKeySequence>

class GlobalShortcut : public QObject
{
    Q_OBJECT
public:
    explicit GlobalShortcut(const QKeySequence& keySq, QObject *parent = 0);
    void setKeySequence(const QKeySequence& keySq);
    const QKeySequence& getKeySequence() const;

private:
    QKeySequence keySequence;

signals:
    void activated();

public slots:
};

#endif // GLOBALSHORTCUT_H
