//
// ScreenCloud - An easy to use screenshot sharing application
// Copyright (C) 2013 Olav Sortland Thoresen <olav.s.th@gmail.com>
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

    if (!info.isFormatSupported(format)) {
        WARNING("Audio format not supported by backend. Trying nearest format.");
        format = info.nearestFormat(format);
    }

    audioOutput = new QAudioOutput(format, this);
    if(audioOutput->error() != QAudio::NoError)
    {
        WARNING("Error while creating audio output. Code: " + QString::number(audioOutput->error()) + " Device: " + info.deviceName());
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
    settings.beginGroup("general");
    soundNotifications = settings.value("sound", true).toBool();
    settings.endGroup();
    if(soundNotifications)
    {
        if(audioFile.isOpen())
        {
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
            WARNING("Failed to play " + file + " audioOutput == NULL");
        }else if (!audioFile.exists())
        {
            WARNING(file + " does not exist.");
        }else if(!audioFile.isOpen())
        {
            WARNING(file + " is not open.");
        }else
        {
            audioOutput->start(&audioFile);
        }
        if(audioOutput->error() != QAudio::NoError)
        {
            WARNING("Error while playing " + file + ". Code: " + QString::number(audioOutput->error()));
        }
    }
}
