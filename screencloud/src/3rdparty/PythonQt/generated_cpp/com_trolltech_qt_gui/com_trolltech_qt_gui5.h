#include <PythonQt.h>
#include <QColor>
#include <QImage>
#include <QObject>
#include <QPainterPath>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QVarLengthArray>
#include <QVariant>
#include <QWidget>
#include <qabstractanimation.h>
#include <qabstractbutton.h>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractstate.h>
#include <qaction.h>
#include <qapplication.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcompleter.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qdialog.h>
#include <qdockwidget.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgesture.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qimage.h>
#include <qinputcontext.h>
#include <qiodevice.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qline.h>
#include <qlineedit.h>
#include <qlist.h>
#include <qlistview.h>
#include <qlistwidget.h>
#include <qlocale.h>
#include <qmainwindow.h>
#include <qmargins.h>
#include <qmatrix.h>
#include <qmatrix4x4.h>
#include <qmdiarea.h>
#include <qmdisubwindow.h>
#include <qmenu.h>
#include <qmenubar.h>
#include <qmessagebox.h>
#include <qmimedata.h>
#include <qmotifstyle.h>
#include <qmouseeventtransition.h>
#include <qmovie.h>
#include <qobject.h>
#include <qpagesetupdialog.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpair.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpicture.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qprinter.h>
#include <qpushbutton.h>
#include <qquaternion.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstate.h>
#include <qstatemachine.h>
#include <qstatictext.h>
#include <qstatusbar.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtextoption.h>
#include <qtoolbar.h>
#include <qtransform.h>
#include <qvalidator.h>
#include <qvector.h>
#include <qvector3d.h>
#include <qvector4d.h>
#include <qwidget.h>



class PythonQtShell_QLayout : public QLayout
{
public:
    PythonQtShell_QLayout():QLayout(),_wrapper(NULL) {};
    PythonQtShell_QLayout(QWidget*  parent):QLayout(parent),_wrapper(NULL) {};

   ~PythonQtShell_QLayout();

virtual void addItem(QLayoutItem*  arg__1);
virtual void childEvent(QChildEvent*  e);
virtual int  count() const;
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual Qt::Orientations  expandingDirections() const;
virtual QRect  geometry() const;
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual int  indexOf(QWidget*  arg__1) const;
virtual void invalidate();
virtual bool  isEmpty() const;
virtual QLayoutItem*  itemAt(int  index) const;
virtual QLayout*  layout();
virtual QSize  maximumSize() const;
virtual int  minimumHeightForWidth(int  arg__1) const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QSize  sizeHint() const;
virtual QSpacerItem*  spacerItem();
virtual QLayoutItem*  takeAt(int  index);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual QWidget*  widget();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QLayout : public QLayout
{ public:
inline void promoted_childEvent(QChildEvent*  e) { QLayout::childEvent(e); }
inline Qt::Orientations  promoted_expandingDirections() const { return QLayout::expandingDirections(); }
inline QRect  promoted_geometry() const { return QLayout::geometry(); }
inline int  promoted_indexOf(QWidget*  arg__1) const { return QLayout::indexOf(arg__1); }
inline void promoted_invalidate() { QLayout::invalidate(); }
inline bool  promoted_isEmpty() const { return QLayout::isEmpty(); }
inline QLayout*  promoted_layout() { return QLayout::layout(); }
inline QSize  promoted_maximumSize() const { return QLayout::maximumSize(); }
inline QSize  promoted_minimumSize() const { return QLayout::minimumSize(); }
inline void promoted_setGeometry(const QRect&  arg__1) { QLayout::setGeometry(arg__1); }
};

class PythonQtWrapper_QLayout : public QObject
{ Q_OBJECT
public:
public slots:
QLayout* new_QLayout();
QLayout* new_QLayout(QWidget*  parent);
void delete_QLayout(QLayout* obj) { delete obj; } 
   bool  activate(QLayout* theWrappedObject);
   void addWidget(QLayout* theWrappedObject, QWidget*  w);
   void childEvent(QLayout* theWrappedObject, QChildEvent*  e);
   QSize  static_QLayout_closestAcceptableSize(const QWidget*  w, const QSize&  s);
   QMargins  contentsMargins(QLayout* theWrappedObject) const;
   QRect  contentsRect(QLayout* theWrappedObject) const;
   Qt::Orientations  expandingDirections(QLayout* theWrappedObject) const;
   QRect  geometry(QLayout* theWrappedObject) const;
   void getContentsMargins(QLayout* theWrappedObject, int*  left, int*  top, int*  right, int*  bottom) const;
   int  indexOf(QLayout* theWrappedObject, QWidget*  arg__1) const;
   void invalidate(QLayout* theWrappedObject);
   bool  isEmpty(QLayout* theWrappedObject) const;
   bool  isEnabled(QLayout* theWrappedObject) const;
   QLayout*  layout(QLayout* theWrappedObject);
   QSize  maximumSize(QLayout* theWrappedObject) const;
   QWidget*  menuBar(QLayout* theWrappedObject) const;
   QSize  minimumSize(QLayout* theWrappedObject) const;
   QWidget*  parentWidget(QLayout* theWrappedObject) const;
   void removeItem(QLayout* theWrappedObject, QLayoutItem*  arg__1);
   void removeWidget(QLayout* theWrappedObject, QWidget*  w);
   void setAlignment(QLayout* theWrappedObject, Qt::Alignment  alignment);
   bool  setAlignment(QLayout* theWrappedObject, QLayout*  l, Qt::Alignment  alignment);
   bool  setAlignment(QLayout* theWrappedObject, QWidget*  w, Qt::Alignment  alignment);
   void setContentsMargins(QLayout* theWrappedObject, const QMargins&  margins);
   void setContentsMargins(QLayout* theWrappedObject, int  left, int  top, int  right, int  bottom);
   void setEnabled(QLayout* theWrappedObject, bool  arg__1);
   void setGeometry(QLayout* theWrappedObject, const QRect&  arg__1);
   void setMargin(QLayout* theWrappedObject, int  arg__1);
   void setMenuBar(QLayout* theWrappedObject, QWidget*  w);
   void setSizeConstraint(QLayout* theWrappedObject, QLayout::SizeConstraint  arg__1);
   void setSpacing(QLayout* theWrappedObject, int  arg__1);
   QLayout::SizeConstraint  sizeConstraint(QLayout* theWrappedObject) const;
   int  spacing(QLayout* theWrappedObject) const;
   int  totalHeightForWidth(QLayout* theWrappedObject, int  w) const;
   QSize  totalMaximumSize(QLayout* theWrappedObject) const;
   QSize  totalMinimumSize(QLayout* theWrappedObject) const;
   QSize  totalSizeHint(QLayout* theWrappedObject) const;
   void update(QLayout* theWrappedObject);
};





class PythonQtShell_QLayoutItem : public QLayoutItem
{
public:
    PythonQtShell_QLayoutItem(Qt::Alignment  alignment = 0):QLayoutItem(alignment),_wrapper(NULL) {};

   ~PythonQtShell_QLayoutItem();

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

class PythonQtPublicPromoter_QLayoutItem : public QLayoutItem
{ public:
inline bool  promoted_hasHeightForWidth() const { return QLayoutItem::hasHeightForWidth(); }
inline int  promoted_heightForWidth(int  arg__1) const { return QLayoutItem::heightForWidth(arg__1); }
inline void promoted_invalidate() { QLayoutItem::invalidate(); }
inline QLayout*  promoted_layout() { return QLayoutItem::layout(); }
inline int  promoted_minimumHeightForWidth(int  arg__1) const { return QLayoutItem::minimumHeightForWidth(arg__1); }
inline QSpacerItem*  promoted_spacerItem() { return QLayoutItem::spacerItem(); }
inline QWidget*  promoted_widget() { return QLayoutItem::widget(); }
};

class PythonQtWrapper_QLayoutItem : public QObject
{ Q_OBJECT
public:
public slots:
QLayoutItem* new_QLayoutItem(Qt::Alignment  alignment = 0);
void delete_QLayoutItem(QLayoutItem* obj) { delete obj; } 
   Qt::Alignment  alignment(QLayoutItem* theWrappedObject) const;
   QSizePolicy::ControlTypes  controlTypes(QLayoutItem* theWrappedObject) const;
   bool  hasHeightForWidth(QLayoutItem* theWrappedObject) const;
   int  heightForWidth(QLayoutItem* theWrappedObject, int  arg__1) const;
   void invalidate(QLayoutItem* theWrappedObject);
   QLayout*  layout(QLayoutItem* theWrappedObject);
   int  minimumHeightForWidth(QLayoutItem* theWrappedObject, int  arg__1) const;
   void setAlignment(QLayoutItem* theWrappedObject, Qt::Alignment  a);
   QSpacerItem*  spacerItem(QLayoutItem* theWrappedObject);
   QWidget*  widget(QLayoutItem* theWrappedObject);
};





class PythonQtShell_QLineEdit : public QLineEdit
{
public:
    PythonQtShell_QLineEdit(QWidget*  parent = 0):QLineEdit(parent),_wrapper(NULL) {};
    PythonQtShell_QLineEdit(const QString&  arg__1, QWidget*  parent = 0):QLineEdit(arg__1, parent),_wrapper(NULL) {};

   ~PythonQtShell_QLineEdit();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
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
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QLineEdit : public QLineEdit
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { QLineEdit::changeEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { QLineEdit::contextMenuEvent(arg__1); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  arg__1) { QLineEdit::dragEnterEvent(arg__1); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  e) { QLineEdit::dragLeaveEvent(e); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  e) { QLineEdit::dragMoveEvent(e); }
inline void promoted_dropEvent(QDropEvent*  arg__1) { QLineEdit::dropEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QLineEdit::event(arg__1); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { QLineEdit::focusInEvent(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { QLineEdit::focusOutEvent(arg__1); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QLineEdit::inputMethodEvent(arg__1); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  arg__1) const { return QLineEdit::inputMethodQuery(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QLineEdit::keyPressEvent(arg__1); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  arg__1) { QLineEdit::mouseDoubleClickEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QLineEdit::mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QLineEdit::mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QLineEdit::mouseReleaseEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QLineEdit::paintEvent(arg__1); }
};

class PythonQtWrapper_QLineEdit : public QObject
{ Q_OBJECT
public:
public slots:
QLineEdit* new_QLineEdit(QWidget*  parent = 0);
QLineEdit* new_QLineEdit(const QString&  arg__1, QWidget*  parent = 0);
void delete_QLineEdit(QLineEdit* obj) { delete obj; } 
   Qt::Alignment  alignment(QLineEdit* theWrappedObject) const;
   void backspace(QLineEdit* theWrappedObject);
   void changeEvent(QLineEdit* theWrappedObject, QEvent*  arg__1);
   QCompleter*  completer(QLineEdit* theWrappedObject) const;
   void contextMenuEvent(QLineEdit* theWrappedObject, QContextMenuEvent*  arg__1);
   QMenu*  createStandardContextMenu(QLineEdit* theWrappedObject);
   void cursorBackward(QLineEdit* theWrappedObject, bool  mark, int  steps = 1);
   void cursorForward(QLineEdit* theWrappedObject, bool  mark, int  steps = 1);
   Qt::CursorMoveStyle  cursorMoveStyle(QLineEdit* theWrappedObject) const;
   int  cursorPosition(QLineEdit* theWrappedObject) const;
   int  cursorPositionAt(QLineEdit* theWrappedObject, const QPoint&  pos);
   void cursorWordBackward(QLineEdit* theWrappedObject, bool  mark);
   void cursorWordForward(QLineEdit* theWrappedObject, bool  mark);
   void del(QLineEdit* theWrappedObject);
   void deselect(QLineEdit* theWrappedObject);
   QString  displayText(QLineEdit* theWrappedObject) const;
   bool  dragEnabled(QLineEdit* theWrappedObject) const;
   void dragEnterEvent(QLineEdit* theWrappedObject, QDragEnterEvent*  arg__1);
   void dragLeaveEvent(QLineEdit* theWrappedObject, QDragLeaveEvent*  e);
   void dragMoveEvent(QLineEdit* theWrappedObject, QDragMoveEvent*  e);
   void dropEvent(QLineEdit* theWrappedObject, QDropEvent*  arg__1);
   QLineEdit::EchoMode  echoMode(QLineEdit* theWrappedObject) const;
   void end(QLineEdit* theWrappedObject, bool  mark);
   bool  event(QLineEdit* theWrappedObject, QEvent*  arg__1);
   void focusInEvent(QLineEdit* theWrappedObject, QFocusEvent*  arg__1);
   void focusOutEvent(QLineEdit* theWrappedObject, QFocusEvent*  arg__1);
   void getTextMargins(QLineEdit* theWrappedObject, int*  left, int*  top, int*  right, int*  bottom) const;
   bool  hasAcceptableInput(QLineEdit* theWrappedObject) const;
   bool  hasFrame(QLineEdit* theWrappedObject) const;
   bool  hasSelectedText(QLineEdit* theWrappedObject) const;
   void home(QLineEdit* theWrappedObject, bool  mark);
   QString  inputMask(QLineEdit* theWrappedObject) const;
   void inputMethodEvent(QLineEdit* theWrappedObject, QInputMethodEvent*  arg__1);
   QVariant  inputMethodQuery(QLineEdit* theWrappedObject, Qt::InputMethodQuery  arg__1) const;
   void insert(QLineEdit* theWrappedObject, const QString&  arg__1);
   bool  isModified(QLineEdit* theWrappedObject) const;
   bool  isReadOnly(QLineEdit* theWrappedObject) const;
   bool  isRedoAvailable(QLineEdit* theWrappedObject) const;
   bool  isUndoAvailable(QLineEdit* theWrappedObject) const;
   void keyPressEvent(QLineEdit* theWrappedObject, QKeyEvent*  arg__1);
   int  maxLength(QLineEdit* theWrappedObject) const;
   QSize  minimumSizeHint(QLineEdit* theWrappedObject) const;
   void mouseDoubleClickEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1);
   void mouseMoveEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1);
   void mousePressEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1);
   void mouseReleaseEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1);
   void paintEvent(QLineEdit* theWrappedObject, QPaintEvent*  arg__1);
   QString  placeholderText(QLineEdit* theWrappedObject) const;
   QString  selectedText(QLineEdit* theWrappedObject) const;
   int  selectionStart(QLineEdit* theWrappedObject) const;
   void setAlignment(QLineEdit* theWrappedObject, Qt::Alignment  flag);
   void setCompleter(QLineEdit* theWrappedObject, QCompleter*  completer);
   void setCursorMoveStyle(QLineEdit* theWrappedObject, Qt::CursorMoveStyle  style);
   void setCursorPosition(QLineEdit* theWrappedObject, int  arg__1);
   void setDragEnabled(QLineEdit* theWrappedObject, bool  b);
   void setEchoMode(QLineEdit* theWrappedObject, QLineEdit::EchoMode  arg__1);
   void setFrame(QLineEdit* theWrappedObject, bool  arg__1);
   void setInputMask(QLineEdit* theWrappedObject, const QString&  inputMask);
   void setMaxLength(QLineEdit* theWrappedObject, int  arg__1);
   void setModified(QLineEdit* theWrappedObject, bool  arg__1);
   void setPlaceholderText(QLineEdit* theWrappedObject, const QString&  arg__1);
   void setReadOnly(QLineEdit* theWrappedObject, bool  arg__1);
   void setSelection(QLineEdit* theWrappedObject, int  arg__1, int  arg__2);
   void setTextMargins(QLineEdit* theWrappedObject, const QMargins&  margins);
   void setTextMargins(QLineEdit* theWrappedObject, int  left, int  top, int  right, int  bottom);
   void setValidator(QLineEdit* theWrappedObject, const QValidator*  arg__1);
   QSize  sizeHint(QLineEdit* theWrappedObject) const;
   QString  text(QLineEdit* theWrappedObject) const;
   QMargins  textMargins(QLineEdit* theWrappedObject) const;
   const QValidator*  validator(QLineEdit* theWrappedObject) const;
};





class PythonQtWrapper_QLinearGradient : public QObject
{ Q_OBJECT
public:
public slots:
QLinearGradient* new_QLinearGradient();
QLinearGradient* new_QLinearGradient(const QPointF&  start, const QPointF&  finalStop);
QLinearGradient* new_QLinearGradient(qreal  xStart, qreal  yStart, qreal  xFinalStop, qreal  yFinalStop);
QLinearGradient* new_QLinearGradient(const QLinearGradient& other) {
QLinearGradient* a = new QLinearGradient();
*((QLinearGradient*)a) = other;
return a; }
void delete_QLinearGradient(QLinearGradient* obj) { delete obj; } 
   QPointF  finalStop(QLinearGradient* theWrappedObject) const;
   void setFinalStop(QLinearGradient* theWrappedObject, const QPointF&  stop);
   void setFinalStop(QLinearGradient* theWrappedObject, qreal  x, qreal  y);
   void setStart(QLinearGradient* theWrappedObject, const QPointF&  start);
   void setStart(QLinearGradient* theWrappedObject, qreal  x, qreal  y);
   QPointF  start(QLinearGradient* theWrappedObject) const;
};





class PythonQtShell_QListView : public QListView
{
public:
    PythonQtShell_QListView(QWidget*  parent = 0):QListView(parent),_wrapper(NULL) {};

   ~PythonQtShell_QListView();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void commitData(QWidget*  editor);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual void customEvent(QEvent*  arg__1);
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
virtual int  devType() const;
virtual void doItemsLayout();
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual void dropEvent(QDropEvent*  e);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void editorDestroyed(QObject*  editor);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual int  horizontalOffset() const;
virtual void horizontalScrollbarAction(int  action);
virtual void horizontalScrollbarValueChanged(int  value);
virtual QModelIndex  indexAt(const QPoint&  p) const;
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void keyboardSearch(const QString&  search);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
virtual void reset();
virtual void resizeEvent(QResizeEvent*  e);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
virtual void selectAll();
virtual QList<QModelIndex >  selectedIndexes() const;
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event) const;
virtual void setModel(QAbstractItemModel*  model);
virtual void setRootIndex(const QModelIndex&  index);
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual void showEvent(QShowEvent*  arg__1);
virtual int  sizeHintForColumn(int  column) const;
virtual int  sizeHintForRow(int  row) const;
virtual void startDrag(Qt::DropActions  supportedActions);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  e);
virtual void updateEditorData();
virtual void updateEditorGeometries();
virtual void updateGeometries();
virtual int  verticalOffset() const;
virtual void verticalScrollbarAction(int  action);
virtual void verticalScrollbarValueChanged(int  value);
virtual QStyleOptionViewItem  viewOptions() const;
virtual bool  viewportEvent(QEvent*  event);
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QListView : public QListView
{ public:
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { QListView::currentChanged(current, previous); }
inline void promoted_dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight) { QListView::dataChanged(topLeft, bottomRight); }
inline void promoted_doItemsLayout() { QListView::doItemsLayout(); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  e) { QListView::dragLeaveEvent(e); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  e) { QListView::dragMoveEvent(e); }
inline void promoted_dropEvent(QDropEvent*  e) { QListView::dropEvent(e); }
inline bool  promoted_event(QEvent*  e) { return QListView::event(e); }
inline int  promoted_horizontalOffset() const { return QListView::horizontalOffset(); }
inline QModelIndex  promoted_indexAt(const QPoint&  p) const { return QListView::indexAt(p); }
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return QListView::isIndexHidden(index); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { QListView::mouseMoveEvent(e); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { QListView::mouseReleaseEvent(e); }
inline void promoted_paintEvent(QPaintEvent*  e) { QListView::paintEvent(e); }
inline void promoted_reset() { QListView::reset(); }
inline void promoted_resizeEvent(QResizeEvent*  e) { QListView::resizeEvent(e); }
inline void promoted_rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) { QListView::rowsAboutToBeRemoved(parent, start, end); }
inline void promoted_rowsInserted(const QModelIndex&  parent, int  start, int  end) { QListView::rowsInserted(parent, start, end); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QListView::scrollContentsBy(dx, dy); }
inline void promoted_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) { QListView::scrollTo(index, hint); }
inline QList<QModelIndex >  promoted_selectedIndexes() const { return QListView::selectedIndexes(); }
inline void promoted_selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { QListView::selectionChanged(selected, deselected); }
inline void promoted_setRootIndex(const QModelIndex&  index) { QListView::setRootIndex(index); }
inline void promoted_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { QListView::setSelection(rect, command); }
inline void promoted_startDrag(Qt::DropActions  supportedActions) { QListView::startDrag(supportedActions); }
inline void promoted_timerEvent(QTimerEvent*  e) { QListView::timerEvent(e); }
inline void promoted_updateGeometries() { QListView::updateGeometries(); }
inline int  promoted_verticalOffset() const { return QListView::verticalOffset(); }
inline QStyleOptionViewItem  promoted_viewOptions() const { return QListView::viewOptions(); }
inline QRect  promoted_visualRect(const QModelIndex&  index) const { return QListView::visualRect(index); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return QListView::visualRegionForSelection(selection); }
};

class PythonQtWrapper_QListView : public QObject
{ Q_OBJECT
public:
public slots:
QListView* new_QListView(QWidget*  parent = 0);
void delete_QListView(QListView* obj) { delete obj; } 
   int  batchSize(QListView* theWrappedObject) const;
   void clearPropertyFlags(QListView* theWrappedObject);
   void currentChanged(QListView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  previous);
   void dataChanged(QListView* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
   void doItemsLayout(QListView* theWrappedObject);
   void dragLeaveEvent(QListView* theWrappedObject, QDragLeaveEvent*  e);
   void dragMoveEvent(QListView* theWrappedObject, QDragMoveEvent*  e);
   void dropEvent(QListView* theWrappedObject, QDropEvent*  e);
   bool  event(QListView* theWrappedObject, QEvent*  e);
   QListView::Flow  flow(QListView* theWrappedObject) const;
   QSize  gridSize(QListView* theWrappedObject) const;
   int  horizontalOffset(QListView* theWrappedObject) const;
   QModelIndex  indexAt(QListView* theWrappedObject, const QPoint&  p) const;
   bool  isIndexHidden(QListView* theWrappedObject, const QModelIndex&  index) const;
   bool  isRowHidden(QListView* theWrappedObject, int  row) const;
   bool  isSelectionRectVisible(QListView* theWrappedObject) const;
   bool  isWrapping(QListView* theWrappedObject) const;
   QListView::LayoutMode  layoutMode(QListView* theWrappedObject) const;
   int  modelColumn(QListView* theWrappedObject) const;
   void mouseMoveEvent(QListView* theWrappedObject, QMouseEvent*  e);
   void mouseReleaseEvent(QListView* theWrappedObject, QMouseEvent*  e);
   QListView::Movement  movement(QListView* theWrappedObject) const;
   void paintEvent(QListView* theWrappedObject, QPaintEvent*  e);
   void reset(QListView* theWrappedObject);
   void resizeEvent(QListView* theWrappedObject, QResizeEvent*  e);
   QListView::ResizeMode  resizeMode(QListView* theWrappedObject) const;
   void rowsAboutToBeRemoved(QListView* theWrappedObject, const QModelIndex&  parent, int  start, int  end);
   void rowsInserted(QListView* theWrappedObject, const QModelIndex&  parent, int  start, int  end);
   void scrollContentsBy(QListView* theWrappedObject, int  dx, int  dy);
   void scrollTo(QListView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
   QList<QModelIndex >  selectedIndexes(QListView* theWrappedObject) const;
   void selectionChanged(QListView* theWrappedObject, const QItemSelection&  selected, const QItemSelection&  deselected);
   void setBatchSize(QListView* theWrappedObject, int  batchSize);
   void setFlow(QListView* theWrappedObject, QListView::Flow  flow);
   void setGridSize(QListView* theWrappedObject, const QSize&  size);
   void setLayoutMode(QListView* theWrappedObject, QListView::LayoutMode  mode);
   void setModelColumn(QListView* theWrappedObject, int  column);
   void setMovement(QListView* theWrappedObject, QListView::Movement  movement);
   void setResizeMode(QListView* theWrappedObject, QListView::ResizeMode  mode);
   void setRootIndex(QListView* theWrappedObject, const QModelIndex&  index);
   void setRowHidden(QListView* theWrappedObject, int  row, bool  hide);
   void setSelection(QListView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
   void setSelectionRectVisible(QListView* theWrappedObject, bool  show);
   void setSpacing(QListView* theWrappedObject, int  space);
   void setUniformItemSizes(QListView* theWrappedObject, bool  enable);
   void setViewMode(QListView* theWrappedObject, QListView::ViewMode  mode);
   void setWordWrap(QListView* theWrappedObject, bool  on);
   void setWrapping(QListView* theWrappedObject, bool  enable);
   int  spacing(QListView* theWrappedObject) const;
   void startDrag(QListView* theWrappedObject, Qt::DropActions  supportedActions);
   void timerEvent(QListView* theWrappedObject, QTimerEvent*  e);
   bool  uniformItemSizes(QListView* theWrappedObject) const;
   void updateGeometries(QListView* theWrappedObject);
   int  verticalOffset(QListView* theWrappedObject) const;
   QListView::ViewMode  viewMode(QListView* theWrappedObject) const;
   QStyleOptionViewItem  viewOptions(QListView* theWrappedObject) const;
   QRect  visualRect(QListView* theWrappedObject, const QModelIndex&  index) const;
   QRegion  visualRegionForSelection(QListView* theWrappedObject, const QItemSelection&  selection) const;
   bool  wordWrap(QListView* theWrappedObject) const;
};





class PythonQtShell_QListWidget : public QListWidget
{
public:
    PythonQtShell_QListWidget(QWidget*  parent = 0):QListWidget(parent),_wrapper(NULL) {};

   ~PythonQtShell_QListWidget();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void commitData(QWidget*  editor);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual void customEvent(QEvent*  arg__1);
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
virtual int  devType() const;
virtual void doItemsLayout();
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual void dropEvent(QDropEvent*  event);
virtual bool  dropMimeData(int  index, const QMimeData*  data, Qt::DropAction  action);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void editorDestroyed(QObject*  editor);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual int  horizontalOffset() const;
virtual void horizontalScrollbarAction(int  action);
virtual void horizontalScrollbarValueChanged(int  value);
virtual QModelIndex  indexAt(const QPoint&  p) const;
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void keyboardSearch(const QString&  search);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QMimeData*  mimeData(const QList<QListWidgetItem* >  items) const;
virtual QStringList  mimeTypes() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
virtual void reset();
virtual void resizeEvent(QResizeEvent*  e);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint);
virtual void selectAll();
virtual QList<QModelIndex >  selectedIndexes() const;
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event) const;
virtual void setRootIndex(const QModelIndex&  index);
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual void showEvent(QShowEvent*  arg__1);
virtual int  sizeHintForColumn(int  column) const;
virtual int  sizeHintForRow(int  row) const;
virtual void startDrag(Qt::DropActions  supportedActions);
virtual Qt::DropActions  supportedDropActions() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  e);
virtual void updateEditorData();
virtual void updateEditorGeometries();
virtual void updateGeometries();
virtual int  verticalOffset() const;
virtual void verticalScrollbarAction(int  action);
virtual void verticalScrollbarValueChanged(int  value);
virtual QStyleOptionViewItem  viewOptions() const;
virtual bool  viewportEvent(QEvent*  event);
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QListWidget : public QListWidget
{ public:
inline void promoted_dropEvent(QDropEvent*  event) { QListWidget::dropEvent(event); }
inline bool  promoted_dropMimeData(int  index, const QMimeData*  data, Qt::DropAction  action) { return QListWidget::dropMimeData(index, data, action); }
inline bool  promoted_event(QEvent*  e) { return QListWidget::event(e); }
inline QStringList  promoted_mimeTypes() const { return QListWidget::mimeTypes(); }
inline Qt::DropActions  promoted_supportedDropActions() const { return QListWidget::supportedDropActions(); }
};

class PythonQtWrapper_QListWidget : public QObject
{ Q_OBJECT
public:
public slots:
QListWidget* new_QListWidget(QWidget*  parent = 0);
void delete_QListWidget(QListWidget* obj) { delete obj; } 
   void addItem(QListWidget* theWrappedObject, QListWidgetItem*  item);
   void addItem(QListWidget* theWrappedObject, const QString&  label);
   void addItems(QListWidget* theWrappedObject, const QStringList&  labels);
   void closePersistentEditor(QListWidget* theWrappedObject, QListWidgetItem*  item);
   int  count(QListWidget* theWrappedObject) const;
   QListWidgetItem*  currentItem(QListWidget* theWrappedObject) const;
   int  currentRow(QListWidget* theWrappedObject) const;
   void dropEvent(QListWidget* theWrappedObject, QDropEvent*  event);
   bool  dropMimeData(QListWidget* theWrappedObject, int  index, const QMimeData*  data, Qt::DropAction  action);
   void editItem(QListWidget* theWrappedObject, QListWidgetItem*  item);
   bool  event(QListWidget* theWrappedObject, QEvent*  e);
   QList<QListWidgetItem* >  findItems(QListWidget* theWrappedObject, const QString&  text, Qt::MatchFlags  flags) const;
   void insertItem(QListWidget* theWrappedObject, int  row, QListWidgetItem*  item);
   void insertItem(QListWidget* theWrappedObject, int  row, const QString&  label);
   void insertItems(QListWidget* theWrappedObject, int  row, const QStringList&  labels);
   bool  isSortingEnabled(QListWidget* theWrappedObject) const;
   QListWidgetItem*  item(QListWidget* theWrappedObject, int  row) const;
   QListWidgetItem*  itemAt(QListWidget* theWrappedObject, const QPoint&  p) const;
   QListWidgetItem*  itemAt(QListWidget* theWrappedObject, int  x, int  y) const;
   QWidget*  itemWidget(QListWidget* theWrappedObject, QListWidgetItem*  item) const;
   QStringList  mimeTypes(QListWidget* theWrappedObject) const;
   void openPersistentEditor(QListWidget* theWrappedObject, QListWidgetItem*  item);
   void removeItemWidget(QListWidget* theWrappedObject, QListWidgetItem*  item);
   int  row(QListWidget* theWrappedObject, const QListWidgetItem*  item) const;
   QList<QListWidgetItem* >  selectedItems(QListWidget* theWrappedObject) const;
   void setCurrentItem(QListWidget* theWrappedObject, QListWidgetItem*  item);
   void setCurrentItem(QListWidget* theWrappedObject, QListWidgetItem*  item, QItemSelectionModel::SelectionFlags  command);
   void setCurrentRow(QListWidget* theWrappedObject, int  row);
   void setCurrentRow(QListWidget* theWrappedObject, int  row, QItemSelectionModel::SelectionFlags  command);
   void setItemWidget(QListWidget* theWrappedObject, QListWidgetItem*  item, QWidget*  widget);
   void setSortingEnabled(QListWidget* theWrappedObject, bool  enable);
   void sortItems(QListWidget* theWrappedObject, Qt::SortOrder  order = Qt::AscendingOrder);
   Qt::DropActions  supportedDropActions(QListWidget* theWrappedObject) const;
   QListWidgetItem*  takeItem(QListWidget* theWrappedObject, int  row);
   QRect  visualItemRect(QListWidget* theWrappedObject, const QListWidgetItem*  item) const;
};





class PythonQtShell_QListWidgetItem : public QListWidgetItem
{
public:
    PythonQtShell_QListWidgetItem(QListWidget*  view = 0, int  type = Type):QListWidgetItem(view, type),_wrapper(NULL) {};
    PythonQtShell_QListWidgetItem(const QIcon&  icon, const QString&  text, QListWidget*  view = 0, int  type = Type):QListWidgetItem(icon, text, view, type),_wrapper(NULL) {};
    PythonQtShell_QListWidgetItem(const QString&  text, QListWidget*  view = 0, int  type = Type):QListWidgetItem(text, view, type),_wrapper(NULL) {};

   ~PythonQtShell_QListWidgetItem();

virtual QListWidgetItem*  clone() const;
virtual QVariant  data(int  role) const;
virtual bool  __lt__(const QListWidgetItem&  other) const;
virtual void read(QDataStream&  in);
virtual void setBackgroundColor(const QColor&  color);
virtual void setData(int  role, const QVariant&  value);
virtual void write(QDataStream&  out) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QListWidgetItem : public QListWidgetItem
{ public:
inline QListWidgetItem*  promoted_clone() const { return QListWidgetItem::clone(); }
inline QVariant  promoted_data(int  role) const { return QListWidgetItem::data(role); }
inline void promoted_setData(int  role, const QVariant&  value) { QListWidgetItem::setData(role, value); }
};

class PythonQtWrapper_QListWidgetItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ItemType )
enum ItemType{
  Type = QListWidgetItem::Type,   UserType = QListWidgetItem::UserType};
public slots:
QListWidgetItem* new_QListWidgetItem(QListWidget*  view = 0, int  type = Type);
QListWidgetItem* new_QListWidgetItem(const QIcon&  icon, const QString&  text, QListWidget*  view = 0, int  type = Type);
QListWidgetItem* new_QListWidgetItem(const QString&  text, QListWidget*  view = 0, int  type = Type);
void delete_QListWidgetItem(QListWidgetItem* obj) { delete obj; } 
   QBrush  background(QListWidgetItem* theWrappedObject) const;
   Qt::CheckState  checkState(QListWidgetItem* theWrappedObject) const;
   QListWidgetItem*  clone(QListWidgetItem* theWrappedObject) const;
   QVariant  data(QListWidgetItem* theWrappedObject, int  role) const;
   Qt::ItemFlags  flags(QListWidgetItem* theWrappedObject) const;
   QFont  font(QListWidgetItem* theWrappedObject) const;
   QBrush  foreground(QListWidgetItem* theWrappedObject) const;
   QIcon  icon(QListWidgetItem* theWrappedObject) const;
   bool  isHidden(QListWidgetItem* theWrappedObject) const;
   bool  isSelected(QListWidgetItem* theWrappedObject) const;
   QListWidget*  listWidget(QListWidgetItem* theWrappedObject) const;
   void writeTo(QListWidgetItem* theWrappedObject, QDataStream&  out);
   void readFrom(QListWidgetItem* theWrappedObject, QDataStream&  in);
   void setBackground(QListWidgetItem* theWrappedObject, const QBrush&  brush);
   void setCheckState(QListWidgetItem* theWrappedObject, Qt::CheckState  state);
   void setData(QListWidgetItem* theWrappedObject, int  role, const QVariant&  value);
   void setFlags(QListWidgetItem* theWrappedObject, Qt::ItemFlags  flags);
   void setFont(QListWidgetItem* theWrappedObject, const QFont&  font);
   void setForeground(QListWidgetItem* theWrappedObject, const QBrush&  brush);
   void setHidden(QListWidgetItem* theWrappedObject, bool  hide);
   void setIcon(QListWidgetItem* theWrappedObject, const QIcon&  icon);
   void setSelected(QListWidgetItem* theWrappedObject, bool  select);
   void setSizeHint(QListWidgetItem* theWrappedObject, const QSize&  size);
   void setStatusTip(QListWidgetItem* theWrappedObject, const QString&  statusTip);
   void setText(QListWidgetItem* theWrappedObject, const QString&  text);
   void setTextAlignment(QListWidgetItem* theWrappedObject, int  alignment);
   void setToolTip(QListWidgetItem* theWrappedObject, const QString&  toolTip);
   void setWhatsThis(QListWidgetItem* theWrappedObject, const QString&  whatsThis);
   QSize  sizeHint(QListWidgetItem* theWrappedObject) const;
   QString  statusTip(QListWidgetItem* theWrappedObject) const;
   QString  text(QListWidgetItem* theWrappedObject) const;
   int  textAlignment(QListWidgetItem* theWrappedObject) const;
   QString  toolTip(QListWidgetItem* theWrappedObject) const;
   int  type(QListWidgetItem* theWrappedObject) const;
   QString  whatsThis(QListWidgetItem* theWrappedObject) const;
};





class PythonQtShell_QMainWindow : public QMainWindow
{
public:
    PythonQtShell_QMainWindow(QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QMainWindow(parent, flags),_wrapper(NULL) {};

   ~PythonQtShell_QMainWindow();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual QMenu*  createPopupMenu();
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
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
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMainWindow : public QMainWindow
{ public:
inline void promoted_contextMenuEvent(QContextMenuEvent*  event) { QMainWindow::contextMenuEvent(event); }
inline QMenu*  promoted_createPopupMenu() { return QMainWindow::createPopupMenu(); }
inline bool  promoted_event(QEvent*  event) { return QMainWindow::event(event); }
};

class PythonQtWrapper_QMainWindow : public QObject
{ Q_OBJECT
public:
public slots:
QMainWindow* new_QMainWindow(QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
void delete_QMainWindow(QMainWindow* obj) { delete obj; } 
   void addDockWidget(QMainWindow* theWrappedObject, Qt::DockWidgetArea  area, QDockWidget*  dockwidget);
   void addDockWidget(QMainWindow* theWrappedObject, Qt::DockWidgetArea  area, QDockWidget*  dockwidget, Qt::Orientation  orientation);
   void addToolBar(QMainWindow* theWrappedObject, QToolBar*  toolbar);
   void addToolBar(QMainWindow* theWrappedObject, Qt::ToolBarArea  area, QToolBar*  toolbar);
   QToolBar*  addToolBar(QMainWindow* theWrappedObject, const QString&  title);
   void addToolBarBreak(QMainWindow* theWrappedObject, Qt::ToolBarArea  area = Qt::TopToolBarArea);
   QWidget*  centralWidget(QMainWindow* theWrappedObject) const;
   void contextMenuEvent(QMainWindow* theWrappedObject, QContextMenuEvent*  event);
   Qt::DockWidgetArea  corner(QMainWindow* theWrappedObject, Qt::Corner  corner) const;
   QMenu*  createPopupMenu(QMainWindow* theWrappedObject);
   QMainWindow::DockOptions  dockOptions(QMainWindow* theWrappedObject) const;
   Qt::DockWidgetArea  dockWidgetArea(QMainWindow* theWrappedObject, QDockWidget*  dockwidget) const;
   bool  documentMode(QMainWindow* theWrappedObject) const;
   bool  event(QMainWindow* theWrappedObject, QEvent*  event);
   QSize  iconSize(QMainWindow* theWrappedObject) const;
   void insertToolBar(QMainWindow* theWrappedObject, QToolBar*  before, QToolBar*  toolbar);
   void insertToolBarBreak(QMainWindow* theWrappedObject, QToolBar*  before);
   bool  isAnimated(QMainWindow* theWrappedObject) const;
   bool  isDockNestingEnabled(QMainWindow* theWrappedObject) const;
   bool  isSeparator(QMainWindow* theWrappedObject, const QPoint&  pos) const;
   QMenuBar*  menuBar(QMainWindow* theWrappedObject) const;
   QWidget*  menuWidget(QMainWindow* theWrappedObject) const;
   void removeDockWidget(QMainWindow* theWrappedObject, QDockWidget*  dockwidget);
   void removeToolBar(QMainWindow* theWrappedObject, QToolBar*  toolbar);
   void removeToolBarBreak(QMainWindow* theWrappedObject, QToolBar*  before);
   bool  restoreDockWidget(QMainWindow* theWrappedObject, QDockWidget*  dockwidget);
   bool  restoreState(QMainWindow* theWrappedObject, const QByteArray&  state, int  version = 0);
   QByteArray  saveState(QMainWindow* theWrappedObject, int  version = 0) const;
   void setCentralWidget(QMainWindow* theWrappedObject, QWidget*  widget);
   void setCorner(QMainWindow* theWrappedObject, Qt::Corner  corner, Qt::DockWidgetArea  area);
   void setDockOptions(QMainWindow* theWrappedObject, QMainWindow::DockOptions  options);
   void setDocumentMode(QMainWindow* theWrappedObject, bool  enabled);
   void setIconSize(QMainWindow* theWrappedObject, const QSize&  iconSize);
   void setMenuBar(QMainWindow* theWrappedObject, QMenuBar*  menubar);
   void setMenuWidget(QMainWindow* theWrappedObject, QWidget*  menubar);
   void setStatusBar(QMainWindow* theWrappedObject, QStatusBar*  statusbar);
   void setTabPosition(QMainWindow* theWrappedObject, Qt::DockWidgetAreas  areas, QTabWidget::TabPosition  tabPosition);
   void setTabShape(QMainWindow* theWrappedObject, QTabWidget::TabShape  tabShape);
   void setToolButtonStyle(QMainWindow* theWrappedObject, Qt::ToolButtonStyle  toolButtonStyle);
   void setUnifiedTitleAndToolBarOnMac(QMainWindow* theWrappedObject, bool  set);
   void splitDockWidget(QMainWindow* theWrappedObject, QDockWidget*  after, QDockWidget*  dockwidget, Qt::Orientation  orientation);
   QStatusBar*  statusBar(QMainWindow* theWrappedObject) const;
   QTabWidget::TabPosition  tabPosition(QMainWindow* theWrappedObject, Qt::DockWidgetArea  area) const;
   QTabWidget::TabShape  tabShape(QMainWindow* theWrappedObject) const;
   QList<QDockWidget* >  tabifiedDockWidgets(QMainWindow* theWrappedObject, QDockWidget*  dockwidget) const;
   void tabifyDockWidget(QMainWindow* theWrappedObject, QDockWidget*  first, QDockWidget*  second);
   Qt::ToolBarArea  toolBarArea(QMainWindow* theWrappedObject, QToolBar*  toolbar) const;
   bool  toolBarBreak(QMainWindow* theWrappedObject, QToolBar*  toolbar) const;
   Qt::ToolButtonStyle  toolButtonStyle(QMainWindow* theWrappedObject) const;
   bool  unifiedTitleAndToolBarOnMac(QMainWindow* theWrappedObject) const;
};





class PythonQtWrapper_QMargins : public QObject
{ Q_OBJECT
public:
public slots:
QMargins* new_QMargins();
QMargins* new_QMargins(int  left, int  top, int  right, int  bottom);
QMargins* new_QMargins(const QMargins& other) {
QMargins* a = new QMargins();
*((QMargins*)a) = other;
return a; }
void delete_QMargins(QMargins* obj) { delete obj; } 
   int  bottom(QMargins* theWrappedObject) const;
   bool  isNull(QMargins* theWrappedObject) const;
   int  left(QMargins* theWrappedObject) const;
   bool  __eq__(QMargins* theWrappedObject, const QMargins&  m2);
   int  right(QMargins* theWrappedObject) const;
   void setBottom(QMargins* theWrappedObject, int  bottom);
   void setLeft(QMargins* theWrappedObject, int  left);
   void setRight(QMargins* theWrappedObject, int  right);
   void setTop(QMargins* theWrappedObject, int  top);
   int  top(QMargins* theWrappedObject) const;
    QString py_toString(QMargins*);
    bool __nonzero__(QMargins* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QMatrix4x4 : public QObject
{ Q_OBJECT
public:
public slots:
QMatrix4x4* new_QMatrix4x4();
QMatrix4x4* new_QMatrix4x4(const QMatrix&  matrix);
QMatrix4x4* new_QMatrix4x4(const QTransform&  transform);
QMatrix4x4* new_QMatrix4x4(const qreal*  values);
QMatrix4x4* new_QMatrix4x4(const qreal*  values, int  cols, int  rows);
QMatrix4x4* new_QMatrix4x4(qreal  m11, qreal  m12, qreal  m13, qreal  m14, qreal  m21, qreal  m22, qreal  m23, qreal  m24, qreal  m31, qreal  m32, qreal  m33, qreal  m34, qreal  m41, qreal  m42, qreal  m43, qreal  m44);
QMatrix4x4* new_QMatrix4x4(const QMatrix4x4& other) {
QMatrix4x4* a = new QMatrix4x4();
*((QMatrix4x4*)a) = other;
return a; }
void delete_QMatrix4x4(QMatrix4x4* obj) { delete obj; } 
   QVector4D  column(QMatrix4x4* theWrappedObject, int  index) const;
   const qreal*  constData(QMatrix4x4* theWrappedObject) const;
   void copyDataTo(QMatrix4x4* theWrappedObject, qreal*  values) const;
   qreal*  data(QMatrix4x4* theWrappedObject);
   qreal  determinant(QMatrix4x4* theWrappedObject) const;
   void fill(QMatrix4x4* theWrappedObject, qreal  value);
   void flipCoordinates(QMatrix4x4* theWrappedObject);
   void frustum(QMatrix4x4* theWrappedObject, qreal  left, qreal  right, qreal  bottom, qreal  top, qreal  nearPlane, qreal  farPlane);
   QMatrix4x4  inverted(QMatrix4x4* theWrappedObject, bool*  invertible = 0) const;
   bool  isIdentity(QMatrix4x4* theWrappedObject) const;
   void lookAt(QMatrix4x4* theWrappedObject, const QVector3D&  eye, const QVector3D&  center, const QVector3D&  up);
   QPoint  map(QMatrix4x4* theWrappedObject, const QPoint&  point) const;
   QPointF  map(QMatrix4x4* theWrappedObject, const QPointF&  point) const;
   QVector3D  map(QMatrix4x4* theWrappedObject, const QVector3D&  point) const;
   QVector4D  map(QMatrix4x4* theWrappedObject, const QVector4D&  point) const;
   QRect  mapRect(QMatrix4x4* theWrappedObject, const QRect&  rect) const;
   QRectF  mapRect(QMatrix4x4* theWrappedObject, const QRectF&  rect) const;
   QVector3D  mapVector(QMatrix4x4* theWrappedObject, const QVector3D&  vector) const;
   bool  __ne__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other) const;
   qreal*  operator_cast_(QMatrix4x4* theWrappedObject, int  row, int  column);
   QMatrix4x4  __mul__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  m2);
   QPoint  __mul__(QMatrix4x4* theWrappedObject, const QPoint&  point);
   QPointF  __mul__(QMatrix4x4* theWrappedObject, const QPointF&  point);
   QVector3D  __mul__(QMatrix4x4* theWrappedObject, const QVector3D&  vector);
   QVector4D  __mul__(QMatrix4x4* theWrappedObject, const QVector4D&  vector);
   QMatrix4x4  __mul__(QMatrix4x4* theWrappedObject, qreal  factor);
   QMatrix4x4*  __imul__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other);
   QMatrix4x4*  __imul__(QMatrix4x4* theWrappedObject, qreal  factor);
   QMatrix4x4  __add__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  m2);
   QMatrix4x4*  __iadd__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other);
   QMatrix4x4  __sub__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  m2);
   QMatrix4x4*  __isub__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other);
   QMatrix4x4  __div__(QMatrix4x4* theWrappedObject, qreal  divisor);
   QMatrix4x4*  __idiv__(QMatrix4x4* theWrappedObject, qreal  divisor);
   void writeTo(QMatrix4x4* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other) const;
   void readFrom(QMatrix4x4* theWrappedObject, QDataStream&  arg__1);
   void optimize(QMatrix4x4* theWrappedObject);
   void ortho(QMatrix4x4* theWrappedObject, const QRect&  rect);
   void ortho(QMatrix4x4* theWrappedObject, const QRectF&  rect);
   void ortho(QMatrix4x4* theWrappedObject, qreal  left, qreal  right, qreal  bottom, qreal  top, qreal  nearPlane, qreal  farPlane);
   void perspective(QMatrix4x4* theWrappedObject, qreal  angle, qreal  aspect, qreal  nearPlane, qreal  farPlane);
   void rotate(QMatrix4x4* theWrappedObject, const QQuaternion&  quaternion);
   void rotate(QMatrix4x4* theWrappedObject, qreal  angle, const QVector3D&  vector);
   void rotate(QMatrix4x4* theWrappedObject, qreal  angle, qreal  x, qreal  y, qreal  z = 0.0f);
   QVector4D  row(QMatrix4x4* theWrappedObject, int  index) const;
   void scale(QMatrix4x4* theWrappedObject, const QVector3D&  vector);
   void scale(QMatrix4x4* theWrappedObject, qreal  factor);
   void scale(QMatrix4x4* theWrappedObject, qreal  x, qreal  y);
   void scale(QMatrix4x4* theWrappedObject, qreal  x, qreal  y, qreal  z);
   void setColumn(QMatrix4x4* theWrappedObject, int  index, const QVector4D&  value);
   void setRow(QMatrix4x4* theWrappedObject, int  index, const QVector4D&  value);
   void setToIdentity(QMatrix4x4* theWrappedObject);
   QMatrix  toAffine(QMatrix4x4* theWrappedObject) const;
   QTransform  toTransform(QMatrix4x4* theWrappedObject) const;
   QTransform  toTransform(QMatrix4x4* theWrappedObject, qreal  distanceToPlane) const;
   void translate(QMatrix4x4* theWrappedObject, const QVector3D&  vector);
   void translate(QMatrix4x4* theWrappedObject, qreal  x, qreal  y);
   void translate(QMatrix4x4* theWrappedObject, qreal  x, qreal  y, qreal  z);
   QMatrix4x4  transposed(QMatrix4x4* theWrappedObject) const;
    QString py_toString(QMatrix4x4*);
};





class PythonQtShell_QMdiArea : public QMdiArea
{
public:
    PythonQtShell_QMdiArea(QWidget*  parent = 0):QMdiArea(parent),_wrapper(NULL) {};

   ~PythonQtShell_QMdiArea();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  childEvent);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  object, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
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
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  paintEvent);
virtual void resizeEvent(QResizeEvent*  resizeEvent);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void showEvent(QShowEvent*  showEvent);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  timerEvent);
virtual bool  viewportEvent(QEvent*  event);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMdiArea : public QMdiArea
{ public:
inline void promoted_childEvent(QChildEvent*  childEvent) { QMdiArea::childEvent(childEvent); }
inline bool  promoted_event(QEvent*  event) { return QMdiArea::event(event); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return QMdiArea::eventFilter(object, event); }
inline void promoted_paintEvent(QPaintEvent*  paintEvent) { QMdiArea::paintEvent(paintEvent); }
inline void promoted_resizeEvent(QResizeEvent*  resizeEvent) { QMdiArea::resizeEvent(resizeEvent); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QMdiArea::scrollContentsBy(dx, dy); }
inline void promoted_showEvent(QShowEvent*  showEvent) { QMdiArea::showEvent(showEvent); }
inline void promoted_timerEvent(QTimerEvent*  timerEvent) { QMdiArea::timerEvent(timerEvent); }
inline bool  promoted_viewportEvent(QEvent*  event) { return QMdiArea::viewportEvent(event); }
};

class PythonQtWrapper_QMdiArea : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AreaOption )
Q_FLAGS(AreaOptions )
enum AreaOption{
  DontMaximizeSubWindowOnActivation = QMdiArea::DontMaximizeSubWindowOnActivation};
Q_DECLARE_FLAGS(AreaOptions, AreaOption)
public slots:
QMdiArea* new_QMdiArea(QWidget*  parent = 0);
void delete_QMdiArea(QMdiArea* obj) { delete obj; } 
   QMdiArea::WindowOrder  activationOrder(QMdiArea* theWrappedObject) const;
   QMdiSubWindow*  activeSubWindow(QMdiArea* theWrappedObject) const;
   QMdiSubWindow*  addSubWindow(QMdiArea* theWrappedObject, QWidget*  widget, Qt::WindowFlags  flags = 0);
   QBrush  background(QMdiArea* theWrappedObject) const;
   void childEvent(QMdiArea* theWrappedObject, QChildEvent*  childEvent);
   QMdiSubWindow*  currentSubWindow(QMdiArea* theWrappedObject) const;
   bool  documentMode(QMdiArea* theWrappedObject) const;
   bool  event(QMdiArea* theWrappedObject, QEvent*  event);
   bool  eventFilter(QMdiArea* theWrappedObject, QObject*  object, QEvent*  event);
   QSize  minimumSizeHint(QMdiArea* theWrappedObject) const;
   void paintEvent(QMdiArea* theWrappedObject, QPaintEvent*  paintEvent);
   void removeSubWindow(QMdiArea* theWrappedObject, QWidget*  widget);
   void resizeEvent(QMdiArea* theWrappedObject, QResizeEvent*  resizeEvent);
   void scrollContentsBy(QMdiArea* theWrappedObject, int  dx, int  dy);
   void setActivationOrder(QMdiArea* theWrappedObject, QMdiArea::WindowOrder  order);
   void setBackground(QMdiArea* theWrappedObject, const QBrush&  background);
   void setDocumentMode(QMdiArea* theWrappedObject, bool  enabled);
   void setOption(QMdiArea* theWrappedObject, QMdiArea::AreaOption  option, bool  on = true);
   void setTabPosition(QMdiArea* theWrappedObject, QTabWidget::TabPosition  position);
   void setTabShape(QMdiArea* theWrappedObject, QTabWidget::TabShape  shape);
   void setTabsClosable(QMdiArea* theWrappedObject, bool  closable);
   void setTabsMovable(QMdiArea* theWrappedObject, bool  movable);
   void setViewMode(QMdiArea* theWrappedObject, QMdiArea::ViewMode  mode);
   void showEvent(QMdiArea* theWrappedObject, QShowEvent*  showEvent);
   QSize  sizeHint(QMdiArea* theWrappedObject) const;
   QList<QMdiSubWindow* >  subWindowList(QMdiArea* theWrappedObject, QMdiArea::WindowOrder  order = QMdiArea::CreationOrder) const;
   QTabWidget::TabPosition  tabPosition(QMdiArea* theWrappedObject) const;
   QTabWidget::TabShape  tabShape(QMdiArea* theWrappedObject) const;
   bool  tabsClosable(QMdiArea* theWrappedObject) const;
   bool  tabsMovable(QMdiArea* theWrappedObject) const;
   bool  testOption(QMdiArea* theWrappedObject, QMdiArea::AreaOption  opton) const;
   void timerEvent(QMdiArea* theWrappedObject, QTimerEvent*  timerEvent);
   QMdiArea::ViewMode  viewMode(QMdiArea* theWrappedObject) const;
   bool  viewportEvent(QMdiArea* theWrappedObject, QEvent*  event);
};





class PythonQtShell_QMdiSubWindow : public QMdiSubWindow
{
public:
    PythonQtShell_QMdiSubWindow(QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QMdiSubWindow(parent, flags),_wrapper(NULL) {};

   ~PythonQtShell_QMdiSubWindow();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  changeEvent);
virtual void childEvent(QChildEvent*  childEvent);
virtual void closeEvent(QCloseEvent*  closeEvent);
virtual void contextMenuEvent(QContextMenuEvent*  contextMenuEvent);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  object, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  focusInEvent);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  focusOutEvent);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  hideEvent);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  keyEvent);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void leaveEvent(QEvent*  leaveEvent);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  mouseEvent);
virtual void mouseMoveEvent(QMouseEvent*  mouseEvent);
virtual void mousePressEvent(QMouseEvent*  mouseEvent);
virtual void mouseReleaseEvent(QMouseEvent*  mouseEvent);
virtual void moveEvent(QMoveEvent*  moveEvent);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  paintEvent);
virtual void resizeEvent(QResizeEvent*  resizeEvent);
virtual void showEvent(QShowEvent*  showEvent);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  timerEvent);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMdiSubWindow : public QMdiSubWindow
{ public:
inline void promoted_changeEvent(QEvent*  changeEvent) { QMdiSubWindow::changeEvent(changeEvent); }
inline void promoted_childEvent(QChildEvent*  childEvent) { QMdiSubWindow::childEvent(childEvent); }
inline void promoted_closeEvent(QCloseEvent*  closeEvent) { QMdiSubWindow::closeEvent(closeEvent); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  contextMenuEvent) { QMdiSubWindow::contextMenuEvent(contextMenuEvent); }
inline bool  promoted_event(QEvent*  event) { return QMdiSubWindow::event(event); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return QMdiSubWindow::eventFilter(object, event); }
inline void promoted_focusInEvent(QFocusEvent*  focusInEvent) { QMdiSubWindow::focusInEvent(focusInEvent); }
inline void promoted_focusOutEvent(QFocusEvent*  focusOutEvent) { QMdiSubWindow::focusOutEvent(focusOutEvent); }
inline void promoted_hideEvent(QHideEvent*  hideEvent) { QMdiSubWindow::hideEvent(hideEvent); }
inline void promoted_keyPressEvent(QKeyEvent*  keyEvent) { QMdiSubWindow::keyPressEvent(keyEvent); }
inline void promoted_leaveEvent(QEvent*  leaveEvent) { QMdiSubWindow::leaveEvent(leaveEvent); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  mouseEvent) { QMdiSubWindow::mouseDoubleClickEvent(mouseEvent); }
inline void promoted_mouseMoveEvent(QMouseEvent*  mouseEvent) { QMdiSubWindow::mouseMoveEvent(mouseEvent); }
inline void promoted_mousePressEvent(QMouseEvent*  mouseEvent) { QMdiSubWindow::mousePressEvent(mouseEvent); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  mouseEvent) { QMdiSubWindow::mouseReleaseEvent(mouseEvent); }
inline void promoted_moveEvent(QMoveEvent*  moveEvent) { QMdiSubWindow::moveEvent(moveEvent); }
inline void promoted_paintEvent(QPaintEvent*  paintEvent) { QMdiSubWindow::paintEvent(paintEvent); }
inline void promoted_resizeEvent(QResizeEvent*  resizeEvent) { QMdiSubWindow::resizeEvent(resizeEvent); }
inline void promoted_showEvent(QShowEvent*  showEvent) { QMdiSubWindow::showEvent(showEvent); }
inline void promoted_timerEvent(QTimerEvent*  timerEvent) { QMdiSubWindow::timerEvent(timerEvent); }
};

class PythonQtWrapper_QMdiSubWindow : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SubWindowOption )
Q_FLAGS(SubWindowOptions )
enum SubWindowOption{
  AllowOutsideAreaHorizontally = QMdiSubWindow::AllowOutsideAreaHorizontally,   AllowOutsideAreaVertically = QMdiSubWindow::AllowOutsideAreaVertically,   RubberBandResize = QMdiSubWindow::RubberBandResize,   RubberBandMove = QMdiSubWindow::RubberBandMove};
Q_DECLARE_FLAGS(SubWindowOptions, SubWindowOption)
public slots:
QMdiSubWindow* new_QMdiSubWindow(QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
void delete_QMdiSubWindow(QMdiSubWindow* obj) { delete obj; } 
   void changeEvent(QMdiSubWindow* theWrappedObject, QEvent*  changeEvent);
   void childEvent(QMdiSubWindow* theWrappedObject, QChildEvent*  childEvent);
   void closeEvent(QMdiSubWindow* theWrappedObject, QCloseEvent*  closeEvent);
   void contextMenuEvent(QMdiSubWindow* theWrappedObject, QContextMenuEvent*  contextMenuEvent);
   bool  event(QMdiSubWindow* theWrappedObject, QEvent*  event);
   bool  eventFilter(QMdiSubWindow* theWrappedObject, QObject*  object, QEvent*  event);
   void focusInEvent(QMdiSubWindow* theWrappedObject, QFocusEvent*  focusInEvent);
   void focusOutEvent(QMdiSubWindow* theWrappedObject, QFocusEvent*  focusOutEvent);
   void hideEvent(QMdiSubWindow* theWrappedObject, QHideEvent*  hideEvent);
   bool  isShaded(QMdiSubWindow* theWrappedObject) const;
   void keyPressEvent(QMdiSubWindow* theWrappedObject, QKeyEvent*  keyEvent);
   int  keyboardPageStep(QMdiSubWindow* theWrappedObject) const;
   int  keyboardSingleStep(QMdiSubWindow* theWrappedObject) const;
   void leaveEvent(QMdiSubWindow* theWrappedObject, QEvent*  leaveEvent);
   QWidget*  maximizedButtonsWidget(QMdiSubWindow* theWrappedObject) const;
   QWidget*  maximizedSystemMenuIconWidget(QMdiSubWindow* theWrappedObject) const;
   QMdiArea*  mdiArea(QMdiSubWindow* theWrappedObject) const;
   QSize  minimumSizeHint(QMdiSubWindow* theWrappedObject) const;
   void mouseDoubleClickEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent);
   void mouseMoveEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent);
   void mousePressEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent);
   void mouseReleaseEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent);
   void moveEvent(QMdiSubWindow* theWrappedObject, QMoveEvent*  moveEvent);
   void paintEvent(QMdiSubWindow* theWrappedObject, QPaintEvent*  paintEvent);
   void resizeEvent(QMdiSubWindow* theWrappedObject, QResizeEvent*  resizeEvent);
   void setKeyboardPageStep(QMdiSubWindow* theWrappedObject, int  step);
   void setKeyboardSingleStep(QMdiSubWindow* theWrappedObject, int  step);
   void setOption(QMdiSubWindow* theWrappedObject, QMdiSubWindow::SubWindowOption  option, bool  on = true);
   void setSystemMenu(QMdiSubWindow* theWrappedObject, QMenu*  systemMenu);
   void setWidget(QMdiSubWindow* theWrappedObject, QWidget*  widget);
   void showEvent(QMdiSubWindow* theWrappedObject, QShowEvent*  showEvent);
   QSize  sizeHint(QMdiSubWindow* theWrappedObject) const;
   QMenu*  systemMenu(QMdiSubWindow* theWrappedObject) const;
   bool  testOption(QMdiSubWindow* theWrappedObject, QMdiSubWindow::SubWindowOption  arg__1) const;
   void timerEvent(QMdiSubWindow* theWrappedObject, QTimerEvent*  timerEvent);
   QWidget*  widget(QMdiSubWindow* theWrappedObject) const;
};





class PythonQtShell_QMenu : public QMenu
{
public:
    PythonQtShell_QMenu(QWidget*  parent = 0):QMenu(parent),_wrapper(NULL) {};
    PythonQtShell_QMenu(const QString&  title, QWidget*  parent = 0):QMenu(title, parent),_wrapper(NULL) {};

   ~PythonQtShell_QMenu();

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
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
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
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMenu : public QMenu
{ public:
inline void promoted_actionEvent(QActionEvent*  arg__1) { QMenu::actionEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { QMenu::changeEvent(arg__1); }
inline void promoted_enterEvent(QEvent*  arg__1) { QMenu::enterEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QMenu::event(arg__1); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QMenu::focusNextPrevChild(next); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { QMenu::hideEvent(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QMenu::keyPressEvent(arg__1); }
inline void promoted_leaveEvent(QEvent*  arg__1) { QMenu::leaveEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QMenu::mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QMenu::mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QMenu::mouseReleaseEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QMenu::paintEvent(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  arg__1) { QMenu::timerEvent(arg__1); }
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { QMenu::wheelEvent(arg__1); }
};

class PythonQtWrapper_QMenu : public QObject
{ Q_OBJECT
public:
public slots:
QMenu* new_QMenu(QWidget*  parent = 0);
QMenu* new_QMenu(const QString&  title, QWidget*  parent = 0);
void delete_QMenu(QMenu* obj) { delete obj; } 
   QAction*  actionAt(QMenu* theWrappedObject, const QPoint&  arg__1) const;
   void actionEvent(QMenu* theWrappedObject, QActionEvent*  arg__1);
   QRect  actionGeometry(QMenu* theWrappedObject, QAction*  arg__1) const;
   QAction*  activeAction(QMenu* theWrappedObject) const;
   void addAction(QMenu* theWrappedObject, QAction*  action);
   QAction*  addAction(QMenu* theWrappedObject, const QIcon&  icon, const QString&  text);
   QAction*  addAction(QMenu* theWrappedObject, const QIcon&  icon, const QString&  text, const QObject*  receiver, const char*  member, const QKeySequence&  shortcut = 0);
   QAction*  addAction(QMenu* theWrappedObject, const QString&  text);
   QAction*  addAction(QMenu* theWrappedObject, const QString&  text, const QObject*  receiver, const char*  member, const QKeySequence&  shortcut = 0);
   QAction*  addMenu(QMenu* theWrappedObject, QMenu*  menu);
   QMenu*  addMenu(QMenu* theWrappedObject, const QIcon&  icon, const QString&  title);
   QMenu*  addMenu(QMenu* theWrappedObject, const QString&  title);
   QAction*  addSeparator(QMenu* theWrappedObject);
   void changeEvent(QMenu* theWrappedObject, QEvent*  arg__1);
   void clear(QMenu* theWrappedObject);
   QAction*  defaultAction(QMenu* theWrappedObject) const;
   void enterEvent(QMenu* theWrappedObject, QEvent*  arg__1);
   bool  event(QMenu* theWrappedObject, QEvent*  arg__1);
   QAction*  exec(QMenu* theWrappedObject);
   QAction*  static_QMenu_exec(QList<QAction* >  actions, const QPoint&  pos, QAction*  at = 0);
   QAction*  static_QMenu_exec(QList<QAction* >  actions, const QPoint&  pos, QAction*  at, QWidget*  parent);
   QAction*  exec(QMenu* theWrappedObject, const QPoint&  pos, QAction*  at = 0);
   bool  focusNextPrevChild(QMenu* theWrappedObject, bool  next);
   void hideEvent(QMenu* theWrappedObject, QHideEvent*  arg__1);
   void hideTearOffMenu(QMenu* theWrappedObject);
   QIcon  icon(QMenu* theWrappedObject) const;
   QAction*  insertMenu(QMenu* theWrappedObject, QAction*  before, QMenu*  menu);
   QAction*  insertSeparator(QMenu* theWrappedObject, QAction*  before);
   bool  isEmpty(QMenu* theWrappedObject) const;
   bool  isTearOffEnabled(QMenu* theWrappedObject) const;
   bool  isTearOffMenuVisible(QMenu* theWrappedObject) const;
   void keyPressEvent(QMenu* theWrappedObject, QKeyEvent*  arg__1);
   void leaveEvent(QMenu* theWrappedObject, QEvent*  arg__1);
   QAction*  menuAction(QMenu* theWrappedObject) const;
   void mouseMoveEvent(QMenu* theWrappedObject, QMouseEvent*  arg__1);
   void mousePressEvent(QMenu* theWrappedObject, QMouseEvent*  arg__1);
   void mouseReleaseEvent(QMenu* theWrappedObject, QMouseEvent*  arg__1);
   void paintEvent(QMenu* theWrappedObject, QPaintEvent*  arg__1);
   void popup(QMenu* theWrappedObject, const QPoint&  pos, QAction*  at = 0);
   bool  separatorsCollapsible(QMenu* theWrappedObject) const;
   void setActiveAction(QMenu* theWrappedObject, QAction*  act);
   void setDefaultAction(QMenu* theWrappedObject, QAction*  arg__1);
   void setIcon(QMenu* theWrappedObject, const QIcon&  icon);
   void setSeparatorsCollapsible(QMenu* theWrappedObject, bool  collapse);
   void setTearOffEnabled(QMenu* theWrappedObject, bool  arg__1);
   void setTitle(QMenu* theWrappedObject, const QString&  title);
   QSize  sizeHint(QMenu* theWrappedObject) const;
   void timerEvent(QMenu* theWrappedObject, QTimerEvent*  arg__1);
   QString  title(QMenu* theWrappedObject) const;
   void wheelEvent(QMenu* theWrappedObject, QWheelEvent*  arg__1);

  QAction* addAction (QMenu* menu, const QString & text, PyObject* callable, const QKeySequence & shortcut = 0) {
    QAction* a = menu->addAction(text);
    a->setShortcut(shortcut);
    PythonQt::self()->addSignalHandler(a, SIGNAL(triggered(bool)), callable);
    return a;
  }
  
  QAction* addAction (QMenu* menu, const QIcon& icon, const QString& text, PyObject* callable, const QKeySequence& shortcut = 0)
  {
    QAction* a = menu->addAction(text);
    a->setIcon(icon);
    a->setShortcut(shortcut);
    PythonQt::self()->addSignalHandler(a, SIGNAL(triggered(bool)), callable);
    return a;
  }
  
};





class PythonQtShell_QMenuBar : public QMenuBar
{
public:
    PythonQtShell_QMenuBar(QWidget*  parent = 0):QMenuBar(parent),_wrapper(NULL) {};

   ~PythonQtShell_QMenuBar();

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
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
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
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void setVisible(bool  visible);
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMenuBar : public QMenuBar
{ public:
inline void promoted_actionEvent(QActionEvent*  arg__1) { QMenuBar::actionEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { QMenuBar::changeEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QMenuBar::event(arg__1); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QMenuBar::eventFilter(arg__1, arg__2); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { QMenuBar::focusInEvent(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { QMenuBar::focusOutEvent(arg__1); }
inline int  promoted_heightForWidth(int  arg__1) const { return QMenuBar::heightForWidth(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QMenuBar::keyPressEvent(arg__1); }
inline void promoted_leaveEvent(QEvent*  arg__1) { QMenuBar::leaveEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QMenuBar::mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QMenuBar::mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QMenuBar::mouseReleaseEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QMenuBar::paintEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QMenuBar::resizeEvent(arg__1); }
inline void promoted_setVisible(bool  visible) { QMenuBar::setVisible(visible); }
inline void promoted_timerEvent(QTimerEvent*  arg__1) { QMenuBar::timerEvent(arg__1); }
};

class PythonQtWrapper_QMenuBar : public QObject
{ Q_OBJECT
public:
public slots:
QMenuBar* new_QMenuBar(QWidget*  parent = 0);
void delete_QMenuBar(QMenuBar* obj) { delete obj; } 
   QAction*  actionAt(QMenuBar* theWrappedObject, const QPoint&  arg__1) const;
   void actionEvent(QMenuBar* theWrappedObject, QActionEvent*  arg__1);
   QRect  actionGeometry(QMenuBar* theWrappedObject, QAction*  arg__1) const;
   QAction*  activeAction(QMenuBar* theWrappedObject) const;
   void addAction(QMenuBar* theWrappedObject, QAction*  action);
   QAction*  addAction(QMenuBar* theWrappedObject, const QString&  text);
   QAction*  addAction(QMenuBar* theWrappedObject, const QString&  text, const QObject*  receiver, const char*  member);
   QAction*  addMenu(QMenuBar* theWrappedObject, QMenu*  menu);
   QMenu*  addMenu(QMenuBar* theWrappedObject, const QIcon&  icon, const QString&  title);
   QMenu*  addMenu(QMenuBar* theWrappedObject, const QString&  title);
   QAction*  addSeparator(QMenuBar* theWrappedObject);
   void changeEvent(QMenuBar* theWrappedObject, QEvent*  arg__1);
   void clear(QMenuBar* theWrappedObject);
   QWidget*  cornerWidget(QMenuBar* theWrappedObject, Qt::Corner  corner = Qt::TopRightCorner) const;
   bool  event(QMenuBar* theWrappedObject, QEvent*  arg__1);
   bool  eventFilter(QMenuBar* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   void focusInEvent(QMenuBar* theWrappedObject, QFocusEvent*  arg__1);
   void focusOutEvent(QMenuBar* theWrappedObject, QFocusEvent*  arg__1);
   int  heightForWidth(QMenuBar* theWrappedObject, int  arg__1) const;
   QAction*  insertMenu(QMenuBar* theWrappedObject, QAction*  before, QMenu*  menu);
   QAction*  insertSeparator(QMenuBar* theWrappedObject, QAction*  before);
   bool  isDefaultUp(QMenuBar* theWrappedObject) const;
   bool  isNativeMenuBar(QMenuBar* theWrappedObject) const;
   void keyPressEvent(QMenuBar* theWrappedObject, QKeyEvent*  arg__1);
   void leaveEvent(QMenuBar* theWrappedObject, QEvent*  arg__1);
   QSize  minimumSizeHint(QMenuBar* theWrappedObject) const;
   void mouseMoveEvent(QMenuBar* theWrappedObject, QMouseEvent*  arg__1);
   void mousePressEvent(QMenuBar* theWrappedObject, QMouseEvent*  arg__1);
   void mouseReleaseEvent(QMenuBar* theWrappedObject, QMouseEvent*  arg__1);
   void paintEvent(QMenuBar* theWrappedObject, QPaintEvent*  arg__1);
   void resizeEvent(QMenuBar* theWrappedObject, QResizeEvent*  arg__1);
   void setActiveAction(QMenuBar* theWrappedObject, QAction*  action);
   void setCornerWidget(QMenuBar* theWrappedObject, QWidget*  w, Qt::Corner  corner = Qt::TopRightCorner);
   void setDefaultUp(QMenuBar* theWrappedObject, bool  arg__1);
   void setNativeMenuBar(QMenuBar* theWrappedObject, bool  nativeMenuBar);
   void setVisible(QMenuBar* theWrappedObject, bool  visible);
   QSize  sizeHint(QMenuBar* theWrappedObject) const;
   void timerEvent(QMenuBar* theWrappedObject, QTimerEvent*  arg__1);

  QAction* addAction (QMenuBar* menu, const QString & text, PyObject* callable)
  {
    QAction* a = menu->addAction(text);
    PythonQt::self()->addSignalHandler(a, SIGNAL(triggered(bool)), callable);
    return a;
  }
  
};





class PythonQtShell_QMessageBox : public QMessageBox
{
public:
    PythonQtShell_QMessageBox(QMessageBox::Icon  icon, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::NoButton, QWidget*  parent = 0, Qt::WindowFlags  flags = Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint):QMessageBox(icon, title, text, buttons, parent, flags),_wrapper(NULL) {};
    PythonQtShell_QMessageBox(QWidget*  parent = 0):QMessageBox(parent),_wrapper(NULL) {};

   ~PythonQtShell_QMessageBox();

virtual void accept();
virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void done(int  arg__1);
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
virtual void hideEvent(QHideEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void reject();
virtual void resizeEvent(QResizeEvent*  event);
virtual void showEvent(QShowEvent*  event);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMessageBox : public QMessageBox
{ public:
inline void promoted_changeEvent(QEvent*  event) { QMessageBox::changeEvent(event); }
inline void promoted_closeEvent(QCloseEvent*  event) { QMessageBox::closeEvent(event); }
inline bool  promoted_event(QEvent*  e) { return QMessageBox::event(e); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QMessageBox::keyPressEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QMessageBox::resizeEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { QMessageBox::showEvent(event); }
};

class PythonQtWrapper_QMessageBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ButtonRole StandardButton )
Q_FLAGS(StandardButtons )
enum ButtonRole{
  InvalidRole = QMessageBox::InvalidRole,   AcceptRole = QMessageBox::AcceptRole,   RejectRole = QMessageBox::RejectRole,   DestructiveRole = QMessageBox::DestructiveRole,   ActionRole = QMessageBox::ActionRole,   HelpRole = QMessageBox::HelpRole,   YesRole = QMessageBox::YesRole,   NoRole = QMessageBox::NoRole,   ResetRole = QMessageBox::ResetRole,   ApplyRole = QMessageBox::ApplyRole,   NRoles = QMessageBox::NRoles};
enum StandardButton{
  NoButton = QMessageBox::NoButton,   Ok = QMessageBox::Ok,   Save = QMessageBox::Save,   SaveAll = QMessageBox::SaveAll,   Open = QMessageBox::Open,   Yes = QMessageBox::Yes,   YesToAll = QMessageBox::YesToAll,   No = QMessageBox::No,   NoToAll = QMessageBox::NoToAll,   Abort = QMessageBox::Abort,   Retry = QMessageBox::Retry,   Ignore = QMessageBox::Ignore,   Close = QMessageBox::Close,   Cancel = QMessageBox::Cancel,   Discard = QMessageBox::Discard,   Help = QMessageBox::Help,   Apply = QMessageBox::Apply,   Reset = QMessageBox::Reset,   RestoreDefaults = QMessageBox::RestoreDefaults,   FirstButton = QMessageBox::FirstButton,   LastButton = QMessageBox::LastButton,   YesAll = QMessageBox::YesAll,   NoAll = QMessageBox::NoAll,   Default = QMessageBox::Default,   Escape = QMessageBox::Escape,   FlagMask = QMessageBox::FlagMask,   ButtonMask = QMessageBox::ButtonMask};
Q_DECLARE_FLAGS(StandardButtons, StandardButton)
public slots:
QMessageBox* new_QMessageBox(QMessageBox::Icon  icon, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::NoButton, QWidget*  parent = 0, Qt::WindowFlags  flags = Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
QMessageBox* new_QMessageBox(QWidget*  parent = 0);
void delete_QMessageBox(QMessageBox* obj) { delete obj; } 
   void static_QMessageBox_about(QWidget*  parent, const QString&  title, const QString&  text);
   void static_QMessageBox_aboutQt(QWidget*  parent, const QString&  title = QString());
   void addButton(QMessageBox* theWrappedObject, QAbstractButton*  button, QMessageBox::ButtonRole  role);
   QPushButton*  addButton(QMessageBox* theWrappedObject, QMessageBox::StandardButton  button);
   QPushButton*  addButton(QMessageBox* theWrappedObject, const QString&  text, QMessageBox::ButtonRole  role);
   QAbstractButton*  button(QMessageBox* theWrappedObject, QMessageBox::StandardButton  which) const;
   QMessageBox::ButtonRole  buttonRole(QMessageBox* theWrappedObject, QAbstractButton*  button) const;
   QList<QAbstractButton* >  buttons(QMessageBox* theWrappedObject) const;
   void changeEvent(QMessageBox* theWrappedObject, QEvent*  event);
   QAbstractButton*  clickedButton(QMessageBox* theWrappedObject) const;
   void closeEvent(QMessageBox* theWrappedObject, QCloseEvent*  event);
   QMessageBox::StandardButton  static_QMessageBox_critical(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::Ok, QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   int  static_QMessageBox_critical(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1);
   QPushButton*  defaultButton(QMessageBox* theWrappedObject) const;
   QString  detailedText(QMessageBox* theWrappedObject) const;
   QAbstractButton*  escapeButton(QMessageBox* theWrappedObject) const;
   bool  event(QMessageBox* theWrappedObject, QEvent*  e);
   QMessageBox::Icon  icon(QMessageBox* theWrappedObject) const;
   QPixmap  iconPixmap(QMessageBox* theWrappedObject) const;
   QMessageBox::StandardButton  static_QMessageBox_information(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::Ok, QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   QMessageBox::StandardButton  static_QMessageBox_information(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1 = QMessageBox::NoButton);
   QString  informativeText(QMessageBox* theWrappedObject) const;
   void keyPressEvent(QMessageBox* theWrappedObject, QKeyEvent*  event);
   void open(QMessageBox* theWrappedObject);
   void open(QMessageBox* theWrappedObject, QObject*  receiver, const char*  member);
   QMessageBox::StandardButton  static_QMessageBox_question(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::Ok, QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   int  static_QMessageBox_question(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1);
   void removeButton(QMessageBox* theWrappedObject, QAbstractButton*  button);
   void resizeEvent(QMessageBox* theWrappedObject, QResizeEvent*  event);
   void setDefaultButton(QMessageBox* theWrappedObject, QMessageBox::StandardButton  button);
   void setDefaultButton(QMessageBox* theWrappedObject, QPushButton*  button);
   void setDetailedText(QMessageBox* theWrappedObject, const QString&  text);
   void setEscapeButton(QMessageBox* theWrappedObject, QAbstractButton*  button);
   void setEscapeButton(QMessageBox* theWrappedObject, QMessageBox::StandardButton  button);
   void setIcon(QMessageBox* theWrappedObject, QMessageBox::Icon  arg__1);
   void setIconPixmap(QMessageBox* theWrappedObject, const QPixmap&  pixmap);
   void setInformativeText(QMessageBox* theWrappedObject, const QString&  text);
   void setStandardButtons(QMessageBox* theWrappedObject, QMessageBox::StandardButtons  buttons);
   void setText(QMessageBox* theWrappedObject, const QString&  text);
   void setTextFormat(QMessageBox* theWrappedObject, Qt::TextFormat  format);
   void showEvent(QMessageBox* theWrappedObject, QShowEvent*  event);
   QSize  sizeHint(QMessageBox* theWrappedObject) const;
   QMessageBox::StandardButton  standardButton(QMessageBox* theWrappedObject, QAbstractButton*  button) const;
   QMessageBox::StandardButtons  standardButtons(QMessageBox* theWrappedObject) const;
   QString  text(QMessageBox* theWrappedObject) const;
   Qt::TextFormat  textFormat(QMessageBox* theWrappedObject) const;
   QMessageBox::StandardButton  static_QMessageBox_warning(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::Ok, QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   int  static_QMessageBox_warning(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1);
};





class PythonQtShell_QMotifStyle : public QMotifStyle
{
public:
    PythonQtShell_QMotifStyle(bool  useHighlightCols = false):QMotifStyle(useHighlightCols),_wrapper(NULL) {};

   ~PythonQtShell_QMotifStyle();

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
virtual int  pixelMetric(QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
virtual void polish(QApplication*  arg__1);
virtual void polish(QPalette&  arg__1);
virtual void polish(QWidget*  arg__1);
virtual QSize  sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const;
virtual QPalette  standardPalette() const;
virtual QPixmap  standardPixmap(QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget) const;
virtual int  styleHint(QStyle::StyleHint  hint, const QStyleOption*  opt = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const;
virtual QRect  subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget = 0) const;
virtual QRect  subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const;
virtual void timerEvent(QTimerEvent*  event);
virtual void unpolish(QApplication*  arg__1);
virtual void unpolish(QWidget*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMotifStyle : public QMotifStyle
{ public:
inline void promoted_drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const { QMotifStyle::drawComplexControl(cc, opt, p, w); }
inline void promoted_drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const { QMotifStyle::drawControl(element, opt, p, w); }
inline void promoted_drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const { QMotifStyle::drawPrimitive(pe, opt, p, w); }
inline bool  promoted_event(QEvent*  arg__1) { return QMotifStyle::event(arg__1); }
inline bool  promoted_eventFilter(QObject*  o, QEvent*  e) { return QMotifStyle::eventFilter(o, e); }
inline int  promoted_pixelMetric(QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const { return QMotifStyle::pixelMetric(metric, option, widget); }
inline void promoted_polish(QApplication*  arg__1) { QMotifStyle::polish(arg__1); }
inline void promoted_polish(QPalette&  arg__1) { QMotifStyle::polish(arg__1); }
inline void promoted_polish(QWidget*  arg__1) { QMotifStyle::polish(arg__1); }
inline QSize  promoted_sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const { return QMotifStyle::sizeFromContents(ct, opt, contentsSize, widget); }
inline QPalette  promoted_standardPalette() const { return QMotifStyle::standardPalette(); }
inline int  promoted_styleHint(QStyle::StyleHint  hint, const QStyleOption*  opt = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const { return QMotifStyle::styleHint(hint, opt, widget, returnData); }
inline QRect  promoted_subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget = 0) const { return QMotifStyle::subControlRect(cc, opt, sc, widget); }
inline QRect  promoted_subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const { return QMotifStyle::subElementRect(r, opt, widget); }
inline void promoted_timerEvent(QTimerEvent*  event) { QMotifStyle::timerEvent(event); }
inline void promoted_unpolish(QApplication*  arg__1) { QMotifStyle::unpolish(arg__1); }
inline void promoted_unpolish(QWidget*  arg__1) { QMotifStyle::unpolish(arg__1); }
};

class PythonQtWrapper_QMotifStyle : public QObject
{ Q_OBJECT
public:
public slots:
QMotifStyle* new_QMotifStyle(bool  useHighlightCols = false);
void delete_QMotifStyle(QMotifStyle* obj) { delete obj; } 
   void drawComplexControl(QMotifStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const;
   void drawControl(QMotifStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
   void drawPrimitive(QMotifStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
   bool  event(QMotifStyle* theWrappedObject, QEvent*  arg__1);
   bool  eventFilter(QMotifStyle* theWrappedObject, QObject*  o, QEvent*  e);
   int  pixelMetric(QMotifStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
   void polish(QMotifStyle* theWrappedObject, QApplication*  arg__1);
   void polish(QMotifStyle* theWrappedObject, QPalette&  arg__1);
   void polish(QMotifStyle* theWrappedObject, QWidget*  arg__1);
   void setUseHighlightColors(QMotifStyle* theWrappedObject, bool  arg__1);
   QSize  sizeFromContents(QMotifStyle* theWrappedObject, QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const;
   QPalette  standardPalette(QMotifStyle* theWrappedObject) const;
   int  styleHint(QMotifStyle* theWrappedObject, QStyle::StyleHint  hint, const QStyleOption*  opt = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const;
   QRect  subControlRect(QMotifStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget = 0) const;
   QRect  subElementRect(QMotifStyle* theWrappedObject, QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const;
   void timerEvent(QMotifStyle* theWrappedObject, QTimerEvent*  event);
   void unpolish(QMotifStyle* theWrappedObject, QApplication*  arg__1);
   void unpolish(QMotifStyle* theWrappedObject, QWidget*  arg__1);
   bool  useHighlightColors(QMotifStyle* theWrappedObject) const;
};





class PythonQtShell_QMouseEvent : public QMouseEvent
{
public:
    PythonQtShell_QMouseEvent(QEvent::Type  type, const QPoint&  pos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers):QMouseEvent(type, pos, button, buttons, modifiers),_wrapper(NULL) {};
    PythonQtShell_QMouseEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  globalPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers):QMouseEvent(type, pos, globalPos, button, buttons, modifiers),_wrapper(NULL) {};

   ~PythonQtShell_QMouseEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QMouseEvent : public QObject
{ Q_OBJECT
public:
public slots:
QMouseEvent* new_QMouseEvent(QEvent::Type  type, const QPoint&  pos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers);
QMouseEvent* new_QMouseEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  globalPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers);
void delete_QMouseEvent(QMouseEvent* obj) { delete obj; } 
   Qt::MouseButton  button(QMouseEvent* theWrappedObject) const;
   Qt::MouseButtons  buttons(QMouseEvent* theWrappedObject) const;
   QMouseEvent*  static_QMouseEvent_createExtendedMouseEvent(QEvent::Type  type, const QPointF&  pos, const QPoint&  globalPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers);
   const QPoint*  globalPos(QMouseEvent* theWrappedObject) const;
   int  globalX(QMouseEvent* theWrappedObject) const;
   int  globalY(QMouseEvent* theWrappedObject) const;
   bool  hasExtendedInfo(QMouseEvent* theWrappedObject) const;
   const QPoint*  pos(QMouseEvent* theWrappedObject) const;
   QPointF  posF(QMouseEvent* theWrappedObject) const;
   int  x(QMouseEvent* theWrappedObject) const;
   int  y(QMouseEvent* theWrappedObject) const;
};





class PythonQtShell_QMouseEventTransition : public QMouseEventTransition
{
public:
    PythonQtShell_QMouseEventTransition(QObject*  object, QEvent::Type  type, Qt::MouseButton  button, QState*  sourceState = 0):QMouseEventTransition(object, type, button, sourceState),_wrapper(NULL) {};
    PythonQtShell_QMouseEventTransition(QState*  sourceState = 0):QMouseEventTransition(sourceState),_wrapper(NULL) {};

   ~PythonQtShell_QMouseEventTransition();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  eventTest(QEvent*  event);
virtual void onTransition(QEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMouseEventTransition : public QMouseEventTransition
{ public:
inline bool  promoted_eventTest(QEvent*  event) { return QMouseEventTransition::eventTest(event); }
inline void promoted_onTransition(QEvent*  event) { QMouseEventTransition::onTransition(event); }
};

class PythonQtWrapper_QMouseEventTransition : public QObject
{ Q_OBJECT
public:
public slots:
QMouseEventTransition* new_QMouseEventTransition(QObject*  object, QEvent::Type  type, Qt::MouseButton  button, QState*  sourceState = 0);
QMouseEventTransition* new_QMouseEventTransition(QState*  sourceState = 0);
void delete_QMouseEventTransition(QMouseEventTransition* obj) { delete obj; } 
   Qt::MouseButton  button(QMouseEventTransition* theWrappedObject) const;
   bool  eventTest(QMouseEventTransition* theWrappedObject, QEvent*  event);
   QPainterPath  hitTestPath(QMouseEventTransition* theWrappedObject) const;
   Qt::KeyboardModifiers  modifierMask(QMouseEventTransition* theWrappedObject) const;
   void onTransition(QMouseEventTransition* theWrappedObject, QEvent*  event);
   void setButton(QMouseEventTransition* theWrappedObject, Qt::MouseButton  button);
   void setHitTestPath(QMouseEventTransition* theWrappedObject, const QPainterPath&  path);
   void setModifierMask(QMouseEventTransition* theWrappedObject, Qt::KeyboardModifiers  modifiers);
};





class PythonQtShell_QMoveEvent : public QMoveEvent
{
public:
    PythonQtShell_QMoveEvent(const QPoint&  pos, const QPoint&  oldPos):QMoveEvent(pos, oldPos),_wrapper(NULL) {};

   ~PythonQtShell_QMoveEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QMoveEvent : public QObject
{ Q_OBJECT
public:
public slots:
QMoveEvent* new_QMoveEvent(const QPoint&  pos, const QPoint&  oldPos);
void delete_QMoveEvent(QMoveEvent* obj) { delete obj; } 
   const QPoint*  oldPos(QMoveEvent* theWrappedObject) const;
   const QPoint*  pos(QMoveEvent* theWrappedObject) const;
};





class PythonQtShell_QMovie : public QMovie
{
public:
    PythonQtShell_QMovie(QIODevice*  device, const QByteArray&  format = QByteArray(), QObject*  parent = 0):QMovie(device, format, parent),_wrapper(NULL) {};
    PythonQtShell_QMovie(QObject*  parent = 0):QMovie(parent),_wrapper(NULL) {};
    PythonQtShell_QMovie(const QString&  fileName, const QByteArray&  format = QByteArray(), QObject*  parent = 0):QMovie(fileName, format, parent),_wrapper(NULL) {};

   ~PythonQtShell_QMovie();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QMovie : public QObject
{ Q_OBJECT
public:
public slots:
QMovie* new_QMovie(QIODevice*  device, const QByteArray&  format = QByteArray(), QObject*  parent = 0);
QMovie* new_QMovie(QObject*  parent = 0);
QMovie* new_QMovie(const QString&  fileName, const QByteArray&  format = QByteArray(), QObject*  parent = 0);
void delete_QMovie(QMovie* obj) { delete obj; } 
   QColor  backgroundColor(QMovie* theWrappedObject) const;
   QMovie::CacheMode  cacheMode(QMovie* theWrappedObject) const;
   int  currentFrameNumber(QMovie* theWrappedObject) const;
   QImage  currentImage(QMovie* theWrappedObject) const;
   QPixmap  currentPixmap(QMovie* theWrappedObject) const;
   QIODevice*  device(QMovie* theWrappedObject) const;
   QString  fileName(QMovie* theWrappedObject) const;
   QByteArray  format(QMovie* theWrappedObject) const;
   int  frameCount(QMovie* theWrappedObject) const;
   QRect  frameRect(QMovie* theWrappedObject) const;
   bool  isValid(QMovie* theWrappedObject) const;
   bool  jumpToFrame(QMovie* theWrappedObject, int  frameNumber);
   int  loopCount(QMovie* theWrappedObject) const;
   int  nextFrameDelay(QMovie* theWrappedObject) const;
   QSize  scaledSize(QMovie* theWrappedObject);
   void setBackgroundColor(QMovie* theWrappedObject, const QColor&  color);
   void setCacheMode(QMovie* theWrappedObject, QMovie::CacheMode  mode);
   void setDevice(QMovie* theWrappedObject, QIODevice*  device);
   void setFileName(QMovie* theWrappedObject, const QString&  fileName);
   void setFormat(QMovie* theWrappedObject, const QByteArray&  format);
   void setScaledSize(QMovie* theWrappedObject, const QSize&  size);
   int  speed(QMovie* theWrappedObject) const;
   QMovie::MovieState  state(QMovie* theWrappedObject) const;
   QList<QByteArray >  static_QMovie_supportedFormats();
};





class PythonQtShell_QPageSetupDialog : public QPageSetupDialog
{
public:
    PythonQtShell_QPageSetupDialog(QPrinter*  printer, QWidget*  parent = 0):QPageSetupDialog(printer, parent),_wrapper(NULL) {};
    PythonQtShell_QPageSetupDialog(QWidget*  parent = 0):QPageSetupDialog(parent),_wrapper(NULL) {};

   ~PythonQtShell_QPageSetupDialog();

virtual void accept();
virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
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
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual int  exec();
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
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
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void reject();
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPageSetupDialog : public QPageSetupDialog
{ public:
inline int  promoted_exec() { return QPageSetupDialog::exec(); }
};

class PythonQtWrapper_QPageSetupDialog : public QObject
{ Q_OBJECT
public:
public slots:
QPageSetupDialog* new_QPageSetupDialog(QPrinter*  printer, QWidget*  parent = 0);
QPageSetupDialog* new_QPageSetupDialog(QWidget*  parent = 0);
void delete_QPageSetupDialog(QPageSetupDialog* obj) { delete obj; } 
   void addEnabledOption(QPageSetupDialog* theWrappedObject, QPageSetupDialog::PageSetupDialogOption  option);
   QPageSetupDialog::PageSetupDialogOptions  enabledOptions(QPageSetupDialog* theWrappedObject) const;
   int  exec(QPageSetupDialog* theWrappedObject);
   bool  isOptionEnabled(QPageSetupDialog* theWrappedObject, QPageSetupDialog::PageSetupDialogOption  option) const;
   void open(QPageSetupDialog* theWrappedObject);
   void open(QPageSetupDialog* theWrappedObject, QObject*  receiver, const char*  member);
   QPageSetupDialog::PageSetupDialogOptions  options(QPageSetupDialog* theWrappedObject) const;
   void setEnabledOptions(QPageSetupDialog* theWrappedObject, QPageSetupDialog::PageSetupDialogOptions  options);
   void setOption(QPageSetupDialog* theWrappedObject, QPageSetupDialog::PageSetupDialogOption  option, bool  on = true);
   void setOptions(QPageSetupDialog* theWrappedObject, QPageSetupDialog::PageSetupDialogOptions  options);
   bool  testOption(QPageSetupDialog* theWrappedObject, QPageSetupDialog::PageSetupDialogOption  option) const;
};





class PythonQtShell_QPaintDevice : public QPaintDevice
{
public:
    PythonQtShell_QPaintDevice():QPaintDevice(),_wrapper(NULL) {};

   ~PythonQtShell_QPaintDevice();

virtual int  devType() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  metric) const;
virtual QPaintEngine*  paintEngine() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPaintDevice : public QPaintDevice
{ public:
inline int  promoted_devType() const { return QPaintDevice::devType(); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QPaintDevice::metric(metric); }
};

class PythonQtWrapper_QPaintDevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PaintDeviceMetric )
enum PaintDeviceMetric{
  PdmWidth = QPaintDevice::PdmWidth,   PdmHeight = QPaintDevice::PdmHeight,   PdmWidthMM = QPaintDevice::PdmWidthMM,   PdmHeightMM = QPaintDevice::PdmHeightMM,   PdmNumColors = QPaintDevice::PdmNumColors,   PdmDepth = QPaintDevice::PdmDepth,   PdmDpiX = QPaintDevice::PdmDpiX,   PdmDpiY = QPaintDevice::PdmDpiY,   PdmPhysicalDpiX = QPaintDevice::PdmPhysicalDpiX,   PdmPhysicalDpiY = QPaintDevice::PdmPhysicalDpiY};
public slots:
QPaintDevice* new_QPaintDevice();
void delete_QPaintDevice(QPaintDevice* obj) { delete obj; } 
   int  colorCount(QPaintDevice* theWrappedObject) const;
   int  depth(QPaintDevice* theWrappedObject) const;
   int  devType(QPaintDevice* theWrappedObject) const;
   int  height(QPaintDevice* theWrappedObject) const;
   int  heightMM(QPaintDevice* theWrappedObject) const;
   int  logicalDpiX(QPaintDevice* theWrappedObject) const;
   int  logicalDpiY(QPaintDevice* theWrappedObject) const;
   int  metric(QPaintDevice* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const;
   int  numColors(QPaintDevice* theWrappedObject) const;
   bool  paintingActive(QPaintDevice* theWrappedObject) const;
   int  physicalDpiX(QPaintDevice* theWrappedObject) const;
   int  physicalDpiY(QPaintDevice* theWrappedObject) const;
   int  width(QPaintDevice* theWrappedObject) const;
   int  widthMM(QPaintDevice* theWrappedObject) const;
};





class PythonQtShell_QPaintEngine : public QPaintEngine
{
public:
    PythonQtShell_QPaintEngine(QPaintEngine::PaintEngineFeatures  features = 0):QPaintEngine(features),_wrapper(NULL) {};

   ~PythonQtShell_QPaintEngine();

virtual bool  begin(QPaintDevice*  pdev);
virtual QPoint  coordinateOffset() const;
virtual void drawEllipse(const QRect&  r);
virtual void drawEllipse(const QRectF&  r);
virtual void drawImage(const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
virtual void drawLines(const QLine*  lines, int  lineCount);
virtual void drawLines(const QLineF*  lines, int  lineCount);
virtual void drawPath(const QPainterPath&  path);
virtual void drawPixmap(const QRectF&  r, const QPixmap&  pm, const QRectF&  sr);
virtual void drawPoints(const QPoint*  points, int  pointCount);
virtual void drawPoints(const QPointF*  points, int  pointCount);
virtual void drawPolygon(const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode);
virtual void drawPolygon(const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode);
virtual void drawRects(const QRect*  rects, int  rectCount);
virtual void drawRects(const QRectF*  rects, int  rectCount);
virtual void drawTextItem(const QPointF&  p, const QTextItem&  textItem);
virtual void drawTiledPixmap(const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s);
virtual bool  end();
virtual QPaintEngine::Type  type() const;
virtual void updateState(const QPaintEngineState&  state);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPaintEngine : public QPaintEngine
{ public:
inline QPoint  promoted_coordinateOffset() const { return QPaintEngine::coordinateOffset(); }
inline void promoted_drawEllipse(const QRect&  r) { QPaintEngine::drawEllipse(r); }
inline void promoted_drawEllipse(const QRectF&  r) { QPaintEngine::drawEllipse(r); }
inline void promoted_drawImage(const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor) { QPaintEngine::drawImage(r, pm, sr, flags); }
inline void promoted_drawLines(const QLine*  lines, int  lineCount) { QPaintEngine::drawLines(lines, lineCount); }
inline void promoted_drawLines(const QLineF*  lines, int  lineCount) { QPaintEngine::drawLines(lines, lineCount); }
inline void promoted_drawPath(const QPainterPath&  path) { QPaintEngine::drawPath(path); }
inline void promoted_drawPoints(const QPoint*  points, int  pointCount) { QPaintEngine::drawPoints(points, pointCount); }
inline void promoted_drawPoints(const QPointF*  points, int  pointCount) { QPaintEngine::drawPoints(points, pointCount); }
inline void promoted_drawPolygon(const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode) { QPaintEngine::drawPolygon(points, pointCount, mode); }
inline void promoted_drawPolygon(const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode) { QPaintEngine::drawPolygon(points, pointCount, mode); }
inline void promoted_drawRects(const QRect*  rects, int  rectCount) { QPaintEngine::drawRects(rects, rectCount); }
inline void promoted_drawRects(const QRectF*  rects, int  rectCount) { QPaintEngine::drawRects(rects, rectCount); }
inline void promoted_drawTextItem(const QPointF&  p, const QTextItem&  textItem) { QPaintEngine::drawTextItem(p, textItem); }
inline void promoted_drawTiledPixmap(const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s) { QPaintEngine::drawTiledPixmap(r, pixmap, s); }
};

class PythonQtWrapper_QPaintEngine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PolygonDrawMode Type PaintEngineFeature DirtyFlag )
Q_FLAGS(PaintEngineFeatures DirtyFlags )
enum PolygonDrawMode{
  OddEvenMode = QPaintEngine::OddEvenMode,   WindingMode = QPaintEngine::WindingMode,   ConvexMode = QPaintEngine::ConvexMode,   PolylineMode = QPaintEngine::PolylineMode};
enum Type{
  X11 = QPaintEngine::X11,   Windows = QPaintEngine::Windows,   QuickDraw = QPaintEngine::QuickDraw,   CoreGraphics = QPaintEngine::CoreGraphics,   MacPrinter = QPaintEngine::MacPrinter,   QWindowSystem = QPaintEngine::QWindowSystem,   PostScript = QPaintEngine::PostScript,   OpenGL = QPaintEngine::OpenGL,   Picture = QPaintEngine::Picture,   SVG = QPaintEngine::SVG,   Raster = QPaintEngine::Raster,   Direct3D = QPaintEngine::Direct3D,   Pdf = QPaintEngine::Pdf,   OpenVG = QPaintEngine::OpenVG,   OpenGL2 = QPaintEngine::OpenGL2,   PaintBuffer = QPaintEngine::PaintBuffer,   Blitter = QPaintEngine::Blitter,   User = QPaintEngine::User,   MaxUser = QPaintEngine::MaxUser};
enum PaintEngineFeature{
  PrimitiveTransform = QPaintEngine::PrimitiveTransform,   PatternTransform = QPaintEngine::PatternTransform,   PixmapTransform = QPaintEngine::PixmapTransform,   PatternBrush = QPaintEngine::PatternBrush,   LinearGradientFill = QPaintEngine::LinearGradientFill,   RadialGradientFill = QPaintEngine::RadialGradientFill,   ConicalGradientFill = QPaintEngine::ConicalGradientFill,   AlphaBlend = QPaintEngine::AlphaBlend,   PorterDuff = QPaintEngine::PorterDuff,   PainterPaths = QPaintEngine::PainterPaths,   Antialiasing = QPaintEngine::Antialiasing,   BrushStroke = QPaintEngine::BrushStroke,   ConstantOpacity = QPaintEngine::ConstantOpacity,   MaskedBrush = QPaintEngine::MaskedBrush,   PerspectiveTransform = QPaintEngine::PerspectiveTransform,   BlendModes = QPaintEngine::BlendModes,   ObjectBoundingModeGradients = QPaintEngine::ObjectBoundingModeGradients,   RasterOpModes = QPaintEngine::RasterOpModes,   PaintOutsidePaintEvent = QPaintEngine::PaintOutsidePaintEvent,   AllFeatures = QPaintEngine::AllFeatures};
enum DirtyFlag{
  DirtyPen = QPaintEngine::DirtyPen,   DirtyBrush = QPaintEngine::DirtyBrush,   DirtyBrushOrigin = QPaintEngine::DirtyBrushOrigin,   DirtyFont = QPaintEngine::DirtyFont,   DirtyBackground = QPaintEngine::DirtyBackground,   DirtyBackgroundMode = QPaintEngine::DirtyBackgroundMode,   DirtyTransform = QPaintEngine::DirtyTransform,   DirtyClipRegion = QPaintEngine::DirtyClipRegion,   DirtyClipPath = QPaintEngine::DirtyClipPath,   DirtyHints = QPaintEngine::DirtyHints,   DirtyCompositionMode = QPaintEngine::DirtyCompositionMode,   DirtyClipEnabled = QPaintEngine::DirtyClipEnabled,   DirtyOpacity = QPaintEngine::DirtyOpacity,   AllDirty = QPaintEngine::AllDirty};
Q_DECLARE_FLAGS(PaintEngineFeatures, PaintEngineFeature)
Q_DECLARE_FLAGS(DirtyFlags, DirtyFlag)
public slots:
QPaintEngine* new_QPaintEngine(QPaintEngine::PaintEngineFeatures  features = 0);
void delete_QPaintEngine(QPaintEngine* obj) { delete obj; } 
   void clearDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df);
   QPoint  coordinateOffset(QPaintEngine* theWrappedObject) const;
   void drawEllipse(QPaintEngine* theWrappedObject, const QRect&  r);
   void drawEllipse(QPaintEngine* theWrappedObject, const QRectF&  r);
   void drawImage(QPaintEngine* theWrappedObject, const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawLines(QPaintEngine* theWrappedObject, const QLine*  lines, int  lineCount);
   void drawLines(QPaintEngine* theWrappedObject, const QLineF*  lines, int  lineCount);
   void drawPath(QPaintEngine* theWrappedObject, const QPainterPath&  path);
   void drawPoints(QPaintEngine* theWrappedObject, const QPoint*  points, int  pointCount);
   void drawPoints(QPaintEngine* theWrappedObject, const QPointF*  points, int  pointCount);
   void drawPolygon(QPaintEngine* theWrappedObject, const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode);
   void drawPolygon(QPaintEngine* theWrappedObject, const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode);
   void drawRects(QPaintEngine* theWrappedObject, const QRect*  rects, int  rectCount);
   void drawRects(QPaintEngine* theWrappedObject, const QRectF*  rects, int  rectCount);
   void drawTextItem(QPaintEngine* theWrappedObject, const QPointF&  p, const QTextItem&  textItem);
   void drawTiledPixmap(QPaintEngine* theWrappedObject, const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s);
   bool  hasFeature(QPaintEngine* theWrappedObject, QPaintEngine::PaintEngineFeatures  feature) const;
   bool  isActive(QPaintEngine* theWrappedObject) const;
   bool  isExtended(QPaintEngine* theWrappedObject) const;
   QPaintDevice*  paintDevice(QPaintEngine* theWrappedObject) const;
   QPainter*  painter(QPaintEngine* theWrappedObject) const;
   void setActive(QPaintEngine* theWrappedObject, bool  newState);
   void setDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df);
   void setSystemClip(QPaintEngine* theWrappedObject, const QRegion&  baseClip);
   void setSystemRect(QPaintEngine* theWrappedObject, const QRect&  rect);
   void syncState(QPaintEngine* theWrappedObject);
   QRegion  systemClip(QPaintEngine* theWrappedObject) const;
   QRect  systemRect(QPaintEngine* theWrappedObject) const;
   bool  testDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df);
};





class PythonQtShell_QPaintEngineState : public QPaintEngineState
{
public:
    PythonQtShell_QPaintEngineState():QPaintEngineState(),_wrapper(NULL) {};

   ~PythonQtShell_QPaintEngineState();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPaintEngineState : public QObject
{ Q_OBJECT
public:
public slots:
QPaintEngineState* new_QPaintEngineState();
void delete_QPaintEngineState(QPaintEngineState* obj) { delete obj; } 
   QBrush  backgroundBrush(QPaintEngineState* theWrappedObject) const;
   Qt::BGMode  backgroundMode(QPaintEngineState* theWrappedObject) const;
   QBrush  brush(QPaintEngineState* theWrappedObject) const;
   bool  brushNeedsResolving(QPaintEngineState* theWrappedObject) const;
   QPointF  brushOrigin(QPaintEngineState* theWrappedObject) const;
   Qt::ClipOperation  clipOperation(QPaintEngineState* theWrappedObject) const;
   QPainterPath  clipPath(QPaintEngineState* theWrappedObject) const;
   QRegion  clipRegion(QPaintEngineState* theWrappedObject) const;
   QPainter::CompositionMode  compositionMode(QPaintEngineState* theWrappedObject) const;
   QFont  font(QPaintEngineState* theWrappedObject) const;
   bool  isClipEnabled(QPaintEngineState* theWrappedObject) const;
   QMatrix  matrix(QPaintEngineState* theWrappedObject) const;
   qreal  opacity(QPaintEngineState* theWrappedObject) const;
   QPainter*  painter(QPaintEngineState* theWrappedObject) const;
   QPen  pen(QPaintEngineState* theWrappedObject) const;
   bool  penNeedsResolving(QPaintEngineState* theWrappedObject) const;
   QPainter::RenderHints  renderHints(QPaintEngineState* theWrappedObject) const;
   QPaintEngine::DirtyFlags  state(QPaintEngineState* theWrappedObject) const;
   QTransform  transform(QPaintEngineState* theWrappedObject) const;
};





class PythonQtShell_QPaintEvent : public QPaintEvent
{
public:
    PythonQtShell_QPaintEvent(const QRect&  paintRect):QPaintEvent(paintRect),_wrapper(NULL) {};
    PythonQtShell_QPaintEvent(const QRegion&  paintRegion):QPaintEvent(paintRegion),_wrapper(NULL) {};

   ~PythonQtShell_QPaintEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPaintEvent : public QObject
{ Q_OBJECT
public:
public slots:
QPaintEvent* new_QPaintEvent(const QRect&  paintRect);
QPaintEvent* new_QPaintEvent(const QRegion&  paintRegion);
void delete_QPaintEvent(QPaintEvent* obj) { delete obj; } 
   const QRect*  rect(QPaintEvent* theWrappedObject) const;
   const QRegion*  region(QPaintEvent* theWrappedObject) const;
};





class PythonQtWrapper_QPainter : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CompositionMode RenderHint PixmapFragmentHint )
Q_FLAGS(RenderHints )
enum CompositionMode{
  CompositionMode_SourceOver = QPainter::CompositionMode_SourceOver,   CompositionMode_DestinationOver = QPainter::CompositionMode_DestinationOver,   CompositionMode_Clear = QPainter::CompositionMode_Clear,   CompositionMode_Source = QPainter::CompositionMode_Source,   CompositionMode_Destination = QPainter::CompositionMode_Destination,   CompositionMode_SourceIn = QPainter::CompositionMode_SourceIn,   CompositionMode_DestinationIn = QPainter::CompositionMode_DestinationIn,   CompositionMode_SourceOut = QPainter::CompositionMode_SourceOut,   CompositionMode_DestinationOut = QPainter::CompositionMode_DestinationOut,   CompositionMode_SourceAtop = QPainter::CompositionMode_SourceAtop,   CompositionMode_DestinationAtop = QPainter::CompositionMode_DestinationAtop,   CompositionMode_Xor = QPainter::CompositionMode_Xor,   CompositionMode_Plus = QPainter::CompositionMode_Plus,   CompositionMode_Multiply = QPainter::CompositionMode_Multiply,   CompositionMode_Screen = QPainter::CompositionMode_Screen,   CompositionMode_Overlay = QPainter::CompositionMode_Overlay,   CompositionMode_Darken = QPainter::CompositionMode_Darken,   CompositionMode_Lighten = QPainter::CompositionMode_Lighten,   CompositionMode_ColorDodge = QPainter::CompositionMode_ColorDodge,   CompositionMode_ColorBurn = QPainter::CompositionMode_ColorBurn,   CompositionMode_HardLight = QPainter::CompositionMode_HardLight,   CompositionMode_SoftLight = QPainter::CompositionMode_SoftLight,   CompositionMode_Difference = QPainter::CompositionMode_Difference,   CompositionMode_Exclusion = QPainter::CompositionMode_Exclusion,   RasterOp_SourceOrDestination = QPainter::RasterOp_SourceOrDestination,   RasterOp_SourceAndDestination = QPainter::RasterOp_SourceAndDestination,   RasterOp_SourceXorDestination = QPainter::RasterOp_SourceXorDestination,   RasterOp_NotSourceAndNotDestination = QPainter::RasterOp_NotSourceAndNotDestination,   RasterOp_NotSourceOrNotDestination = QPainter::RasterOp_NotSourceOrNotDestination,   RasterOp_NotSourceXorDestination = QPainter::RasterOp_NotSourceXorDestination,   RasterOp_NotSource = QPainter::RasterOp_NotSource,   RasterOp_NotSourceAndDestination = QPainter::RasterOp_NotSourceAndDestination,   RasterOp_SourceAndNotDestination = QPainter::RasterOp_SourceAndNotDestination};
enum RenderHint{
  Antialiasing = QPainter::Antialiasing,   TextAntialiasing = QPainter::TextAntialiasing,   SmoothPixmapTransform = QPainter::SmoothPixmapTransform,   HighQualityAntialiasing = QPainter::HighQualityAntialiasing,   NonCosmeticDefaultPen = QPainter::NonCosmeticDefaultPen};
enum PixmapFragmentHint{
  OpaqueHint = QPainter::OpaqueHint};
Q_DECLARE_FLAGS(RenderHints, RenderHint)
public slots:
QPainter* new_QPainter();
QPainter* new_QPainter(QPaintDevice*  arg__1);
void delete_QPainter(QPainter* obj) { delete obj; } 
   const QBrush*  background(QPainter* theWrappedObject) const;
   Qt::BGMode  backgroundMode(QPainter* theWrappedObject) const;
   bool  begin(QPainter* theWrappedObject, QPaintDevice*  arg__1);
   void beginNativePainting(QPainter* theWrappedObject);
   QRect  boundingRect(QPainter* theWrappedObject, const QRect&  rect, int  flags, const QString&  text);
   QRectF  boundingRect(QPainter* theWrappedObject, const QRectF&  rect, const QString&  text, const QTextOption&  o = QTextOption());
   QRectF  boundingRect(QPainter* theWrappedObject, const QRectF&  rect, int  flags, const QString&  text);
   QRect  boundingRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text);
   const QBrush*  brush(QPainter* theWrappedObject) const;
   QPoint  brushOrigin(QPainter* theWrappedObject) const;
   QRectF  clipBoundingRect(QPainter* theWrappedObject) const;
   QPainterPath  clipPath(QPainter* theWrappedObject) const;
   QRegion  clipRegion(QPainter* theWrappedObject) const;
   QMatrix  combinedMatrix(QPainter* theWrappedObject) const;
   QTransform  combinedTransform(QPainter* theWrappedObject) const;
   QPainter::CompositionMode  compositionMode(QPainter* theWrappedObject) const;
   QPaintDevice*  device(QPainter* theWrappedObject) const;
   const QMatrix*  deviceMatrix(QPainter* theWrappedObject) const;
   const QTransform*  deviceTransform(QPainter* theWrappedObject) const;
   void drawArc(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen);
   void drawArc(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen);
   void drawArc(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen);
   void drawChord(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen);
   void drawChord(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen);
   void drawChord(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen);
   void drawConvexPolygon(QPainter* theWrappedObject, const QPolygon&  polygon);
   void drawConvexPolygon(QPainter* theWrappedObject, const QPolygonF&  polygon);
   void drawEllipse(QPainter* theWrappedObject, const QPoint&  center, int  rx, int  ry);
   void drawEllipse(QPainter* theWrappedObject, const QPointF&  center, qreal  rx, qreal  ry);
   void drawEllipse(QPainter* theWrappedObject, const QRect&  r);
   void drawEllipse(QPainter* theWrappedObject, const QRectF&  r);
   void drawEllipse(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void drawImage(QPainter* theWrappedObject, const QPoint&  p, const QImage&  image);
   void drawImage(QPainter* theWrappedObject, const QPoint&  p, const QImage&  image, const QRect&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawImage(QPainter* theWrappedObject, const QPointF&  p, const QImage&  image);
   void drawImage(QPainter* theWrappedObject, const QPointF&  p, const QImage&  image, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawImage(QPainter* theWrappedObject, const QRect&  r, const QImage&  image);
   void drawImage(QPainter* theWrappedObject, const QRect&  targetRect, const QImage&  image, const QRect&  sourceRect, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawImage(QPainter* theWrappedObject, const QRectF&  r, const QImage&  image);
   void drawImage(QPainter* theWrappedObject, const QRectF&  targetRect, const QImage&  image, const QRectF&  sourceRect, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawImage(QPainter* theWrappedObject, int  x, int  y, const QImage&  image, int  sx = 0, int  sy = 0, int  sw = -1, int  sh = -1, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawLine(QPainter* theWrappedObject, const QLine&  line);
   void drawLine(QPainter* theWrappedObject, const QLineF&  line);
   void drawLine(QPainter* theWrappedObject, const QPoint&  p1, const QPoint&  p2);
   void drawLine(QPainter* theWrappedObject, const QPointF&  p1, const QPointF&  p2);
   void drawLine(QPainter* theWrappedObject, int  x1, int  y1, int  x2, int  y2);
   void drawLines(QPainter* theWrappedObject, const QVector<QLine >&  lines);
   void drawLines(QPainter* theWrappedObject, const QVector<QLineF >&  lines);
   void drawLines(QPainter* theWrappedObject, const QVector<QPoint >&  pointPairs);
   void drawLines(QPainter* theWrappedObject, const QVector<QPointF >&  pointPairs);
   void drawPath(QPainter* theWrappedObject, const QPainterPath&  path);
   void drawPicture(QPainter* theWrappedObject, const QPoint&  p, const QPicture&  picture);
   void drawPicture(QPainter* theWrappedObject, const QPointF&  p, const QPicture&  picture);
   void drawPicture(QPainter* theWrappedObject, int  x, int  y, const QPicture&  picture);
   void drawPie(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen);
   void drawPie(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen);
   void drawPie(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen);
   void drawPixmap(QPainter* theWrappedObject, const QPoint&  p, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, const QPoint&  p, const QPixmap&  pm, const QRect&  sr);
   void drawPixmap(QPainter* theWrappedObject, const QPointF&  p, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, const QPointF&  p, const QPixmap&  pm, const QRectF&  sr);
   void drawPixmap(QPainter* theWrappedObject, const QRect&  r, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, const QRect&  targetRect, const QPixmap&  pixmap, const QRect&  sourceRect);
   void drawPixmap(QPainter* theWrappedObject, const QRectF&  targetRect, const QPixmap&  pixmap, const QRectF&  sourceRect);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, const QPixmap&  pm, int  sx, int  sy, int  sw, int  sh);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  pm, int  sx, int  sy, int  sw, int  sh);
   void drawPoint(QPainter* theWrappedObject, const QPoint&  p);
   void drawPoint(QPainter* theWrappedObject, const QPointF&  pt);
   void drawPoint(QPainter* theWrappedObject, int  x, int  y);
   void drawPoints(QPainter* theWrappedObject, const QPolygon&  points);
   void drawPoints(QPainter* theWrappedObject, const QPolygonF&  points);
   void drawPolygon(QPainter* theWrappedObject, const QPolygon&  polygon, Qt::FillRule  fillRule = Qt::OddEvenFill);
   void drawPolygon(QPainter* theWrappedObject, const QPolygonF&  polygon, Qt::FillRule  fillRule = Qt::OddEvenFill);
   void drawPolyline(QPainter* theWrappedObject, const QPolygon&  polygon);
   void drawPolyline(QPainter* theWrappedObject, const QPolygonF&  polyline);
   void drawRect(QPainter* theWrappedObject, const QRect&  rect);
   void drawRect(QPainter* theWrappedObject, const QRectF&  rect);
   void drawRect(QPainter* theWrappedObject, int  x1, int  y1, int  w, int  h);
   void drawRects(QPainter* theWrappedObject, const QVector<QRect >&  rectangles);
   void drawRects(QPainter* theWrappedObject, const QVector<QRectF >&  rectangles);
   void drawRoundRect(QPainter* theWrappedObject, const QRect&  r, int  xround = 25, int  yround = 25);
   void drawRoundRect(QPainter* theWrappedObject, const QRectF&  r, int  xround = 25, int  yround = 25);
   void drawRoundRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  arg__5 = 25, int  arg__6 = 25);
   void drawRoundedRect(QPainter* theWrappedObject, const QRect&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void drawRoundedRect(QPainter* theWrappedObject, const QRectF&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void drawRoundedRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void drawStaticText(QPainter* theWrappedObject, const QPoint&  topLeftPosition, const QStaticText&  staticText);
   void drawStaticText(QPainter* theWrappedObject, const QPointF&  topLeftPosition, const QStaticText&  staticText);
   void drawStaticText(QPainter* theWrappedObject, int  left, int  top, const QStaticText&  staticText);
   void drawText(QPainter* theWrappedObject, const QPoint&  p, const QString&  s);
   void drawText(QPainter* theWrappedObject, const QPointF&  p, const QString&  s);
   void drawText(QPainter* theWrappedObject, const QRect&  r, int  flags, const QString&  text, QRect*  br = 0);
   void drawText(QPainter* theWrappedObject, const QRectF&  r, const QString&  text, const QTextOption&  o = QTextOption());
   void drawText(QPainter* theWrappedObject, const QRectF&  r, int  flags, const QString&  text, QRectF*  br = 0);
   void drawText(QPainter* theWrappedObject, int  x, int  y, const QString&  s);
   void drawText(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text, QRect*  br = 0);
   void drawTextItem(QPainter* theWrappedObject, const QPoint&  p, const QTextItem&  ti);
   void drawTextItem(QPainter* theWrappedObject, const QPointF&  p, const QTextItem&  ti);
   void drawTextItem(QPainter* theWrappedObject, int  x, int  y, const QTextItem&  ti);
   void drawTiledPixmap(QPainter* theWrappedObject, const QRect&  arg__1, const QPixmap&  arg__2, const QPoint&  arg__3 = QPoint());
   void drawTiledPixmap(QPainter* theWrappedObject, const QRectF&  rect, const QPixmap&  pm, const QPointF&  offset = QPointF());
   void drawTiledPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  arg__5, int  sx = 0, int  sy = 0);
   bool  end(QPainter* theWrappedObject);
   void endNativePainting(QPainter* theWrappedObject);
   void eraseRect(QPainter* theWrappedObject, const QRect&  arg__1);
   void eraseRect(QPainter* theWrappedObject, const QRectF&  arg__1);
   void eraseRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void fillPath(QPainter* theWrappedObject, const QPainterPath&  path, const QBrush&  brush);
   void fillRect(QPainter* theWrappedObject, const QRect&  arg__1, const QBrush&  arg__2);
   void fillRect(QPainter* theWrappedObject, const QRect&  arg__1, const QColor&  color);
   void fillRect(QPainter* theWrappedObject, const QRect&  r, Qt::BrushStyle  style);
   void fillRect(QPainter* theWrappedObject, const QRect&  r, Qt::GlobalColor  c);
   void fillRect(QPainter* theWrappedObject, const QRectF&  arg__1, const QBrush&  arg__2);
   void fillRect(QPainter* theWrappedObject, const QRectF&  arg__1, const QColor&  color);
   void fillRect(QPainter* theWrappedObject, const QRectF&  r, Qt::BrushStyle  style);
   void fillRect(QPainter* theWrappedObject, const QRectF&  r, Qt::GlobalColor  c);
   void fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, Qt::BrushStyle  style);
   void fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, Qt::GlobalColor  c);
   void fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QBrush&  arg__5);
   void fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QColor&  color);
   const QFont*  font(QPainter* theWrappedObject) const;
   QFontInfo  fontInfo(QPainter* theWrappedObject) const;
   QFontMetrics  fontMetrics(QPainter* theWrappedObject) const;
   bool  hasClipping(QPainter* theWrappedObject) const;
   void initFrom(QPainter* theWrappedObject, const QWidget*  widget);
   bool  isActive(QPainter* theWrappedObject) const;
   Qt::LayoutDirection  layoutDirection(QPainter* theWrappedObject) const;
   qreal  opacity(QPainter* theWrappedObject) const;
   QPaintEngine*  paintEngine(QPainter* theWrappedObject) const;
   const QPen*  pen(QPainter* theWrappedObject) const;
   QPaintDevice*  static_QPainter_redirected(const QPaintDevice*  device, QPoint*  offset = 0);
   QPainter::RenderHints  renderHints(QPainter* theWrappedObject) const;
   void resetMatrix(QPainter* theWrappedObject);
   void resetTransform(QPainter* theWrappedObject);
   void restore(QPainter* theWrappedObject);
   void static_QPainter_restoreRedirected(const QPaintDevice*  device);
   void rotate(QPainter* theWrappedObject, qreal  a);
   void save(QPainter* theWrappedObject);
   void scale(QPainter* theWrappedObject, qreal  sx, qreal  sy);
   void setBackground(QPainter* theWrappedObject, const QBrush&  bg);
   void setBackgroundMode(QPainter* theWrappedObject, Qt::BGMode  mode);
   void setBrush(QPainter* theWrappedObject, const QBrush&  brush);
   void setBrushOrigin(QPainter* theWrappedObject, const QPoint&  arg__1);
   void setBrushOrigin(QPainter* theWrappedObject, const QPointF&  arg__1);
   void setBrushOrigin(QPainter* theWrappedObject, int  x, int  y);
   void setClipPath(QPainter* theWrappedObject, const QPainterPath&  path, Qt::ClipOperation  op = Qt::ReplaceClip);
   void setClipRect(QPainter* theWrappedObject, const QRect&  arg__1, Qt::ClipOperation  op = Qt::ReplaceClip);
   void setClipRect(QPainter* theWrappedObject, const QRectF&  arg__1, Qt::ClipOperation  op = Qt::ReplaceClip);
   void setClipRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, Qt::ClipOperation  op = Qt::ReplaceClip);
   void setClipRegion(QPainter* theWrappedObject, const QRegion&  arg__1, Qt::ClipOperation  op = Qt::ReplaceClip);
   void setClipping(QPainter* theWrappedObject, bool  enable);
   void setCompositionMode(QPainter* theWrappedObject, QPainter::CompositionMode  mode);
   void setFont(QPainter* theWrappedObject, const QFont&  f);
   void setLayoutDirection(QPainter* theWrappedObject, Qt::LayoutDirection  direction);
   void setOpacity(QPainter* theWrappedObject, qreal  opacity);
   void setPen(QPainter* theWrappedObject, Qt::PenStyle  style);
   void setPen(QPainter* theWrappedObject, const QColor&  color);
   void setPen(QPainter* theWrappedObject, const QPen&  pen);
   void static_QPainter_setRedirected(const QPaintDevice*  device, QPaintDevice*  replacement, const QPoint&  offset = QPoint());
   void setRenderHint(QPainter* theWrappedObject, QPainter::RenderHint  hint, bool  on = true);
   void setRenderHints(QPainter* theWrappedObject, QPainter::RenderHints  hints, bool  on = true);
   void setTransform(QPainter* theWrappedObject, const QTransform&  transform, bool  combine = false);
   void setViewTransformEnabled(QPainter* theWrappedObject, bool  enable);
   void setViewport(QPainter* theWrappedObject, const QRect&  viewport);
   void setViewport(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void setWindow(QPainter* theWrappedObject, const QRect&  window);
   void setWindow(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void setWorldMatrix(QPainter* theWrappedObject, const QMatrix&  matrix, bool  combine = false);
   void setWorldMatrixEnabled(QPainter* theWrappedObject, bool  enabled);
   void setWorldTransform(QPainter* theWrappedObject, const QTransform&  matrix, bool  combine = false);
   void shear(QPainter* theWrappedObject, qreal  sh, qreal  sv);
   void strokePath(QPainter* theWrappedObject, const QPainterPath&  path, const QPen&  pen);
   bool  testRenderHint(QPainter* theWrappedObject, QPainter::RenderHint  hint) const;
   const QTransform*  transform(QPainter* theWrappedObject) const;
   void translate(QPainter* theWrappedObject, const QPoint&  offset);
   void translate(QPainter* theWrappedObject, const QPointF&  offset);
   void translate(QPainter* theWrappedObject, qreal  dx, qreal  dy);
   bool  viewTransformEnabled(QPainter* theWrappedObject) const;
   QRect  viewport(QPainter* theWrappedObject) const;
   QRect  window(QPainter* theWrappedObject) const;
   const QMatrix*  worldMatrix(QPainter* theWrappedObject) const;
   bool  worldMatrixEnabled(QPainter* theWrappedObject) const;
   const QTransform*  worldTransform(QPainter* theWrappedObject) const;
};





class PythonQtWrapper_QPainterPath : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ElementType )
enum ElementType{
  MoveToElement = QPainterPath::MoveToElement,   LineToElement = QPainterPath::LineToElement,   CurveToElement = QPainterPath::CurveToElement,   CurveToDataElement = QPainterPath::CurveToDataElement};
public slots:
QPainterPath* new_QPainterPath();
QPainterPath* new_QPainterPath(const QPainterPath&  other);
QPainterPath* new_QPainterPath(const QPointF&  startPoint);
void delete_QPainterPath(QPainterPath* obj) { delete obj; } 
   void addEllipse(QPainterPath* theWrappedObject, const QPointF&  center, qreal  rx, qreal  ry);
   void addEllipse(QPainterPath* theWrappedObject, const QRectF&  rect);
   void addEllipse(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void addPath(QPainterPath* theWrappedObject, const QPainterPath&  path);
   void addPolygon(QPainterPath* theWrappedObject, const QPolygonF&  polygon);
   void addRect(QPainterPath* theWrappedObject, const QRectF&  rect);
   void addRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void addRegion(QPainterPath* theWrappedObject, const QRegion&  region);
   void addRoundRect(QPainterPath* theWrappedObject, const QRectF&  rect, int  roundness);
   void addRoundRect(QPainterPath* theWrappedObject, const QRectF&  rect, int  xRnd, int  yRnd);
   void addRoundRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  roundness);
   void addRoundRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xRnd, int  yRnd);
   void addRoundedRect(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void addRoundedRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void addText(QPainterPath* theWrappedObject, const QPointF&  point, const QFont&  f, const QString&  text);
   void addText(QPainterPath* theWrappedObject, qreal  x, qreal  y, const QFont&  f, const QString&  text);
   qreal  angleAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   void arcMoveTo(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  angle);
   void arcMoveTo(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  angle);
   void arcTo(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  startAngle, qreal  arcLength);
   void arcTo(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  startAngle, qreal  arcLength);
   QRectF  boundingRect(QPainterPath* theWrappedObject) const;
   void closeSubpath(QPainterPath* theWrappedObject);
   void connectPath(QPainterPath* theWrappedObject, const QPainterPath&  path);
   bool  contains(QPainterPath* theWrappedObject, const QPainterPath&  p) const;
   bool  contains(QPainterPath* theWrappedObject, const QPointF&  pt) const;
   bool  contains(QPainterPath* theWrappedObject, const QRectF&  rect) const;
   QRectF  controlPointRect(QPainterPath* theWrappedObject) const;
   void cubicTo(QPainterPath* theWrappedObject, const QPointF&  ctrlPt1, const QPointF&  ctrlPt2, const QPointF&  endPt);
   void cubicTo(QPainterPath* theWrappedObject, qreal  ctrlPt1x, qreal  ctrlPt1y, qreal  ctrlPt2x, qreal  ctrlPt2y, qreal  endPtx, qreal  endPty);
   QPointF  currentPosition(QPainterPath* theWrappedObject) const;
   const QPainterPath::Element*  elementAt(QPainterPath* theWrappedObject, int  i) const;
   int  elementCount(QPainterPath* theWrappedObject) const;
   Qt::FillRule  fillRule(QPainterPath* theWrappedObject) const;
   QPainterPath  intersected(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   bool  intersects(QPainterPath* theWrappedObject, const QPainterPath&  p) const;
   bool  intersects(QPainterPath* theWrappedObject, const QRectF&  rect) const;
   bool  isEmpty(QPainterPath* theWrappedObject) const;
   qreal  length(QPainterPath* theWrappedObject) const;
   void lineTo(QPainterPath* theWrappedObject, const QPointF&  p);
   void lineTo(QPainterPath* theWrappedObject, qreal  x, qreal  y);
   void moveTo(QPainterPath* theWrappedObject, const QPointF&  p);
   void moveTo(QPainterPath* theWrappedObject, qreal  x, qreal  y);
   bool  __ne__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   QPainterPath  __and__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   QPainterPath*  __iand__(QPainterPath* theWrappedObject, const QPainterPath&  other);
   QPainterPath  __mul__(QPainterPath* theWrappedObject, const QMatrix&  m);
   QPainterPath  __mul__(QPainterPath* theWrappedObject, const QTransform&  m);
   QPainterPath  __add__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   QPainterPath*  __iadd__(QPainterPath* theWrappedObject, const QPainterPath&  other);
   QPainterPath  __sub__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   QPainterPath*  __isub__(QPainterPath* theWrappedObject, const QPainterPath&  other);
   void writeTo(QPainterPath* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   void readFrom(QPainterPath* theWrappedObject, QDataStream&  arg__1);
   QPainterPath  __or__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   QPainterPath*  __ior__(QPainterPath* theWrappedObject, const QPainterPath&  other);
   qreal  percentAtLength(QPainterPath* theWrappedObject, qreal  t) const;
   QPointF  pointAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   void quadTo(QPainterPath* theWrappedObject, const QPointF&  ctrlPt, const QPointF&  endPt);
   void quadTo(QPainterPath* theWrappedObject, qreal  ctrlPtx, qreal  ctrlPty, qreal  endPtx, qreal  endPty);
   void setElementPositionAt(QPainterPath* theWrappedObject, int  i, qreal  x, qreal  y);
   void setFillRule(QPainterPath* theWrappedObject, Qt::FillRule  fillRule);
   QPainterPath  simplified(QPainterPath* theWrappedObject) const;
   qreal  slopeAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   QPainterPath  subtracted(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   QPainterPath  subtractedInverted(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   void swap(QPainterPath* theWrappedObject, QPainterPath&  other);
   QPolygonF  toFillPolygon(QPainterPath* theWrappedObject, const QMatrix&  matrix = QMatrix()) const;
   QPolygonF  toFillPolygon(QPainterPath* theWrappedObject, const QTransform&  matrix) const;
   QList<QPolygonF >  toFillPolygons(QPainterPath* theWrappedObject, const QMatrix&  matrix = QMatrix()) const;
   QList<QPolygonF >  toFillPolygons(QPainterPath* theWrappedObject, const QTransform&  matrix) const;
   QPainterPath  toReversed(QPainterPath* theWrappedObject) const;
   QList<QPolygonF >  toSubpathPolygons(QPainterPath* theWrappedObject, const QMatrix&  matrix = QMatrix()) const;
   QList<QPolygonF >  toSubpathPolygons(QPainterPath* theWrappedObject, const QTransform&  matrix) const;
   void translate(QPainterPath* theWrappedObject, const QPointF&  offset);
   void translate(QPainterPath* theWrappedObject, qreal  dx, qreal  dy);
   QPainterPath  translated(QPainterPath* theWrappedObject, const QPointF&  offset) const;
   QPainterPath  translated(QPainterPath* theWrappedObject, qreal  dx, qreal  dy) const;
   QPainterPath  united(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
    QString py_toString(QPainterPath*);
};





class PythonQtWrapper_QPainterPathStroker : public QObject
{ Q_OBJECT
public:
public slots:
QPainterPathStroker* new_QPainterPathStroker();
void delete_QPainterPathStroker(QPainterPathStroker* obj) { delete obj; } 
   Qt::PenCapStyle  capStyle(QPainterPathStroker* theWrappedObject) const;
   QPainterPath  createStroke(QPainterPathStroker* theWrappedObject, const QPainterPath&  path) const;
   qreal  curveThreshold(QPainterPathStroker* theWrappedObject) const;
   qreal  dashOffset(QPainterPathStroker* theWrappedObject) const;
   QVector<qreal >  dashPattern(QPainterPathStroker* theWrappedObject) const;
   Qt::PenJoinStyle  joinStyle(QPainterPathStroker* theWrappedObject) const;
   qreal  miterLimit(QPainterPathStroker* theWrappedObject) const;
   void setCapStyle(QPainterPathStroker* theWrappedObject, Qt::PenCapStyle  style);
   void setCurveThreshold(QPainterPathStroker* theWrappedObject, qreal  threshold);
   void setDashOffset(QPainterPathStroker* theWrappedObject, qreal  offset);
   void setDashPattern(QPainterPathStroker* theWrappedObject, Qt::PenStyle  arg__1);
   void setDashPattern(QPainterPathStroker* theWrappedObject, const QVector<qreal >&  dashPattern);
   void setJoinStyle(QPainterPathStroker* theWrappedObject, Qt::PenJoinStyle  style);
   void setMiterLimit(QPainterPathStroker* theWrappedObject, qreal  length);
   void setWidth(QPainterPathStroker* theWrappedObject, qreal  width);
   qreal  width(QPainterPathStroker* theWrappedObject) const;
};





class PythonQtShell_QPanGesture : public QPanGesture
{
public:
    PythonQtShell_QPanGesture(QObject*  parent = 0):QPanGesture(parent),_wrapper(NULL) {};

   ~PythonQtShell_QPanGesture();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPanGesture : public QObject
{ Q_OBJECT
public:
public slots:
QPanGesture* new_QPanGesture(QObject*  parent = 0);
void delete_QPanGesture(QPanGesture* obj) { delete obj; } 
   qreal  acceleration(QPanGesture* theWrappedObject) const;
   QPointF  delta(QPanGesture* theWrappedObject) const;
   QPointF  lastOffset(QPanGesture* theWrappedObject) const;
   QPointF  offset(QPanGesture* theWrappedObject) const;
   void setAcceleration(QPanGesture* theWrappedObject, qreal  value);
   void setLastOffset(QPanGesture* theWrappedObject, const QPointF&  value);
   void setOffset(QPanGesture* theWrappedObject, const QPointF&  value);
};





class PythonQtShell_QPicture : public QPicture
{
public:
    PythonQtShell_QPicture(const QPicture&  arg__1):QPicture(arg__1),_wrapper(NULL) {};
    PythonQtShell_QPicture(int  formatVersion = -1):QPicture(formatVersion),_wrapper(NULL) {};

   ~PythonQtShell_QPicture();

virtual int  devType() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  m) const;
virtual QPaintEngine*  paintEngine() const;
virtual void setData(const char*  data, uint  size);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPicture : public QPicture
{ public:
inline int  promoted_devType() const { return QPicture::devType(); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  m) const { return QPicture::metric(m); }
inline QPaintEngine*  promoted_paintEngine() const { return QPicture::paintEngine(); }
};

class PythonQtWrapper_QPicture : public QObject
{ Q_OBJECT
public:
public slots:
QPicture* new_QPicture(const QPicture&  arg__1);
QPicture* new_QPicture(int  formatVersion = -1);
void delete_QPicture(QPicture* obj) { delete obj; } 
   QRect  boundingRect(QPicture* theWrappedObject) const;
   const char*  data(QPicture* theWrappedObject) const;
   int  devType(QPicture* theWrappedObject) const;
   bool  isNull(QPicture* theWrappedObject) const;
   bool  load(QPicture* theWrappedObject, QIODevice*  dev, const char*  format = 0);
   bool  load(QPicture* theWrappedObject, const QString&  fileName, const char*  format = 0);
   int  metric(QPicture* theWrappedObject, QPaintDevice::PaintDeviceMetric  m) const;
   void writeTo(QPicture* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QPicture* theWrappedObject, QDataStream&  arg__1);
   QPaintEngine*  paintEngine(QPicture* theWrappedObject) const;
   bool  play(QPicture* theWrappedObject, QPainter*  p);
   bool  save(QPicture* theWrappedObject, QIODevice*  dev, const char*  format = 0);
   bool  save(QPicture* theWrappedObject, const QString&  fileName, const char*  format = 0);
   void setBoundingRect(QPicture* theWrappedObject, const QRect&  r);
   uint  size(QPicture* theWrappedObject) const;
   void swap(QPicture* theWrappedObject, QPicture&  other);
    bool __nonzero__(QPicture* obj) { return !obj->isNull(); }
};


