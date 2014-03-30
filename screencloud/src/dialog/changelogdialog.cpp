#include "changelogdialog.h"
#include "ui_changelogdialog.h"

ChangelogDialog::ChangelogDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangelogDialog)
{
    ui->setupUi(this);
    busyOverlay = new BusyOverlay();
    overlayLayout = new QHBoxLayout(ui->text_changes);
    overlayLayout->setAlignment(Qt::AlignCenter);
    overlayLayout->addWidget(busyOverlay);
    connect(&netManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinished(QNetworkReply*)));
}

ChangelogDialog::~ChangelogDialog()
{
    delete busyOverlay;
    delete ui;
    delete overlayLayout;
}

void ChangelogDialog::showEvent(QShowEvent *e)
{
    busyOverlay->show();
    QNetworkRequest getChangelogReq;
    getChangelogReq.setUrl(QUrl("https://api.screencloud.net/1.0/changelog"));
    netManager.get(getChangelogReq);
}

void ChangelogDialog::replyFinished(QNetworkReply *reply)
{
    busyOverlay->hide();
    QString replyText = reply->readAll();
    if(reply->error() == QNetworkReply::NoError)
    {
        ui->text_changes->setText(replyText);
    }else
    {
        ui->text_changes->setText(reply->errorString());
    }
}
