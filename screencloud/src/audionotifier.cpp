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

AudioNotifier::AudioNotifier()
{
    int audio_rate = 22050;
    Uint16 audio_format = AUDIO_S16SYS;
    int audio_channels = 2;
    int audio_buffers = 4096;
    if (SDL_Init(SDL_INIT_AUDIO) != 0) {
        qDebug() << "Unable to initialize SDL:" << SDL_GetError();
        return;
    }
    if(Mix_OpenAudio(audio_rate, audio_format, audio_channels, audio_buffers) != 0) {
            qDebug() << "Unable to initialize audio: " << Mix_GetError();
            return;
    }
}

AudioNotifier::~AudioNotifier()
{
    Mix_CloseAudio();
    SDL_Quit();
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
        Mix_Chunk *sound = NULL;
#ifdef Q_OS_MACX
        sound = Mix_LoadWAV(QString(qApp->applicationDirPath() + "/../Resources/" + file).toLocal8Bit());
#else
        sound = Mix_LoadWAV(QString(qApp->applicationDirPath() + QDir::separator() + file).toLocal8Bit());
#endif
        if(sound == NULL) {
                qDebug() << "Unable to load WAV file: " << Mix_GetError();
                return;
        }
        channel = Mix_PlayChannel(-1, sound, 0);
        if(channel == -1) {
                qDebug() << "Unable to play WAV file: " << Mix_GetError();
        }
        while(Mix_Playing(channel) != 0);
        Mix_FreeChunk(sound);
    }
}
