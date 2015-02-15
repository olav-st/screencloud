#include "changelogdialog.h"
#include "ui_changelogdialog.h"
#if QT_VERSION >= QT_VERSION_CHECK(5,0,0)
    #include <QUrlQuery>
#endif

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
    QUrl baseUrl = QUrl("https://api.screencloud.net/1.0/updates/changelog");
#if QT_VERSION >= QT_VERSION_CHECK(5,0,0)
    QUrlQuery query(baseUrl);
#else
    QUrl query(baseUrl);
#endif
    query.addQueryItem("installed-version", VERSION);
    query.addQueryItem("os", OS_SHORTNAME);
#if QT_VERSION >= QT_VERSION_CHECK(5,0,0)
    QUrl fullUrl;
    fullUrl.setQuery(query);
#else
    QUrl fullUrl(query);
#endif
    getChangelogReq.setUrl(fullUrl);
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
