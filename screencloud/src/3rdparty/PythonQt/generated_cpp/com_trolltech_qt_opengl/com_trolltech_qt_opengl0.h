#include <PythonQt.h>
#include <QImage>
#include <QObject>
#include <QPixmap>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgl.h>
#include <qglbuffer.h>
#include <qglcolormap.h>
#include <qglframebufferobject.h>
#include <qglfunctions.h>
#include <qglpixelbuffer.h>
#include <qglshaderprogram.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qimage.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix4x4.h>
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
#include <qtransform.h>
#include <qvector2d.h>
#include <qvector3d.h>
#include <qvector4d.h>
#include <qwidget.h>



class PythonQtWrapper_QGLBuffer : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Access UsagePattern Type )
enum Access{
  ReadOnly = QGLBuffer::ReadOnly,   WriteOnly = QGLBuffer::WriteOnly,   ReadWrite = QGLBuffer::ReadWrite};
enum UsagePattern{
  StreamDraw = QGLBuffer::StreamDraw,   StreamRead = QGLBuffer::StreamRead,   StreamCopy = QGLBuffer::StreamCopy,   StaticDraw = QGLBuffer::StaticDraw,   StaticRead = QGLBuffer::StaticRead,   StaticCopy = QGLBuffer::StaticCopy,   DynamicDraw = QGLBuffer::DynamicDraw,   DynamicRead = QGLBuffer::DynamicRead,   DynamicCopy = QGLBuffer::DynamicCopy};
enum Type{
  VertexBuffer = QGLBuffer::VertexBuffer,   IndexBuffer = QGLBuffer::IndexBuffer,   PixelPackBuffer = QGLBuffer::PixelPackBuffer,   PixelUnpackBuffer = QGLBuffer::PixelUnpackBuffer};
public slots:
QGLBuffer* new_QGLBuffer();
QGLBuffer* new_QGLBuffer(QGLBuffer::Type  type);
QGLBuffer* new_QGLBuffer(const QGLBuffer&  other);
void delete_QGLBuffer(QGLBuffer* obj) { delete obj; } 
   void allocate(QGLBuffer* theWrappedObject, const void*  data, int  count);
   void allocate(QGLBuffer* theWrappedObject, int  count);
   bool  bind(QGLBuffer* theWrappedObject);
   GLuint  bufferId(QGLBuffer* theWrappedObject) const;
   bool  create(QGLBuffer* theWrappedObject);
   void destroy(QGLBuffer* theWrappedObject);
   bool  isCreated(QGLBuffer* theWrappedObject) const;
   void*  map(QGLBuffer* theWrappedObject, QGLBuffer::Access  access);
   QGLBuffer*  operator_assign(QGLBuffer* theWrappedObject, const QGLBuffer&  other);
   bool  read(QGLBuffer* theWrappedObject, int  offset, void*  data, int  count);
   void release(QGLBuffer* theWrappedObject);
   void static_QGLBuffer_release(QGLBuffer::Type  type);
   void setUsagePattern(QGLBuffer* theWrappedObject, QGLBuffer::UsagePattern  value);
   int  size(QGLBuffer* theWrappedObject) const;
   QGLBuffer::Type  type(QGLBuffer* theWrappedObject) const;
   bool  unmap(QGLBuffer* theWrappedObject);
   QGLBuffer::UsagePattern  usagePattern(QGLBuffer* theWrappedObject) const;
   void write(QGLBuffer* theWrappedObject, int  offset, const void*  data, int  count);
};





class PythonQtShell_QGLColormap : public QGLColormap
{
public:
    PythonQtShell_QGLColormap():QGLColormap(),_wrapper(NULL) {};
    PythonQtShell_QGLColormap(const QGLColormap&  arg__1):QGLColormap(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QGLColormap();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QGLColormap : public QObject
{ Q_OBJECT
public:
public slots:
QGLColormap* new_QGLColormap();
QGLColormap* new_QGLColormap(const QGLColormap&  arg__1);
void delete_QGLColormap(QGLColormap* obj) { delete obj; } 
   QColor  entryColor(QGLColormap* theWrappedObject, int  idx) const;
   unsigned int  entryRgb(QGLColormap* theWrappedObject, int  idx) const;
   int  find(QGLColormap* theWrappedObject, unsigned int  color) const;
   int  findNearest(QGLColormap* theWrappedObject, unsigned int  color) const;
   bool  isEmpty(QGLColormap* theWrappedObject) const;
   void setEntries(QGLColormap* theWrappedObject, int  count, const unsigned int*  colors, int  base = 0);
   void setEntry(QGLColormap* theWrappedObject, int  idx, const QColor&  color);
   void setEntry(QGLColormap* theWrappedObject, int  idx, unsigned int  color);
   int  size(QGLColormap* theWrappedObject) const;
};





class PythonQtShell_QGLContext : public QGLContext
{
public:
    PythonQtShell_QGLContext(const QGLFormat&  format):QGLContext(format),_wrapper(NULL) {};
    PythonQtShell_QGLContext(const QGLFormat&  format, QPaintDevice*  device):QGLContext(format, device),_wrapper(NULL) {};

   ~PythonQtShell_QGLContext();

virtual bool  chooseContext(const QGLContext*  shareContext = 0);
virtual bool  create(const QGLContext*  shareContext = 0);
virtual void doneCurrent();
virtual void makeCurrent();
virtual void swapBuffers() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGLContext : public QGLContext
{ public:
inline bool  promoted_chooseContext(const QGLContext*  shareContext = 0) { return QGLContext::chooseContext(shareContext); }
inline bool  promoted_create(const QGLContext*  shareContext = 0) { return QGLContext::create(shareContext); }
inline void promoted_doneCurrent() { QGLContext::doneCurrent(); }
inline void promoted_makeCurrent() { QGLContext::makeCurrent(); }
inline void promoted_swapBuffers() const { QGLContext::swapBuffers(); }
};

class PythonQtWrapper_QGLContext : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BindOption )
Q_FLAGS(BindOptions )
enum BindOption{
  NoBindOption = QGLContext::NoBindOption,   InvertedYBindOption = QGLContext::InvertedYBindOption,   MipmapBindOption = QGLContext::MipmapBindOption,   PremultipliedAlphaBindOption = QGLContext::PremultipliedAlphaBindOption,   LinearFilteringBindOption = QGLContext::LinearFilteringBindOption,   MemoryManagedBindOption = QGLContext::MemoryManagedBindOption,   CanFlipNativePixmapBindOption = QGLContext::CanFlipNativePixmapBindOption,   DefaultBindOption = QGLContext::DefaultBindOption,   InternalBindOption = QGLContext::InternalBindOption};
Q_DECLARE_FLAGS(BindOptions, BindOption)
public slots:
QGLContext* new_QGLContext(const QGLFormat&  format);
QGLContext* new_QGLContext(const QGLFormat&  format, QPaintDevice*  device);
void delete_QGLContext(QGLContext* obj) { delete obj; } 
   bool  static_QGLContext_areSharing(const QGLContext*  context1, const QGLContext*  context2);
   GLuint  bindTexture(QGLContext* theWrappedObject, const QImage&  image, GLenum  target = 0x0DE1, GLint  format = 0x1908);
   GLuint  bindTexture(QGLContext* theWrappedObject, const QImage&  image, GLenum  target, GLint  format, QGLContext::BindOptions  options);
   GLuint  bindTexture(QGLContext* theWrappedObject, const QPixmap&  pixmap, GLenum  target = 0x0DE1, GLint  format = 0x1908);
   GLuint  bindTexture(QGLContext* theWrappedObject, const QPixmap&  pixmap, GLenum  target, GLint  format, QGLContext::BindOptions  options);
   GLuint  bindTexture(QGLContext* theWrappedObject, const QString&  fileName);
   bool  chooseContext(QGLContext* theWrappedObject, const QGLContext*  shareContext = 0);
   bool  create(QGLContext* theWrappedObject, const QGLContext*  shareContext = 0);
   const QGLContext*  static_QGLContext_currentContext();
   void deleteTexture(QGLContext* theWrappedObject, GLuint  tx_id);
   QPaintDevice*  device(QGLContext* theWrappedObject) const;
   void doneCurrent(QGLContext* theWrappedObject);
   void drawTexture(QGLContext* theWrappedObject, const QPointF&  point, GLuint  textureId, GLenum  textureTarget = 0x0DE1);
   void drawTexture(QGLContext* theWrappedObject, const QRectF&  target, GLuint  textureId, GLenum  textureTarget = 0x0DE1);
   QGLFormat  format(QGLContext* theWrappedObject) const;
   bool  isSharing(QGLContext* theWrappedObject) const;
   bool  isValid(QGLContext* theWrappedObject) const;
   void makeCurrent(QGLContext* theWrappedObject);
   QColor  overlayTransparentColor(QGLContext* theWrappedObject) const;
   QGLFormat  requestedFormat(QGLContext* theWrappedObject) const;
   void reset(QGLContext* theWrappedObject);
   void setFormat(QGLContext* theWrappedObject, const QGLFormat&  format);
   void static_QGLContext_setTextureCacheLimit(int  size);
   void swapBuffers(QGLContext* theWrappedObject) const;
   int  static_QGLContext_textureCacheLimit();
};





class PythonQtWrapper_QGLFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OpenGLVersionFlag OpenGLContextProfile )
Q_FLAGS(OpenGLVersionFlags )
enum OpenGLVersionFlag{
  OpenGL_Version_None = QGLFormat::OpenGL_Version_None,   OpenGL_Version_1_1 = QGLFormat::OpenGL_Version_1_1,   OpenGL_Version_1_2 = QGLFormat::OpenGL_Version_1_2,   OpenGL_Version_1_3 = QGLFormat::OpenGL_Version_1_3,   OpenGL_Version_1_4 = QGLFormat::OpenGL_Version_1_4,   OpenGL_Version_1_5 = QGLFormat::OpenGL_Version_1_5,   OpenGL_Version_2_0 = QGLFormat::OpenGL_Version_2_0,   OpenGL_Version_2_1 = QGLFormat::OpenGL_Version_2_1,   OpenGL_ES_Common_Version_1_0 = QGLFormat::OpenGL_ES_Common_Version_1_0,   OpenGL_ES_CommonLite_Version_1_0 = QGLFormat::OpenGL_ES_CommonLite_Version_1_0,   OpenGL_ES_Common_Version_1_1 = QGLFormat::OpenGL_ES_Common_Version_1_1,   OpenGL_ES_CommonLite_Version_1_1 = QGLFormat::OpenGL_ES_CommonLite_Version_1_1,   OpenGL_ES_Version_2_0 = QGLFormat::OpenGL_ES_Version_2_0,   OpenGL_Version_3_0 = QGLFormat::OpenGL_Version_3_0,   OpenGL_Version_3_1 = QGLFormat::OpenGL_Version_3_1,   OpenGL_Version_3_2 = QGLFormat::OpenGL_Version_3_2,   OpenGL_Version_3_3 = QGLFormat::OpenGL_Version_3_3,   OpenGL_Version_4_0 = QGLFormat::OpenGL_Version_4_0};
enum OpenGLContextProfile{
  NoProfile = QGLFormat::NoProfile,   CoreProfile = QGLFormat::CoreProfile,   CompatibilityProfile = QGLFormat::CompatibilityProfile};
Q_DECLARE_FLAGS(OpenGLVersionFlags, OpenGLVersionFlag)
public slots:
QGLFormat* new_QGLFormat();
QGLFormat* new_QGLFormat(QGL::FormatOptions  options, int  plane = 0);
QGLFormat* new_QGLFormat(const QGLFormat&  other);
void delete_QGLFormat(QGLFormat* obj) { delete obj; } 
   bool  accum(QGLFormat* theWrappedObject) const;
   int  accumBufferSize(QGLFormat* theWrappedObject) const;
   bool  alpha(QGLFormat* theWrappedObject) const;
   int  alphaBufferSize(QGLFormat* theWrappedObject) const;
   int  blueBufferSize(QGLFormat* theWrappedObject) const;
   QGLFormat  static_QGLFormat_defaultFormat();
   QGLFormat  static_QGLFormat_defaultOverlayFormat();
   bool  depth(QGLFormat* theWrappedObject) const;
   int  depthBufferSize(QGLFormat* theWrappedObject) const;
   bool  directRendering(QGLFormat* theWrappedObject) const;
   bool  doubleBuffer(QGLFormat* theWrappedObject) const;
   int  greenBufferSize(QGLFormat* theWrappedObject) const;
   bool  static_QGLFormat_hasOpenGL();
   bool  static_QGLFormat_hasOpenGLOverlays();
   bool  hasOverlay(QGLFormat* theWrappedObject) const;
   int  majorVersion(QGLFormat* theWrappedObject) const;
   int  minorVersion(QGLFormat* theWrappedObject) const;
   QGLFormat::OpenGLVersionFlags  static_QGLFormat_openGLVersionFlags();
   bool  __eq__(QGLFormat* theWrappedObject, const QGLFormat&  arg__2);
   int  plane(QGLFormat* theWrappedObject) const;
   QGLFormat::OpenGLContextProfile  profile(QGLFormat* theWrappedObject) const;
   int  redBufferSize(QGLFormat* theWrappedObject) const;
   bool  rgba(QGLFormat* theWrappedObject) const;
   bool  sampleBuffers(QGLFormat* theWrappedObject) const;
   int  samples(QGLFormat* theWrappedObject) const;
   void setAccum(QGLFormat* theWrappedObject, bool  enable);
   void setAccumBufferSize(QGLFormat* theWrappedObject, int  size);
   void setAlpha(QGLFormat* theWrappedObject, bool  enable);
   void setAlphaBufferSize(QGLFormat* theWrappedObject, int  size);
   void setBlueBufferSize(QGLFormat* theWrappedObject, int  size);
   void static_QGLFormat_setDefaultFormat(const QGLFormat&  f);
   void static_QGLFormat_setDefaultOverlayFormat(const QGLFormat&  f);
   void setDepth(QGLFormat* theWrappedObject, bool  enable);
   void setDepthBufferSize(QGLFormat* theWrappedObject, int  size);
   void setDirectRendering(QGLFormat* theWrappedObject, bool  enable);
   void setDoubleBuffer(QGLFormat* theWrappedObject, bool  enable);
   void setGreenBufferSize(QGLFormat* theWrappedObject, int  size);
   void setOption(QGLFormat* theWrappedObject, QGL::FormatOptions  opt);
   void setOverlay(QGLFormat* theWrappedObject, bool  enable);
   void setPlane(QGLFormat* theWrappedObject, int  plane);
   void setProfile(QGLFormat* theWrappedObject, QGLFormat::OpenGLContextProfile  profile);
   void setRedBufferSize(QGLFormat* theWrappedObject, int  size);
   void setRgba(QGLFormat* theWrappedObject, bool  enable);
   void setSampleBuffers(QGLFormat* theWrappedObject, bool  enable);
   void setSamples(QGLFormat* theWrappedObject, int  numSamples);
   void setStencil(QGLFormat* theWrappedObject, bool  enable);
   void setStencilBufferSize(QGLFormat* theWrappedObject, int  size);
   void setStereo(QGLFormat* theWrappedObject, bool  enable);
   void setSwapInterval(QGLFormat* theWrappedObject, int  interval);
   void setVersion(QGLFormat* theWrappedObject, int  major, int  minor);
   bool  stencil(QGLFormat* theWrappedObject) const;
   int  stencilBufferSize(QGLFormat* theWrappedObject) const;
   bool  stereo(QGLFormat* theWrappedObject) const;
   int  swapInterval(QGLFormat* theWrappedObject) const;
   bool  testOption(QGLFormat* theWrappedObject, QGL::FormatOptions  opt) const;
    QString py_toString(QGLFormat*);
};





class PythonQtShell_QGLFramebufferObject : public QGLFramebufferObject
{
public:
    PythonQtShell_QGLFramebufferObject(const QSize&  size, GLenum  target = 0x0DE1):QGLFramebufferObject(size, target),_wrapper(NULL) {};
    PythonQtShell_QGLFramebufferObject(const QSize&  size, QGLFramebufferObject::Attachment  attachment, GLenum  target = 0x0DE1, GLenum  internal_format = 0x8058):QGLFramebufferObject(size, attachment, target, internal_format),_wrapper(NULL) {};
    PythonQtShell_QGLFramebufferObject(const QSize&  size, const QGLFramebufferObjectFormat&  format):QGLFramebufferObject(size, format),_wrapper(NULL) {};
    PythonQtShell_QGLFramebufferObject(int  width, int  height, GLenum  target = 0x0DE1):QGLFramebufferObject(width, height, target),_wrapper(NULL) {};
    PythonQtShell_QGLFramebufferObject(int  width, int  height, QGLFramebufferObject::Attachment  attachment, GLenum  target = 0x0DE1, GLenum  internal_format = 0x8058):QGLFramebufferObject(width, height, attachment, target, internal_format),_wrapper(NULL) {};
    PythonQtShell_QGLFramebufferObject(int  width, int  height, const QGLFramebufferObjectFormat&  format):QGLFramebufferObject(width, height, format),_wrapper(NULL) {};

   ~PythonQtShell_QGLFramebufferObject();

virtual int  devType() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  metric) const;
virtual QPaintEngine*  paintEngine() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGLFramebufferObject : public QGLFramebufferObject
{ public:
inline int  promoted_devType() const { return QGLFramebufferObject::devType(); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QGLFramebufferObject::metric(metric); }
inline QPaintEngine*  promoted_paintEngine() const { return QGLFramebufferObject::paintEngine(); }
};

class PythonQtWrapper_QGLFramebufferObject : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Attachment )
enum Attachment{
  NoAttachment = QGLFramebufferObject::NoAttachment,   CombinedDepthStencil = QGLFramebufferObject::CombinedDepthStencil,   Depth = QGLFramebufferObject::Depth};
public slots:
QGLFramebufferObject* new_QGLFramebufferObject(const QSize&  size, GLenum  target = 0x0DE1);
QGLFramebufferObject* new_QGLFramebufferObject(const QSize&  size, QGLFramebufferObject::Attachment  attachment, GLenum  target = 0x0DE1, GLenum  internal_format = 0x8058);
QGLFramebufferObject* new_QGLFramebufferObject(const QSize&  size, const QGLFramebufferObjectFormat&  format);
QGLFramebufferObject* new_QGLFramebufferObject(int  width, int  height, GLenum  target = 0x0DE1);
QGLFramebufferObject* new_QGLFramebufferObject(int  width, int  height, QGLFramebufferObject::Attachment  attachment, GLenum  target = 0x0DE1, GLenum  internal_format = 0x8058);
QGLFramebufferObject* new_QGLFramebufferObject(int  width, int  height, const QGLFramebufferObjectFormat&  format);
void delete_QGLFramebufferObject(QGLFramebufferObject* obj) { delete obj; } 
   QGLFramebufferObject::Attachment  attachment(QGLFramebufferObject* theWrappedObject) const;
   bool  bind(QGLFramebufferObject* theWrappedObject);
   bool  static_QGLFramebufferObject_bindDefault();
   void static_QGLFramebufferObject_blitFramebuffer(QGLFramebufferObject*  target, const QRect&  targetRect, QGLFramebufferObject*  source, const QRect&  sourceRect, GLbitfield  buffers = 0x00004000, GLenum  filter = 0x2600);
   int  devType(QGLFramebufferObject* theWrappedObject) const;
   void drawTexture(QGLFramebufferObject* theWrappedObject, const QPointF&  point, GLuint  textureId, GLenum  textureTarget = 0x0DE1);
   void drawTexture(QGLFramebufferObject* theWrappedObject, const QRectF&  target, GLuint  textureId, GLenum  textureTarget = 0x0DE1);
   QGLFramebufferObjectFormat  format(QGLFramebufferObject* theWrappedObject) const;
   GLuint  handle(QGLFramebufferObject* theWrappedObject) const;
   bool  static_QGLFramebufferObject_hasOpenGLFramebufferBlit();
   bool  static_QGLFramebufferObject_hasOpenGLFramebufferObjects();
   bool  isBound(QGLFramebufferObject* theWrappedObject) const;
   bool  isValid(QGLFramebufferObject* theWrappedObject) const;
   int  metric(QGLFramebufferObject* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const;
   QPaintEngine*  paintEngine(QGLFramebufferObject* theWrappedObject) const;
   bool  release(QGLFramebufferObject* theWrappedObject);
   QSize  size(QGLFramebufferObject* theWrappedObject) const;
   GLuint  texture(QGLFramebufferObject* theWrappedObject) const;
   QImage  toImage(QGLFramebufferObject* theWrappedObject) const;
};





class PythonQtWrapper_QGLFramebufferObjectFormat : public QObject
{ Q_OBJECT
public:
public slots:
QGLFramebufferObjectFormat* new_QGLFramebufferObjectFormat();
QGLFramebufferObjectFormat* new_QGLFramebufferObjectFormat(const QGLFramebufferObjectFormat&  other);
void delete_QGLFramebufferObjectFormat(QGLFramebufferObjectFormat* obj) { delete obj; } 
   QGLFramebufferObject::Attachment  attachment(QGLFramebufferObjectFormat* theWrappedObject) const;
   GLenum  internalTextureFormat(QGLFramebufferObjectFormat* theWrappedObject) const;
   bool  mipmap(QGLFramebufferObjectFormat* theWrappedObject) const;
   bool  __ne__(QGLFramebufferObjectFormat* theWrappedObject, const QGLFramebufferObjectFormat&  other) const;
   QGLFramebufferObjectFormat*  operator_assign(QGLFramebufferObjectFormat* theWrappedObject, const QGLFramebufferObjectFormat&  other);
   bool  __eq__(QGLFramebufferObjectFormat* theWrappedObject, const QGLFramebufferObjectFormat&  other) const;
   int  samples(QGLFramebufferObjectFormat* theWrappedObject) const;
   void setAttachment(QGLFramebufferObjectFormat* theWrappedObject, QGLFramebufferObject::Attachment  attachment);
   void setInternalTextureFormat(QGLFramebufferObjectFormat* theWrappedObject, GLenum  internalTextureFormat);
   void setMipmap(QGLFramebufferObjectFormat* theWrappedObject, bool  enabled);
   void setSamples(QGLFramebufferObjectFormat* theWrappedObject, int  samples);
   void setTextureTarget(QGLFramebufferObjectFormat* theWrappedObject, GLenum  target);
   GLenum  textureTarget(QGLFramebufferObjectFormat* theWrappedObject) const;
};





class PythonQtWrapper_QGLFunctions : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OpenGLFeature )
enum OpenGLFeature{
  Multitexture = QGLFunctions::Multitexture,   Shaders = QGLFunctions::Shaders,   Buffers = QGLFunctions::Buffers,   Framebuffers = QGLFunctions::Framebuffers,   BlendColor = QGLFunctions::BlendColor,   BlendEquation = QGLFunctions::BlendEquation,   BlendEquationSeparate = QGLFunctions::BlendEquationSeparate,   BlendFuncSeparate = QGLFunctions::BlendFuncSeparate,   BlendSubtract = QGLFunctions::BlendSubtract,   CompressedTextures = QGLFunctions::CompressedTextures,   Multisample = QGLFunctions::Multisample,   StencilSeparate = QGLFunctions::StencilSeparate,   NPOTTextures = QGLFunctions::NPOTTextures};
public slots:
QGLFunctions* new_QGLFunctions();
QGLFunctions* new_QGLFunctions(const QGLContext*  context);
void delete_QGLFunctions(QGLFunctions* obj) { delete obj; } 
   void glActiveTexture(QGLFunctions* theWrappedObject, GLenum  texture);
   void glAttachShader(QGLFunctions* theWrappedObject, GLuint  program, GLuint  shader);
   void glBindAttribLocation(QGLFunctions* theWrappedObject, GLuint  program, GLuint  index, const char*  name);
   void glBindBuffer(QGLFunctions* theWrappedObject, GLenum  target, GLuint  buffer);
   void glBindFramebuffer(QGLFunctions* theWrappedObject, GLenum  target, GLuint  framebuffer);
   void glBindRenderbuffer(QGLFunctions* theWrappedObject, GLenum  target, GLuint  renderbuffer);
   void glBlendColor(QGLFunctions* theWrappedObject, GLclampf  red, GLclampf  green, GLclampf  blue, GLclampf  alpha);
   void glBlendEquation(QGLFunctions* theWrappedObject, GLenum  mode);
   void glBlendEquationSeparate(QGLFunctions* theWrappedObject, GLenum  modeRGB, GLenum  modeAlpha);
   void glBlendFuncSeparate(QGLFunctions* theWrappedObject, GLenum  srcRGB, GLenum  dstRGB, GLenum  srcAlpha, GLenum  dstAlpha);
   void glBufferData(QGLFunctions* theWrappedObject, GLenum  target, qgl_GLsizeiptr  size, const void*  data, GLenum  usage);
   void glBufferSubData(QGLFunctions* theWrappedObject, GLenum  target, qgl_GLintptr  offset, qgl_GLsizeiptr  size, const void*  data);
   GLenum  glCheckFramebufferStatus(QGLFunctions* theWrappedObject, GLenum  target);
   void glClearDepthf(QGLFunctions* theWrappedObject, GLclampf  depth);
   void glCompileShader(QGLFunctions* theWrappedObject, GLuint  shader);
   void glCompressedTexImage2D(QGLFunctions* theWrappedObject, GLenum  target, GLint  level, GLenum  internalformat, GLsizei  width, GLsizei  height, GLint  border, GLsizei  imageSize, const void*  data);
   void glCompressedTexSubImage2D(QGLFunctions* theWrappedObject, GLenum  target, GLint  level, GLint  xoffset, GLint  yoffset, GLsizei  width, GLsizei  height, GLenum  format, GLsizei  imageSize, const void*  data);
   GLuint  glCreateProgram(QGLFunctions* theWrappedObject);
   GLuint  glCreateShader(QGLFunctions* theWrappedObject, GLenum  type);
   void glDeleteBuffers(QGLFunctions* theWrappedObject, GLsizei  n, const GLuint*  buffers);
   void glDeleteFramebuffers(QGLFunctions* theWrappedObject, GLsizei  n, const GLuint*  framebuffers);
   void glDeleteProgram(QGLFunctions* theWrappedObject, GLuint  program);
   void glDeleteRenderbuffers(QGLFunctions* theWrappedObject, GLsizei  n, const GLuint*  renderbuffers);
   void glDeleteShader(QGLFunctions* theWrappedObject, GLuint  shader);
   void glDepthRangef(QGLFunctions* theWrappedObject, GLclampf  zNear, GLclampf  zFar);
   void glDetachShader(QGLFunctions* theWrappedObject, GLuint  program, GLuint  shader);
   void glDisableVertexAttribArray(QGLFunctions* theWrappedObject, GLuint  index);
   void glEnableVertexAttribArray(QGLFunctions* theWrappedObject, GLuint  index);
   void glFramebufferRenderbuffer(QGLFunctions* theWrappedObject, GLenum  target, GLenum  attachment, GLenum  renderbuffertarget, GLuint  renderbuffer);
   void glFramebufferTexture2D(QGLFunctions* theWrappedObject, GLenum  target, GLenum  attachment, GLenum  textarget, GLuint  texture, GLint  level);
   void glGenBuffers(QGLFunctions* theWrappedObject, GLsizei  n, GLuint*  buffers);
   void glGenFramebuffers(QGLFunctions* theWrappedObject, GLsizei  n, GLuint*  framebuffers);
   void glGenRenderbuffers(QGLFunctions* theWrappedObject, GLsizei  n, GLuint*  renderbuffers);
   void glGenerateMipmap(QGLFunctions* theWrappedObject, GLenum  target);
   void glGetActiveAttrib(QGLFunctions* theWrappedObject, GLuint  program, GLuint  index, GLsizei  bufsize, GLsizei*  length, GLint*  size, GLenum*  type, char*  name);
   void glGetActiveUniform(QGLFunctions* theWrappedObject, GLuint  program, GLuint  index, GLsizei  bufsize, GLsizei*  length, GLint*  size, GLenum*  type, char*  name);
   void glGetAttachedShaders(QGLFunctions* theWrappedObject, GLuint  program, GLsizei  maxcount, GLsizei*  count, GLuint*  shaders);
   int  glGetAttribLocation(QGLFunctions* theWrappedObject, GLuint  program, const char*  name);
   void glGetBufferParameteriv(QGLFunctions* theWrappedObject, GLenum  target, GLenum  pname, GLint*  params);
   void glGetFramebufferAttachmentParameteriv(QGLFunctions* theWrappedObject, GLenum  target, GLenum  attachment, GLenum  pname, GLint*  params);
   void glGetProgramInfoLog(QGLFunctions* theWrappedObject, GLuint  program, GLsizei  bufsize, GLsizei*  length, char*  infolog);
   void glGetProgramiv(QGLFunctions* theWrappedObject, GLuint  program, GLenum  pname, GLint*  params);
   void glGetRenderbufferParameteriv(QGLFunctions* theWrappedObject, GLenum  target, GLenum  pname, GLint*  params);
   void glGetShaderInfoLog(QGLFunctions* theWrappedObject, GLuint  shader, GLsizei  bufsize, GLsizei*  length, char*  infolog);
   void glGetShaderPrecisionFormat(QGLFunctions* theWrappedObject, GLenum  shadertype, GLenum  precisiontype, GLint*  range, GLint*  precision);
   void glGetShaderSource(QGLFunctions* theWrappedObject, GLuint  shader, GLsizei  bufsize, GLsizei*  length, char*  source);
   void glGetShaderiv(QGLFunctions* theWrappedObject, GLuint  shader, GLenum  pname, GLint*  params);
   int  glGetUniformLocation(QGLFunctions* theWrappedObject, GLuint  program, const char*  name);
   void glGetUniformfv(QGLFunctions* theWrappedObject, GLuint  program, GLint  location, GLfloat*  params);
   void glGetUniformiv(QGLFunctions* theWrappedObject, GLuint  program, GLint  location, GLint*  params);
   void glGetVertexAttribPointerv(QGLFunctions* theWrappedObject, GLuint  index, GLenum  pname, void**  pointer);
   void glGetVertexAttribfv(QGLFunctions* theWrappedObject, GLuint  index, GLenum  pname, GLfloat*  params);
   void glGetVertexAttribiv(QGLFunctions* theWrappedObject, GLuint  index, GLenum  pname, GLint*  params);
   GLboolean  glIsBuffer(QGLFunctions* theWrappedObject, GLuint  buffer);
   GLboolean  glIsFramebuffer(QGLFunctions* theWrappedObject, GLuint  framebuffer);
   GLboolean  glIsProgram(QGLFunctions* theWrappedObject, GLuint  program);
   GLboolean  glIsRenderbuffer(QGLFunctions* theWrappedObject, GLuint  renderbuffer);
   GLboolean  glIsShader(QGLFunctions* theWrappedObject, GLuint  shader);
   void glLinkProgram(QGLFunctions* theWrappedObject, GLuint  program);
   void glReleaseShaderCompiler(QGLFunctions* theWrappedObject);
   void glRenderbufferStorage(QGLFunctions* theWrappedObject, GLenum  target, GLenum  internalformat, GLsizei  width, GLsizei  height);
   void glSampleCoverage(QGLFunctions* theWrappedObject, GLclampf  value, GLboolean  invert);
   void glShaderBinary(QGLFunctions* theWrappedObject, GLint  n, const GLuint*  shaders, GLenum  binaryformat, const void*  binary, GLint  length);
   void glShaderSource(QGLFunctions* theWrappedObject, GLuint  shader, GLsizei  count, const char**  string, const GLint*  length);
   void glStencilFuncSeparate(QGLFunctions* theWrappedObject, GLenum  face, GLenum  func, GLint  ref, GLuint  mask);
   void glStencilMaskSeparate(QGLFunctions* theWrappedObject, GLenum  face, GLuint  mask);
   void glStencilOpSeparate(QGLFunctions* theWrappedObject, GLenum  face, GLenum  fail, GLenum  zfail, GLenum  zpass);
   void glUniform1f(QGLFunctions* theWrappedObject, GLint  location, GLfloat  x);
   void glUniform1fv(QGLFunctions* theWrappedObject, GLint  location, GLsizei  count, const GLfloat*  v);
   void glUniform1i(QGLFunctions* theWrappedObject, GLint  location, GLint  x);
   void glUniform1iv(QGLFunctions* theWrappedObject, GLint  location, GLsizei  count, const GLint*  v);
   void glUniform2f(QGLFunctions* theWrappedObject, GLint  location, GLfloat  x, GLfloat  y);
   void glUniform2fv(QGLFunctions* theWrappedObject, GLint  location, GLsizei  count, const GLfloat*  v);
   void glUniform2i(QGLFunctions* theWrappedObject, GLint  location, GLint  x, GLint  y);
   void glUniform2iv(QGLFunctions* theWrappedObject, GLint  location, GLsizei  count, const GLint*  v);
   void glUniform3f(QGLFunctions* theWrappedObject, GLint  location, GLfloat  x, GLfloat  y, GLfloat  z);
   void glUniform3fv(QGLFunctions* theWrappedObject, GLint  location, GLsizei  count, const GLfloat*  v);
   void glUniform3i(QGLFunctions* theWrappedObject, GLint  location, GLint  x, GLint  y, GLint  z);
   void glUniform3iv(QGLFunctions* theWrappedObject, GLint  location, GLsizei  count, const GLint*  v);
   void glUniform4f(QGLFunctions* theWrappedObject, GLint  location, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w);
   void glUniform4fv(QGLFunctions* theWrappedObject, GLint  location, GLsizei  count, const GLfloat*  v);
   void glUniform4i(QGLFunctions* theWrappedObject, GLint  location, GLint  x, GLint  y, GLint  z, GLint  w);
   void glUniform4iv(QGLFunctions* theWrappedObject, GLint  location, GLsizei  count, const GLint*  v);
   void glUniformMatrix2fv(QGLFunctions* theWrappedObject, GLint  location, GLsizei  count, GLboolean  transpose, const GLfloat*  value);
   void glUniformMatrix3fv(QGLFunctions* theWrappedObject, GLint  location, GLsizei  count, GLboolean  transpose, const GLfloat*  value);
   void glUniformMatrix4fv(QGLFunctions* theWrappedObject, GLint  location, GLsizei  count, GLboolean  transpose, const GLfloat*  value);
   void glUseProgram(QGLFunctions* theWrappedObject, GLuint  program);
   void glValidateProgram(QGLFunctions* theWrappedObject, GLuint  program);
   void glVertexAttrib1f(QGLFunctions* theWrappedObject, GLuint  indx, GLfloat  x);
   void glVertexAttrib1fv(QGLFunctions* theWrappedObject, GLuint  indx, const GLfloat*  values);
   void glVertexAttrib2f(QGLFunctions* theWrappedObject, GLuint  indx, GLfloat  x, GLfloat  y);
   void glVertexAttrib2fv(QGLFunctions* theWrappedObject, GLuint  indx, const GLfloat*  values);
   void glVertexAttrib3f(QGLFunctions* theWrappedObject, GLuint  indx, GLfloat  x, GLfloat  y, GLfloat  z);
   void glVertexAttrib3fv(QGLFunctions* theWrappedObject, GLuint  indx, const GLfloat*  values);
   void glVertexAttrib4f(QGLFunctions* theWrappedObject, GLuint  indx, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w);
   void glVertexAttrib4fv(QGLFunctions* theWrappedObject, GLuint  indx, const GLfloat*  values);
   void glVertexAttribPointer(QGLFunctions* theWrappedObject, GLuint  indx, GLint  size, GLenum  type, GLboolean  normalized, GLsizei  stride, const void*  ptr);
   bool  hasOpenGLFeature(QGLFunctions* theWrappedObject, QGLFunctions::OpenGLFeature  feature) const;
   void initializeGLFunctions(QGLFunctions* theWrappedObject, const QGLContext*  context = 0);
};





class PythonQtShell_QGLPixelBuffer : public QGLPixelBuffer
{
public:
    PythonQtShell_QGLPixelBuffer(const QSize&  size, const QGLFormat&  format = QGLFormat::defaultFormat(), QGLWidget*  shareWidget = 0):QGLPixelBuffer(size, format, shareWidget),_wrapper(NULL) {};
    PythonQtShell_QGLPixelBuffer(int  width, int  height, const QGLFormat&  format = QGLFormat::defaultFormat(), QGLWidget*  shareWidget = 0):QGLPixelBuffer(width, height, format, shareWidget),_wrapper(NULL) {};

   ~PythonQtShell_QGLPixelBuffer();

virtual int  devType() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  metric) const;
virtual QPaintEngine*  paintEngine() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGLPixelBuffer : public QGLPixelBuffer
{ public:
inline int  promoted_devType() const { return QGLPixelBuffer::devType(); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QGLPixelBuffer::metric(metric); }
inline QPaintEngine*  promoted_paintEngine() const { return QGLPixelBuffer::paintEngine(); }
};

class PythonQtWrapper_QGLPixelBuffer : public QObject
{ Q_OBJECT
public:
public slots:
QGLPixelBuffer* new_QGLPixelBuffer(const QSize&  size, const QGLFormat&  format = QGLFormat::defaultFormat(), QGLWidget*  shareWidget = 0);
QGLPixelBuffer* new_QGLPixelBuffer(int  width, int  height, const QGLFormat&  format = QGLFormat::defaultFormat(), QGLWidget*  shareWidget = 0);
void delete_QGLPixelBuffer(QGLPixelBuffer* obj) { delete obj; } 
   GLuint  bindTexture(QGLPixelBuffer* theWrappedObject, const QImage&  image, GLenum  target = 0x0DE1);
   GLuint  bindTexture(QGLPixelBuffer* theWrappedObject, const QPixmap&  pixmap, GLenum  target = 0x0DE1);
   GLuint  bindTexture(QGLPixelBuffer* theWrappedObject, const QString&  fileName);
   bool  bindToDynamicTexture(QGLPixelBuffer* theWrappedObject, GLuint  texture);
   void deleteTexture(QGLPixelBuffer* theWrappedObject, GLuint  texture_id);
   int  devType(QGLPixelBuffer* theWrappedObject) const;
   bool  doneCurrent(QGLPixelBuffer* theWrappedObject);
   void drawTexture(QGLPixelBuffer* theWrappedObject, const QPointF&  point, GLuint  textureId, GLenum  textureTarget = 0x0DE1);
   void drawTexture(QGLPixelBuffer* theWrappedObject, const QRectF&  target, GLuint  textureId, GLenum  textureTarget = 0x0DE1);
   QGLFormat  format(QGLPixelBuffer* theWrappedObject) const;
   GLuint  generateDynamicTexture(QGLPixelBuffer* theWrappedObject) const;
   Qt::HANDLE  handle(QGLPixelBuffer* theWrappedObject) const;
   bool  static_QGLPixelBuffer_hasOpenGLPbuffers();
   bool  isValid(QGLPixelBuffer* theWrappedObject) const;
   bool  makeCurrent(QGLPixelBuffer* theWrappedObject);
   int  metric(QGLPixelBuffer* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const;
   QPaintEngine*  paintEngine(QGLPixelBuffer* theWrappedObject) const;
   void releaseFromDynamicTexture(QGLPixelBuffer* theWrappedObject);
   QSize  size(QGLPixelBuffer* theWrappedObject) const;
   QImage  toImage(QGLPixelBuffer* theWrappedObject) const;
   void updateDynamicTexture(QGLPixelBuffer* theWrappedObject, GLuint  texture_id) const;
};





class PythonQtShell_QGLShader : public QGLShader
{
public:
    PythonQtShell_QGLShader(QGLShader::ShaderType  type, QObject*  parent = 0):QGLShader(type, parent),_wrapper(NULL) {};
    PythonQtShell_QGLShader(QGLShader::ShaderType  type, const QGLContext*  context, QObject*  parent = 0):QGLShader(type, context, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGLShader();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QGLShader : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ShaderTypeBit )
Q_FLAGS(ShaderType )
enum ShaderTypeBit{
  Vertex = QGLShader::Vertex,   Fragment = QGLShader::Fragment,   Geometry = QGLShader::Geometry};
Q_DECLARE_FLAGS(ShaderType, ShaderTypeBit)
public slots:
QGLShader* new_QGLShader(QGLShader::ShaderType  type, QObject*  parent = 0);
QGLShader* new_QGLShader(QGLShader::ShaderType  type, const QGLContext*  context, QObject*  parent = 0);
void delete_QGLShader(QGLShader* obj) { delete obj; } 
   bool  compileSourceCode(QGLShader* theWrappedObject, const QByteArray&  source);
   bool  compileSourceCode(QGLShader* theWrappedObject, const QString&  source);
   bool  compileSourceCode(QGLShader* theWrappedObject, const char*  source);
   bool  compileSourceFile(QGLShader* theWrappedObject, const QString&  fileName);
   bool  static_QGLShader_hasOpenGLShaders(QGLShader::ShaderType  type, const QGLContext*  context = 0);
   bool  isCompiled(QGLShader* theWrappedObject) const;
   QString  log(QGLShader* theWrappedObject) const;
   GLuint  shaderId(QGLShader* theWrappedObject) const;
   QGLShader::ShaderType  shaderType(QGLShader* theWrappedObject) const;
   QByteArray  sourceCode(QGLShader* theWrappedObject) const;
};





class PythonQtShell_QGLShaderProgram : public QGLShaderProgram
{
public:
    PythonQtShell_QGLShaderProgram(QObject*  parent = 0):QGLShaderProgram(parent),_wrapper(NULL) {};
    PythonQtShell_QGLShaderProgram(const QGLContext*  context, QObject*  parent = 0):QGLShaderProgram(context, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGLShaderProgram();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  link();
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGLShaderProgram : public QGLShaderProgram
{ public:
inline bool  promoted_link() { return QGLShaderProgram::link(); }
};

class PythonQtWrapper_QGLShaderProgram : public QObject
{ Q_OBJECT
public:
public slots:
QGLShaderProgram* new_QGLShaderProgram(QObject*  parent = 0);
QGLShaderProgram* new_QGLShaderProgram(const QGLContext*  context, QObject*  parent = 0);
void delete_QGLShaderProgram(QGLShaderProgram* obj) { delete obj; } 
   bool  addShader(QGLShaderProgram* theWrappedObject, QGLShader*  shader);
   bool  addShaderFromSourceCode(QGLShaderProgram* theWrappedObject, QGLShader::ShaderType  type, const QByteArray&  source);
   bool  addShaderFromSourceCode(QGLShaderProgram* theWrappedObject, QGLShader::ShaderType  type, const QString&  source);
   bool  addShaderFromSourceCode(QGLShaderProgram* theWrappedObject, QGLShader::ShaderType  type, const char*  source);
   bool  addShaderFromSourceFile(QGLShaderProgram* theWrappedObject, QGLShader::ShaderType  type, const QString&  fileName);
   int  attributeLocation(QGLShaderProgram* theWrappedObject, const QByteArray&  name) const;
   int  attributeLocation(QGLShaderProgram* theWrappedObject, const QString&  name) const;
   int  attributeLocation(QGLShaderProgram* theWrappedObject, const char*  name) const;
   bool  bind(QGLShaderProgram* theWrappedObject);
   void bindAttributeLocation(QGLShaderProgram* theWrappedObject, const QByteArray&  name, int  location);
   void bindAttributeLocation(QGLShaderProgram* theWrappedObject, const QString&  name, int  location);
   void bindAttributeLocation(QGLShaderProgram* theWrappedObject, const char*  name, int  location);
   void disableAttributeArray(QGLShaderProgram* theWrappedObject, const char*  name);
   void disableAttributeArray(QGLShaderProgram* theWrappedObject, int  location);
   void enableAttributeArray(QGLShaderProgram* theWrappedObject, const char*  name);
   void enableAttributeArray(QGLShaderProgram* theWrappedObject, int  location);
   GLenum  geometryInputType(QGLShaderProgram* theWrappedObject) const;
   GLenum  geometryOutputType(QGLShaderProgram* theWrappedObject) const;
   int  geometryOutputVertexCount(QGLShaderProgram* theWrappedObject) const;
   bool  static_QGLShaderProgram_hasOpenGLShaderPrograms(const QGLContext*  context = 0);
   bool  isLinked(QGLShaderProgram* theWrappedObject) const;
   bool  link(QGLShaderProgram* theWrappedObject);
   QString  log(QGLShaderProgram* theWrappedObject) const;
   int  maxGeometryOutputVertices(QGLShaderProgram* theWrappedObject) const;
   GLuint  programId(QGLShaderProgram* theWrappedObject) const;
   void release(QGLShaderProgram* theWrappedObject);
   void removeAllShaders(QGLShaderProgram* theWrappedObject);
   void removeShader(QGLShaderProgram* theWrappedObject, QGLShader*  shader);
   void setAttributeArray(QGLShaderProgram* theWrappedObject, const char*  name, GLenum  type, const void*  values, int  tupleSize, int  stride = 0);
   void setAttributeArray(QGLShaderProgram* theWrappedObject, const char*  name, const GLfloat*  values, int  tupleSize, int  stride = 0);
   void setAttributeArray(QGLShaderProgram* theWrappedObject, const char*  name, const QVector2D*  values, int  stride = 0);
   void setAttributeArray(QGLShaderProgram* theWrappedObject, const char*  name, const QVector3D*  values, int  stride = 0);
   void setAttributeArray(QGLShaderProgram* theWrappedObject, const char*  name, const QVector4D*  values, int  stride = 0);
   void setAttributeArray(QGLShaderProgram* theWrappedObject, int  location, GLenum  type, const void*  values, int  tupleSize, int  stride = 0);
   void setAttributeArray(QGLShaderProgram* theWrappedObject, int  location, const GLfloat*  values, int  tupleSize, int  stride = 0);
   void setAttributeArray(QGLShaderProgram* theWrappedObject, int  location, const QVector2D*  values, int  stride = 0);
   void setAttributeArray(QGLShaderProgram* theWrappedObject, int  location, const QVector3D*  values, int  stride = 0);
   void setAttributeArray(QGLShaderProgram* theWrappedObject, int  location, const QVector4D*  values, int  stride = 0);
   void setAttributeBuffer(QGLShaderProgram* theWrappedObject, const char*  name, GLenum  type, int  offset, int  tupleSize, int  stride = 0);
   void setAttributeBuffer(QGLShaderProgram* theWrappedObject, int  location, GLenum  type, int  offset, int  tupleSize, int  stride = 0);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, GLfloat  value);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y, GLfloat  z);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, const GLfloat*  values, int  columns, int  rows);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, const QColor&  value);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, const QVector2D&  value);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, const QVector3D&  value);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, const QVector4D&  value);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, GLfloat  value);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y, GLfloat  z);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, const GLfloat*  values, int  columns, int  rows);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, const QColor&  value);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, const QVector2D&  value);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, const QVector3D&  value);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, const QVector4D&  value);
   void setGeometryInputType(QGLShaderProgram* theWrappedObject, GLenum  inputType);
   void setGeometryOutputType(QGLShaderProgram* theWrappedObject, GLenum  outputType);
   void setGeometryOutputVertexCount(QGLShaderProgram* theWrappedObject, int  count);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, GLfloat  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y, GLfloat  z);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, GLint  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QColor&  color);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QMatrix4x4&  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QPoint&  point);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QPointF&  point);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QSize&  size);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QSizeF&  size);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QTransform&  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QVector2D&  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QVector3D&  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QVector4D&  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, GLfloat  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y, GLfloat  z);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, GLint  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QColor&  color);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QMatrix4x4&  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QPoint&  point);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QPointF&  point);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QSize&  size);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QSizeF&  size);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QTransform&  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QVector2D&  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QVector3D&  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QVector4D&  value);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, const char*  name, const GLfloat*  values, int  count, int  tupleSize);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, const char*  name, const GLint*  values, int  count);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, const char*  name, const QMatrix4x4*  values, int  count);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, const char*  name, const QVector2D*  values, int  count);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, const char*  name, const QVector3D*  values, int  count);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, const char*  name, const QVector4D*  values, int  count);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, int  location, const GLfloat*  values, int  count, int  tupleSize);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, int  location, const GLint*  values, int  count);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, int  location, const GLuint*  values, int  count);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, int  location, const QMatrix4x4*  values, int  count);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, int  location, const QVector2D*  values, int  count);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, int  location, const QVector3D*  values, int  count);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, int  location, const QVector4D*  values, int  count);
   QList<QGLShader* >  shaders(QGLShaderProgram* theWrappedObject) const;
   int  uniformLocation(QGLShaderProgram* theWrappedObject, const QByteArray&  name) const;
   int  uniformLocation(QGLShaderProgram* theWrappedObject, const QString&  name) const;
   int  uniformLocation(QGLShaderProgram* theWrappedObject, const char*  name) const;
};





class PythonQtShell_QGLWidget : public QGLWidget
{
public:
    PythonQtShell_QGLWidget(QGLContext*  context, QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0):QGLWidget(context, parent, shareWidget, f),_wrapper(NULL) {};
    PythonQtShell_QGLWidget(QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0):QGLWidget(parent, shareWidget, f),_wrapper(NULL) {};
    PythonQtShell_QGLWidget(const QGLFormat&  format, QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0):QGLWidget(format, parent, shareWidget, f),_wrapper(NULL) {};

   ~PythonQtShell_QGLWidget();

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
virtual void glDraw();
virtual void glInit();
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initializeGL();
virtual void initializeOverlayGL();
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
virtual void paintGL();
virtual void paintOverlayGL();
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void resizeGL(int  w, int  h);
virtual void resizeOverlayGL(int  w, int  h);
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void updateGL();
virtual void updateOverlayGL();
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGLWidget : public QGLWidget
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return QGLWidget::event(arg__1); }
inline void promoted_glDraw() { QGLWidget::glDraw(); }
inline void promoted_glInit() { QGLWidget::glInit(); }
inline void promoted_initializeGL() { QGLWidget::initializeGL(); }
inline void promoted_initializeOverlayGL() { QGLWidget::initializeOverlayGL(); }
inline QPaintEngine*  promoted_paintEngine() const { return QGLWidget::paintEngine(); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QGLWidget::paintEvent(arg__1); }
inline void promoted_paintGL() { QGLWidget::paintGL(); }
inline void promoted_paintOverlayGL() { QGLWidget::paintOverlayGL(); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QGLWidget::resizeEvent(arg__1); }
inline void promoted_resizeGL(int  w, int  h) { QGLWidget::resizeGL(w, h); }
inline void promoted_resizeOverlayGL(int  w, int  h) { QGLWidget::resizeOverlayGL(w, h); }
inline void promoted_updateGL() { QGLWidget::updateGL(); }
inline void promoted_updateOverlayGL() { QGLWidget::updateOverlayGL(); }
};

class PythonQtWrapper_QGLWidget : public QObject
{ Q_OBJECT
public:
public slots:
QGLWidget* new_QGLWidget(QGLContext*  context, QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0);
QGLWidget* new_QGLWidget(QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0);
QGLWidget* new_QGLWidget(const QGLFormat&  format, QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0);
void delete_QGLWidget(QGLWidget* obj) { delete obj; } 
   GLuint  bindTexture(QGLWidget* theWrappedObject, const QImage&  image, GLenum  target = 0x0DE1, GLint  format = 0x1908);
   GLuint  bindTexture(QGLWidget* theWrappedObject, const QImage&  image, GLenum  target, GLint  format, QGLContext::BindOptions  options);
   GLuint  bindTexture(QGLWidget* theWrappedObject, const QPixmap&  pixmap, GLenum  target = 0x0DE1, GLint  format = 0x1908);
   GLuint  bindTexture(QGLWidget* theWrappedObject, const QPixmap&  pixmap, GLenum  target, GLint  format, QGLContext::BindOptions  options);
   GLuint  bindTexture(QGLWidget* theWrappedObject, const QString&  fileName);
   const QGLColormap*  colormap(QGLWidget* theWrappedObject) const;
   const QGLContext*  context(QGLWidget* theWrappedObject) const;
   QImage  static_QGLWidget_convertToGLFormat(const QImage&  img);
   void deleteTexture(QGLWidget* theWrappedObject, GLuint  tx_id);
   void doneCurrent(QGLWidget* theWrappedObject);
   bool  doubleBuffer(QGLWidget* theWrappedObject) const;
   void drawTexture(QGLWidget* theWrappedObject, const QPointF&  point, GLuint  textureId, GLenum  textureTarget = 0x0DE1);
   void drawTexture(QGLWidget* theWrappedObject, const QRectF&  target, GLuint  textureId, GLenum  textureTarget = 0x0DE1);
   bool  event(QGLWidget* theWrappedObject, QEvent*  arg__1);
   QGLFormat  format(QGLWidget* theWrappedObject) const;
   void glDraw(QGLWidget* theWrappedObject);
   void glInit(QGLWidget* theWrappedObject);
   QImage  grabFrameBuffer(QGLWidget* theWrappedObject, bool  withAlpha = false);
   void initializeGL(QGLWidget* theWrappedObject);
   void initializeOverlayGL(QGLWidget* theWrappedObject);
   bool  isSharing(QGLWidget* theWrappedObject) const;
   bool  isValid(QGLWidget* theWrappedObject) const;
   void makeCurrent(QGLWidget* theWrappedObject);
   void makeOverlayCurrent(QGLWidget* theWrappedObject);
   const QGLContext*  overlayContext(QGLWidget* theWrappedObject) const;
   QPaintEngine*  paintEngine(QGLWidget* theWrappedObject) const;
   void paintEvent(QGLWidget* theWrappedObject, QPaintEvent*  arg__1);
   void paintGL(QGLWidget* theWrappedObject);
   void paintOverlayGL(QGLWidget* theWrappedObject);
   void qglClearColor(QGLWidget* theWrappedObject, const QColor&  c) const;
   void qglColor(QGLWidget* theWrappedObject, const QColor&  c) const;
   QPixmap  renderPixmap(QGLWidget* theWrappedObject, int  w = 0, int  h = 0, bool  useContext = false);
   void renderText(QGLWidget* theWrappedObject, double  x, double  y, double  z, const QString&  str, const QFont&  fnt = QFont(), int  listBase = 2000);
   void renderText(QGLWidget* theWrappedObject, int  x, int  y, const QString&  str, const QFont&  fnt = QFont(), int  listBase = 2000);
   void resizeEvent(QGLWidget* theWrappedObject, QResizeEvent*  arg__1);
   void resizeGL(QGLWidget* theWrappedObject, int  w, int  h);
   void resizeOverlayGL(QGLWidget* theWrappedObject, int  w, int  h);
   void setColormap(QGLWidget* theWrappedObject, const QGLColormap&  map);
   void swapBuffers(QGLWidget* theWrappedObject);
   void updateGL(QGLWidget* theWrappedObject);
   void updateOverlayGL(QGLWidget* theWrappedObject);
};


