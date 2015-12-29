#ifndef ONLINESERVICESPAGE_H
#define ONLINESERVICESPAGE_H

#include <QWizardPage>
#include <dialog/plugindialog.h>
#include <QVBoxLayout>
#include <QLabel>

class OnlineServicesPage : public QWizardPage
{
    Q_OBJECT
public:
    explicit OnlineServicesPage(QWidget *parent = 0);
    ~OnlineServicesPage();
    bool validatePage();

private:
    QLabel* label_text;
    PluginDialog* pluginDialog;
    QVBoxLayout* layout;

Q_SIGNALS:

public Q_SLOTS:

};

#endif // ONLINESERVICESPAGE_H
