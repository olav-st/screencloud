#include <PythonQt.h>
#include <QIcon>
#include <QMessageBox>
#include <QObject>
#include <QVariant>
#include <qabstractbutton.h>
#include <qaction.h>
#include <qactiongroup.h>
#include <qapplication.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicswidget.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix4x4.h>
#include <qmenu.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qvalidator.h>
#include <qvector2d.h>
#include <qvector3d.h>
#include <qvector4d.h>
#include <qwhatsthis.h>
#include <qwidget.h>
#include <qwidgetaction.h>
#include <qwindowsstyle.h>
#include <qwizard.h>
#include <qworkspace.h>



class PythonQtShell_QValidator : public QValidator
{
public:
    PythonQtShell_QValidator(QObject*  parent = 0):QValidator(parent),_wrapper(NULL) {};

   ~PythonQtShell_QValidator();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void fixup(QString&  arg__1) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual QValidator::State  validate(QString&  arg__1, int&  arg__2) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QValidator : public QValidator
{ public:
inline void promoted_fixup(QString&  arg__1) const { QValidator::fixup(arg__1); }
};

class PythonQtWrapper_QValidator : public QObject
{ Q_OBJECT
public:
Q_ENUMS(State )
enum State{
  Invalid = QValidator::Invalid,   Intermediate = QValidator::Intermediate,   Acceptable = QValidator::Acceptable};
public slots:
QValidator* new_QValidator(QObject*  parent = 0);
void delete_QValidator(QValidator* obj) { delete obj; } 
   void fixup(QValidator* theWrappedObject, QString&  arg__1) const;
   QLocale  locale(QValidator* theWrappedObject) const;
   void setLocale(QValidator* theWrappedObject, const QLocale&  locale);
};





class PythonQtWrapper_QVector2D : public QObject
{ Q_OBJECT
public:
public slots:
QVector2D* new_QVector2D();
QVector2D* new_QVector2D(const QPoint&  point);
QVector2D* new_QVector2D(const QPointF&  point);
QVector2D* new_QVector2D(const QVector3D&  vector);
QVector2D* new_QVector2D(const QVector4D&  vector);
QVector2D* new_QVector2D(qreal  xpos, qreal  ypos);
QVector2D* new_QVector2D(const QVector2D& other) {
QVector2D* a = new QVector2D();
*((QVector2D*)a) = other;
return a; }
void delete_QVector2D(QVector2D* obj) { delete obj; } 
   qreal  static_QVector2D_dotProduct(const QVector2D&  v1, const QVector2D&  v2);
   bool  isNull(QVector2D* theWrappedObject) const;
   qreal  length(QVector2D* theWrappedObject) const;
   qreal  lengthSquared(QVector2D* theWrappedObject) const;
   void normalize(QVector2D* theWrappedObject);
   QVector2D  normalized(QVector2D* theWrappedObject) const;
   const QVector2D  __mul__(QVector2D* theWrappedObject, const QVector2D&  v2);
   const QVector2D  __mul__(QVector2D* theWrappedObject, qreal  factor);
   QVector2D*  __imul__(QVector2D* theWrappedObject, const QVector2D&  vector);
   QVector2D*  __imul__(QVector2D* theWrappedObject, qreal  factor);
   const QVector2D  __add__(QVector2D* theWrappedObject, const QVector2D&  v2);
   QVector2D*  __iadd__(QVector2D* theWrappedObject, const QVector2D&  vector);
   const QVector2D  __sub__(QVector2D* theWrappedObject, const QVector2D&  v2);
   QVector2D*  __isub__(QVector2D* theWrappedObject, const QVector2D&  vector);
   const QVector2D  __div__(QVector2D* theWrappedObject, qreal  divisor);
   QVector2D*  __idiv__(QVector2D* theWrappedObject, qreal  divisor);
   void writeTo(QVector2D* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QVector2D* theWrappedObject, const QVector2D&  v2);
   void readFrom(QVector2D* theWrappedObject, QDataStream&  arg__1);
   void setX(QVector2D* theWrappedObject, qreal  x);
   void setY(QVector2D* theWrappedObject, qreal  y);
   QPoint  toPoint(QVector2D* theWrappedObject) const;
   QPointF  toPointF(QVector2D* theWrappedObject) const;
   QVector3D  toVector3D(QVector2D* theWrappedObject) const;
   QVector4D  toVector4D(QVector2D* theWrappedObject) const;
   qreal  x(QVector2D* theWrappedObject) const;
   qreal  y(QVector2D* theWrappedObject) const;
    QString py_toString(QVector2D*);
    bool __nonzero__(QVector2D* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QVector3D : public QObject
{ Q_OBJECT
public:
public slots:
QVector3D* new_QVector3D();
QVector3D* new_QVector3D(const QPoint&  point);
QVector3D* new_QVector3D(const QPointF&  point);
QVector3D* new_QVector3D(const QVector2D&  vector);
QVector3D* new_QVector3D(const QVector2D&  vector, qreal  zpos);
QVector3D* new_QVector3D(const QVector4D&  vector);
QVector3D* new_QVector3D(qreal  xpos, qreal  ypos, qreal  zpos);
QVector3D* new_QVector3D(const QVector3D& other) {
QVector3D* a = new QVector3D();
*((QVector3D*)a) = other;
return a; }
void delete_QVector3D(QVector3D* obj) { delete obj; } 
   QVector3D  static_QVector3D_crossProduct(const QVector3D&  v1, const QVector3D&  v2);
   qreal  distanceToLine(QVector3D* theWrappedObject, const QVector3D&  point, const QVector3D&  direction) const;
   qreal  distanceToPlane(QVector3D* theWrappedObject, const QVector3D&  plane, const QVector3D&  normal) const;
   qreal  distanceToPlane(QVector3D* theWrappedObject, const QVector3D&  plane1, const QVector3D&  plane2, const QVector3D&  plane3) const;
   qreal  static_QVector3D_dotProduct(const QVector3D&  v1, const QVector3D&  v2);
   bool  isNull(QVector3D* theWrappedObject) const;
   qreal  length(QVector3D* theWrappedObject) const;
   qreal  lengthSquared(QVector3D* theWrappedObject) const;
   QVector3D  static_QVector3D_normal(const QVector3D&  v1, const QVector3D&  v2);
   QVector3D  static_QVector3D_normal(const QVector3D&  v1, const QVector3D&  v2, const QVector3D&  v3);
   void normalize(QVector3D* theWrappedObject);
   QVector3D  normalized(QVector3D* theWrappedObject) const;
   QVector3D  __mul__(QVector3D* theWrappedObject, const QMatrix4x4&  matrix);
   const QVector3D  __mul__(QVector3D* theWrappedObject, const QVector3D&  v2);
   const QVector3D  __mul__(QVector3D* theWrappedObject, qreal  factor);
   QVector3D*  __imul__(QVector3D* theWrappedObject, const QVector3D&  vector);
   QVector3D*  __imul__(QVector3D* theWrappedObject, qreal  factor);
   const QVector3D  __add__(QVector3D* theWrappedObject, const QVector3D&  v2);
   QVector3D*  __iadd__(QVector3D* theWrappedObject, const QVector3D&  vector);
   const QVector3D  __sub__(QVector3D* theWrappedObject, const QVector3D&  v2);
   QVector3D*  __isub__(QVector3D* theWrappedObject, const QVector3D&  vector);
   const QVector3D  __div__(QVector3D* theWrappedObject, qreal  divisor);
   QVector3D*  __idiv__(QVector3D* theWrappedObject, qreal  divisor);
   void writeTo(QVector3D* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QVector3D* theWrappedObject, const QVector3D&  v2);
   void readFrom(QVector3D* theWrappedObject, QDataStream&  arg__1);
   void setX(QVector3D* theWrappedObject, qreal  x);
   void setY(QVector3D* theWrappedObject, qreal  y);
   void setZ(QVector3D* theWrappedObject, qreal  z);
   QPoint  toPoint(QVector3D* theWrappedObject) const;
   QPointF  toPointF(QVector3D* theWrappedObject) const;
   QVector2D  toVector2D(QVector3D* theWrappedObject) const;
   QVector4D  toVector4D(QVector3D* theWrappedObject) const;
   qreal  x(QVector3D* theWrappedObject) const;
   qreal  y(QVector3D* theWrappedObject) const;
   qreal  z(QVector3D* theWrappedObject) const;
    QString py_toString(QVector3D*);
    bool __nonzero__(QVector3D* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QVector4D : public QObject
{ Q_OBJECT
public:
public slots:
QVector4D* new_QVector4D();
QVector4D* new_QVector4D(const QPoint&  point);
QVector4D* new_QVector4D(const QPointF&  point);
QVector4D* new_QVector4D(const QVector2D&  vector);
QVector4D* new_QVector4D(const QVector2D&  vector, qreal  zpos, qreal  wpos);
QVector4D* new_QVector4D(const QVector3D&  vector);
QVector4D* new_QVector4D(const QVector3D&  vector, qreal  wpos);
QVector4D* new_QVector4D(qreal  xpos, qreal  ypos, qreal  zpos, qreal  wpos);
QVector4D* new_QVector4D(const QVector4D& other) {
QVector4D* a = new QVector4D();
*((QVector4D*)a) = other;
return a; }
void delete_QVector4D(QVector4D* obj) { delete obj; } 
   qreal  static_QVector4D_dotProduct(const QVector4D&  v1, const QVector4D&  v2);
   bool  isNull(QVector4D* theWrappedObject) const;
   qreal  length(QVector4D* theWrappedObject) const;
   qreal  lengthSquared(QVector4D* theWrappedObject) const;
   void normalize(QVector4D* theWrappedObject);
   QVector4D  normalized(QVector4D* theWrappedObject) const;
   QVector4D  __mul__(QVector4D* theWrappedObject, const QMatrix4x4&  matrix);
   const QVector4D  __mul__(QVector4D* theWrappedObject, const QVector4D&  v2);
   const QVector4D  __mul__(QVector4D* theWrappedObject, qreal  factor);
   QVector4D*  __imul__(QVector4D* theWrappedObject, const QVector4D&  vector);
   QVector4D*  __imul__(QVector4D* theWrappedObject, qreal  factor);
   const QVector4D  __add__(QVector4D* theWrappedObject, const QVector4D&  v2);
   QVector4D*  __iadd__(QVector4D* theWrappedObject, const QVector4D&  vector);
   const QVector4D  __sub__(QVector4D* theWrappedObject, const QVector4D&  v2);
   QVector4D*  __isub__(QVector4D* theWrappedObject, const QVector4D&  vector);
   const QVector4D  __div__(QVector4D* theWrappedObject, qreal  divisor);
   QVector4D*  __idiv__(QVector4D* theWrappedObject, qreal  divisor);
   void writeTo(QVector4D* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QVector4D* theWrappedObject, const QVector4D&  v2);
   void readFrom(QVector4D* theWrappedObject, QDataStream&  arg__1);
   void setW(QVector4D* theWrappedObject, qreal  w);
   void setX(QVector4D* theWrappedObject, qreal  x);
   void setY(QVector4D* theWrappedObject, qreal  y);
   void setZ(QVector4D* theWrappedObject, qreal  z);
   QPoint  toPoint(QVector4D* theWrappedObject) const;
   QPointF  toPointF(QVector4D* theWrappedObject) const;
   QVector2D  toVector2D(QVector4D* theWrappedObject) const;
   QVector2D  toVector2DAffine(QVector4D* theWrappedObject) const;
   QVector3D  toVector3D(QVector4D* theWrappedObject) const;
   QVector3D  toVector3DAffine(QVector4D* theWrappedObject) const;
   qreal  w(QVector4D* theWrappedObject) const;
   qreal  x(QVector4D* theWrappedObject) const;
   qreal  y(QVector4D* theWrappedObject) const;
   qreal  z(QVector4D* theWrappedObject) const;
    QString py_toString(QVector4D*);
    bool __nonzero__(QVector4D* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QWhatsThis : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWhatsThis(QWhatsThis* obj) { delete obj; } 
   QAction*  static_QWhatsThis_createAction(QObject*  parent = 0);
   void static_QWhatsThis_enterWhatsThisMode();
   void static_QWhatsThis_hideText();
   bool  static_QWhatsThis_inWhatsThisMode();
   void static_QWhatsThis_leaveWhatsThisMode();
   void static_QWhatsThis_showText(const QPoint&  pos, const QString&  text, QWidget*  w = 0);
};





class PythonQtWrapper_QWhatsThisClickedEvent : public QObject
{ Q_OBJECT
public:
public slots:
QWhatsThisClickedEvent* new_QWhatsThisClickedEvent(const QString&  href);
void delete_QWhatsThisClickedEvent(QWhatsThisClickedEvent* obj) { delete obj; } 
   QString  href(QWhatsThisClickedEvent* theWrappedObject) const;
};





class PythonQtShell_QWheelEvent : public QWheelEvent
{
public:
    PythonQtShell_QWheelEvent(const QPoint&  pos, const QPoint&  globalPos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient = Qt::Vertical):QWheelEvent(pos, globalPos, delta, buttons, modifiers, orient),_wrapper(NULL) {};
    PythonQtShell_QWheelEvent(const QPoint&  pos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient = Qt::Vertical):QWheelEvent(pos, delta, buttons, modifiers, orient),_wrapper(NULL) {};

   ~PythonQtShell_QWheelEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWheelEvent : public QObject
{ Q_OBJECT
public:
public slots:
QWheelEvent* new_QWheelEvent(const QPoint&  pos, const QPoint&  globalPos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient = Qt::Vertical);
QWheelEvent* new_QWheelEvent(const QPoint&  pos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient = Qt::Vertical);
void delete_QWheelEvent(QWheelEvent* obj) { delete obj; } 
   Qt::MouseButtons  buttons(QWheelEvent* theWrappedObject) const;
   int  delta(QWheelEvent* theWrappedObject) const;
   const QPoint*  globalPos(QWheelEvent* theWrappedObject) const;
   int  globalX(QWheelEvent* theWrappedObject) const;
   int  globalY(QWheelEvent* theWrappedObject) const;
   Qt::Orientation  orientation(QWheelEvent* theWrappedObject) const;
   const QPoint*  pos(QWheelEvent* theWrappedObject) const;
   int  x(QWheelEvent* theWrappedObject) const;
   int  y(QWheelEvent* theWrappedObject) const;
};





class PythonQtShell_QWidget : public QWidget
{
public:
    PythonQtShell_QWidget(QWidget*  parent = 0, Qt::WindowFlags  f = 0):QWidget(parent, f),_wrapper(NULL) {};

   ~PythonQtShell_QWidget();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enabledChange(bool  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void fontChange(const QFont&  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void paletteChange(const QPalette&  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void setVisible(bool  visible);
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void windowActivationChange(bool  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWidget : public QWidget
{ public:
inline void promoted_actionEvent(QActionEvent*  arg__1) { QWidget::actionEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { QWidget::changeEvent(arg__1); }
inline void promoted_closeEvent(QCloseEvent*  arg__1) { QWidget::closeEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { QWidget::contextMenuEvent(arg__1); }
inline int  promoted_devType() const { return QWidget::devType(); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  arg__1) { QWidget::dragEnterEvent(arg__1); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  arg__1) { QWidget::dragLeaveEvent(arg__1); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  arg__1) { QWidget::dragMoveEvent(arg__1); }
inline void promoted_dropEvent(QDropEvent*  arg__1) { QWidget::dropEvent(arg__1); }
inline void promoted_enterEvent(QEvent*  arg__1) { QWidget::enterEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QWidget::event(arg__1); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { QWidget::focusInEvent(arg__1); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QWidget::focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { QWidget::focusOutEvent(arg__1); }
inline int  promoted_heightForWidth(int  arg__1) const { return QWidget::heightForWidth(arg__1); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { QWidget::hideEvent(arg__1); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QWidget::inputMethodEvent(arg__1); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  arg__1) const { return QWidget::inputMethodQuery(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QWidget::keyPressEvent(arg__1); }
inline void promoted_keyReleaseEvent(QKeyEvent*  arg__1) { QWidget::keyReleaseEvent(arg__1); }
inline void promoted_languageChange() { QWidget::languageChange(); }
inline void promoted_leaveEvent(QEvent*  arg__1) { QWidget::leaveEvent(arg__1); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  arg__1) const { return QWidget::metric(arg__1); }
inline QSize  promoted_minimumSizeHint() const { return QWidget::minimumSizeHint(); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  arg__1) { QWidget::mouseDoubleClickEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QWidget::mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QWidget::mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QWidget::mouseReleaseEvent(arg__1); }
inline void promoted_moveEvent(QMoveEvent*  arg__1) { QWidget::moveEvent(arg__1); }
inline QPaintEngine*  promoted_paintEngine() const { return QWidget::paintEngine(); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QWidget::paintEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QWidget::resizeEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { QWidget::showEvent(arg__1); }
inline QSize  promoted_sizeHint() const { return QWidget::sizeHint(); }
inline void promoted_tabletEvent(QTabletEvent*  arg__1) { QWidget::tabletEvent(arg__1); }
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { QWidget::wheelEvent(arg__1); }
};

class PythonQtWrapper_QWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RenderFlag )
Q_FLAGS(RenderFlags )
enum RenderFlag{
  DrawWindowBackground = QWidget::DrawWindowBackground,   DrawChildren = QWidget::DrawChildren,   IgnoreMask = QWidget::IgnoreMask};
Q_DECLARE_FLAGS(RenderFlags, RenderFlag)
public slots:
QWidget* new_QWidget(QWidget*  parent = 0, Qt::WindowFlags  f = 0);
void delete_QWidget(QWidget* obj) { delete obj; } 
   bool  acceptDrops(QWidget* theWrappedObject) const;
   QString  accessibleDescription(QWidget* theWrappedObject) const;
   QString  accessibleName(QWidget* theWrappedObject) const;
   void actionEvent(QWidget* theWrappedObject, QActionEvent*  arg__1);
   QList<QAction* >  actions(QWidget* theWrappedObject) const;
   void activateWindow(QWidget* theWrappedObject);
   void addAction(QWidget* theWrappedObject, QAction*  action);
   void addActions(QWidget* theWrappedObject, QList<QAction* >  actions);
   void adjustSize(QWidget* theWrappedObject);
   bool  autoFillBackground(QWidget* theWrappedObject) const;
   QPalette::ColorRole  backgroundRole(QWidget* theWrappedObject) const;
   QSize  baseSize(QWidget* theWrappedObject) const;
   void changeEvent(QWidget* theWrappedObject, QEvent*  arg__1);
   QWidget*  childAt(QWidget* theWrappedObject, const QPoint&  p) const;
   QWidget*  childAt(QWidget* theWrappedObject, int  x, int  y) const;
   QRect  childrenRect(QWidget* theWrappedObject) const;
   QRegion  childrenRegion(QWidget* theWrappedObject) const;
   void clearFocus(QWidget* theWrappedObject);
   void clearMask(QWidget* theWrappedObject);
   void closeEvent(QWidget* theWrappedObject, QCloseEvent*  arg__1);
   QMargins  contentsMargins(QWidget* theWrappedObject) const;
   QRect  contentsRect(QWidget* theWrappedObject) const;
   void contextMenuEvent(QWidget* theWrappedObject, QContextMenuEvent*  arg__1);
   Qt::ContextMenuPolicy  contextMenuPolicy(QWidget* theWrappedObject) const;
   void createWinId(QWidget* theWrappedObject);
   QCursor  cursor(QWidget* theWrappedObject) const;
   int  devType(QWidget* theWrappedObject) const;
   void dragEnterEvent(QWidget* theWrappedObject, QDragEnterEvent*  arg__1);
   void dragLeaveEvent(QWidget* theWrappedObject, QDragLeaveEvent*  arg__1);
   void dragMoveEvent(QWidget* theWrappedObject, QDragMoveEvent*  arg__1);
   void dropEvent(QWidget* theWrappedObject, QDropEvent*  arg__1);
   WId  effectiveWinId(QWidget* theWrappedObject) const;
   void ensurePolished(QWidget* theWrappedObject) const;
   void enterEvent(QWidget* theWrappedObject, QEvent*  arg__1);
   bool  event(QWidget* theWrappedObject, QEvent*  arg__1);
   void focusInEvent(QWidget* theWrappedObject, QFocusEvent*  arg__1);
   bool  focusNextPrevChild(QWidget* theWrappedObject, bool  next);
   void focusOutEvent(QWidget* theWrappedObject, QFocusEvent*  arg__1);
   Qt::FocusPolicy  focusPolicy(QWidget* theWrappedObject) const;
   QWidget*  focusProxy(QWidget* theWrappedObject) const;
   QWidget*  focusWidget(QWidget* theWrappedObject) const;
   const QFont*  font(QWidget* theWrappedObject) const;
   QPalette::ColorRole  foregroundRole(QWidget* theWrappedObject) const;
   QRect  frameGeometry(QWidget* theWrappedObject) const;
   QSize  frameSize(QWidget* theWrappedObject) const;
   const QRect*  geometry(QWidget* theWrappedObject) const;
   void getContentsMargins(QWidget* theWrappedObject, int*  left, int*  top, int*  right, int*  bottom) const;
   void grabGesture(QWidget* theWrappedObject, Qt::GestureType  type, Qt::GestureFlags  flags = Qt::GestureFlags());
   void grabKeyboard(QWidget* theWrappedObject);
   void grabMouse(QWidget* theWrappedObject);
   void grabMouse(QWidget* theWrappedObject, const QCursor&  arg__1);
   int  grabShortcut(QWidget* theWrappedObject, const QKeySequence&  key, Qt::ShortcutContext  context = Qt::WindowShortcut);
   QGraphicsEffect*  graphicsEffect(QWidget* theWrappedObject) const;
   QGraphicsProxyWidget*  graphicsProxyWidget(QWidget* theWrappedObject) const;
   bool  hasFocus(QWidget* theWrappedObject) const;
   bool  hasMouseTracking(QWidget* theWrappedObject) const;
   int  height(QWidget* theWrappedObject) const;
   int  heightForWidth(QWidget* theWrappedObject, int  arg__1) const;
   void hideEvent(QWidget* theWrappedObject, QHideEvent*  arg__1);
   QInputContext*  inputContext(QWidget* theWrappedObject);
   void inputMethodEvent(QWidget* theWrappedObject, QInputMethodEvent*  arg__1);
   Qt::InputMethodHints  inputMethodHints(QWidget* theWrappedObject) const;
   QVariant  inputMethodQuery(QWidget* theWrappedObject, Qt::InputMethodQuery  arg__1) const;
   void insertAction(QWidget* theWrappedObject, QAction*  before, QAction*  action);
   void insertActions(QWidget* theWrappedObject, QAction*  before, QList<QAction* >  actions);
   bool  isActiveWindow(QWidget* theWrappedObject) const;
   bool  isAncestorOf(QWidget* theWrappedObject, const QWidget*  child) const;
   bool  isEnabled(QWidget* theWrappedObject) const;
   bool  isEnabledTo(QWidget* theWrappedObject, QWidget*  arg__1) const;
   bool  isFullScreen(QWidget* theWrappedObject) const;
   bool  isHidden(QWidget* theWrappedObject) const;
   bool  isLeftToRight(QWidget* theWrappedObject) const;
   bool  isMaximized(QWidget* theWrappedObject) const;
   bool  isMinimized(QWidget* theWrappedObject) const;
   bool  isModal(QWidget* theWrappedObject) const;
   bool  isRightToLeft(QWidget* theWrappedObject) const;
   bool  isVisible(QWidget* theWrappedObject) const;
   bool  isVisibleTo(QWidget* theWrappedObject, QWidget*  arg__1) const;
   bool  isWindow(QWidget* theWrappedObject) const;
   bool  isWindowModified(QWidget* theWrappedObject) const;
   void keyPressEvent(QWidget* theWrappedObject, QKeyEvent*  arg__1);
   void keyReleaseEvent(QWidget* theWrappedObject, QKeyEvent*  arg__1);
   QWidget*  static_QWidget_keyboardGrabber();
   void languageChange(QWidget* theWrappedObject);
   QLayout*  layout(QWidget* theWrappedObject) const;
   Qt::LayoutDirection  layoutDirection(QWidget* theWrappedObject) const;
   void leaveEvent(QWidget* theWrappedObject, QEvent*  arg__1);
   QLocale  locale(QWidget* theWrappedObject) const;
   QPoint  mapFrom(QWidget* theWrappedObject, QWidget*  arg__1, const QPoint&  arg__2) const;
   QPoint  mapFromGlobal(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   QPoint  mapFromParent(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   QPoint  mapTo(QWidget* theWrappedObject, QWidget*  arg__1, const QPoint&  arg__2) const;
   QPoint  mapToGlobal(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   QPoint  mapToParent(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   QRegion  mask(QWidget* theWrappedObject) const;
   int  maximumHeight(QWidget* theWrappedObject) const;
   QSize  maximumSize(QWidget* theWrappedObject) const;
   int  maximumWidth(QWidget* theWrappedObject) const;
   int  metric(QWidget* theWrappedObject, QPaintDevice::PaintDeviceMetric  arg__1) const;
   int  minimumHeight(QWidget* theWrappedObject) const;
   QSize  minimumSize(QWidget* theWrappedObject) const;
   QSize  minimumSizeHint(QWidget* theWrappedObject) const;
   int  minimumWidth(QWidget* theWrappedObject) const;
   void mouseDoubleClickEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   QWidget*  static_QWidget_mouseGrabber();
   void mouseMoveEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   void mousePressEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   void mouseReleaseEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   void move(QWidget* theWrappedObject, const QPoint&  arg__1);
   void move(QWidget* theWrappedObject, int  x, int  y);
   void moveEvent(QWidget* theWrappedObject, QMoveEvent*  arg__1);
   QWidget*  nativeParentWidget(QWidget* theWrappedObject) const;
   QWidget*  nextInFocusChain(QWidget* theWrappedObject) const;
   QRect  normalGeometry(QWidget* theWrappedObject) const;
   void overrideWindowFlags(QWidget* theWrappedObject, Qt::WindowFlags  type);
   void overrideWindowState(QWidget* theWrappedObject, Qt::WindowStates  state);
   QPaintEngine*  paintEngine(QWidget* theWrappedObject) const;
   void paintEvent(QWidget* theWrappedObject, QPaintEvent*  arg__1);
   const QPalette*  palette(QWidget* theWrappedObject) const;
   QWidget*  parentWidget(QWidget* theWrappedObject) const;
   QPoint  pos(QWidget* theWrappedObject) const;
   QWidget*  previousInFocusChain(QWidget* theWrappedObject) const;
   QRect  rect(QWidget* theWrappedObject) const;
   void releaseKeyboard(QWidget* theWrappedObject);
   void releaseMouse(QWidget* theWrappedObject);
   void releaseShortcut(QWidget* theWrappedObject, int  id);
   void removeAction(QWidget* theWrappedObject, QAction*  action);
   void render(QWidget* theWrappedObject, QPaintDevice*  target, const QPoint&  targetOffset = QPoint(), const QRegion&  sourceRegion = QRegion(), QWidget::RenderFlags  renderFlags = QWidget::RenderFlags(DrawWindowBackground | DrawChildren));
   void render(QWidget* theWrappedObject, QPainter*  painter, const QPoint&  targetOffset = QPoint(), const QRegion&  sourceRegion = QRegion(), QWidget::RenderFlags  renderFlags = QWidget::RenderFlags(DrawWindowBackground | DrawChildren));
   void repaint(QWidget* theWrappedObject, const QRect&  arg__1);
   void repaint(QWidget* theWrappedObject, const QRegion&  arg__1);
   void repaint(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   void resize(QWidget* theWrappedObject, const QSize&  arg__1);
   void resize(QWidget* theWrappedObject, int  w, int  h);
   void resizeEvent(QWidget* theWrappedObject, QResizeEvent*  arg__1);
   bool  restoreGeometry(QWidget* theWrappedObject, const QByteArray&  geometry);
   QByteArray  saveGeometry(QWidget* theWrappedObject) const;
   void scroll(QWidget* theWrappedObject, int  dx, int  dy);
   void scroll(QWidget* theWrappedObject, int  dx, int  dy, const QRect&  arg__3);
   void setAcceptDrops(QWidget* theWrappedObject, bool  on);
   void setAccessibleDescription(QWidget* theWrappedObject, const QString&  description);
   void setAccessibleName(QWidget* theWrappedObject, const QString&  name);
   void setAttribute(QWidget* theWrappedObject, Qt::WidgetAttribute  arg__1, bool  on = true);
   void setAutoFillBackground(QWidget* theWrappedObject, bool  enabled);
   void setBackgroundRole(QWidget* theWrappedObject, QPalette::ColorRole  arg__1);
   void setBaseSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void setBaseSize(QWidget* theWrappedObject, int  basew, int  baseh);
   void setContentsMargins(QWidget* theWrappedObject, const QMargins&  margins);
   void setContentsMargins(QWidget* theWrappedObject, int  left, int  top, int  right, int  bottom);
   void setContextMenuPolicy(QWidget* theWrappedObject, Qt::ContextMenuPolicy  policy);
   void setCursor(QWidget* theWrappedObject, const QCursor&  arg__1);
   void setFixedHeight(QWidget* theWrappedObject, int  h);
   void setFixedSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void setFixedSize(QWidget* theWrappedObject, int  w, int  h);
   void setFixedWidth(QWidget* theWrappedObject, int  w);
   void setFocus(QWidget* theWrappedObject, Qt::FocusReason  reason);
   void setFocusPolicy(QWidget* theWrappedObject, Qt::FocusPolicy  policy);
   void setFocusProxy(QWidget* theWrappedObject, QWidget*  arg__1);
   void setFont(QWidget* theWrappedObject, const QFont&  arg__1);
   void setForegroundRole(QWidget* theWrappedObject, QPalette::ColorRole  arg__1);
   void setGeometry(QWidget* theWrappedObject, const QRect&  arg__1);
   void setGeometry(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   void setGraphicsEffect(QWidget* theWrappedObject, QGraphicsEffect*  effect);
   void setInputContext(QWidget* theWrappedObject, QInputContext*  arg__1);
   void setInputMethodHints(QWidget* theWrappedObject, Qt::InputMethodHints  hints);
   void setLayout(QWidget* theWrappedObject, QLayout*  arg__1);
   void setLayoutDirection(QWidget* theWrappedObject, Qt::LayoutDirection  direction);
   void setLocale(QWidget* theWrappedObject, const QLocale&  locale);
   void setMask(QWidget* theWrappedObject, const QBitmap&  arg__1);
   void setMask(QWidget* theWrappedObject, const QRegion&  arg__1);
   void setMaximumHeight(QWidget* theWrappedObject, int  maxh);
   void setMaximumSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void setMaximumSize(QWidget* theWrappedObject, int  maxw, int  maxh);
   void setMaximumWidth(QWidget* theWrappedObject, int  maxw);
   void setMinimumHeight(QWidget* theWrappedObject, int  minh);
   void setMinimumSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void setMinimumSize(QWidget* theWrappedObject, int  minw, int  minh);
   void setMinimumWidth(QWidget* theWrappedObject, int  minw);
   void setMouseTracking(QWidget* theWrappedObject, bool  enable);
   void setPalette(QWidget* theWrappedObject, const QPalette&  arg__1);
   void setParent(QWidget* theWrappedObject, QWidget*  parent);
   void setParent(QWidget* theWrappedObject, QWidget*  parent, Qt::WindowFlags  f);
   void setShortcutAutoRepeat(QWidget* theWrappedObject, int  id, bool  enable = true);
   void setShortcutEnabled(QWidget* theWrappedObject, int  id, bool  enable = true);
   void setSizeIncrement(QWidget* theWrappedObject, const QSize&  arg__1);
   void setSizeIncrement(QWidget* theWrappedObject, int  w, int  h);
   void setSizePolicy(QWidget* theWrappedObject, QSizePolicy  arg__1);
   void setSizePolicy(QWidget* theWrappedObject, QSizePolicy::Policy  horizontal, QSizePolicy::Policy  vertical);
   void setStatusTip(QWidget* theWrappedObject, const QString&  arg__1);
   void setStyle(QWidget* theWrappedObject, QStyle*  arg__1);
   void static_QWidget_setTabOrder(QWidget*  arg__1, QWidget*  arg__2);
   void setToolTip(QWidget* theWrappedObject, const QString&  arg__1);
   void setUpdatesEnabled(QWidget* theWrappedObject, bool  enable);
   void setWhatsThis(QWidget* theWrappedObject, const QString&  arg__1);
   void setWindowFilePath(QWidget* theWrappedObject, const QString&  filePath);
   void setWindowFlags(QWidget* theWrappedObject, Qt::WindowFlags  type);
   void setWindowIcon(QWidget* theWrappedObject, const QIcon&  icon);
   void setWindowIconText(QWidget* theWrappedObject, const QString&  arg__1);
   void setWindowModality(QWidget* theWrappedObject, Qt::WindowModality  windowModality);
   void setWindowOpacity(QWidget* theWrappedObject, qreal  level);
   void setWindowRole(QWidget* theWrappedObject, const QString&  arg__1);
   void setWindowState(QWidget* theWrappedObject, Qt::WindowStates  state);
   void showEvent(QWidget* theWrappedObject, QShowEvent*  arg__1);
   QSize  size(QWidget* theWrappedObject) const;
   QSize  sizeHint(QWidget* theWrappedObject) const;
   QSize  sizeIncrement(QWidget* theWrappedObject) const;
   QSizePolicy  sizePolicy(QWidget* theWrappedObject) const;
   void stackUnder(QWidget* theWrappedObject, QWidget*  arg__1);
   QString  statusTip(QWidget* theWrappedObject) const;
   QStyle*  style(QWidget* theWrappedObject) const;
   QString  styleSheet(QWidget* theWrappedObject) const;
   void tabletEvent(QWidget* theWrappedObject, QTabletEvent*  arg__1);
   bool  testAttribute(QWidget* theWrappedObject, Qt::WidgetAttribute  arg__1) const;
   QString  toolTip(QWidget* theWrappedObject) const;
   bool  underMouse(QWidget* theWrappedObject) const;
   void ungrabGesture(QWidget* theWrappedObject, Qt::GestureType  type);
   void unsetCursor(QWidget* theWrappedObject);
   void unsetLayoutDirection(QWidget* theWrappedObject);
   void unsetLocale(QWidget* theWrappedObject);
   void update(QWidget* theWrappedObject, const QRect&  arg__1);
   void update(QWidget* theWrappedObject, const QRegion&  arg__1);
   void update(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   void updateGeometry(QWidget* theWrappedObject);
   bool  updatesEnabled(QWidget* theWrappedObject) const;
   QRegion  visibleRegion(QWidget* theWrappedObject) const;
   QString  whatsThis(QWidget* theWrappedObject) const;
   void wheelEvent(QWidget* theWrappedObject, QWheelEvent*  arg__1);
   int  width(QWidget* theWrappedObject) const;
   WId  winId(QWidget* theWrappedObject) const;
   QWidget*  window(QWidget* theWrappedObject) const;
   QString  windowFilePath(QWidget* theWrappedObject) const;
   Qt::WindowFlags  windowFlags(QWidget* theWrappedObject) const;
   QIcon  windowIcon(QWidget* theWrappedObject) const;
   QString  windowIconText(QWidget* theWrappedObject) const;
   Qt::WindowModality  windowModality(QWidget* theWrappedObject) const;
   qreal  windowOpacity(QWidget* theWrappedObject) const;
   QString  windowRole(QWidget* theWrappedObject) const;
   Qt::WindowStates  windowState(QWidget* theWrappedObject) const;
   QString  windowTitle(QWidget* theWrappedObject) const;
   Qt::WindowType  windowType(QWidget* theWrappedObject) const;
   int  x(QWidget* theWrappedObject) const;
   int  y(QWidget* theWrappedObject) const;
};





class PythonQtShell_QWidgetAction : public QWidgetAction
{
public:
    PythonQtShell_QWidgetAction(QObject*  parent):QWidgetAction(parent),_wrapper(NULL) {};

   ~PythonQtShell_QWidgetAction();

virtual void childEvent(QChildEvent*  arg__1);
virtual QWidget*  createWidget(QWidget*  parent);
virtual void customEvent(QEvent*  arg__1);
virtual void deleteWidget(QWidget*  widget);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWidgetAction : public QWidgetAction
{ public:
inline QWidget*  promoted_createWidget(QWidget*  parent) { return QWidgetAction::createWidget(parent); }
inline void promoted_deleteWidget(QWidget*  widget) { QWidgetAction::deleteWidget(widget); }
inline bool  promoted_event(QEvent*  arg__1) { return QWidgetAction::event(arg__1); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QWidgetAction::eventFilter(arg__1, arg__2); }
};

class PythonQtWrapper_QWidgetAction : public QObject
{ Q_OBJECT
public:
public slots:
QWidgetAction* new_QWidgetAction(QObject*  parent);
void delete_QWidgetAction(QWidgetAction* obj) { delete obj; } 
   QWidget*  createWidget(QWidgetAction* theWrappedObject, QWidget*  parent);
   QWidget*  defaultWidget(QWidgetAction* theWrappedObject) const;
   void deleteWidget(QWidgetAction* theWrappedObject, QWidget*  widget);
   bool  event(QWidgetAction* theWrappedObject, QEvent*  arg__1);
   bool  eventFilter(QWidgetAction* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   void releaseWidget(QWidgetAction* theWrappedObject, QWidget*  widget);
   QWidget*  requestWidget(QWidgetAction* theWrappedObject, QWidget*  parent);
   void setDefaultWidget(QWidgetAction* theWrappedObject, QWidget*  w);
};





class PythonQtShell_QWidgetItem : public QWidgetItem
{
public:
    PythonQtShell_QWidgetItem(QWidget*  w):QWidgetItem(w),_wrapper(NULL) {};

   ~PythonQtShell_QWidgetItem();

virtual Qt::Orientations  expandingDirections() const;
virtual QRect  geometry() const;
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void invalidate();
virtual bool  isEmpty() const;
virtual QLayout*  layout();
virtual QSize  maximumSize() const;
virtual int  minimumHeightForWidth(int  arg__1) const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QSize  sizeHint() const;
virtual QSpacerItem*  spacerItem();
virtual QWidget*  widget();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWidgetItem : public QWidgetItem
{ public:
inline Qt::Orientations  promoted_expandingDirections() const { return QWidgetItem::expandingDirections(); }
inline QRect  promoted_geometry() const { return QWidgetItem::geometry(); }
inline bool  promoted_hasHeightForWidth() const { return QWidgetItem::hasHeightForWidth(); }
inline int  promoted_heightForWidth(int  arg__1) const { return QWidgetItem::heightForWidth(arg__1); }
inline bool  promoted_isEmpty() const { return QWidgetItem::isEmpty(); }
inline QSize  promoted_maximumSize() const { return QWidgetItem::maximumSize(); }
inline QSize  promoted_minimumSize() const { return QWidgetItem::minimumSize(); }
inline void promoted_setGeometry(const QRect&  arg__1) { QWidgetItem::setGeometry(arg__1); }
inline QSize  promoted_sizeHint() const { return QWidgetItem::sizeHint(); }
inline QWidget*  promoted_widget() { return QWidgetItem::widget(); }
};

class PythonQtWrapper_QWidgetItem : public QObject
{ Q_OBJECT
public:
public slots:
QWidgetItem* new_QWidgetItem(QWidget*  w);
void delete_QWidgetItem(QWidgetItem* obj) { delete obj; } 
   Qt::Orientations  expandingDirections(QWidgetItem* theWrappedObject) const;
   QRect  geometry(QWidgetItem* theWrappedObject) const;
   bool  hasHeightForWidth(QWidgetItem* theWrappedObject) const;
   int  heightForWidth(QWidgetItem* theWrappedObject, int  arg__1) const;
   bool  isEmpty(QWidgetItem* theWrappedObject) const;
   QSize  maximumSize(QWidgetItem* theWrappedObject) const;
   QSize  minimumSize(QWidgetItem* theWrappedObject) const;
   void setGeometry(QWidgetItem* theWrappedObject, const QRect&  arg__1);
   QSize  sizeHint(QWidgetItem* theWrappedObject) const;
   QWidget*  widget(QWidgetItem* theWrappedObject);
};





class PythonQtWrapper_QWindowStateChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QWindowStateChangeEvent* new_QWindowStateChangeEvent(Qt::WindowStates  aOldState);
QWindowStateChangeEvent* new_QWindowStateChangeEvent(Qt::WindowStates  aOldState, bool  isOverride);
void delete_QWindowStateChangeEvent(QWindowStateChangeEvent* obj) { delete obj; } 
   bool  isOverride(QWindowStateChangeEvent* theWrappedObject) const;
   Qt::WindowStates  oldState(QWindowStateChangeEvent* theWrappedObject) const;
};





class PythonQtShell_QWindowsStyle : public QWindowsStyle
{
public:
    PythonQtShell_QWindowsStyle():QWindowsStyle(),_wrapper(NULL) {};

   ~PythonQtShell_QWindowsStyle();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual void drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual void drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const;
virtual void drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole) const;
virtual void drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  o, QEvent*  e);
virtual QPixmap  generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const;
virtual QStyle::SubControl  hitTestComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w) const;
virtual QRect  itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const;
virtual int  pixelMetric(QStyle::PixelMetric  pm, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
virtual void polish(QApplication*  arg__1);
virtual void polish(QPalette&  arg__1);
virtual void polish(QWidget*  arg__1);
virtual QSize  sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const;
virtual QPalette  standardPalette() const;
virtual QPixmap  standardPixmap(QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget) const;
virtual int  styleHint(QStyle::StyleHint  hint, const QStyleOption*  opt = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const;
virtual QRect  subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  w) const;
virtual QRect  subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const;
virtual void timerEvent(QTimerEvent*  event);
virtual void unpolish(QApplication*  arg__1);
virtual void unpolish(QWidget*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWindowsStyle : public QWindowsStyle
{ public:
inline void promoted_drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const { QWindowsStyle::drawComplexControl(cc, opt, p, w); }
inline void promoted_drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const { QWindowsStyle::drawControl(element, opt, p, w); }
inline void promoted_drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const { QWindowsStyle::drawPrimitive(pe, opt, p, w); }
inline bool  promoted_eventFilter(QObject*  o, QEvent*  e) { return QWindowsStyle::eventFilter(o, e); }
inline int  promoted_pixelMetric(QStyle::PixelMetric  pm, const QStyleOption*  option = 0, const QWidget*  widget = 0) const { return QWindowsStyle::pixelMetric(pm, option, widget); }
inline void promoted_polish(QApplication*  arg__1) { QWindowsStyle::polish(arg__1); }
inline void promoted_polish(QPalette&  arg__1) { QWindowsStyle::polish(arg__1); }
inline void promoted_polish(QWidget*  arg__1) { QWindowsStyle::polish(arg__1); }
inline QSize  promoted_sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const { return QWindowsStyle::sizeFromContents(ct, opt, contentsSize, widget); }
inline int  promoted_styleHint(QStyle::StyleHint  hint, const QStyleOption*  opt = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const { return QWindowsStyle::styleHint(hint, opt, widget, returnData); }
inline QRect  promoted_subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const { return QWindowsStyle::subElementRect(r, opt, widget); }
inline void promoted_timerEvent(QTimerEvent*  event) { QWindowsStyle::timerEvent(event); }
inline void promoted_unpolish(QApplication*  arg__1) { QWindowsStyle::unpolish(arg__1); }
inline void promoted_unpolish(QWidget*  arg__1) { QWindowsStyle::unpolish(arg__1); }
};

class PythonQtWrapper_QWindowsStyle : public QObject
{ Q_OBJECT
public:
public slots:
QWindowsStyle* new_QWindowsStyle();
void delete_QWindowsStyle(QWindowsStyle* obj) { delete obj; } 
   void drawComplexControl(QWindowsStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const;
   void drawControl(QWindowsStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
   void drawPrimitive(QWindowsStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
   bool  eventFilter(QWindowsStyle* theWrappedObject, QObject*  o, QEvent*  e);
   int  pixelMetric(QWindowsStyle* theWrappedObject, QStyle::PixelMetric  pm, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
   void polish(QWindowsStyle* theWrappedObject, QApplication*  arg__1);
   void polish(QWindowsStyle* theWrappedObject, QPalette&  arg__1);
   void polish(QWindowsStyle* theWrappedObject, QWidget*  arg__1);
   QSize  sizeFromContents(QWindowsStyle* theWrappedObject, QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const;
   int  styleHint(QWindowsStyle* theWrappedObject, QStyle::StyleHint  hint, const QStyleOption*  opt = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const;
   QRect  subElementRect(QWindowsStyle* theWrappedObject, QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const;
   void timerEvent(QWindowsStyle* theWrappedObject, QTimerEvent*  event);
   void unpolish(QWindowsStyle* theWrappedObject, QApplication*  arg__1);
   void unpolish(QWindowsStyle* theWrappedObject, QWidget*  arg__1);
};





class PythonQtShell_QWizard : public QWizard
{
public:
    PythonQtShell_QWizard(QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QWizard(parent, flags),_wrapper(NULL) {};

   ~PythonQtShell_QWizard();

virtual void accept();
virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void cleanupPage(int  id);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void done(int  result);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initializePage(int  id);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual int  nextId() const;
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual void reject();
virtual void resizeEvent(QResizeEvent*  event);
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  validateCurrentPage();
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWizard : public QWizard
{ public:
inline void promoted_cleanupPage(int  id) { QWizard::cleanupPage(id); }
inline void promoted_done(int  result) { QWizard::done(result); }
inline bool  promoted_event(QEvent*  event) { return QWizard::event(event); }
inline void promoted_initializePage(int  id) { QWizard::initializePage(id); }
inline int  promoted_nextId() const { return QWizard::nextId(); }
inline void promoted_paintEvent(QPaintEvent*  event) { QWizard::paintEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QWizard::resizeEvent(event); }
inline bool  promoted_validateCurrentPage() { return QWizard::validateCurrentPage(); }
};

class PythonQtWrapper_QWizard : public QObject
{ Q_OBJECT
public:
Q_ENUMS(WizardButton WizardPixmap )
enum WizardButton{
  BackButton = QWizard::BackButton,   NextButton = QWizard::NextButton,   CommitButton = QWizard::CommitButton,   FinishButton = QWizard::FinishButton,   CancelButton = QWizard::CancelButton,   HelpButton = QWizard::HelpButton,   CustomButton1 = QWizard::CustomButton1,   CustomButton2 = QWizard::CustomButton2,   CustomButton3 = QWizard::CustomButton3,   Stretch = QWizard::Stretch,   NoButton = QWizard::NoButton,   NStandardButtons = QWizard::NStandardButtons,   NButtons = QWizard::NButtons};
enum WizardPixmap{
  WatermarkPixmap = QWizard::WatermarkPixmap,   LogoPixmap = QWizard::LogoPixmap,   BannerPixmap = QWizard::BannerPixmap,   BackgroundPixmap = QWizard::BackgroundPixmap,   NPixmaps = QWizard::NPixmaps};
public slots:
QWizard* new_QWizard(QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
void delete_QWizard(QWizard* obj) { delete obj; } 
   int  addPage(QWizard* theWrappedObject, QWizardPage*  page);
   QAbstractButton*  button(QWizard* theWrappedObject, QWizard::WizardButton  which) const;
   QString  buttonText(QWizard* theWrappedObject, QWizard::WizardButton  which) const;
   void cleanupPage(QWizard* theWrappedObject, int  id);
   int  currentId(QWizard* theWrappedObject) const;
   QWizardPage*  currentPage(QWizard* theWrappedObject) const;
   void done(QWizard* theWrappedObject, int  result);
   bool  event(QWizard* theWrappedObject, QEvent*  event);
   QVariant  field(QWizard* theWrappedObject, const QString&  name) const;
   bool  hasVisitedPage(QWizard* theWrappedObject, int  id) const;
   void initializePage(QWizard* theWrappedObject, int  id);
   int  nextId(QWizard* theWrappedObject) const;
   QWizard::WizardOptions  options(QWizard* theWrappedObject) const;
   QWizardPage*  page(QWizard* theWrappedObject, int  id) const;
   QList<int >  pageIds(QWizard* theWrappedObject) const;
   void paintEvent(QWizard* theWrappedObject, QPaintEvent*  event);
   QPixmap  pixmap(QWizard* theWrappedObject, QWizard::WizardPixmap  which) const;
   void removePage(QWizard* theWrappedObject, int  id);
   void resizeEvent(QWizard* theWrappedObject, QResizeEvent*  event);
   void setButton(QWizard* theWrappedObject, QWizard::WizardButton  which, QAbstractButton*  button);
   void setButtonLayout(QWizard* theWrappedObject, const QList<QWizard::WizardButton >&  layout);
   void setButtonText(QWizard* theWrappedObject, QWizard::WizardButton  which, const QString&  text);
   void setField(QWizard* theWrappedObject, const QString&  name, const QVariant&  value);
   void setOption(QWizard* theWrappedObject, QWizard::WizardOption  option, bool  on = true);
   void setOptions(QWizard* theWrappedObject, QWizard::WizardOptions  options);
   void setPage(QWizard* theWrappedObject, int  id, QWizardPage*  page);
   void setPixmap(QWizard* theWrappedObject, QWizard::WizardPixmap  which, const QPixmap&  pixmap);
   void setSideWidget(QWizard* theWrappedObject, QWidget*  widget);
   void setStartId(QWizard* theWrappedObject, int  id);
   void setSubTitleFormat(QWizard* theWrappedObject, Qt::TextFormat  format);
   void setTitleFormat(QWizard* theWrappedObject, Qt::TextFormat  format);
   void setVisible(QWizard* theWrappedObject, bool  visible);
   void setWizardStyle(QWizard* theWrappedObject, QWizard::WizardStyle  style);
   QWidget*  sideWidget(QWizard* theWrappedObject) const;
   QSize  sizeHint(QWizard* theWrappedObject) const;
   int  startId(QWizard* theWrappedObject) const;
   Qt::TextFormat  subTitleFormat(QWizard* theWrappedObject) const;
   bool  testOption(QWizard* theWrappedObject, QWizard::WizardOption  option) const;
   Qt::TextFormat  titleFormat(QWizard* theWrappedObject) const;
   bool  validateCurrentPage(QWizard* theWrappedObject);
   QList<int >  visitedPages(QWizard* theWrappedObject) const;
   QWizard::WizardStyle  wizardStyle(QWizard* theWrappedObject) const;
};





class PythonQtShell_QWizardPage : public QWizardPage
{
public:
    PythonQtShell_QWizardPage(QWidget*  parent = 0):QWizardPage(parent),_wrapper(NULL) {};

   ~PythonQtShell_QWizardPage();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void cleanupPage();
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initializePage();
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  isComplete() const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual int  nextId() const;
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  validatePage();
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWizardPage : public QWizardPage
{ public:
inline void promoted_cleanupPage() { QWizardPage::cleanupPage(); }
inline void promoted_initializePage() { QWizardPage::initializePage(); }
inline bool  promoted_isComplete() const { return QWizardPage::isComplete(); }
inline int  promoted_nextId() const { return QWizardPage::nextId(); }
inline bool  promoted_validatePage() { return QWizardPage::validatePage(); }
};

class PythonQtWrapper_QWizardPage : public QObject
{ Q_OBJECT
public:
public slots:
QWizardPage* new_QWizardPage(QWidget*  parent = 0);
void delete_QWizardPage(QWizardPage* obj) { delete obj; } 
   QString  buttonText(QWizardPage* theWrappedObject, QWizard::WizardButton  which) const;
   void cleanupPage(QWizardPage* theWrappedObject);
   void initializePage(QWizardPage* theWrappedObject);
   bool  isCommitPage(QWizardPage* theWrappedObject) const;
   bool  isComplete(QWizardPage* theWrappedObject) const;
   bool  isFinalPage(QWizardPage* theWrappedObject) const;
   int  nextId(QWizardPage* theWrappedObject) const;
   QPixmap  pixmap(QWizardPage* theWrappedObject, QWizard::WizardPixmap  which) const;
   void setButtonText(QWizardPage* theWrappedObject, QWizard::WizardButton  which, const QString&  text);
   void setCommitPage(QWizardPage* theWrappedObject, bool  commitPage);
   void setFinalPage(QWizardPage* theWrappedObject, bool  finalPage);
   void setPixmap(QWizardPage* theWrappedObject, QWizard::WizardPixmap  which, const QPixmap&  pixmap);
   void setSubTitle(QWizardPage* theWrappedObject, const QString&  subTitle);
   void setTitle(QWizardPage* theWrappedObject, const QString&  title);
   QString  subTitle(QWizardPage* theWrappedObject) const;
   QString  title(QWizardPage* theWrappedObject) const;
   bool  validatePage(QWizardPage* theWrappedObject);
};





class PythonQtShell_QWorkspace : public QWorkspace
{
public:
    PythonQtShell_QWorkspace(QWidget*  parent = 0):QWorkspace(parent),_wrapper(NULL) {};

   ~PythonQtShell_QWorkspace();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  e);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  e);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWorkspace : public QWorkspace
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { QWorkspace::changeEvent(arg__1); }
inline void promoted_childEvent(QChildEvent*  arg__1) { QWorkspace::childEvent(arg__1); }
inline bool  promoted_event(QEvent*  e) { return QWorkspace::event(e); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QWorkspace::eventFilter(arg__1, arg__2); }
inline void promoted_hideEvent(QHideEvent*  e) { QWorkspace::hideEvent(e); }
inline void promoted_paintEvent(QPaintEvent*  e) { QWorkspace::paintEvent(e); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QWorkspace::resizeEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  e) { QWorkspace::showEvent(e); }
inline void promoted_wheelEvent(QWheelEvent*  e) { QWorkspace::wheelEvent(e); }
};

class PythonQtWrapper_QWorkspace : public QObject
{ Q_OBJECT
public:
Q_ENUMS(WindowOrder )
enum WindowOrder{
  CreationOrder = QWorkspace::CreationOrder,   StackingOrder = QWorkspace::StackingOrder};
public slots:
QWorkspace* new_QWorkspace(QWidget*  parent = 0);
void delete_QWorkspace(QWorkspace* obj) { delete obj; } 
   QWidget*  activeWindow(QWorkspace* theWrappedObject) const;
   QWidget*  addWindow(QWorkspace* theWrappedObject, QWidget*  w, Qt::WindowFlags  flags = 0);
   QBrush  background(QWorkspace* theWrappedObject) const;
   void changeEvent(QWorkspace* theWrappedObject, QEvent*  arg__1);
   void childEvent(QWorkspace* theWrappedObject, QChildEvent*  arg__1);
   bool  event(QWorkspace* theWrappedObject, QEvent*  e);
   bool  eventFilter(QWorkspace* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   void hideEvent(QWorkspace* theWrappedObject, QHideEvent*  e);
   void paintEvent(QWorkspace* theWrappedObject, QPaintEvent*  e);
   void resizeEvent(QWorkspace* theWrappedObject, QResizeEvent*  arg__1);
   bool  scrollBarsEnabled(QWorkspace* theWrappedObject) const;
   void setBackground(QWorkspace* theWrappedObject, const QBrush&  background);
   void setScrollBarsEnabled(QWorkspace* theWrappedObject, bool  enable);
   void showEvent(QWorkspace* theWrappedObject, QShowEvent*  e);
   QSize  sizeHint(QWorkspace* theWrappedObject) const;
   void wheelEvent(QWorkspace* theWrappedObject, QWheelEvent*  e);
   QList<QWidget* >  windowList(QWorkspace* theWrappedObject, QWorkspace::WindowOrder  order = QWorkspace::CreationOrder) const;
};


