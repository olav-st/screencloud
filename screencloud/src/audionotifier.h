/* * ScreenCloud - An easy to use screenshot sharing application
 * Copyright (C) 2014 Olav Sortland Thoresen <olav.s.th@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
 * PARTICULAR PURPOSE. See the GNU General Public License for more details.
 */

#ifndef AUDIONOTIFIER_H
#define AUDIONOTIFIER_H

#include <QObject>
#include <QSettings>
#include <QAudioOutput>
#include <utils/log.h>
#include <QDir>
#include <QApplication>

class AudioNotifier : public QObject
{
    Q_OBJECT
public:
    AudioNotifier(QObject *parent = 0);
    ~AudioNotifier();
    void play(QString file);

private:
    QAudioOutput* audioOutput;
    QAudioFormat format;
    QFile audioFile;

public slots:
    void audioStateChanged(QAudio::State state);

};

#endif // AUDIONOTIFIER_H
