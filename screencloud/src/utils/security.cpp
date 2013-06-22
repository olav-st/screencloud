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

#include "security.h"
#include <QDebug>

Security::Security()
{
}

QString Security::encrypt(QString input)
{
    //This uses QCA to encrypt passwords for FPT/SFTP before saving them with QSettings
    //This should probably have more randomness to be completely secure, but it's a bit better than plaintext.
    QCA::Initializer init = QCA::Initializer();
    QCA::SymmetricKey key = QCA::SymmetricKey(QCA::SecureArray(ENC_KEY));
    QCA::InitializationVector iv = QCA::InitializationVector(QCA::SecureArray(ENC_INIT_VECTOR));
    QCA::Cipher cipher = QCA::Cipher(QString("aes128"), QCA::Cipher::CBC,
                                     QCA::Cipher::DefaultPadding, QCA::Encode,
                                     key, iv);
    //check if aes128 is available
    if (!QCA::isSupported("aes128-cbc-pkcs7"))
    {
        qDebug() << "AES128 CBC PKCS7 not supported - "
                    "please check if qca-ossl plugin is"
                    "installed correctly !";
        return "";
    }
    QCA::SecureArray secureData = input.toAscii();
    QCA::SecureArray encryptedData = cipher.process(secureData);
    //check if encryption succeded
    if (!cipher.ok())
    {
        qDebug() << "Encryption failed !";
        return "";
    }
    return QString(qPrintable(QCA::arrayToHex(encryptedData.toByteArray())));
}

QString Security::decrypt(QString input)
{
    if(input.isEmpty())
    {
        return input;
    }
    QCA::Initializer init = QCA::Initializer();
    QCA::SymmetricKey key = QCA::SymmetricKey(QCA::SecureArray(ENC_KEY));
    QCA::InitializationVector iv = QCA::InitializationVector(QCA::SecureArray(ENC_INIT_VECTOR));
    QCA::Cipher cipher = QCA::Cipher(QString("aes128"), QCA::Cipher::CBC,
                                     QCA::Cipher::DefaultPadding, QCA::Encode,
                                     key, iv);
    if (!QCA::isSupported("aes128-cbc-pkcs7"))
    {
        qDebug() << "AES128 CBC PKCS7 not supported - "
                    "please check if qca-ossl plugin is"
                    "installed correctly !";
        return "";
    }
    cipher.setup(QCA::Decode, key, iv);
    QCA::SecureArray encryptedData = QCA::SecureArray(QCA::hexToArray(input));
    QCA::SecureArray decryptedData = cipher.process(encryptedData);
    //check if decryption succeded
    if (!cipher.ok())
    {
        qDebug() << "Decryption failed!";
        qDebug() << "Tried to decrypt: " << input;
        return "";
    }
    return QString(decryptedData.data());
}
