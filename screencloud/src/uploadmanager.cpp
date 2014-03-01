#include "uploadmanager.h"

UploadManager::UploadManager(QObject *parent) :
    QObject(parent)
{
    loadServices();
    uploadersModel = new UploadersListModel(this, &uploaders);
    uploadFinished = false;
}

UploadManager::~UploadManager()
{
    unloadServices();
    delete uploadersModel;
}

void UploadManager::loadServices()
{
    uploaders.append(&screencloudUploader);
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
            lastScreenshotName = screenshotName;
            return true;
        }
    }
    CRITICAL(tr("Failed to upload to \'") + serviceShortname + tr("\'. No such service found."));
    return false;
}

QString UploadManager::getDefaultService()
{
    QSettings settings("screencloud", "ScreenCloud");
    settings.beginGroup("account");
    bool loggedIn = settings.value("logged-in", false).toBool();
    settings.endGroup();
    if(loggedIn)
    {
        return "screencloud";
    }
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
    emit finished(url);
}

void UploadManager::uploaderError(QString errorMessage)
{
    disconnect(sender(), SIGNAL(uploadingFinished(QString)), this, SLOT(uploaderFinished(QString)));
    disconnect(sender(), SIGNAL(uploadingError(QString)), this, SLOT(uploaderError(QString)));
    uploadFinished = true;
    WARNING(errorMessage);
    emit error(errorMessage);
}
