#ifndef CHANGELOGDIALOG_H
#define CHANGELOGDIALOG_H

#include <QDialog>
#include <gui-elements/busyoverlay.h>
#include <QHBoxLayout>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <utils/OS.h>

namespace Ui {
class ChangelogDialog;
}

class ChangelogDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ChangelogDialog(QWidget *parent = 0);
    ~ChangelogDialog();
    void showEvent(QShowEvent* e);

private:
    Ui::ChangelogDialog *ui;
    QNetworkAccessManager netManager;
    BusyOverlay* busyOverlay;
    QHBoxLayout *overlayLayout;

private Q_SLOTS:
    void replyFinished(QNetworkReply* reply);
};

#endif // CHANGELOGDIALOG_H
