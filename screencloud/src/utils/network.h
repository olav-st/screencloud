#ifndef NETWORKUTILS_H
#define NETWORKUTILS_H

#include <QNetworkAccessManager>
#include <QUrl>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QEventLoop>
#include <utils/log.h>
#include <QImageReader>
#include <QIcon>

class NetworkUtils
{
public:
    NetworkUtils();
    static QUrl checkUrlForRedirect(QUrl urlToCheck);
    static QString generateNonce(int length);
    static QIcon getIconFromUrl(QUrl url);
};

#endif // NETWORKUTILS_H
