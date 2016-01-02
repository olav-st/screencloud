#ifndef EDITORDIALOG_H
#define EDITORDIALOG_H

#include <QDialog>
#include <editor/kaptiongraphicstoolkit.h>
#include <editor/items/arrowgraphicsitem.h>
#include <editor/items/boxgraphicsitem.h>
#include <editor/items/boxtextgraphicsitem.h>
#include <editor/items/ellipsegraphicsitem.h>
#include <editor/items/handlegraphicsitem.h>
#include <editor/items/numbereditem.h>
#include <editor/items/textgraphicsitem.h>
#include <editor/colorpropertytooleditor.h>
#include <editor/fontpropertytooleditor.h>
#include <editor/scalepropertytooleditor.h>
#include <editor/numberpropertytooleditor.h>

namespace Ui {
class EditorDialog;
}

class EditorDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EditorDialog(QWidget *parent = 0, QImage* image = NULL);
    ~EditorDialog();

private:
    Ui::EditorDialog *ui;
    QImage* img;
    QPixmap pixmap;
    KaptionGraphicsToolkit* toolkit;

public Q_SLOTS:
    void dialogAccepted();
};

#endif // EDITORDIALOG_H
