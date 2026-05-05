//
// ScreenCloud - An easy to use screenshot sharing application
// Copyright (C) 2016 Olav Sortland Thoresen <olav.s.th@gmail.com>
//
// This program is free software; you can redistribute it and/or modify it under
// the terms of the GNU General Public License as published by the Free Software
// Foundation; either version 2 of the License, or (at your option) any later
// version.
//
// This program is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
// PARTICULAR PURPOSE. See the GNU General Public License for more details.
//

#include "audionotifier.h"

AudioNotifier::AudioNotifier(QObject *parent)
{
    QAudioFormat format;
    format.setSampleRate(44100);
    format.setChannelCount(2);
    format.setSampleFormat(QAudioFormat::Int16);

    audioOutput = new QAudioSink(format, this);
    connect(audioOutput, &QAudioSink::stateChanged, this, &AudioNotifier::audioStateChanged);
}

AudioNotifier::~AudioNotifier()
{
    delete audioOutput;
}


void AudioNotifier::play(QString file)
{
    bool soundNotifications;
    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("main");
    soundNotifications = settings.value("sound", true).toBool();
    settings.endGroup();
    if(soundNotifications)
    {
        queue.enqueue(file);
        playNextFromQueue();
    }
}

void AudioNotifier::playNextFromQueue()
{
    if(queue.size() > 0 && !audioFile.isOpen())
    {
        QString file = queue.dequeue();
        if(!audioFile.isOpen())
        {
            audioFile.setFileName(file);
            audioFile.open(QIODevice::ReadOnly);
        }
        if(audioOutput == NULL)
        {
            WARNING(tr("Failed to play ") + file + " audioOutput == NULL");
        }else if (!audioFile.exists())
        {
            WARNING(file + tr(" does not exist."));
        }else if(!audioFile.isOpen())
        {
            WARNING(file + tr(" is not open."));
        }else
        {
            //Make sure we dont try to play the wav headers
            for(int i = 0; i < audioFile.size(); ++i) {
                QByteArray ba = audioFile.peek(4);
                if (ba == "data") {
                    audioFile.read(8);
                    break;
                } else {
                    audioFile.read(1);
                }
            }
            audioOutput->start(&audioFile);
        }
        if(audioOutput->state() == QAudio::IdleState)
        {
            WARNING(tr("Error while playing ") + file + tr(". Error: State is Idle"));
        }
    }
}

void AudioNotifier::audioStateChanged(QAudio::State state)
{
    if(state == QAudio::IdleState)
    {
        audioFile.close();
        playNextFromQueue();
    }
}
