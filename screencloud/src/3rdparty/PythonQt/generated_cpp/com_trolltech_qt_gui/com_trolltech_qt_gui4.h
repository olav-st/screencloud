#include <PythonQt.h>
#include <QColor>
#include <QImage>
#include <QObject>
#include <QRect>
#include <QSize>
#include <QStringList>
#include <QTextFormat>
#include <QVariant>
#include <qabstractanimation.h>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qabstractstate.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qboxlayout.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qgridlayout.h>
#include <qgroupbox.h>
#include <qheaderview.h>
#include <qicon.h>
#include <qiconengine.h>
#include <qiconengineplugin.h>
#include <qimage.h>
#include <qimageiohandler.h>
#include <qimagereader.h>
#include <qimagewriter.h>
#include <qinputcontext.h>
#include <qinputcontextfactory.h>
#include <qinputcontextplugin.h>
#include <qinputdialog.h>
#include <qiodevice.h>
#include <qitemdelegate.h>
#include <qitemeditorfactory.h>
#include <qitemselectionmodel.h>
#include <qkeyeventtransition.h>
#include <qkeysequence.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlcdnumber.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmovie.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpicture.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstate.h>
#include <qstatemachine.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtextformat.h>
#include <qvalidator.h>
#include <qvector.h>
#include <qwidget.h>



class PythonQtShell_QGridLayout : public QGridLayout
{
public:
    PythonQtShell_QGridLayout():QGridLayout(),_wrapper(NULL) {};
    PythonQtShell_QGridLayout(QWidget*  parent):QGridLayout(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGridLayout();

virtual void addItem(QLayoutItem*  arg__1);
virtual void childEvent(QChildEvent*  e);
virtual int  count() const;
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual Qt::Orientations  expandingDirections() const;
virtual QRect  geometry() const;
virtual int  indexOf(QWidget*  arg__1) const;
virtual void invalidate();
virtual bool  isEmpty() const;
virtual QLayoutItem*  itemAt(int  index) const;
virtual QLayout*  layout();
virtual QSize  maximumSize() const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QLayoutItem*  takeAt(int  index);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGridLayout : public QGridLayout
{ public:
inline void promoted_addItem(QLayoutItem*  arg__1) { QGridLayout::addItem(arg__1); }
inline int  promoted_count() const { return QGridLayout::count(); }
inline Qt::Orientations  promoted_expandingDirections() const { return QGridLayout::expandingDirections(); }
inline void promoted_invalidate() { QGridLayout::invalidate(); }
inline QLayoutItem*  promoted_itemAt(int  index) const { return QGridLayout::itemAt(index); }
inline QSize  promoted_maximumSize() const { return QGridLayout::maximumSize(); }
inline QSize  promoted_minimumSize() const { return QGridLayout::minimumSize(); }
inline void promoted_setGeometry(const QRect&  arg__1) { QGridLayout::setGeometry(arg__1); }
inline QLayoutItem*  promoted_takeAt(int  index) { return QGridLayout::takeAt(index); }
};

class PythonQtWrapper_QGridLayout : public QObject
{ Q_OBJECT
public:
public slots:
QGridLayout* new_QGridLayout();
QGridLayout* new_QGridLayout(QWidget*  parent);
void delete_QGridLayout(QGridLayout* obj) { delete obj; } 
   void addItem(QGridLayout* theWrappedObject, QLayoutItem*  arg__1);
   void addItem(QGridLayout* theWrappedObject, QLayoutItem*  item, int  row, int  column, int  rowSpan = 1, int  columnSpan = 1, Qt::Alignment  arg__6 = 0);
   void addLayout(QGridLayout* theWrappedObject, QLayout*  arg__1, int  row, int  column, Qt::Alignment  arg__4 = 0);
   void addLayout(QGridLayout* theWrappedObject, QLayout*  arg__1, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6 = 0);
   void addWidget(QGridLayout* theWrappedObject, QWidget*  arg__1, int  row, int  column, Qt::Alignment  arg__4 = 0);
   void addWidget(QGridLayout* theWrappedObject, QWidget*  arg__1, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6 = 0);
   QRect  cellRect(QGridLayout* theWrappedObject, int  row, int  column) const;
   int  columnCount(QGridLayout* theWrappedObject) const;
   int  columnMinimumWidth(QGridLayout* theWrappedObject, int  column) const;
   int  columnStretch(QGridLayout* theWrappedObject, int  column) const;
   int  count(QGridLayout* theWrappedObject) const;
   Qt::Orientations  expandingDirections(QGridLayout* theWrappedObject) const;
   void getItemPosition(QGridLayout* theWrappedObject, int  idx, int*  row, int*  column, int*  rowSpan, int*  columnSpan);
   bool  hasHeightForWidth(QGridLayout* theWrappedObject) const;
   int  heightForWidth(QGridLayout* theWrappedObject, int  arg__1) const;
   int  horizontalSpacing(QGridLayout* theWrappedObject) const;
   void invalidate(QGridLayout* theWrappedObject);
   QLayoutItem*  itemAt(QGridLayout* theWrappedObject, int  index) const;
   QLayoutItem*  itemAtPosition(QGridLayout* theWrappedObject, int  row, int  column) const;
   QSize  maximumSize(QGridLayout* theWrappedObject) const;
   int  minimumHeightForWidth(QGridLayout* theWrappedObject, int  arg__1) const;
   QSize  minimumSize(QGridLayout* theWrappedObject) const;
   Qt::Corner  originCorner(QGridLayout* theWrappedObject) const;
   int  rowCount(QGridLayout* theWrappedObject) const;
   int  rowMinimumHeight(QGridLayout* theWrappedObject, int  row) const;
   int  rowStretch(QGridLayout* theWrappedObject, int  row) const;
   void setColumnMinimumWidth(QGridLayout* theWrappedObject, int  column, int  minSize);
   void setColumnStretch(QGridLayout* theWrappedObject, int  column, int  stretch);
   void setDefaultPositioning(QGridLayout* theWrappedObject, int  n, Qt::Orientation  orient);
   void setGeometry(QGridLayout* theWrappedObject, const QRect&  arg__1);
   void setHorizontalSpacing(QGridLayout* theWrappedObject, int  spacing);
   void setOriginCorner(QGridLayout* theWrappedObject, Qt::Corner  arg__1);
   void setRowMinimumHeight(QGridLayout* theWrappedObject, int  row, int  minSize);
   void setRowStretch(QGridLayout* theWrappedObject, int  row, int  stretch);
   void setSpacing(QGridLayout* theWrappedObject, int  spacing);
   void setVerticalSpacing(QGridLayout* theWrappedObject, int  spacing);
   QSize  sizeHint(QGridLayout* theWrappedObject) const;
   int  spacing(QGridLayout* theWrappedObject) const;
   QLayoutItem*  takeAt(QGridLayout* theWrappedObject, int  index);
   int  verticalSpacing(QGridLayout* theWrappedObject) const;
};





class PythonQtShell_QGroupBox : public QGroupBox
{
public:
    PythonQtShell_QGroupBox(QWidget*  parent = 0):QGroupBox(parent),_wrapper(NULL) {};
    PythonQtShell_QGroupBox(const QString&  title, QWidget*  parent = 0):QGroupBox(title, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGroupBox();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  event);
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
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  event);
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
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGroupBox : public QGroupBox
{ public:
inline void promoted_changeEvent(QEvent*  event) { QGroupBox::changeEvent(event); }
inline void promoted_childEvent(QChildEvent*  event) { QGroupBox::childEvent(event); }
inline bool  promoted_event(QEvent*  event) { return QGroupBox::event(event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QGroupBox::focusInEvent(event); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { QGroupBox::mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { QGroupBox::mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { QGroupBox::mouseReleaseEvent(event); }
inline void promoted_paintEvent(QPaintEvent*  event) { QGroupBox::paintEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QGroupBox::resizeEvent(event); }
};

class PythonQtWrapper_QGroupBox : public QObject
{ Q_OBJECT
public:
public slots:
QGroupBox* new_QGroupBox(QWidget*  parent = 0);
QGroupBox* new_QGroupBox(const QString&  title, QWidget*  parent = 0);
void delete_QGroupBox(QGroupBox* obj) { delete obj; } 
   Qt::Alignment  alignment(QGroupBox* theWrappedObject) const;
   void changeEvent(QGroupBox* theWrappedObject, QEvent*  event);
   void childEvent(QGroupBox* theWrappedObject, QChildEvent*  event);
   bool  event(QGroupBox* theWrappedObject, QEvent*  event);
   void focusInEvent(QGroupBox* theWrappedObject, QFocusEvent*  event);
   bool  isCheckable(QGroupBox* theWrappedObject) const;
   bool  isChecked(QGroupBox* theWrappedObject) const;
   bool  isFlat(QGroupBox* theWrappedObject) const;
   QSize  minimumSizeHint(QGroupBox* theWrappedObject) const;
   void mouseMoveEvent(QGroupBox* theWrappedObject, QMouseEvent*  event);
   void mousePressEvent(QGroupBox* theWrappedObject, QMouseEvent*  event);
   void mouseReleaseEvent(QGroupBox* theWrappedObject, QMouseEvent*  event);
   void paintEvent(QGroupBox* theWrappedObject, QPaintEvent*  event);
   void resizeEvent(QGroupBox* theWrappedObject, QResizeEvent*  event);
   void setAlignment(QGroupBox* theWrappedObject, int  alignment);
   void setCheckable(QGroupBox* theWrappedObject, bool  checkable);
   void setFlat(QGroupBox* theWrappedObject, bool  flat);
   void setTitle(QGroupBox* theWrappedObject, const QString&  title);
   QString  title(QGroupBox* theWrappedObject) const;
};





class PythonQtShell_QHBoxLayout : public QHBoxLayout
{
public:
    PythonQtShell_QHBoxLayout():QHBoxLayout(),_wrapper(NULL) {};
    PythonQtShell_QHBoxLayout(QWidget*  parent):QHBoxLayout(parent),_wrapper(NULL) {};

   ~PythonQtShell_QHBoxLayout();

virtual void addItem(QLayoutItem*  arg__1);
virtual void childEvent(QChildEvent*  e);
virtual int  count() const;
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual Qt::Orientations  expandingDirections() const;
virtual QRect  geometry() const;
virtual int  indexOf(QWidget*  arg__1) const;
virtual void invalidate();
virtual bool  isEmpty() const;
virtual QLayoutItem*  itemAt(int  arg__1) const;
virtual QLayout*  layout();
virtual QSize  maximumSize() const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QLayoutItem*  takeAt(int  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QHBoxLayout : public QObject
{ Q_OBJECT
public:
public slots:
QHBoxLayout* new_QHBoxLayout();
QHBoxLayout* new_QHBoxLayout(QWidget*  parent);
void delete_QHBoxLayout(QHBoxLayout* obj) { delete obj; } 
};





class PythonQtShell_QHeaderView : public QHeaderView
{
public:
    PythonQtShell_QHeaderView(Qt::Orientation  orientation, QWidget*  parent = 0):QHeaderView(orientation, parent),_wrapper(NULL) {};

   ~PythonQtShell_QHeaderView();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void commitData(QWidget*  editor);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  old);
virtual void customEvent(QEvent*  arg__1);
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
virtual int  devType() const;
virtual void doItemsLayout();
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
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
virtual void mouseDoubleClickEvent(QMouseEvent*  e);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
virtual void paintSection(QPainter*  painter, const QRect&  rect, int  logicalIndex) const;
virtual void reset();
virtual void resizeEvent(QResizeEvent*  event);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint);
virtual QSize  sectionSizeFromContents(int  logicalIndex) const;
virtual void selectAll();
virtual QList<QModelIndex >  selectedIndexes() const;
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event) const;
virtual void setModel(QAbstractItemModel*  model);
virtual void setRootIndex(const QModelIndex&  index);
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  flags);
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual void showEvent(QShowEvent*  arg__1);
virtual int  sizeHintForColumn(int  column) const;
virtual int  sizeHintForRow(int  row) const;
virtual void startDrag(Qt::DropActions  supportedActions);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  event);
virtual void updateEditorData();
virtual void updateEditorGeometries();
virtual void updateGeometries();
virtual int  verticalOffset() const;
virtual void verticalScrollbarAction(int  action);
virtual void verticalScrollbarValueChanged(int  value);
virtual QStyleOptionViewItem  viewOptions() const;
virtual bool  viewportEvent(QEvent*  e);
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QHeaderView : public QHeaderView
{ public:
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  old) { QHeaderView::currentChanged(current, old); }
inline void promoted_dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight) { QHeaderView::dataChanged(topLeft, bottomRight); }
inline void promoted_doItemsLayout() { QHeaderView::doItemsLayout(); }
inline bool  promoted_event(QEvent*  e) { return QHeaderView::event(e); }
inline int  promoted_horizontalOffset() const { return QHeaderView::horizontalOffset(); }
inline QModelIndex  promoted_indexAt(const QPoint&  p) const { return QHeaderView::indexAt(p); }
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return QHeaderView::isIndexHidden(index); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  e) { QHeaderView::mouseDoubleClickEvent(e); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { QHeaderView::mouseMoveEvent(e); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { QHeaderView::mousePressEvent(e); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { QHeaderView::mouseReleaseEvent(e); }
inline void promoted_paintEvent(QPaintEvent*  e) { QHeaderView::paintEvent(e); }
inline void promoted_paintSection(QPainter*  painter, const QRect&  rect, int  logicalIndex) const { QHeaderView::paintSection(painter, rect, logicalIndex); }
inline void promoted_reset() { QHeaderView::reset(); }
inline void promoted_rowsInserted(const QModelIndex&  parent, int  start, int  end) { QHeaderView::rowsInserted(parent, start, end); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QHeaderView::scrollContentsBy(dx, dy); }
inline void promoted_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint) { QHeaderView::scrollTo(index, hint); }
inline QSize  promoted_sectionSizeFromContents(int  logicalIndex) const { return QHeaderView::sectionSizeFromContents(logicalIndex); }
inline void promoted_setModel(QAbstractItemModel*  model) { QHeaderView::setModel(model); }
inline void promoted_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  flags) { QHeaderView::setSelection(rect, flags); }
inline void promoted_updateGeometries() { QHeaderView::updateGeometries(); }
inline int  promoted_verticalOffset() const { return QHeaderView::verticalOffset(); }
inline bool  promoted_viewportEvent(QEvent*  e) { return QHeaderView::viewportEvent(e); }
inline QRect  promoted_visualRect(const QModelIndex&  index) const { return QHeaderView::visualRect(index); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return QHeaderView::visualRegionForSelection(selection); }
};

class PythonQtWrapper_QHeaderView : public QObject
{ Q_OBJECT
public:
public slots:
QHeaderView* new_QHeaderView(Qt::Orientation  orientation, QWidget*  parent = 0);
void delete_QHeaderView(QHeaderView* obj) { delete obj; } 
   bool  cascadingSectionResizes(QHeaderView* theWrappedObject) const;
   int  count(QHeaderView* theWrappedObject) const;
   void currentChanged(QHeaderView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  old);
   void dataChanged(QHeaderView* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
   Qt::Alignment  defaultAlignment(QHeaderView* theWrappedObject) const;
   int  defaultSectionSize(QHeaderView* theWrappedObject) const;
   void doItemsLayout(QHeaderView* theWrappedObject);
   bool  event(QHeaderView* theWrappedObject, QEvent*  e);
   int  hiddenSectionCount(QHeaderView* theWrappedObject) const;
   void hideSection(QHeaderView* theWrappedObject, int  logicalIndex);
   bool  highlightSections(QHeaderView* theWrappedObject) const;
   int  horizontalOffset(QHeaderView* theWrappedObject) const;
   QModelIndex  indexAt(QHeaderView* theWrappedObject, const QPoint&  p) const;
   bool  isClickable(QHeaderView* theWrappedObject) const;
   bool  isIndexHidden(QHeaderView* theWrappedObject, const QModelIndex&  index) const;
   bool  isMovable(QHeaderView* theWrappedObject) const;
   bool  isSectionHidden(QHeaderView* theWrappedObject, int  logicalIndex) const;
   bool  isSortIndicatorShown(QHeaderView* theWrappedObject) const;
   int  length(QHeaderView* theWrappedObject) const;
   int  logicalIndex(QHeaderView* theWrappedObject, int  visualIndex) const;
   int  logicalIndexAt(QHeaderView* theWrappedObject, const QPoint&  pos) const;
   int  logicalIndexAt(QHeaderView* theWrappedObject, int  position) const;
   int  logicalIndexAt(QHeaderView* theWrappedObject, int  x, int  y) const;
   int  minimumSectionSize(QHeaderView* theWrappedObject) const;
   void mouseDoubleClickEvent(QHeaderView* theWrappedObject, QMouseEvent*  e);
   void mouseMoveEvent(QHeaderView* theWrappedObject, QMouseEvent*  e);
   void mousePressEvent(QHeaderView* theWrappedObject, QMouseEvent*  e);
   void mouseReleaseEvent(QHeaderView* theWrappedObject, QMouseEvent*  e);
   void moveSection(QHeaderView* theWrappedObject, int  from, int  to);
   int  offset(QHeaderView* theWrappedObject) const;
   Qt::Orientation  orientation(QHeaderView* theWrappedObject) const;
   void paintEvent(QHeaderView* theWrappedObject, QPaintEvent*  e);
   void paintSection(QHeaderView* theWrappedObject, QPainter*  painter, const QRect&  rect, int  logicalIndex) const;
   void reset(QHeaderView* theWrappedObject);
   QHeaderView::ResizeMode  resizeMode(QHeaderView* theWrappedObject, int  logicalIndex) const;
   void resizeSection(QHeaderView* theWrappedObject, int  logicalIndex, int  size);
   void resizeSections(QHeaderView* theWrappedObject, QHeaderView::ResizeMode  mode);
   bool  restoreState(QHeaderView* theWrappedObject, const QByteArray&  state);
   void rowsInserted(QHeaderView* theWrappedObject, const QModelIndex&  parent, int  start, int  end);
   QByteArray  saveState(QHeaderView* theWrappedObject) const;
   void scrollContentsBy(QHeaderView* theWrappedObject, int  dx, int  dy);
   void scrollTo(QHeaderView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint);
   int  sectionPosition(QHeaderView* theWrappedObject, int  logicalIndex) const;
   int  sectionSize(QHeaderView* theWrappedObject, int  logicalIndex) const;
   QSize  sectionSizeFromContents(QHeaderView* theWrappedObject, int  logicalIndex) const;
   int  sectionSizeHint(QHeaderView* theWrappedObject, int  logicalIndex) const;
   int  sectionViewportPosition(QHeaderView* theWrappedObject, int  logicalIndex) const;
   bool  sectionsHidden(QHeaderView* theWrappedObject) const;
   bool  sectionsMoved(QHeaderView* theWrappedObject) const;
   void setCascadingSectionResizes(QHeaderView* theWrappedObject, bool  enable);
   void setClickable(QHeaderView* theWrappedObject, bool  clickable);
   void setDefaultAlignment(QHeaderView* theWrappedObject, Qt::Alignment  alignment);
   void setDefaultSectionSize(QHeaderView* theWrappedObject, int  size);
   void setHighlightSections(QHeaderView* theWrappedObject, bool  highlight);
   void setMinimumSectionSize(QHeaderView* theWrappedObject, int  size);
   void setModel(QHeaderView* theWrappedObject, QAbstractItemModel*  model);
   void setMovable(QHeaderView* theWrappedObject, bool  movable);
   void setResizeMode(QHeaderView* theWrappedObject, QHeaderView::ResizeMode  mode);
   void setResizeMode(QHeaderView* theWrappedObject, int  logicalIndex, QHeaderView::ResizeMode  mode);
   void setSectionHidden(QHeaderView* theWrappedObject, int  logicalIndex, bool  hide);
   void setSelection(QHeaderView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  flags);
   void setSortIndicator(QHeaderView* theWrappedObject, int  logicalIndex, Qt::SortOrder  order);
   void setSortIndicatorShown(QHeaderView* theWrappedObject, bool  show);
   void setStretchLastSection(QHeaderView* theWrappedObject, bool  stretch);
   void showSection(QHeaderView* theWrappedObject, int  logicalIndex);
   QSize  sizeHint(QHeaderView* theWrappedObject) const;
   Qt::SortOrder  sortIndicatorOrder(QHeaderView* theWrappedObject) const;
   int  sortIndicatorSection(QHeaderView* theWrappedObject) const;
   bool  stretchLastSection(QHeaderView* theWrappedObject) const;
   int  stretchSectionCount(QHeaderView* theWrappedObject) const;
   void swapSections(QHeaderView* theWrappedObject, int  first, int  second);
   void updateGeometries(QHeaderView* theWrappedObject);
   int  verticalOffset(QHeaderView* theWrappedObject) const;
   bool  viewportEvent(QHeaderView* theWrappedObject, QEvent*  e);
   int  visualIndex(QHeaderView* theWrappedObject, int  logicalIndex) const;
   int  visualIndexAt(QHeaderView* theWrappedObject, int  position) const;
   QRect  visualRect(QHeaderView* theWrappedObject, const QModelIndex&  index) const;
   QRegion  visualRegionForSelection(QHeaderView* theWrappedObject, const QItemSelection&  selection) const;
};





class PythonQtWrapper_QHelpEvent : public QObject
{ Q_OBJECT
public:
public slots:
QHelpEvent* new_QHelpEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  globalPos);
void delete_QHelpEvent(QHelpEvent* obj) { delete obj; } 
   const QPoint*  globalPos(QHelpEvent* theWrappedObject) const;
   int  globalX(QHelpEvent* theWrappedObject) const;
   int  globalY(QHelpEvent* theWrappedObject) const;
   const QPoint*  pos(QHelpEvent* theWrappedObject) const;
   int  x(QHelpEvent* theWrappedObject) const;
   int  y(QHelpEvent* theWrappedObject) const;
};





class PythonQtWrapper_QHideEvent : public QObject
{ Q_OBJECT
public:
public slots:
QHideEvent* new_QHideEvent();
void delete_QHideEvent(QHideEvent* obj) { delete obj; } 
};





class PythonQtShell_QHoverEvent : public QHoverEvent
{
public:
    PythonQtShell_QHoverEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  oldPos):QHoverEvent(type, pos, oldPos),_wrapper(NULL) {};

   ~PythonQtShell_QHoverEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QHoverEvent : public QObject
{ Q_OBJECT
public:
public slots:
QHoverEvent* new_QHoverEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  oldPos);
void delete_QHoverEvent(QHoverEvent* obj) { delete obj; } 
   const QPoint*  oldPos(QHoverEvent* theWrappedObject) const;
   const QPoint*  pos(QHoverEvent* theWrappedObject) const;
};





class PythonQtWrapper_QIconDragEvent : public QObject
{ Q_OBJECT
public:
public slots:
QIconDragEvent* new_QIconDragEvent();
void delete_QIconDragEvent(QIconDragEvent* obj) { delete obj; } 
};





class PythonQtShell_QIconEngine : public QIconEngine
{
public:
    PythonQtShell_QIconEngine():QIconEngine(),_wrapper(NULL) {};

   ~PythonQtShell_QIconEngine();

virtual QSize  actualSize(const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
virtual void addFile(const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
virtual void addPixmap(const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state);
virtual void paint(QPainter*  painter, const QRect&  rect, QIcon::Mode  mode, QIcon::State  state);
virtual QPixmap  pixmap(const QSize&  size, QIcon::Mode  mode, QIcon::State  state);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QIconEngine : public QIconEngine
{ public:
inline QSize  promoted_actualSize(const QSize&  size, QIcon::Mode  mode, QIcon::State  state) { return QIconEngine::actualSize(size, mode, state); }
inline void promoted_addFile(const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state) { QIconEngine::addFile(fileName, size, mode, state); }
inline void promoted_addPixmap(const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state) { QIconEngine::addPixmap(pixmap, mode, state); }
inline QPixmap  promoted_pixmap(const QSize&  size, QIcon::Mode  mode, QIcon::State  state) { return QIconEngine::pixmap(size, mode, state); }
};

class PythonQtWrapper_QIconEngine : public QObject
{ Q_OBJECT
public:
public slots:
QIconEngine* new_QIconEngine();
void delete_QIconEngine(QIconEngine* obj) { delete obj; } 
   QSize  actualSize(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
   void addFile(QIconEngine* theWrappedObject, const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
   void addPixmap(QIconEngine* theWrappedObject, const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state);
   QPixmap  pixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
};





class PythonQtShell_QIconEnginePluginV2 : public QIconEnginePluginV2
{
public:
    PythonQtShell_QIconEnginePluginV2(QObject*  parent = 0):QIconEnginePluginV2(parent),_wrapper(NULL) {};

   ~PythonQtShell_QIconEnginePluginV2();

virtual void childEvent(QChildEvent*  arg__1);
virtual QIconEngineV2*  create(const QString&  filename = QString());
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QStringList  keys() const;
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QIconEnginePluginV2 : public QObject
{ Q_OBJECT
public:
public slots:
QIconEnginePluginV2* new_QIconEnginePluginV2(QObject*  parent = 0);
void delete_QIconEnginePluginV2(QIconEnginePluginV2* obj) { delete obj; } 
};





class PythonQtShell_QImageIOHandler : public QImageIOHandler
{
public:
    PythonQtShell_QImageIOHandler():QImageIOHandler(),_wrapper(NULL) {};

   ~PythonQtShell_QImageIOHandler();

virtual bool  canRead() const;
virtual int  currentImageNumber() const;
virtual QRect  currentImageRect() const;
virtual int  imageCount() const;
virtual bool  jumpToImage(int  imageNumber);
virtual bool  jumpToNextImage();
virtual int  loopCount() const;
virtual QByteArray  name() const;
virtual int  nextImageDelay() const;
virtual QVariant  option(QImageIOHandler::ImageOption  option) const;
virtual bool  read(QImage*  image);
virtual void setOption(QImageIOHandler::ImageOption  option, const QVariant&  value);
virtual bool  supportsOption(QImageIOHandler::ImageOption  option) const;
virtual bool  write(const QImage&  image);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QImageIOHandler : public QImageIOHandler
{ public:
inline int  promoted_currentImageNumber() const { return QImageIOHandler::currentImageNumber(); }
inline QRect  promoted_currentImageRect() const { return QImageIOHandler::currentImageRect(); }
inline int  promoted_imageCount() const { return QImageIOHandler::imageCount(); }
inline bool  promoted_jumpToImage(int  imageNumber) { return QImageIOHandler::jumpToImage(imageNumber); }
inline bool  promoted_jumpToNextImage() { return QImageIOHandler::jumpToNextImage(); }
inline int  promoted_loopCount() const { return QImageIOHandler::loopCount(); }
inline int  promoted_nextImageDelay() const { return QImageIOHandler::nextImageDelay(); }
inline QVariant  promoted_option(QImageIOHandler::ImageOption  option) const { return QImageIOHandler::option(option); }
inline void promoted_setOption(QImageIOHandler::ImageOption  option, const QVariant&  value) { QImageIOHandler::setOption(option, value); }
inline bool  promoted_supportsOption(QImageIOHandler::ImageOption  option) const { return QImageIOHandler::supportsOption(option); }
inline bool  promoted_write(const QImage&  image) { return QImageIOHandler::write(image); }
};

class PythonQtWrapper_QImageIOHandler : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ImageOption )
enum ImageOption{
  Size = QImageIOHandler::Size,   ClipRect = QImageIOHandler::ClipRect,   Description = QImageIOHandler::Description,   ScaledClipRect = QImageIOHandler::ScaledClipRect,   ScaledSize = QImageIOHandler::ScaledSize,   CompressionRatio = QImageIOHandler::CompressionRatio,   Gamma = QImageIOHandler::Gamma,   Quality = QImageIOHandler::Quality,   Name = QImageIOHandler::Name,   SubType = QImageIOHandler::SubType,   IncrementalReading = QImageIOHandler::IncrementalReading,   Endianness = QImageIOHandler::Endianness,   Animation = QImageIOHandler::Animation,   BackgroundColor = QImageIOHandler::BackgroundColor,   ImageFormat = QImageIOHandler::ImageFormat};
public slots:
QImageIOHandler* new_QImageIOHandler();
void delete_QImageIOHandler(QImageIOHandler* obj) { delete obj; } 
   int  currentImageNumber(QImageIOHandler* theWrappedObject) const;
   QRect  currentImageRect(QImageIOHandler* theWrappedObject) const;
   QIODevice*  device(QImageIOHandler* theWrappedObject) const;
   QByteArray  format(QImageIOHandler* theWrappedObject) const;
   int  imageCount(QImageIOHandler* theWrappedObject) const;
   bool  jumpToImage(QImageIOHandler* theWrappedObject, int  imageNumber);
   bool  jumpToNextImage(QImageIOHandler* theWrappedObject);
   int  loopCount(QImageIOHandler* theWrappedObject) const;
   int  nextImageDelay(QImageIOHandler* theWrappedObject) const;
   QVariant  option(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   void setDevice(QImageIOHandler* theWrappedObject, QIODevice*  device);
   void setFormat(QImageIOHandler* theWrappedObject, const QByteArray&  format);
   void setOption(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option, const QVariant&  value);
   bool  supportsOption(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   bool  write(QImageIOHandler* theWrappedObject, const QImage&  image);
};





class PythonQtShell_QImageIOPlugin : public QImageIOPlugin
{
public:
    PythonQtShell_QImageIOPlugin(QObject*  parent = 0):QImageIOPlugin(parent),_wrapper(NULL) {};

   ~PythonQtShell_QImageIOPlugin();

virtual QImageIOPlugin::Capabilities  capabilities(QIODevice*  device, const QByteArray&  format) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual QImageIOHandler*  create(QIODevice*  device, const QByteArray&  format = QByteArray()) const;
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QStringList  keys() const;
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QImageIOPlugin : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Capability )
Q_FLAGS(Capabilities )
enum Capability{
  CanRead = QImageIOPlugin::CanRead,   CanWrite = QImageIOPlugin::CanWrite,   CanReadIncremental = QImageIOPlugin::CanReadIncremental};
Q_DECLARE_FLAGS(Capabilities, Capability)
public slots:
QImageIOPlugin* new_QImageIOPlugin(QObject*  parent = 0);
void delete_QImageIOPlugin(QImageIOPlugin* obj) { delete obj; } 
};





class PythonQtWrapper_QImageReader : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ImageReaderError )
enum ImageReaderError{
  UnknownError = QImageReader::UnknownError,   FileNotFoundError = QImageReader::FileNotFoundError,   DeviceError = QImageReader::DeviceError,   UnsupportedFormatError = QImageReader::UnsupportedFormatError,   InvalidDataError = QImageReader::InvalidDataError};
public slots:
QImageReader* new_QImageReader();
QImageReader* new_QImageReader(QIODevice*  device, const QByteArray&  format = QByteArray());
QImageReader* new_QImageReader(const QString&  fileName, const QByteArray&  format = QByteArray());
void delete_QImageReader(QImageReader* obj) { delete obj; } 
   bool  autoDetectImageFormat(QImageReader* theWrappedObject) const;
   QColor  backgroundColor(QImageReader* theWrappedObject) const;
   bool  canRead(QImageReader* theWrappedObject) const;
   QRect  clipRect(QImageReader* theWrappedObject) const;
   int  currentImageNumber(QImageReader* theWrappedObject) const;
   QRect  currentImageRect(QImageReader* theWrappedObject) const;
   bool  decideFormatFromContent(QImageReader* theWrappedObject) const;
   QIODevice*  device(QImageReader* theWrappedObject) const;
   QImageReader::ImageReaderError  error(QImageReader* theWrappedObject) const;
   QString  errorString(QImageReader* theWrappedObject) const;
   QString  fileName(QImageReader* theWrappedObject) const;
   QByteArray  format(QImageReader* theWrappedObject) const;
   int  imageCount(QImageReader* theWrappedObject) const;
   QImage::Format  imageFormat(QImageReader* theWrappedObject) const;
   QByteArray  static_QImageReader_imageFormat(QIODevice*  device);
   QByteArray  static_QImageReader_imageFormat(const QString&  fileName);
   bool  jumpToImage(QImageReader* theWrappedObject, int  imageNumber);
   bool  jumpToNextImage(QImageReader* theWrappedObject);
   int  loopCount(QImageReader* theWrappedObject) const;
   int  nextImageDelay(QImageReader* theWrappedObject) const;
   int  quality(QImageReader* theWrappedObject) const;
   QImage  read(QImageReader* theWrappedObject);
   QRect  scaledClipRect(QImageReader* theWrappedObject) const;
   QSize  scaledSize(QImageReader* theWrappedObject) const;
   void setAutoDetectImageFormat(QImageReader* theWrappedObject, bool  enabled);
   void setBackgroundColor(QImageReader* theWrappedObject, const QColor&  color);
   void setClipRect(QImageReader* theWrappedObject, const QRect&  rect);
   void setDecideFormatFromContent(QImageReader* theWrappedObject, bool  ignored);
   void setDevice(QImageReader* theWrappedObject, QIODevice*  device);
   void setFileName(QImageReader* theWrappedObject, const QString&  fileName);
   void setFormat(QImageReader* theWrappedObject, const QByteArray&  format);
   void setQuality(QImageReader* theWrappedObject, int  quality);
   void setScaledClipRect(QImageReader* theWrappedObject, const QRect&  rect);
   void setScaledSize(QImageReader* theWrappedObject, const QSize&  size);
   QSize  size(QImageReader* theWrappedObject) const;
   QList<QByteArray >  static_QImageReader_supportedImageFormats();
   bool  supportsAnimation(QImageReader* theWrappedObject) const;
   bool  supportsOption(QImageReader* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   QString  text(QImageReader* theWrappedObject, const QString&  key) const;
   QStringList  textKeys(QImageReader* theWrappedObject) const;
};





class PythonQtWrapper_QImageWriter : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ImageWriterError )
enum ImageWriterError{
  UnknownError = QImageWriter::UnknownError,   DeviceError = QImageWriter::DeviceError,   UnsupportedFormatError = QImageWriter::UnsupportedFormatError};
public slots:
QImageWriter* new_QImageWriter();
QImageWriter* new_QImageWriter(QIODevice*  device, const QByteArray&  format);
QImageWriter* new_QImageWriter(const QString&  fileName, const QByteArray&  format = QByteArray());
void delete_QImageWriter(QImageWriter* obj) { delete obj; } 
   bool  canWrite(QImageWriter* theWrappedObject) const;
   int  compression(QImageWriter* theWrappedObject) const;
   QIODevice*  device(QImageWriter* theWrappedObject) const;
   QImageWriter::ImageWriterError  error(QImageWriter* theWrappedObject) const;
   QString  errorString(QImageWriter* theWrappedObject) const;
   QString  fileName(QImageWriter* theWrappedObject) const;
   QByteArray  format(QImageWriter* theWrappedObject) const;
   float  gamma(QImageWriter* theWrappedObject) const;
   int  quality(QImageWriter* theWrappedObject) const;
   void setCompression(QImageWriter* theWrappedObject, int  compression);
   void setDevice(QImageWriter* theWrappedObject, QIODevice*  device);
   void setFileName(QImageWriter* theWrappedObject, const QString&  fileName);
   void setFormat(QImageWriter* theWrappedObject, const QByteArray&  format);
   void setGamma(QImageWriter* theWrappedObject, float  gamma);
   void setQuality(QImageWriter* theWrappedObject, int  quality);
   void setText(QImageWriter* theWrappedObject, const QString&  key, const QString&  text);
   QList<QByteArray >  static_QImageWriter_supportedImageFormats();
   bool  supportsOption(QImageWriter* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   bool  write(QImageWriter* theWrappedObject, const QImage&  image);
};





class PythonQtShell_QInputContext : public QInputContext
{
public:
    PythonQtShell_QInputContext(QObject*  parent = 0):QInputContext(parent),_wrapper(NULL) {};

   ~PythonQtShell_QInputContext();

virtual QList<QAction* >  actions();
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  filterEvent(const QEvent*  event);
virtual QFont  font() const;
virtual QString  identifierName();
virtual bool  isComposing() const;
virtual QString  language();
virtual void mouseHandler(int  x, QMouseEvent*  event);
virtual void reset();
virtual void setFocusWidget(QWidget*  w);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void update();
virtual void widgetDestroyed(QWidget*  w);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QInputContext : public QInputContext
{ public:
inline QList<QAction* >  promoted_actions() { return QInputContext::actions(); }
inline bool  promoted_filterEvent(const QEvent*  event) { return QInputContext::filterEvent(event); }
inline QFont  promoted_font() const { return QInputContext::font(); }
inline void promoted_mouseHandler(int  x, QMouseEvent*  event) { QInputContext::mouseHandler(x, event); }
inline void promoted_update() { QInputContext::update(); }
inline void promoted_widgetDestroyed(QWidget*  w) { QInputContext::widgetDestroyed(w); }
};

class PythonQtWrapper_QInputContext : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StandardFormat )
enum StandardFormat{
  PreeditFormat = QInputContext::PreeditFormat,   SelectionFormat = QInputContext::SelectionFormat};
public slots:
QInputContext* new_QInputContext(QObject*  parent = 0);
void delete_QInputContext(QInputContext* obj) { delete obj; } 
   QList<QAction* >  actions(QInputContext* theWrappedObject);
   bool  filterEvent(QInputContext* theWrappedObject, const QEvent*  event);
   QWidget*  focusWidget(QInputContext* theWrappedObject) const;
   QFont  font(QInputContext* theWrappedObject) const;
   void mouseHandler(QInputContext* theWrappedObject, int  x, QMouseEvent*  event);
   void sendEvent(QInputContext* theWrappedObject, const QInputMethodEvent&  event);
   QTextFormat  standardFormat(QInputContext* theWrappedObject, QInputContext::StandardFormat  s) const;
   void update(QInputContext* theWrappedObject);
   void widgetDestroyed(QInputContext* theWrappedObject, QWidget*  w);
};





class PythonQtShell_QInputContextFactory : public QInputContextFactory
{
public:
    PythonQtShell_QInputContextFactory():QInputContextFactory(),_wrapper(NULL) {};

   ~PythonQtShell_QInputContextFactory();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QInputContextFactory : public QObject
{ Q_OBJECT
public:
public slots:
QInputContextFactory* new_QInputContextFactory();
void delete_QInputContextFactory(QInputContextFactory* obj) { delete obj; } 
   QInputContext*  static_QInputContextFactory_create(const QString&  key, QObject*  parent);
   QString  static_QInputContextFactory_description(const QString&  key);
   QString  static_QInputContextFactory_displayName(const QString&  key);
   QStringList  static_QInputContextFactory_keys();
   QStringList  static_QInputContextFactory_languages(const QString&  key);
};





class PythonQtShell_QInputContextPlugin : public QInputContextPlugin
{
public:
    PythonQtShell_QInputContextPlugin(QObject*  parent = 0):QInputContextPlugin(parent),_wrapper(NULL) {};

   ~PythonQtShell_QInputContextPlugin();

virtual void childEvent(QChildEvent*  arg__1);
virtual QInputContext*  create(const QString&  key);
virtual void customEvent(QEvent*  arg__1);
virtual QString  description(const QString&  key);
virtual QString  displayName(const QString&  key);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QStringList  keys() const;
virtual QStringList  languages(const QString&  key);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QInputContextPlugin : public QObject
{ Q_OBJECT
public:
public slots:
QInputContextPlugin* new_QInputContextPlugin(QObject*  parent = 0);
void delete_QInputContextPlugin(QInputContextPlugin* obj) { delete obj; } 
};





class PythonQtShell_QInputDialog : public QInputDialog
{
public:
    PythonQtShell_QInputDialog(QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QInputDialog(parent, flags),_wrapper(NULL) {};

   ~PythonQtShell_QInputDialog();

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

class PythonQtPublicPromoter_QInputDialog : public QInputDialog
{ public:
inline void promoted_done(int  result) { QInputDialog::done(result); }
};

class PythonQtWrapper_QInputDialog : public QObject
{ Q_OBJECT
public:
Q_ENUMS(InputMode InputDialogOption )
Q_FLAGS(InputDialogOptions )
enum InputMode{
  TextInput = QInputDialog::TextInput,   IntInput = QInputDialog::IntInput,   DoubleInput = QInputDialog::DoubleInput};
enum InputDialogOption{
  NoButtons = QInputDialog::NoButtons,   UseListViewForComboBoxItems = QInputDialog::UseListViewForComboBoxItems};
Q_DECLARE_FLAGS(InputDialogOptions, InputDialogOption)
public slots:
QInputDialog* new_QInputDialog(QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
void delete_QInputDialog(QInputDialog* obj) { delete obj; } 
   QString  cancelButtonText(QInputDialog* theWrappedObject) const;
   QStringList  comboBoxItems(QInputDialog* theWrappedObject) const;
   void done(QInputDialog* theWrappedObject, int  result);
   int  doubleDecimals(QInputDialog* theWrappedObject) const;
   double  doubleMaximum(QInputDialog* theWrappedObject) const;
   double  doubleMinimum(QInputDialog* theWrappedObject) const;
   double  doubleValue(QInputDialog* theWrappedObject) const;
   double  static_QInputDialog_getDouble(QWidget*  parent, const QString&  title, const QString&  label, double  value = 0, double  minValue = -2147483647, double  maxValue = 2147483647, int  decimals = 1, bool*  ok = 0, Qt::WindowFlags  flags = 0);
   int  static_QInputDialog_getInt(QWidget*  parent, const QString&  title, const QString&  label, int  value = 0, int  minValue = -2147483647, int  maxValue = 2147483647, int  step = 1, bool*  ok = 0, Qt::WindowFlags  flags = 0);
   int  static_QInputDialog_getInteger(QWidget*  parent, const QString&  title, const QString&  label, int  value = 0, int  minValue = -2147483647, int  maxValue = 2147483647, int  step = 1, bool*  ok = 0, Qt::WindowFlags  flags = 0);
   QString  static_QInputDialog_getItem(QWidget*  parent, const QString&  title, const QString&  label, const QStringList&  items, int  current = 0, bool  editable = true, bool*  ok = 0, Qt::WindowFlags  flags = 0);
   QString  static_QInputDialog_getItem(QWidget*  parent, const QString&  title, const QString&  label, const QStringList&  items, int  current, bool  editable, bool*  ok, Qt::WindowFlags  flags, Qt::InputMethodHints  inputMethodHints);
   QString  static_QInputDialog_getText(QWidget*  parent, const QString&  title, const QString&  label, QLineEdit::EchoMode  echo = QLineEdit::Normal, const QString&  text = QString(), bool*  ok = 0, Qt::WindowFlags  flags = 0);
   QString  static_QInputDialog_getText(QWidget*  parent, const QString&  title, const QString&  label, QLineEdit::EchoMode  echo, const QString&  text, bool*  ok, Qt::WindowFlags  flags, Qt::InputMethodHints  inputMethodHints);
   QInputDialog::InputMode  inputMode(QInputDialog* theWrappedObject) const;
   int  intMaximum(QInputDialog* theWrappedObject) const;
   int  intMinimum(QInputDialog* theWrappedObject) const;
   int  intStep(QInputDialog* theWrappedObject) const;
   int  intValue(QInputDialog* theWrappedObject) const;
   bool  isComboBoxEditable(QInputDialog* theWrappedObject) const;
   QString  labelText(QInputDialog* theWrappedObject) const;
   QSize  minimumSizeHint(QInputDialog* theWrappedObject) const;
   QString  okButtonText(QInputDialog* theWrappedObject) const;
   void open(QInputDialog* theWrappedObject);
   void open(QInputDialog* theWrappedObject, QObject*  receiver, const char*  member);
   QInputDialog::InputDialogOptions  options(QInputDialog* theWrappedObject) const;
   void setCancelButtonText(QInputDialog* theWrappedObject, const QString&  text);
   void setComboBoxEditable(QInputDialog* theWrappedObject, bool  editable);
   void setComboBoxItems(QInputDialog* theWrappedObject, const QStringList&  items);
   void setDoubleDecimals(QInputDialog* theWrappedObject, int  decimals);
   void setDoubleMaximum(QInputDialog* theWrappedObject, double  max);
   void setDoubleMinimum(QInputDialog* theWrappedObject, double  min);
   void setDoubleRange(QInputDialog* theWrappedObject, double  min, double  max);
   void setDoubleValue(QInputDialog* theWrappedObject, double  value);
   void setInputMode(QInputDialog* theWrappedObject, QInputDialog::InputMode  mode);
   void setIntMaximum(QInputDialog* theWrappedObject, int  max);
   void setIntMinimum(QInputDialog* theWrappedObject, int  min);
   void setIntRange(QInputDialog* theWrappedObject, int  min, int  max);
   void setIntStep(QInputDialog* theWrappedObject, int  step);
   void setIntValue(QInputDialog* theWrappedObject, int  value);
   void setLabelText(QInputDialog* theWrappedObject, const QString&  text);
   void setOkButtonText(QInputDialog* theWrappedObject, const QString&  text);
   void setOption(QInputDialog* theWrappedObject, QInputDialog::InputDialogOption  option, bool  on = true);
   void setOptions(QInputDialog* theWrappedObject, QInputDialog::InputDialogOptions  options);
   void setTextEchoMode(QInputDialog* theWrappedObject, QLineEdit::EchoMode  mode);
   void setTextValue(QInputDialog* theWrappedObject, const QString&  text);
   void setVisible(QInputDialog* theWrappedObject, bool  visible);
   QSize  sizeHint(QInputDialog* theWrappedObject) const;
   bool  testOption(QInputDialog* theWrappedObject, QInputDialog::InputDialogOption  option) const;
   QLineEdit::EchoMode  textEchoMode(QInputDialog* theWrappedObject) const;
   QString  textValue(QInputDialog* theWrappedObject) const;
};





class PythonQtShell_QInputEvent : public QInputEvent
{
public:
    PythonQtShell_QInputEvent(QEvent::Type  type, Qt::KeyboardModifiers  modifiers = Qt::NoModifier):QInputEvent(type, modifiers),_wrapper(NULL) {};

   ~PythonQtShell_QInputEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QInputEvent : public QObject
{ Q_OBJECT
public:
public slots:
QInputEvent* new_QInputEvent(QEvent::Type  type, Qt::KeyboardModifiers  modifiers = Qt::NoModifier);
void delete_QInputEvent(QInputEvent* obj) { delete obj; } 
   Qt::KeyboardModifiers  modifiers(QInputEvent* theWrappedObject) const;
   void setModifiers(QInputEvent* theWrappedObject, Qt::KeyboardModifiers  amodifiers);
};





class PythonQtShell_QIntValidator : public QIntValidator
{
public:
    PythonQtShell_QIntValidator(QObject*  parent = 0):QIntValidator(parent),_wrapper(NULL) {};
    PythonQtShell_QIntValidator(int  bottom, int  top, QObject*  parent = 0):QIntValidator(bottom, top, parent),_wrapper(NULL) {};

   ~PythonQtShell_QIntValidator();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void fixup(QString&  input) const;
virtual void setRange(int  bottom, int  top);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual QValidator::State  validate(QString&  arg__1, int&  arg__2) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QIntValidator : public QIntValidator
{ public:
inline void promoted_fixup(QString&  input) const { QIntValidator::fixup(input); }
inline void promoted_setRange(int  bottom, int  top) { QIntValidator::setRange(bottom, top); }
inline QValidator::State  promoted_validate(QString&  arg__1, int&  arg__2) const { return QIntValidator::validate(arg__1, arg__2); }
};

class PythonQtWrapper_QIntValidator : public QObject
{ Q_OBJECT
public:
public slots:
QIntValidator* new_QIntValidator(QObject*  parent = 0);
QIntValidator* new_QIntValidator(int  bottom, int  top, QObject*  parent = 0);
void delete_QIntValidator(QIntValidator* obj) { delete obj; } 
   int  bottom(QIntValidator* theWrappedObject) const;
   void fixup(QIntValidator* theWrappedObject, QString&  input) const;
   void setBottom(QIntValidator* theWrappedObject, int  arg__1);
   void setRange(QIntValidator* theWrappedObject, int  bottom, int  top);
   void setTop(QIntValidator* theWrappedObject, int  arg__1);
   int  top(QIntValidator* theWrappedObject) const;
   QValidator::State  validate(QIntValidator* theWrappedObject, QString&  arg__1, int&  arg__2) const;
};





class PythonQtShell_QItemDelegate : public QItemDelegate
{
public:
    PythonQtShell_QItemDelegate(QObject*  parent = 0):QItemDelegate(parent),_wrapper(NULL) {};

   ~PythonQtShell_QItemDelegate();

virtual void childEvent(QChildEvent*  arg__1);
virtual QWidget*  createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual void customEvent(QEvent*  arg__1);
virtual void drawCheck(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, Qt::CheckState  state) const;
virtual void drawDecoration(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QPixmap&  pixmap) const;
virtual void drawDisplay(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QString&  text) const;
virtual void drawFocus(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect) const;
virtual bool  editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  object, QEvent*  event);
virtual void paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual void setEditorData(QWidget*  editor, const QModelIndex&  index) const;
virtual void setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const;
virtual QSize  sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QItemDelegate : public QItemDelegate
{ public:
inline QWidget*  promoted_createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { return QItemDelegate::createEditor(parent, option, index); }
inline void promoted_drawCheck(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, Qt::CheckState  state) const { QItemDelegate::drawCheck(painter, option, rect, state); }
inline void promoted_drawDecoration(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QPixmap&  pixmap) const { QItemDelegate::drawDecoration(painter, option, rect, pixmap); }
inline void promoted_drawDisplay(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QString&  text) const { QItemDelegate::drawDisplay(painter, option, rect, text); }
inline void promoted_drawFocus(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect) const { QItemDelegate::drawFocus(painter, option, rect); }
inline bool  promoted_editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index) { return QItemDelegate::editorEvent(event, model, option, index); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return QItemDelegate::eventFilter(object, event); }
inline void promoted_paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { QItemDelegate::paint(painter, option, index); }
inline void promoted_setEditorData(QWidget*  editor, const QModelIndex&  index) const { QItemDelegate::setEditorData(editor, index); }
inline void promoted_setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const { QItemDelegate::setModelData(editor, model, index); }
inline QSize  promoted_sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const { return QItemDelegate::sizeHint(option, index); }
inline void promoted_updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { QItemDelegate::updateEditorGeometry(editor, option, index); }
};

class PythonQtWrapper_QItemDelegate : public QObject
{ Q_OBJECT
public:
public slots:
QItemDelegate* new_QItemDelegate(QObject*  parent = 0);
void delete_QItemDelegate(QItemDelegate* obj) { delete obj; } 
   QWidget*  createEditor(QItemDelegate* theWrappedObject, QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   void drawCheck(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, Qt::CheckState  state) const;
   void drawDecoration(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QPixmap&  pixmap) const;
   void drawDisplay(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QString&  text) const;
   void drawFocus(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect) const;
   bool  editorEvent(QItemDelegate* theWrappedObject, QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index);
   bool  eventFilter(QItemDelegate* theWrappedObject, QObject*  object, QEvent*  event);
   bool  hasClipping(QItemDelegate* theWrappedObject) const;
   QItemEditorFactory*  itemEditorFactory(QItemDelegate* theWrappedObject) const;
   void paint(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   void setClipping(QItemDelegate* theWrappedObject, bool  clip);
   void setEditorData(QItemDelegate* theWrappedObject, QWidget*  editor, const QModelIndex&  index) const;
   void setItemEditorFactory(QItemDelegate* theWrappedObject, QItemEditorFactory*  factory);
   void setModelData(QItemDelegate* theWrappedObject, QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const;
   QSize  sizeHint(QItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   void updateEditorGeometry(QItemDelegate* theWrappedObject, QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
};





class PythonQtShell_QItemEditorCreatorBase : public QItemEditorCreatorBase
{
public:
    PythonQtShell_QItemEditorCreatorBase():QItemEditorCreatorBase(),_wrapper(NULL) {};

   ~PythonQtShell_QItemEditorCreatorBase();

virtual QWidget*  createWidget(QWidget*  parent) const;
virtual QByteArray  valuePropertyName() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QItemEditorCreatorBase : public QObject
{ Q_OBJECT
public:
public slots:
QItemEditorCreatorBase* new_QItemEditorCreatorBase();
void delete_QItemEditorCreatorBase(QItemEditorCreatorBase* obj) { delete obj; } 
};





class PythonQtShell_QItemEditorFactory : public QItemEditorFactory
{
public:
    PythonQtShell_QItemEditorFactory():QItemEditorFactory(),_wrapper(NULL) {};

   ~PythonQtShell_QItemEditorFactory();

virtual QWidget*  createEditor(QVariant::Type  type, QWidget*  parent) const;
virtual QByteArray  valuePropertyName(QVariant::Type  type) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QItemEditorFactory : public QItemEditorFactory
{ public:
inline QWidget*  promoted_createEditor(QVariant::Type  type, QWidget*  parent) const { return QItemEditorFactory::createEditor(type, parent); }
inline QByteArray  promoted_valuePropertyName(QVariant::Type  type) const { return QItemEditorFactory::valuePropertyName(type); }
};

class PythonQtWrapper_QItemEditorFactory : public QObject
{ Q_OBJECT
public:
public slots:
QItemEditorFactory* new_QItemEditorFactory();
void delete_QItemEditorFactory(QItemEditorFactory* obj) { delete obj; } 
   QWidget*  createEditor(QItemEditorFactory* theWrappedObject, QVariant::Type  type, QWidget*  parent) const;
   const QItemEditorFactory*  static_QItemEditorFactory_defaultFactory();
   void registerEditor(QItemEditorFactory* theWrappedObject, QVariant::Type  type, QItemEditorCreatorBase*  creator);
   void static_QItemEditorFactory_setDefaultFactory(QItemEditorFactory*  factory);
   QByteArray  valuePropertyName(QItemEditorFactory* theWrappedObject, QVariant::Type  type) const;
};





class PythonQtWrapper_QItemSelection : public QObject
{ Q_OBJECT
public:
public slots:
QItemSelection* new_QItemSelection();
QItemSelection* new_QItemSelection(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
QItemSelection* new_QItemSelection(const QItemSelection& other) {
QItemSelection* a = new QItemSelection();
*((QItemSelection*)a) = other;
return a; }
void delete_QItemSelection(QItemSelection* obj) { delete obj; } 
   void append(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   void append(QItemSelection* theWrappedObject, const QList<QItemSelectionRange >&  t);
   const QItemSelectionRange*  at(QItemSelection* theWrappedObject, int  i) const;
   const QItemSelectionRange*  back(QItemSelection* theWrappedObject) const;
   void clear(QItemSelection* theWrappedObject);
   bool  contains(QItemSelection* theWrappedObject, const QModelIndex&  index) const;
   int  count(QItemSelection* theWrappedObject) const;
   int  count(QItemSelection* theWrappedObject, const QItemSelectionRange&  t) const;
   void detachShared(QItemSelection* theWrappedObject);
   bool  empty(QItemSelection* theWrappedObject) const;
   bool  endsWith(QItemSelection* theWrappedObject, const QItemSelectionRange&  t) const;
   const QItemSelectionRange*  first(QItemSelection* theWrappedObject) const;
   QList<QItemSelectionRange >  static_QItemSelection_fromVector(const QVector<QItemSelectionRange >&  vector);
   const QItemSelectionRange*  front(QItemSelection* theWrappedObject) const;
   int  indexOf(QItemSelection* theWrappedObject, const QItemSelectionRange&  t, int  from) const;
   QList<QModelIndex >  indexes(QItemSelection* theWrappedObject) const;
   bool  isEmpty(QItemSelection* theWrappedObject) const;
   bool  isSharedWith(QItemSelection* theWrappedObject, const QList<QItemSelectionRange >&  other) const;
   const QItemSelectionRange*  last(QItemSelection* theWrappedObject) const;
   int  lastIndexOf(QItemSelection* theWrappedObject, const QItemSelectionRange&  t, int  from) const;
   int  length(QItemSelection* theWrappedObject) const;
   void merge(QItemSelection* theWrappedObject, const QItemSelection&  other, QItemSelectionModel::SelectionFlags  command);
   QList<QItemSelectionRange >  mid(QItemSelection* theWrappedObject, int  pos, int  length) const;
   void move(QItemSelection* theWrappedObject, int  from, int  to);
   bool  __ne__(QItemSelection* theWrappedObject, const QList<QItemSelectionRange >&  l) const;
   bool  __eq__(QItemSelection* theWrappedObject, const QList<QItemSelectionRange >&  l) const;
   void pop_back(QItemSelection* theWrappedObject);
   void pop_front(QItemSelection* theWrappedObject);
   void prepend(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   void push_back(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   void push_front(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   int  removeAll(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   void removeAt(QItemSelection* theWrappedObject, int  i);
   void removeFirst(QItemSelection* theWrappedObject);
   void removeLast(QItemSelection* theWrappedObject);
   bool  removeOne(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   void replace(QItemSelection* theWrappedObject, int  i, const QItemSelectionRange&  t);
   void reserve(QItemSelection* theWrappedObject, int  size);
   void select(QItemSelection* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
   void setSharable(QItemSelection* theWrappedObject, bool  sharable);
   int  size(QItemSelection* theWrappedObject) const;
   void static_QItemSelection_split(const QItemSelectionRange&  range, const QItemSelectionRange&  other, QItemSelection*  result);
   bool  startsWith(QItemSelection* theWrappedObject, const QItemSelectionRange&  t) const;
   void swap(QItemSelection* theWrappedObject, QList<QItemSelectionRange >&  other);
   void swap(QItemSelection* theWrappedObject, int  i, int  j);
   QItemSelectionRange  takeAt(QItemSelection* theWrappedObject, int  i);
   QItemSelectionRange  takeFirst(QItemSelection* theWrappedObject);
   QItemSelectionRange  takeLast(QItemSelection* theWrappedObject);
   QVector<QItemSelectionRange >  toVector(QItemSelection* theWrappedObject) const;
   QItemSelectionRange  value(QItemSelection* theWrappedObject, int  i) const;
   QItemSelectionRange  value(QItemSelection* theWrappedObject, int  i, const QItemSelectionRange&  defaultValue) const;
};





class PythonQtShell_QItemSelectionModel : public QItemSelectionModel
{
public:
    PythonQtShell_QItemSelectionModel(QAbstractItemModel*  model):QItemSelectionModel(model),_wrapper(NULL) {};
    PythonQtShell_QItemSelectionModel(QAbstractItemModel*  model, QObject*  parent):QItemSelectionModel(model, parent),_wrapper(NULL) {};

   ~PythonQtShell_QItemSelectionModel();

virtual void childEvent(QChildEvent*  arg__1);
virtual void clear();
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void reset();
virtual void select(const QItemSelection&  selection, QItemSelectionModel::SelectionFlags  command);
virtual void select(const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QItemSelectionModel : public QItemSelectionModel
{ public:
inline void promoted_clear() { QItemSelectionModel::clear(); }
inline void promoted_reset() { QItemSelectionModel::reset(); }
inline void promoted_select(const QItemSelection&  selection, QItemSelectionModel::SelectionFlags  command) { QItemSelectionModel::select(selection, command); }
inline void promoted_select(const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command) { QItemSelectionModel::select(index, command); }
};

class PythonQtWrapper_QItemSelectionModel : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SelectionFlag )
Q_FLAGS(SelectionFlags )
enum SelectionFlag{
  NoUpdate = QItemSelectionModel::NoUpdate,   Clear = QItemSelectionModel::Clear,   Select = QItemSelectionModel::Select,   Deselect = QItemSelectionModel::Deselect,   Toggle = QItemSelectionModel::Toggle,   Current = QItemSelectionModel::Current,   Rows = QItemSelectionModel::Rows,   Columns = QItemSelectionModel::Columns,   SelectCurrent = QItemSelectionModel::SelectCurrent,   ToggleCurrent = QItemSelectionModel::ToggleCurrent,   ClearAndSelect = QItemSelectionModel::ClearAndSelect};
Q_DECLARE_FLAGS(SelectionFlags, SelectionFlag)
public slots:
QItemSelectionModel* new_QItemSelectionModel(QAbstractItemModel*  model);
QItemSelectionModel* new_QItemSelectionModel(QAbstractItemModel*  model, QObject*  parent);
void delete_QItemSelectionModel(QItemSelectionModel* obj) { delete obj; } 
   void clear(QItemSelectionModel* theWrappedObject);
   bool  columnIntersectsSelection(QItemSelectionModel* theWrappedObject, int  column, const QModelIndex&  parent) const;
   QModelIndex  currentIndex(QItemSelectionModel* theWrappedObject) const;
   bool  hasSelection(QItemSelectionModel* theWrappedObject) const;
   bool  isColumnSelected(QItemSelectionModel* theWrappedObject, int  column, const QModelIndex&  parent) const;
   bool  isRowSelected(QItemSelectionModel* theWrappedObject, int  row, const QModelIndex&  parent) const;
   bool  isSelected(QItemSelectionModel* theWrappedObject, const QModelIndex&  index) const;
   const QAbstractItemModel*  model(QItemSelectionModel* theWrappedObject) const;
   void reset(QItemSelectionModel* theWrappedObject);
   bool  rowIntersectsSelection(QItemSelectionModel* theWrappedObject, int  row, const QModelIndex&  parent) const;
   void select(QItemSelectionModel* theWrappedObject, const QItemSelection&  selection, QItemSelectionModel::SelectionFlags  command);
   void select(QItemSelectionModel* theWrappedObject, const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command);
   QList<QModelIndex >  selectedColumns(QItemSelectionModel* theWrappedObject, int  row = 0) const;
   QList<QModelIndex >  selectedIndexes(QItemSelectionModel* theWrappedObject) const;
   QList<QModelIndex >  selectedRows(QItemSelectionModel* theWrappedObject, int  column = 0) const;
   const QItemSelection  selection(QItemSelectionModel* theWrappedObject) const;
};





class PythonQtWrapper_QItemSelectionRange : public QObject
{ Q_OBJECT
public:
public slots:
QItemSelectionRange* new_QItemSelectionRange();
QItemSelectionRange* new_QItemSelectionRange(const QItemSelectionRange&  other);
QItemSelectionRange* new_QItemSelectionRange(const QModelIndex&  index);
QItemSelectionRange* new_QItemSelectionRange(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
void delete_QItemSelectionRange(QItemSelectionRange* obj) { delete obj; } 
   int  bottom(QItemSelectionRange* theWrappedObject) const;
   QModelIndex  bottomRight(QItemSelectionRange* theWrappedObject) const;
   bool  contains(QItemSelectionRange* theWrappedObject, const QModelIndex&  index) const;
   bool  contains(QItemSelectionRange* theWrappedObject, int  row, int  column, const QModelIndex&  parentIndex) const;
   int  height(QItemSelectionRange* theWrappedObject) const;
   QList<QModelIndex >  indexes(QItemSelectionRange* theWrappedObject) const;
   QItemSelectionRange  intersected(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const;
   bool  intersects(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const;
   bool  isEmpty(QItemSelectionRange* theWrappedObject) const;
   bool  isValid(QItemSelectionRange* theWrappedObject) const;
   int  left(QItemSelectionRange* theWrappedObject) const;
   const QAbstractItemModel*  model(QItemSelectionRange* theWrappedObject) const;
   bool  __ne__(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const;
   bool  __lt__(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const;
   bool  __eq__(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const;
   QModelIndex  parent(QItemSelectionRange* theWrappedObject) const;
   int  right(QItemSelectionRange* theWrappedObject) const;
   int  top(QItemSelectionRange* theWrappedObject) const;
   QModelIndex  topLeft(QItemSelectionRange* theWrappedObject) const;
   int  width(QItemSelectionRange* theWrappedObject) const;
    QString py_toString(QItemSelectionRange*);
};





class PythonQtShell_QKeyEvent : public QKeyEvent
{
public:
    PythonQtShell_QKeyEvent(QEvent::Type  type, int  key, Qt::KeyboardModifiers  modifiers, const QString&  text = QString(), bool  autorep = false, ushort  count = 1):QKeyEvent(type, key, modifiers, text, autorep, count),_wrapper(NULL) {};

   ~PythonQtShell_QKeyEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QKeyEvent : public QObject
{ Q_OBJECT
public:
public slots:
QKeyEvent* new_QKeyEvent(QEvent::Type  type, int  key, Qt::KeyboardModifiers  modifiers, const QString&  text = QString(), bool  autorep = false, ushort  count = 1);
void delete_QKeyEvent(QKeyEvent* obj) { delete obj; } 
   int  count(QKeyEvent* theWrappedObject) const;
   QKeyEvent*  static_QKeyEvent_createExtendedKeyEvent(QEvent::Type  type, int  key, Qt::KeyboardModifiers  modifiers, unsigned int  nativeScanCode, unsigned int  nativeVirtualKey, unsigned int  nativeModifiers, const QString&  text = QString(), bool  autorep = false, ushort  count = 1);
   bool  hasExtendedInfo(QKeyEvent* theWrappedObject) const;
   bool  isAutoRepeat(QKeyEvent* theWrappedObject) const;
   int  key(QKeyEvent* theWrappedObject) const;
   bool  matches(QKeyEvent* theWrappedObject, QKeySequence::StandardKey  key) const;
   Qt::KeyboardModifiers  modifiers(QKeyEvent* theWrappedObject) const;
   unsigned int  nativeModifiers(QKeyEvent* theWrappedObject) const;
   unsigned int  nativeScanCode(QKeyEvent* theWrappedObject) const;
   unsigned int  nativeVirtualKey(QKeyEvent* theWrappedObject) const;
   QString  text(QKeyEvent* theWrappedObject) const;
};





class PythonQtShell_QKeyEventTransition : public QKeyEventTransition
{
public:
    PythonQtShell_QKeyEventTransition(QObject*  object, QEvent::Type  type, int  key, QState*  sourceState = 0):QKeyEventTransition(object, type, key, sourceState),_wrapper(NULL) {};
    PythonQtShell_QKeyEventTransition(QState*  sourceState = 0):QKeyEventTransition(sourceState),_wrapper(NULL) {};

   ~PythonQtShell_QKeyEventTransition();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  eventTest(QEvent*  event);
virtual void onTransition(QEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QKeyEventTransition : public QKeyEventTransition
{ public:
inline bool  promoted_eventTest(QEvent*  event) { return QKeyEventTransition::eventTest(event); }
inline void promoted_onTransition(QEvent*  event) { QKeyEventTransition::onTransition(event); }
};

class PythonQtWrapper_QKeyEventTransition : public QObject
{ Q_OBJECT
public:
public slots:
QKeyEventTransition* new_QKeyEventTransition(QObject*  object, QEvent::Type  type, int  key, QState*  sourceState = 0);
QKeyEventTransition* new_QKeyEventTransition(QState*  sourceState = 0);
void delete_QKeyEventTransition(QKeyEventTransition* obj) { delete obj; } 
   bool  eventTest(QKeyEventTransition* theWrappedObject, QEvent*  event);
   int  key(QKeyEventTransition* theWrappedObject) const;
   Qt::KeyboardModifiers  modifierMask(QKeyEventTransition* theWrappedObject) const;
   void onTransition(QKeyEventTransition* theWrappedObject, QEvent*  event);
   void setKey(QKeyEventTransition* theWrappedObject, int  key);
   void setModifierMask(QKeyEventTransition* theWrappedObject, Qt::KeyboardModifiers  modifiers);
};





class PythonQtShell_QLCDNumber : public QLCDNumber
{
public:
    PythonQtShell_QLCDNumber(QWidget*  parent = 0):QLCDNumber(parent),_wrapper(NULL) {};
    PythonQtShell_QLCDNumber(uint  numDigits, QWidget*  parent = 0):QLCDNumber(numDigits, parent),_wrapper(NULL) {};

   ~PythonQtShell_QLCDNumber();

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

class PythonQtPublicPromoter_QLCDNumber : public QLCDNumber
{ public:
inline bool  promoted_event(QEvent*  e) { return QLCDNumber::event(e); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QLCDNumber::paintEvent(arg__1); }
};

class PythonQtWrapper_QLCDNumber : public QObject
{ Q_OBJECT
public:
public slots:
QLCDNumber* new_QLCDNumber(QWidget*  parent = 0);
QLCDNumber* new_QLCDNumber(uint  numDigits, QWidget*  parent = 0);
void delete_QLCDNumber(QLCDNumber* obj) { delete obj; } 
   bool  checkOverflow(QLCDNumber* theWrappedObject, double  num) const;
   bool  checkOverflow(QLCDNumber* theWrappedObject, int  num) const;
   int  digitCount(QLCDNumber* theWrappedObject) const;
   bool  event(QLCDNumber* theWrappedObject, QEvent*  e);
   int  intValue(QLCDNumber* theWrappedObject) const;
   QLCDNumber::Mode  mode(QLCDNumber* theWrappedObject) const;
   int  numDigits(QLCDNumber* theWrappedObject) const;
   void paintEvent(QLCDNumber* theWrappedObject, QPaintEvent*  arg__1);
   QLCDNumber::SegmentStyle  segmentStyle(QLCDNumber* theWrappedObject) const;
   void setDigitCount(QLCDNumber* theWrappedObject, int  nDigits);
   void setMode(QLCDNumber* theWrappedObject, QLCDNumber::Mode  arg__1);
   void setNumDigits(QLCDNumber* theWrappedObject, int  nDigits);
   void setSegmentStyle(QLCDNumber* theWrappedObject, QLCDNumber::SegmentStyle  arg__1);
   QSize  sizeHint(QLCDNumber* theWrappedObject) const;
   bool  smallDecimalPoint(QLCDNumber* theWrappedObject) const;
   double  value(QLCDNumber* theWrappedObject) const;
};





class PythonQtShell_QLabel : public QLabel
{
public:
    PythonQtShell_QLabel(QWidget*  parent = 0, Qt::WindowFlags  f = 0):QLabel(parent, f),_wrapper(NULL) {};
    PythonQtShell_QLabel(const QString&  text, QWidget*  parent = 0, Qt::WindowFlags  f = 0):QLabel(text, parent, f),_wrapper(NULL) {};

   ~PythonQtShell_QLabel();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  ev);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  ev);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  ev);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  ev);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  ev);
virtual void mousePressEvent(QMouseEvent*  ev);
virtual void mouseReleaseEvent(QMouseEvent*  ev);
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

class PythonQtPublicPromoter_QLabel : public QLabel
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { QLabel::changeEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  ev) { QLabel::contextMenuEvent(ev); }
inline bool  promoted_event(QEvent*  e) { return QLabel::event(e); }
inline void promoted_focusInEvent(QFocusEvent*  ev) { QLabel::focusInEvent(ev); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QLabel::focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  ev) { QLabel::focusOutEvent(ev); }
inline int  promoted_heightForWidth(int  arg__1) const { return QLabel::heightForWidth(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  ev) { QLabel::keyPressEvent(ev); }
inline void promoted_mouseMoveEvent(QMouseEvent*  ev) { QLabel::mouseMoveEvent(ev); }
inline void promoted_mousePressEvent(QMouseEvent*  ev) { QLabel::mousePressEvent(ev); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  ev) { QLabel::mouseReleaseEvent(ev); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QLabel::paintEvent(arg__1); }
};

class PythonQtWrapper_QLabel : public QObject
{ Q_OBJECT
public:
public slots:
QLabel* new_QLabel(QWidget*  parent = 0, Qt::WindowFlags  f = 0);
QLabel* new_QLabel(const QString&  text, QWidget*  parent = 0, Qt::WindowFlags  f = 0);
void delete_QLabel(QLabel* obj) { delete obj; } 
   Qt::Alignment  alignment(QLabel* theWrappedObject) const;
   QWidget*  buddy(QLabel* theWrappedObject) const;
   void changeEvent(QLabel* theWrappedObject, QEvent*  arg__1);
   void contextMenuEvent(QLabel* theWrappedObject, QContextMenuEvent*  ev);
   bool  event(QLabel* theWrappedObject, QEvent*  e);
   void focusInEvent(QLabel* theWrappedObject, QFocusEvent*  ev);
   bool  focusNextPrevChild(QLabel* theWrappedObject, bool  next);
   void focusOutEvent(QLabel* theWrappedObject, QFocusEvent*  ev);
   bool  hasScaledContents(QLabel* theWrappedObject) const;
   bool  hasSelectedText(QLabel* theWrappedObject) const;
   int  heightForWidth(QLabel* theWrappedObject, int  arg__1) const;
   int  indent(QLabel* theWrappedObject) const;
   void keyPressEvent(QLabel* theWrappedObject, QKeyEvent*  ev);
   int  margin(QLabel* theWrappedObject) const;
   QSize  minimumSizeHint(QLabel* theWrappedObject) const;
   void mouseMoveEvent(QLabel* theWrappedObject, QMouseEvent*  ev);
   void mousePressEvent(QLabel* theWrappedObject, QMouseEvent*  ev);
   void mouseReleaseEvent(QLabel* theWrappedObject, QMouseEvent*  ev);
   QMovie*  movie(QLabel* theWrappedObject) const;
   bool  openExternalLinks(QLabel* theWrappedObject) const;
   void paintEvent(QLabel* theWrappedObject, QPaintEvent*  arg__1);
   const QPicture*  picture(QLabel* theWrappedObject) const;
   const QPixmap*  pixmap(QLabel* theWrappedObject) const;
   QString  selectedText(QLabel* theWrappedObject) const;
   int  selectionStart(QLabel* theWrappedObject) const;
   void setAlignment(QLabel* theWrappedObject, Qt::Alignment  arg__1);
   void setBuddy(QLabel* theWrappedObject, QWidget*  arg__1);
   void setIndent(QLabel* theWrappedObject, int  arg__1);
   void setMargin(QLabel* theWrappedObject, int  arg__1);
   void setOpenExternalLinks(QLabel* theWrappedObject, bool  open);
   void setScaledContents(QLabel* theWrappedObject, bool  arg__1);
   void setSelection(QLabel* theWrappedObject, int  arg__1, int  arg__2);
   void setTextFormat(QLabel* theWrappedObject, Qt::TextFormat  arg__1);
   void setTextInteractionFlags(QLabel* theWrappedObject, Qt::TextInteractionFlags  flags);
   void setWordWrap(QLabel* theWrappedObject, bool  on);
   QSize  sizeHint(QLabel* theWrappedObject) const;
   QString  text(QLabel* theWrappedObject) const;
   Qt::TextFormat  textFormat(QLabel* theWrappedObject) const;
   Qt::TextInteractionFlags  textInteractionFlags(QLabel* theWrappedObject) const;
   bool  wordWrap(QLabel* theWrappedObject) const;
};


