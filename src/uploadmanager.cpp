#include "uploadmanager.h"

UploadManager::UploadManager(QObject *parent) :
    QObject(parent)
{
    pluginManager.initStdinHandler();
    loadServices();
    uploadersModel = new UploadersListModel(this, &uploaders);
    uploadFinished = false;
    lastScreenshotName.clear();
}

UploadManager::~UploadManager()
{
    unloadServices();
    delete uploadersModel;
}

void UploadManager::loadServices()
{
    uploaders.append(&localFileUploader);
    pluginManager.loadPlugins();
    QHash<QString, Uploader*>::iterator it = pluginManager.uploaderPlugins.begin();
    while(it != pluginManager.uploaderPlugins.end())
    {
        uploaders.append(*it);
        ++it;
    }
    //Clipboard plugins should be at the end of the list
    uploaders.append(&clipboardUploader);
}

void UploadManager::unloadServices()
{
    pluginManager.unloadPlugins();
    uploaders.clear();
}

void UploadManager::reloadServices()
{
    unloadServices();
    loadServices();
    uploadersModel->revert();
}

bool UploadManager::upload(const QImage &screenshot, QString serviceShortname, QString screenshotName, bool wait)
{
    uploadFinished = false;
    for(int i = 0; i < uploaders.size(); i++)
    {
        if(uploaders.at(i)->getShortName() == serviceShortname)
        {
            lastScreenshotName = screenshotName;
            Uploader* uploader = uploaders.at(i);
            connect(uploader, SIGNAL(uploadingFinished(QString)), this, SLOT(uploaderFinished(QString)));
            connect(uploader, SIGNAL(uploadingError(QString)), this, SLOT(uploaderError(QString)));
            INFO(tr("Uploading screenshot to \'") + serviceShortname + tr("\'. Size: ") + QString::number(screenshot.byteCount()) + " bytes");
            if(qobject_cast<PythonUploader*>(uploader) != NULL)
            {
                QtConcurrent::run(uploader, &Uploader::upload, screenshot, screenshotName);
            }else
            {
                uploader->upload(screenshot, screenshotName);
            }
            if(wait)
            {
                while (!uploadFinished) {
                   qApp->processEvents(QEventLoop::WaitForMoreEvents);
                }
            }
            return true;
        }
    }
    CRITICAL(tr("Failed to upload to \'") + serviceShortname + tr("\'. No such service found."));
    return false;
}

QString UploadManager::getDefaultService()
{
    return "clipboard";
}

QList<Uploader *> *UploadManager::list()
{
    return &uploaders;
}

UploadersListModel *UploadManager::listModel()
{
    return uploadersModel;
}

Uploader *UploadManager::getUploader(QString shortname)
{
    for(int i = 0; i < uploaders.length(); i++)
    {
        if(uploaders.at(i)->getShortName() == shortname)
        {
            return uploaders.at(i);
        }
    }
    return NULL;
}

QString UploadManager::getLastScreenshotName()
{
    return lastScreenshotName;
}

void UploadManager::uploaderFinished(QString url)
{
    disconnect(sender(), SIGNAL(uploadingFinished(QString)), this, SLOT(uploaderFinished(QString)));
    disconnect(sender(), SIGNAL(uploadingError(QString)), this, SLOT(uploaderError(QString)));
    uploadFinished = true;
    INFO("URL: " + url);
    Q_EMIT finished(url);
}

void UploadManager::uploaderError(QString errorMessage)
{
    disconnect(sender(), SIGNAL(uploadingFinished(QString)), this, SLOT(uploaderFinished(QString)));
    disconnect(sender(), SIGNAL(uploadingError(QString)), this, SLOT(uploaderError(QString)));
    uploadFinished = true;
    WARNING(errorMessage);
    Q_EMIT error(errorMessage);
}
