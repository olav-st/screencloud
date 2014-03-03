#include "com_trolltech_qt_xml1.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qtextcodec.h>
#include <qvector.h>
#include <qxmlstream.h>

QXmlStreamAttribute* PythonQtWrapper_QXmlStreamAttribute::new_QXmlStreamAttribute()
{ 
return new QXmlStreamAttribute(); }

QXmlStreamAttribute* PythonQtWrapper_QXmlStreamAttribute::new_QXmlStreamAttribute(const QString&  namespaceUri, const QString&  name, const QString&  value)
{ 
return new QXmlStreamAttribute(namespaceUri, name, value); }

QXmlStreamAttribute* PythonQtWrapper_QXmlStreamAttribute::new_QXmlStreamAttribute(const QString&  qualifiedName, const QString&  value)
{ 
return new QXmlStreamAttribute(qualifiedName, value); }

QXmlStreamAttribute* PythonQtWrapper_QXmlStreamAttribute::new_QXmlStreamAttribute(const QXmlStreamAttribute&  arg__1)
{ 
return new QXmlStreamAttribute(arg__1); }

bool  PythonQtWrapper_QXmlStreamAttribute::isDefault(QXmlStreamAttribute* theWrappedObject) const
{
  return ( theWrappedObject->isDefault());
}

QStringRef  PythonQtWrapper_QXmlStreamAttribute::name(QXmlStreamAttribute* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QStringRef  PythonQtWrapper_QXmlStreamAttribute::namespaceUri(QXmlStreamAttribute* theWrappedObject) const
{
  return ( theWrappedObject->namespaceUri());
}

bool  PythonQtWrapper_QXmlStreamAttribute::__ne__(QXmlStreamAttribute* theWrappedObject, const QXmlStreamAttribute&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QXmlStreamAttribute::__eq__(QXmlStreamAttribute* theWrappedObject, const QXmlStreamAttribute&  other) const
{
  return ( (*theWrappedObject)== other);
}

QStringRef  PythonQtWrapper_QXmlStreamAttribute::prefix(QXmlStreamAttribute* theWrappedObject) const
{
  return ( theWrappedObject->prefix());
}

QStringRef  PythonQtWrapper_QXmlStreamAttribute::qualifiedName(QXmlStreamAttribute* theWrappedObject) const
{
  return ( theWrappedObject->qualifiedName());
}

QStringRef  PythonQtWrapper_QXmlStreamAttribute::value(QXmlStreamAttribute* theWrappedObject) const
{
  return ( theWrappedObject->value());
}



QXmlStreamAttributes* PythonQtWrapper_QXmlStreamAttributes::new_QXmlStreamAttributes()
{ 
return new PythonQtShell_QXmlStreamAttributes(); }

void PythonQtWrapper_QXmlStreamAttributes::append(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value)
{
  ( theWrappedObject->append(namespaceUri, name, value));
}

void PythonQtWrapper_QXmlStreamAttributes::append(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName, const QString&  value)
{
  ( theWrappedObject->append(qualifiedName, value));
}

void PythonQtWrapper_QXmlStreamAttributes::append(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  attribute)
{
  ( theWrappedObject->append(attribute));
}

const QXmlStreamAttribute*  PythonQtWrapper_QXmlStreamAttributes::at(QXmlStreamAttributes* theWrappedObject, int  i) const
{
  return &( theWrappedObject->at(i));
}

int  PythonQtWrapper_QXmlStreamAttributes::capacity(QXmlStreamAttributes* theWrappedObject) const
{
  return ( theWrappedObject->capacity());
}

void PythonQtWrapper_QXmlStreamAttributes::clear(QXmlStreamAttributes* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QXmlStreamAttributes::contains(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t) const
{
  return ( theWrappedObject->contains(t));
}

int  PythonQtWrapper_QXmlStreamAttributes::count(QXmlStreamAttributes* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

int  PythonQtWrapper_QXmlStreamAttributes::count(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t) const
{
  return ( theWrappedObject->count(t));
}

bool  PythonQtWrapper_QXmlStreamAttributes::empty(QXmlStreamAttributes* theWrappedObject) const
{
  return ( theWrappedObject->empty());
}

bool  PythonQtWrapper_QXmlStreamAttributes::endsWith(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t) const
{
  return ( theWrappedObject->endsWith(t));
}

QVector<QXmlStreamAttribute >*  PythonQtWrapper_QXmlStreamAttributes::fill(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  size)
{
  return &( theWrappedObject->fill(t, size));
}

const QXmlStreamAttribute*  PythonQtWrapper_QXmlStreamAttributes::first(QXmlStreamAttributes* theWrappedObject) const
{
  return &( theWrappedObject->first());
}

QVector<QXmlStreamAttribute >  PythonQtWrapper_QXmlStreamAttributes::static_QXmlStreamAttributes_fromList(const QList<QXmlStreamAttribute >&  list)
{
  return (QXmlStreamAttributes::fromList(list));
}

bool  PythonQtWrapper_QXmlStreamAttributes::hasAttribute(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name) const
{
  return ( theWrappedObject->hasAttribute(namespaceUri, name));
}

bool  PythonQtWrapper_QXmlStreamAttributes::hasAttribute(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName) const
{
  return ( theWrappedObject->hasAttribute(qualifiedName));
}

int  PythonQtWrapper_QXmlStreamAttributes::indexOf(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  from) const
{
  return ( theWrappedObject->indexOf(t, from));
}

bool  PythonQtWrapper_QXmlStreamAttributes::isEmpty(QXmlStreamAttributes* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

const QXmlStreamAttribute*  PythonQtWrapper_QXmlStreamAttributes::last(QXmlStreamAttributes* theWrappedObject) const
{
  return &( theWrappedObject->last());
}

int  PythonQtWrapper_QXmlStreamAttributes::lastIndexOf(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  from) const
{
  return ( theWrappedObject->lastIndexOf(t, from));
}

QVector<QXmlStreamAttribute >  PythonQtWrapper_QXmlStreamAttributes::mid(QXmlStreamAttributes* theWrappedObject, int  pos, int  length) const
{
  return ( theWrappedObject->mid(pos, length));
}

bool  PythonQtWrapper_QXmlStreamAttributes::__ne__(QXmlStreamAttributes* theWrappedObject, const QVector<QXmlStreamAttribute >&  v) const
{
  return ( (*theWrappedObject)!= v);
}

bool  PythonQtWrapper_QXmlStreamAttributes::__eq__(QXmlStreamAttributes* theWrappedObject, const QVector<QXmlStreamAttribute >&  v) const
{
  return ( (*theWrappedObject)== v);
}

void PythonQtWrapper_QXmlStreamAttributes::prepend(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t)
{
  ( theWrappedObject->prepend(t));
}

void PythonQtWrapper_QXmlStreamAttributes::remove(QXmlStreamAttributes* theWrappedObject, int  i)
{
  ( theWrappedObject->remove(i));
}

void PythonQtWrapper_QXmlStreamAttributes::remove(QXmlStreamAttributes* theWrappedObject, int  i, int  n)
{
  ( theWrappedObject->remove(i, n));
}

void PythonQtWrapper_QXmlStreamAttributes::replace(QXmlStreamAttributes* theWrappedObject, int  i, const QXmlStreamAttribute&  t)
{
  ( theWrappedObject->replace(i, t));
}

void PythonQtWrapper_QXmlStreamAttributes::reserve(QXmlStreamAttributes* theWrappedObject, int  size)
{
  ( theWrappedObject->reserve(size));
}

void PythonQtWrapper_QXmlStreamAttributes::resize(QXmlStreamAttributes* theWrappedObject, int  size)
{
  ( theWrappedObject->resize(size));
}

void PythonQtWrapper_QXmlStreamAttributes::setSharable(QXmlStreamAttributes* theWrappedObject, bool  sharable)
{
  ( theWrappedObject->setSharable(sharable));
}

int  PythonQtWrapper_QXmlStreamAttributes::size(QXmlStreamAttributes* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

void PythonQtWrapper_QXmlStreamAttributes::squeeze(QXmlStreamAttributes* theWrappedObject)
{
  ( theWrappedObject->squeeze());
}

bool  PythonQtWrapper_QXmlStreamAttributes::startsWith(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t) const
{
  return ( theWrappedObject->startsWith(t));
}

QList<QXmlStreamAttribute >  PythonQtWrapper_QXmlStreamAttributes::toList(QXmlStreamAttributes* theWrappedObject) const
{
  return ( theWrappedObject->toList());
}

QStringRef  PythonQtWrapper_QXmlStreamAttributes::value(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name) const
{
  return ( theWrappedObject->value(namespaceUri, name));
}

QStringRef  PythonQtWrapper_QXmlStreamAttributes::value(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName) const
{
  return ( theWrappedObject->value(qualifiedName));
}



QXmlStreamEntityDeclaration* PythonQtWrapper_QXmlStreamEntityDeclaration::new_QXmlStreamEntityDeclaration()
{ 
return new QXmlStreamEntityDeclaration(); }

QXmlStreamEntityDeclaration* PythonQtWrapper_QXmlStreamEntityDeclaration::new_QXmlStreamEntityDeclaration(const QXmlStreamEntityDeclaration&  arg__1)
{ 
return new QXmlStreamEntityDeclaration(arg__1); }

QStringRef  PythonQtWrapper_QXmlStreamEntityDeclaration::name(QXmlStreamEntityDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QStringRef  PythonQtWrapper_QXmlStreamEntityDeclaration::notationName(QXmlStreamEntityDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->notationName());
}

bool  PythonQtWrapper_QXmlStreamEntityDeclaration::__ne__(QXmlStreamEntityDeclaration* theWrappedObject, const QXmlStreamEntityDeclaration&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QXmlStreamEntityDeclaration::__eq__(QXmlStreamEntityDeclaration* theWrappedObject, const QXmlStreamEntityDeclaration&  other) const
{
  return ( (*theWrappedObject)== other);
}

QStringRef  PythonQtWrapper_QXmlStreamEntityDeclaration::publicId(QXmlStreamEntityDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->publicId());
}

QStringRef  PythonQtWrapper_QXmlStreamEntityDeclaration::systemId(QXmlStreamEntityDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->systemId());
}

QStringRef  PythonQtWrapper_QXmlStreamEntityDeclaration::value(QXmlStreamEntityDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->value());
}



QXmlStreamNamespaceDeclaration* PythonQtWrapper_QXmlStreamNamespaceDeclaration::new_QXmlStreamNamespaceDeclaration()
{ 
return new QXmlStreamNamespaceDeclaration(); }

QXmlStreamNamespaceDeclaration* PythonQtWrapper_QXmlStreamNamespaceDeclaration::new_QXmlStreamNamespaceDeclaration(const QString&  prefix, const QString&  namespaceUri)
{ 
return new QXmlStreamNamespaceDeclaration(prefix, namespaceUri); }

QXmlStreamNamespaceDeclaration* PythonQtWrapper_QXmlStreamNamespaceDeclaration::new_QXmlStreamNamespaceDeclaration(const QXmlStreamNamespaceDeclaration&  arg__1)
{ 
return new QXmlStreamNamespaceDeclaration(arg__1); }

QStringRef  PythonQtWrapper_QXmlStreamNamespaceDeclaration::namespaceUri(QXmlStreamNamespaceDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->namespaceUri());
}

bool  PythonQtWrapper_QXmlStreamNamespaceDeclaration::__ne__(QXmlStreamNamespaceDeclaration* theWrappedObject, const QXmlStreamNamespaceDeclaration&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QXmlStreamNamespaceDeclaration::__eq__(QXmlStreamNamespaceDeclaration* theWrappedObject, const QXmlStreamNamespaceDeclaration&  other) const
{
  return ( (*theWrappedObject)== other);
}

QStringRef  PythonQtWrapper_QXmlStreamNamespaceDeclaration::prefix(QXmlStreamNamespaceDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->prefix());
}



QXmlStreamNotationDeclaration* PythonQtWrapper_QXmlStreamNotationDeclaration::new_QXmlStreamNotationDeclaration()
{ 
return new QXmlStreamNotationDeclaration(); }

QXmlStreamNotationDeclaration* PythonQtWrapper_QXmlStreamNotationDeclaration::new_QXmlStreamNotationDeclaration(const QXmlStreamNotationDeclaration&  arg__1)
{ 
return new QXmlStreamNotationDeclaration(arg__1); }

QStringRef  PythonQtWrapper_QXmlStreamNotationDeclaration::name(QXmlStreamNotationDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

bool  PythonQtWrapper_QXmlStreamNotationDeclaration::__ne__(QXmlStreamNotationDeclaration* theWrappedObject, const QXmlStreamNotationDeclaration&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QXmlStreamNotationDeclaration::__eq__(QXmlStreamNotationDeclaration* theWrappedObject, const QXmlStreamNotationDeclaration&  other) const
{
  return ( (*theWrappedObject)== other);
}

QStringRef  PythonQtWrapper_QXmlStreamNotationDeclaration::publicId(QXmlStreamNotationDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->publicId());
}

QStringRef  PythonQtWrapper_QXmlStreamNotationDeclaration::systemId(QXmlStreamNotationDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->systemId());
}



QXmlStreamReader* PythonQtWrapper_QXmlStreamReader::new_QXmlStreamReader()
{ 
return new QXmlStreamReader(); }

QXmlStreamReader* PythonQtWrapper_QXmlStreamReader::new_QXmlStreamReader(QIODevice*  device)
{ 
return new QXmlStreamReader(device); }

QXmlStreamReader* PythonQtWrapper_QXmlStreamReader::new_QXmlStreamReader(const QByteArray&  data)
{ 
return new QXmlStreamReader(data); }

QXmlStreamReader* PythonQtWrapper_QXmlStreamReader::new_QXmlStreamReader(const QString&  data)
{ 
return new QXmlStreamReader(data); }

void PythonQtWrapper_QXmlStreamReader::addData(QXmlStreamReader* theWrappedObject, const QByteArray&  data)
{
  ( theWrappedObject->addData(data));
}

void PythonQtWrapper_QXmlStreamReader::addData(QXmlStreamReader* theWrappedObject, const QString&  data)
{
  ( theWrappedObject->addData(data));
}

void PythonQtWrapper_QXmlStreamReader::addExtraNamespaceDeclaration(QXmlStreamReader* theWrappedObject, const QXmlStreamNamespaceDeclaration&  extraNamespaceDeclaraction)
{
  ( theWrappedObject->addExtraNamespaceDeclaration(extraNamespaceDeclaraction));
}

void PythonQtWrapper_QXmlStreamReader::addExtraNamespaceDeclarations(QXmlStreamReader* theWrappedObject, const QVector<QXmlStreamNamespaceDeclaration >&  extraNamespaceDeclaractions)
{
  ( theWrappedObject->addExtraNamespaceDeclarations(extraNamespaceDeclaractions));
}

bool  PythonQtWrapper_QXmlStreamReader::atEnd(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->atEnd());
}

QXmlStreamAttributes  PythonQtWrapper_QXmlStreamReader::attributes(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->attributes());
}

qint64  PythonQtWrapper_QXmlStreamReader::characterOffset(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->characterOffset());
}

void PythonQtWrapper_QXmlStreamReader::clear(QXmlStreamReader* theWrappedObject)
{
  ( theWrappedObject->clear());
}

qint64  PythonQtWrapper_QXmlStreamReader::columnNumber(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->columnNumber());
}

QIODevice*  PythonQtWrapper_QXmlStreamReader::device(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::documentEncoding(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->documentEncoding());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::documentVersion(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->documentVersion());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::dtdName(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->dtdName());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::dtdPublicId(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->dtdPublicId());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::dtdSystemId(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->dtdSystemId());
}

QVector<QXmlStreamEntityDeclaration >  PythonQtWrapper_QXmlStreamReader::entityDeclarations(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->entityDeclarations());
}

QXmlStreamEntityResolver*  PythonQtWrapper_QXmlStreamReader::entityResolver(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->entityResolver());
}

QXmlStreamReader::Error  PythonQtWrapper_QXmlStreamReader::error(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QXmlStreamReader::errorString(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QXmlStreamReader::hasError(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->hasError());
}

bool  PythonQtWrapper_QXmlStreamReader::isCDATA(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isCDATA());
}

bool  PythonQtWrapper_QXmlStreamReader::isCharacters(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isCharacters());
}

bool  PythonQtWrapper_QXmlStreamReader::isComment(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isComment());
}

bool  PythonQtWrapper_QXmlStreamReader::isDTD(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isDTD());
}

bool  PythonQtWrapper_QXmlStreamReader::isEndDocument(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isEndDocument());
}

bool  PythonQtWrapper_QXmlStreamReader::isEndElement(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isEndElement());
}

bool  PythonQtWrapper_QXmlStreamReader::isEntityReference(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isEntityReference());
}

bool  PythonQtWrapper_QXmlStreamReader::isProcessingInstruction(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isProcessingInstruction());
}

bool  PythonQtWrapper_QXmlStreamReader::isStandaloneDocument(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isStandaloneDocument());
}

bool  PythonQtWrapper_QXmlStreamReader::isStartDocument(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isStartDocument());
}

bool  PythonQtWrapper_QXmlStreamReader::isStartElement(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isStartElement());
}

bool  PythonQtWrapper_QXmlStreamReader::isWhitespace(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isWhitespace());
}

qint64  PythonQtWrapper_QXmlStreamReader::lineNumber(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->lineNumber());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::name(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QVector<QXmlStreamNamespaceDeclaration >  PythonQtWrapper_QXmlStreamReader::namespaceDeclarations(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->namespaceDeclarations());
}

bool  PythonQtWrapper_QXmlStreamReader::namespaceProcessing(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->namespaceProcessing());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::namespaceUri(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->namespaceUri());
}

QVector<QXmlStreamNotationDeclaration >  PythonQtWrapper_QXmlStreamReader::notationDeclarations(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->notationDeclarations());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::prefix(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->prefix());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::processingInstructionData(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->processingInstructionData());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::processingInstructionTarget(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->processingInstructionTarget());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::qualifiedName(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->qualifiedName());
}

void PythonQtWrapper_QXmlStreamReader::raiseError(QXmlStreamReader* theWrappedObject, const QString&  message)
{
  ( theWrappedObject->raiseError(message));
}

QString  PythonQtWrapper_QXmlStreamReader::readElementText(QXmlStreamReader* theWrappedObject)
{
  return ( theWrappedObject->readElementText());
}

QString  PythonQtWrapper_QXmlStreamReader::readElementText(QXmlStreamReader* theWrappedObject, QXmlStreamReader::ReadElementTextBehaviour  behaviour)
{
  return ( theWrappedObject->readElementText(behaviour));
}

QXmlStreamReader::TokenType  PythonQtWrapper_QXmlStreamReader::readNext(QXmlStreamReader* theWrappedObject)
{
  return ( theWrappedObject->readNext());
}

bool  PythonQtWrapper_QXmlStreamReader::readNextStartElement(QXmlStreamReader* theWrappedObject)
{
  return ( theWrappedObject->readNextStartElement());
}

void PythonQtWrapper_QXmlStreamReader::setDevice(QXmlStreamReader* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setDevice(device));
}

void PythonQtWrapper_QXmlStreamReader::setEntityResolver(QXmlStreamReader* theWrappedObject, QXmlStreamEntityResolver*  resolver)
{
  ( theWrappedObject->setEntityResolver(resolver));
}

void PythonQtWrapper_QXmlStreamReader::setNamespaceProcessing(QXmlStreamReader* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setNamespaceProcessing(arg__1));
}

void PythonQtWrapper_QXmlStreamReader::skipCurrentElement(QXmlStreamReader* theWrappedObject)
{
  ( theWrappedObject->skipCurrentElement());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::text(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

QString  PythonQtWrapper_QXmlStreamReader::tokenString(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->tokenString());
}

QXmlStreamReader::TokenType  PythonQtWrapper_QXmlStreamReader::tokenType(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->tokenType());
}



QXmlStreamWriter* PythonQtWrapper_QXmlStreamWriter::new_QXmlStreamWriter()
{ 
return new QXmlStreamWriter(); }

QXmlStreamWriter* PythonQtWrapper_QXmlStreamWriter::new_QXmlStreamWriter(QByteArray*  array)
{ 
return new QXmlStreamWriter(array); }

QXmlStreamWriter* PythonQtWrapper_QXmlStreamWriter::new_QXmlStreamWriter(QIODevice*  device)
{ 
return new QXmlStreamWriter(device); }

bool  PythonQtWrapper_QXmlStreamWriter::autoFormatting(QXmlStreamWriter* theWrappedObject) const
{
  return ( theWrappedObject->autoFormatting());
}

int  PythonQtWrapper_QXmlStreamWriter::autoFormattingIndent(QXmlStreamWriter* theWrappedObject) const
{
  return ( theWrappedObject->autoFormattingIndent());
}

QTextCodec*  PythonQtWrapper_QXmlStreamWriter::codec(QXmlStreamWriter* theWrappedObject) const
{
  return ( theWrappedObject->codec());
}

QIODevice*  PythonQtWrapper_QXmlStreamWriter::device(QXmlStreamWriter* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

void PythonQtWrapper_QXmlStreamWriter::setAutoFormatting(QXmlStreamWriter* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setAutoFormatting(arg__1));
}

void PythonQtWrapper_QXmlStreamWriter::setAutoFormattingIndent(QXmlStreamWriter* theWrappedObject, int  spacesOrTabs)
{
  ( theWrappedObject->setAutoFormattingIndent(spacesOrTabs));
}

void PythonQtWrapper_QXmlStreamWriter::setCodec(QXmlStreamWriter* theWrappedObject, QTextCodec*  codec)
{
  ( theWrappedObject->setCodec(codec));
}

void PythonQtWrapper_QXmlStreamWriter::setCodec(QXmlStreamWriter* theWrappedObject, const char*  codecName)
{
  ( theWrappedObject->setCodec(codecName));
}

void PythonQtWrapper_QXmlStreamWriter::setDevice(QXmlStreamWriter* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setDevice(device));
}

void PythonQtWrapper_QXmlStreamWriter::writeAttribute(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value)
{
  ( theWrappedObject->writeAttribute(namespaceUri, name, value));
}

void PythonQtWrapper_QXmlStreamWriter::writeAttribute(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName, const QString&  value)
{
  ( theWrappedObject->writeAttribute(qualifiedName, value));
}

void PythonQtWrapper_QXmlStreamWriter::writeAttribute(QXmlStreamWriter* theWrappedObject, const QXmlStreamAttribute&  attribute)
{
  ( theWrappedObject->writeAttribute(attribute));
}

void PythonQtWrapper_QXmlStreamWriter::writeAttributes(QXmlStreamWriter* theWrappedObject, const QXmlStreamAttributes&  attributes)
{
  ( theWrappedObject->writeAttributes(attributes));
}

void PythonQtWrapper_QXmlStreamWriter::writeCDATA(QXmlStreamWriter* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->writeCDATA(text));
}

void PythonQtWrapper_QXmlStreamWriter::writeCharacters(QXmlStreamWriter* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->writeCharacters(text));
}

void PythonQtWrapper_QXmlStreamWriter::writeComment(QXmlStreamWriter* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->writeComment(text));
}

void PythonQtWrapper_QXmlStreamWriter::writeCurrentToken(QXmlStreamWriter* theWrappedObject, const QXmlStreamReader&  reader)
{
  ( theWrappedObject->writeCurrentToken(reader));
}

void PythonQtWrapper_QXmlStreamWriter::writeDTD(QXmlStreamWriter* theWrappedObject, const QString&  dtd)
{
  ( theWrappedObject->writeDTD(dtd));
}

void PythonQtWrapper_QXmlStreamWriter::writeDefaultNamespace(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri)
{
  ( theWrappedObject->writeDefaultNamespace(namespaceUri));
}

void PythonQtWrapper_QXmlStreamWriter::writeEmptyElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name)
{
  ( theWrappedObject->writeEmptyElement(namespaceUri, name));
}

void PythonQtWrapper_QXmlStreamWriter::writeEmptyElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName)
{
  ( theWrappedObject->writeEmptyElement(qualifiedName));
}

void PythonQtWrapper_QXmlStreamWriter::writeEndDocument(QXmlStreamWriter* theWrappedObject)
{
  ( theWrappedObject->writeEndDocument());
}

void PythonQtWrapper_QXmlStreamWriter::writeEndElement(QXmlStreamWriter* theWrappedObject)
{
  ( theWrappedObject->writeEndElement());
}

void PythonQtWrapper_QXmlStreamWriter::writeEntityReference(QXmlStreamWriter* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->writeEntityReference(name));
}

void PythonQtWrapper_QXmlStreamWriter::writeNamespace(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  prefix)
{
  ( theWrappedObject->writeNamespace(namespaceUri, prefix));
}

void PythonQtWrapper_QXmlStreamWriter::writeProcessingInstruction(QXmlStreamWriter* theWrappedObject, const QString&  target, const QString&  data)
{
  ( theWrappedObject->writeProcessingInstruction(target, data));
}

void PythonQtWrapper_QXmlStreamWriter::writeStartDocument(QXmlStreamWriter* theWrappedObject)
{
  ( theWrappedObject->writeStartDocument());
}

void PythonQtWrapper_QXmlStreamWriter::writeStartDocument(QXmlStreamWriter* theWrappedObject, const QString&  version)
{
  ( theWrappedObject->writeStartDocument(version));
}

void PythonQtWrapper_QXmlStreamWriter::writeStartDocument(QXmlStreamWriter* theWrappedObject, const QString&  version, bool  standalone)
{
  ( theWrappedObject->writeStartDocument(version, standalone));
}

void PythonQtWrapper_QXmlStreamWriter::writeStartElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name)
{
  ( theWrappedObject->writeStartElement(namespaceUri, name));
}

void PythonQtWrapper_QXmlStreamWriter::writeStartElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName)
{
  ( theWrappedObject->writeStartElement(qualifiedName));
}

void PythonQtWrapper_QXmlStreamWriter::writeTextElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  text)
{
  ( theWrappedObject->writeTextElement(namespaceUri, name, text));
}

void PythonQtWrapper_QXmlStreamWriter::writeTextElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName, const QString&  text)
{
  ( theWrappedObject->writeTextElement(qualifiedName, text));
}


