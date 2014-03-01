#ifndef LUAUPLOADER_H
#define LUAUPLOADER_H

#include <QObject>
#include <uploaders/uploader.h>
#include <plugin/pluginmanager.h>
#include <QMessageBox>
#include <utils/log.h>
#include <utils/OS.h>
#include <PythonQt.h>
#include <QtConcurrentRun>

class PythonUploader : public Uploader
{
    Q_OBJECT
public:
    explicit PythonUploader(QString name, QString shortname, QString className, QString iconFilename, QObject *parent);
    ~PythonUploader();
    void showSettingsUI(QWidget* parent);
    bool isConfigured();

private:
    PythonQtObjectPtr pythonContext;
    PythonQtObjectPtr moduleObj;
    QString className;

public:
    QString workingDir;

signals:

public slots:
    void upload(const QImage& screenshot, QString name);
    QString getFilename();

};

#endif // LUAUPLOADER_H
