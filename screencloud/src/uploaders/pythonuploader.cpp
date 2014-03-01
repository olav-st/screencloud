#include "pythonuploader.h"

PythonUploader::PythonUploader(QString name, QString shortname, QString className, QString iconFilename, QObject *parent) :
    Uploader(parent)
{
    this->workingDir = PluginManager::pluginPath() + shortname;
    this->shortname = shortname;
    this->name = name;
    this->className = className;
    this->filename = QString();
    QFile iconFile(workingDir + QDir::separator() + iconFilename);
    if(iconFile.exists())
    {
        this->icon = QIcon(iconFile.fileName());
    }
    QFile mainScriptFile(workingDir + QDir::separator() + "main.py");
    if(!mainScriptFile.exists())
    {
        QMessageBox::critical(0, "Error", "Failed to load plugin \"" + shortname + "\". Script file \"main.py\" does not exist.");
        return;
    }
    if (!mainScriptFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
      QMessageBox::critical(0, "Error", "Failed to load plugin \"" + shortname + "\". File main.py exists, but is not readable.");
      return;
    }
    PythonQt::self()->addSysPath(workingDir + QDir::separator() + "modules");
    moduleObj = PythonQt::self()->createModuleFromScript(shortname + "_uploader");
    moduleObj.addVariable("workingDir", workingDir);
    moduleObj.evalScript(QString(mainScriptFile.readAll()));
    if(PythonQt::self()->hadError())
    {
        PythonQt::self()->handleError();
        WARNING("Error while parsing script file " + mainScriptFile.fileName());
        QMessageBox::critical(NULL, "Script error in plugin '" + shortname + "'", "Error while parsing script file " + mainScriptFile.fileName() + "\n" + "Plugin: " + this->shortname);
    }
    pythonContext = PythonQt::self()->getMainModule();
    pythonContext.evalScript("from " + shortname + "_uploader import " + className);
    pythonContext.evalScript(shortname + "_u = " + className + "()");
}

PythonUploader::~PythonUploader()
{
    pythonContext.removeVariable(shortname + "_u = ");
}

void PythonUploader::upload(const QImage &screenshot, QString name)
{
    QVariantList args;
    args << screenshot;
    args << name;
    QVariant result = pythonContext.call(shortname + "_u.upload", args);
    if(PythonQt::self()->hadError())
    {
        PythonQt::self()->handleError();
        WARNING("Failed to call upload() in " + this->className);
        //QMessageBox::critical(NULL, "Script error in plugin '" + shortname + "'", "Failed to call upload() in " +  this->className + "\n" + "Plugin: " + this->shortname + "\n" + "dir: " + this->workingDir);
        emit uploadingError("Failed to call upload() in " +  this->className + "\n" + "Plugin: " + this->shortname + "\n" + "dir: " + this->workingDir);
        return;
    }
    bool success = result.toBool();
    if(success)
    {
        QString url = moduleObj.getVariable("ScreenCloud.clipboardUrl").toString();
        emit uploadingFinished(url);
    }else
    {
        QString errorString = moduleObj.getVariable("ScreenCloud.uploadingError").toString();
        if(errorString.isEmpty())
        {
            errorString = tr("Unknown error");
        }
        emit uploadingError(errorString);
    }
    //Clean up
    moduleObj.removeVariable("ScreenCloud.clipboardUrl");
    moduleObj.removeVariable("ScreenCloud.uploadingError");
    emit finished();
}

void PythonUploader::showSettingsUI(QWidget *parent)
{
    //moduleObj.addObject("parentWidget", parent);
    PythonQt::self()->getMainModule().call(shortname + "_u.showSettingsUI");
    if(PythonQt::self()->hadError())
    {
        PythonQt::self()->handleError();
        WARNING("Failed to call showSettingsUI() in " + this->className);
        QMessageBox::critical(NULL, "Script error in plugin '" + shortname + "'", "Failed to call showSettingsUI() in " +  this->className + "\n" + "Plugin: " + this->shortname + "\n" + "dir: " + this->workingDir);
    }
}

bool PythonUploader::isConfigured()
{
    QVariant result = pythonContext.call(shortname + "_u.isConfigured");
    if(PythonQt::self()->hadError())
    {
        PythonQt::self()->handleError();
        WARNING("Failed to call isConfigured() in " + this->className);
        QMessageBox::critical(NULL, "Script error in plugin '" + shortname + "'", "Failed to call isConfigured() in " +  this->className + "\n" + "Plugin: " + this->shortname + "\n" + "dir: " + this->workingDir);
        return false;
    }
    return result.toBool();
}

QString PythonUploader::getFilename()
{
    QVariant result = pythonContext.call(shortname + "_u.getFilename");
    this->filename = result.toString();
    return filename;
}
