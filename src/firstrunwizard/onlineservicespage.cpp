#include "onlineservicespage.h"

OnlineServicesPage::OnlineServicesPage(QWidget *parent) :
    QWizardPage(parent)
{
    setTitle(tr("Online Services"));
    layout = new QVBoxLayout();
    label_text = new QLabel(tr("ScreenCloud supports many different hosting services. Choose the ones you use from the list below.\nYou can access this list from the Preferences window later."));
    pluginDialog = new PluginDialog();
    pluginDialog->setWindowFlags(Qt::Widget);
    layout->addWidget(label_text);
    layout->addWidget(pluginDialog);
    pluginDialog->setShowButtons(false);
    setLayout(layout);
}
OnlineServicesPage::~OnlineServicesPage()
{
    delete label_text;
    delete pluginDialog;
    delete layout;
}

bool OnlineServicesPage::validatePage()
{
    pluginDialog->on_buttonBox_accepted();
    return true;
}
