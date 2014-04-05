//
// ScreenCloud - An easy to use screenshot sharing application
// Copyright (C) 2014 Olav Sortland Thoresen <olav.s.th@gmail.com>
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
    QAudioDeviceInfo info = QAudioDeviceInfo::defaultOutputDevice();
    // Set up the format, eg.
    format = info.preferredFormat();
    format.setCodec("audio/pcm");
    format.setChannels(2);
    format.setSampleRate(44100);
    format.setSampleSize(16);
    format.setByteOrder(QAudioFormat::LittleEndian);
    format.setSampleType(QAudioFormat::SignedInt);

    if (!info.isFormatSupported(format)) {
        WARNING(tr("Audio format not supported by backend. Trying nearest format."));
        format = info.nearestFormat(format);
    }

    audioOutput = new QAudioOutput(format, this);
    connect(audioOutput, SIGNAL(stateChanged(QAudio::State)), this, SLOT(audioStateChanged(QAudio::State)));
    if(audioOutput->error() != QAudio::NoError)
    {
        WARNING(tr("Error while creating audio output. Code: ") + QString::number(audioOutput->error()) + tr(" Device: ") + info.deviceName());
    }
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
        if(audioFile.isOpen())
        {
            audioOutput->stop();
            audioFile.close();
        }
#ifdef Q_OS_MACX
        audioFile.setFileName(QString(qApp->applicationDirPath() + "/../Resources/" + file).toLocal8Bit());
#else
        audioFile.setFileName(QString(qApp->applicationDirPath() + QDir::separator() + file).toLocal8Bit());
#endif
        audioFile.open(QIODevice::ReadOnly);
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
            audioOutput->start(&audioFile);
        }
        if(audioOutput->error() != QAudio::NoError)
        {
            WARNING(tr("Error while playing ") + file + tr(". Code: ") + QString::number(audioOutput->error()));
        }
    }
}

void AudioNotifier::audioStateChanged(QAudio::State state)
{
    if(audioOutput->error() != QAudio::NoError)
    {
        WARNING(tr("Error while playing audio. Code: ") + QString::number(audioOutput->error()));
    }
}
