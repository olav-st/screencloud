#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qabstractmessagehandler.h>
#include <qabstracturiresolver.h>
#include <qabstractxmlnodemodel.h>
#include <qabstractxmlreceiver.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qnetworkaccessmanager.h>
#include <qobject.h>
#include <qsimplexmlnodemodel.h>
#include <qsourcelocation.h>
#include <qtextcodec.h>
#include <qurl.h>
#include <qvector.h>
#include <qxmlformatter.h>
#include <qxmlname.h>
#include <qxmlnamepool.h>
#include <qxmlquery.h>
#include <qxmlresultitems.h>
#include <qxmlschema.h>
#include <qxmlschemavalidator.h>
#include <qxmlserializer.h>



class PythonQtShell_QAbstractMessageHandler : public QAbstractMessageHandler
{
public:

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void handleMessage(QtMsgType  type, const QString&  description, const QUrl&  identifier, const QSourceLocation&  sourceLocation);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAbstractMessageHandler : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QAbstractMessageHandler(QAbstractMessageHandler* obj) { delete obj; } 
   void message(QAbstractMessageHandler* theWrappedObject, QtMsgType  type, const QString&  description, const QUrl&  identifier = QUrl(), const QSourceLocation&  sourceLocation = QSourceLocation());
};





class PythonQtShell_QAbstractUriResolver : public QAbstractUriResolver
{
public:
    PythonQtShell_QAbstractUriResolver(QObject*  parent = 0):QAbstractUriResolver(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QUrl  resolve(const QUrl&  relative, const QUrl&  baseURI) const;
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAbstractUriResolver : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractUriResolver* new_QAbstractUriResolver(QObject*  parent = 0);
void delete_QAbstractUriResolver(QAbstractUriResolver* obj) { delete obj; } 
};





class PythonQtShell_QAbstractXmlNodeModel : public QAbstractXmlNodeModel
{
public:

virtual QVector<QXmlNodeModelIndex >  attributes(const QXmlNodeModelIndex&  element) const;
virtual QUrl  baseUri(const QXmlNodeModelIndex&  ni) const;
virtual QXmlNodeModelIndex::DocumentOrder  compareOrder(const QXmlNodeModelIndex&  ni1, const QXmlNodeModelIndex&  ni2) const;
virtual QUrl  documentUri(const QXmlNodeModelIndex&  ni) const;
virtual QXmlNodeModelIndex  elementById(const QXmlName&  NCName) const;
virtual bool  isDeepEqual(const QXmlNodeModelIndex&  ni1, const QXmlNodeModelIndex&  ni2) const;
virtual QXmlNodeModelIndex::NodeKind  kind(const QXmlNodeModelIndex&  ni) const;
virtual QXmlName  name(const QXmlNodeModelIndex&  ni) const;
virtual QVector<QXmlName >  namespaceBindings(const QXmlNodeModelIndex&  n) const;
virtual short  namespaceForPrefix(const QXmlNodeModelIndex&  ni, const short  prefix) const;
virtual QXmlNodeModelIndex  nextFromSimpleAxis(QAbstractXmlNodeModel::SimpleAxis  axis, const QXmlNodeModelIndex&  origin) const;
virtual QVector<QXmlNodeModelIndex >  nodesByIdref(const QXmlName&  NCName) const;
virtual QXmlNodeModelIndex  root(const QXmlNodeModelIndex&  n) const;
virtual QString  stringValue(const QXmlNodeModelIndex&  n) const;
virtual QVariant  typedValue(const QXmlNodeModelIndex&  n) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAbstractXmlNodeModel : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SimpleAxis NodeCopySetting )
enum SimpleAxis{
  Parent = QAbstractXmlNodeModel::Parent,   FirstChild = QAbstractXmlNodeModel::FirstChild,   PreviousSibling = QAbstractXmlNodeModel::PreviousSibling,   NextSibling = QAbstractXmlNodeModel::NextSibling};
enum NodeCopySetting{
  InheritNamespaces = QAbstractXmlNodeModel::InheritNamespaces,   PreserveNamespaces = QAbstractXmlNodeModel::PreserveNamespaces};
public slots:
void delete_QAbstractXmlNodeModel(QAbstractXmlNodeModel* obj) { delete obj; } 
   QSourceLocation  sourceLocation(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  index) const;
};





class PythonQtShell_QAbstractXmlReceiver : public QAbstractXmlReceiver
{
public:
    PythonQtShell_QAbstractXmlReceiver():QAbstractXmlReceiver(),_wrapper(NULL) {};

virtual void atomicValue(const QVariant&  value);
virtual void attribute(const QXmlName&  name, const QStringRef&  value);
virtual void characters(const QStringRef&  value);
virtual void comment(const QString&  value);
virtual void endDocument();
virtual void endElement();
virtual void endOfSequence();
virtual void namespaceBinding(const QXmlName&  name);
virtual void processingInstruction(const QXmlName&  target, const QString&  value);
virtual void startDocument();
virtual void startElement(const QXmlName&  name);
virtual void startOfSequence();
virtual void whitespaceOnly(const QStringRef&  value);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractXmlReceiver : public QAbstractXmlReceiver
{ public:
inline void promoted_whitespaceOnly(const QStringRef&  value) { QAbstractXmlReceiver::whitespaceOnly(value); }
};

class PythonQtWrapper_QAbstractXmlReceiver : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractXmlReceiver* new_QAbstractXmlReceiver();
QAbstractXmlReceiver* new_QAbstractXmlReceiver(const QAbstractXmlReceiver& other) {
PythonQtShell_QAbstractXmlReceiver* a = new PythonQtShell_QAbstractXmlReceiver();
*((QAbstractXmlReceiver*)a) = other;
return a; }
void delete_QAbstractXmlReceiver(QAbstractXmlReceiver* obj) { delete obj; } 
   void whitespaceOnly(QAbstractXmlReceiver* theWrappedObject, const QStringRef&  value);
};





class PythonQtWrapper_QPatternist : public QObject
{ Q_OBJECT
public:
public slots:
};





class PythonQtWrapper_QPatternistSDK : public QObject
{ Q_OBJECT
public:
public slots:
};





class PythonQtShell_QSimpleXmlNodeModel : public QSimpleXmlNodeModel
{
public:
    PythonQtShell_QSimpleXmlNodeModel(const QXmlNamePool&  namePool):QSimpleXmlNodeModel(namePool),_wrapper(NULL) {};

virtual QVector<QXmlNodeModelIndex >  attributes(const QXmlNodeModelIndex&  element) const;
virtual QUrl  baseUri(const QXmlNodeModelIndex&  node) const;
virtual QXmlNodeModelIndex::DocumentOrder  compareOrder(const QXmlNodeModelIndex&  ni1, const QXmlNodeModelIndex&  ni2) const;
virtual QUrl  documentUri(const QXmlNodeModelIndex&  ni) const;
virtual QXmlNodeModelIndex  elementById(const QXmlName&  id) const;
virtual QXmlNodeModelIndex::NodeKind  kind(const QXmlNodeModelIndex&  ni) const;
virtual QXmlName  name(const QXmlNodeModelIndex&  ni) const;
virtual QVector<QXmlName >  namespaceBindings(const QXmlNodeModelIndex&  arg__1) const;
virtual QXmlNodeModelIndex  nextFromSimpleAxis(QAbstractXmlNodeModel::SimpleAxis  axis, const QXmlNodeModelIndex&  origin) const;
virtual QVector<QXmlNodeModelIndex >  nodesByIdref(const QXmlName&  idref) const;
virtual QXmlNodeModelIndex  root(const QXmlNodeModelIndex&  n) const;
virtual QString  stringValue(const QXmlNodeModelIndex&  node) const;
virtual QVariant  typedValue(const QXmlNodeModelIndex&  n) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSimpleXmlNodeModel : public QSimpleXmlNodeModel
{ public:
inline QUrl  promoted_baseUri(const QXmlNodeModelIndex&  node) const { return QSimpleXmlNodeModel::baseUri(node); }
inline QXmlNodeModelIndex  promoted_elementById(const QXmlName&  id) const { return QSimpleXmlNodeModel::elementById(id); }
inline QVector<QXmlName >  promoted_namespaceBindings(const QXmlNodeModelIndex&  arg__1) const { return QSimpleXmlNodeModel::namespaceBindings(arg__1); }
inline QVector<QXmlNodeModelIndex >  promoted_nodesByIdref(const QXmlName&  idref) const { return QSimpleXmlNodeModel::nodesByIdref(idref); }
inline QString  promoted_stringValue(const QXmlNodeModelIndex&  node) const { return QSimpleXmlNodeModel::stringValue(node); }
};

class PythonQtWrapper_QSimpleXmlNodeModel : public QObject
{ Q_OBJECT
public:
public slots:
QSimpleXmlNodeModel* new_QSimpleXmlNodeModel(const QXmlNamePool&  namePool);
void delete_QSimpleXmlNodeModel(QSimpleXmlNodeModel* obj) { delete obj; } 
   QUrl  baseUri(QSimpleXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  node) const;
   QXmlNodeModelIndex  elementById(QSimpleXmlNodeModel* theWrappedObject, const QXmlName&  id) const;
   QXmlNamePool*  namePool(QSimpleXmlNodeModel* theWrappedObject) const;
   QVector<QXmlName >  namespaceBindings(QSimpleXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  arg__1) const;
   QVector<QXmlNodeModelIndex >  nodesByIdref(QSimpleXmlNodeModel* theWrappedObject, const QXmlName&  idref) const;
   QString  stringValue(QSimpleXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  node) const;
};





class PythonQtWrapper_QSourceLocation : public QObject
{ Q_OBJECT
public:
public slots:
QSourceLocation* new_QSourceLocation();
QSourceLocation* new_QSourceLocation(const QSourceLocation&  other);
QSourceLocation* new_QSourceLocation(const QUrl&  uri, int  line = -1, int  column = -1);
void delete_QSourceLocation(QSourceLocation* obj) { delete obj; } 
   qint64  column(QSourceLocation* theWrappedObject) const;
   bool  isNull(QSourceLocation* theWrappedObject) const;
   qint64  line(QSourceLocation* theWrappedObject) const;
   bool  __ne__(QSourceLocation* theWrappedObject, const QSourceLocation&  other) const;
   bool  __eq__(QSourceLocation* theWrappedObject, const QSourceLocation&  other) const;
   void setColumn(QSourceLocation* theWrappedObject, qint64  newColumn);
   void setLine(QSourceLocation* theWrappedObject, qint64  newLine);
   void setUri(QSourceLocation* theWrappedObject, const QUrl&  newUri);
   QUrl  uri(QSourceLocation* theWrappedObject) const;
    QString py_toString(QSourceLocation*);
    bool __nonzero__(QSourceLocation* obj) { return !obj->isNull(); }
};





class PythonQtShell_QXmlFormatter : public QXmlFormatter
{
public:
    PythonQtShell_QXmlFormatter(const QXmlQuery&  query, QIODevice*  outputDevice):QXmlFormatter(query, outputDevice),_wrapper(NULL) {};

virtual void atomicValue(const QVariant&  value);
virtual void attribute(const QXmlName&  name, const QStringRef&  value);
virtual void characters(const QStringRef&  value);
virtual void comment(const QString&  value);
virtual void endDocument();
virtual void endElement();
virtual void endOfSequence();
virtual void namespaceBinding(const QXmlName&  nb);
virtual void processingInstruction(const QXmlName&  name, const QString&  value);
virtual void startDocument();
virtual void startElement(const QXmlName&  name);
virtual void startOfSequence();
virtual void whitespaceOnly(const QStringRef&  value);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QXmlFormatter : public QXmlFormatter
{ public:
inline void promoted_atomicValue(const QVariant&  value) { QXmlFormatter::atomicValue(value); }
inline void promoted_attribute(const QXmlName&  name, const QStringRef&  value) { QXmlFormatter::attribute(name, value); }
inline void promoted_characters(const QStringRef&  value) { QXmlFormatter::characters(value); }
inline void promoted_comment(const QString&  value) { QXmlFormatter::comment(value); }
inline void promoted_endDocument() { QXmlFormatter::endDocument(); }
inline void promoted_endElement() { QXmlFormatter::endElement(); }
inline void promoted_endOfSequence() { QXmlFormatter::endOfSequence(); }
inline void promoted_processingInstruction(const QXmlName&  name, const QString&  value) { QXmlFormatter::processingInstruction(name, value); }
inline void promoted_startDocument() { QXmlFormatter::startDocument(); }
inline void promoted_startElement(const QXmlName&  name) { QXmlFormatter::startElement(name); }
inline void promoted_startOfSequence() { QXmlFormatter::startOfSequence(); }
};

class PythonQtWrapper_QXmlFormatter : public QObject
{ Q_OBJECT
public:
public slots:
QXmlFormatter* new_QXmlFormatter(const QXmlQuery&  query, QIODevice*  outputDevice);
void delete_QXmlFormatter(QXmlFormatter* obj) { delete obj; } 
   void atomicValue(QXmlFormatter* theWrappedObject, const QVariant&  value);
   void attribute(QXmlFormatter* theWrappedObject, const QXmlName&  name, const QStringRef&  value);
   void characters(QXmlFormatter* theWrappedObject, const QStringRef&  value);
   void comment(QXmlFormatter* theWrappedObject, const QString&  value);
   void endDocument(QXmlFormatter* theWrappedObject);
   void endElement(QXmlFormatter* theWrappedObject);
   void endOfSequence(QXmlFormatter* theWrappedObject);
   int  indentationDepth(QXmlFormatter* theWrappedObject) const;
   void processingInstruction(QXmlFormatter* theWrappedObject, const QXmlName&  name, const QString&  value);
   void setIndentationDepth(QXmlFormatter* theWrappedObject, int  depth);
   void startDocument(QXmlFormatter* theWrappedObject);
   void startElement(QXmlFormatter* theWrappedObject, const QXmlName&  name);
   void startOfSequence(QXmlFormatter* theWrappedObject);
};





class PythonQtWrapper_QXmlItem : public QObject
{ Q_OBJECT
public:
public slots:
QXmlItem* new_QXmlItem();
QXmlItem* new_QXmlItem(const QVariant&  atomicValue);
QXmlItem* new_QXmlItem(const QXmlItem&  other);
QXmlItem* new_QXmlItem(const QXmlNodeModelIndex&  node);
void delete_QXmlItem(QXmlItem* obj) { delete obj; } 
   bool  isAtomicValue(QXmlItem* theWrappedObject) const;
   bool  isNode(QXmlItem* theWrappedObject) const;
   bool  isNull(QXmlItem* theWrappedObject) const;
   QVariant  toAtomicValue(QXmlItem* theWrappedObject) const;
   QXmlNodeModelIndex  toNodeModelIndex(QXmlItem* theWrappedObject) const;
    bool __nonzero__(QXmlItem* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QXmlName : public QObject
{ Q_OBJECT
public:
public slots:
QXmlName* new_QXmlName();
QXmlName* new_QXmlName(QXmlNamePool&  namePool, const QString&  localName, const QString&  namespaceURI = QString(), const QString&  prefix = QString());
QXmlName* new_QXmlName(const QXmlName& other) {
QXmlName* a = new QXmlName();
*((QXmlName*)a) = other;
return a; }
void delete_QXmlName(QXmlName* obj) { delete obj; } 
   QXmlName  static_QXmlName_fromClarkName(const QString&  clarkName, const QXmlNamePool&  namePool);
   bool  static_QXmlName_isNCName(const QString&  candidate);
   bool  isNull(QXmlName* theWrappedObject) const;
   QString  localName(QXmlName* theWrappedObject, const QXmlNamePool&  query) const;
   QString  namespaceUri(QXmlName* theWrappedObject, const QXmlNamePool&  query) const;
   bool  __ne__(QXmlName* theWrappedObject, const QXmlName&  other) const;
   bool  __eq__(QXmlName* theWrappedObject, const QXmlName&  other) const;
   QString  prefix(QXmlName* theWrappedObject, const QXmlNamePool&  query) const;
   QString  toClarkName(QXmlName* theWrappedObject, const QXmlNamePool&  query) const;
    bool __nonzero__(QXmlName* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QXmlNamePool : public QObject
{ Q_OBJECT
public:
public slots:
QXmlNamePool* new_QXmlNamePool();
QXmlNamePool* new_QXmlNamePool(const QXmlNamePool&  other);
void delete_QXmlNamePool(QXmlNamePool* obj) { delete obj; } 
};





class PythonQtWrapper_QXmlNodeModelIndex : public QObject
{ Q_OBJECT
public:
Q_ENUMS(NodeKind DocumentOrder )
enum NodeKind{
  Attribute = QXmlNodeModelIndex::Attribute,   Comment = QXmlNodeModelIndex::Comment,   Document = QXmlNodeModelIndex::Document,   Element = QXmlNodeModelIndex::Element,   Namespace = QXmlNodeModelIndex::Namespace,   ProcessingInstruction = QXmlNodeModelIndex::ProcessingInstruction,   Text = QXmlNodeModelIndex::Text};
enum DocumentOrder{
  Precedes = QXmlNodeModelIndex::Precedes,   Is = QXmlNodeModelIndex::Is,   Follows = QXmlNodeModelIndex::Follows};
public slots:
QXmlNodeModelIndex* new_QXmlNodeModelIndex();
QXmlNodeModelIndex* new_QXmlNodeModelIndex(const QXmlNodeModelIndex&  other);
void delete_QXmlNodeModelIndex(QXmlNodeModelIndex* obj) { delete obj; } 
   qint64  additionalData(QXmlNodeModelIndex* theWrappedObject) const;
   qint64  data(QXmlNodeModelIndex* theWrappedObject) const;
   bool  isNull(QXmlNodeModelIndex* theWrappedObject) const;
   const QAbstractXmlNodeModel*  model(QXmlNodeModelIndex* theWrappedObject) const;
   bool  __ne__(QXmlNodeModelIndex* theWrappedObject, const QXmlNodeModelIndex&  other) const;
   bool  __eq__(QXmlNodeModelIndex* theWrappedObject, const QXmlNodeModelIndex&  other) const;
    bool __nonzero__(QXmlNodeModelIndex* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QXmlQuery : public QObject
{ Q_OBJECT
public:
Q_ENUMS(QueryLanguage )
enum QueryLanguage{
  XQuery10 = QXmlQuery::XQuery10,   XSLT20 = QXmlQuery::XSLT20,   XmlSchema11IdentityConstraintSelector = QXmlQuery::XmlSchema11IdentityConstraintSelector,   XmlSchema11IdentityConstraintField = QXmlQuery::XmlSchema11IdentityConstraintField,   XPath20 = QXmlQuery::XPath20};
public slots:
QXmlQuery* new_QXmlQuery();
QXmlQuery* new_QXmlQuery(QXmlQuery::QueryLanguage  queryLanguage, const QXmlNamePool&  np = QXmlNamePool());
QXmlQuery* new_QXmlQuery(const QXmlNamePool&  np);
QXmlQuery* new_QXmlQuery(const QXmlQuery&  other);
void delete_QXmlQuery(QXmlQuery* obj) { delete obj; } 
   void bindVariable(QXmlQuery* theWrappedObject, const QString&  localName, QIODevice*  arg__2);
   void bindVariable(QXmlQuery* theWrappedObject, const QString&  localName, const QXmlItem&  value);
   void bindVariable(QXmlQuery* theWrappedObject, const QString&  localName, const QXmlQuery&  query);
   void bindVariable(QXmlQuery* theWrappedObject, const QXmlName&  name, QIODevice*  arg__2);
   void bindVariable(QXmlQuery* theWrappedObject, const QXmlName&  name, const QXmlItem&  value);
   void bindVariable(QXmlQuery* theWrappedObject, const QXmlName&  name, const QXmlQuery&  query);
   bool  evaluateTo(QXmlQuery* theWrappedObject, QIODevice*  target) const;
   bool  evaluateTo(QXmlQuery* theWrappedObject, QString*  output) const;
   void evaluateTo(QXmlQuery* theWrappedObject, QXmlResultItems*  result) const;
   QXmlName  initialTemplateName(QXmlQuery* theWrappedObject) const;
   bool  isValid(QXmlQuery* theWrappedObject) const;
   QAbstractMessageHandler*  messageHandler(QXmlQuery* theWrappedObject) const;
   QXmlNamePool  namePool(QXmlQuery* theWrappedObject) const;
   QNetworkAccessManager*  networkAccessManager(QXmlQuery* theWrappedObject) const;
   QXmlQuery*  operator_assign(QXmlQuery* theWrappedObject, const QXmlQuery&  other);
   QXmlQuery::QueryLanguage  queryLanguage(QXmlQuery* theWrappedObject) const;
   bool  setFocus(QXmlQuery* theWrappedObject, QIODevice*  document);
   bool  setFocus(QXmlQuery* theWrappedObject, const QString&  focus);
   bool  setFocus(QXmlQuery* theWrappedObject, const QUrl&  documentURI);
   void setFocus(QXmlQuery* theWrappedObject, const QXmlItem&  item);
   void setInitialTemplateName(QXmlQuery* theWrappedObject, const QString&  name);
   void setInitialTemplateName(QXmlQuery* theWrappedObject, const QXmlName&  name);
   void setMessageHandler(QXmlQuery* theWrappedObject, QAbstractMessageHandler*  messageHandler);
   void setNetworkAccessManager(QXmlQuery* theWrappedObject, QNetworkAccessManager*  newManager);
   void setQuery(QXmlQuery* theWrappedObject, QIODevice*  sourceCode, const QUrl&  documentURI = QUrl());
   void setQuery(QXmlQuery* theWrappedObject, const QString&  sourceCode, const QUrl&  documentURI = QUrl());
   void setQuery(QXmlQuery* theWrappedObject, const QUrl&  queryURI, const QUrl&  baseURI = QUrl());
   void setUriResolver(QXmlQuery* theWrappedObject, const QAbstractUriResolver*  resolver);
   const QAbstractUriResolver*  uriResolver(QXmlQuery* theWrappedObject) const;
};





class PythonQtShell_QXmlResultItems : public QXmlResultItems
{
public:
    PythonQtShell_QXmlResultItems():QXmlResultItems(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QXmlResultItems : public QObject
{ Q_OBJECT
public:
public slots:
QXmlResultItems* new_QXmlResultItems();
void delete_QXmlResultItems(QXmlResultItems* obj) { delete obj; } 
   QXmlItem  current(QXmlResultItems* theWrappedObject) const;
   bool  hasError(QXmlResultItems* theWrappedObject) const;
   QXmlItem  next(QXmlResultItems* theWrappedObject);
};





class PythonQtWrapper_QXmlSchema : public QObject
{ Q_OBJECT
public:
public slots:
QXmlSchema* new_QXmlSchema();
QXmlSchema* new_QXmlSchema(const QXmlSchema&  other);
void delete_QXmlSchema(QXmlSchema* obj) { delete obj; } 
   QUrl  documentUri(QXmlSchema* theWrappedObject) const;
   bool  isValid(QXmlSchema* theWrappedObject) const;
   bool  load(QXmlSchema* theWrappedObject, QIODevice*  source, const QUrl&  documentUri = QUrl());
   bool  load(QXmlSchema* theWrappedObject, const QByteArray&  data, const QUrl&  documentUri = QUrl());
   bool  load(QXmlSchema* theWrappedObject, const QUrl&  source);
   QAbstractMessageHandler*  messageHandler(QXmlSchema* theWrappedObject) const;
   QXmlNamePool  namePool(QXmlSchema* theWrappedObject) const;
   QNetworkAccessManager*  networkAccessManager(QXmlSchema* theWrappedObject) const;
   void setMessageHandler(QXmlSchema* theWrappedObject, QAbstractMessageHandler*  handler);
   void setNetworkAccessManager(QXmlSchema* theWrappedObject, QNetworkAccessManager*  networkmanager);
   void setUriResolver(QXmlSchema* theWrappedObject, const QAbstractUriResolver*  resolver);
   const QAbstractUriResolver*  uriResolver(QXmlSchema* theWrappedObject) const;
};





class PythonQtWrapper_QXmlSchemaValidator : public QObject
{ Q_OBJECT
public:
public slots:
QXmlSchemaValidator* new_QXmlSchemaValidator();
QXmlSchemaValidator* new_QXmlSchemaValidator(const QXmlSchema&  schema);
void delete_QXmlSchemaValidator(QXmlSchemaValidator* obj) { delete obj; } 
   QAbstractMessageHandler*  messageHandler(QXmlSchemaValidator* theWrappedObject) const;
   QXmlNamePool  namePool(QXmlSchemaValidator* theWrappedObject) const;
   QNetworkAccessManager*  networkAccessManager(QXmlSchemaValidator* theWrappedObject) const;
   QXmlSchema  schema(QXmlSchemaValidator* theWrappedObject) const;
   void setMessageHandler(QXmlSchemaValidator* theWrappedObject, QAbstractMessageHandler*  handler);
   void setNetworkAccessManager(QXmlSchemaValidator* theWrappedObject, QNetworkAccessManager*  networkmanager);
   void setSchema(QXmlSchemaValidator* theWrappedObject, const QXmlSchema&  schema);
   void setUriResolver(QXmlSchemaValidator* theWrappedObject, const QAbstractUriResolver*  resolver);
   const QAbstractUriResolver*  uriResolver(QXmlSchemaValidator* theWrappedObject) const;
   bool  validate(QXmlSchemaValidator* theWrappedObject, QIODevice*  source, const QUrl&  documentUri = QUrl()) const;
   bool  validate(QXmlSchemaValidator* theWrappedObject, const QByteArray&  data, const QUrl&  documentUri = QUrl()) const;
   bool  validate(QXmlSchemaValidator* theWrappedObject, const QUrl&  source) const;
};





class PythonQtShell_QXmlSerializer : public QXmlSerializer
{
public:
    PythonQtShell_QXmlSerializer(const QXmlQuery&  query, QIODevice*  outputDevice):QXmlSerializer(query, outputDevice),_wrapper(NULL) {};

virtual void atomicValue(const QVariant&  value);
virtual void attribute(const QXmlName&  name, const QStringRef&  value);
virtual void characters(const QStringRef&  value);
virtual void comment(const QString&  value);
virtual void endDocument();
virtual void endElement();
virtual void endOfSequence();
virtual void namespaceBinding(const QXmlName&  nb);
virtual void processingInstruction(const QXmlName&  name, const QString&  value);
virtual void startDocument();
virtual void startElement(const QXmlName&  name);
virtual void startOfSequence();
virtual void whitespaceOnly(const QStringRef&  value);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QXmlSerializer : public QXmlSerializer
{ public:
inline void promoted_atomicValue(const QVariant&  value) { QXmlSerializer::atomicValue(value); }
inline void promoted_attribute(const QXmlName&  name, const QStringRef&  value) { QXmlSerializer::attribute(name, value); }
inline void promoted_characters(const QStringRef&  value) { QXmlSerializer::characters(value); }
inline void promoted_comment(const QString&  value) { QXmlSerializer::comment(value); }
inline void promoted_endDocument() { QXmlSerializer::endDocument(); }
inline void promoted_endElement() { QXmlSerializer::endElement(); }
inline void promoted_endOfSequence() { QXmlSerializer::endOfSequence(); }
inline void promoted_namespaceBinding(const QXmlName&  nb) { QXmlSerializer::namespaceBinding(nb); }
inline void promoted_processingInstruction(const QXmlName&  name, const QString&  value) { QXmlSerializer::processingInstruction(name, value); }
inline void promoted_startDocument() { QXmlSerializer::startDocument(); }
inline void promoted_startElement(const QXmlName&  name) { QXmlSerializer::startElement(name); }
inline void promoted_startOfSequence() { QXmlSerializer::startOfSequence(); }
};

class PythonQtWrapper_QXmlSerializer : public QObject
{ Q_OBJECT
public:
public slots:
QXmlSerializer* new_QXmlSerializer(const QXmlQuery&  query, QIODevice*  outputDevice);
void delete_QXmlSerializer(QXmlSerializer* obj) { delete obj; } 
   void atomicValue(QXmlSerializer* theWrappedObject, const QVariant&  value);
   void attribute(QXmlSerializer* theWrappedObject, const QXmlName&  name, const QStringRef&  value);
   void characters(QXmlSerializer* theWrappedObject, const QStringRef&  value);
   const QTextCodec*  codec(QXmlSerializer* theWrappedObject) const;
   void comment(QXmlSerializer* theWrappedObject, const QString&  value);
   void endDocument(QXmlSerializer* theWrappedObject);
   void endElement(QXmlSerializer* theWrappedObject);
   void endOfSequence(QXmlSerializer* theWrappedObject);
   void namespaceBinding(QXmlSerializer* theWrappedObject, const QXmlName&  nb);
   QIODevice*  outputDevice(QXmlSerializer* theWrappedObject) const;
   void processingInstruction(QXmlSerializer* theWrappedObject, const QXmlName&  name, const QString&  value);
   void setCodec(QXmlSerializer* theWrappedObject, const QTextCodec*  codec);
   void startDocument(QXmlSerializer* theWrappedObject);
   void startElement(QXmlSerializer* theWrappedObject, const QXmlName&  name);
   void startOfSequence(QXmlSerializer* theWrappedObject);
};


