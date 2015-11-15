#include "globalshortcut.h"

GlobalShortcut::GlobalShortcut(const QKeySequence &keySq, QObject *parent) : QObject(parent)
{
    setKeySequence(keySq);
}

void GlobalShortcut::setKeySequence(const QKeySequence &keySq)
{
    keySequence = keySq;
}

const QKeySequence &GlobalShortcut::getKeySequence() const
{
    return keySequence;
}

