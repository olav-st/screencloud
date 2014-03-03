#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicseffect.h>
#include <qgraphicsitem.h>
#include <qgraphicslayout.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicssceneevent.h>
#include <qgraphicswebview.h>
#include <qgraphicswidget.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmenu.h>
#include <qnetworkaccessmanager.h>
#include <qnetworkreply.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qprinter.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qundostack.h>
#include <qurl.h>
#include <qwebdatabase.h>
#include <qwebelement.h>
#include <qwebframe.h>
#include <qwebhistoryinterface.h>
#include <qwebinspector.h>
#include <qwebpage.h>
#include <qwebpluginfactory.h>
#include <qwebsecurityorigin.h>
#include <qwebsettings.h>
#include <qwebview.h>
#include <qwidget.h>



class PythonQtShell_QGraphicsWebView : public QGraphicsWebView
{
public:
    PythonQtShell_QGraphicsWebView(QGraphicsItem*  parent = 0):QGraphicsWebView(parent),_wrapper(NULL) {};

virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  arg__1);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  arg__1);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  arg__1);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void grabKeyboardEvent(QEvent*  event);
virtual void grabMouseEvent(QEvent*  event);
virtual void hideEvent(QHideEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  arg__1);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  arg__1);
virtual void initStyleOption(QStyleOption*  option) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  arg__1);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  arg__1);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  arg__1);
virtual void moveEvent(QGraphicsSceneMoveEvent*  event);
virtual void paint(QPainter*  arg__1, const QStyleOptionGraphicsItem*  options, QWidget*  widget = 0);
virtual void paintWindowFrame(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
virtual void polishEvent();
virtual QVariant  propertyChange(const QString&  propertyName, const QVariant&  value);
virtual void resizeEvent(QGraphicsSceneResizeEvent*  event);
virtual bool  sceneEvent(QEvent*  arg__1);
virtual void setGeometry(const QRectF&  rect);
virtual void showEvent(QShowEvent*  event);
virtual QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void ungrabKeyboardEvent(QEvent*  event);
virtual void ungrabMouseEvent(QEvent*  event);
virtual void updateGeometry();
virtual void wheelEvent(QGraphicsSceneWheelEvent*  arg__1);
virtual bool  windowFrameEvent(QEvent*  e);
virtual Qt::WindowFrameSection  windowFrameSectionAt(const QPointF&  pos) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsWebView : public QGraphicsWebView
{ public:
inline void promoted_contextMenuEvent(QGraphicsSceneContextMenuEvent*  arg__1) { QGraphicsWebView::contextMenuEvent(arg__1); }
inline void promoted_dragEnterEvent(QGraphicsSceneDragDropEvent*  arg__1) { QGraphicsWebView::dragEnterEvent(arg__1); }
inline void promoted_dragLeaveEvent(QGraphicsSceneDragDropEvent*  arg__1) { QGraphicsWebView::dragLeaveEvent(arg__1); }
inline void promoted_dragMoveEvent(QGraphicsSceneDragDropEvent*  arg__1) { QGraphicsWebView::dragMoveEvent(arg__1); }
inline void promoted_dropEvent(QGraphicsSceneDragDropEvent*  arg__1) { QGraphicsWebView::dropEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QGraphicsWebView::event(arg__1); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { QGraphicsWebView::focusInEvent(arg__1); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QGraphicsWebView::focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { QGraphicsWebView::focusOutEvent(arg__1); }
inline void promoted_hoverLeaveEvent(QGraphicsSceneHoverEvent*  arg__1) { QGraphicsWebView::hoverLeaveEvent(arg__1); }
inline void promoted_hoverMoveEvent(QGraphicsSceneHoverEvent*  arg__1) { QGraphicsWebView::hoverMoveEvent(arg__1); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QGraphicsWebView::inputMethodEvent(arg__1); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsWebView::inputMethodQuery(query); }
inline QVariant  promoted_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return QGraphicsWebView::itemChange(change, value); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QGraphicsWebView::keyPressEvent(arg__1); }
inline void promoted_keyReleaseEvent(QKeyEvent*  arg__1) { QGraphicsWebView::keyReleaseEvent(arg__1); }
inline void promoted_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  arg__1) { QGraphicsWebView::mouseDoubleClickEvent(arg__1); }
inline void promoted_mouseMoveEvent(QGraphicsSceneMouseEvent*  arg__1) { QGraphicsWebView::mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QGraphicsSceneMouseEvent*  arg__1) { QGraphicsWebView::mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QGraphicsSceneMouseEvent*  arg__1) { QGraphicsWebView::mouseReleaseEvent(arg__1); }
inline void promoted_paint(QPainter*  arg__1, const QStyleOptionGraphicsItem*  options, QWidget*  widget = 0) { QGraphicsWebView::paint(arg__1, options, widget); }
inline bool  promoted_sceneEvent(QEvent*  arg__1) { return QGraphicsWebView::sceneEvent(arg__1); }
inline void promoted_setGeometry(const QRectF&  rect) { QGraphicsWebView::setGeometry(rect); }
inline QSizeF  promoted_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint) const { return QGraphicsWebView::sizeHint(which, constraint); }
inline void promoted_updateGeometry() { QGraphicsWebView::updateGeometry(); }
inline void promoted_wheelEvent(QGraphicsSceneWheelEvent*  arg__1) { QGraphicsWebView::wheelEvent(arg__1); }
};

class PythonQtWrapper_QGraphicsWebView : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsWebView* new_QGraphicsWebView(QGraphicsItem*  parent = 0);
void delete_QGraphicsWebView(QGraphicsWebView* obj) { delete obj; } 
   void contextMenuEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneContextMenuEvent*  arg__1);
   void dragEnterEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneDragDropEvent*  arg__1);
   void dragLeaveEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneDragDropEvent*  arg__1);
   void dragMoveEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneDragDropEvent*  arg__1);
   void dropEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneDragDropEvent*  arg__1);
   bool  event(QGraphicsWebView* theWrappedObject, QEvent*  arg__1);
   bool  findText(QGraphicsWebView* theWrappedObject, const QString&  subString, QWebPage::FindFlags  options = 0);
   void focusInEvent(QGraphicsWebView* theWrappedObject, QFocusEvent*  arg__1);
   bool  focusNextPrevChild(QGraphicsWebView* theWrappedObject, bool  next);
   void focusOutEvent(QGraphicsWebView* theWrappedObject, QFocusEvent*  arg__1);
   QWebHistory*  history(QGraphicsWebView* theWrappedObject) const;
   void hoverLeaveEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneHoverEvent*  arg__1);
   void hoverMoveEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneHoverEvent*  arg__1);
   QIcon  icon(QGraphicsWebView* theWrappedObject) const;
   void inputMethodEvent(QGraphicsWebView* theWrappedObject, QInputMethodEvent*  arg__1);
   QVariant  inputMethodQuery(QGraphicsWebView* theWrappedObject, Qt::InputMethodQuery  query) const;
   bool  isModified(QGraphicsWebView* theWrappedObject) const;
   QVariant  itemChange(QGraphicsWebView* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
   void keyPressEvent(QGraphicsWebView* theWrappedObject, QKeyEvent*  arg__1);
   void keyReleaseEvent(QGraphicsWebView* theWrappedObject, QKeyEvent*  arg__1);
   void load(QGraphicsWebView* theWrappedObject, const QNetworkRequest&  request, QNetworkAccessManager::Operation  operation = QNetworkAccessManager::GetOperation, const QByteArray&  body = QByteArray());
   void load(QGraphicsWebView* theWrappedObject, const QUrl&  url);
   void mouseDoubleClickEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneMouseEvent*  arg__1);
   void mouseMoveEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneMouseEvent*  arg__1);
   void mousePressEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneMouseEvent*  arg__1);
   void mouseReleaseEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneMouseEvent*  arg__1);
   QWebPage*  page(QGraphicsWebView* theWrappedObject) const;
   QAction*  pageAction(QGraphicsWebView* theWrappedObject, QWebPage::WebAction  action) const;
   void paint(QGraphicsWebView* theWrappedObject, QPainter*  arg__1, const QStyleOptionGraphicsItem*  options, QWidget*  widget = 0);
   bool  sceneEvent(QGraphicsWebView* theWrappedObject, QEvent*  arg__1);
   void setContent(QGraphicsWebView* theWrappedObject, const QByteArray&  data, const QString&  mimeType = QString(), const QUrl&  baseUrl = QUrl());
   void setGeometry(QGraphicsWebView* theWrappedObject, const QRectF&  rect);
   void setHtml(QGraphicsWebView* theWrappedObject, const QString&  html, const QUrl&  baseUrl = QUrl());
   void setPage(QGraphicsWebView* theWrappedObject, QWebPage*  arg__1);
   void setUrl(QGraphicsWebView* theWrappedObject, const QUrl&  arg__1);
   void setZoomFactor(QGraphicsWebView* theWrappedObject, qreal  arg__1);
   QWebSettings*  settings(QGraphicsWebView* theWrappedObject) const;
   QSizeF  sizeHint(QGraphicsWebView* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint) const;
   QString  title(QGraphicsWebView* theWrappedObject) const;
   void triggerPageAction(QGraphicsWebView* theWrappedObject, QWebPage::WebAction  action, bool  checked = false);
   void updateGeometry(QGraphicsWebView* theWrappedObject);
   QUrl  url(QGraphicsWebView* theWrappedObject) const;
   void wheelEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneWheelEvent*  arg__1);
   qreal  zoomFactor(QGraphicsWebView* theWrappedObject) const;
};





class PythonQtWrapper_QWebDatabase : public QObject
{ Q_OBJECT
public:
public slots:
QWebDatabase* new_QWebDatabase(const QWebDatabase&  other);
void delete_QWebDatabase(QWebDatabase* obj) { delete obj; } 
   QString  displayName(QWebDatabase* theWrappedObject) const;
   qint64  expectedSize(QWebDatabase* theWrappedObject) const;
   QString  fileName(QWebDatabase* theWrappedObject) const;
   QString  name(QWebDatabase* theWrappedObject) const;
   QWebDatabase*  operator_assign(QWebDatabase* theWrappedObject, const QWebDatabase&  other);
   QWebSecurityOrigin  origin(QWebDatabase* theWrappedObject) const;
   void static_QWebDatabase_removeAllDatabases();
   void static_QWebDatabase_removeDatabase(const QWebDatabase&  arg__1);
   qint64  size(QWebDatabase* theWrappedObject) const;
};





class PythonQtWrapper_QWebElement : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleResolveStrategy )
enum StyleResolveStrategy{
  InlineStyle = QWebElement::InlineStyle,   CascadedStyle = QWebElement::CascadedStyle,   ComputedStyle = QWebElement::ComputedStyle};
public slots:
QWebElement* new_QWebElement();
QWebElement* new_QWebElement(const QWebElement&  arg__1);
void delete_QWebElement(QWebElement* obj) { delete obj; } 
   void addClass(QWebElement* theWrappedObject, const QString&  name);
   void appendInside(QWebElement* theWrappedObject, const QString&  markup);
   void appendInside(QWebElement* theWrappedObject, const QWebElement&  element);
   void appendOutside(QWebElement* theWrappedObject, const QString&  markup);
   void appendOutside(QWebElement* theWrappedObject, const QWebElement&  element);
   QString  attribute(QWebElement* theWrappedObject, const QString&  name, const QString&  defaultValue = QString()) const;
   QString  attributeNS(QWebElement* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  defaultValue = QString()) const;
   QStringList  attributeNames(QWebElement* theWrappedObject, const QString&  namespaceUri = QString()) const;
   QStringList  classes(QWebElement* theWrappedObject) const;
   QWebElement  clone(QWebElement* theWrappedObject) const;
   QWebElement  document(QWebElement* theWrappedObject) const;
   void encloseContentsWith(QWebElement* theWrappedObject, const QString&  markup);
   void encloseContentsWith(QWebElement* theWrappedObject, const QWebElement&  element);
   void encloseWith(QWebElement* theWrappedObject, const QString&  markup);
   void encloseWith(QWebElement* theWrappedObject, const QWebElement&  element);
   QVariant  evaluateJavaScript(QWebElement* theWrappedObject, const QString&  scriptSource);
   QWebElement  findFirst(QWebElement* theWrappedObject, const QString&  selectorQuery) const;
   QWebElement  firstChild(QWebElement* theWrappedObject) const;
   QRect  geometry(QWebElement* theWrappedObject) const;
   bool  hasAttribute(QWebElement* theWrappedObject, const QString&  name) const;
   bool  hasAttributeNS(QWebElement* theWrappedObject, const QString&  namespaceUri, const QString&  name) const;
   bool  hasAttributes(QWebElement* theWrappedObject) const;
   bool  hasClass(QWebElement* theWrappedObject, const QString&  name) const;
   bool  hasFocus(QWebElement* theWrappedObject) const;
   bool  isNull(QWebElement* theWrappedObject) const;
   QWebElement  lastChild(QWebElement* theWrappedObject) const;
   QString  localName(QWebElement* theWrappedObject) const;
   QString  namespaceUri(QWebElement* theWrappedObject) const;
   QWebElement  nextSibling(QWebElement* theWrappedObject) const;
   bool  __ne__(QWebElement* theWrappedObject, const QWebElement&  o) const;
   QWebElement*  operator_assign(QWebElement* theWrappedObject, const QWebElement&  arg__1);
   bool  __eq__(QWebElement* theWrappedObject, const QWebElement&  o) const;
   QWebElement  parent(QWebElement* theWrappedObject) const;
   QString  prefix(QWebElement* theWrappedObject) const;
   void prependInside(QWebElement* theWrappedObject, const QString&  markup);
   void prependInside(QWebElement* theWrappedObject, const QWebElement&  element);
   void prependOutside(QWebElement* theWrappedObject, const QString&  markup);
   void prependOutside(QWebElement* theWrappedObject, const QWebElement&  element);
   QWebElement  previousSibling(QWebElement* theWrappedObject) const;
   void removeAllChildren(QWebElement* theWrappedObject);
   void removeAttribute(QWebElement* theWrappedObject, const QString&  name);
   void removeAttributeNS(QWebElement* theWrappedObject, const QString&  namespaceUri, const QString&  name);
   void removeClass(QWebElement* theWrappedObject, const QString&  name);
   void removeFromDocument(QWebElement* theWrappedObject);
   void render(QWebElement* theWrappedObject, QPainter*  painter);
   void replace(QWebElement* theWrappedObject, const QString&  markup);
   void replace(QWebElement* theWrappedObject, const QWebElement&  element);
   void setAttribute(QWebElement* theWrappedObject, const QString&  name, const QString&  value);
   void setAttributeNS(QWebElement* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value);
   void setFocus(QWebElement* theWrappedObject);
   void setInnerXml(QWebElement* theWrappedObject, const QString&  markup);
   void setOuterXml(QWebElement* theWrappedObject, const QString&  markup);
   void setPlainText(QWebElement* theWrappedObject, const QString&  text);
   void setStyleProperty(QWebElement* theWrappedObject, const QString&  name, const QString&  value);
   QString  styleProperty(QWebElement* theWrappedObject, const QString&  name, QWebElement::StyleResolveStrategy  strategy) const;
   QString  tagName(QWebElement* theWrappedObject) const;
   QWebElement*  takeFromDocument(QWebElement* theWrappedObject);
   QString  toInnerXml(QWebElement* theWrappedObject) const;
   QString  toOuterXml(QWebElement* theWrappedObject) const;
   QString  toPlainText(QWebElement* theWrappedObject) const;
   void toggleClass(QWebElement* theWrappedObject, const QString&  name);
   QWebFrame*  webFrame(QWebElement* theWrappedObject) const;
    bool __nonzero__(QWebElement* obj) { return !obj->isNull(); }
};





class PythonQtPublicPromoter_QWebFrame : public QWebFrame
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return QWebFrame::event(arg__1); }
};

class PythonQtWrapper_QWebFrame : public QObject
{ Q_OBJECT
public:
public slots:
   void addToJavaScriptWindowObject(QWebFrame* theWrappedObject, const QString&  name, QObject*  object);
   QUrl  baseUrl(QWebFrame* theWrappedObject) const;
   QList<QWebFrame* >  childFrames(QWebFrame* theWrappedObject) const;
   QSize  contentsSize(QWebFrame* theWrappedObject) const;
   QWebElement  documentElement(QWebFrame* theWrappedObject) const;
   bool  event(QWebFrame* theWrappedObject, QEvent*  arg__1);
   QWebElement  findFirstElement(QWebFrame* theWrappedObject, const QString&  selectorQuery) const;
   QString  frameName(QWebFrame* theWrappedObject) const;
   QRect  geometry(QWebFrame* theWrappedObject) const;
   bool  hasFocus(QWebFrame* theWrappedObject) const;
   QWebHitTestResult  hitTestContent(QWebFrame* theWrappedObject, const QPoint&  pos) const;
   QIcon  icon(QWebFrame* theWrappedObject) const;
   void load(QWebFrame* theWrappedObject, const QNetworkRequest&  request, QNetworkAccessManager::Operation  operation = QNetworkAccessManager::GetOperation, const QByteArray&  body = QByteArray());
   void load(QWebFrame* theWrappedObject, const QUrl&  url);
   QMultiMap<QString , QString >  metaData(QWebFrame* theWrappedObject) const;
   QWebPage*  page(QWebFrame* theWrappedObject) const;
   QWebFrame*  parentFrame(QWebFrame* theWrappedObject) const;
   QPoint  pos(QWebFrame* theWrappedObject) const;
   void render(QWebFrame* theWrappedObject, QPainter*  arg__1);
   void render(QWebFrame* theWrappedObject, QPainter*  arg__1, const QRegion&  clip);
   QString  renderTreeDump(QWebFrame* theWrappedObject) const;
   QUrl  requestedUrl(QWebFrame* theWrappedObject) const;
   void scroll(QWebFrame* theWrappedObject, int  arg__1, int  arg__2);
   QRect  scrollBarGeometry(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   int  scrollBarMaximum(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   int  scrollBarMinimum(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   Qt::ScrollBarPolicy  scrollBarPolicy(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   int  scrollBarValue(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   QPoint  scrollPosition(QWebFrame* theWrappedObject) const;
   QWebSecurityOrigin  securityOrigin(QWebFrame* theWrappedObject) const;
   void setContent(QWebFrame* theWrappedObject, const QByteArray&  data, const QString&  mimeType = QString(), const QUrl&  baseUrl = QUrl());
   void setFocus(QWebFrame* theWrappedObject);
   void setHtml(QWebFrame* theWrappedObject, const QString&  html, const QUrl&  baseUrl = QUrl());
   void setScrollBarPolicy(QWebFrame* theWrappedObject, Qt::Orientation  orientation, Qt::ScrollBarPolicy  policy);
   void setScrollBarValue(QWebFrame* theWrappedObject, Qt::Orientation  orientation, int  value);
   void setScrollPosition(QWebFrame* theWrappedObject, const QPoint&  pos);
   void setTextSizeMultiplier(QWebFrame* theWrappedObject, qreal  factor);
   void setUrl(QWebFrame* theWrappedObject, const QUrl&  url);
   void setZoomFactor(QWebFrame* theWrappedObject, qreal  factor);
   qreal  textSizeMultiplier(QWebFrame* theWrappedObject) const;
   QString  title(QWebFrame* theWrappedObject) const;
   QString  toHtml(QWebFrame* theWrappedObject) const;
   QString  toPlainText(QWebFrame* theWrappedObject) const;
   QUrl  url(QWebFrame* theWrappedObject) const;
   qreal  zoomFactor(QWebFrame* theWrappedObject) const;
};





class PythonQtShell_QWebHistoryInterface : public QWebHistoryInterface
{
public:
    PythonQtShell_QWebHistoryInterface(QObject*  parent = 0):QWebHistoryInterface(parent),_wrapper(NULL) {};

virtual void addHistoryEntry(const QString&  url);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  historyContains(const QString&  url) const;
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebHistoryInterface : public QObject
{ Q_OBJECT
public:
public slots:
QWebHistoryInterface* new_QWebHistoryInterface(QObject*  parent = 0);
void delete_QWebHistoryInterface(QWebHistoryInterface* obj) { delete obj; } 
   QWebHistoryInterface*  static_QWebHistoryInterface_defaultInterface();
   void static_QWebHistoryInterface_setDefaultInterface(QWebHistoryInterface*  defaultInterface);
};





class PythonQtWrapper_QWebHitTestResult : public QObject
{ Q_OBJECT
public:
public slots:
QWebHitTestResult* new_QWebHitTestResult();
QWebHitTestResult* new_QWebHitTestResult(const QWebHitTestResult&  other);
void delete_QWebHitTestResult(QWebHitTestResult* obj) { delete obj; } 
   QString  alternateText(QWebHitTestResult* theWrappedObject) const;
   QRect  boundingRect(QWebHitTestResult* theWrappedObject) const;
   QWebElement  element(QWebHitTestResult* theWrappedObject) const;
   QWebElement  enclosingBlockElement(QWebHitTestResult* theWrappedObject) const;
   QWebFrame*  frame(QWebHitTestResult* theWrappedObject) const;
   QUrl  imageUrl(QWebHitTestResult* theWrappedObject) const;
   bool  isContentEditable(QWebHitTestResult* theWrappedObject) const;
   bool  isContentSelected(QWebHitTestResult* theWrappedObject) const;
   bool  isNull(QWebHitTestResult* theWrappedObject) const;
   QWebElement  linkElement(QWebHitTestResult* theWrappedObject) const;
   QWebFrame*  linkTargetFrame(QWebHitTestResult* theWrappedObject) const;
   QString  linkText(QWebHitTestResult* theWrappedObject) const;
   QUrl  linkTitle(QWebHitTestResult* theWrappedObject) const;
   QUrl  linkUrl(QWebHitTestResult* theWrappedObject) const;
   QPixmap  pixmap(QWebHitTestResult* theWrappedObject) const;
   QPoint  pos(QWebHitTestResult* theWrappedObject) const;
   QString  title(QWebHitTestResult* theWrappedObject) const;
    bool __nonzero__(QWebHitTestResult* obj) { return !obj->isNull(); }
};





class PythonQtShell_QWebInspector : public QWebInspector
{
public:
    PythonQtShell_QWebInspector(QWidget*  parent = 0):QWebInspector(parent),_wrapper(NULL) {};

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
virtual void hideEvent(QHideEvent*  event);
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
virtual void resizeEvent(QResizeEvent*  event);
virtual void showEvent(QShowEvent*  event);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWebInspector : public QWebInspector
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return QWebInspector::event(arg__1); }
inline void promoted_hideEvent(QHideEvent*  event) { QWebInspector::hideEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QWebInspector::resizeEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { QWebInspector::showEvent(event); }
};

class PythonQtWrapper_QWebInspector : public QObject
{ Q_OBJECT
public:
public slots:
QWebInspector* new_QWebInspector(QWidget*  parent = 0);
void delete_QWebInspector(QWebInspector* obj) { delete obj; } 
   bool  event(QWebInspector* theWrappedObject, QEvent*  arg__1);
   void hideEvent(QWebInspector* theWrappedObject, QHideEvent*  event);
   QWebPage*  page(QWebInspector* theWrappedObject) const;
   void resizeEvent(QWebInspector* theWrappedObject, QResizeEvent*  event);
   void setPage(QWebInspector* theWrappedObject, QWebPage*  page);
   void showEvent(QWebInspector* theWrappedObject, QShowEvent*  event);
   QSize  sizeHint(QWebInspector* theWrappedObject) const;
};





class PythonQtShell_QWebPage : public QWebPage
{
public:
    PythonQtShell_QWebPage(QObject*  parent = 0):QWebPage(parent),_wrapper(NULL) {};

virtual bool  acceptNavigationRequest(QWebFrame*  frame, const QNetworkRequest&  request, QWebPage::NavigationType  type);
virtual void childEvent(QChildEvent*  arg__1);
virtual QString  chooseFile(QWebFrame*  originatingFrame, const QString&  oldFile);
virtual QObject*  createPlugin(const QString&  classid, const QUrl&  url, const QStringList&  paramNames, const QStringList&  paramValues);
virtual QWebPage*  createWindow(QWebPage::WebWindowType  type);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  extension(QWebPage::Extension  extension, const QWebPage::ExtensionOption*  option = 0, QWebPage::ExtensionReturn*  output = 0);
virtual void javaScriptAlert(QWebFrame*  originatingFrame, const QString&  msg);
virtual bool  javaScriptConfirm(QWebFrame*  originatingFrame, const QString&  msg);
virtual void javaScriptConsoleMessage(const QString&  message, int  lineNumber, const QString&  sourceID);
virtual bool  javaScriptPrompt(QWebFrame*  originatingFrame, const QString&  msg, const QString&  defaultValue, QString*  result);
virtual bool  supportsExtension(QWebPage::Extension  extension) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void triggerAction(QWebPage::WebAction  action, bool  checked = false);
virtual QString  userAgentForUrl(const QUrl&  url) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWebPage : public QWebPage
{ public:
inline bool  promoted_acceptNavigationRequest(QWebFrame*  frame, const QNetworkRequest&  request, QWebPage::NavigationType  type) { return QWebPage::acceptNavigationRequest(frame, request, type); }
inline QString  promoted_chooseFile(QWebFrame*  originatingFrame, const QString&  oldFile) { return QWebPage::chooseFile(originatingFrame, oldFile); }
inline QObject*  promoted_createPlugin(const QString&  classid, const QUrl&  url, const QStringList&  paramNames, const QStringList&  paramValues) { return QWebPage::createPlugin(classid, url, paramNames, paramValues); }
inline QWebPage*  promoted_createWindow(QWebPage::WebWindowType  type) { return QWebPage::createWindow(type); }
inline bool  promoted_event(QEvent*  arg__1) { return QWebPage::event(arg__1); }
inline bool  promoted_extension(QWebPage::Extension  extension, const QWebPage::ExtensionOption*  option = 0, QWebPage::ExtensionReturn*  output = 0) { return QWebPage::extension(extension, option, output); }
inline void promoted_javaScriptAlert(QWebFrame*  originatingFrame, const QString&  msg) { QWebPage::javaScriptAlert(originatingFrame, msg); }
inline bool  promoted_javaScriptConfirm(QWebFrame*  originatingFrame, const QString&  msg) { return QWebPage::javaScriptConfirm(originatingFrame, msg); }
inline void promoted_javaScriptConsoleMessage(const QString&  message, int  lineNumber, const QString&  sourceID) { QWebPage::javaScriptConsoleMessage(message, lineNumber, sourceID); }
inline bool  promoted_javaScriptPrompt(QWebFrame*  originatingFrame, const QString&  msg, const QString&  defaultValue, QString*  result) { return QWebPage::javaScriptPrompt(originatingFrame, msg, defaultValue, result); }
inline bool  promoted_supportsExtension(QWebPage::Extension  extension) const { return QWebPage::supportsExtension(extension); }
inline void promoted_triggerAction(QWebPage::WebAction  action, bool  checked = false) { QWebPage::triggerAction(action, checked); }
inline QString  promoted_userAgentForUrl(const QUrl&  url) const { return QWebPage::userAgentForUrl(url); }
};

class PythonQtWrapper_QWebPage : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ErrorDomain WebWindowType FindFlag Extension )
Q_FLAGS(FindFlags )
enum ErrorDomain{
  QtNetwork = QWebPage::QtNetwork,   Http = QWebPage::Http,   WebKit = QWebPage::WebKit};
enum WebWindowType{
  WebBrowserWindow = QWebPage::WebBrowserWindow,   WebModalDialog = QWebPage::WebModalDialog};
enum FindFlag{
  FindBackward = QWebPage::FindBackward,   FindCaseSensitively = QWebPage::FindCaseSensitively,   FindWrapsAroundDocument = QWebPage::FindWrapsAroundDocument,   HighlightAllOccurrences = QWebPage::HighlightAllOccurrences};
enum Extension{
  ChooseMultipleFilesExtension = QWebPage::ChooseMultipleFilesExtension,   ErrorPageExtension = QWebPage::ErrorPageExtension};
Q_DECLARE_FLAGS(FindFlags, FindFlag)
public slots:
QWebPage* new_QWebPage(QObject*  parent = 0);
void delete_QWebPage(QWebPage* obj) { delete obj; } 
   bool  acceptNavigationRequest(QWebPage* theWrappedObject, QWebFrame*  frame, const QNetworkRequest&  request, QWebPage::NavigationType  type);
   QAction*  action(QWebPage* theWrappedObject, QWebPage::WebAction  action) const;
   quint64  bytesReceived(QWebPage* theWrappedObject) const;
   QString  chooseFile(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  oldFile);
   QObject*  createPlugin(QWebPage* theWrappedObject, const QString&  classid, const QUrl&  url, const QStringList&  paramNames, const QStringList&  paramValues);
   QMenu*  createStandardContextMenu(QWebPage* theWrappedObject);
   QWebPage*  createWindow(QWebPage* theWrappedObject, QWebPage::WebWindowType  type);
   QWebFrame*  currentFrame(QWebPage* theWrappedObject) const;
   bool  event(QWebPage* theWrappedObject, QEvent*  arg__1);
   bool  extension(QWebPage* theWrappedObject, QWebPage::Extension  extension, const QWebPage::ExtensionOption*  option = 0, QWebPage::ExtensionReturn*  output = 0);
   bool  findText(QWebPage* theWrappedObject, const QString&  subString, QWebPage::FindFlags  options = 0);
   bool  focusNextPrevChild(QWebPage* theWrappedObject, bool  next);
   bool  forwardUnsupportedContent(QWebPage* theWrappedObject) const;
   QWebFrame*  frameAt(QWebPage* theWrappedObject, const QPoint&  pos) const;
   QWebHistory*  history(QWebPage* theWrappedObject) const;
   QVariant  inputMethodQuery(QWebPage* theWrappedObject, Qt::InputMethodQuery  property) const;
   bool  isContentEditable(QWebPage* theWrappedObject) const;
   bool  isModified(QWebPage* theWrappedObject) const;
   void javaScriptAlert(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  msg);
   bool  javaScriptConfirm(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  msg);
   void javaScriptConsoleMessage(QWebPage* theWrappedObject, const QString&  message, int  lineNumber, const QString&  sourceID);
   bool  javaScriptPrompt(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  msg, const QString&  defaultValue, QString*  result);
   QWebPage::LinkDelegationPolicy  linkDelegationPolicy(QWebPage* theWrappedObject) const;
   QWebFrame*  mainFrame(QWebPage* theWrappedObject) const;
   QNetworkAccessManager*  networkAccessManager(QWebPage* theWrappedObject) const;
   QPalette  palette(QWebPage* theWrappedObject) const;
   QWebPluginFactory*  pluginFactory(QWebPage* theWrappedObject) const;
   QSize  preferredContentsSize(QWebPage* theWrappedObject) const;
   QString  selectedText(QWebPage* theWrappedObject) const;
   void setContentEditable(QWebPage* theWrappedObject, bool  editable);
   void setForwardUnsupportedContent(QWebPage* theWrappedObject, bool  forward);
   void setLinkDelegationPolicy(QWebPage* theWrappedObject, QWebPage::LinkDelegationPolicy  policy);
   void setNetworkAccessManager(QWebPage* theWrappedObject, QNetworkAccessManager*  manager);
   void setPalette(QWebPage* theWrappedObject, const QPalette&  palette);
   void setPluginFactory(QWebPage* theWrappedObject, QWebPluginFactory*  factory);
   void setPreferredContentsSize(QWebPage* theWrappedObject, const QSize&  size) const;
   void setView(QWebPage* theWrappedObject, QWidget*  view);
   void setViewportSize(QWebPage* theWrappedObject, const QSize&  size) const;
   QWebSettings*  settings(QWebPage* theWrappedObject) const;
   bool  supportsExtension(QWebPage* theWrappedObject, QWebPage::Extension  extension) const;
   bool  swallowContextMenuEvent(QWebPage* theWrappedObject, QContextMenuEvent*  event);
   quint64  totalBytes(QWebPage* theWrappedObject) const;
   void triggerAction(QWebPage* theWrappedObject, QWebPage::WebAction  action, bool  checked = false);
   QUndoStack*  undoStack(QWebPage* theWrappedObject) const;
   void updatePositionDependentActions(QWebPage* theWrappedObject, const QPoint&  pos);
   QString  userAgentForUrl(QWebPage* theWrappedObject, const QUrl&  url) const;
   QWidget*  view(QWebPage* theWrappedObject) const;
   QSize  viewportSize(QWebPage* theWrappedObject) const;
};





class PythonQtShell_QWebPage_ChooseMultipleFilesExtensionOption : public QWebPage::ChooseMultipleFilesExtensionOption
{
public:
    PythonQtShell_QWebPage_ChooseMultipleFilesExtensionOption():QWebPage::ChooseMultipleFilesExtensionOption(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPage_ChooseMultipleFilesExtensionOption : public QObject
{ Q_OBJECT
public:
public slots:
QWebPage::ChooseMultipleFilesExtensionOption* new_QWebPage_ChooseMultipleFilesExtensionOption();
void delete_QWebPage_ChooseMultipleFilesExtensionOption(QWebPage::ChooseMultipleFilesExtensionOption* obj) { delete obj; } 
void py_set_parentFrame(QWebPage::ChooseMultipleFilesExtensionOption* theWrappedObject, QWebFrame*  parentFrame){ theWrappedObject->parentFrame = parentFrame; }
QWebFrame*  py_get_parentFrame(QWebPage::ChooseMultipleFilesExtensionOption* theWrappedObject){ return theWrappedObject->parentFrame; }
void py_set_suggestedFileNames(QWebPage::ChooseMultipleFilesExtensionOption* theWrappedObject, QStringList  suggestedFileNames){ theWrappedObject->suggestedFileNames = suggestedFileNames; }
QStringList  py_get_suggestedFileNames(QWebPage::ChooseMultipleFilesExtensionOption* theWrappedObject){ return theWrappedObject->suggestedFileNames; }
};





class PythonQtShell_QWebPage_ChooseMultipleFilesExtensionReturn : public QWebPage::ChooseMultipleFilesExtensionReturn
{
public:
    PythonQtShell_QWebPage_ChooseMultipleFilesExtensionReturn():QWebPage::ChooseMultipleFilesExtensionReturn(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPage_ChooseMultipleFilesExtensionReturn : public QObject
{ Q_OBJECT
public:
public slots:
QWebPage::ChooseMultipleFilesExtensionReturn* new_QWebPage_ChooseMultipleFilesExtensionReturn();
void delete_QWebPage_ChooseMultipleFilesExtensionReturn(QWebPage::ChooseMultipleFilesExtensionReturn* obj) { delete obj; } 
void py_set_fileNames(QWebPage::ChooseMultipleFilesExtensionReturn* theWrappedObject, QStringList  fileNames){ theWrappedObject->fileNames = fileNames; }
QStringList  py_get_fileNames(QWebPage::ChooseMultipleFilesExtensionReturn* theWrappedObject){ return theWrappedObject->fileNames; }
};





class PythonQtShell_QWebPage_ErrorPageExtensionOption : public QWebPage::ErrorPageExtensionOption
{
public:
    PythonQtShell_QWebPage_ErrorPageExtensionOption():QWebPage::ErrorPageExtensionOption(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPage_ErrorPageExtensionOption : public QObject
{ Q_OBJECT
public:
public slots:
QWebPage::ErrorPageExtensionOption* new_QWebPage_ErrorPageExtensionOption();
void delete_QWebPage_ErrorPageExtensionOption(QWebPage::ErrorPageExtensionOption* obj) { delete obj; } 
void py_set_error(QWebPage::ErrorPageExtensionOption* theWrappedObject, int  error){ theWrappedObject->error = error; }
int  py_get_error(QWebPage::ErrorPageExtensionOption* theWrappedObject){ return theWrappedObject->error; }
void py_set_domain(QWebPage::ErrorPageExtensionOption* theWrappedObject, QWebPage::ErrorDomain  domain){ theWrappedObject->domain = domain; }
QWebPage::ErrorDomain  py_get_domain(QWebPage::ErrorPageExtensionOption* theWrappedObject){ return theWrappedObject->domain; }
void py_set_errorString(QWebPage::ErrorPageExtensionOption* theWrappedObject, QString  errorString){ theWrappedObject->errorString = errorString; }
QString  py_get_errorString(QWebPage::ErrorPageExtensionOption* theWrappedObject){ return theWrappedObject->errorString; }
void py_set_url(QWebPage::ErrorPageExtensionOption* theWrappedObject, QUrl  url){ theWrappedObject->url = url; }
QUrl  py_get_url(QWebPage::ErrorPageExtensionOption* theWrappedObject){ return theWrappedObject->url; }
void py_set_frame(QWebPage::ErrorPageExtensionOption* theWrappedObject, QWebFrame*  frame){ theWrappedObject->frame = frame; }
QWebFrame*  py_get_frame(QWebPage::ErrorPageExtensionOption* theWrappedObject){ return theWrappedObject->frame; }
};





class PythonQtShell_QWebPage_ErrorPageExtensionReturn : public QWebPage::ErrorPageExtensionReturn
{
public:
    PythonQtShell_QWebPage_ErrorPageExtensionReturn():QWebPage::ErrorPageExtensionReturn(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPage_ErrorPageExtensionReturn : public QObject
{ Q_OBJECT
public:
public slots:
QWebPage::ErrorPageExtensionReturn* new_QWebPage_ErrorPageExtensionReturn();
void delete_QWebPage_ErrorPageExtensionReturn(QWebPage::ErrorPageExtensionReturn* obj) { delete obj; } 
void py_set_baseUrl(QWebPage::ErrorPageExtensionReturn* theWrappedObject, QUrl  baseUrl){ theWrappedObject->baseUrl = baseUrl; }
QUrl  py_get_baseUrl(QWebPage::ErrorPageExtensionReturn* theWrappedObject){ return theWrappedObject->baseUrl; }
void py_set_contentType(QWebPage::ErrorPageExtensionReturn* theWrappedObject, QString  contentType){ theWrappedObject->contentType = contentType; }
QString  py_get_contentType(QWebPage::ErrorPageExtensionReturn* theWrappedObject){ return theWrappedObject->contentType; }
void py_set_encoding(QWebPage::ErrorPageExtensionReturn* theWrappedObject, QString  encoding){ theWrappedObject->encoding = encoding; }
QString  py_get_encoding(QWebPage::ErrorPageExtensionReturn* theWrappedObject){ return theWrappedObject->encoding; }
void py_set_content(QWebPage::ErrorPageExtensionReturn* theWrappedObject, QByteArray  content){ theWrappedObject->content = content; }
QByteArray  py_get_content(QWebPage::ErrorPageExtensionReturn* theWrappedObject){ return theWrappedObject->content; }
};





class PythonQtShell_QWebPage_ExtensionOption : public QWebPage::ExtensionOption
{
public:
    PythonQtShell_QWebPage_ExtensionOption():QWebPage::ExtensionOption(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPage_ExtensionOption : public QObject
{ Q_OBJECT
public:
public slots:
QWebPage::ExtensionOption* new_QWebPage_ExtensionOption();
void delete_QWebPage_ExtensionOption(QWebPage::ExtensionOption* obj) { delete obj; } 
};





class PythonQtShell_QWebPage_ExtensionReturn : public QWebPage::ExtensionReturn
{
public:
    PythonQtShell_QWebPage_ExtensionReturn():QWebPage::ExtensionReturn(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPage_ExtensionReturn : public QObject
{ Q_OBJECT
public:
public slots:
QWebPage::ExtensionReturn* new_QWebPage_ExtensionReturn();
void delete_QWebPage_ExtensionReturn(QWebPage::ExtensionReturn* obj) { delete obj; } 
};





class PythonQtShell_QWebPluginFactory : public QWebPluginFactory
{
public:
    PythonQtShell_QWebPluginFactory(QObject*  parent = 0):QWebPluginFactory(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual QObject*  create(const QString&  mimeType, const QUrl&  arg__2, const QStringList&  argumentNames, const QStringList&  argumentValues) const;
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  extension(QWebPluginFactory::Extension  extension, const QWebPluginFactory::ExtensionOption*  option = 0, QWebPluginFactory::ExtensionReturn*  output = 0);
virtual QList<QWebPluginFactory::Plugin >  plugins() const;
virtual void refreshPlugins();
virtual bool  supportsExtension(QWebPluginFactory::Extension  extension) const;
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWebPluginFactory : public QWebPluginFactory
{ public:
inline bool  promoted_extension(QWebPluginFactory::Extension  extension, const QWebPluginFactory::ExtensionOption*  option = 0, QWebPluginFactory::ExtensionReturn*  output = 0) { return QWebPluginFactory::extension(extension, option, output); }
inline void promoted_refreshPlugins() { QWebPluginFactory::refreshPlugins(); }
inline bool  promoted_supportsExtension(QWebPluginFactory::Extension  extension) const { return QWebPluginFactory::supportsExtension(extension); }
};

class PythonQtWrapper_QWebPluginFactory : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Extension )
enum Extension{
};
public slots:
QWebPluginFactory* new_QWebPluginFactory(QObject*  parent = 0);
void delete_QWebPluginFactory(QWebPluginFactory* obj) { delete obj; } 
   bool  extension(QWebPluginFactory* theWrappedObject, QWebPluginFactory::Extension  extension, const QWebPluginFactory::ExtensionOption*  option = 0, QWebPluginFactory::ExtensionReturn*  output = 0);
   void refreshPlugins(QWebPluginFactory* theWrappedObject);
   bool  supportsExtension(QWebPluginFactory* theWrappedObject, QWebPluginFactory::Extension  extension) const;
};





class PythonQtShell_QWebPluginFactory_ExtensionOption : public QWebPluginFactory::ExtensionOption
{
public:
    PythonQtShell_QWebPluginFactory_ExtensionOption():QWebPluginFactory::ExtensionOption(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPluginFactory_ExtensionOption : public QObject
{ Q_OBJECT
public:
public slots:
QWebPluginFactory::ExtensionOption* new_QWebPluginFactory_ExtensionOption();
void delete_QWebPluginFactory_ExtensionOption(QWebPluginFactory::ExtensionOption* obj) { delete obj; } 
};





class PythonQtShell_QWebPluginFactory_ExtensionReturn : public QWebPluginFactory::ExtensionReturn
{
public:
    PythonQtShell_QWebPluginFactory_ExtensionReturn():QWebPluginFactory::ExtensionReturn(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPluginFactory_ExtensionReturn : public QObject
{ Q_OBJECT
public:
public slots:
QWebPluginFactory::ExtensionReturn* new_QWebPluginFactory_ExtensionReturn();
void delete_QWebPluginFactory_ExtensionReturn(QWebPluginFactory::ExtensionReturn* obj) { delete obj; } 
};





class PythonQtShell_QWebPluginFactory_MimeType : public QWebPluginFactory::MimeType
{
public:
    PythonQtShell_QWebPluginFactory_MimeType():QWebPluginFactory::MimeType(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPluginFactory_MimeType : public QObject
{ Q_OBJECT
public:
public slots:
QWebPluginFactory::MimeType* new_QWebPluginFactory_MimeType();
QWebPluginFactory::MimeType* new_QWebPluginFactory_MimeType(const QWebPluginFactory::MimeType& other) {
PythonQtShell_QWebPluginFactory_MimeType* a = new PythonQtShell_QWebPluginFactory_MimeType();
*((QWebPluginFactory::MimeType*)a) = other;
return a; }
void delete_QWebPluginFactory_MimeType(QWebPluginFactory::MimeType* obj) { delete obj; } 
   bool  __ne__(QWebPluginFactory::MimeType* theWrappedObject, const QWebPluginFactory::MimeType&  other) const;
   bool  __eq__(QWebPluginFactory::MimeType* theWrappedObject, const QWebPluginFactory::MimeType&  other) const;
void py_set_description(QWebPluginFactory::MimeType* theWrappedObject, QString  description){ theWrappedObject->description = description; }
QString  py_get_description(QWebPluginFactory::MimeType* theWrappedObject){ return theWrappedObject->description; }
void py_set_name(QWebPluginFactory::MimeType* theWrappedObject, QString  name){ theWrappedObject->name = name; }
QString  py_get_name(QWebPluginFactory::MimeType* theWrappedObject){ return theWrappedObject->name; }
void py_set_fileExtensions(QWebPluginFactory::MimeType* theWrappedObject, QStringList  fileExtensions){ theWrappedObject->fileExtensions = fileExtensions; }
QStringList  py_get_fileExtensions(QWebPluginFactory::MimeType* theWrappedObject){ return theWrappedObject->fileExtensions; }
};





class PythonQtShell_QWebPluginFactory_Plugin : public QWebPluginFactory::Plugin
{
public:
    PythonQtShell_QWebPluginFactory_Plugin():QWebPluginFactory::Plugin(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPluginFactory_Plugin : public QObject
{ Q_OBJECT
public:
public slots:
QWebPluginFactory::Plugin* new_QWebPluginFactory_Plugin();
QWebPluginFactory::Plugin* new_QWebPluginFactory_Plugin(const QWebPluginFactory::Plugin& other) {
PythonQtShell_QWebPluginFactory_Plugin* a = new PythonQtShell_QWebPluginFactory_Plugin();
*((QWebPluginFactory::Plugin*)a) = other;
return a; }
void delete_QWebPluginFactory_Plugin(QWebPluginFactory::Plugin* obj) { delete obj; } 
void py_set_description(QWebPluginFactory::Plugin* theWrappedObject, QString  description){ theWrappedObject->description = description; }
QString  py_get_description(QWebPluginFactory::Plugin* theWrappedObject){ return theWrappedObject->description; }
void py_set_name(QWebPluginFactory::Plugin* theWrappedObject, QString  name){ theWrappedObject->name = name; }
QString  py_get_name(QWebPluginFactory::Plugin* theWrappedObject){ return theWrappedObject->name; }
};





class PythonQtWrapper_QWebSecurityOrigin : public QObject
{ Q_OBJECT
public:
public slots:
QWebSecurityOrigin* new_QWebSecurityOrigin(const QWebSecurityOrigin&  other);
void delete_QWebSecurityOrigin(QWebSecurityOrigin* obj) { delete obj; } 
   void static_QWebSecurityOrigin_addLocalScheme(const QString&  scheme);
   QList<QWebSecurityOrigin >  static_QWebSecurityOrigin_allOrigins();
   qint64  databaseQuota(QWebSecurityOrigin* theWrappedObject) const;
   qint64  databaseUsage(QWebSecurityOrigin* theWrappedObject) const;
   QList<QWebDatabase >  databases(QWebSecurityOrigin* theWrappedObject) const;
   QString  host(QWebSecurityOrigin* theWrappedObject) const;
   QStringList  static_QWebSecurityOrigin_localSchemes();
   QWebSecurityOrigin*  operator_assign(QWebSecurityOrigin* theWrappedObject, const QWebSecurityOrigin&  other);
   int  port(QWebSecurityOrigin* theWrappedObject) const;
   void static_QWebSecurityOrigin_removeLocalScheme(const QString&  scheme);
   QString  scheme(QWebSecurityOrigin* theWrappedObject) const;
   void setDatabaseQuota(QWebSecurityOrigin* theWrappedObject, qint64  quota);
};





class PythonQtWrapper_QWebSettings : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FontSize WebGraphic FontFamily WebAttribute )
enum FontSize{
  MinimumFontSize = QWebSettings::MinimumFontSize,   MinimumLogicalFontSize = QWebSettings::MinimumLogicalFontSize,   DefaultFontSize = QWebSettings::DefaultFontSize,   DefaultFixedFontSize = QWebSettings::DefaultFixedFontSize};
enum WebGraphic{
  MissingImageGraphic = QWebSettings::MissingImageGraphic,   MissingPluginGraphic = QWebSettings::MissingPluginGraphic,   DefaultFrameIconGraphic = QWebSettings::DefaultFrameIconGraphic,   TextAreaSizeGripCornerGraphic = QWebSettings::TextAreaSizeGripCornerGraphic};
enum FontFamily{
  StandardFont = QWebSettings::StandardFont,   FixedFont = QWebSettings::FixedFont,   SerifFont = QWebSettings::SerifFont,   SansSerifFont = QWebSettings::SansSerifFont,   CursiveFont = QWebSettings::CursiveFont,   FantasyFont = QWebSettings::FantasyFont};
enum WebAttribute{
  AutoLoadImages = QWebSettings::AutoLoadImages,   JavascriptEnabled = QWebSettings::JavascriptEnabled,   JavaEnabled = QWebSettings::JavaEnabled,   PluginsEnabled = QWebSettings::PluginsEnabled,   PrivateBrowsingEnabled = QWebSettings::PrivateBrowsingEnabled,   JavascriptCanOpenWindows = QWebSettings::JavascriptCanOpenWindows,   JavascriptCanAccessClipboard = QWebSettings::JavascriptCanAccessClipboard,   DeveloperExtrasEnabled = QWebSettings::DeveloperExtrasEnabled,   LinksIncludedInFocusChain = QWebSettings::LinksIncludedInFocusChain,   ZoomTextOnly = QWebSettings::ZoomTextOnly,   PrintElementBackgrounds = QWebSettings::PrintElementBackgrounds,   OfflineStorageDatabaseEnabled = QWebSettings::OfflineStorageDatabaseEnabled,   OfflineWebApplicationCacheEnabled = QWebSettings::OfflineWebApplicationCacheEnabled,   LocalStorageEnabled = QWebSettings::LocalStorageEnabled,   LocalStorageDatabaseEnabled = QWebSettings::LocalStorageDatabaseEnabled,   LocalContentCanAccessRemoteUrls = QWebSettings::LocalContentCanAccessRemoteUrls,   DnsPrefetchEnabled = QWebSettings::DnsPrefetchEnabled};
public slots:
   void static_QWebSettings_clearIconDatabase();
   void static_QWebSettings_clearMemoryCaches();
   QString  defaultTextEncoding(QWebSettings* theWrappedObject) const;
   void static_QWebSettings_enablePersistentStorage(const QString&  path = QString());
   QString  fontFamily(QWebSettings* theWrappedObject, QWebSettings::FontFamily  which) const;
   int  fontSize(QWebSettings* theWrappedObject, QWebSettings::FontSize  type) const;
   QWebSettings*  static_QWebSettings_globalSettings();
   QString  static_QWebSettings_iconDatabasePath();
   QIcon  static_QWebSettings_iconForUrl(const QUrl&  url);
   QString  localStoragePath(QWebSettings* theWrappedObject) const;
   int  static_QWebSettings_maximumPagesInCache();
   qint64  static_QWebSettings_offlineStorageDefaultQuota();
   QString  static_QWebSettings_offlineStoragePath();
   QString  static_QWebSettings_offlineWebApplicationCachePath();
   qint64  static_QWebSettings_offlineWebApplicationCacheQuota();
   void resetAttribute(QWebSettings* theWrappedObject, QWebSettings::WebAttribute  attr);
   void resetFontFamily(QWebSettings* theWrappedObject, QWebSettings::FontFamily  which);
   void resetFontSize(QWebSettings* theWrappedObject, QWebSettings::FontSize  type);
   void setAttribute(QWebSettings* theWrappedObject, QWebSettings::WebAttribute  attr, bool  on);
   void setDefaultTextEncoding(QWebSettings* theWrappedObject, const QString&  encoding);
   void setFontFamily(QWebSettings* theWrappedObject, QWebSettings::FontFamily  which, const QString&  family);
   void setFontSize(QWebSettings* theWrappedObject, QWebSettings::FontSize  type, int  size);
   void static_QWebSettings_setIconDatabasePath(const QString&  location);
   void setLocalStoragePath(QWebSettings* theWrappedObject, const QString&  path);
   void static_QWebSettings_setMaximumPagesInCache(int  pages);
   void static_QWebSettings_setObjectCacheCapacities(int  cacheMinDeadCapacity, int  cacheMaxDead, int  totalCapacity);
   void static_QWebSettings_setOfflineStorageDefaultQuota(qint64  maximumSize);
   void static_QWebSettings_setOfflineStoragePath(const QString&  path);
   void static_QWebSettings_setOfflineWebApplicationCachePath(const QString&  path);
   void static_QWebSettings_setOfflineWebApplicationCacheQuota(qint64  maximumSize);
   void setUserStyleSheetUrl(QWebSettings* theWrappedObject, const QUrl&  location);
   void static_QWebSettings_setWebGraphic(QWebSettings::WebGraphic  type, const QPixmap&  graphic);
   bool  testAttribute(QWebSettings* theWrappedObject, QWebSettings::WebAttribute  attr) const;
   QUrl  userStyleSheetUrl(QWebSettings* theWrappedObject) const;
   QPixmap  static_QWebSettings_webGraphic(QWebSettings::WebGraphic  type);
};





class PythonQtShell_QWebView : public QWebView
{
public:
    PythonQtShell_QWebView(QWidget*  parent = 0):QWebView(parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual QWebView*  createWindow(QWebPage::WebWindowType  type);
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
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  property) const;
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

class PythonQtPublicPromoter_QWebView : public QWebView
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { QWebView::changeEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { QWebView::contextMenuEvent(arg__1); }
inline QWebView*  promoted_createWindow(QWebPage::WebWindowType  type) { return QWebView::createWindow(type); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  arg__1) { QWebView::dragEnterEvent(arg__1); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  arg__1) { QWebView::dragLeaveEvent(arg__1); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  arg__1) { QWebView::dragMoveEvent(arg__1); }
inline void promoted_dropEvent(QDropEvent*  arg__1) { QWebView::dropEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QWebView::event(arg__1); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { QWebView::focusInEvent(arg__1); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QWebView::focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { QWebView::focusOutEvent(arg__1); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QWebView::inputMethodEvent(arg__1); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  property) const { return QWebView::inputMethodQuery(property); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QWebView::keyPressEvent(arg__1); }
inline void promoted_keyReleaseEvent(QKeyEvent*  arg__1) { QWebView::keyReleaseEvent(arg__1); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  arg__1) { QWebView::mouseDoubleClickEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QWebView::mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QWebView::mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QWebView::mouseReleaseEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QWebView::paintEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QWebView::resizeEvent(arg__1); }
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { QWebView::wheelEvent(arg__1); }
};

class PythonQtWrapper_QWebView : public QObject
{ Q_OBJECT
public:
public slots:
QWebView* new_QWebView(QWidget*  parent = 0);
void delete_QWebView(QWebView* obj) { delete obj; } 
   void changeEvent(QWebView* theWrappedObject, QEvent*  arg__1);
   void contextMenuEvent(QWebView* theWrappedObject, QContextMenuEvent*  arg__1);
   QWebView*  createWindow(QWebView* theWrappedObject, QWebPage::WebWindowType  type);
   void dragEnterEvent(QWebView* theWrappedObject, QDragEnterEvent*  arg__1);
   void dragLeaveEvent(QWebView* theWrappedObject, QDragLeaveEvent*  arg__1);
   void dragMoveEvent(QWebView* theWrappedObject, QDragMoveEvent*  arg__1);
   void dropEvent(QWebView* theWrappedObject, QDropEvent*  arg__1);
   bool  event(QWebView* theWrappedObject, QEvent*  arg__1);
   bool  findText(QWebView* theWrappedObject, const QString&  subString, QWebPage::FindFlags  options = 0);
   void focusInEvent(QWebView* theWrappedObject, QFocusEvent*  arg__1);
   bool  focusNextPrevChild(QWebView* theWrappedObject, bool  next);
   void focusOutEvent(QWebView* theWrappedObject, QFocusEvent*  arg__1);
   QWebHistory*  history(QWebView* theWrappedObject) const;
   QIcon  icon(QWebView* theWrappedObject) const;
   void inputMethodEvent(QWebView* theWrappedObject, QInputMethodEvent*  arg__1);
   QVariant  inputMethodQuery(QWebView* theWrappedObject, Qt::InputMethodQuery  property) const;
   bool  isModified(QWebView* theWrappedObject) const;
   void keyPressEvent(QWebView* theWrappedObject, QKeyEvent*  arg__1);
   void keyReleaseEvent(QWebView* theWrappedObject, QKeyEvent*  arg__1);
   void load(QWebView* theWrappedObject, const QNetworkRequest&  request, QNetworkAccessManager::Operation  operation = QNetworkAccessManager::GetOperation, const QByteArray&  body = QByteArray());
   void load(QWebView* theWrappedObject, const QUrl&  url);
   void mouseDoubleClickEvent(QWebView* theWrappedObject, QMouseEvent*  arg__1);
   void mouseMoveEvent(QWebView* theWrappedObject, QMouseEvent*  arg__1);
   void mousePressEvent(QWebView* theWrappedObject, QMouseEvent*  arg__1);
   void mouseReleaseEvent(QWebView* theWrappedObject, QMouseEvent*  arg__1);
   QWebPage*  page(QWebView* theWrappedObject) const;
   QAction*  pageAction(QWebView* theWrappedObject, QWebPage::WebAction  action) const;
   void paintEvent(QWebView* theWrappedObject, QPaintEvent*  arg__1);
   QPainter::RenderHints  renderHints(QWebView* theWrappedObject) const;
   void resizeEvent(QWebView* theWrappedObject, QResizeEvent*  arg__1);
   QString  selectedText(QWebView* theWrappedObject) const;
   void setContent(QWebView* theWrappedObject, const QByteArray&  data, const QString&  mimeType = QString(), const QUrl&  baseUrl = QUrl());
   void setHtml(QWebView* theWrappedObject, const QString&  html, const QUrl&  baseUrl = QUrl());
   void setPage(QWebView* theWrappedObject, QWebPage*  page);
   void setRenderHint(QWebView* theWrappedObject, QPainter::RenderHint  hint, bool  enabled = true);
   void setRenderHints(QWebView* theWrappedObject, QPainter::RenderHints  hints);
   void setTextSizeMultiplier(QWebView* theWrappedObject, qreal  factor);
   void setUrl(QWebView* theWrappedObject, const QUrl&  url);
   void setZoomFactor(QWebView* theWrappedObject, qreal  factor);
   QWebSettings*  settings(QWebView* theWrappedObject) const;
   QSize  sizeHint(QWebView* theWrappedObject) const;
   qreal  textSizeMultiplier(QWebView* theWrappedObject) const;
   QString  title(QWebView* theWrappedObject) const;
   void triggerPageAction(QWebView* theWrappedObject, QWebPage::WebAction  action, bool  checked = false);
   QUrl  url(QWebView* theWrappedObject) const;
   void wheelEvent(QWebView* theWrappedObject, QWheelEvent*  arg__1);
   qreal  zoomFactor(QWebView* theWrappedObject) const;
};


