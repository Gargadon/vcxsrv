static void __stdcall glCullFaceWrapper(GLenum mode_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCullFace\n");
  glWinDirectProcCalls++;
#endif
  glCullFace( mode_ );
}

static void __stdcall glFrontFaceWrapper(GLenum mode_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFrontFace\n");
  glWinDirectProcCalls++;
#endif
  glFrontFace( mode_ );
}

static void __stdcall glHintWrapper(GLenum target_, GLenum mode_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glHint\n");
  glWinDirectProcCalls++;
#endif
  glHint( target_, mode_ );
}

static void __stdcall glLineWidthWrapper(GLfloat width_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glLineWidth\n");
  glWinDirectProcCalls++;
#endif
  glLineWidth( width_ );
}

static void __stdcall glPointSizeWrapper(GLfloat size_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPointSize\n");
  glWinDirectProcCalls++;
#endif
  glPointSize( size_ );
}

static void __stdcall glPolygonModeWrapper(GLenum face_, GLenum mode_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPolygonMode\n");
  glWinDirectProcCalls++;
#endif
  glPolygonMode( face_, mode_ );
}

static void __stdcall glScissorWrapper(GLint x_, GLint y_, GLsizei width_, GLsizei height_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glScissor\n");
  glWinDirectProcCalls++;
#endif
  glScissor( x_, y_, width_, height_ );
}

static void __stdcall glTexParameterfWrapper(GLenum target_, GLenum pname_, GLfloat param_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexParameterf\n");
  glWinDirectProcCalls++;
#endif
  glTexParameterf( target_, pname_, param_ );
}

static void __stdcall glTexParameterfvWrapper(GLenum target_, GLenum pname_, const GLfloat* params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexParameterfv\n");
  glWinDirectProcCalls++;
#endif
  glTexParameterfv( target_, pname_, params_ );
}

static void __stdcall glTexParameteriWrapper(GLenum target_, GLenum pname_, GLint param_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexParameteri\n");
  glWinDirectProcCalls++;
#endif
  glTexParameteri( target_, pname_, param_ );
}

static void __stdcall glTexParameterivWrapper(GLenum target_, GLenum pname_, const GLint* params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexParameteriv\n");
  glWinDirectProcCalls++;
#endif
  glTexParameteriv( target_, pname_, params_ );
}

static void __stdcall glTexImage1DWrapper(GLenum target_, GLint level_, GLint internalformat_, GLsizei width_, GLint border_, GLenum format_, GLenum type_, const void * pixels_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexImage1D\n");
  glWinDirectProcCalls++;
#endif
  glTexImage1D( target_, level_, internalformat_, width_, border_, format_, type_, pixels_ );
}

static void __stdcall glTexImage2DWrapper(GLenum target_, GLint level_, GLint internalformat_, GLsizei width_, GLsizei height_, GLint border_, GLenum format_, GLenum type_, const void * pixels_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexImage2D\n");
  glWinDirectProcCalls++;
#endif
  glTexImage2D( target_, level_, internalformat_, width_, height_, border_, format_, type_, pixels_ );
}

static void __stdcall glDrawBufferWrapper(GLenum buf_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDrawBuffer\n");
  glWinDirectProcCalls++;
#endif
  glDrawBuffer( buf_ );
}

static void __stdcall glClearWrapper(GLbitfield mask_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClear\n");
  glWinDirectProcCalls++;
#endif
  glClear( mask_ );
}

static void __stdcall glClearColorWrapper(GLfloat red_, GLfloat green_, GLfloat blue_, GLfloat alpha_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClearColor\n");
  glWinDirectProcCalls++;
#endif
  glClearColor( red_, green_, blue_, alpha_ );
}

static void __stdcall glClearStencilWrapper(GLint s_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClearStencil\n");
  glWinDirectProcCalls++;
#endif
  glClearStencil( s_ );
}

static void __stdcall glClearDepthWrapper(GLdouble depth_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClearDepth\n");
  glWinDirectProcCalls++;
#endif
  glClearDepth( depth_ );
}

static void __stdcall glStencilMaskWrapper(GLuint mask_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glStencilMask\n");
  glWinDirectProcCalls++;
#endif
  glStencilMask( mask_ );
}

static void __stdcall glColorMaskWrapper(GLboolean red_, GLboolean green_, GLboolean blue_, GLboolean alpha_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColorMask\n");
  glWinDirectProcCalls++;
#endif
  glColorMask( red_, green_, blue_, alpha_ );
}

static void __stdcall glDepthMaskWrapper(GLboolean flag_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDepthMask\n");
  glWinDirectProcCalls++;
#endif
  glDepthMask( flag_ );
}

static void __stdcall glDisableWrapper(GLenum cap_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDisable\n");
  glWinDirectProcCalls++;
#endif
  glDisable( cap_ );
}

static void __stdcall glEnableWrapper(GLenum cap_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEnable\n");
  glWinDirectProcCalls++;
#endif
  glEnable( cap_ );
}

static void __stdcall glFinishWrapper(void)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFinish\n");
  glWinDirectProcCalls++;
#endif
  glFinish(  );
}

static void __stdcall glFlushWrapper(void)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFlush\n");
  glWinDirectProcCalls++;
#endif
  glFlush(  );
}

static void __stdcall glBlendFuncWrapper(GLenum sfactor_, GLenum dfactor_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBlendFunc\n");
  glWinDirectProcCalls++;
#endif
  glBlendFunc( sfactor_, dfactor_ );
}

static void __stdcall glLogicOpWrapper(GLenum opcode_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glLogicOp\n");
  glWinDirectProcCalls++;
#endif
  glLogicOp( opcode_ );
}

static void __stdcall glStencilFuncWrapper(GLenum func_, GLint ref_, GLuint mask_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glStencilFunc\n");
  glWinDirectProcCalls++;
#endif
  glStencilFunc( func_, ref_, mask_ );
}

static void __stdcall glStencilOpWrapper(GLenum fail_, GLenum zfail_, GLenum zpass_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glStencilOp\n");
  glWinDirectProcCalls++;
#endif
  glStencilOp( fail_, zfail_, zpass_ );
}

static void __stdcall glDepthFuncWrapper(GLenum func_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDepthFunc\n");
  glWinDirectProcCalls++;
#endif
  glDepthFunc( func_ );
}

static void __stdcall glPixelStorefWrapper(GLenum pname_, GLfloat param_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPixelStoref\n");
  glWinDirectProcCalls++;
#endif
  glPixelStoref( pname_, param_ );
}

static void __stdcall glPixelStoreiWrapper(GLenum pname_, GLint param_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPixelStorei\n");
  glWinDirectProcCalls++;
#endif
  glPixelStorei( pname_, param_ );
}

static void __stdcall glReadBufferWrapper(GLenum src_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glReadBuffer\n");
  glWinDirectProcCalls++;
#endif
  glReadBuffer( src_ );
}

static void __stdcall glReadPixelsWrapper(GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, void * pixels_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glReadPixels\n");
  glWinDirectProcCalls++;
#endif
  glReadPixels( x_, y_, width_, height_, format_, type_, pixels_ );
}

static void __stdcall glGetBooleanvWrapper(GLenum pname_, GLboolean* data_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetBooleanv\n");
  glWinDirectProcCalls++;
#endif
  glGetBooleanv( pname_, data_ );
}

static void __stdcall glGetDoublevWrapper(GLenum pname_, GLdouble* data_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetDoublev\n");
  glWinDirectProcCalls++;
#endif
  glGetDoublev( pname_, data_ );
}

static GLenum __stdcall glGetErrorWrapper(void)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetError\n");
  glWinDirectProcCalls++;
#endif
  return glGetError(  );
}

static void __stdcall glGetFloatvWrapper(GLenum pname_, GLfloat* data_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetFloatv\n");
  glWinDirectProcCalls++;
#endif
  glGetFloatv( pname_, data_ );
}

static void __stdcall glGetIntegervWrapper(GLenum pname_, GLint* data_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetIntegerv\n");
  glWinDirectProcCalls++;
#endif
  glGetIntegerv( pname_, data_ );
}

static const GLubyte * __stdcall glGetStringWrapper(GLenum name_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetString\n");
  glWinDirectProcCalls++;
#endif
  return glGetString( name_ );
}

static void __stdcall glGetTexImageWrapper(GLenum target_, GLint level_, GLenum format_, GLenum type_, void * pixels_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTexImage\n");
  glWinDirectProcCalls++;
#endif
  glGetTexImage( target_, level_, format_, type_, pixels_ );
}

static void __stdcall glGetTexParameterfvWrapper(GLenum target_, GLenum pname_, GLfloat* params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTexParameterfv\n");
  glWinDirectProcCalls++;
#endif
  glGetTexParameterfv( target_, pname_, params_ );
}

static void __stdcall glGetTexParameterivWrapper(GLenum target_, GLenum pname_, GLint* params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTexParameteriv\n");
  glWinDirectProcCalls++;
#endif
  glGetTexParameteriv( target_, pname_, params_ );
}

static void __stdcall glGetTexLevelParameterfvWrapper(GLenum target_, GLint level_, GLenum pname_, GLfloat* params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTexLevelParameterfv\n");
  glWinDirectProcCalls++;
#endif
  glGetTexLevelParameterfv( target_, level_, pname_, params_ );
}

static void __stdcall glGetTexLevelParameterivWrapper(GLenum target_, GLint level_, GLenum pname_, GLint* params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTexLevelParameteriv\n");
  glWinDirectProcCalls++;
#endif
  glGetTexLevelParameteriv( target_, level_, pname_, params_ );
}

static GLboolean __stdcall glIsEnabledWrapper(GLenum cap_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIsEnabled\n");
  glWinDirectProcCalls++;
#endif
  return glIsEnabled( cap_ );
}

static void __stdcall glDepthRangeWrapper(GLdouble n_, GLdouble f_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDepthRange\n");
  glWinDirectProcCalls++;
#endif
  glDepthRange( n_, f_ );
}

static void __stdcall glViewportWrapper(GLint x_, GLint y_, GLsizei width_, GLsizei height_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glViewport\n");
  glWinDirectProcCalls++;
#endif
  glViewport( x_, y_, width_, height_ );
}

static void __stdcall glNewListWrapper(GLuint list_, GLenum mode_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNewList\n");
  glWinDirectProcCalls++;
#endif
  glNewList( list_, mode_ );
}

static void __stdcall glEndListWrapper(void)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEndList\n");
  glWinDirectProcCalls++;
#endif
  glEndList(  );
}

static void __stdcall glCallListWrapper(GLuint list_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCallList\n");
  glWinDirectProcCalls++;
#endif
  glCallList( list_ );
}

static void __stdcall glCallListsWrapper(GLsizei n_, GLenum type_, const void * lists_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCallLists\n");
  glWinDirectProcCalls++;
#endif
  glCallLists( n_, type_, lists_ );
}

static void __stdcall glDeleteListsWrapper(GLuint list_, GLsizei range_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDeleteLists\n");
  glWinDirectProcCalls++;
#endif
  glDeleteLists( list_, range_ );
}

static GLuint __stdcall glGenListsWrapper(GLsizei range_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGenLists\n");
  glWinDirectProcCalls++;
#endif
  return glGenLists( range_ );
}

static void __stdcall glListBaseWrapper(GLuint base_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glListBase\n");
  glWinDirectProcCalls++;
#endif
  glListBase( base_ );
}

static void __stdcall glBeginWrapper(GLenum mode_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBegin\n");
  glWinDirectProcCalls++;
#endif
  glBegin( mode_ );
}

static void __stdcall glBitmapWrapper(GLsizei width_, GLsizei height_, GLfloat xorig_, GLfloat yorig_, GLfloat xmove_, GLfloat ymove_, const GLubyte* bitmap_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBitmap\n");
  glWinDirectProcCalls++;
#endif
  glBitmap( width_, height_, xorig_, yorig_, xmove_, ymove_, bitmap_ );
}

static void __stdcall glColor3bWrapper(GLbyte red_, GLbyte green_, GLbyte blue_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor3b\n");
  glWinDirectProcCalls++;
#endif
  glColor3b( red_, green_, blue_ );
}

static void __stdcall glColor3bvWrapper(const GLbyte* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor3bv\n");
  glWinDirectProcCalls++;
#endif
  glColor3bv( v_ );
}

static void __stdcall glColor3dWrapper(GLdouble red_, GLdouble green_, GLdouble blue_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor3d\n");
  glWinDirectProcCalls++;
#endif
  glColor3d( red_, green_, blue_ );
}

static void __stdcall glColor3dvWrapper(const GLdouble* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor3dv\n");
  glWinDirectProcCalls++;
#endif
  glColor3dv( v_ );
}

static void __stdcall glColor3fWrapper(GLfloat red_, GLfloat green_, GLfloat blue_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor3f\n");
  glWinDirectProcCalls++;
#endif
  glColor3f( red_, green_, blue_ );
}

static void __stdcall glColor3fvWrapper(const GLfloat* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor3fv\n");
  glWinDirectProcCalls++;
#endif
  glColor3fv( v_ );
}

static void __stdcall glColor3iWrapper(GLint red_, GLint green_, GLint blue_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor3i\n");
  glWinDirectProcCalls++;
#endif
  glColor3i( red_, green_, blue_ );
}

static void __stdcall glColor3ivWrapper(const GLint* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor3iv\n");
  glWinDirectProcCalls++;
#endif
  glColor3iv( v_ );
}

static void __stdcall glColor3sWrapper(GLshort red_, GLshort green_, GLshort blue_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor3s\n");
  glWinDirectProcCalls++;
#endif
  glColor3s( red_, green_, blue_ );
}

static void __stdcall glColor3svWrapper(const GLshort* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor3sv\n");
  glWinDirectProcCalls++;
#endif
  glColor3sv( v_ );
}

static void __stdcall glColor3ubWrapper(GLubyte red_, GLubyte green_, GLubyte blue_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor3ub\n");
  glWinDirectProcCalls++;
#endif
  glColor3ub( red_, green_, blue_ );
}

static void __stdcall glColor3ubvWrapper(const GLubyte* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor3ubv\n");
  glWinDirectProcCalls++;
#endif
  glColor3ubv( v_ );
}

static void __stdcall glColor3uiWrapper(GLuint red_, GLuint green_, GLuint blue_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor3ui\n");
  glWinDirectProcCalls++;
#endif
  glColor3ui( red_, green_, blue_ );
}

static void __stdcall glColor3uivWrapper(const GLuint* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor3uiv\n");
  glWinDirectProcCalls++;
#endif
  glColor3uiv( v_ );
}

static void __stdcall glColor3usWrapper(GLushort red_, GLushort green_, GLushort blue_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor3us\n");
  glWinDirectProcCalls++;
#endif
  glColor3us( red_, green_, blue_ );
}

static void __stdcall glColor3usvWrapper(const GLushort* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor3usv\n");
  glWinDirectProcCalls++;
#endif
  glColor3usv( v_ );
}

static void __stdcall glColor4bWrapper(GLbyte red_, GLbyte green_, GLbyte blue_, GLbyte alpha_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor4b\n");
  glWinDirectProcCalls++;
#endif
  glColor4b( red_, green_, blue_, alpha_ );
}

static void __stdcall glColor4bvWrapper(const GLbyte* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor4bv\n");
  glWinDirectProcCalls++;
#endif
  glColor4bv( v_ );
}

static void __stdcall glColor4dWrapper(GLdouble red_, GLdouble green_, GLdouble blue_, GLdouble alpha_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor4d\n");
  glWinDirectProcCalls++;
#endif
  glColor4d( red_, green_, blue_, alpha_ );
}

static void __stdcall glColor4dvWrapper(const GLdouble* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor4dv\n");
  glWinDirectProcCalls++;
#endif
  glColor4dv( v_ );
}

static void __stdcall glColor4fWrapper(GLfloat red_, GLfloat green_, GLfloat blue_, GLfloat alpha_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor4f\n");
  glWinDirectProcCalls++;
#endif
  glColor4f( red_, green_, blue_, alpha_ );
}

static void __stdcall glColor4fvWrapper(const GLfloat* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor4fv\n");
  glWinDirectProcCalls++;
#endif
  glColor4fv( v_ );
}

static void __stdcall glColor4iWrapper(GLint red_, GLint green_, GLint blue_, GLint alpha_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor4i\n");
  glWinDirectProcCalls++;
#endif
  glColor4i( red_, green_, blue_, alpha_ );
}

static void __stdcall glColor4ivWrapper(const GLint* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor4iv\n");
  glWinDirectProcCalls++;
#endif
  glColor4iv( v_ );
}

static void __stdcall glColor4sWrapper(GLshort red_, GLshort green_, GLshort blue_, GLshort alpha_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor4s\n");
  glWinDirectProcCalls++;
#endif
  glColor4s( red_, green_, blue_, alpha_ );
}

static void __stdcall glColor4svWrapper(const GLshort* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor4sv\n");
  glWinDirectProcCalls++;
#endif
  glColor4sv( v_ );
}

static void __stdcall glColor4ubWrapper(GLubyte red_, GLubyte green_, GLubyte blue_, GLubyte alpha_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor4ub\n");
  glWinDirectProcCalls++;
#endif
  glColor4ub( red_, green_, blue_, alpha_ );
}

static void __stdcall glColor4ubvWrapper(const GLubyte* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor4ubv\n");
  glWinDirectProcCalls++;
#endif
  glColor4ubv( v_ );
}

static void __stdcall glColor4uiWrapper(GLuint red_, GLuint green_, GLuint blue_, GLuint alpha_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor4ui\n");
  glWinDirectProcCalls++;
#endif
  glColor4ui( red_, green_, blue_, alpha_ );
}

static void __stdcall glColor4uivWrapper(const GLuint* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor4uiv\n");
  glWinDirectProcCalls++;
#endif
  glColor4uiv( v_ );
}

static void __stdcall glColor4usWrapper(GLushort red_, GLushort green_, GLushort blue_, GLushort alpha_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor4us\n");
  glWinDirectProcCalls++;
#endif
  glColor4us( red_, green_, blue_, alpha_ );
}

static void __stdcall glColor4usvWrapper(const GLushort* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor4usv\n");
  glWinDirectProcCalls++;
#endif
  glColor4usv( v_ );
}

static void __stdcall glEdgeFlagWrapper(GLboolean flag_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEdgeFlag\n");
  glWinDirectProcCalls++;
#endif
  glEdgeFlag( flag_ );
}

static void __stdcall glEdgeFlagvWrapper(const GLboolean* flag_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEdgeFlagv\n");
  glWinDirectProcCalls++;
#endif
  glEdgeFlagv( flag_ );
}

static void __stdcall glEndWrapper(void)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEnd\n");
  glWinDirectProcCalls++;
#endif
  glEnd(  );
}

static void __stdcall glIndexdWrapper(GLdouble c_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIndexd\n");
  glWinDirectProcCalls++;
#endif
  glIndexd( c_ );
}

static void __stdcall glIndexdvWrapper(const GLdouble* c_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIndexdv\n");
  glWinDirectProcCalls++;
#endif
  glIndexdv( c_ );
}

static void __stdcall glIndexfWrapper(GLfloat c_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIndexf\n");
  glWinDirectProcCalls++;
#endif
  glIndexf( c_ );
}

static void __stdcall glIndexfvWrapper(const GLfloat* c_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIndexfv\n");
  glWinDirectProcCalls++;
#endif
  glIndexfv( c_ );
}

static void __stdcall glIndexiWrapper(GLint c_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIndexi\n");
  glWinDirectProcCalls++;
#endif
  glIndexi( c_ );
}

static void __stdcall glIndexivWrapper(const GLint* c_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIndexiv\n");
  glWinDirectProcCalls++;
#endif
  glIndexiv( c_ );
}

static void __stdcall glIndexsWrapper(GLshort c_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIndexs\n");
  glWinDirectProcCalls++;
#endif
  glIndexs( c_ );
}

static void __stdcall glIndexsvWrapper(const GLshort* c_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIndexsv\n");
  glWinDirectProcCalls++;
#endif
  glIndexsv( c_ );
}

static void __stdcall glNormal3bWrapper(GLbyte nx_, GLbyte ny_, GLbyte nz_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNormal3b\n");
  glWinDirectProcCalls++;
#endif
  glNormal3b( nx_, ny_, nz_ );
}

static void __stdcall glNormal3bvWrapper(const GLbyte* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNormal3bv\n");
  glWinDirectProcCalls++;
#endif
  glNormal3bv( v_ );
}

static void __stdcall glNormal3dWrapper(GLdouble nx_, GLdouble ny_, GLdouble nz_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNormal3d\n");
  glWinDirectProcCalls++;
#endif
  glNormal3d( nx_, ny_, nz_ );
}

static void __stdcall glNormal3dvWrapper(const GLdouble* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNormal3dv\n");
  glWinDirectProcCalls++;
#endif
  glNormal3dv( v_ );
}

static void __stdcall glNormal3fWrapper(GLfloat nx_, GLfloat ny_, GLfloat nz_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNormal3f\n");
  glWinDirectProcCalls++;
#endif
  glNormal3f( nx_, ny_, nz_ );
}

static void __stdcall glNormal3fvWrapper(const GLfloat* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNormal3fv\n");
  glWinDirectProcCalls++;
#endif
  glNormal3fv( v_ );
}

static void __stdcall glNormal3iWrapper(GLint nx_, GLint ny_, GLint nz_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNormal3i\n");
  glWinDirectProcCalls++;
#endif
  glNormal3i( nx_, ny_, nz_ );
}

static void __stdcall glNormal3ivWrapper(const GLint* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNormal3iv\n");
  glWinDirectProcCalls++;
#endif
  glNormal3iv( v_ );
}

static void __stdcall glNormal3sWrapper(GLshort nx_, GLshort ny_, GLshort nz_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNormal3s\n");
  glWinDirectProcCalls++;
#endif
  glNormal3s( nx_, ny_, nz_ );
}

static void __stdcall glNormal3svWrapper(const GLshort* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNormal3sv\n");
  glWinDirectProcCalls++;
#endif
  glNormal3sv( v_ );
}

static void __stdcall glRasterPos2dWrapper(GLdouble x_, GLdouble y_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRasterPos2d\n");
  glWinDirectProcCalls++;
#endif
  glRasterPos2d( x_, y_ );
}

static void __stdcall glRasterPos2dvWrapper(const GLdouble* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRasterPos2dv\n");
  glWinDirectProcCalls++;
#endif
  glRasterPos2dv( v_ );
}

static void __stdcall glRasterPos2fWrapper(GLfloat x_, GLfloat y_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRasterPos2f\n");
  glWinDirectProcCalls++;
#endif
  glRasterPos2f( x_, y_ );
}

static void __stdcall glRasterPos2fvWrapper(const GLfloat* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRasterPos2fv\n");
  glWinDirectProcCalls++;
#endif
  glRasterPos2fv( v_ );
}

static void __stdcall glRasterPos2iWrapper(GLint x_, GLint y_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRasterPos2i\n");
  glWinDirectProcCalls++;
#endif
  glRasterPos2i( x_, y_ );
}

static void __stdcall glRasterPos2ivWrapper(const GLint* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRasterPos2iv\n");
  glWinDirectProcCalls++;
#endif
  glRasterPos2iv( v_ );
}

static void __stdcall glRasterPos2sWrapper(GLshort x_, GLshort y_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRasterPos2s\n");
  glWinDirectProcCalls++;
#endif
  glRasterPos2s( x_, y_ );
}

static void __stdcall glRasterPos2svWrapper(const GLshort* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRasterPos2sv\n");
  glWinDirectProcCalls++;
#endif
  glRasterPos2sv( v_ );
}

static void __stdcall glRasterPos3dWrapper(GLdouble x_, GLdouble y_, GLdouble z_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRasterPos3d\n");
  glWinDirectProcCalls++;
#endif
  glRasterPos3d( x_, y_, z_ );
}

static void __stdcall glRasterPos3dvWrapper(const GLdouble* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRasterPos3dv\n");
  glWinDirectProcCalls++;
#endif
  glRasterPos3dv( v_ );
}

static void __stdcall glRasterPos3fWrapper(GLfloat x_, GLfloat y_, GLfloat z_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRasterPos3f\n");
  glWinDirectProcCalls++;
#endif
  glRasterPos3f( x_, y_, z_ );
}

static void __stdcall glRasterPos3fvWrapper(const GLfloat* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRasterPos3fv\n");
  glWinDirectProcCalls++;
#endif
  glRasterPos3fv( v_ );
}

static void __stdcall glRasterPos3iWrapper(GLint x_, GLint y_, GLint z_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRasterPos3i\n");
  glWinDirectProcCalls++;
#endif
  glRasterPos3i( x_, y_, z_ );
}

static void __stdcall glRasterPos3ivWrapper(const GLint* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRasterPos3iv\n");
  glWinDirectProcCalls++;
#endif
  glRasterPos3iv( v_ );
}

static void __stdcall glRasterPos3sWrapper(GLshort x_, GLshort y_, GLshort z_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRasterPos3s\n");
  glWinDirectProcCalls++;
#endif
  glRasterPos3s( x_, y_, z_ );
}

static void __stdcall glRasterPos3svWrapper(const GLshort* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRasterPos3sv\n");
  glWinDirectProcCalls++;
#endif
  glRasterPos3sv( v_ );
}

static void __stdcall glRasterPos4dWrapper(GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRasterPos4d\n");
  glWinDirectProcCalls++;
#endif
  glRasterPos4d( x_, y_, z_, w_ );
}

static void __stdcall glRasterPos4dvWrapper(const GLdouble* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRasterPos4dv\n");
  glWinDirectProcCalls++;
#endif
  glRasterPos4dv( v_ );
}

static void __stdcall glRasterPos4fWrapper(GLfloat x_, GLfloat y_, GLfloat z_, GLfloat w_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRasterPos4f\n");
  glWinDirectProcCalls++;
#endif
  glRasterPos4f( x_, y_, z_, w_ );
}

static void __stdcall glRasterPos4fvWrapper(const GLfloat* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRasterPos4fv\n");
  glWinDirectProcCalls++;
#endif
  glRasterPos4fv( v_ );
}

static void __stdcall glRasterPos4iWrapper(GLint x_, GLint y_, GLint z_, GLint w_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRasterPos4i\n");
  glWinDirectProcCalls++;
#endif
  glRasterPos4i( x_, y_, z_, w_ );
}

static void __stdcall glRasterPos4ivWrapper(const GLint* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRasterPos4iv\n");
  glWinDirectProcCalls++;
#endif
  glRasterPos4iv( v_ );
}

static void __stdcall glRasterPos4sWrapper(GLshort x_, GLshort y_, GLshort z_, GLshort w_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRasterPos4s\n");
  glWinDirectProcCalls++;
#endif
  glRasterPos4s( x_, y_, z_, w_ );
}

static void __stdcall glRasterPos4svWrapper(const GLshort* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRasterPos4sv\n");
  glWinDirectProcCalls++;
#endif
  glRasterPos4sv( v_ );
}

static void __stdcall glRectdWrapper(GLdouble x1_, GLdouble y1_, GLdouble x2_, GLdouble y2_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRectd\n");
  glWinDirectProcCalls++;
#endif
  glRectd( x1_, y1_, x2_, y2_ );
}

static void __stdcall glRectdvWrapper(const GLdouble* v1_, const GLdouble* v2_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRectdv\n");
  glWinDirectProcCalls++;
#endif
  glRectdv( v1_, v2_ );
}

static void __stdcall glRectfWrapper(GLfloat x1_, GLfloat y1_, GLfloat x2_, GLfloat y2_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRectf\n");
  glWinDirectProcCalls++;
#endif
  glRectf( x1_, y1_, x2_, y2_ );
}

static void __stdcall glRectfvWrapper(const GLfloat* v1_, const GLfloat* v2_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRectfv\n");
  glWinDirectProcCalls++;
#endif
  glRectfv( v1_, v2_ );
}

static void __stdcall glRectiWrapper(GLint x1_, GLint y1_, GLint x2_, GLint y2_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRecti\n");
  glWinDirectProcCalls++;
#endif
  glRecti( x1_, y1_, x2_, y2_ );
}

static void __stdcall glRectivWrapper(const GLint* v1_, const GLint* v2_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRectiv\n");
  glWinDirectProcCalls++;
#endif
  glRectiv( v1_, v2_ );
}

static void __stdcall glRectsWrapper(GLshort x1_, GLshort y1_, GLshort x2_, GLshort y2_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRects\n");
  glWinDirectProcCalls++;
#endif
  glRects( x1_, y1_, x2_, y2_ );
}

static void __stdcall glRectsvWrapper(const GLshort* v1_, const GLshort* v2_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRectsv\n");
  glWinDirectProcCalls++;
#endif
  glRectsv( v1_, v2_ );
}

static void __stdcall glTexCoord1dWrapper(GLdouble s_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord1d\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord1d( s_ );
}

static void __stdcall glTexCoord1dvWrapper(const GLdouble* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord1dv\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord1dv( v_ );
}

static void __stdcall glTexCoord1fWrapper(GLfloat s_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord1f\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord1f( s_ );
}

static void __stdcall glTexCoord1fvWrapper(const GLfloat* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord1fv\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord1fv( v_ );
}

static void __stdcall glTexCoord1iWrapper(GLint s_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord1i\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord1i( s_ );
}

static void __stdcall glTexCoord1ivWrapper(const GLint* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord1iv\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord1iv( v_ );
}

static void __stdcall glTexCoord1sWrapper(GLshort s_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord1s\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord1s( s_ );
}

static void __stdcall glTexCoord1svWrapper(const GLshort* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord1sv\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord1sv( v_ );
}

static void __stdcall glTexCoord2dWrapper(GLdouble s_, GLdouble t_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord2d\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord2d( s_, t_ );
}

static void __stdcall glTexCoord2dvWrapper(const GLdouble* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord2dv\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord2dv( v_ );
}

static void __stdcall glTexCoord2fWrapper(GLfloat s_, GLfloat t_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord2f\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord2f( s_, t_ );
}

static void __stdcall glTexCoord2fvWrapper(const GLfloat* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord2fv\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord2fv( v_ );
}

static void __stdcall glTexCoord2iWrapper(GLint s_, GLint t_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord2i\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord2i( s_, t_ );
}

static void __stdcall glTexCoord2ivWrapper(const GLint* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord2iv\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord2iv( v_ );
}

static void __stdcall glTexCoord2sWrapper(GLshort s_, GLshort t_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord2s\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord2s( s_, t_ );
}

static void __stdcall glTexCoord2svWrapper(const GLshort* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord2sv\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord2sv( v_ );
}

static void __stdcall glTexCoord3dWrapper(GLdouble s_, GLdouble t_, GLdouble r_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord3d\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord3d( s_, t_, r_ );
}

static void __stdcall glTexCoord3dvWrapper(const GLdouble* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord3dv\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord3dv( v_ );
}

static void __stdcall glTexCoord3fWrapper(GLfloat s_, GLfloat t_, GLfloat r_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord3f\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord3f( s_, t_, r_ );
}

static void __stdcall glTexCoord3fvWrapper(const GLfloat* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord3fv\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord3fv( v_ );
}

static void __stdcall glTexCoord3iWrapper(GLint s_, GLint t_, GLint r_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord3i\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord3i( s_, t_, r_ );
}

static void __stdcall glTexCoord3ivWrapper(const GLint* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord3iv\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord3iv( v_ );
}

static void __stdcall glTexCoord3sWrapper(GLshort s_, GLshort t_, GLshort r_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord3s\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord3s( s_, t_, r_ );
}

static void __stdcall glTexCoord3svWrapper(const GLshort* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord3sv\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord3sv( v_ );
}

static void __stdcall glTexCoord4dWrapper(GLdouble s_, GLdouble t_, GLdouble r_, GLdouble q_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord4d\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord4d( s_, t_, r_, q_ );
}

static void __stdcall glTexCoord4dvWrapper(const GLdouble* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord4dv\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord4dv( v_ );
}

static void __stdcall glTexCoord4fWrapper(GLfloat s_, GLfloat t_, GLfloat r_, GLfloat q_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord4f\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord4f( s_, t_, r_, q_ );
}

static void __stdcall glTexCoord4fvWrapper(const GLfloat* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord4fv\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord4fv( v_ );
}

static void __stdcall glTexCoord4iWrapper(GLint s_, GLint t_, GLint r_, GLint q_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord4i\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord4i( s_, t_, r_, q_ );
}

static void __stdcall glTexCoord4ivWrapper(const GLint* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord4iv\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord4iv( v_ );
}

static void __stdcall glTexCoord4sWrapper(GLshort s_, GLshort t_, GLshort r_, GLshort q_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord4s\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord4s( s_, t_, r_, q_ );
}

static void __stdcall glTexCoord4svWrapper(const GLshort* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord4sv\n");
  glWinDirectProcCalls++;
#endif
  glTexCoord4sv( v_ );
}

static void __stdcall glVertex2dWrapper(GLdouble x_, GLdouble y_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex2d\n");
  glWinDirectProcCalls++;
#endif
  glVertex2d( x_, y_ );
}

static void __stdcall glVertex2dvWrapper(const GLdouble* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex2dv\n");
  glWinDirectProcCalls++;
#endif
  glVertex2dv( v_ );
}

static void __stdcall glVertex2fWrapper(GLfloat x_, GLfloat y_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex2f\n");
  glWinDirectProcCalls++;
#endif
  glVertex2f( x_, y_ );
}

static void __stdcall glVertex2fvWrapper(const GLfloat* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex2fv\n");
  glWinDirectProcCalls++;
#endif
  glVertex2fv( v_ );
}

static void __stdcall glVertex2iWrapper(GLint x_, GLint y_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex2i\n");
  glWinDirectProcCalls++;
#endif
  glVertex2i( x_, y_ );
}

static void __stdcall glVertex2ivWrapper(const GLint* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex2iv\n");
  glWinDirectProcCalls++;
#endif
  glVertex2iv( v_ );
}

static void __stdcall glVertex2sWrapper(GLshort x_, GLshort y_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex2s\n");
  glWinDirectProcCalls++;
#endif
  glVertex2s( x_, y_ );
}

static void __stdcall glVertex2svWrapper(const GLshort* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex2sv\n");
  glWinDirectProcCalls++;
#endif
  glVertex2sv( v_ );
}

static void __stdcall glVertex3dWrapper(GLdouble x_, GLdouble y_, GLdouble z_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex3d\n");
  glWinDirectProcCalls++;
#endif
  glVertex3d( x_, y_, z_ );
}

static void __stdcall glVertex3dvWrapper(const GLdouble* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex3dv\n");
  glWinDirectProcCalls++;
#endif
  glVertex3dv( v_ );
}

static void __stdcall glVertex3fWrapper(GLfloat x_, GLfloat y_, GLfloat z_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex3f\n");
  glWinDirectProcCalls++;
#endif
  glVertex3f( x_, y_, z_ );
}

static void __stdcall glVertex3fvWrapper(const GLfloat* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex3fv\n");
  glWinDirectProcCalls++;
#endif
  glVertex3fv( v_ );
}

static void __stdcall glVertex3iWrapper(GLint x_, GLint y_, GLint z_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex3i\n");
  glWinDirectProcCalls++;
#endif
  glVertex3i( x_, y_, z_ );
}

static void __stdcall glVertex3ivWrapper(const GLint* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex3iv\n");
  glWinDirectProcCalls++;
#endif
  glVertex3iv( v_ );
}

static void __stdcall glVertex3sWrapper(GLshort x_, GLshort y_, GLshort z_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex3s\n");
  glWinDirectProcCalls++;
#endif
  glVertex3s( x_, y_, z_ );
}

static void __stdcall glVertex3svWrapper(const GLshort* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex3sv\n");
  glWinDirectProcCalls++;
#endif
  glVertex3sv( v_ );
}

static void __stdcall glVertex4dWrapper(GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex4d\n");
  glWinDirectProcCalls++;
#endif
  glVertex4d( x_, y_, z_, w_ );
}

static void __stdcall glVertex4dvWrapper(const GLdouble* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex4dv\n");
  glWinDirectProcCalls++;
#endif
  glVertex4dv( v_ );
}

static void __stdcall glVertex4fWrapper(GLfloat x_, GLfloat y_, GLfloat z_, GLfloat w_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex4f\n");
  glWinDirectProcCalls++;
#endif
  glVertex4f( x_, y_, z_, w_ );
}

static void __stdcall glVertex4fvWrapper(const GLfloat* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex4fv\n");
  glWinDirectProcCalls++;
#endif
  glVertex4fv( v_ );
}

static void __stdcall glVertex4iWrapper(GLint x_, GLint y_, GLint z_, GLint w_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex4i\n");
  glWinDirectProcCalls++;
#endif
  glVertex4i( x_, y_, z_, w_ );
}

static void __stdcall glVertex4ivWrapper(const GLint* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex4iv\n");
  glWinDirectProcCalls++;
#endif
  glVertex4iv( v_ );
}

static void __stdcall glVertex4sWrapper(GLshort x_, GLshort y_, GLshort z_, GLshort w_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex4s\n");
  glWinDirectProcCalls++;
#endif
  glVertex4s( x_, y_, z_, w_ );
}

static void __stdcall glVertex4svWrapper(const GLshort* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex4sv\n");
  glWinDirectProcCalls++;
#endif
  glVertex4sv( v_ );
}

static void __stdcall glClipPlaneWrapper(GLenum plane_, const GLdouble* equation_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClipPlane\n");
  glWinDirectProcCalls++;
#endif
  glClipPlane( plane_, equation_ );
}

static void __stdcall glColorMaterialWrapper(GLenum face_, GLenum mode_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColorMaterial\n");
  glWinDirectProcCalls++;
#endif
  glColorMaterial( face_, mode_ );
}

static void __stdcall glFogfWrapper(GLenum pname_, GLfloat param_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFogf\n");
  glWinDirectProcCalls++;
#endif
  glFogf( pname_, param_ );
}

static void __stdcall glFogfvWrapper(GLenum pname_, const GLfloat* params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFogfv\n");
  glWinDirectProcCalls++;
#endif
  glFogfv( pname_, params_ );
}

static void __stdcall glFogiWrapper(GLenum pname_, GLint param_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFogi\n");
  glWinDirectProcCalls++;
#endif
  glFogi( pname_, param_ );
}

static void __stdcall glFogivWrapper(GLenum pname_, const GLint* params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFogiv\n");
  glWinDirectProcCalls++;
#endif
  glFogiv( pname_, params_ );
}

static void __stdcall glLightfWrapper(GLenum light_, GLenum pname_, GLfloat param_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glLightf\n");
  glWinDirectProcCalls++;
#endif
  glLightf( light_, pname_, param_ );
}

static void __stdcall glLightfvWrapper(GLenum light_, GLenum pname_, const GLfloat* params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glLightfv\n");
  glWinDirectProcCalls++;
#endif
  glLightfv( light_, pname_, params_ );
}

static void __stdcall glLightiWrapper(GLenum light_, GLenum pname_, GLint param_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glLighti\n");
  glWinDirectProcCalls++;
#endif
  glLighti( light_, pname_, param_ );
}

static void __stdcall glLightivWrapper(GLenum light_, GLenum pname_, const GLint* params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glLightiv\n");
  glWinDirectProcCalls++;
#endif
  glLightiv( light_, pname_, params_ );
}

static void __stdcall glLightModelfWrapper(GLenum pname_, GLfloat param_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glLightModelf\n");
  glWinDirectProcCalls++;
#endif
  glLightModelf( pname_, param_ );
}

static void __stdcall glLightModelfvWrapper(GLenum pname_, const GLfloat* params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glLightModelfv\n");
  glWinDirectProcCalls++;
#endif
  glLightModelfv( pname_, params_ );
}

static void __stdcall glLightModeliWrapper(GLenum pname_, GLint param_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glLightModeli\n");
  glWinDirectProcCalls++;
#endif
  glLightModeli( pname_, param_ );
}

static void __stdcall glLightModelivWrapper(GLenum pname_, const GLint* params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glLightModeliv\n");
  glWinDirectProcCalls++;
#endif
  glLightModeliv( pname_, params_ );
}

static void __stdcall glLineStippleWrapper(GLint factor_, GLushort pattern_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glLineStipple\n");
  glWinDirectProcCalls++;
#endif
  glLineStipple( factor_, pattern_ );
}

static void __stdcall glMaterialfWrapper(GLenum face_, GLenum pname_, GLfloat param_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMaterialf\n");
  glWinDirectProcCalls++;
#endif
  glMaterialf( face_, pname_, param_ );
}

static void __stdcall glMaterialfvWrapper(GLenum face_, GLenum pname_, const GLfloat* params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMaterialfv\n");
  glWinDirectProcCalls++;
#endif
  glMaterialfv( face_, pname_, params_ );
}

static void __stdcall glMaterialiWrapper(GLenum face_, GLenum pname_, GLint param_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMateriali\n");
  glWinDirectProcCalls++;
#endif
  glMateriali( face_, pname_, param_ );
}

static void __stdcall glMaterialivWrapper(GLenum face_, GLenum pname_, const GLint* params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMaterialiv\n");
  glWinDirectProcCalls++;
#endif
  glMaterialiv( face_, pname_, params_ );
}

static void __stdcall glPolygonStippleWrapper(const GLubyte* mask_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPolygonStipple\n");
  glWinDirectProcCalls++;
#endif
  glPolygonStipple( mask_ );
}

static void __stdcall glShadeModelWrapper(GLenum mode_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glShadeModel\n");
  glWinDirectProcCalls++;
#endif
  glShadeModel( mode_ );
}

static void __stdcall glTexEnvfWrapper(GLenum target_, GLenum pname_, GLfloat param_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexEnvf\n");
  glWinDirectProcCalls++;
#endif
  glTexEnvf( target_, pname_, param_ );
}

static void __stdcall glTexEnvfvWrapper(GLenum target_, GLenum pname_, const GLfloat* params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexEnvfv\n");
  glWinDirectProcCalls++;
#endif
  glTexEnvfv( target_, pname_, params_ );
}

static void __stdcall glTexEnviWrapper(GLenum target_, GLenum pname_, GLint param_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexEnvi\n");
  glWinDirectProcCalls++;
#endif
  glTexEnvi( target_, pname_, param_ );
}

static void __stdcall glTexEnvivWrapper(GLenum target_, GLenum pname_, const GLint* params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexEnviv\n");
  glWinDirectProcCalls++;
#endif
  glTexEnviv( target_, pname_, params_ );
}

static void __stdcall glTexGendWrapper(GLenum coord_, GLenum pname_, GLdouble param_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexGend\n");
  glWinDirectProcCalls++;
#endif
  glTexGend( coord_, pname_, param_ );
}

static void __stdcall glTexGendvWrapper(GLenum coord_, GLenum pname_, const GLdouble* params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexGendv\n");
  glWinDirectProcCalls++;
#endif
  glTexGendv( coord_, pname_, params_ );
}

static void __stdcall glTexGenfWrapper(GLenum coord_, GLenum pname_, GLfloat param_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexGenf\n");
  glWinDirectProcCalls++;
#endif
  glTexGenf( coord_, pname_, param_ );
}

static void __stdcall glTexGenfvWrapper(GLenum coord_, GLenum pname_, const GLfloat* params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexGenfv\n");
  glWinDirectProcCalls++;
#endif
  glTexGenfv( coord_, pname_, params_ );
}

static void __stdcall glTexGeniWrapper(GLenum coord_, GLenum pname_, GLint param_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexGeni\n");
  glWinDirectProcCalls++;
#endif
  glTexGeni( coord_, pname_, param_ );
}

static void __stdcall glTexGenivWrapper(GLenum coord_, GLenum pname_, const GLint* params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexGeniv\n");
  glWinDirectProcCalls++;
#endif
  glTexGeniv( coord_, pname_, params_ );
}

static void __stdcall glFeedbackBufferWrapper(GLsizei size_, GLenum type_, GLfloat* buffer_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFeedbackBuffer\n");
  glWinDirectProcCalls++;
#endif
  glFeedbackBuffer( size_, type_, buffer_ );
}

static void __stdcall glSelectBufferWrapper(GLsizei size_, GLuint* buffer_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSelectBuffer\n");
  glWinDirectProcCalls++;
#endif
  glSelectBuffer( size_, buffer_ );
}

static GLint __stdcall glRenderModeWrapper(GLenum mode_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRenderMode\n");
  glWinDirectProcCalls++;
#endif
  return glRenderMode( mode_ );
}

static void __stdcall glInitNamesWrapper(void)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glInitNames\n");
  glWinDirectProcCalls++;
#endif
  glInitNames(  );
}

static void __stdcall glLoadNameWrapper(GLuint name_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glLoadName\n");
  glWinDirectProcCalls++;
#endif
  glLoadName( name_ );
}

static void __stdcall glPassThroughWrapper(GLfloat token_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPassThrough\n");
  glWinDirectProcCalls++;
#endif
  glPassThrough( token_ );
}

static void __stdcall glPopNameWrapper(void)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPopName\n");
  glWinDirectProcCalls++;
#endif
  glPopName(  );
}

static void __stdcall glPushNameWrapper(GLuint name_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPushName\n");
  glWinDirectProcCalls++;
#endif
  glPushName( name_ );
}

static void __stdcall glClearAccumWrapper(GLfloat red_, GLfloat green_, GLfloat blue_, GLfloat alpha_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClearAccum\n");
  glWinDirectProcCalls++;
#endif
  glClearAccum( red_, green_, blue_, alpha_ );
}

static void __stdcall glClearIndexWrapper(GLfloat c_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClearIndex\n");
  glWinDirectProcCalls++;
#endif
  glClearIndex( c_ );
}

static void __stdcall glIndexMaskWrapper(GLuint mask_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIndexMask\n");
  glWinDirectProcCalls++;
#endif
  glIndexMask( mask_ );
}

static void __stdcall glAccumWrapper(GLenum op_, GLfloat value_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glAccum\n");
  glWinDirectProcCalls++;
#endif
  glAccum( op_, value_ );
}

static void __stdcall glPopAttribWrapper(void)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPopAttrib\n");
  glWinDirectProcCalls++;
#endif
  glPopAttrib(  );
}

static void __stdcall glPushAttribWrapper(GLbitfield mask_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPushAttrib\n");
  glWinDirectProcCalls++;
#endif
  glPushAttrib( mask_ );
}

static void __stdcall glMap1dWrapper(GLenum target_, GLdouble u1_, GLdouble u2_, GLint stride_, GLint order_, const GLdouble* points_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMap1d\n");
  glWinDirectProcCalls++;
#endif
  glMap1d( target_, u1_, u2_, stride_, order_, points_ );
}

static void __stdcall glMap1fWrapper(GLenum target_, GLfloat u1_, GLfloat u2_, GLint stride_, GLint order_, const GLfloat* points_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMap1f\n");
  glWinDirectProcCalls++;
#endif
  glMap1f( target_, u1_, u2_, stride_, order_, points_ );
}

static void __stdcall glMap2dWrapper(GLenum target_, GLdouble u1_, GLdouble u2_, GLint ustride_, GLint uorder_, GLdouble v1_, GLdouble v2_, GLint vstride_, GLint vorder_, const GLdouble* points_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMap2d\n");
  glWinDirectProcCalls++;
#endif
  glMap2d( target_, u1_, u2_, ustride_, uorder_, v1_, v2_, vstride_, vorder_, points_ );
}

static void __stdcall glMap2fWrapper(GLenum target_, GLfloat u1_, GLfloat u2_, GLint ustride_, GLint uorder_, GLfloat v1_, GLfloat v2_, GLint vstride_, GLint vorder_, const GLfloat* points_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMap2f\n");
  glWinDirectProcCalls++;
#endif
  glMap2f( target_, u1_, u2_, ustride_, uorder_, v1_, v2_, vstride_, vorder_, points_ );
}

static void __stdcall glMapGrid1dWrapper(GLint un_, GLdouble u1_, GLdouble u2_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMapGrid1d\n");
  glWinDirectProcCalls++;
#endif
  glMapGrid1d( un_, u1_, u2_ );
}

static void __stdcall glMapGrid1fWrapper(GLint un_, GLfloat u1_, GLfloat u2_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMapGrid1f\n");
  glWinDirectProcCalls++;
#endif
  glMapGrid1f( un_, u1_, u2_ );
}

static void __stdcall glMapGrid2dWrapper(GLint un_, GLdouble u1_, GLdouble u2_, GLint vn_, GLdouble v1_, GLdouble v2_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMapGrid2d\n");
  glWinDirectProcCalls++;
#endif
  glMapGrid2d( un_, u1_, u2_, vn_, v1_, v2_ );
}

static void __stdcall glMapGrid2fWrapper(GLint un_, GLfloat u1_, GLfloat u2_, GLint vn_, GLfloat v1_, GLfloat v2_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMapGrid2f\n");
  glWinDirectProcCalls++;
#endif
  glMapGrid2f( un_, u1_, u2_, vn_, v1_, v2_ );
}

static void __stdcall glEvalCoord1dWrapper(GLdouble u_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEvalCoord1d\n");
  glWinDirectProcCalls++;
#endif
  glEvalCoord1d( u_ );
}

static void __stdcall glEvalCoord1dvWrapper(const GLdouble* u_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEvalCoord1dv\n");
  glWinDirectProcCalls++;
#endif
  glEvalCoord1dv( u_ );
}

static void __stdcall glEvalCoord1fWrapper(GLfloat u_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEvalCoord1f\n");
  glWinDirectProcCalls++;
#endif
  glEvalCoord1f( u_ );
}

static void __stdcall glEvalCoord1fvWrapper(const GLfloat* u_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEvalCoord1fv\n");
  glWinDirectProcCalls++;
#endif
  glEvalCoord1fv( u_ );
}

static void __stdcall glEvalCoord2dWrapper(GLdouble u_, GLdouble v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEvalCoord2d\n");
  glWinDirectProcCalls++;
#endif
  glEvalCoord2d( u_, v_ );
}

static void __stdcall glEvalCoord2dvWrapper(const GLdouble* u_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEvalCoord2dv\n");
  glWinDirectProcCalls++;
#endif
  glEvalCoord2dv( u_ );
}

static void __stdcall glEvalCoord2fWrapper(GLfloat u_, GLfloat v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEvalCoord2f\n");
  glWinDirectProcCalls++;
#endif
  glEvalCoord2f( u_, v_ );
}

static void __stdcall glEvalCoord2fvWrapper(const GLfloat* u_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEvalCoord2fv\n");
  glWinDirectProcCalls++;
#endif
  glEvalCoord2fv( u_ );
}

static void __stdcall glEvalMesh1Wrapper(GLenum mode_, GLint i1_, GLint i2_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEvalMesh1\n");
  glWinDirectProcCalls++;
#endif
  glEvalMesh1( mode_, i1_, i2_ );
}

static void __stdcall glEvalPoint1Wrapper(GLint i_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEvalPoint1\n");
  glWinDirectProcCalls++;
#endif
  glEvalPoint1( i_ );
}

static void __stdcall glEvalMesh2Wrapper(GLenum mode_, GLint i1_, GLint i2_, GLint j1_, GLint j2_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEvalMesh2\n");
  glWinDirectProcCalls++;
#endif
  glEvalMesh2( mode_, i1_, i2_, j1_, j2_ );
}

static void __stdcall glEvalPoint2Wrapper(GLint i_, GLint j_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEvalPoint2\n");
  glWinDirectProcCalls++;
#endif
  glEvalPoint2( i_, j_ );
}

static void __stdcall glAlphaFuncWrapper(GLenum func_, GLfloat ref_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glAlphaFunc\n");
  glWinDirectProcCalls++;
#endif
  glAlphaFunc( func_, ref_ );
}

static void __stdcall glPixelZoomWrapper(GLfloat xfactor_, GLfloat yfactor_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPixelZoom\n");
  glWinDirectProcCalls++;
#endif
  glPixelZoom( xfactor_, yfactor_ );
}

static void __stdcall glPixelTransferfWrapper(GLenum pname_, GLfloat param_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPixelTransferf\n");
  glWinDirectProcCalls++;
#endif
  glPixelTransferf( pname_, param_ );
}

static void __stdcall glPixelTransferiWrapper(GLenum pname_, GLint param_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPixelTransferi\n");
  glWinDirectProcCalls++;
#endif
  glPixelTransferi( pname_, param_ );
}

static void __stdcall glPixelMapfvWrapper(GLenum map_, GLsizei mapsize_, const GLfloat* values_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPixelMapfv\n");
  glWinDirectProcCalls++;
#endif
  glPixelMapfv( map_, mapsize_, values_ );
}

static void __stdcall glPixelMapuivWrapper(GLenum map_, GLsizei mapsize_, const GLuint* values_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPixelMapuiv\n");
  glWinDirectProcCalls++;
#endif
  glPixelMapuiv( map_, mapsize_, values_ );
}

static void __stdcall glPixelMapusvWrapper(GLenum map_, GLsizei mapsize_, const GLushort* values_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPixelMapusv\n");
  glWinDirectProcCalls++;
#endif
  glPixelMapusv( map_, mapsize_, values_ );
}

static void __stdcall glCopyPixelsWrapper(GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLenum type_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCopyPixels\n");
  glWinDirectProcCalls++;
#endif
  glCopyPixels( x_, y_, width_, height_, type_ );
}

static void __stdcall glDrawPixelsWrapper(GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, const void * pixels_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDrawPixels\n");
  glWinDirectProcCalls++;
#endif
  glDrawPixels( width_, height_, format_, type_, pixels_ );
}

static void __stdcall glGetClipPlaneWrapper(GLenum plane_, GLdouble* equation_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetClipPlane\n");
  glWinDirectProcCalls++;
#endif
  glGetClipPlane( plane_, equation_ );
}

static void __stdcall glGetLightfvWrapper(GLenum light_, GLenum pname_, GLfloat* params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetLightfv\n");
  glWinDirectProcCalls++;
#endif
  glGetLightfv( light_, pname_, params_ );
}

static void __stdcall glGetLightivWrapper(GLenum light_, GLenum pname_, GLint* params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetLightiv\n");
  glWinDirectProcCalls++;
#endif
  glGetLightiv( light_, pname_, params_ );
}

static void __stdcall glGetMapdvWrapper(GLenum target_, GLenum query_, GLdouble* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetMapdv\n");
  glWinDirectProcCalls++;
#endif
  glGetMapdv( target_, query_, v_ );
}

static void __stdcall glGetMapfvWrapper(GLenum target_, GLenum query_, GLfloat* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetMapfv\n");
  glWinDirectProcCalls++;
#endif
  glGetMapfv( target_, query_, v_ );
}

static void __stdcall glGetMapivWrapper(GLenum target_, GLenum query_, GLint* v_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetMapiv\n");
  glWinDirectProcCalls++;
#endif
  glGetMapiv( target_, query_, v_ );
}

static void __stdcall glGetMaterialfvWrapper(GLenum face_, GLenum pname_, GLfloat* params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetMaterialfv\n");
  glWinDirectProcCalls++;
#endif
  glGetMaterialfv( face_, pname_, params_ );
}

static void __stdcall glGetMaterialivWrapper(GLenum face_, GLenum pname_, GLint* params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetMaterialiv\n");
  glWinDirectProcCalls++;
#endif
  glGetMaterialiv( face_, pname_, params_ );
}

static void __stdcall glGetPixelMapfvWrapper(GLenum map_, GLfloat* values_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetPixelMapfv\n");
  glWinDirectProcCalls++;
#endif
  glGetPixelMapfv( map_, values_ );
}

static void __stdcall glGetPixelMapuivWrapper(GLenum map_, GLuint* values_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetPixelMapuiv\n");
  glWinDirectProcCalls++;
#endif
  glGetPixelMapuiv( map_, values_ );
}

static void __stdcall glGetPixelMapusvWrapper(GLenum map_, GLushort* values_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetPixelMapusv\n");
  glWinDirectProcCalls++;
#endif
  glGetPixelMapusv( map_, values_ );
}

static void __stdcall glGetPolygonStippleWrapper(GLubyte* mask_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetPolygonStipple\n");
  glWinDirectProcCalls++;
#endif
  glGetPolygonStipple( mask_ );
}

static void __stdcall glGetTexEnvfvWrapper(GLenum target_, GLenum pname_, GLfloat* params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTexEnvfv\n");
  glWinDirectProcCalls++;
#endif
  glGetTexEnvfv( target_, pname_, params_ );
}

static void __stdcall glGetTexEnvivWrapper(GLenum target_, GLenum pname_, GLint* params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTexEnviv\n");
  glWinDirectProcCalls++;
#endif
  glGetTexEnviv( target_, pname_, params_ );
}

static void __stdcall glGetTexGendvWrapper(GLenum coord_, GLenum pname_, GLdouble* params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTexGendv\n");
  glWinDirectProcCalls++;
#endif
  glGetTexGendv( coord_, pname_, params_ );
}

static void __stdcall glGetTexGenfvWrapper(GLenum coord_, GLenum pname_, GLfloat* params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTexGenfv\n");
  glWinDirectProcCalls++;
#endif
  glGetTexGenfv( coord_, pname_, params_ );
}

static void __stdcall glGetTexGenivWrapper(GLenum coord_, GLenum pname_, GLint* params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTexGeniv\n");
  glWinDirectProcCalls++;
#endif
  glGetTexGeniv( coord_, pname_, params_ );
}

static GLboolean __stdcall glIsListWrapper(GLuint list_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIsList\n");
  glWinDirectProcCalls++;
#endif
  return glIsList( list_ );
}

static void __stdcall glFrustumWrapper(GLdouble left_, GLdouble right_, GLdouble bottom_, GLdouble top_, GLdouble zNear_, GLdouble zFar_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFrustum\n");
  glWinDirectProcCalls++;
#endif
  glFrustum( left_, right_, bottom_, top_, zNear_, zFar_ );
}

static void __stdcall glLoadIdentityWrapper(void)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glLoadIdentity\n");
  glWinDirectProcCalls++;
#endif
  glLoadIdentity(  );
}

static void __stdcall glLoadMatrixfWrapper(const GLfloat* m_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glLoadMatrixf\n");
  glWinDirectProcCalls++;
#endif
  glLoadMatrixf( m_ );
}

static void __stdcall glLoadMatrixdWrapper(const GLdouble* m_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glLoadMatrixd\n");
  glWinDirectProcCalls++;
#endif
  glLoadMatrixd( m_ );
}

static void __stdcall glMatrixModeWrapper(GLenum mode_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMatrixMode\n");
  glWinDirectProcCalls++;
#endif
  glMatrixMode( mode_ );
}

static void __stdcall glMultMatrixfWrapper(const GLfloat* m_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultMatrixf\n");
  glWinDirectProcCalls++;
#endif
  glMultMatrixf( m_ );
}

static void __stdcall glMultMatrixdWrapper(const GLdouble* m_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultMatrixd\n");
  glWinDirectProcCalls++;
#endif
  glMultMatrixd( m_ );
}

static void __stdcall glOrthoWrapper(GLdouble left_, GLdouble right_, GLdouble bottom_, GLdouble top_, GLdouble zNear_, GLdouble zFar_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glOrtho\n");
  glWinDirectProcCalls++;
#endif
  glOrtho( left_, right_, bottom_, top_, zNear_, zFar_ );
}

static void __stdcall glPopMatrixWrapper(void)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPopMatrix\n");
  glWinDirectProcCalls++;
#endif
  glPopMatrix(  );
}

static void __stdcall glPushMatrixWrapper(void)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPushMatrix\n");
  glWinDirectProcCalls++;
#endif
  glPushMatrix(  );
}

static void __stdcall glRotatedWrapper(GLdouble angle_, GLdouble x_, GLdouble y_, GLdouble z_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRotated\n");
  glWinDirectProcCalls++;
#endif
  glRotated( angle_, x_, y_, z_ );
}

static void __stdcall glRotatefWrapper(GLfloat angle_, GLfloat x_, GLfloat y_, GLfloat z_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRotatef\n");
  glWinDirectProcCalls++;
#endif
  glRotatef( angle_, x_, y_, z_ );
}

static void __stdcall glScaledWrapper(GLdouble x_, GLdouble y_, GLdouble z_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glScaled\n");
  glWinDirectProcCalls++;
#endif
  glScaled( x_, y_, z_ );
}

static void __stdcall glScalefWrapper(GLfloat x_, GLfloat y_, GLfloat z_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glScalef\n");
  glWinDirectProcCalls++;
#endif
  glScalef( x_, y_, z_ );
}

static void __stdcall glTranslatedWrapper(GLdouble x_, GLdouble y_, GLdouble z_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTranslated\n");
  glWinDirectProcCalls++;
#endif
  glTranslated( x_, y_, z_ );
}

static void __stdcall glTranslatefWrapper(GLfloat x_, GLfloat y_, GLfloat z_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTranslatef\n");
  glWinDirectProcCalls++;
#endif
  glTranslatef( x_, y_, z_ );
}

static void __stdcall glDrawArraysWrapper(GLenum mode_, GLint first_, GLsizei count_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDrawArrays\n");
  glWinDirectProcCalls++;
#endif
  glDrawArrays( mode_, first_, count_ );
}

static void __stdcall glDrawElementsWrapper(GLenum mode_, GLsizei count_, GLenum type_, const void * indices_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDrawElements\n");
  glWinDirectProcCalls++;
#endif
  glDrawElements( mode_, count_, type_, indices_ );
}

static void __stdcall glGetPointervWrapper(GLenum pname_, void ** params_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetPointerv\n");
  glWinDirectProcCalls++;
#endif
  glGetPointerv( pname_, params_ );
}

static void __stdcall glPolygonOffsetWrapper(GLfloat factor_, GLfloat units_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPolygonOffset\n");
  glWinDirectProcCalls++;
#endif
  glPolygonOffset( factor_, units_ );
}

static void __stdcall glCopyTexImage1DWrapper(GLenum target_, GLint level_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_, GLint border_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCopyTexImage1D\n");
  glWinDirectProcCalls++;
#endif
  glCopyTexImage1D( target_, level_, internalformat_, x_, y_, width_, border_ );
}

static void __stdcall glCopyTexImage2DWrapper(GLenum target_, GLint level_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLint border_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCopyTexImage2D\n");
  glWinDirectProcCalls++;
#endif
  glCopyTexImage2D( target_, level_, internalformat_, x_, y_, width_, height_, border_ );
}

static void __stdcall glCopyTexSubImage1DWrapper(GLenum target_, GLint level_, GLint xoffset_, GLint x_, GLint y_, GLsizei width_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCopyTexSubImage1D\n");
  glWinDirectProcCalls++;
#endif
  glCopyTexSubImage1D( target_, level_, xoffset_, x_, y_, width_ );
}

static void __stdcall glCopyTexSubImage2DWrapper(GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint x_, GLint y_, GLsizei width_, GLsizei height_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCopyTexSubImage2D\n");
  glWinDirectProcCalls++;
#endif
  glCopyTexSubImage2D( target_, level_, xoffset_, yoffset_, x_, y_, width_, height_ );
}

static void __stdcall glTexSubImage1DWrapper(GLenum target_, GLint level_, GLint xoffset_, GLsizei width_, GLenum format_, GLenum type_, const void * pixels_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexSubImage1D\n");
  glWinDirectProcCalls++;
#endif
  glTexSubImage1D( target_, level_, xoffset_, width_, format_, type_, pixels_ );
}

static void __stdcall glTexSubImage2DWrapper(GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, const void * pixels_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexSubImage2D\n");
  glWinDirectProcCalls++;
#endif
  glTexSubImage2D( target_, level_, xoffset_, yoffset_, width_, height_, format_, type_, pixels_ );
}

static void __stdcall glBindTextureWrapper(GLenum target_, GLuint texture_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindTexture\n");
  glWinDirectProcCalls++;
#endif
  glBindTexture( target_, texture_ );
}

static void __stdcall glDeleteTexturesWrapper(GLsizei n_, const GLuint* textures_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDeleteTextures\n");
  glWinDirectProcCalls++;
#endif
  glDeleteTextures( n_, textures_ );
}

static void __stdcall glGenTexturesWrapper(GLsizei n_, GLuint* textures_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGenTextures\n");
  glWinDirectProcCalls++;
#endif
  glGenTextures( n_, textures_ );
}

static GLboolean __stdcall glIsTextureWrapper(GLuint texture_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIsTexture\n");
  glWinDirectProcCalls++;
#endif
  return glIsTexture( texture_ );
}

static void __stdcall glArrayElementWrapper(GLint i_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glArrayElement\n");
  glWinDirectProcCalls++;
#endif
  glArrayElement( i_ );
}

static void __stdcall glColorPointerWrapper(GLint size_, GLenum type_, GLsizei stride_, const void * pointer_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColorPointer\n");
  glWinDirectProcCalls++;
#endif
  glColorPointer( size_, type_, stride_, pointer_ );
}

static void __stdcall glDisableClientStateWrapper(GLenum array_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDisableClientState\n");
  glWinDirectProcCalls++;
#endif
  glDisableClientState( array_ );
}

static void __stdcall glEdgeFlagPointerWrapper(GLsizei stride_, const void * pointer_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEdgeFlagPointer\n");
  glWinDirectProcCalls++;
#endif
  glEdgeFlagPointer( stride_, pointer_ );
}

static void __stdcall glEnableClientStateWrapper(GLenum array_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEnableClientState\n");
  glWinDirectProcCalls++;
#endif
  glEnableClientState( array_ );
}

static void __stdcall glIndexPointerWrapper(GLenum type_, GLsizei stride_, const void * pointer_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIndexPointer\n");
  glWinDirectProcCalls++;
#endif
  glIndexPointer( type_, stride_, pointer_ );
}

static void __stdcall glInterleavedArraysWrapper(GLenum format_, GLsizei stride_, const void * pointer_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glInterleavedArrays\n");
  glWinDirectProcCalls++;
#endif
  glInterleavedArrays( format_, stride_, pointer_ );
}

static void __stdcall glNormalPointerWrapper(GLenum type_, GLsizei stride_, const void * pointer_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNormalPointer\n");
  glWinDirectProcCalls++;
#endif
  glNormalPointer( type_, stride_, pointer_ );
}

static void __stdcall glTexCoordPointerWrapper(GLint size_, GLenum type_, GLsizei stride_, const void * pointer_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoordPointer\n");
  glWinDirectProcCalls++;
#endif
  glTexCoordPointer( size_, type_, stride_, pointer_ );
}

static void __stdcall glVertexPointerWrapper(GLint size_, GLenum type_, GLsizei stride_, const void * pointer_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexPointer\n");
  glWinDirectProcCalls++;
#endif
  glVertexPointer( size_, type_, stride_, pointer_ );
}

static GLboolean __stdcall glAreTexturesResidentWrapper(GLsizei n_, const GLuint* textures_, GLboolean* residences_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glAreTexturesResident\n");
  glWinDirectProcCalls++;
#endif
  return glAreTexturesResident( n_, textures_, residences_ );
}

static void __stdcall glPrioritizeTexturesWrapper(GLsizei n_, const GLuint* textures_, const GLfloat* priorities_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPrioritizeTextures\n");
  glWinDirectProcCalls++;
#endif
  glPrioritizeTextures( n_, textures_, priorities_ );
}

static void __stdcall glIndexubWrapper(GLubyte c_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIndexub\n");
  glWinDirectProcCalls++;
#endif
  glIndexub( c_ );
}

static void __stdcall glIndexubvWrapper(const GLubyte* c_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIndexubv\n");
  glWinDirectProcCalls++;
#endif
  glIndexubv( c_ );
}

static void __stdcall glPopClientAttribWrapper(void)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPopClientAttrib\n");
  glWinDirectProcCalls++;
#endif
  glPopClientAttrib(  );
}

static void __stdcall glPushClientAttribWrapper(GLbitfield mask_)
{
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPushClientAttrib\n");
  glWinDirectProcCalls++;
#endif
  glPushClientAttrib( mask_ );
}

static void __stdcall glDrawRangeElementsWrapper(GLenum mode_, GLuint start_, GLuint end_, GLsizei count_, GLenum type_, const void * indices_)
{
  RESOLVE(PFNGLDRAWRANGEELEMENTSPROC, "glDrawRangeElements");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDrawRangeElements\n");
#endif
  RESOLVED_PROC(PFNGLDRAWRANGEELEMENTSPROC)( mode_, start_, end_, count_, type_, indices_ );
}

static void __stdcall glTexImage3DWrapper(GLenum target_, GLint level_, GLint internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLint border_, GLenum format_, GLenum type_, const void * pixels_)
{
  RESOLVE(PFNGLTEXIMAGE3DPROC, "glTexImage3D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexImage3D\n");
#endif
  RESOLVED_PROC(PFNGLTEXIMAGE3DPROC)( target_, level_, internalformat_, width_, height_, depth_, border_, format_, type_, pixels_ );
}

static void __stdcall glTexSubImage3DWrapper(GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLenum type_, const void * pixels_)
{
  RESOLVE(PFNGLTEXSUBIMAGE3DPROC, "glTexSubImage3D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexSubImage3D\n");
#endif
  RESOLVED_PROC(PFNGLTEXSUBIMAGE3DPROC)( target_, level_, xoffset_, yoffset_, zoffset_, width_, height_, depth_, format_, type_, pixels_ );
}

static void __stdcall glCopyTexSubImage3DWrapper(GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLint x_, GLint y_, GLsizei width_, GLsizei height_)
{
  RESOLVE(PFNGLCOPYTEXSUBIMAGE3DPROC, "glCopyTexSubImage3D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCopyTexSubImage3D\n");
#endif
  RESOLVED_PROC(PFNGLCOPYTEXSUBIMAGE3DPROC)( target_, level_, xoffset_, yoffset_, zoffset_, x_, y_, width_, height_ );
}

static void __stdcall glActiveTextureWrapper(GLenum texture_)
{
  RESOLVE(PFNGLACTIVETEXTUREPROC, "glActiveTexture");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glActiveTexture\n");
#endif
  RESOLVED_PROC(PFNGLACTIVETEXTUREPROC)( texture_ );
}

static void __stdcall glSampleCoverageWrapper(GLfloat value_, GLboolean invert_)
{
  RESOLVE(PFNGLSAMPLECOVERAGEPROC, "glSampleCoverage");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSampleCoverage\n");
#endif
  RESOLVED_PROC(PFNGLSAMPLECOVERAGEPROC)( value_, invert_ );
}

static void __stdcall glCompressedTexImage3DWrapper(GLenum target_, GLint level_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLint border_, GLsizei imageSize_, const void * data_)
{
  RESOLVE(PFNGLCOMPRESSEDTEXIMAGE3DPROC, "glCompressedTexImage3D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCompressedTexImage3D\n");
#endif
  RESOLVED_PROC(PFNGLCOMPRESSEDTEXIMAGE3DPROC)( target_, level_, internalformat_, width_, height_, depth_, border_, imageSize_, data_ );
}

static void __stdcall glCompressedTexImage2DWrapper(GLenum target_, GLint level_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLint border_, GLsizei imageSize_, const void * data_)
{
  RESOLVE(PFNGLCOMPRESSEDTEXIMAGE2DPROC, "glCompressedTexImage2D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCompressedTexImage2D\n");
#endif
  RESOLVED_PROC(PFNGLCOMPRESSEDTEXIMAGE2DPROC)( target_, level_, internalformat_, width_, height_, border_, imageSize_, data_ );
}

static void __stdcall glCompressedTexImage1DWrapper(GLenum target_, GLint level_, GLenum internalformat_, GLsizei width_, GLint border_, GLsizei imageSize_, const void * data_)
{
  RESOLVE(PFNGLCOMPRESSEDTEXIMAGE1DPROC, "glCompressedTexImage1D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCompressedTexImage1D\n");
#endif
  RESOLVED_PROC(PFNGLCOMPRESSEDTEXIMAGE1DPROC)( target_, level_, internalformat_, width_, border_, imageSize_, data_ );
}

static void __stdcall glCompressedTexSubImage3DWrapper(GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLsizei imageSize_, const void * data_)
{
  RESOLVE(PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC, "glCompressedTexSubImage3D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCompressedTexSubImage3D\n");
#endif
  RESOLVED_PROC(PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)( target_, level_, xoffset_, yoffset_, zoffset_, width_, height_, depth_, format_, imageSize_, data_ );
}

static void __stdcall glCompressedTexSubImage2DWrapper(GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLsizei width_, GLsizei height_, GLenum format_, GLsizei imageSize_, const void * data_)
{
  RESOLVE(PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC, "glCompressedTexSubImage2D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCompressedTexSubImage2D\n");
#endif
  RESOLVED_PROC(PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)( target_, level_, xoffset_, yoffset_, width_, height_, format_, imageSize_, data_ );
}

static void __stdcall glCompressedTexSubImage1DWrapper(GLenum target_, GLint level_, GLint xoffset_, GLsizei width_, GLenum format_, GLsizei imageSize_, const void * data_)
{
  RESOLVE(PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC, "glCompressedTexSubImage1D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCompressedTexSubImage1D\n");
#endif
  RESOLVED_PROC(PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC)( target_, level_, xoffset_, width_, format_, imageSize_, data_ );
}

static void __stdcall glGetCompressedTexImageWrapper(GLenum target_, GLint level_, void * img_)
{
  RESOLVE(PFNGLGETCOMPRESSEDTEXIMAGEPROC, "glGetCompressedTexImage");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetCompressedTexImage\n");
#endif
  RESOLVED_PROC(PFNGLGETCOMPRESSEDTEXIMAGEPROC)( target_, level_, img_ );
}

static void __stdcall glClientActiveTextureWrapper(GLenum texture_)
{
  RESOLVE(PFNGLCLIENTACTIVETEXTUREPROC, "glClientActiveTexture");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClientActiveTexture\n");
#endif
  RESOLVED_PROC(PFNGLCLIENTACTIVETEXTUREPROC)( texture_ );
}

static void __stdcall glMultiTexCoord1dWrapper(GLenum target_, GLdouble s_)
{
  RESOLVE(PFNGLMULTITEXCOORD1DPROC, "glMultiTexCoord1d");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord1d\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD1DPROC)( target_, s_ );
}

static void __stdcall glMultiTexCoord1dvWrapper(GLenum target_, const GLdouble* v_)
{
  RESOLVE(PFNGLMULTITEXCOORD1DVPROC, "glMultiTexCoord1dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord1dv\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD1DVPROC)( target_, v_ );
}

/* No wrapper for glMultiTexCoord1f, not in dispatch table */
/* No wrapper for glMultiTexCoord1fv, not in dispatch table */
static void __stdcall glMultiTexCoord1iWrapper(GLenum target_, GLint s_)
{
  RESOLVE(PFNGLMULTITEXCOORD1IPROC, "glMultiTexCoord1i");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord1i\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD1IPROC)( target_, s_ );
}

static void __stdcall glMultiTexCoord1ivWrapper(GLenum target_, const GLint* v_)
{
  RESOLVE(PFNGLMULTITEXCOORD1IVPROC, "glMultiTexCoord1iv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord1iv\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD1IVPROC)( target_, v_ );
}

static void __stdcall glMultiTexCoord1sWrapper(GLenum target_, GLshort s_)
{
  RESOLVE(PFNGLMULTITEXCOORD1SPROC, "glMultiTexCoord1s");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord1s\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD1SPROC)( target_, s_ );
}

static void __stdcall glMultiTexCoord1svWrapper(GLenum target_, const GLshort* v_)
{
  RESOLVE(PFNGLMULTITEXCOORD1SVPROC, "glMultiTexCoord1sv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord1sv\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD1SVPROC)( target_, v_ );
}

static void __stdcall glMultiTexCoord2dWrapper(GLenum target_, GLdouble s_, GLdouble t_)
{
  RESOLVE(PFNGLMULTITEXCOORD2DPROC, "glMultiTexCoord2d");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord2d\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD2DPROC)( target_, s_, t_ );
}

static void __stdcall glMultiTexCoord2dvWrapper(GLenum target_, const GLdouble* v_)
{
  RESOLVE(PFNGLMULTITEXCOORD2DVPROC, "glMultiTexCoord2dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord2dv\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD2DVPROC)( target_, v_ );
}

/* No wrapper for glMultiTexCoord2f, not in dispatch table */
/* No wrapper for glMultiTexCoord2fv, not in dispatch table */
static void __stdcall glMultiTexCoord2iWrapper(GLenum target_, GLint s_, GLint t_)
{
  RESOLVE(PFNGLMULTITEXCOORD2IPROC, "glMultiTexCoord2i");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord2i\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD2IPROC)( target_, s_, t_ );
}

static void __stdcall glMultiTexCoord2ivWrapper(GLenum target_, const GLint* v_)
{
  RESOLVE(PFNGLMULTITEXCOORD2IVPROC, "glMultiTexCoord2iv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord2iv\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD2IVPROC)( target_, v_ );
}

static void __stdcall glMultiTexCoord2sWrapper(GLenum target_, GLshort s_, GLshort t_)
{
  RESOLVE(PFNGLMULTITEXCOORD2SPROC, "glMultiTexCoord2s");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord2s\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD2SPROC)( target_, s_, t_ );
}

static void __stdcall glMultiTexCoord2svWrapper(GLenum target_, const GLshort* v_)
{
  RESOLVE(PFNGLMULTITEXCOORD2SVPROC, "glMultiTexCoord2sv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord2sv\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD2SVPROC)( target_, v_ );
}

static void __stdcall glMultiTexCoord3dWrapper(GLenum target_, GLdouble s_, GLdouble t_, GLdouble r_)
{
  RESOLVE(PFNGLMULTITEXCOORD3DPROC, "glMultiTexCoord3d");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord3d\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD3DPROC)( target_, s_, t_, r_ );
}

static void __stdcall glMultiTexCoord3dvWrapper(GLenum target_, const GLdouble* v_)
{
  RESOLVE(PFNGLMULTITEXCOORD3DVPROC, "glMultiTexCoord3dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord3dv\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD3DVPROC)( target_, v_ );
}

/* No wrapper for glMultiTexCoord3f, not in dispatch table */
/* No wrapper for glMultiTexCoord3fv, not in dispatch table */
static void __stdcall glMultiTexCoord3iWrapper(GLenum target_, GLint s_, GLint t_, GLint r_)
{
  RESOLVE(PFNGLMULTITEXCOORD3IPROC, "glMultiTexCoord3i");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord3i\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD3IPROC)( target_, s_, t_, r_ );
}

static void __stdcall glMultiTexCoord3ivWrapper(GLenum target_, const GLint* v_)
{
  RESOLVE(PFNGLMULTITEXCOORD3IVPROC, "glMultiTexCoord3iv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord3iv\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD3IVPROC)( target_, v_ );
}

static void __stdcall glMultiTexCoord3sWrapper(GLenum target_, GLshort s_, GLshort t_, GLshort r_)
{
  RESOLVE(PFNGLMULTITEXCOORD3SPROC, "glMultiTexCoord3s");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord3s\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD3SPROC)( target_, s_, t_, r_ );
}

static void __stdcall glMultiTexCoord3svWrapper(GLenum target_, const GLshort* v_)
{
  RESOLVE(PFNGLMULTITEXCOORD3SVPROC, "glMultiTexCoord3sv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord3sv\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD3SVPROC)( target_, v_ );
}

static void __stdcall glMultiTexCoord4dWrapper(GLenum target_, GLdouble s_, GLdouble t_, GLdouble r_, GLdouble q_)
{
  RESOLVE(PFNGLMULTITEXCOORD4DPROC, "glMultiTexCoord4d");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord4d\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD4DPROC)( target_, s_, t_, r_, q_ );
}

static void __stdcall glMultiTexCoord4dvWrapper(GLenum target_, const GLdouble* v_)
{
  RESOLVE(PFNGLMULTITEXCOORD4DVPROC, "glMultiTexCoord4dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord4dv\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD4DVPROC)( target_, v_ );
}

/* No wrapper for glMultiTexCoord4f, not in dispatch table */
/* No wrapper for glMultiTexCoord4fv, not in dispatch table */
static void __stdcall glMultiTexCoord4iWrapper(GLenum target_, GLint s_, GLint t_, GLint r_, GLint q_)
{
  RESOLVE(PFNGLMULTITEXCOORD4IPROC, "glMultiTexCoord4i");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord4i\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD4IPROC)( target_, s_, t_, r_, q_ );
}

static void __stdcall glMultiTexCoord4ivWrapper(GLenum target_, const GLint* v_)
{
  RESOLVE(PFNGLMULTITEXCOORD4IVPROC, "glMultiTexCoord4iv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord4iv\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD4IVPROC)( target_, v_ );
}

static void __stdcall glMultiTexCoord4sWrapper(GLenum target_, GLshort s_, GLshort t_, GLshort r_, GLshort q_)
{
  RESOLVE(PFNGLMULTITEXCOORD4SPROC, "glMultiTexCoord4s");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord4s\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD4SPROC)( target_, s_, t_, r_, q_ );
}

static void __stdcall glMultiTexCoord4svWrapper(GLenum target_, const GLshort* v_)
{
  RESOLVE(PFNGLMULTITEXCOORD4SVPROC, "glMultiTexCoord4sv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord4sv\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD4SVPROC)( target_, v_ );
}

static void __stdcall glLoadTransposeMatrixfWrapper(const GLfloat* m_)
{
  RESOLVE(PFNGLLOADTRANSPOSEMATRIXFPROC, "glLoadTransposeMatrixf");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glLoadTransposeMatrixf\n");
#endif
  RESOLVED_PROC(PFNGLLOADTRANSPOSEMATRIXFPROC)( m_ );
}

static void __stdcall glLoadTransposeMatrixdWrapper(const GLdouble* m_)
{
  RESOLVE(PFNGLLOADTRANSPOSEMATRIXDPROC, "glLoadTransposeMatrixd");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glLoadTransposeMatrixd\n");
#endif
  RESOLVED_PROC(PFNGLLOADTRANSPOSEMATRIXDPROC)( m_ );
}

static void __stdcall glMultTransposeMatrixfWrapper(const GLfloat* m_)
{
  RESOLVE(PFNGLMULTTRANSPOSEMATRIXFPROC, "glMultTransposeMatrixf");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultTransposeMatrixf\n");
#endif
  RESOLVED_PROC(PFNGLMULTTRANSPOSEMATRIXFPROC)( m_ );
}

static void __stdcall glMultTransposeMatrixdWrapper(const GLdouble* m_)
{
  RESOLVE(PFNGLMULTTRANSPOSEMATRIXDPROC, "glMultTransposeMatrixd");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultTransposeMatrixd\n");
#endif
  RESOLVED_PROC(PFNGLMULTTRANSPOSEMATRIXDPROC)( m_ );
}

static void __stdcall glBlendFuncSeparateWrapper(GLenum sfactorRGB_, GLenum dfactorRGB_, GLenum sfactorAlpha_, GLenum dfactorAlpha_)
{
  RESOLVE(PFNGLBLENDFUNCSEPARATEPROC, "glBlendFuncSeparate");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBlendFuncSeparate\n");
#endif
  RESOLVED_PROC(PFNGLBLENDFUNCSEPARATEPROC)( sfactorRGB_, dfactorRGB_, sfactorAlpha_, dfactorAlpha_ );
}

static void __stdcall glMultiDrawArraysWrapper(GLenum mode_, const GLint* first_, const GLsizei* count_, GLsizei drawcount_)
{
  RESOLVE(PFNGLMULTIDRAWARRAYSPROC, "glMultiDrawArrays");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiDrawArrays\n");
#endif
  RESOLVED_PROC(PFNGLMULTIDRAWARRAYSPROC)( mode_, first_, count_, drawcount_ );
}

static void __stdcall glMultiDrawElementsWrapper(GLenum mode_, const GLsizei* count_, GLenum type_, const void *const* indices_, GLsizei drawcount_)
{
  RESOLVE(PFNGLMULTIDRAWELEMENTSPROC, "glMultiDrawElements");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiDrawElements\n");
#endif
  RESOLVED_PROC(PFNGLMULTIDRAWELEMENTSPROC)( mode_, count_, type_, indices_, drawcount_ );
}

static void __stdcall glPointParameterfWrapper(GLenum pname_, GLfloat param_)
{
  RESOLVE(PFNGLPOINTPARAMETERFPROC, "glPointParameterf");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPointParameterf\n");
#endif
  RESOLVED_PROC(PFNGLPOINTPARAMETERFPROC)( pname_, param_ );
}

static void __stdcall glPointParameterfvWrapper(GLenum pname_, const GLfloat* params_)
{
  RESOLVE(PFNGLPOINTPARAMETERFVPROC, "glPointParameterfv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPointParameterfv\n");
#endif
  RESOLVED_PROC(PFNGLPOINTPARAMETERFVPROC)( pname_, params_ );
}

static void __stdcall glPointParameteriWrapper(GLenum pname_, GLint param_)
{
  RESOLVE(PFNGLPOINTPARAMETERIPROC, "glPointParameteri");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPointParameteri\n");
#endif
  RESOLVED_PROC(PFNGLPOINTPARAMETERIPROC)( pname_, param_ );
}

static void __stdcall glPointParameterivWrapper(GLenum pname_, const GLint* params_)
{
  RESOLVE(PFNGLPOINTPARAMETERIVPROC, "glPointParameteriv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPointParameteriv\n");
#endif
  RESOLVED_PROC(PFNGLPOINTPARAMETERIVPROC)( pname_, params_ );
}

/* No wrapper for glFogCoordf, not in dispatch table */
/* No wrapper for glFogCoordfv, not in dispatch table */
static void __stdcall glFogCoorddWrapper(GLdouble coord_)
{
  RESOLVE(PFNGLFOGCOORDDPROC, "glFogCoordd");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFogCoordd\n");
#endif
  RESOLVED_PROC(PFNGLFOGCOORDDPROC)( coord_ );
}

static void __stdcall glFogCoorddvWrapper(const GLdouble* coord_)
{
  RESOLVE(PFNGLFOGCOORDDVPROC, "glFogCoorddv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFogCoorddv\n");
#endif
  RESOLVED_PROC(PFNGLFOGCOORDDVPROC)( coord_ );
}

static void __stdcall glFogCoordPointerWrapper(GLenum type_, GLsizei stride_, const void * pointer_)
{
  RESOLVE(PFNGLFOGCOORDPOINTERPROC, "glFogCoordPointer");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFogCoordPointer\n");
#endif
  RESOLVED_PROC(PFNGLFOGCOORDPOINTERPROC)( type_, stride_, pointer_ );
}

static void __stdcall glSecondaryColor3bWrapper(GLbyte red_, GLbyte green_, GLbyte blue_)
{
  RESOLVE(PFNGLSECONDARYCOLOR3BPROC, "glSecondaryColor3b");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSecondaryColor3b\n");
#endif
  RESOLVED_PROC(PFNGLSECONDARYCOLOR3BPROC)( red_, green_, blue_ );
}

static void __stdcall glSecondaryColor3bvWrapper(const GLbyte* v_)
{
  RESOLVE(PFNGLSECONDARYCOLOR3BVPROC, "glSecondaryColor3bv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSecondaryColor3bv\n");
#endif
  RESOLVED_PROC(PFNGLSECONDARYCOLOR3BVPROC)( v_ );
}

static void __stdcall glSecondaryColor3dWrapper(GLdouble red_, GLdouble green_, GLdouble blue_)
{
  RESOLVE(PFNGLSECONDARYCOLOR3DPROC, "glSecondaryColor3d");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSecondaryColor3d\n");
#endif
  RESOLVED_PROC(PFNGLSECONDARYCOLOR3DPROC)( red_, green_, blue_ );
}

static void __stdcall glSecondaryColor3dvWrapper(const GLdouble* v_)
{
  RESOLVE(PFNGLSECONDARYCOLOR3DVPROC, "glSecondaryColor3dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSecondaryColor3dv\n");
#endif
  RESOLVED_PROC(PFNGLSECONDARYCOLOR3DVPROC)( v_ );
}

/* No wrapper for glSecondaryColor3f, not in dispatch table */
/* No wrapper for glSecondaryColor3fv, not in dispatch table */
static void __stdcall glSecondaryColor3iWrapper(GLint red_, GLint green_, GLint blue_)
{
  RESOLVE(PFNGLSECONDARYCOLOR3IPROC, "glSecondaryColor3i");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSecondaryColor3i\n");
#endif
  RESOLVED_PROC(PFNGLSECONDARYCOLOR3IPROC)( red_, green_, blue_ );
}

static void __stdcall glSecondaryColor3ivWrapper(const GLint* v_)
{
  RESOLVE(PFNGLSECONDARYCOLOR3IVPROC, "glSecondaryColor3iv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSecondaryColor3iv\n");
#endif
  RESOLVED_PROC(PFNGLSECONDARYCOLOR3IVPROC)( v_ );
}

static void __stdcall glSecondaryColor3sWrapper(GLshort red_, GLshort green_, GLshort blue_)
{
  RESOLVE(PFNGLSECONDARYCOLOR3SPROC, "glSecondaryColor3s");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSecondaryColor3s\n");
#endif
  RESOLVED_PROC(PFNGLSECONDARYCOLOR3SPROC)( red_, green_, blue_ );
}

static void __stdcall glSecondaryColor3svWrapper(const GLshort* v_)
{
  RESOLVE(PFNGLSECONDARYCOLOR3SVPROC, "glSecondaryColor3sv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSecondaryColor3sv\n");
#endif
  RESOLVED_PROC(PFNGLSECONDARYCOLOR3SVPROC)( v_ );
}

static void __stdcall glSecondaryColor3ubWrapper(GLubyte red_, GLubyte green_, GLubyte blue_)
{
  RESOLVE(PFNGLSECONDARYCOLOR3UBPROC, "glSecondaryColor3ub");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSecondaryColor3ub\n");
#endif
  RESOLVED_PROC(PFNGLSECONDARYCOLOR3UBPROC)( red_, green_, blue_ );
}

static void __stdcall glSecondaryColor3ubvWrapper(const GLubyte* v_)
{
  RESOLVE(PFNGLSECONDARYCOLOR3UBVPROC, "glSecondaryColor3ubv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSecondaryColor3ubv\n");
#endif
  RESOLVED_PROC(PFNGLSECONDARYCOLOR3UBVPROC)( v_ );
}

static void __stdcall glSecondaryColor3uiWrapper(GLuint red_, GLuint green_, GLuint blue_)
{
  RESOLVE(PFNGLSECONDARYCOLOR3UIPROC, "glSecondaryColor3ui");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSecondaryColor3ui\n");
#endif
  RESOLVED_PROC(PFNGLSECONDARYCOLOR3UIPROC)( red_, green_, blue_ );
}

static void __stdcall glSecondaryColor3uivWrapper(const GLuint* v_)
{
  RESOLVE(PFNGLSECONDARYCOLOR3UIVPROC, "glSecondaryColor3uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSecondaryColor3uiv\n");
#endif
  RESOLVED_PROC(PFNGLSECONDARYCOLOR3UIVPROC)( v_ );
}

static void __stdcall glSecondaryColor3usWrapper(GLushort red_, GLushort green_, GLushort blue_)
{
  RESOLVE(PFNGLSECONDARYCOLOR3USPROC, "glSecondaryColor3us");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSecondaryColor3us\n");
#endif
  RESOLVED_PROC(PFNGLSECONDARYCOLOR3USPROC)( red_, green_, blue_ );
}

static void __stdcall glSecondaryColor3usvWrapper(const GLushort* v_)
{
  RESOLVE(PFNGLSECONDARYCOLOR3USVPROC, "glSecondaryColor3usv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSecondaryColor3usv\n");
#endif
  RESOLVED_PROC(PFNGLSECONDARYCOLOR3USVPROC)( v_ );
}

static void __stdcall glSecondaryColorPointerWrapper(GLint size_, GLenum type_, GLsizei stride_, const void * pointer_)
{
  RESOLVE(PFNGLSECONDARYCOLORPOINTERPROC, "glSecondaryColorPointer");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSecondaryColorPointer\n");
#endif
  RESOLVED_PROC(PFNGLSECONDARYCOLORPOINTERPROC)( size_, type_, stride_, pointer_ );
}

static void __stdcall glWindowPos2dWrapper(GLdouble x_, GLdouble y_)
{
  RESOLVE(PFNGLWINDOWPOS2DPROC, "glWindowPos2d");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glWindowPos2d\n");
#endif
  RESOLVED_PROC(PFNGLWINDOWPOS2DPROC)( x_, y_ );
}

static void __stdcall glWindowPos2dvWrapper(const GLdouble* v_)
{
  RESOLVE(PFNGLWINDOWPOS2DVPROC, "glWindowPos2dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glWindowPos2dv\n");
#endif
  RESOLVED_PROC(PFNGLWINDOWPOS2DVPROC)( v_ );
}

static void __stdcall glWindowPos2fWrapper(GLfloat x_, GLfloat y_)
{
  RESOLVE(PFNGLWINDOWPOS2FPROC, "glWindowPos2f");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glWindowPos2f\n");
#endif
  RESOLVED_PROC(PFNGLWINDOWPOS2FPROC)( x_, y_ );
}

static void __stdcall glWindowPos2fvWrapper(const GLfloat* v_)
{
  RESOLVE(PFNGLWINDOWPOS2FVPROC, "glWindowPos2fv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glWindowPos2fv\n");
#endif
  RESOLVED_PROC(PFNGLWINDOWPOS2FVPROC)( v_ );
}

static void __stdcall glWindowPos2iWrapper(GLint x_, GLint y_)
{
  RESOLVE(PFNGLWINDOWPOS2IPROC, "glWindowPos2i");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glWindowPos2i\n");
#endif
  RESOLVED_PROC(PFNGLWINDOWPOS2IPROC)( x_, y_ );
}

static void __stdcall glWindowPos2ivWrapper(const GLint* v_)
{
  RESOLVE(PFNGLWINDOWPOS2IVPROC, "glWindowPos2iv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glWindowPos2iv\n");
#endif
  RESOLVED_PROC(PFNGLWINDOWPOS2IVPROC)( v_ );
}

static void __stdcall glWindowPos2sWrapper(GLshort x_, GLshort y_)
{
  RESOLVE(PFNGLWINDOWPOS2SPROC, "glWindowPos2s");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glWindowPos2s\n");
#endif
  RESOLVED_PROC(PFNGLWINDOWPOS2SPROC)( x_, y_ );
}

static void __stdcall glWindowPos2svWrapper(const GLshort* v_)
{
  RESOLVE(PFNGLWINDOWPOS2SVPROC, "glWindowPos2sv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glWindowPos2sv\n");
#endif
  RESOLVED_PROC(PFNGLWINDOWPOS2SVPROC)( v_ );
}

static void __stdcall glWindowPos3dWrapper(GLdouble x_, GLdouble y_, GLdouble z_)
{
  RESOLVE(PFNGLWINDOWPOS3DPROC, "glWindowPos3d");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glWindowPos3d\n");
#endif
  RESOLVED_PROC(PFNGLWINDOWPOS3DPROC)( x_, y_, z_ );
}

static void __stdcall glWindowPos3dvWrapper(const GLdouble* v_)
{
  RESOLVE(PFNGLWINDOWPOS3DVPROC, "glWindowPos3dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glWindowPos3dv\n");
#endif
  RESOLVED_PROC(PFNGLWINDOWPOS3DVPROC)( v_ );
}

static void __stdcall glWindowPos3fWrapper(GLfloat x_, GLfloat y_, GLfloat z_)
{
  RESOLVE(PFNGLWINDOWPOS3FPROC, "glWindowPos3f");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glWindowPos3f\n");
#endif
  RESOLVED_PROC(PFNGLWINDOWPOS3FPROC)( x_, y_, z_ );
}

static void __stdcall glWindowPos3fvWrapper(const GLfloat* v_)
{
  RESOLVE(PFNGLWINDOWPOS3FVPROC, "glWindowPos3fv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glWindowPos3fv\n");
#endif
  RESOLVED_PROC(PFNGLWINDOWPOS3FVPROC)( v_ );
}

static void __stdcall glWindowPos3iWrapper(GLint x_, GLint y_, GLint z_)
{
  RESOLVE(PFNGLWINDOWPOS3IPROC, "glWindowPos3i");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glWindowPos3i\n");
#endif
  RESOLVED_PROC(PFNGLWINDOWPOS3IPROC)( x_, y_, z_ );
}

static void __stdcall glWindowPos3ivWrapper(const GLint* v_)
{
  RESOLVE(PFNGLWINDOWPOS3IVPROC, "glWindowPos3iv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glWindowPos3iv\n");
#endif
  RESOLVED_PROC(PFNGLWINDOWPOS3IVPROC)( v_ );
}

static void __stdcall glWindowPos3sWrapper(GLshort x_, GLshort y_, GLshort z_)
{
  RESOLVE(PFNGLWINDOWPOS3SPROC, "glWindowPos3s");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glWindowPos3s\n");
#endif
  RESOLVED_PROC(PFNGLWINDOWPOS3SPROC)( x_, y_, z_ );
}

static void __stdcall glWindowPos3svWrapper(const GLshort* v_)
{
  RESOLVE(PFNGLWINDOWPOS3SVPROC, "glWindowPos3sv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glWindowPos3sv\n");
#endif
  RESOLVED_PROC(PFNGLWINDOWPOS3SVPROC)( v_ );
}

static void __stdcall glBlendColorWrapper(GLfloat red_, GLfloat green_, GLfloat blue_, GLfloat alpha_)
{
  RESOLVE(PFNGLBLENDCOLORPROC, "glBlendColor");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBlendColor\n");
#endif
  RESOLVED_PROC(PFNGLBLENDCOLORPROC)( red_, green_, blue_, alpha_ );
}

static void __stdcall glBlendEquationWrapper(GLenum mode_)
{
  RESOLVE(PFNGLBLENDEQUATIONPROC, "glBlendEquation");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBlendEquation\n");
#endif
  RESOLVED_PROC(PFNGLBLENDEQUATIONPROC)( mode_ );
}

static void __stdcall glGenQueriesWrapper(GLsizei n_, GLuint* ids_)
{
  RESOLVE(PFNGLGENQUERIESPROC, "glGenQueries");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGenQueries\n");
#endif
  RESOLVED_PROC(PFNGLGENQUERIESPROC)( n_, ids_ );
}

static void __stdcall glDeleteQueriesWrapper(GLsizei n_, const GLuint* ids_)
{
  RESOLVE(PFNGLDELETEQUERIESPROC, "glDeleteQueries");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDeleteQueries\n");
#endif
  RESOLVED_PROC(PFNGLDELETEQUERIESPROC)( n_, ids_ );
}

static GLboolean __stdcall glIsQueryWrapper(GLuint id_)
{
  RESOLVE_RET(PFNGLISQUERYPROC, "glIsQuery", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIsQuery\n");
#endif
  return RESOLVED_PROC(PFNGLISQUERYPROC)( id_ );
}

static void __stdcall glBeginQueryWrapper(GLenum target_, GLuint id_)
{
  RESOLVE(PFNGLBEGINQUERYPROC, "glBeginQuery");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBeginQuery\n");
#endif
  RESOLVED_PROC(PFNGLBEGINQUERYPROC)( target_, id_ );
}

static void __stdcall glEndQueryWrapper(GLenum target_)
{
  RESOLVE(PFNGLENDQUERYPROC, "glEndQuery");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEndQuery\n");
#endif
  RESOLVED_PROC(PFNGLENDQUERYPROC)( target_ );
}

static void __stdcall glGetQueryivWrapper(GLenum target_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETQUERYIVPROC, "glGetQueryiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetQueryiv\n");
#endif
  RESOLVED_PROC(PFNGLGETQUERYIVPROC)( target_, pname_, params_ );
}

static void __stdcall glGetQueryObjectivWrapper(GLuint id_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETQUERYOBJECTIVPROC, "glGetQueryObjectiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetQueryObjectiv\n");
#endif
  RESOLVED_PROC(PFNGLGETQUERYOBJECTIVPROC)( id_, pname_, params_ );
}

static void __stdcall glGetQueryObjectuivWrapper(GLuint id_, GLenum pname_, GLuint* params_)
{
  RESOLVE(PFNGLGETQUERYOBJECTUIVPROC, "glGetQueryObjectuiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetQueryObjectuiv\n");
#endif
  RESOLVED_PROC(PFNGLGETQUERYOBJECTUIVPROC)( id_, pname_, params_ );
}

static void __stdcall glBindBufferWrapper(GLenum target_, GLuint buffer_)
{
  RESOLVE(PFNGLBINDBUFFERPROC, "glBindBuffer");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindBuffer\n");
#endif
  RESOLVED_PROC(PFNGLBINDBUFFERPROC)( target_, buffer_ );
}

static void __stdcall glDeleteBuffersWrapper(GLsizei n_, const GLuint* buffers_)
{
  RESOLVE(PFNGLDELETEBUFFERSPROC, "glDeleteBuffers");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDeleteBuffers\n");
#endif
  RESOLVED_PROC(PFNGLDELETEBUFFERSPROC)( n_, buffers_ );
}

static void __stdcall glGenBuffersWrapper(GLsizei n_, GLuint* buffers_)
{
  RESOLVE(PFNGLGENBUFFERSPROC, "glGenBuffers");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGenBuffers\n");
#endif
  RESOLVED_PROC(PFNGLGENBUFFERSPROC)( n_, buffers_ );
}

static GLboolean __stdcall glIsBufferWrapper(GLuint buffer_)
{
  RESOLVE_RET(PFNGLISBUFFERPROC, "glIsBuffer", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIsBuffer\n");
#endif
  return RESOLVED_PROC(PFNGLISBUFFERPROC)( buffer_ );
}

static void __stdcall glBufferDataWrapper(GLenum target_, GLsizeiptr size_, const void * data_, GLenum usage_)
{
  RESOLVE(PFNGLBUFFERDATAPROC, "glBufferData");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBufferData\n");
#endif
  RESOLVED_PROC(PFNGLBUFFERDATAPROC)( target_, size_, data_, usage_ );
}

static void __stdcall glBufferSubDataWrapper(GLenum target_, GLintptr offset_, GLsizeiptr size_, const void * data_)
{
  RESOLVE(PFNGLBUFFERSUBDATAPROC, "glBufferSubData");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBufferSubData\n");
#endif
  RESOLVED_PROC(PFNGLBUFFERSUBDATAPROC)( target_, offset_, size_, data_ );
}

static void __stdcall glGetBufferSubDataWrapper(GLenum target_, GLintptr offset_, GLsizeiptr size_, void * data_)
{
  RESOLVE(PFNGLGETBUFFERSUBDATAPROC, "glGetBufferSubData");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetBufferSubData\n");
#endif
  RESOLVED_PROC(PFNGLGETBUFFERSUBDATAPROC)( target_, offset_, size_, data_ );
}

static void * __stdcall glMapBufferWrapper(GLenum target_, GLenum access_)
{
  RESOLVE_RET(PFNGLMAPBUFFERPROC, "glMapBuffer", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMapBuffer\n");
#endif
  return RESOLVED_PROC(PFNGLMAPBUFFERPROC)( target_, access_ );
}

static GLboolean __stdcall glUnmapBufferWrapper(GLenum target_)
{
  RESOLVE_RET(PFNGLUNMAPBUFFERPROC, "glUnmapBuffer", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUnmapBuffer\n");
#endif
  return RESOLVED_PROC(PFNGLUNMAPBUFFERPROC)( target_ );
}

static void __stdcall glGetBufferParameterivWrapper(GLenum target_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETBUFFERPARAMETERIVPROC, "glGetBufferParameteriv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetBufferParameteriv\n");
#endif
  RESOLVED_PROC(PFNGLGETBUFFERPARAMETERIVPROC)( target_, pname_, params_ );
}

static void __stdcall glGetBufferPointervWrapper(GLenum target_, GLenum pname_, void ** params_)
{
  RESOLVE(PFNGLGETBUFFERPOINTERVPROC, "glGetBufferPointerv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetBufferPointerv\n");
#endif
  RESOLVED_PROC(PFNGLGETBUFFERPOINTERVPROC)( target_, pname_, params_ );
}

static void __stdcall glBlendEquationSeparateWrapper(GLenum modeRGB_, GLenum modeAlpha_)
{
  RESOLVE(PFNGLBLENDEQUATIONSEPARATEPROC, "glBlendEquationSeparate");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBlendEquationSeparate\n");
#endif
  RESOLVED_PROC(PFNGLBLENDEQUATIONSEPARATEPROC)( modeRGB_, modeAlpha_ );
}

static void __stdcall glDrawBuffersWrapper(GLsizei n_, const GLenum* bufs_)
{
  RESOLVE(PFNGLDRAWBUFFERSPROC, "glDrawBuffers");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDrawBuffers\n");
#endif
  RESOLVED_PROC(PFNGLDRAWBUFFERSPROC)( n_, bufs_ );
}

static void __stdcall glStencilOpSeparateWrapper(GLenum face_, GLenum sfail_, GLenum dpfail_, GLenum dppass_)
{
  RESOLVE(PFNGLSTENCILOPSEPARATEPROC, "glStencilOpSeparate");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glStencilOpSeparate\n");
#endif
  RESOLVED_PROC(PFNGLSTENCILOPSEPARATEPROC)( face_, sfail_, dpfail_, dppass_ );
}

static void __stdcall glStencilFuncSeparateWrapper(GLenum face_, GLenum func_, GLint ref_, GLuint mask_)
{
  RESOLVE(PFNGLSTENCILFUNCSEPARATEPROC, "glStencilFuncSeparate");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glStencilFuncSeparate\n");
#endif
  RESOLVED_PROC(PFNGLSTENCILFUNCSEPARATEPROC)( face_, func_, ref_, mask_ );
}

static void __stdcall glStencilMaskSeparateWrapper(GLenum face_, GLuint mask_)
{
  RESOLVE(PFNGLSTENCILMASKSEPARATEPROC, "glStencilMaskSeparate");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glStencilMaskSeparate\n");
#endif
  RESOLVED_PROC(PFNGLSTENCILMASKSEPARATEPROC)( face_, mask_ );
}

static void __stdcall glAttachShaderWrapper(GLuint program_, GLuint shader_)
{
  RESOLVE(PFNGLATTACHSHADERPROC, "glAttachShader");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glAttachShader\n");
#endif
  RESOLVED_PROC(PFNGLATTACHSHADERPROC)( program_, shader_ );
}

static void __stdcall glBindAttribLocationWrapper(GLuint program_, GLuint index_, const GLchar* name_)
{
  RESOLVE(PFNGLBINDATTRIBLOCATIONPROC, "glBindAttribLocation");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindAttribLocation\n");
#endif
  RESOLVED_PROC(PFNGLBINDATTRIBLOCATIONPROC)( program_, index_, name_ );
}

static void __stdcall glCompileShaderWrapper(GLuint shader_)
{
  RESOLVE(PFNGLCOMPILESHADERPROC, "glCompileShader");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCompileShader\n");
#endif
  RESOLVED_PROC(PFNGLCOMPILESHADERPROC)( shader_ );
}

static GLuint __stdcall glCreateProgramWrapper(void)
{
  RESOLVE_RET(PFNGLCREATEPROGRAMPROC, "glCreateProgram", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCreateProgram\n");
#endif
  return RESOLVED_PROC(PFNGLCREATEPROGRAMPROC)(  );
}

static GLuint __stdcall glCreateShaderWrapper(GLenum type_)
{
  RESOLVE_RET(PFNGLCREATESHADERPROC, "glCreateShader", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCreateShader\n");
#endif
  return RESOLVED_PROC(PFNGLCREATESHADERPROC)( type_ );
}

static void __stdcall glDeleteProgramWrapper(GLuint program_)
{
  RESOLVE(PFNGLDELETEPROGRAMPROC, "glDeleteProgram");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDeleteProgram\n");
#endif
  RESOLVED_PROC(PFNGLDELETEPROGRAMPROC)( program_ );
}

static void __stdcall glDeleteShaderWrapper(GLuint shader_)
{
  RESOLVE(PFNGLDELETESHADERPROC, "glDeleteShader");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDeleteShader\n");
#endif
  RESOLVED_PROC(PFNGLDELETESHADERPROC)( shader_ );
}

static void __stdcall glDetachShaderWrapper(GLuint program_, GLuint shader_)
{
  RESOLVE(PFNGLDETACHSHADERPROC, "glDetachShader");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDetachShader\n");
#endif
  RESOLVED_PROC(PFNGLDETACHSHADERPROC)( program_, shader_ );
}

static void __stdcall glDisableVertexAttribArrayWrapper(GLuint index_)
{
  RESOLVE(PFNGLDISABLEVERTEXATTRIBARRAYPROC, "glDisableVertexAttribArray");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDisableVertexAttribArray\n");
#endif
  RESOLVED_PROC(PFNGLDISABLEVERTEXATTRIBARRAYPROC)( index_ );
}

static void __stdcall glEnableVertexAttribArrayWrapper(GLuint index_)
{
  RESOLVE(PFNGLENABLEVERTEXATTRIBARRAYPROC, "glEnableVertexAttribArray");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEnableVertexAttribArray\n");
#endif
  RESOLVED_PROC(PFNGLENABLEVERTEXATTRIBARRAYPROC)( index_ );
}

static void __stdcall glGetActiveAttribWrapper(GLuint program_, GLuint index_, GLsizei bufSize_, GLsizei* length_, GLint* size_, GLenum* type_, GLchar* name_)
{
  RESOLVE(PFNGLGETACTIVEATTRIBPROC, "glGetActiveAttrib");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetActiveAttrib\n");
#endif
  RESOLVED_PROC(PFNGLGETACTIVEATTRIBPROC)( program_, index_, bufSize_, length_, size_, type_, name_ );
}

static void __stdcall glGetActiveUniformWrapper(GLuint program_, GLuint index_, GLsizei bufSize_, GLsizei* length_, GLint* size_, GLenum* type_, GLchar* name_)
{
  RESOLVE(PFNGLGETACTIVEUNIFORMPROC, "glGetActiveUniform");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetActiveUniform\n");
#endif
  RESOLVED_PROC(PFNGLGETACTIVEUNIFORMPROC)( program_, index_, bufSize_, length_, size_, type_, name_ );
}

static void __stdcall glGetAttachedShadersWrapper(GLuint program_, GLsizei maxCount_, GLsizei* count_, GLuint* shaders_)
{
  RESOLVE(PFNGLGETATTACHEDSHADERSPROC, "glGetAttachedShaders");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetAttachedShaders\n");
#endif
  RESOLVED_PROC(PFNGLGETATTACHEDSHADERSPROC)( program_, maxCount_, count_, shaders_ );
}

static GLint __stdcall glGetAttribLocationWrapper(GLuint program_, const GLchar* name_)
{
  RESOLVE_RET(PFNGLGETATTRIBLOCATIONPROC, "glGetAttribLocation", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetAttribLocation\n");
#endif
  return RESOLVED_PROC(PFNGLGETATTRIBLOCATIONPROC)( program_, name_ );
}

static void __stdcall glGetProgramivWrapper(GLuint program_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETPROGRAMIVPROC, "glGetProgramiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetProgramiv\n");
#endif
  RESOLVED_PROC(PFNGLGETPROGRAMIVPROC)( program_, pname_, params_ );
}

static void __stdcall glGetProgramInfoLogWrapper(GLuint program_, GLsizei bufSize_, GLsizei* length_, GLchar* infoLog_)
{
  RESOLVE(PFNGLGETPROGRAMINFOLOGPROC, "glGetProgramInfoLog");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetProgramInfoLog\n");
#endif
  RESOLVED_PROC(PFNGLGETPROGRAMINFOLOGPROC)( program_, bufSize_, length_, infoLog_ );
}

static void __stdcall glGetShaderivWrapper(GLuint shader_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETSHADERIVPROC, "glGetShaderiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetShaderiv\n");
#endif
  RESOLVED_PROC(PFNGLGETSHADERIVPROC)( shader_, pname_, params_ );
}

static void __stdcall glGetShaderInfoLogWrapper(GLuint shader_, GLsizei bufSize_, GLsizei* length_, GLchar* infoLog_)
{
  RESOLVE(PFNGLGETSHADERINFOLOGPROC, "glGetShaderInfoLog");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetShaderInfoLog\n");
#endif
  RESOLVED_PROC(PFNGLGETSHADERINFOLOGPROC)( shader_, bufSize_, length_, infoLog_ );
}

static void __stdcall glGetShaderSourceWrapper(GLuint shader_, GLsizei bufSize_, GLsizei* length_, GLchar* source_)
{
  RESOLVE(PFNGLGETSHADERSOURCEPROC, "glGetShaderSource");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetShaderSource\n");
#endif
  RESOLVED_PROC(PFNGLGETSHADERSOURCEPROC)( shader_, bufSize_, length_, source_ );
}

static GLint __stdcall glGetUniformLocationWrapper(GLuint program_, const GLchar* name_)
{
  RESOLVE_RET(PFNGLGETUNIFORMLOCATIONPROC, "glGetUniformLocation", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetUniformLocation\n");
#endif
  return RESOLVED_PROC(PFNGLGETUNIFORMLOCATIONPROC)( program_, name_ );
}

static void __stdcall glGetUniformfvWrapper(GLuint program_, GLint location_, GLfloat* params_)
{
  RESOLVE(PFNGLGETUNIFORMFVPROC, "glGetUniformfv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetUniformfv\n");
#endif
  RESOLVED_PROC(PFNGLGETUNIFORMFVPROC)( program_, location_, params_ );
}

static void __stdcall glGetUniformivWrapper(GLuint program_, GLint location_, GLint* params_)
{
  RESOLVE(PFNGLGETUNIFORMIVPROC, "glGetUniformiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetUniformiv\n");
#endif
  RESOLVED_PROC(PFNGLGETUNIFORMIVPROC)( program_, location_, params_ );
}

static void __stdcall glGetVertexAttribdvWrapper(GLuint index_, GLenum pname_, GLdouble* params_)
{
  RESOLVE(PFNGLGETVERTEXATTRIBDVPROC, "glGetVertexAttribdv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetVertexAttribdv\n");
#endif
  RESOLVED_PROC(PFNGLGETVERTEXATTRIBDVPROC)( index_, pname_, params_ );
}

static void __stdcall glGetVertexAttribfvWrapper(GLuint index_, GLenum pname_, GLfloat* params_)
{
  RESOLVE(PFNGLGETVERTEXATTRIBFVPROC, "glGetVertexAttribfv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetVertexAttribfv\n");
#endif
  RESOLVED_PROC(PFNGLGETVERTEXATTRIBFVPROC)( index_, pname_, params_ );
}

static void __stdcall glGetVertexAttribivWrapper(GLuint index_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETVERTEXATTRIBIVPROC, "glGetVertexAttribiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetVertexAttribiv\n");
#endif
  RESOLVED_PROC(PFNGLGETVERTEXATTRIBIVPROC)( index_, pname_, params_ );
}

static void __stdcall glGetVertexAttribPointervWrapper(GLuint index_, GLenum pname_, void ** pointer_)
{
  RESOLVE(PFNGLGETVERTEXATTRIBPOINTERVPROC, "glGetVertexAttribPointerv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetVertexAttribPointerv\n");
#endif
  RESOLVED_PROC(PFNGLGETVERTEXATTRIBPOINTERVPROC)( index_, pname_, pointer_ );
}

static GLboolean __stdcall glIsProgramWrapper(GLuint program_)
{
  RESOLVE_RET(PFNGLISPROGRAMPROC, "glIsProgram", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIsProgram\n");
#endif
  return RESOLVED_PROC(PFNGLISPROGRAMPROC)( program_ );
}

static GLboolean __stdcall glIsShaderWrapper(GLuint shader_)
{
  RESOLVE_RET(PFNGLISSHADERPROC, "glIsShader", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIsShader\n");
#endif
  return RESOLVED_PROC(PFNGLISSHADERPROC)( shader_ );
}

static void __stdcall glLinkProgramWrapper(GLuint program_)
{
  RESOLVE(PFNGLLINKPROGRAMPROC, "glLinkProgram");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glLinkProgram\n");
#endif
  RESOLVED_PROC(PFNGLLINKPROGRAMPROC)( program_ );
}

static void __stdcall glShaderSourceWrapper(GLuint shader_, GLsizei count_, const GLchar*const* string_, const GLint* length_)
{
  RESOLVE(PFNGLSHADERSOURCEPROC, "glShaderSource");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glShaderSource\n");
#endif
  RESOLVED_PROC(PFNGLSHADERSOURCEPROC)( shader_, count_, string_, length_ );
}

static void __stdcall glUseProgramWrapper(GLuint program_)
{
  RESOLVE(PFNGLUSEPROGRAMPROC, "glUseProgram");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUseProgram\n");
#endif
  RESOLVED_PROC(PFNGLUSEPROGRAMPROC)( program_ );
}

static void __stdcall glUniform1fWrapper(GLint location_, GLfloat v0_)
{
  RESOLVE(PFNGLUNIFORM1FPROC, "glUniform1f");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform1f\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM1FPROC)( location_, v0_ );
}

static void __stdcall glUniform2fWrapper(GLint location_, GLfloat v0_, GLfloat v1_)
{
  RESOLVE(PFNGLUNIFORM2FPROC, "glUniform2f");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform2f\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM2FPROC)( location_, v0_, v1_ );
}

static void __stdcall glUniform3fWrapper(GLint location_, GLfloat v0_, GLfloat v1_, GLfloat v2_)
{
  RESOLVE(PFNGLUNIFORM3FPROC, "glUniform3f");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform3f\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM3FPROC)( location_, v0_, v1_, v2_ );
}

static void __stdcall glUniform4fWrapper(GLint location_, GLfloat v0_, GLfloat v1_, GLfloat v2_, GLfloat v3_)
{
  RESOLVE(PFNGLUNIFORM4FPROC, "glUniform4f");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform4f\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM4FPROC)( location_, v0_, v1_, v2_, v3_ );
}

static void __stdcall glUniform1iWrapper(GLint location_, GLint v0_)
{
  RESOLVE(PFNGLUNIFORM1IPROC, "glUniform1i");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform1i\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM1IPROC)( location_, v0_ );
}

static void __stdcall glUniform2iWrapper(GLint location_, GLint v0_, GLint v1_)
{
  RESOLVE(PFNGLUNIFORM2IPROC, "glUniform2i");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform2i\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM2IPROC)( location_, v0_, v1_ );
}

static void __stdcall glUniform3iWrapper(GLint location_, GLint v0_, GLint v1_, GLint v2_)
{
  RESOLVE(PFNGLUNIFORM3IPROC, "glUniform3i");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform3i\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM3IPROC)( location_, v0_, v1_, v2_ );
}

static void __stdcall glUniform4iWrapper(GLint location_, GLint v0_, GLint v1_, GLint v2_, GLint v3_)
{
  RESOLVE(PFNGLUNIFORM4IPROC, "glUniform4i");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform4i\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM4IPROC)( location_, v0_, v1_, v2_, v3_ );
}

static void __stdcall glUniform1fvWrapper(GLint location_, GLsizei count_, const GLfloat* value_)
{
  RESOLVE(PFNGLUNIFORM1FVPROC, "glUniform1fv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform1fv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM1FVPROC)( location_, count_, value_ );
}

static void __stdcall glUniform2fvWrapper(GLint location_, GLsizei count_, const GLfloat* value_)
{
  RESOLVE(PFNGLUNIFORM2FVPROC, "glUniform2fv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform2fv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM2FVPROC)( location_, count_, value_ );
}

static void __stdcall glUniform3fvWrapper(GLint location_, GLsizei count_, const GLfloat* value_)
{
  RESOLVE(PFNGLUNIFORM3FVPROC, "glUniform3fv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform3fv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM3FVPROC)( location_, count_, value_ );
}

static void __stdcall glUniform4fvWrapper(GLint location_, GLsizei count_, const GLfloat* value_)
{
  RESOLVE(PFNGLUNIFORM4FVPROC, "glUniform4fv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform4fv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM4FVPROC)( location_, count_, value_ );
}

static void __stdcall glUniform1ivWrapper(GLint location_, GLsizei count_, const GLint* value_)
{
  RESOLVE(PFNGLUNIFORM1IVPROC, "glUniform1iv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform1iv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM1IVPROC)( location_, count_, value_ );
}

static void __stdcall glUniform2ivWrapper(GLint location_, GLsizei count_, const GLint* value_)
{
  RESOLVE(PFNGLUNIFORM2IVPROC, "glUniform2iv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform2iv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM2IVPROC)( location_, count_, value_ );
}

static void __stdcall glUniform3ivWrapper(GLint location_, GLsizei count_, const GLint* value_)
{
  RESOLVE(PFNGLUNIFORM3IVPROC, "glUniform3iv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform3iv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM3IVPROC)( location_, count_, value_ );
}

static void __stdcall glUniform4ivWrapper(GLint location_, GLsizei count_, const GLint* value_)
{
  RESOLVE(PFNGLUNIFORM4IVPROC, "glUniform4iv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform4iv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM4IVPROC)( location_, count_, value_ );
}

static void __stdcall glUniformMatrix2fvWrapper(GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat* value_)
{
  RESOLVE(PFNGLUNIFORMMATRIX2FVPROC, "glUniformMatrix2fv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniformMatrix2fv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORMMATRIX2FVPROC)( location_, count_, transpose_, value_ );
}

static void __stdcall glUniformMatrix3fvWrapper(GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat* value_)
{
  RESOLVE(PFNGLUNIFORMMATRIX3FVPROC, "glUniformMatrix3fv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniformMatrix3fv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORMMATRIX3FVPROC)( location_, count_, transpose_, value_ );
}

static void __stdcall glUniformMatrix4fvWrapper(GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat* value_)
{
  RESOLVE(PFNGLUNIFORMMATRIX4FVPROC, "glUniformMatrix4fv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniformMatrix4fv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORMMATRIX4FVPROC)( location_, count_, transpose_, value_ );
}

static void __stdcall glValidateProgramWrapper(GLuint program_)
{
  RESOLVE(PFNGLVALIDATEPROGRAMPROC, "glValidateProgram");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glValidateProgram\n");
#endif
  RESOLVED_PROC(PFNGLVALIDATEPROGRAMPROC)( program_ );
}

static void __stdcall glVertexAttrib1dWrapper(GLuint index_, GLdouble x_)
{
  RESOLVE(PFNGLVERTEXATTRIB1DPROC, "glVertexAttrib1d");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib1d\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB1DPROC)( index_, x_ );
}

static void __stdcall glVertexAttrib1dvWrapper(GLuint index_, const GLdouble* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB1DVPROC, "glVertexAttrib1dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib1dv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB1DVPROC)( index_, v_ );
}

/* No wrapper for glVertexAttrib1f, not in dispatch table */
/* No wrapper for glVertexAttrib1fv, not in dispatch table */
static void __stdcall glVertexAttrib1sWrapper(GLuint index_, GLshort x_)
{
  RESOLVE(PFNGLVERTEXATTRIB1SPROC, "glVertexAttrib1s");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib1s\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB1SPROC)( index_, x_ );
}

static void __stdcall glVertexAttrib1svWrapper(GLuint index_, const GLshort* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB1SVPROC, "glVertexAttrib1sv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib1sv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB1SVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib2dWrapper(GLuint index_, GLdouble x_, GLdouble y_)
{
  RESOLVE(PFNGLVERTEXATTRIB2DPROC, "glVertexAttrib2d");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib2d\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB2DPROC)( index_, x_, y_ );
}

static void __stdcall glVertexAttrib2dvWrapper(GLuint index_, const GLdouble* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB2DVPROC, "glVertexAttrib2dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib2dv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB2DVPROC)( index_, v_ );
}

/* No wrapper for glVertexAttrib2f, not in dispatch table */
/* No wrapper for glVertexAttrib2fv, not in dispatch table */
static void __stdcall glVertexAttrib2sWrapper(GLuint index_, GLshort x_, GLshort y_)
{
  RESOLVE(PFNGLVERTEXATTRIB2SPROC, "glVertexAttrib2s");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib2s\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB2SPROC)( index_, x_, y_ );
}

static void __stdcall glVertexAttrib2svWrapper(GLuint index_, const GLshort* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB2SVPROC, "glVertexAttrib2sv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib2sv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB2SVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib3dWrapper(GLuint index_, GLdouble x_, GLdouble y_, GLdouble z_)
{
  RESOLVE(PFNGLVERTEXATTRIB3DPROC, "glVertexAttrib3d");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib3d\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB3DPROC)( index_, x_, y_, z_ );
}

static void __stdcall glVertexAttrib3dvWrapper(GLuint index_, const GLdouble* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB3DVPROC, "glVertexAttrib3dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib3dv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB3DVPROC)( index_, v_ );
}

/* No wrapper for glVertexAttrib3f, not in dispatch table */
/* No wrapper for glVertexAttrib3fv, not in dispatch table */
static void __stdcall glVertexAttrib3sWrapper(GLuint index_, GLshort x_, GLshort y_, GLshort z_)
{
  RESOLVE(PFNGLVERTEXATTRIB3SPROC, "glVertexAttrib3s");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib3s\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB3SPROC)( index_, x_, y_, z_ );
}

static void __stdcall glVertexAttrib3svWrapper(GLuint index_, const GLshort* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB3SVPROC, "glVertexAttrib3sv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib3sv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB3SVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib4NbvWrapper(GLuint index_, const GLbyte* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB4NBVPROC, "glVertexAttrib4Nbv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib4Nbv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB4NBVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib4NivWrapper(GLuint index_, const GLint* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB4NIVPROC, "glVertexAttrib4Niv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib4Niv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB4NIVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib4NsvWrapper(GLuint index_, const GLshort* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB4NSVPROC, "glVertexAttrib4Nsv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib4Nsv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB4NSVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib4NubWrapper(GLuint index_, GLubyte x_, GLubyte y_, GLubyte z_, GLubyte w_)
{
  RESOLVE(PFNGLVERTEXATTRIB4NUBPROC, "glVertexAttrib4Nub");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib4Nub\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB4NUBPROC)( index_, x_, y_, z_, w_ );
}

static void __stdcall glVertexAttrib4NubvWrapper(GLuint index_, const GLubyte* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB4NUBVPROC, "glVertexAttrib4Nubv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib4Nubv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB4NUBVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib4NuivWrapper(GLuint index_, const GLuint* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB4NUIVPROC, "glVertexAttrib4Nuiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib4Nuiv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB4NUIVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib4NusvWrapper(GLuint index_, const GLushort* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB4NUSVPROC, "glVertexAttrib4Nusv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib4Nusv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB4NUSVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib4bvWrapper(GLuint index_, const GLbyte* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB4BVPROC, "glVertexAttrib4bv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib4bv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB4BVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib4dWrapper(GLuint index_, GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_)
{
  RESOLVE(PFNGLVERTEXATTRIB4DPROC, "glVertexAttrib4d");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib4d\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB4DPROC)( index_, x_, y_, z_, w_ );
}

static void __stdcall glVertexAttrib4dvWrapper(GLuint index_, const GLdouble* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB4DVPROC, "glVertexAttrib4dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib4dv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB4DVPROC)( index_, v_ );
}

/* No wrapper for glVertexAttrib4f, not in dispatch table */
/* No wrapper for glVertexAttrib4fv, not in dispatch table */
static void __stdcall glVertexAttrib4ivWrapper(GLuint index_, const GLint* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB4IVPROC, "glVertexAttrib4iv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib4iv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB4IVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib4sWrapper(GLuint index_, GLshort x_, GLshort y_, GLshort z_, GLshort w_)
{
  RESOLVE(PFNGLVERTEXATTRIB4SPROC, "glVertexAttrib4s");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib4s\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB4SPROC)( index_, x_, y_, z_, w_ );
}

static void __stdcall glVertexAttrib4svWrapper(GLuint index_, const GLshort* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB4SVPROC, "glVertexAttrib4sv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib4sv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB4SVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib4ubvWrapper(GLuint index_, const GLubyte* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB4UBVPROC, "glVertexAttrib4ubv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib4ubv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB4UBVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib4uivWrapper(GLuint index_, const GLuint* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB4UIVPROC, "glVertexAttrib4uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib4uiv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB4UIVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib4usvWrapper(GLuint index_, const GLushort* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB4USVPROC, "glVertexAttrib4usv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib4usv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB4USVPROC)( index_, v_ );
}

static void __stdcall glVertexAttribPointerWrapper(GLuint index_, GLint size_, GLenum type_, GLboolean normalized_, GLsizei stride_, const void * pointer_)
{
  RESOLVE(PFNGLVERTEXATTRIBPOINTERPROC, "glVertexAttribPointer");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribPointer\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBPOINTERPROC)( index_, size_, type_, normalized_, stride_, pointer_ );
}

static void __stdcall glUniformMatrix2x3fvWrapper(GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat* value_)
{
  RESOLVE(PFNGLUNIFORMMATRIX2X3FVPROC, "glUniformMatrix2x3fv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniformMatrix2x3fv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORMMATRIX2X3FVPROC)( location_, count_, transpose_, value_ );
}

static void __stdcall glUniformMatrix3x2fvWrapper(GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat* value_)
{
  RESOLVE(PFNGLUNIFORMMATRIX3X2FVPROC, "glUniformMatrix3x2fv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniformMatrix3x2fv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORMMATRIX3X2FVPROC)( location_, count_, transpose_, value_ );
}

static void __stdcall glUniformMatrix2x4fvWrapper(GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat* value_)
{
  RESOLVE(PFNGLUNIFORMMATRIX2X4FVPROC, "glUniformMatrix2x4fv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniformMatrix2x4fv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORMMATRIX2X4FVPROC)( location_, count_, transpose_, value_ );
}

static void __stdcall glUniformMatrix4x2fvWrapper(GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat* value_)
{
  RESOLVE(PFNGLUNIFORMMATRIX4X2FVPROC, "glUniformMatrix4x2fv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniformMatrix4x2fv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORMMATRIX4X2FVPROC)( location_, count_, transpose_, value_ );
}

static void __stdcall glUniformMatrix3x4fvWrapper(GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat* value_)
{
  RESOLVE(PFNGLUNIFORMMATRIX3X4FVPROC, "glUniformMatrix3x4fv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniformMatrix3x4fv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORMMATRIX3X4FVPROC)( location_, count_, transpose_, value_ );
}

static void __stdcall glUniformMatrix4x3fvWrapper(GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat* value_)
{
  RESOLVE(PFNGLUNIFORMMATRIX4X3FVPROC, "glUniformMatrix4x3fv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniformMatrix4x3fv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORMMATRIX4X3FVPROC)( location_, count_, transpose_, value_ );
}

static void __stdcall glColorMaskiWrapper(GLuint index_, GLboolean r_, GLboolean g_, GLboolean b_, GLboolean a_)
{
  RESOLVE(PFNGLCOLORMASKIPROC, "glColorMaski");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColorMaski\n");
#endif
  RESOLVED_PROC(PFNGLCOLORMASKIPROC)( index_, r_, g_, b_, a_ );
}

static void __stdcall glGetBooleani_vWrapper(GLenum target_, GLuint index_, GLboolean* data_)
{
  RESOLVE(PFNGLGETBOOLEANI_VPROC, "glGetBooleani_v");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetBooleani_v\n");
#endif
  RESOLVED_PROC(PFNGLGETBOOLEANI_VPROC)( target_, index_, data_ );
}

static void __stdcall glGetIntegeri_vWrapper(GLenum target_, GLuint index_, GLint* data_)
{
  RESOLVE(PFNGLGETINTEGERI_VPROC, "glGetIntegeri_v");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetIntegeri_v\n");
#endif
  RESOLVED_PROC(PFNGLGETINTEGERI_VPROC)( target_, index_, data_ );
}

static void __stdcall glEnableiWrapper(GLenum target_, GLuint index_)
{
  RESOLVE(PFNGLENABLEIPROC, "glEnablei");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEnablei\n");
#endif
  RESOLVED_PROC(PFNGLENABLEIPROC)( target_, index_ );
}

static void __stdcall glDisableiWrapper(GLenum target_, GLuint index_)
{
  RESOLVE(PFNGLDISABLEIPROC, "glDisablei");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDisablei\n");
#endif
  RESOLVED_PROC(PFNGLDISABLEIPROC)( target_, index_ );
}

static GLboolean __stdcall glIsEnablediWrapper(GLenum target_, GLuint index_)
{
  RESOLVE_RET(PFNGLISENABLEDIPROC, "glIsEnabledi", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIsEnabledi\n");
#endif
  return RESOLVED_PROC(PFNGLISENABLEDIPROC)( target_, index_ );
}

static void __stdcall glBeginTransformFeedbackWrapper(GLenum primitiveMode_)
{
  RESOLVE(PFNGLBEGINTRANSFORMFEEDBACKPROC, "glBeginTransformFeedback");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBeginTransformFeedback\n");
#endif
  RESOLVED_PROC(PFNGLBEGINTRANSFORMFEEDBACKPROC)( primitiveMode_ );
}

static void __stdcall glEndTransformFeedbackWrapper(void)
{
  RESOLVE(PFNGLENDTRANSFORMFEEDBACKPROC, "glEndTransformFeedback");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEndTransformFeedback\n");
#endif
  RESOLVED_PROC(PFNGLENDTRANSFORMFEEDBACKPROC)(  );
}

static void __stdcall glBindBufferRangeWrapper(GLenum target_, GLuint index_, GLuint buffer_, GLintptr offset_, GLsizeiptr size_)
{
  RESOLVE(PFNGLBINDBUFFERRANGEPROC, "glBindBufferRange");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindBufferRange\n");
#endif
  RESOLVED_PROC(PFNGLBINDBUFFERRANGEPROC)( target_, index_, buffer_, offset_, size_ );
}

static void __stdcall glBindBufferBaseWrapper(GLenum target_, GLuint index_, GLuint buffer_)
{
  RESOLVE(PFNGLBINDBUFFERBASEPROC, "glBindBufferBase");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindBufferBase\n");
#endif
  RESOLVED_PROC(PFNGLBINDBUFFERBASEPROC)( target_, index_, buffer_ );
}

static void __stdcall glTransformFeedbackVaryingsWrapper(GLuint program_, GLsizei count_, const GLchar*const* varyings_, GLenum bufferMode_)
{
  RESOLVE(PFNGLTRANSFORMFEEDBACKVARYINGSPROC, "glTransformFeedbackVaryings");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTransformFeedbackVaryings\n");
#endif
  RESOLVED_PROC(PFNGLTRANSFORMFEEDBACKVARYINGSPROC)( program_, count_, varyings_, bufferMode_ );
}

static void __stdcall glGetTransformFeedbackVaryingWrapper(GLuint program_, GLuint index_, GLsizei bufSize_, GLsizei* length_, GLsizei* size_, GLenum* type_, GLchar* name_)
{
  RESOLVE(PFNGLGETTRANSFORMFEEDBACKVARYINGPROC, "glGetTransformFeedbackVarying");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTransformFeedbackVarying\n");
#endif
  RESOLVED_PROC(PFNGLGETTRANSFORMFEEDBACKVARYINGPROC)( program_, index_, bufSize_, length_, size_, type_, name_ );
}

static void __stdcall glClampColorWrapper(GLenum target_, GLenum clamp_)
{
  RESOLVE(PFNGLCLAMPCOLORPROC, "glClampColor");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClampColor\n");
#endif
  RESOLVED_PROC(PFNGLCLAMPCOLORPROC)( target_, clamp_ );
}

static void __stdcall glBeginConditionalRenderWrapper(GLuint id_, GLenum mode_)
{
  RESOLVE(PFNGLBEGINCONDITIONALRENDERPROC, "glBeginConditionalRender");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBeginConditionalRender\n");
#endif
  RESOLVED_PROC(PFNGLBEGINCONDITIONALRENDERPROC)( id_, mode_ );
}

static void __stdcall glEndConditionalRenderWrapper(void)
{
  RESOLVE(PFNGLENDCONDITIONALRENDERPROC, "glEndConditionalRender");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEndConditionalRender\n");
#endif
  RESOLVED_PROC(PFNGLENDCONDITIONALRENDERPROC)(  );
}

static void __stdcall glVertexAttribIPointerWrapper(GLuint index_, GLint size_, GLenum type_, GLsizei stride_, const void * pointer_)
{
  RESOLVE(PFNGLVERTEXATTRIBIPOINTERPROC, "glVertexAttribIPointer");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribIPointer\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBIPOINTERPROC)( index_, size_, type_, stride_, pointer_ );
}

static void __stdcall glGetVertexAttribIivWrapper(GLuint index_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETVERTEXATTRIBIIVPROC, "glGetVertexAttribIiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetVertexAttribIiv\n");
#endif
  RESOLVED_PROC(PFNGLGETVERTEXATTRIBIIVPROC)( index_, pname_, params_ );
}

static void __stdcall glGetVertexAttribIuivWrapper(GLuint index_, GLenum pname_, GLuint* params_)
{
  RESOLVE(PFNGLGETVERTEXATTRIBIUIVPROC, "glGetVertexAttribIuiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetVertexAttribIuiv\n");
#endif
  RESOLVED_PROC(PFNGLGETVERTEXATTRIBIUIVPROC)( index_, pname_, params_ );
}

/* No wrapper for glVertexAttribI1i, not in dispatch table */
/* No wrapper for glVertexAttribI2i, not in dispatch table */
/* No wrapper for glVertexAttribI3i, not in dispatch table */
/* No wrapper for glVertexAttribI4i, not in dispatch table */
/* No wrapper for glVertexAttribI1ui, not in dispatch table */
/* No wrapper for glVertexAttribI2ui, not in dispatch table */
/* No wrapper for glVertexAttribI3ui, not in dispatch table */
/* No wrapper for glVertexAttribI4ui, not in dispatch table */
static void __stdcall glVertexAttribI1ivWrapper(GLuint index_, const GLint* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBI1IVPROC, "glVertexAttribI1iv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribI1iv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBI1IVPROC)( index_, v_ );
}

/* No wrapper for glVertexAttribI2iv, not in dispatch table */
/* No wrapper for glVertexAttribI3iv, not in dispatch table */
/* No wrapper for glVertexAttribI4iv, not in dispatch table */
static void __stdcall glVertexAttribI1uivWrapper(GLuint index_, const GLuint* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBI1UIVPROC, "glVertexAttribI1uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribI1uiv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBI1UIVPROC)( index_, v_ );
}

/* No wrapper for glVertexAttribI2uiv, not in dispatch table */
/* No wrapper for glVertexAttribI3uiv, not in dispatch table */
/* No wrapper for glVertexAttribI4uiv, not in dispatch table */
static void __stdcall glVertexAttribI4bvWrapper(GLuint index_, const GLbyte* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBI4BVPROC, "glVertexAttribI4bv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribI4bv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBI4BVPROC)( index_, v_ );
}

static void __stdcall glVertexAttribI4svWrapper(GLuint index_, const GLshort* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBI4SVPROC, "glVertexAttribI4sv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribI4sv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBI4SVPROC)( index_, v_ );
}

static void __stdcall glVertexAttribI4ubvWrapper(GLuint index_, const GLubyte* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBI4UBVPROC, "glVertexAttribI4ubv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribI4ubv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBI4UBVPROC)( index_, v_ );
}

static void __stdcall glVertexAttribI4usvWrapper(GLuint index_, const GLushort* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBI4USVPROC, "glVertexAttribI4usv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribI4usv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBI4USVPROC)( index_, v_ );
}

static void __stdcall glGetUniformuivWrapper(GLuint program_, GLint location_, GLuint* params_)
{
  RESOLVE(PFNGLGETUNIFORMUIVPROC, "glGetUniformuiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetUniformuiv\n");
#endif
  RESOLVED_PROC(PFNGLGETUNIFORMUIVPROC)( program_, location_, params_ );
}

static void __stdcall glBindFragDataLocationWrapper(GLuint program_, GLuint color_, const GLchar* name_)
{
  RESOLVE(PFNGLBINDFRAGDATALOCATIONPROC, "glBindFragDataLocation");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindFragDataLocation\n");
#endif
  RESOLVED_PROC(PFNGLBINDFRAGDATALOCATIONPROC)( program_, color_, name_ );
}

static GLint __stdcall glGetFragDataLocationWrapper(GLuint program_, const GLchar* name_)
{
  RESOLVE_RET(PFNGLGETFRAGDATALOCATIONPROC, "glGetFragDataLocation", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetFragDataLocation\n");
#endif
  return RESOLVED_PROC(PFNGLGETFRAGDATALOCATIONPROC)( program_, name_ );
}

static void __stdcall glUniform1uiWrapper(GLint location_, GLuint v0_)
{
  RESOLVE(PFNGLUNIFORM1UIPROC, "glUniform1ui");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform1ui\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM1UIPROC)( location_, v0_ );
}

static void __stdcall glUniform2uiWrapper(GLint location_, GLuint v0_, GLuint v1_)
{
  RESOLVE(PFNGLUNIFORM2UIPROC, "glUniform2ui");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform2ui\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM2UIPROC)( location_, v0_, v1_ );
}

static void __stdcall glUniform3uiWrapper(GLint location_, GLuint v0_, GLuint v1_, GLuint v2_)
{
  RESOLVE(PFNGLUNIFORM3UIPROC, "glUniform3ui");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform3ui\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM3UIPROC)( location_, v0_, v1_, v2_ );
}

static void __stdcall glUniform4uiWrapper(GLint location_, GLuint v0_, GLuint v1_, GLuint v2_, GLuint v3_)
{
  RESOLVE(PFNGLUNIFORM4UIPROC, "glUniform4ui");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform4ui\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM4UIPROC)( location_, v0_, v1_, v2_, v3_ );
}

static void __stdcall glUniform1uivWrapper(GLint location_, GLsizei count_, const GLuint* value_)
{
  RESOLVE(PFNGLUNIFORM1UIVPROC, "glUniform1uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform1uiv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM1UIVPROC)( location_, count_, value_ );
}

static void __stdcall glUniform2uivWrapper(GLint location_, GLsizei count_, const GLuint* value_)
{
  RESOLVE(PFNGLUNIFORM2UIVPROC, "glUniform2uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform2uiv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM2UIVPROC)( location_, count_, value_ );
}

static void __stdcall glUniform3uivWrapper(GLint location_, GLsizei count_, const GLuint* value_)
{
  RESOLVE(PFNGLUNIFORM3UIVPROC, "glUniform3uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform3uiv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM3UIVPROC)( location_, count_, value_ );
}

static void __stdcall glUniform4uivWrapper(GLint location_, GLsizei count_, const GLuint* value_)
{
  RESOLVE(PFNGLUNIFORM4UIVPROC, "glUniform4uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform4uiv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM4UIVPROC)( location_, count_, value_ );
}

static void __stdcall glTexParameterIivWrapper(GLenum target_, GLenum pname_, const GLint* params_)
{
  RESOLVE(PFNGLTEXPARAMETERIIVPROC, "glTexParameterIiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexParameterIiv\n");
#endif
  RESOLVED_PROC(PFNGLTEXPARAMETERIIVPROC)( target_, pname_, params_ );
}

static void __stdcall glTexParameterIuivWrapper(GLenum target_, GLenum pname_, const GLuint* params_)
{
  RESOLVE(PFNGLTEXPARAMETERIUIVPROC, "glTexParameterIuiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexParameterIuiv\n");
#endif
  RESOLVED_PROC(PFNGLTEXPARAMETERIUIVPROC)( target_, pname_, params_ );
}

static void __stdcall glGetTexParameterIivWrapper(GLenum target_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETTEXPARAMETERIIVPROC, "glGetTexParameterIiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTexParameterIiv\n");
#endif
  RESOLVED_PROC(PFNGLGETTEXPARAMETERIIVPROC)( target_, pname_, params_ );
}

static void __stdcall glGetTexParameterIuivWrapper(GLenum target_, GLenum pname_, GLuint* params_)
{
  RESOLVE(PFNGLGETTEXPARAMETERIUIVPROC, "glGetTexParameterIuiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTexParameterIuiv\n");
#endif
  RESOLVED_PROC(PFNGLGETTEXPARAMETERIUIVPROC)( target_, pname_, params_ );
}

static void __stdcall glClearBufferivWrapper(GLenum buffer_, GLint drawbuffer_, const GLint* value_)
{
  RESOLVE(PFNGLCLEARBUFFERIVPROC, "glClearBufferiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClearBufferiv\n");
#endif
  RESOLVED_PROC(PFNGLCLEARBUFFERIVPROC)( buffer_, drawbuffer_, value_ );
}

static void __stdcall glClearBufferuivWrapper(GLenum buffer_, GLint drawbuffer_, const GLuint* value_)
{
  RESOLVE(PFNGLCLEARBUFFERUIVPROC, "glClearBufferuiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClearBufferuiv\n");
#endif
  RESOLVED_PROC(PFNGLCLEARBUFFERUIVPROC)( buffer_, drawbuffer_, value_ );
}

static void __stdcall glClearBufferfvWrapper(GLenum buffer_, GLint drawbuffer_, const GLfloat* value_)
{
  RESOLVE(PFNGLCLEARBUFFERFVPROC, "glClearBufferfv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClearBufferfv\n");
#endif
  RESOLVED_PROC(PFNGLCLEARBUFFERFVPROC)( buffer_, drawbuffer_, value_ );
}

static void __stdcall glClearBufferfiWrapper(GLenum buffer_, GLint drawbuffer_, GLfloat depth_, GLint stencil_)
{
  RESOLVE(PFNGLCLEARBUFFERFIPROC, "glClearBufferfi");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClearBufferfi\n");
#endif
  RESOLVED_PROC(PFNGLCLEARBUFFERFIPROC)( buffer_, drawbuffer_, depth_, stencil_ );
}

static const GLubyte * __stdcall glGetStringiWrapper(GLenum name_, GLuint index_)
{
  RESOLVE_RET(PFNGLGETSTRINGIPROC, "glGetStringi", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetStringi\n");
#endif
  return RESOLVED_PROC(PFNGLGETSTRINGIPROC)( name_, index_ );
}

static GLboolean __stdcall glIsRenderbufferWrapper(GLuint renderbuffer_)
{
  RESOLVE_RET(PFNGLISRENDERBUFFERPROC, "glIsRenderbuffer", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIsRenderbuffer\n");
#endif
  return RESOLVED_PROC(PFNGLISRENDERBUFFERPROC)( renderbuffer_ );
}

static void __stdcall glBindRenderbufferWrapper(GLenum target_, GLuint renderbuffer_)
{
  RESOLVE(PFNGLBINDRENDERBUFFERPROC, "glBindRenderbuffer");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindRenderbuffer\n");
#endif
  RESOLVED_PROC(PFNGLBINDRENDERBUFFERPROC)( target_, renderbuffer_ );
}

static void __stdcall glDeleteRenderbuffersWrapper(GLsizei n_, const GLuint* renderbuffers_)
{
  RESOLVE(PFNGLDELETERENDERBUFFERSPROC, "glDeleteRenderbuffers");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDeleteRenderbuffers\n");
#endif
  RESOLVED_PROC(PFNGLDELETERENDERBUFFERSPROC)( n_, renderbuffers_ );
}

static void __stdcall glGenRenderbuffersWrapper(GLsizei n_, GLuint* renderbuffers_)
{
  RESOLVE(PFNGLGENRENDERBUFFERSPROC, "glGenRenderbuffers");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGenRenderbuffers\n");
#endif
  RESOLVED_PROC(PFNGLGENRENDERBUFFERSPROC)( n_, renderbuffers_ );
}

static void __stdcall glRenderbufferStorageWrapper(GLenum target_, GLenum internalformat_, GLsizei width_, GLsizei height_)
{
  RESOLVE(PFNGLRENDERBUFFERSTORAGEPROC, "glRenderbufferStorage");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRenderbufferStorage\n");
#endif
  RESOLVED_PROC(PFNGLRENDERBUFFERSTORAGEPROC)( target_, internalformat_, width_, height_ );
}

static void __stdcall glGetRenderbufferParameterivWrapper(GLenum target_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETRENDERBUFFERPARAMETERIVPROC, "glGetRenderbufferParameteriv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetRenderbufferParameteriv\n");
#endif
  RESOLVED_PROC(PFNGLGETRENDERBUFFERPARAMETERIVPROC)( target_, pname_, params_ );
}

static GLboolean __stdcall glIsFramebufferWrapper(GLuint framebuffer_)
{
  RESOLVE_RET(PFNGLISFRAMEBUFFERPROC, "glIsFramebuffer", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIsFramebuffer\n");
#endif
  return RESOLVED_PROC(PFNGLISFRAMEBUFFERPROC)( framebuffer_ );
}

static void __stdcall glBindFramebufferWrapper(GLenum target_, GLuint framebuffer_)
{
  RESOLVE(PFNGLBINDFRAMEBUFFERPROC, "glBindFramebuffer");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindFramebuffer\n");
#endif
  RESOLVED_PROC(PFNGLBINDFRAMEBUFFERPROC)( target_, framebuffer_ );
}

static void __stdcall glDeleteFramebuffersWrapper(GLsizei n_, const GLuint* framebuffers_)
{
  RESOLVE(PFNGLDELETEFRAMEBUFFERSPROC, "glDeleteFramebuffers");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDeleteFramebuffers\n");
#endif
  RESOLVED_PROC(PFNGLDELETEFRAMEBUFFERSPROC)( n_, framebuffers_ );
}

static void __stdcall glGenFramebuffersWrapper(GLsizei n_, GLuint* framebuffers_)
{
  RESOLVE(PFNGLGENFRAMEBUFFERSPROC, "glGenFramebuffers");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGenFramebuffers\n");
#endif
  RESOLVED_PROC(PFNGLGENFRAMEBUFFERSPROC)( n_, framebuffers_ );
}

static GLenum __stdcall glCheckFramebufferStatusWrapper(GLenum target_)
{
  RESOLVE_RET(PFNGLCHECKFRAMEBUFFERSTATUSPROC, "glCheckFramebufferStatus", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCheckFramebufferStatus\n");
#endif
  return RESOLVED_PROC(PFNGLCHECKFRAMEBUFFERSTATUSPROC)( target_ );
}

static void __stdcall glFramebufferTexture1DWrapper(GLenum target_, GLenum attachment_, GLenum textarget_, GLuint texture_, GLint level_)
{
  RESOLVE(PFNGLFRAMEBUFFERTEXTURE1DPROC, "glFramebufferTexture1D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFramebufferTexture1D\n");
#endif
  RESOLVED_PROC(PFNGLFRAMEBUFFERTEXTURE1DPROC)( target_, attachment_, textarget_, texture_, level_ );
}

static void __stdcall glFramebufferTexture2DWrapper(GLenum target_, GLenum attachment_, GLenum textarget_, GLuint texture_, GLint level_)
{
  RESOLVE(PFNGLFRAMEBUFFERTEXTURE2DPROC, "glFramebufferTexture2D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFramebufferTexture2D\n");
#endif
  RESOLVED_PROC(PFNGLFRAMEBUFFERTEXTURE2DPROC)( target_, attachment_, textarget_, texture_, level_ );
}

static void __stdcall glFramebufferTexture3DWrapper(GLenum target_, GLenum attachment_, GLenum textarget_, GLuint texture_, GLint level_, GLint zoffset_)
{
  RESOLVE(PFNGLFRAMEBUFFERTEXTURE3DPROC, "glFramebufferTexture3D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFramebufferTexture3D\n");
#endif
  RESOLVED_PROC(PFNGLFRAMEBUFFERTEXTURE3DPROC)( target_, attachment_, textarget_, texture_, level_, zoffset_ );
}

static void __stdcall glFramebufferRenderbufferWrapper(GLenum target_, GLenum attachment_, GLenum renderbuffertarget_, GLuint renderbuffer_)
{
  RESOLVE(PFNGLFRAMEBUFFERRENDERBUFFERPROC, "glFramebufferRenderbuffer");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFramebufferRenderbuffer\n");
#endif
  RESOLVED_PROC(PFNGLFRAMEBUFFERRENDERBUFFERPROC)( target_, attachment_, renderbuffertarget_, renderbuffer_ );
}

static void __stdcall glGetFramebufferAttachmentParameterivWrapper(GLenum target_, GLenum attachment_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC, "glGetFramebufferAttachmentParameteriv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetFramebufferAttachmentParameteriv\n");
#endif
  RESOLVED_PROC(PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)( target_, attachment_, pname_, params_ );
}

static void __stdcall glGenerateMipmapWrapper(GLenum target_)
{
  RESOLVE(PFNGLGENERATEMIPMAPPROC, "glGenerateMipmap");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGenerateMipmap\n");
#endif
  RESOLVED_PROC(PFNGLGENERATEMIPMAPPROC)( target_ );
}

static void __stdcall glBlitFramebufferWrapper(GLint srcX0_, GLint srcY0_, GLint srcX1_, GLint srcY1_, GLint dstX0_, GLint dstY0_, GLint dstX1_, GLint dstY1_, GLbitfield mask_, GLenum filter_)
{
  RESOLVE(PFNGLBLITFRAMEBUFFERPROC, "glBlitFramebuffer");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBlitFramebuffer\n");
#endif
  RESOLVED_PROC(PFNGLBLITFRAMEBUFFERPROC)( srcX0_, srcY0_, srcX1_, srcY1_, dstX0_, dstY0_, dstX1_, dstY1_, mask_, filter_ );
}

static void __stdcall glRenderbufferStorageMultisampleWrapper(GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_)
{
  RESOLVE(PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC, "glRenderbufferStorageMultisample");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRenderbufferStorageMultisample\n");
#endif
  RESOLVED_PROC(PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC)( target_, samples_, internalformat_, width_, height_ );
}

static void __stdcall glFramebufferTextureLayerWrapper(GLenum target_, GLenum attachment_, GLuint texture_, GLint level_, GLint layer_)
{
  RESOLVE(PFNGLFRAMEBUFFERTEXTURELAYERPROC, "glFramebufferTextureLayer");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFramebufferTextureLayer\n");
#endif
  RESOLVED_PROC(PFNGLFRAMEBUFFERTEXTURELAYERPROC)( target_, attachment_, texture_, level_, layer_ );
}

static void * __stdcall glMapBufferRangeWrapper(GLenum target_, GLintptr offset_, GLsizeiptr length_, GLbitfield access_)
{
  RESOLVE_RET(PFNGLMAPBUFFERRANGEPROC, "glMapBufferRange", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMapBufferRange\n");
#endif
  return RESOLVED_PROC(PFNGLMAPBUFFERRANGEPROC)( target_, offset_, length_, access_ );
}

static void __stdcall glFlushMappedBufferRangeWrapper(GLenum target_, GLintptr offset_, GLsizeiptr length_)
{
  RESOLVE(PFNGLFLUSHMAPPEDBUFFERRANGEPROC, "glFlushMappedBufferRange");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFlushMappedBufferRange\n");
#endif
  RESOLVED_PROC(PFNGLFLUSHMAPPEDBUFFERRANGEPROC)( target_, offset_, length_ );
}

static void __stdcall glBindVertexArrayWrapper(GLuint array_)
{
  RESOLVE(PFNGLBINDVERTEXARRAYPROC, "glBindVertexArray");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindVertexArray\n");
#endif
  RESOLVED_PROC(PFNGLBINDVERTEXARRAYPROC)( array_ );
}

static void __stdcall glDeleteVertexArraysWrapper(GLsizei n_, const GLuint* arrays_)
{
  RESOLVE(PFNGLDELETEVERTEXARRAYSPROC, "glDeleteVertexArrays");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDeleteVertexArrays\n");
#endif
  RESOLVED_PROC(PFNGLDELETEVERTEXARRAYSPROC)( n_, arrays_ );
}

static void __stdcall glGenVertexArraysWrapper(GLsizei n_, GLuint* arrays_)
{
  RESOLVE(PFNGLGENVERTEXARRAYSPROC, "glGenVertexArrays");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGenVertexArrays\n");
#endif
  RESOLVED_PROC(PFNGLGENVERTEXARRAYSPROC)( n_, arrays_ );
}

static GLboolean __stdcall glIsVertexArrayWrapper(GLuint array_)
{
  RESOLVE_RET(PFNGLISVERTEXARRAYPROC, "glIsVertexArray", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIsVertexArray\n");
#endif
  return RESOLVED_PROC(PFNGLISVERTEXARRAYPROC)( array_ );
}

static void __stdcall glDrawArraysInstancedWrapper(GLenum mode_, GLint first_, GLsizei count_, GLsizei instancecount_)
{
  RESOLVE(PFNGLDRAWARRAYSINSTANCEDPROC, "glDrawArraysInstanced");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDrawArraysInstanced\n");
#endif
  RESOLVED_PROC(PFNGLDRAWARRAYSINSTANCEDPROC)( mode_, first_, count_, instancecount_ );
}

static void __stdcall glDrawElementsInstancedWrapper(GLenum mode_, GLsizei count_, GLenum type_, const void * indices_, GLsizei instancecount_)
{
  RESOLVE(PFNGLDRAWELEMENTSINSTANCEDPROC, "glDrawElementsInstanced");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDrawElementsInstanced\n");
#endif
  RESOLVED_PROC(PFNGLDRAWELEMENTSINSTANCEDPROC)( mode_, count_, type_, indices_, instancecount_ );
}

static void __stdcall glTexBufferWrapper(GLenum target_, GLenum internalformat_, GLuint buffer_)
{
  RESOLVE(PFNGLTEXBUFFERPROC, "glTexBuffer");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexBuffer\n");
#endif
  RESOLVED_PROC(PFNGLTEXBUFFERPROC)( target_, internalformat_, buffer_ );
}

static void __stdcall glPrimitiveRestartIndexWrapper(GLuint index_)
{
  RESOLVE(PFNGLPRIMITIVERESTARTINDEXPROC, "glPrimitiveRestartIndex");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPrimitiveRestartIndex\n");
#endif
  RESOLVED_PROC(PFNGLPRIMITIVERESTARTINDEXPROC)( index_ );
}

static void __stdcall glCopyBufferSubDataWrapper(GLenum readTarget_, GLenum writeTarget_, GLintptr readOffset_, GLintptr writeOffset_, GLsizeiptr size_)
{
  RESOLVE(PFNGLCOPYBUFFERSUBDATAPROC, "glCopyBufferSubData");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCopyBufferSubData\n");
#endif
  RESOLVED_PROC(PFNGLCOPYBUFFERSUBDATAPROC)( readTarget_, writeTarget_, readOffset_, writeOffset_, size_ );
}

static void __stdcall glGetUniformIndicesWrapper(GLuint program_, GLsizei uniformCount_, const GLchar*const* uniformNames_, GLuint* uniformIndices_)
{
  RESOLVE(PFNGLGETUNIFORMINDICESPROC, "glGetUniformIndices");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetUniformIndices\n");
#endif
  RESOLVED_PROC(PFNGLGETUNIFORMINDICESPROC)( program_, uniformCount_, uniformNames_, uniformIndices_ );
}

static void __stdcall glGetActiveUniformsivWrapper(GLuint program_, GLsizei uniformCount_, const GLuint* uniformIndices_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETACTIVEUNIFORMSIVPROC, "glGetActiveUniformsiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetActiveUniformsiv\n");
#endif
  RESOLVED_PROC(PFNGLGETACTIVEUNIFORMSIVPROC)( program_, uniformCount_, uniformIndices_, pname_, params_ );
}

static void __stdcall glGetActiveUniformNameWrapper(GLuint program_, GLuint uniformIndex_, GLsizei bufSize_, GLsizei* length_, GLchar* uniformName_)
{
  RESOLVE(PFNGLGETACTIVEUNIFORMNAMEPROC, "glGetActiveUniformName");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetActiveUniformName\n");
#endif
  RESOLVED_PROC(PFNGLGETACTIVEUNIFORMNAMEPROC)( program_, uniformIndex_, bufSize_, length_, uniformName_ );
}

static GLuint __stdcall glGetUniformBlockIndexWrapper(GLuint program_, const GLchar* uniformBlockName_)
{
  RESOLVE_RET(PFNGLGETUNIFORMBLOCKINDEXPROC, "glGetUniformBlockIndex", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetUniformBlockIndex\n");
#endif
  return RESOLVED_PROC(PFNGLGETUNIFORMBLOCKINDEXPROC)( program_, uniformBlockName_ );
}

static void __stdcall glGetActiveUniformBlockivWrapper(GLuint program_, GLuint uniformBlockIndex_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETACTIVEUNIFORMBLOCKIVPROC, "glGetActiveUniformBlockiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetActiveUniformBlockiv\n");
#endif
  RESOLVED_PROC(PFNGLGETACTIVEUNIFORMBLOCKIVPROC)( program_, uniformBlockIndex_, pname_, params_ );
}

static void __stdcall glGetActiveUniformBlockNameWrapper(GLuint program_, GLuint uniformBlockIndex_, GLsizei bufSize_, GLsizei* length_, GLchar* uniformBlockName_)
{
  RESOLVE(PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC, "glGetActiveUniformBlockName");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetActiveUniformBlockName\n");
#endif
  RESOLVED_PROC(PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC)( program_, uniformBlockIndex_, bufSize_, length_, uniformBlockName_ );
}

static void __stdcall glUniformBlockBindingWrapper(GLuint program_, GLuint uniformBlockIndex_, GLuint uniformBlockBinding_)
{
  RESOLVE(PFNGLUNIFORMBLOCKBINDINGPROC, "glUniformBlockBinding");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniformBlockBinding\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORMBLOCKBINDINGPROC)( program_, uniformBlockIndex_, uniformBlockBinding_ );
}

static void __stdcall glDrawElementsBaseVertexWrapper(GLenum mode_, GLsizei count_, GLenum type_, const void * indices_, GLint basevertex_)
{
  RESOLVE(PFNGLDRAWELEMENTSBASEVERTEXPROC, "glDrawElementsBaseVertex");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDrawElementsBaseVertex\n");
#endif
  RESOLVED_PROC(PFNGLDRAWELEMENTSBASEVERTEXPROC)( mode_, count_, type_, indices_, basevertex_ );
}

static void __stdcall glDrawRangeElementsBaseVertexWrapper(GLenum mode_, GLuint start_, GLuint end_, GLsizei count_, GLenum type_, const void * indices_, GLint basevertex_)
{
  RESOLVE(PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC, "glDrawRangeElementsBaseVertex");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDrawRangeElementsBaseVertex\n");
#endif
  RESOLVED_PROC(PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC)( mode_, start_, end_, count_, type_, indices_, basevertex_ );
}

static void __stdcall glDrawElementsInstancedBaseVertexWrapper(GLenum mode_, GLsizei count_, GLenum type_, const void * indices_, GLsizei instancecount_, GLint basevertex_)
{
  RESOLVE(PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC, "glDrawElementsInstancedBaseVertex");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDrawElementsInstancedBaseVertex\n");
#endif
  RESOLVED_PROC(PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC)( mode_, count_, type_, indices_, instancecount_, basevertex_ );
}

static void __stdcall glMultiDrawElementsBaseVertexWrapper(GLenum mode_, const GLsizei* count_, GLenum type_, const void *const* indices_, GLsizei drawcount_, const GLint* basevertex_)
{
  RESOLVE(PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC, "glMultiDrawElementsBaseVertex");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiDrawElementsBaseVertex\n");
#endif
  RESOLVED_PROC(PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC)( mode_, count_, type_, indices_, drawcount_, basevertex_ );
}

static void __stdcall glProvokingVertexWrapper(GLenum mode_)
{
  RESOLVE(PFNGLPROVOKINGVERTEXPROC, "glProvokingVertex");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProvokingVertex\n");
#endif
  RESOLVED_PROC(PFNGLPROVOKINGVERTEXPROC)( mode_ );
}

static GLsync __stdcall glFenceSyncWrapper(GLenum condition_, GLbitfield flags_)
{
  RESOLVE_RET(PFNGLFENCESYNCPROC, "glFenceSync", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFenceSync\n");
#endif
  return RESOLVED_PROC(PFNGLFENCESYNCPROC)( condition_, flags_ );
}

static GLboolean __stdcall glIsSyncWrapper(GLsync sync_)
{
  RESOLVE_RET(PFNGLISSYNCPROC, "glIsSync", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIsSync\n");
#endif
  return RESOLVED_PROC(PFNGLISSYNCPROC)( sync_ );
}

static void __stdcall glDeleteSyncWrapper(GLsync sync_)
{
  RESOLVE(PFNGLDELETESYNCPROC, "glDeleteSync");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDeleteSync\n");
#endif
  RESOLVED_PROC(PFNGLDELETESYNCPROC)( sync_ );
}

static GLenum __stdcall glClientWaitSyncWrapper(GLsync sync_, GLbitfield flags_, GLuint64 timeout_)
{
  RESOLVE_RET(PFNGLCLIENTWAITSYNCPROC, "glClientWaitSync", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClientWaitSync\n");
#endif
  return RESOLVED_PROC(PFNGLCLIENTWAITSYNCPROC)( sync_, flags_, timeout_ );
}

static void __stdcall glWaitSyncWrapper(GLsync sync_, GLbitfield flags_, GLuint64 timeout_)
{
  RESOLVE(PFNGLWAITSYNCPROC, "glWaitSync");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glWaitSync\n");
#endif
  RESOLVED_PROC(PFNGLWAITSYNCPROC)( sync_, flags_, timeout_ );
}

static void __stdcall glGetInteger64vWrapper(GLenum pname_, GLint64* data_)
{
  RESOLVE(PFNGLGETINTEGER64VPROC, "glGetInteger64v");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetInteger64v\n");
#endif
  RESOLVED_PROC(PFNGLGETINTEGER64VPROC)( pname_, data_ );
}

static void __stdcall glGetSyncivWrapper(GLsync sync_, GLenum pname_, GLsizei count_, GLsizei* length_, GLint* values_)
{
  RESOLVE(PFNGLGETSYNCIVPROC, "glGetSynciv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetSynciv\n");
#endif
  RESOLVED_PROC(PFNGLGETSYNCIVPROC)( sync_, pname_, count_, length_, values_ );
}

static void __stdcall glGetInteger64i_vWrapper(GLenum target_, GLuint index_, GLint64* data_)
{
  RESOLVE(PFNGLGETINTEGER64I_VPROC, "glGetInteger64i_v");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetInteger64i_v\n");
#endif
  RESOLVED_PROC(PFNGLGETINTEGER64I_VPROC)( target_, index_, data_ );
}

static void __stdcall glGetBufferParameteri64vWrapper(GLenum target_, GLenum pname_, GLint64* params_)
{
  RESOLVE(PFNGLGETBUFFERPARAMETERI64VPROC, "glGetBufferParameteri64v");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetBufferParameteri64v\n");
#endif
  RESOLVED_PROC(PFNGLGETBUFFERPARAMETERI64VPROC)( target_, pname_, params_ );
}

static void __stdcall glFramebufferTextureWrapper(GLenum target_, GLenum attachment_, GLuint texture_, GLint level_)
{
  RESOLVE(PFNGLFRAMEBUFFERTEXTUREPROC, "glFramebufferTexture");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFramebufferTexture\n");
#endif
  RESOLVED_PROC(PFNGLFRAMEBUFFERTEXTUREPROC)( target_, attachment_, texture_, level_ );
}

static void __stdcall glTexImage2DMultisampleWrapper(GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLboolean fixedsamplelocations_)
{
  RESOLVE(PFNGLTEXIMAGE2DMULTISAMPLEPROC, "glTexImage2DMultisample");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexImage2DMultisample\n");
#endif
  RESOLVED_PROC(PFNGLTEXIMAGE2DMULTISAMPLEPROC)( target_, samples_, internalformat_, width_, height_, fixedsamplelocations_ );
}

static void __stdcall glTexImage3DMultisampleWrapper(GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLboolean fixedsamplelocations_)
{
  RESOLVE(PFNGLTEXIMAGE3DMULTISAMPLEPROC, "glTexImage3DMultisample");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexImage3DMultisample\n");
#endif
  RESOLVED_PROC(PFNGLTEXIMAGE3DMULTISAMPLEPROC)( target_, samples_, internalformat_, width_, height_, depth_, fixedsamplelocations_ );
}

static void __stdcall glGetMultisamplefvWrapper(GLenum pname_, GLuint index_, GLfloat* val_)
{
  RESOLVE(PFNGLGETMULTISAMPLEFVPROC, "glGetMultisamplefv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetMultisamplefv\n");
#endif
  RESOLVED_PROC(PFNGLGETMULTISAMPLEFVPROC)( pname_, index_, val_ );
}

static void __stdcall glSampleMaskiWrapper(GLuint maskNumber_, GLbitfield mask_)
{
  RESOLVE(PFNGLSAMPLEMASKIPROC, "glSampleMaski");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSampleMaski\n");
#endif
  RESOLVED_PROC(PFNGLSAMPLEMASKIPROC)( maskNumber_, mask_ );
}

static void __stdcall glBindFragDataLocationIndexedWrapper(GLuint program_, GLuint colorNumber_, GLuint index_, const GLchar* name_)
{
  RESOLVE(PFNGLBINDFRAGDATALOCATIONINDEXEDPROC, "glBindFragDataLocationIndexed");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindFragDataLocationIndexed\n");
#endif
  RESOLVED_PROC(PFNGLBINDFRAGDATALOCATIONINDEXEDPROC)( program_, colorNumber_, index_, name_ );
}

static GLint __stdcall glGetFragDataIndexWrapper(GLuint program_, const GLchar* name_)
{
  RESOLVE_RET(PFNGLGETFRAGDATAINDEXPROC, "glGetFragDataIndex", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetFragDataIndex\n");
#endif
  return RESOLVED_PROC(PFNGLGETFRAGDATAINDEXPROC)( program_, name_ );
}

static void __stdcall glGenSamplersWrapper(GLsizei count_, GLuint* samplers_)
{
  RESOLVE(PFNGLGENSAMPLERSPROC, "glGenSamplers");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGenSamplers\n");
#endif
  RESOLVED_PROC(PFNGLGENSAMPLERSPROC)( count_, samplers_ );
}

static void __stdcall glDeleteSamplersWrapper(GLsizei count_, const GLuint* samplers_)
{
  RESOLVE(PFNGLDELETESAMPLERSPROC, "glDeleteSamplers");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDeleteSamplers\n");
#endif
  RESOLVED_PROC(PFNGLDELETESAMPLERSPROC)( count_, samplers_ );
}

static GLboolean __stdcall glIsSamplerWrapper(GLuint sampler_)
{
  RESOLVE_RET(PFNGLISSAMPLERPROC, "glIsSampler", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIsSampler\n");
#endif
  return RESOLVED_PROC(PFNGLISSAMPLERPROC)( sampler_ );
}

static void __stdcall glBindSamplerWrapper(GLuint unit_, GLuint sampler_)
{
  RESOLVE(PFNGLBINDSAMPLERPROC, "glBindSampler");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindSampler\n");
#endif
  RESOLVED_PROC(PFNGLBINDSAMPLERPROC)( unit_, sampler_ );
}

static void __stdcall glSamplerParameteriWrapper(GLuint sampler_, GLenum pname_, GLint param_)
{
  RESOLVE(PFNGLSAMPLERPARAMETERIPROC, "glSamplerParameteri");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSamplerParameteri\n");
#endif
  RESOLVED_PROC(PFNGLSAMPLERPARAMETERIPROC)( sampler_, pname_, param_ );
}

static void __stdcall glSamplerParameterivWrapper(GLuint sampler_, GLenum pname_, const GLint* param_)
{
  RESOLVE(PFNGLSAMPLERPARAMETERIVPROC, "glSamplerParameteriv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSamplerParameteriv\n");
#endif
  RESOLVED_PROC(PFNGLSAMPLERPARAMETERIVPROC)( sampler_, pname_, param_ );
}

static void __stdcall glSamplerParameterfWrapper(GLuint sampler_, GLenum pname_, GLfloat param_)
{
  RESOLVE(PFNGLSAMPLERPARAMETERFPROC, "glSamplerParameterf");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSamplerParameterf\n");
#endif
  RESOLVED_PROC(PFNGLSAMPLERPARAMETERFPROC)( sampler_, pname_, param_ );
}

static void __stdcall glSamplerParameterfvWrapper(GLuint sampler_, GLenum pname_, const GLfloat* param_)
{
  RESOLVE(PFNGLSAMPLERPARAMETERFVPROC, "glSamplerParameterfv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSamplerParameterfv\n");
#endif
  RESOLVED_PROC(PFNGLSAMPLERPARAMETERFVPROC)( sampler_, pname_, param_ );
}

static void __stdcall glSamplerParameterIivWrapper(GLuint sampler_, GLenum pname_, const GLint* param_)
{
  RESOLVE(PFNGLSAMPLERPARAMETERIIVPROC, "glSamplerParameterIiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSamplerParameterIiv\n");
#endif
  RESOLVED_PROC(PFNGLSAMPLERPARAMETERIIVPROC)( sampler_, pname_, param_ );
}

static void __stdcall glSamplerParameterIuivWrapper(GLuint sampler_, GLenum pname_, const GLuint* param_)
{
  RESOLVE(PFNGLSAMPLERPARAMETERIUIVPROC, "glSamplerParameterIuiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSamplerParameterIuiv\n");
#endif
  RESOLVED_PROC(PFNGLSAMPLERPARAMETERIUIVPROC)( sampler_, pname_, param_ );
}

static void __stdcall glGetSamplerParameterivWrapper(GLuint sampler_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETSAMPLERPARAMETERIVPROC, "glGetSamplerParameteriv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetSamplerParameteriv\n");
#endif
  RESOLVED_PROC(PFNGLGETSAMPLERPARAMETERIVPROC)( sampler_, pname_, params_ );
}

static void __stdcall glGetSamplerParameterIivWrapper(GLuint sampler_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETSAMPLERPARAMETERIIVPROC, "glGetSamplerParameterIiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetSamplerParameterIiv\n");
#endif
  RESOLVED_PROC(PFNGLGETSAMPLERPARAMETERIIVPROC)( sampler_, pname_, params_ );
}

static void __stdcall glGetSamplerParameterfvWrapper(GLuint sampler_, GLenum pname_, GLfloat* params_)
{
  RESOLVE(PFNGLGETSAMPLERPARAMETERFVPROC, "glGetSamplerParameterfv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetSamplerParameterfv\n");
#endif
  RESOLVED_PROC(PFNGLGETSAMPLERPARAMETERFVPROC)( sampler_, pname_, params_ );
}

static void __stdcall glGetSamplerParameterIuivWrapper(GLuint sampler_, GLenum pname_, GLuint* params_)
{
  RESOLVE(PFNGLGETSAMPLERPARAMETERIUIVPROC, "glGetSamplerParameterIuiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetSamplerParameterIuiv\n");
#endif
  RESOLVED_PROC(PFNGLGETSAMPLERPARAMETERIUIVPROC)( sampler_, pname_, params_ );
}

static void __stdcall glQueryCounterWrapper(GLuint id_, GLenum target_)
{
  RESOLVE(PFNGLQUERYCOUNTERPROC, "glQueryCounter");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glQueryCounter\n");
#endif
  RESOLVED_PROC(PFNGLQUERYCOUNTERPROC)( id_, target_ );
}

static void __stdcall glGetQueryObjecti64vWrapper(GLuint id_, GLenum pname_, GLint64* params_)
{
  RESOLVE(PFNGLGETQUERYOBJECTI64VPROC, "glGetQueryObjecti64v");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetQueryObjecti64v\n");
#endif
  RESOLVED_PROC(PFNGLGETQUERYOBJECTI64VPROC)( id_, pname_, params_ );
}

static void __stdcall glGetQueryObjectui64vWrapper(GLuint id_, GLenum pname_, GLuint64* params_)
{
  RESOLVE(PFNGLGETQUERYOBJECTUI64VPROC, "glGetQueryObjectui64v");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetQueryObjectui64v\n");
#endif
  RESOLVED_PROC(PFNGLGETQUERYOBJECTUI64VPROC)( id_, pname_, params_ );
}

static void __stdcall glVertexAttribDivisorWrapper(GLuint index_, GLuint divisor_)
{
  RESOLVE(PFNGLVERTEXATTRIBDIVISORPROC, "glVertexAttribDivisor");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribDivisor\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBDIVISORPROC)( index_, divisor_ );
}

static void __stdcall glVertexAttribP1uiWrapper(GLuint index_, GLenum type_, GLboolean normalized_, GLuint value_)
{
  RESOLVE(PFNGLVERTEXATTRIBP1UIPROC, "glVertexAttribP1ui");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribP1ui\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBP1UIPROC)( index_, type_, normalized_, value_ );
}

static void __stdcall glVertexAttribP1uivWrapper(GLuint index_, GLenum type_, GLboolean normalized_, const GLuint* value_)
{
  RESOLVE(PFNGLVERTEXATTRIBP1UIVPROC, "glVertexAttribP1uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribP1uiv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBP1UIVPROC)( index_, type_, normalized_, value_ );
}

static void __stdcall glVertexAttribP2uiWrapper(GLuint index_, GLenum type_, GLboolean normalized_, GLuint value_)
{
  RESOLVE(PFNGLVERTEXATTRIBP2UIPROC, "glVertexAttribP2ui");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribP2ui\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBP2UIPROC)( index_, type_, normalized_, value_ );
}

static void __stdcall glVertexAttribP2uivWrapper(GLuint index_, GLenum type_, GLboolean normalized_, const GLuint* value_)
{
  RESOLVE(PFNGLVERTEXATTRIBP2UIVPROC, "glVertexAttribP2uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribP2uiv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBP2UIVPROC)( index_, type_, normalized_, value_ );
}

static void __stdcall glVertexAttribP3uiWrapper(GLuint index_, GLenum type_, GLboolean normalized_, GLuint value_)
{
  RESOLVE(PFNGLVERTEXATTRIBP3UIPROC, "glVertexAttribP3ui");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribP3ui\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBP3UIPROC)( index_, type_, normalized_, value_ );
}

static void __stdcall glVertexAttribP3uivWrapper(GLuint index_, GLenum type_, GLboolean normalized_, const GLuint* value_)
{
  RESOLVE(PFNGLVERTEXATTRIBP3UIVPROC, "glVertexAttribP3uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribP3uiv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBP3UIVPROC)( index_, type_, normalized_, value_ );
}

static void __stdcall glVertexAttribP4uiWrapper(GLuint index_, GLenum type_, GLboolean normalized_, GLuint value_)
{
  RESOLVE(PFNGLVERTEXATTRIBP4UIPROC, "glVertexAttribP4ui");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribP4ui\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBP4UIPROC)( index_, type_, normalized_, value_ );
}

static void __stdcall glVertexAttribP4uivWrapper(GLuint index_, GLenum type_, GLboolean normalized_, const GLuint* value_)
{
  RESOLVE(PFNGLVERTEXATTRIBP4UIVPROC, "glVertexAttribP4uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribP4uiv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBP4UIVPROC)( index_, type_, normalized_, value_ );
}

static void __stdcall glVertexP2uiWrapper(GLenum type_, GLuint value_)
{
  RESOLVE(PFNGLVERTEXP2UIPROC, "glVertexP2ui");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexP2ui\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXP2UIPROC)( type_, value_ );
}

static void __stdcall glVertexP2uivWrapper(GLenum type_, const GLuint* value_)
{
  RESOLVE(PFNGLVERTEXP2UIVPROC, "glVertexP2uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexP2uiv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXP2UIVPROC)( type_, value_ );
}

static void __stdcall glVertexP3uiWrapper(GLenum type_, GLuint value_)
{
  RESOLVE(PFNGLVERTEXP3UIPROC, "glVertexP3ui");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexP3ui\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXP3UIPROC)( type_, value_ );
}

static void __stdcall glVertexP3uivWrapper(GLenum type_, const GLuint* value_)
{
  RESOLVE(PFNGLVERTEXP3UIVPROC, "glVertexP3uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexP3uiv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXP3UIVPROC)( type_, value_ );
}

static void __stdcall glVertexP4uiWrapper(GLenum type_, GLuint value_)
{
  RESOLVE(PFNGLVERTEXP4UIPROC, "glVertexP4ui");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexP4ui\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXP4UIPROC)( type_, value_ );
}

static void __stdcall glVertexP4uivWrapper(GLenum type_, const GLuint* value_)
{
  RESOLVE(PFNGLVERTEXP4UIVPROC, "glVertexP4uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexP4uiv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXP4UIVPROC)( type_, value_ );
}

static void __stdcall glTexCoordP1uiWrapper(GLenum type_, GLuint coords_)
{
  RESOLVE(PFNGLTEXCOORDP1UIPROC, "glTexCoordP1ui");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoordP1ui\n");
#endif
  RESOLVED_PROC(PFNGLTEXCOORDP1UIPROC)( type_, coords_ );
}

static void __stdcall glTexCoordP1uivWrapper(GLenum type_, const GLuint* coords_)
{
  RESOLVE(PFNGLTEXCOORDP1UIVPROC, "glTexCoordP1uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoordP1uiv\n");
#endif
  RESOLVED_PROC(PFNGLTEXCOORDP1UIVPROC)( type_, coords_ );
}

static void __stdcall glTexCoordP2uiWrapper(GLenum type_, GLuint coords_)
{
  RESOLVE(PFNGLTEXCOORDP2UIPROC, "glTexCoordP2ui");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoordP2ui\n");
#endif
  RESOLVED_PROC(PFNGLTEXCOORDP2UIPROC)( type_, coords_ );
}

static void __stdcall glTexCoordP2uivWrapper(GLenum type_, const GLuint* coords_)
{
  RESOLVE(PFNGLTEXCOORDP2UIVPROC, "glTexCoordP2uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoordP2uiv\n");
#endif
  RESOLVED_PROC(PFNGLTEXCOORDP2UIVPROC)( type_, coords_ );
}

static void __stdcall glTexCoordP3uiWrapper(GLenum type_, GLuint coords_)
{
  RESOLVE(PFNGLTEXCOORDP3UIPROC, "glTexCoordP3ui");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoordP3ui\n");
#endif
  RESOLVED_PROC(PFNGLTEXCOORDP3UIPROC)( type_, coords_ );
}

static void __stdcall glTexCoordP3uivWrapper(GLenum type_, const GLuint* coords_)
{
  RESOLVE(PFNGLTEXCOORDP3UIVPROC, "glTexCoordP3uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoordP3uiv\n");
#endif
  RESOLVED_PROC(PFNGLTEXCOORDP3UIVPROC)( type_, coords_ );
}

static void __stdcall glTexCoordP4uiWrapper(GLenum type_, GLuint coords_)
{
  RESOLVE(PFNGLTEXCOORDP4UIPROC, "glTexCoordP4ui");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoordP4ui\n");
#endif
  RESOLVED_PROC(PFNGLTEXCOORDP4UIPROC)( type_, coords_ );
}

static void __stdcall glTexCoordP4uivWrapper(GLenum type_, const GLuint* coords_)
{
  RESOLVE(PFNGLTEXCOORDP4UIVPROC, "glTexCoordP4uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoordP4uiv\n");
#endif
  RESOLVED_PROC(PFNGLTEXCOORDP4UIVPROC)( type_, coords_ );
}

static void __stdcall glMultiTexCoordP1uiWrapper(GLenum texture_, GLenum type_, GLuint coords_)
{
  RESOLVE(PFNGLMULTITEXCOORDP1UIPROC, "glMultiTexCoordP1ui");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoordP1ui\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORDP1UIPROC)( texture_, type_, coords_ );
}

static void __stdcall glMultiTexCoordP1uivWrapper(GLenum texture_, GLenum type_, const GLuint* coords_)
{
  RESOLVE(PFNGLMULTITEXCOORDP1UIVPROC, "glMultiTexCoordP1uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoordP1uiv\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORDP1UIVPROC)( texture_, type_, coords_ );
}

static void __stdcall glMultiTexCoordP2uiWrapper(GLenum texture_, GLenum type_, GLuint coords_)
{
  RESOLVE(PFNGLMULTITEXCOORDP2UIPROC, "glMultiTexCoordP2ui");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoordP2ui\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORDP2UIPROC)( texture_, type_, coords_ );
}

static void __stdcall glMultiTexCoordP2uivWrapper(GLenum texture_, GLenum type_, const GLuint* coords_)
{
  RESOLVE(PFNGLMULTITEXCOORDP2UIVPROC, "glMultiTexCoordP2uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoordP2uiv\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORDP2UIVPROC)( texture_, type_, coords_ );
}

static void __stdcall glMultiTexCoordP3uiWrapper(GLenum texture_, GLenum type_, GLuint coords_)
{
  RESOLVE(PFNGLMULTITEXCOORDP3UIPROC, "glMultiTexCoordP3ui");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoordP3ui\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORDP3UIPROC)( texture_, type_, coords_ );
}

static void __stdcall glMultiTexCoordP3uivWrapper(GLenum texture_, GLenum type_, const GLuint* coords_)
{
  RESOLVE(PFNGLMULTITEXCOORDP3UIVPROC, "glMultiTexCoordP3uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoordP3uiv\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORDP3UIVPROC)( texture_, type_, coords_ );
}

static void __stdcall glMultiTexCoordP4uiWrapper(GLenum texture_, GLenum type_, GLuint coords_)
{
  RESOLVE(PFNGLMULTITEXCOORDP4UIPROC, "glMultiTexCoordP4ui");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoordP4ui\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORDP4UIPROC)( texture_, type_, coords_ );
}

static void __stdcall glMultiTexCoordP4uivWrapper(GLenum texture_, GLenum type_, const GLuint* coords_)
{
  RESOLVE(PFNGLMULTITEXCOORDP4UIVPROC, "glMultiTexCoordP4uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoordP4uiv\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORDP4UIVPROC)( texture_, type_, coords_ );
}

static void __stdcall glNormalP3uiWrapper(GLenum type_, GLuint coords_)
{
  RESOLVE(PFNGLNORMALP3UIPROC, "glNormalP3ui");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNormalP3ui\n");
#endif
  RESOLVED_PROC(PFNGLNORMALP3UIPROC)( type_, coords_ );
}

static void __stdcall glNormalP3uivWrapper(GLenum type_, const GLuint* coords_)
{
  RESOLVE(PFNGLNORMALP3UIVPROC, "glNormalP3uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNormalP3uiv\n");
#endif
  RESOLVED_PROC(PFNGLNORMALP3UIVPROC)( type_, coords_ );
}

static void __stdcall glColorP3uiWrapper(GLenum type_, GLuint color_)
{
  RESOLVE(PFNGLCOLORP3UIPROC, "glColorP3ui");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColorP3ui\n");
#endif
  RESOLVED_PROC(PFNGLCOLORP3UIPROC)( type_, color_ );
}

static void __stdcall glColorP3uivWrapper(GLenum type_, const GLuint* color_)
{
  RESOLVE(PFNGLCOLORP3UIVPROC, "glColorP3uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColorP3uiv\n");
#endif
  RESOLVED_PROC(PFNGLCOLORP3UIVPROC)( type_, color_ );
}

static void __stdcall glColorP4uiWrapper(GLenum type_, GLuint color_)
{
  RESOLVE(PFNGLCOLORP4UIPROC, "glColorP4ui");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColorP4ui\n");
#endif
  RESOLVED_PROC(PFNGLCOLORP4UIPROC)( type_, color_ );
}

static void __stdcall glColorP4uivWrapper(GLenum type_, const GLuint* color_)
{
  RESOLVE(PFNGLCOLORP4UIVPROC, "glColorP4uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColorP4uiv\n");
#endif
  RESOLVED_PROC(PFNGLCOLORP4UIVPROC)( type_, color_ );
}

static void __stdcall glSecondaryColorP3uiWrapper(GLenum type_, GLuint color_)
{
  RESOLVE(PFNGLSECONDARYCOLORP3UIPROC, "glSecondaryColorP3ui");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSecondaryColorP3ui\n");
#endif
  RESOLVED_PROC(PFNGLSECONDARYCOLORP3UIPROC)( type_, color_ );
}

static void __stdcall glSecondaryColorP3uivWrapper(GLenum type_, const GLuint* color_)
{
  RESOLVE(PFNGLSECONDARYCOLORP3UIVPROC, "glSecondaryColorP3uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSecondaryColorP3uiv\n");
#endif
  RESOLVED_PROC(PFNGLSECONDARYCOLORP3UIVPROC)( type_, color_ );
}

static void __stdcall glMinSampleShadingWrapper(GLfloat value_)
{
  RESOLVE(PFNGLMINSAMPLESHADINGPROC, "glMinSampleShading");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMinSampleShading\n");
#endif
  RESOLVED_PROC(PFNGLMINSAMPLESHADINGPROC)( value_ );
}

/* No wrapper for glBlendEquationi, not in dispatch table */
/* No wrapper for glBlendEquationSeparatei, not in dispatch table */
/* No wrapper for glBlendFunci, not in dispatch table */
/* No wrapper for glBlendFuncSeparatei, not in dispatch table */
static void __stdcall glDrawArraysIndirectWrapper(GLenum mode_, const void * indirect_)
{
  RESOLVE(PFNGLDRAWARRAYSINDIRECTPROC, "glDrawArraysIndirect");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDrawArraysIndirect\n");
#endif
  RESOLVED_PROC(PFNGLDRAWARRAYSINDIRECTPROC)( mode_, indirect_ );
}

static void __stdcall glDrawElementsIndirectWrapper(GLenum mode_, GLenum type_, const void * indirect_)
{
  RESOLVE(PFNGLDRAWELEMENTSINDIRECTPROC, "glDrawElementsIndirect");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDrawElementsIndirect\n");
#endif
  RESOLVED_PROC(PFNGLDRAWELEMENTSINDIRECTPROC)( mode_, type_, indirect_ );
}

static void __stdcall glUniform1dWrapper(GLint location_, GLdouble x_)
{
  RESOLVE(PFNGLUNIFORM1DPROC, "glUniform1d");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform1d\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM1DPROC)( location_, x_ );
}

static void __stdcall glUniform2dWrapper(GLint location_, GLdouble x_, GLdouble y_)
{
  RESOLVE(PFNGLUNIFORM2DPROC, "glUniform2d");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform2d\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM2DPROC)( location_, x_, y_ );
}

static void __stdcall glUniform3dWrapper(GLint location_, GLdouble x_, GLdouble y_, GLdouble z_)
{
  RESOLVE(PFNGLUNIFORM3DPROC, "glUniform3d");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform3d\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM3DPROC)( location_, x_, y_, z_ );
}

static void __stdcall glUniform4dWrapper(GLint location_, GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_)
{
  RESOLVE(PFNGLUNIFORM4DPROC, "glUniform4d");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform4d\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM4DPROC)( location_, x_, y_, z_, w_ );
}

static void __stdcall glUniform1dvWrapper(GLint location_, GLsizei count_, const GLdouble* value_)
{
  RESOLVE(PFNGLUNIFORM1DVPROC, "glUniform1dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform1dv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM1DVPROC)( location_, count_, value_ );
}

static void __stdcall glUniform2dvWrapper(GLint location_, GLsizei count_, const GLdouble* value_)
{
  RESOLVE(PFNGLUNIFORM2DVPROC, "glUniform2dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform2dv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM2DVPROC)( location_, count_, value_ );
}

static void __stdcall glUniform3dvWrapper(GLint location_, GLsizei count_, const GLdouble* value_)
{
  RESOLVE(PFNGLUNIFORM3DVPROC, "glUniform3dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform3dv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM3DVPROC)( location_, count_, value_ );
}

static void __stdcall glUniform4dvWrapper(GLint location_, GLsizei count_, const GLdouble* value_)
{
  RESOLVE(PFNGLUNIFORM4DVPROC, "glUniform4dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform4dv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM4DVPROC)( location_, count_, value_ );
}

static void __stdcall glUniformMatrix2dvWrapper(GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble* value_)
{
  RESOLVE(PFNGLUNIFORMMATRIX2DVPROC, "glUniformMatrix2dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniformMatrix2dv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORMMATRIX2DVPROC)( location_, count_, transpose_, value_ );
}

static void __stdcall glUniformMatrix3dvWrapper(GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble* value_)
{
  RESOLVE(PFNGLUNIFORMMATRIX3DVPROC, "glUniformMatrix3dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniformMatrix3dv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORMMATRIX3DVPROC)( location_, count_, transpose_, value_ );
}

static void __stdcall glUniformMatrix4dvWrapper(GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble* value_)
{
  RESOLVE(PFNGLUNIFORMMATRIX4DVPROC, "glUniformMatrix4dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniformMatrix4dv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORMMATRIX4DVPROC)( location_, count_, transpose_, value_ );
}

static void __stdcall glUniformMatrix2x3dvWrapper(GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble* value_)
{
  RESOLVE(PFNGLUNIFORMMATRIX2X3DVPROC, "glUniformMatrix2x3dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniformMatrix2x3dv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORMMATRIX2X3DVPROC)( location_, count_, transpose_, value_ );
}

static void __stdcall glUniformMatrix2x4dvWrapper(GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble* value_)
{
  RESOLVE(PFNGLUNIFORMMATRIX2X4DVPROC, "glUniformMatrix2x4dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniformMatrix2x4dv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORMMATRIX2X4DVPROC)( location_, count_, transpose_, value_ );
}

static void __stdcall glUniformMatrix3x2dvWrapper(GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble* value_)
{
  RESOLVE(PFNGLUNIFORMMATRIX3X2DVPROC, "glUniformMatrix3x2dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniformMatrix3x2dv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORMMATRIX3X2DVPROC)( location_, count_, transpose_, value_ );
}

static void __stdcall glUniformMatrix3x4dvWrapper(GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble* value_)
{
  RESOLVE(PFNGLUNIFORMMATRIX3X4DVPROC, "glUniformMatrix3x4dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniformMatrix3x4dv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORMMATRIX3X4DVPROC)( location_, count_, transpose_, value_ );
}

static void __stdcall glUniformMatrix4x2dvWrapper(GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble* value_)
{
  RESOLVE(PFNGLUNIFORMMATRIX4X2DVPROC, "glUniformMatrix4x2dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniformMatrix4x2dv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORMMATRIX4X2DVPROC)( location_, count_, transpose_, value_ );
}

static void __stdcall glUniformMatrix4x3dvWrapper(GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble* value_)
{
  RESOLVE(PFNGLUNIFORMMATRIX4X3DVPROC, "glUniformMatrix4x3dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniformMatrix4x3dv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORMMATRIX4X3DVPROC)( location_, count_, transpose_, value_ );
}

static void __stdcall glGetUniformdvWrapper(GLuint program_, GLint location_, GLdouble* params_)
{
  RESOLVE(PFNGLGETUNIFORMDVPROC, "glGetUniformdv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetUniformdv\n");
#endif
  RESOLVED_PROC(PFNGLGETUNIFORMDVPROC)( program_, location_, params_ );
}

static GLint __stdcall glGetSubroutineUniformLocationWrapper(GLuint program_, GLenum shadertype_, const GLchar* name_)
{
  RESOLVE_RET(PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC, "glGetSubroutineUniformLocation", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetSubroutineUniformLocation\n");
#endif
  return RESOLVED_PROC(PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC)( program_, shadertype_, name_ );
}

static GLuint __stdcall glGetSubroutineIndexWrapper(GLuint program_, GLenum shadertype_, const GLchar* name_)
{
  RESOLVE_RET(PFNGLGETSUBROUTINEINDEXPROC, "glGetSubroutineIndex", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetSubroutineIndex\n");
#endif
  return RESOLVED_PROC(PFNGLGETSUBROUTINEINDEXPROC)( program_, shadertype_, name_ );
}

static void __stdcall glGetActiveSubroutineUniformivWrapper(GLuint program_, GLenum shadertype_, GLuint index_, GLenum pname_, GLint* values_)
{
  RESOLVE(PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC, "glGetActiveSubroutineUniformiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetActiveSubroutineUniformiv\n");
#endif
  RESOLVED_PROC(PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC)( program_, shadertype_, index_, pname_, values_ );
}

static void __stdcall glGetActiveSubroutineUniformNameWrapper(GLuint program_, GLenum shadertype_, GLuint index_, GLsizei bufSize_, GLsizei* length_, GLchar* name_)
{
  RESOLVE(PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC, "glGetActiveSubroutineUniformName");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetActiveSubroutineUniformName\n");
#endif
  RESOLVED_PROC(PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC)( program_, shadertype_, index_, bufSize_, length_, name_ );
}

static void __stdcall glGetActiveSubroutineNameWrapper(GLuint program_, GLenum shadertype_, GLuint index_, GLsizei bufSize_, GLsizei* length_, GLchar* name_)
{
  RESOLVE(PFNGLGETACTIVESUBROUTINENAMEPROC, "glGetActiveSubroutineName");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetActiveSubroutineName\n");
#endif
  RESOLVED_PROC(PFNGLGETACTIVESUBROUTINENAMEPROC)( program_, shadertype_, index_, bufSize_, length_, name_ );
}

static void __stdcall glUniformSubroutinesuivWrapper(GLenum shadertype_, GLsizei count_, const GLuint* indices_)
{
  RESOLVE(PFNGLUNIFORMSUBROUTINESUIVPROC, "glUniformSubroutinesuiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniformSubroutinesuiv\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORMSUBROUTINESUIVPROC)( shadertype_, count_, indices_ );
}

static void __stdcall glGetUniformSubroutineuivWrapper(GLenum shadertype_, GLint location_, GLuint* params_)
{
  RESOLVE(PFNGLGETUNIFORMSUBROUTINEUIVPROC, "glGetUniformSubroutineuiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetUniformSubroutineuiv\n");
#endif
  RESOLVED_PROC(PFNGLGETUNIFORMSUBROUTINEUIVPROC)( shadertype_, location_, params_ );
}

static void __stdcall glGetProgramStageivWrapper(GLuint program_, GLenum shadertype_, GLenum pname_, GLint* values_)
{
  RESOLVE(PFNGLGETPROGRAMSTAGEIVPROC, "glGetProgramStageiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetProgramStageiv\n");
#endif
  RESOLVED_PROC(PFNGLGETPROGRAMSTAGEIVPROC)( program_, shadertype_, pname_, values_ );
}

static void __stdcall glPatchParameteriWrapper(GLenum pname_, GLint value_)
{
  RESOLVE(PFNGLPATCHPARAMETERIPROC, "glPatchParameteri");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPatchParameteri\n");
#endif
  RESOLVED_PROC(PFNGLPATCHPARAMETERIPROC)( pname_, value_ );
}

static void __stdcall glPatchParameterfvWrapper(GLenum pname_, const GLfloat* values_)
{
  RESOLVE(PFNGLPATCHPARAMETERFVPROC, "glPatchParameterfv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPatchParameterfv\n");
#endif
  RESOLVED_PROC(PFNGLPATCHPARAMETERFVPROC)( pname_, values_ );
}

static void __stdcall glBindTransformFeedbackWrapper(GLenum target_, GLuint id_)
{
  RESOLVE(PFNGLBINDTRANSFORMFEEDBACKPROC, "glBindTransformFeedback");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindTransformFeedback\n");
#endif
  RESOLVED_PROC(PFNGLBINDTRANSFORMFEEDBACKPROC)( target_, id_ );
}

static void __stdcall glDeleteTransformFeedbacksWrapper(GLsizei n_, const GLuint* ids_)
{
  RESOLVE(PFNGLDELETETRANSFORMFEEDBACKSPROC, "glDeleteTransformFeedbacks");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDeleteTransformFeedbacks\n");
#endif
  RESOLVED_PROC(PFNGLDELETETRANSFORMFEEDBACKSPROC)( n_, ids_ );
}

static void __stdcall glGenTransformFeedbacksWrapper(GLsizei n_, GLuint* ids_)
{
  RESOLVE(PFNGLGENTRANSFORMFEEDBACKSPROC, "glGenTransformFeedbacks");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGenTransformFeedbacks\n");
#endif
  RESOLVED_PROC(PFNGLGENTRANSFORMFEEDBACKSPROC)( n_, ids_ );
}

static GLboolean __stdcall glIsTransformFeedbackWrapper(GLuint id_)
{
  RESOLVE_RET(PFNGLISTRANSFORMFEEDBACKPROC, "glIsTransformFeedback", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIsTransformFeedback\n");
#endif
  return RESOLVED_PROC(PFNGLISTRANSFORMFEEDBACKPROC)( id_ );
}

static void __stdcall glPauseTransformFeedbackWrapper(void)
{
  RESOLVE(PFNGLPAUSETRANSFORMFEEDBACKPROC, "glPauseTransformFeedback");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPauseTransformFeedback\n");
#endif
  RESOLVED_PROC(PFNGLPAUSETRANSFORMFEEDBACKPROC)(  );
}

static void __stdcall glResumeTransformFeedbackWrapper(void)
{
  RESOLVE(PFNGLRESUMETRANSFORMFEEDBACKPROC, "glResumeTransformFeedback");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glResumeTransformFeedback\n");
#endif
  RESOLVED_PROC(PFNGLRESUMETRANSFORMFEEDBACKPROC)(  );
}

static void __stdcall glDrawTransformFeedbackWrapper(GLenum mode_, GLuint id_)
{
  RESOLVE(PFNGLDRAWTRANSFORMFEEDBACKPROC, "glDrawTransformFeedback");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDrawTransformFeedback\n");
#endif
  RESOLVED_PROC(PFNGLDRAWTRANSFORMFEEDBACKPROC)( mode_, id_ );
}

static void __stdcall glDrawTransformFeedbackStreamWrapper(GLenum mode_, GLuint id_, GLuint stream_)
{
  RESOLVE(PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC, "glDrawTransformFeedbackStream");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDrawTransformFeedbackStream\n");
#endif
  RESOLVED_PROC(PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC)( mode_, id_, stream_ );
}

static void __stdcall glBeginQueryIndexedWrapper(GLenum target_, GLuint index_, GLuint id_)
{
  RESOLVE(PFNGLBEGINQUERYINDEXEDPROC, "glBeginQueryIndexed");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBeginQueryIndexed\n");
#endif
  RESOLVED_PROC(PFNGLBEGINQUERYINDEXEDPROC)( target_, index_, id_ );
}

static void __stdcall glEndQueryIndexedWrapper(GLenum target_, GLuint index_)
{
  RESOLVE(PFNGLENDQUERYINDEXEDPROC, "glEndQueryIndexed");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEndQueryIndexed\n");
#endif
  RESOLVED_PROC(PFNGLENDQUERYINDEXEDPROC)( target_, index_ );
}

static void __stdcall glGetQueryIndexedivWrapper(GLenum target_, GLuint index_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETQUERYINDEXEDIVPROC, "glGetQueryIndexediv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetQueryIndexediv\n");
#endif
  RESOLVED_PROC(PFNGLGETQUERYINDEXEDIVPROC)( target_, index_, pname_, params_ );
}

static void __stdcall glReleaseShaderCompilerWrapper(void)
{
  RESOLVE(PFNGLRELEASESHADERCOMPILERPROC, "glReleaseShaderCompiler");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glReleaseShaderCompiler\n");
#endif
  RESOLVED_PROC(PFNGLRELEASESHADERCOMPILERPROC)(  );
}

static void __stdcall glShaderBinaryWrapper(GLsizei count_, const GLuint* shaders_, GLenum binaryFormat_, const void * binary_, GLsizei length_)
{
  RESOLVE(PFNGLSHADERBINARYPROC, "glShaderBinary");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glShaderBinary\n");
#endif
  RESOLVED_PROC(PFNGLSHADERBINARYPROC)( count_, shaders_, binaryFormat_, binary_, length_ );
}

static void __stdcall glGetShaderPrecisionFormatWrapper(GLenum shadertype_, GLenum precisiontype_, GLint* range_, GLint* precision_)
{
  RESOLVE(PFNGLGETSHADERPRECISIONFORMATPROC, "glGetShaderPrecisionFormat");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetShaderPrecisionFormat\n");
#endif
  RESOLVED_PROC(PFNGLGETSHADERPRECISIONFORMATPROC)( shadertype_, precisiontype_, range_, precision_ );
}

static void __stdcall glDepthRangefWrapper(GLfloat n_, GLfloat f_)
{
  RESOLVE(PFNGLDEPTHRANGEFPROC, "glDepthRangef");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDepthRangef\n");
#endif
  RESOLVED_PROC(PFNGLDEPTHRANGEFPROC)( n_, f_ );
}

static void __stdcall glClearDepthfWrapper(GLfloat d_)
{
  RESOLVE(PFNGLCLEARDEPTHFPROC, "glClearDepthf");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClearDepthf\n");
#endif
  RESOLVED_PROC(PFNGLCLEARDEPTHFPROC)( d_ );
}

static void __stdcall glGetProgramBinaryWrapper(GLuint program_, GLsizei bufSize_, GLsizei* length_, GLenum* binaryFormat_, void * binary_)
{
  RESOLVE(PFNGLGETPROGRAMBINARYPROC, "glGetProgramBinary");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetProgramBinary\n");
#endif
  RESOLVED_PROC(PFNGLGETPROGRAMBINARYPROC)( program_, bufSize_, length_, binaryFormat_, binary_ );
}

static void __stdcall glProgramBinaryWrapper(GLuint program_, GLenum binaryFormat_, const void * binary_, GLsizei length_)
{
  RESOLVE(PFNGLPROGRAMBINARYPROC, "glProgramBinary");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramBinary\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMBINARYPROC)( program_, binaryFormat_, binary_, length_ );
}

static void __stdcall glProgramParameteriWrapper(GLuint program_, GLenum pname_, GLint value_)
{
  RESOLVE(PFNGLPROGRAMPARAMETERIPROC, "glProgramParameteri");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramParameteri\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMPARAMETERIPROC)( program_, pname_, value_ );
}

static void __stdcall glUseProgramStagesWrapper(GLuint pipeline_, GLbitfield stages_, GLuint program_)
{
  RESOLVE(PFNGLUSEPROGRAMSTAGESPROC, "glUseProgramStages");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUseProgramStages\n");
#endif
  RESOLVED_PROC(PFNGLUSEPROGRAMSTAGESPROC)( pipeline_, stages_, program_ );
}

static void __stdcall glActiveShaderProgramWrapper(GLuint pipeline_, GLuint program_)
{
  RESOLVE(PFNGLACTIVESHADERPROGRAMPROC, "glActiveShaderProgram");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glActiveShaderProgram\n");
#endif
  RESOLVED_PROC(PFNGLACTIVESHADERPROGRAMPROC)( pipeline_, program_ );
}

static GLuint __stdcall glCreateShaderProgramvWrapper(GLenum type_, GLsizei count_, const GLchar*const* strings_)
{
  RESOLVE_RET(PFNGLCREATESHADERPROGRAMVPROC, "glCreateShaderProgramv", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCreateShaderProgramv\n");
#endif
  return RESOLVED_PROC(PFNGLCREATESHADERPROGRAMVPROC)( type_, count_, strings_ );
}

static void __stdcall glBindProgramPipelineWrapper(GLuint pipeline_)
{
  RESOLVE(PFNGLBINDPROGRAMPIPELINEPROC, "glBindProgramPipeline");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindProgramPipeline\n");
#endif
  RESOLVED_PROC(PFNGLBINDPROGRAMPIPELINEPROC)( pipeline_ );
}

static void __stdcall glDeleteProgramPipelinesWrapper(GLsizei n_, const GLuint* pipelines_)
{
  RESOLVE(PFNGLDELETEPROGRAMPIPELINESPROC, "glDeleteProgramPipelines");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDeleteProgramPipelines\n");
#endif
  RESOLVED_PROC(PFNGLDELETEPROGRAMPIPELINESPROC)( n_, pipelines_ );
}

static void __stdcall glGenProgramPipelinesWrapper(GLsizei n_, GLuint* pipelines_)
{
  RESOLVE(PFNGLGENPROGRAMPIPELINESPROC, "glGenProgramPipelines");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGenProgramPipelines\n");
#endif
  RESOLVED_PROC(PFNGLGENPROGRAMPIPELINESPROC)( n_, pipelines_ );
}

static GLboolean __stdcall glIsProgramPipelineWrapper(GLuint pipeline_)
{
  RESOLVE_RET(PFNGLISPROGRAMPIPELINEPROC, "glIsProgramPipeline", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIsProgramPipeline\n");
#endif
  return RESOLVED_PROC(PFNGLISPROGRAMPIPELINEPROC)( pipeline_ );
}

static void __stdcall glGetProgramPipelineivWrapper(GLuint pipeline_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETPROGRAMPIPELINEIVPROC, "glGetProgramPipelineiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetProgramPipelineiv\n");
#endif
  RESOLVED_PROC(PFNGLGETPROGRAMPIPELINEIVPROC)( pipeline_, pname_, params_ );
}

static void __stdcall glProgramUniform1iWrapper(GLuint program_, GLint location_, GLint v0_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM1IPROC, "glProgramUniform1i");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform1i\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM1IPROC)( program_, location_, v0_ );
}

static void __stdcall glProgramUniform1ivWrapper(GLuint program_, GLint location_, GLsizei count_, const GLint* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM1IVPROC, "glProgramUniform1iv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform1iv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM1IVPROC)( program_, location_, count_, value_ );
}

static void __stdcall glProgramUniform1fWrapper(GLuint program_, GLint location_, GLfloat v0_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM1FPROC, "glProgramUniform1f");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform1f\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM1FPROC)( program_, location_, v0_ );
}

static void __stdcall glProgramUniform1fvWrapper(GLuint program_, GLint location_, GLsizei count_, const GLfloat* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM1FVPROC, "glProgramUniform1fv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform1fv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM1FVPROC)( program_, location_, count_, value_ );
}

static void __stdcall glProgramUniform1dWrapper(GLuint program_, GLint location_, GLdouble v0_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM1DPROC, "glProgramUniform1d");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform1d\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM1DPROC)( program_, location_, v0_ );
}

static void __stdcall glProgramUniform1dvWrapper(GLuint program_, GLint location_, GLsizei count_, const GLdouble* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM1DVPROC, "glProgramUniform1dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform1dv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM1DVPROC)( program_, location_, count_, value_ );
}

static void __stdcall glProgramUniform1uiWrapper(GLuint program_, GLint location_, GLuint v0_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM1UIPROC, "glProgramUniform1ui");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform1ui\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM1UIPROC)( program_, location_, v0_ );
}

static void __stdcall glProgramUniform1uivWrapper(GLuint program_, GLint location_, GLsizei count_, const GLuint* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM1UIVPROC, "glProgramUniform1uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform1uiv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM1UIVPROC)( program_, location_, count_, value_ );
}

static void __stdcall glProgramUniform2iWrapper(GLuint program_, GLint location_, GLint v0_, GLint v1_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM2IPROC, "glProgramUniform2i");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform2i\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM2IPROC)( program_, location_, v0_, v1_ );
}

static void __stdcall glProgramUniform2ivWrapper(GLuint program_, GLint location_, GLsizei count_, const GLint* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM2IVPROC, "glProgramUniform2iv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform2iv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM2IVPROC)( program_, location_, count_, value_ );
}

static void __stdcall glProgramUniform2fWrapper(GLuint program_, GLint location_, GLfloat v0_, GLfloat v1_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM2FPROC, "glProgramUniform2f");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform2f\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM2FPROC)( program_, location_, v0_, v1_ );
}

static void __stdcall glProgramUniform2fvWrapper(GLuint program_, GLint location_, GLsizei count_, const GLfloat* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM2FVPROC, "glProgramUniform2fv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform2fv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM2FVPROC)( program_, location_, count_, value_ );
}

static void __stdcall glProgramUniform2dWrapper(GLuint program_, GLint location_, GLdouble v0_, GLdouble v1_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM2DPROC, "glProgramUniform2d");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform2d\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM2DPROC)( program_, location_, v0_, v1_ );
}

static void __stdcall glProgramUniform2dvWrapper(GLuint program_, GLint location_, GLsizei count_, const GLdouble* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM2DVPROC, "glProgramUniform2dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform2dv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM2DVPROC)( program_, location_, count_, value_ );
}

static void __stdcall glProgramUniform2uiWrapper(GLuint program_, GLint location_, GLuint v0_, GLuint v1_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM2UIPROC, "glProgramUniform2ui");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform2ui\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM2UIPROC)( program_, location_, v0_, v1_ );
}

static void __stdcall glProgramUniform2uivWrapper(GLuint program_, GLint location_, GLsizei count_, const GLuint* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM2UIVPROC, "glProgramUniform2uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform2uiv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM2UIVPROC)( program_, location_, count_, value_ );
}

static void __stdcall glProgramUniform3iWrapper(GLuint program_, GLint location_, GLint v0_, GLint v1_, GLint v2_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM3IPROC, "glProgramUniform3i");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform3i\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM3IPROC)( program_, location_, v0_, v1_, v2_ );
}

static void __stdcall glProgramUniform3ivWrapper(GLuint program_, GLint location_, GLsizei count_, const GLint* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM3IVPROC, "glProgramUniform3iv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform3iv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM3IVPROC)( program_, location_, count_, value_ );
}

static void __stdcall glProgramUniform3fWrapper(GLuint program_, GLint location_, GLfloat v0_, GLfloat v1_, GLfloat v2_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM3FPROC, "glProgramUniform3f");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform3f\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM3FPROC)( program_, location_, v0_, v1_, v2_ );
}

static void __stdcall glProgramUniform3fvWrapper(GLuint program_, GLint location_, GLsizei count_, const GLfloat* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM3FVPROC, "glProgramUniform3fv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform3fv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM3FVPROC)( program_, location_, count_, value_ );
}

static void __stdcall glProgramUniform3dWrapper(GLuint program_, GLint location_, GLdouble v0_, GLdouble v1_, GLdouble v2_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM3DPROC, "glProgramUniform3d");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform3d\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM3DPROC)( program_, location_, v0_, v1_, v2_ );
}

static void __stdcall glProgramUniform3dvWrapper(GLuint program_, GLint location_, GLsizei count_, const GLdouble* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM3DVPROC, "glProgramUniform3dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform3dv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM3DVPROC)( program_, location_, count_, value_ );
}

static void __stdcall glProgramUniform3uiWrapper(GLuint program_, GLint location_, GLuint v0_, GLuint v1_, GLuint v2_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM3UIPROC, "glProgramUniform3ui");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform3ui\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM3UIPROC)( program_, location_, v0_, v1_, v2_ );
}

static void __stdcall glProgramUniform3uivWrapper(GLuint program_, GLint location_, GLsizei count_, const GLuint* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM3UIVPROC, "glProgramUniform3uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform3uiv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM3UIVPROC)( program_, location_, count_, value_ );
}

static void __stdcall glProgramUniform4iWrapper(GLuint program_, GLint location_, GLint v0_, GLint v1_, GLint v2_, GLint v3_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM4IPROC, "glProgramUniform4i");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform4i\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM4IPROC)( program_, location_, v0_, v1_, v2_, v3_ );
}

static void __stdcall glProgramUniform4ivWrapper(GLuint program_, GLint location_, GLsizei count_, const GLint* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM4IVPROC, "glProgramUniform4iv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform4iv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM4IVPROC)( program_, location_, count_, value_ );
}

static void __stdcall glProgramUniform4fWrapper(GLuint program_, GLint location_, GLfloat v0_, GLfloat v1_, GLfloat v2_, GLfloat v3_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM4FPROC, "glProgramUniform4f");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform4f\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM4FPROC)( program_, location_, v0_, v1_, v2_, v3_ );
}

static void __stdcall glProgramUniform4fvWrapper(GLuint program_, GLint location_, GLsizei count_, const GLfloat* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM4FVPROC, "glProgramUniform4fv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform4fv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM4FVPROC)( program_, location_, count_, value_ );
}

static void __stdcall glProgramUniform4dWrapper(GLuint program_, GLint location_, GLdouble v0_, GLdouble v1_, GLdouble v2_, GLdouble v3_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM4DPROC, "glProgramUniform4d");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform4d\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM4DPROC)( program_, location_, v0_, v1_, v2_, v3_ );
}

static void __stdcall glProgramUniform4dvWrapper(GLuint program_, GLint location_, GLsizei count_, const GLdouble* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM4DVPROC, "glProgramUniform4dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform4dv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM4DVPROC)( program_, location_, count_, value_ );
}

static void __stdcall glProgramUniform4uiWrapper(GLuint program_, GLint location_, GLuint v0_, GLuint v1_, GLuint v2_, GLuint v3_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM4UIPROC, "glProgramUniform4ui");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform4ui\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM4UIPROC)( program_, location_, v0_, v1_, v2_, v3_ );
}

static void __stdcall glProgramUniform4uivWrapper(GLuint program_, GLint location_, GLsizei count_, const GLuint* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM4UIVPROC, "glProgramUniform4uiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform4uiv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM4UIVPROC)( program_, location_, count_, value_ );
}

static void __stdcall glProgramUniformMatrix2fvWrapper(GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORMMATRIX2FVPROC, "glProgramUniformMatrix2fv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniformMatrix2fv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORMMATRIX2FVPROC)( program_, location_, count_, transpose_, value_ );
}

static void __stdcall glProgramUniformMatrix3fvWrapper(GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORMMATRIX3FVPROC, "glProgramUniformMatrix3fv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniformMatrix3fv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORMMATRIX3FVPROC)( program_, location_, count_, transpose_, value_ );
}

static void __stdcall glProgramUniformMatrix4fvWrapper(GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORMMATRIX4FVPROC, "glProgramUniformMatrix4fv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniformMatrix4fv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORMMATRIX4FVPROC)( program_, location_, count_, transpose_, value_ );
}

static void __stdcall glProgramUniformMatrix2dvWrapper(GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORMMATRIX2DVPROC, "glProgramUniformMatrix2dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniformMatrix2dv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORMMATRIX2DVPROC)( program_, location_, count_, transpose_, value_ );
}

static void __stdcall glProgramUniformMatrix3dvWrapper(GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORMMATRIX3DVPROC, "glProgramUniformMatrix3dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniformMatrix3dv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORMMATRIX3DVPROC)( program_, location_, count_, transpose_, value_ );
}

static void __stdcall glProgramUniformMatrix4dvWrapper(GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORMMATRIX4DVPROC, "glProgramUniformMatrix4dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniformMatrix4dv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORMMATRIX4DVPROC)( program_, location_, count_, transpose_, value_ );
}

static void __stdcall glProgramUniformMatrix2x3fvWrapper(GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC, "glProgramUniformMatrix2x3fv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniformMatrix2x3fv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC)( program_, location_, count_, transpose_, value_ );
}

static void __stdcall glProgramUniformMatrix3x2fvWrapper(GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC, "glProgramUniformMatrix3x2fv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniformMatrix3x2fv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC)( program_, location_, count_, transpose_, value_ );
}

static void __stdcall glProgramUniformMatrix2x4fvWrapper(GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC, "glProgramUniformMatrix2x4fv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniformMatrix2x4fv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC)( program_, location_, count_, transpose_, value_ );
}

static void __stdcall glProgramUniformMatrix4x2fvWrapper(GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC, "glProgramUniformMatrix4x2fv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniformMatrix4x2fv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC)( program_, location_, count_, transpose_, value_ );
}

static void __stdcall glProgramUniformMatrix3x4fvWrapper(GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC, "glProgramUniformMatrix3x4fv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniformMatrix3x4fv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC)( program_, location_, count_, transpose_, value_ );
}

static void __stdcall glProgramUniformMatrix4x3fvWrapper(GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLfloat* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC, "glProgramUniformMatrix4x3fv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniformMatrix4x3fv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC)( program_, location_, count_, transpose_, value_ );
}

static void __stdcall glProgramUniformMatrix2x3dvWrapper(GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC, "glProgramUniformMatrix2x3dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniformMatrix2x3dv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC)( program_, location_, count_, transpose_, value_ );
}

static void __stdcall glProgramUniformMatrix3x2dvWrapper(GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC, "glProgramUniformMatrix3x2dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniformMatrix3x2dv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC)( program_, location_, count_, transpose_, value_ );
}

static void __stdcall glProgramUniformMatrix2x4dvWrapper(GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC, "glProgramUniformMatrix2x4dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniformMatrix2x4dv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC)( program_, location_, count_, transpose_, value_ );
}

static void __stdcall glProgramUniformMatrix4x2dvWrapper(GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC, "glProgramUniformMatrix4x2dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniformMatrix4x2dv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC)( program_, location_, count_, transpose_, value_ );
}

static void __stdcall glProgramUniformMatrix3x4dvWrapper(GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC, "glProgramUniformMatrix3x4dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniformMatrix3x4dv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC)( program_, location_, count_, transpose_, value_ );
}

static void __stdcall glProgramUniformMatrix4x3dvWrapper(GLuint program_, GLint location_, GLsizei count_, GLboolean transpose_, const GLdouble* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC, "glProgramUniformMatrix4x3dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniformMatrix4x3dv\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC)( program_, location_, count_, transpose_, value_ );
}

static void __stdcall glValidateProgramPipelineWrapper(GLuint pipeline_)
{
  RESOLVE(PFNGLVALIDATEPROGRAMPIPELINEPROC, "glValidateProgramPipeline");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glValidateProgramPipeline\n");
#endif
  RESOLVED_PROC(PFNGLVALIDATEPROGRAMPIPELINEPROC)( pipeline_ );
}

static void __stdcall glGetProgramPipelineInfoLogWrapper(GLuint pipeline_, GLsizei bufSize_, GLsizei* length_, GLchar* infoLog_)
{
  RESOLVE(PFNGLGETPROGRAMPIPELINEINFOLOGPROC, "glGetProgramPipelineInfoLog");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetProgramPipelineInfoLog\n");
#endif
  RESOLVED_PROC(PFNGLGETPROGRAMPIPELINEINFOLOGPROC)( pipeline_, bufSize_, length_, infoLog_ );
}

static void __stdcall glVertexAttribL1dWrapper(GLuint index_, GLdouble x_)
{
  RESOLVE(PFNGLVERTEXATTRIBL1DPROC, "glVertexAttribL1d");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribL1d\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBL1DPROC)( index_, x_ );
}

static void __stdcall glVertexAttribL2dWrapper(GLuint index_, GLdouble x_, GLdouble y_)
{
  RESOLVE(PFNGLVERTEXATTRIBL2DPROC, "glVertexAttribL2d");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribL2d\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBL2DPROC)( index_, x_, y_ );
}

static void __stdcall glVertexAttribL3dWrapper(GLuint index_, GLdouble x_, GLdouble y_, GLdouble z_)
{
  RESOLVE(PFNGLVERTEXATTRIBL3DPROC, "glVertexAttribL3d");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribL3d\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBL3DPROC)( index_, x_, y_, z_ );
}

static void __stdcall glVertexAttribL4dWrapper(GLuint index_, GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_)
{
  RESOLVE(PFNGLVERTEXATTRIBL4DPROC, "glVertexAttribL4d");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribL4d\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBL4DPROC)( index_, x_, y_, z_, w_ );
}

static void __stdcall glVertexAttribL1dvWrapper(GLuint index_, const GLdouble* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBL1DVPROC, "glVertexAttribL1dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribL1dv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBL1DVPROC)( index_, v_ );
}

static void __stdcall glVertexAttribL2dvWrapper(GLuint index_, const GLdouble* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBL2DVPROC, "glVertexAttribL2dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribL2dv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBL2DVPROC)( index_, v_ );
}

static void __stdcall glVertexAttribL3dvWrapper(GLuint index_, const GLdouble* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBL3DVPROC, "glVertexAttribL3dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribL3dv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBL3DVPROC)( index_, v_ );
}

static void __stdcall glVertexAttribL4dvWrapper(GLuint index_, const GLdouble* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBL4DVPROC, "glVertexAttribL4dv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribL4dv\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBL4DVPROC)( index_, v_ );
}

static void __stdcall glVertexAttribLPointerWrapper(GLuint index_, GLint size_, GLenum type_, GLsizei stride_, const void * pointer_)
{
  RESOLVE(PFNGLVERTEXATTRIBLPOINTERPROC, "glVertexAttribLPointer");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribLPointer\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBLPOINTERPROC)( index_, size_, type_, stride_, pointer_ );
}

static void __stdcall glGetVertexAttribLdvWrapper(GLuint index_, GLenum pname_, GLdouble* params_)
{
  RESOLVE(PFNGLGETVERTEXATTRIBLDVPROC, "glGetVertexAttribLdv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetVertexAttribLdv\n");
#endif
  RESOLVED_PROC(PFNGLGETVERTEXATTRIBLDVPROC)( index_, pname_, params_ );
}

static void __stdcall glViewportArrayvWrapper(GLuint first_, GLsizei count_, const GLfloat* v_)
{
  RESOLVE(PFNGLVIEWPORTARRAYVPROC, "glViewportArrayv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glViewportArrayv\n");
#endif
  RESOLVED_PROC(PFNGLVIEWPORTARRAYVPROC)( first_, count_, v_ );
}

static void __stdcall glViewportIndexedfWrapper(GLuint index_, GLfloat x_, GLfloat y_, GLfloat w_, GLfloat h_)
{
  RESOLVE(PFNGLVIEWPORTINDEXEDFPROC, "glViewportIndexedf");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glViewportIndexedf\n");
#endif
  RESOLVED_PROC(PFNGLVIEWPORTINDEXEDFPROC)( index_, x_, y_, w_, h_ );
}

static void __stdcall glViewportIndexedfvWrapper(GLuint index_, const GLfloat* v_)
{
  RESOLVE(PFNGLVIEWPORTINDEXEDFVPROC, "glViewportIndexedfv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glViewportIndexedfv\n");
#endif
  RESOLVED_PROC(PFNGLVIEWPORTINDEXEDFVPROC)( index_, v_ );
}

static void __stdcall glScissorArrayvWrapper(GLuint first_, GLsizei count_, const GLint* v_)
{
  RESOLVE(PFNGLSCISSORARRAYVPROC, "glScissorArrayv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glScissorArrayv\n");
#endif
  RESOLVED_PROC(PFNGLSCISSORARRAYVPROC)( first_, count_, v_ );
}

static void __stdcall glScissorIndexedWrapper(GLuint index_, GLint left_, GLint bottom_, GLsizei width_, GLsizei height_)
{
  RESOLVE(PFNGLSCISSORINDEXEDPROC, "glScissorIndexed");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glScissorIndexed\n");
#endif
  RESOLVED_PROC(PFNGLSCISSORINDEXEDPROC)( index_, left_, bottom_, width_, height_ );
}

static void __stdcall glScissorIndexedvWrapper(GLuint index_, const GLint* v_)
{
  RESOLVE(PFNGLSCISSORINDEXEDVPROC, "glScissorIndexedv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glScissorIndexedv\n");
#endif
  RESOLVED_PROC(PFNGLSCISSORINDEXEDVPROC)( index_, v_ );
}

static void __stdcall glDepthRangeArrayvWrapper(GLuint first_, GLsizei count_, const GLdouble* v_)
{
  RESOLVE(PFNGLDEPTHRANGEARRAYVPROC, "glDepthRangeArrayv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDepthRangeArrayv\n");
#endif
  RESOLVED_PROC(PFNGLDEPTHRANGEARRAYVPROC)( first_, count_, v_ );
}

static void __stdcall glDepthRangeIndexedWrapper(GLuint index_, GLdouble n_, GLdouble f_)
{
  RESOLVE(PFNGLDEPTHRANGEINDEXEDPROC, "glDepthRangeIndexed");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDepthRangeIndexed\n");
#endif
  RESOLVED_PROC(PFNGLDEPTHRANGEINDEXEDPROC)( index_, n_, f_ );
}

static void __stdcall glGetFloati_vWrapper(GLenum target_, GLuint index_, GLfloat* data_)
{
  RESOLVE(PFNGLGETFLOATI_VPROC, "glGetFloati_v");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetFloati_v\n");
#endif
  RESOLVED_PROC(PFNGLGETFLOATI_VPROC)( target_, index_, data_ );
}

static void __stdcall glGetDoublei_vWrapper(GLenum target_, GLuint index_, GLdouble* data_)
{
  RESOLVE(PFNGLGETDOUBLEI_VPROC, "glGetDoublei_v");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetDoublei_v\n");
#endif
  RESOLVED_PROC(PFNGLGETDOUBLEI_VPROC)( target_, index_, data_ );
}

static void __stdcall glDrawArraysInstancedBaseInstanceWrapper(GLenum mode_, GLint first_, GLsizei count_, GLsizei instancecount_, GLuint baseinstance_)
{
  RESOLVE(PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC, "glDrawArraysInstancedBaseInstance");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDrawArraysInstancedBaseInstance\n");
#endif
  RESOLVED_PROC(PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC)( mode_, first_, count_, instancecount_, baseinstance_ );
}

static void __stdcall glDrawElementsInstancedBaseInstanceWrapper(GLenum mode_, GLsizei count_, GLenum type_, const void * indices_, GLsizei instancecount_, GLuint baseinstance_)
{
  RESOLVE(PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC, "glDrawElementsInstancedBaseInstance");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDrawElementsInstancedBaseInstance\n");
#endif
  RESOLVED_PROC(PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC)( mode_, count_, type_, indices_, instancecount_, baseinstance_ );
}

static void __stdcall glDrawElementsInstancedBaseVertexBaseInstanceWrapper(GLenum mode_, GLsizei count_, GLenum type_, const void * indices_, GLsizei instancecount_, GLint basevertex_, GLuint baseinstance_)
{
  RESOLVE(PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC, "glDrawElementsInstancedBaseVertexBaseInstance");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDrawElementsInstancedBaseVertexBaseInstance\n");
#endif
  RESOLVED_PROC(PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC)( mode_, count_, type_, indices_, instancecount_, basevertex_, baseinstance_ );
}

static void __stdcall glGetInternalformativWrapper(GLenum target_, GLenum internalformat_, GLenum pname_, GLsizei count_, GLint* params_)
{
  RESOLVE(PFNGLGETINTERNALFORMATIVPROC, "glGetInternalformativ");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetInternalformativ\n");
#endif
  RESOLVED_PROC(PFNGLGETINTERNALFORMATIVPROC)( target_, internalformat_, pname_, count_, params_ );
}

static void __stdcall glGetActiveAtomicCounterBufferivWrapper(GLuint program_, GLuint bufferIndex_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC, "glGetActiveAtomicCounterBufferiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetActiveAtomicCounterBufferiv\n");
#endif
  RESOLVED_PROC(PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC)( program_, bufferIndex_, pname_, params_ );
}

static void __stdcall glBindImageTextureWrapper(GLuint unit_, GLuint texture_, GLint level_, GLboolean layered_, GLint layer_, GLenum access_, GLenum format_)
{
  RESOLVE(PFNGLBINDIMAGETEXTUREPROC, "glBindImageTexture");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindImageTexture\n");
#endif
  RESOLVED_PROC(PFNGLBINDIMAGETEXTUREPROC)( unit_, texture_, level_, layered_, layer_, access_, format_ );
}

static void __stdcall glMemoryBarrierWrapper(GLbitfield barriers_)
{
  RESOLVE(PFNGLMEMORYBARRIERPROC, "glMemoryBarrier");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMemoryBarrier\n");
#endif
  RESOLVED_PROC(PFNGLMEMORYBARRIERPROC)( barriers_ );
}

static void __stdcall glTexStorage1DWrapper(GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_)
{
  RESOLVE(PFNGLTEXSTORAGE1DPROC, "glTexStorage1D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexStorage1D\n");
#endif
  RESOLVED_PROC(PFNGLTEXSTORAGE1DPROC)( target_, levels_, internalformat_, width_ );
}

static void __stdcall glTexStorage2DWrapper(GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_)
{
  RESOLVE(PFNGLTEXSTORAGE2DPROC, "glTexStorage2D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexStorage2D\n");
#endif
  RESOLVED_PROC(PFNGLTEXSTORAGE2DPROC)( target_, levels_, internalformat_, width_, height_ );
}

static void __stdcall glTexStorage3DWrapper(GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_)
{
  RESOLVE(PFNGLTEXSTORAGE3DPROC, "glTexStorage3D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexStorage3D\n");
#endif
  RESOLVED_PROC(PFNGLTEXSTORAGE3DPROC)( target_, levels_, internalformat_, width_, height_, depth_ );
}

static void __stdcall glDrawTransformFeedbackInstancedWrapper(GLenum mode_, GLuint id_, GLsizei instancecount_)
{
  RESOLVE(PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC, "glDrawTransformFeedbackInstanced");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDrawTransformFeedbackInstanced\n");
#endif
  RESOLVED_PROC(PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC)( mode_, id_, instancecount_ );
}

static void __stdcall glDrawTransformFeedbackStreamInstancedWrapper(GLenum mode_, GLuint id_, GLuint stream_, GLsizei instancecount_)
{
  RESOLVE(PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC, "glDrawTransformFeedbackStreamInstanced");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDrawTransformFeedbackStreamInstanced\n");
#endif
  RESOLVED_PROC(PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC)( mode_, id_, stream_, instancecount_ );
}

static void __stdcall glClearBufferDataWrapper(GLenum target_, GLenum internalformat_, GLenum format_, GLenum type_, const void * data_)
{
  RESOLVE(PFNGLCLEARBUFFERDATAPROC, "glClearBufferData");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClearBufferData\n");
#endif
  RESOLVED_PROC(PFNGLCLEARBUFFERDATAPROC)( target_, internalformat_, format_, type_, data_ );
}

static void __stdcall glClearBufferSubDataWrapper(GLenum target_, GLenum internalformat_, GLintptr offset_, GLsizeiptr size_, GLenum format_, GLenum type_, const void * data_)
{
  RESOLVE(PFNGLCLEARBUFFERSUBDATAPROC, "glClearBufferSubData");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClearBufferSubData\n");
#endif
  RESOLVED_PROC(PFNGLCLEARBUFFERSUBDATAPROC)( target_, internalformat_, offset_, size_, format_, type_, data_ );
}

static void __stdcall glDispatchComputeWrapper(GLuint num_groups_x_, GLuint num_groups_y_, GLuint num_groups_z_)
{
  RESOLVE(PFNGLDISPATCHCOMPUTEPROC, "glDispatchCompute");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDispatchCompute\n");
#endif
  RESOLVED_PROC(PFNGLDISPATCHCOMPUTEPROC)( num_groups_x_, num_groups_y_, num_groups_z_ );
}

static void __stdcall glDispatchComputeIndirectWrapper(GLintptr indirect_)
{
  RESOLVE(PFNGLDISPATCHCOMPUTEINDIRECTPROC, "glDispatchComputeIndirect");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDispatchComputeIndirect\n");
#endif
  RESOLVED_PROC(PFNGLDISPATCHCOMPUTEINDIRECTPROC)( indirect_ );
}

static void __stdcall glCopyImageSubDataWrapper(GLuint srcName_, GLenum srcTarget_, GLint srcLevel_, GLint srcX_, GLint srcY_, GLint srcZ_, GLuint dstName_, GLenum dstTarget_, GLint dstLevel_, GLint dstX_, GLint dstY_, GLint dstZ_, GLsizei srcWidth_, GLsizei srcHeight_, GLsizei srcDepth_)
{
  RESOLVE(PFNGLCOPYIMAGESUBDATAPROC, "glCopyImageSubData");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCopyImageSubData\n");
#endif
  RESOLVED_PROC(PFNGLCOPYIMAGESUBDATAPROC)( srcName_, srcTarget_, srcLevel_, srcX_, srcY_, srcZ_, dstName_, dstTarget_, dstLevel_, dstX_, dstY_, dstZ_, srcWidth_, srcHeight_, srcDepth_ );
}

static void __stdcall glFramebufferParameteriWrapper(GLenum target_, GLenum pname_, GLint param_)
{
  RESOLVE(PFNGLFRAMEBUFFERPARAMETERIPROC, "glFramebufferParameteri");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFramebufferParameteri\n");
#endif
  RESOLVED_PROC(PFNGLFRAMEBUFFERPARAMETERIPROC)( target_, pname_, param_ );
}

static void __stdcall glGetFramebufferParameterivWrapper(GLenum target_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETFRAMEBUFFERPARAMETERIVPROC, "glGetFramebufferParameteriv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetFramebufferParameteriv\n");
#endif
  RESOLVED_PROC(PFNGLGETFRAMEBUFFERPARAMETERIVPROC)( target_, pname_, params_ );
}

static void __stdcall glGetInternalformati64vWrapper(GLenum target_, GLenum internalformat_, GLenum pname_, GLsizei count_, GLint64* params_)
{
  RESOLVE(PFNGLGETINTERNALFORMATI64VPROC, "glGetInternalformati64v");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetInternalformati64v\n");
#endif
  RESOLVED_PROC(PFNGLGETINTERNALFORMATI64VPROC)( target_, internalformat_, pname_, count_, params_ );
}

static void __stdcall glInvalidateTexSubImageWrapper(GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_)
{
  RESOLVE(PFNGLINVALIDATETEXSUBIMAGEPROC, "glInvalidateTexSubImage");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glInvalidateTexSubImage\n");
#endif
  RESOLVED_PROC(PFNGLINVALIDATETEXSUBIMAGEPROC)( texture_, level_, xoffset_, yoffset_, zoffset_, width_, height_, depth_ );
}

static void __stdcall glInvalidateTexImageWrapper(GLuint texture_, GLint level_)
{
  RESOLVE(PFNGLINVALIDATETEXIMAGEPROC, "glInvalidateTexImage");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glInvalidateTexImage\n");
#endif
  RESOLVED_PROC(PFNGLINVALIDATETEXIMAGEPROC)( texture_, level_ );
}

static void __stdcall glInvalidateBufferSubDataWrapper(GLuint buffer_, GLintptr offset_, GLsizeiptr length_)
{
  RESOLVE(PFNGLINVALIDATEBUFFERSUBDATAPROC, "glInvalidateBufferSubData");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glInvalidateBufferSubData\n");
#endif
  RESOLVED_PROC(PFNGLINVALIDATEBUFFERSUBDATAPROC)( buffer_, offset_, length_ );
}

static void __stdcall glInvalidateBufferDataWrapper(GLuint buffer_)
{
  RESOLVE(PFNGLINVALIDATEBUFFERDATAPROC, "glInvalidateBufferData");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glInvalidateBufferData\n");
#endif
  RESOLVED_PROC(PFNGLINVALIDATEBUFFERDATAPROC)( buffer_ );
}

static void __stdcall glInvalidateFramebufferWrapper(GLenum target_, GLsizei numAttachments_, const GLenum* attachments_)
{
  RESOLVE(PFNGLINVALIDATEFRAMEBUFFERPROC, "glInvalidateFramebuffer");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glInvalidateFramebuffer\n");
#endif
  RESOLVED_PROC(PFNGLINVALIDATEFRAMEBUFFERPROC)( target_, numAttachments_, attachments_ );
}

static void __stdcall glInvalidateSubFramebufferWrapper(GLenum target_, GLsizei numAttachments_, const GLenum* attachments_, GLint x_, GLint y_, GLsizei width_, GLsizei height_)
{
  RESOLVE(PFNGLINVALIDATESUBFRAMEBUFFERPROC, "glInvalidateSubFramebuffer");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glInvalidateSubFramebuffer\n");
#endif
  RESOLVED_PROC(PFNGLINVALIDATESUBFRAMEBUFFERPROC)( target_, numAttachments_, attachments_, x_, y_, width_, height_ );
}

static void __stdcall glMultiDrawArraysIndirectWrapper(GLenum mode_, const void * indirect_, GLsizei drawcount_, GLsizei stride_)
{
  RESOLVE(PFNGLMULTIDRAWARRAYSINDIRECTPROC, "glMultiDrawArraysIndirect");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiDrawArraysIndirect\n");
#endif
  RESOLVED_PROC(PFNGLMULTIDRAWARRAYSINDIRECTPROC)( mode_, indirect_, drawcount_, stride_ );
}

static void __stdcall glMultiDrawElementsIndirectWrapper(GLenum mode_, GLenum type_, const void * indirect_, GLsizei drawcount_, GLsizei stride_)
{
  RESOLVE(PFNGLMULTIDRAWELEMENTSINDIRECTPROC, "glMultiDrawElementsIndirect");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiDrawElementsIndirect\n");
#endif
  RESOLVED_PROC(PFNGLMULTIDRAWELEMENTSINDIRECTPROC)( mode_, type_, indirect_, drawcount_, stride_ );
}

static void __stdcall glGetProgramInterfaceivWrapper(GLuint program_, GLenum programInterface_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETPROGRAMINTERFACEIVPROC, "glGetProgramInterfaceiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetProgramInterfaceiv\n");
#endif
  RESOLVED_PROC(PFNGLGETPROGRAMINTERFACEIVPROC)( program_, programInterface_, pname_, params_ );
}

static GLuint __stdcall glGetProgramResourceIndexWrapper(GLuint program_, GLenum programInterface_, const GLchar* name_)
{
  RESOLVE_RET(PFNGLGETPROGRAMRESOURCEINDEXPROC, "glGetProgramResourceIndex", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetProgramResourceIndex\n");
#endif
  return RESOLVED_PROC(PFNGLGETPROGRAMRESOURCEINDEXPROC)( program_, programInterface_, name_ );
}

static void __stdcall glGetProgramResourceNameWrapper(GLuint program_, GLenum programInterface_, GLuint index_, GLsizei bufSize_, GLsizei* length_, GLchar* name_)
{
  RESOLVE(PFNGLGETPROGRAMRESOURCENAMEPROC, "glGetProgramResourceName");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetProgramResourceName\n");
#endif
  RESOLVED_PROC(PFNGLGETPROGRAMRESOURCENAMEPROC)( program_, programInterface_, index_, bufSize_, length_, name_ );
}

static void __stdcall glGetProgramResourceivWrapper(GLuint program_, GLenum programInterface_, GLuint index_, GLsizei propCount_, const GLenum* props_, GLsizei count_, GLsizei* length_, GLint* params_)
{
  RESOLVE(PFNGLGETPROGRAMRESOURCEIVPROC, "glGetProgramResourceiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetProgramResourceiv\n");
#endif
  RESOLVED_PROC(PFNGLGETPROGRAMRESOURCEIVPROC)( program_, programInterface_, index_, propCount_, props_, count_, length_, params_ );
}

static GLint __stdcall glGetProgramResourceLocationWrapper(GLuint program_, GLenum programInterface_, const GLchar* name_)
{
  RESOLVE_RET(PFNGLGETPROGRAMRESOURCELOCATIONPROC, "glGetProgramResourceLocation", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetProgramResourceLocation\n");
#endif
  return RESOLVED_PROC(PFNGLGETPROGRAMRESOURCELOCATIONPROC)( program_, programInterface_, name_ );
}

static GLint __stdcall glGetProgramResourceLocationIndexWrapper(GLuint program_, GLenum programInterface_, const GLchar* name_)
{
  RESOLVE_RET(PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC, "glGetProgramResourceLocationIndex", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetProgramResourceLocationIndex\n");
#endif
  return RESOLVED_PROC(PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC)( program_, programInterface_, name_ );
}

static void __stdcall glShaderStorageBlockBindingWrapper(GLuint program_, GLuint storageBlockIndex_, GLuint storageBlockBinding_)
{
  RESOLVE(PFNGLSHADERSTORAGEBLOCKBINDINGPROC, "glShaderStorageBlockBinding");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glShaderStorageBlockBinding\n");
#endif
  RESOLVED_PROC(PFNGLSHADERSTORAGEBLOCKBINDINGPROC)( program_, storageBlockIndex_, storageBlockBinding_ );
}

static void __stdcall glTexBufferRangeWrapper(GLenum target_, GLenum internalformat_, GLuint buffer_, GLintptr offset_, GLsizeiptr size_)
{
  RESOLVE(PFNGLTEXBUFFERRANGEPROC, "glTexBufferRange");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexBufferRange\n");
#endif
  RESOLVED_PROC(PFNGLTEXBUFFERRANGEPROC)( target_, internalformat_, buffer_, offset_, size_ );
}

static void __stdcall glTexStorage2DMultisampleWrapper(GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLboolean fixedsamplelocations_)
{
  RESOLVE(PFNGLTEXSTORAGE2DMULTISAMPLEPROC, "glTexStorage2DMultisample");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexStorage2DMultisample\n");
#endif
  RESOLVED_PROC(PFNGLTEXSTORAGE2DMULTISAMPLEPROC)( target_, samples_, internalformat_, width_, height_, fixedsamplelocations_ );
}

static void __stdcall glTexStorage3DMultisampleWrapper(GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLboolean fixedsamplelocations_)
{
  RESOLVE(PFNGLTEXSTORAGE3DMULTISAMPLEPROC, "glTexStorage3DMultisample");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexStorage3DMultisample\n");
#endif
  RESOLVED_PROC(PFNGLTEXSTORAGE3DMULTISAMPLEPROC)( target_, samples_, internalformat_, width_, height_, depth_, fixedsamplelocations_ );
}

static void __stdcall glTextureViewWrapper(GLuint texture_, GLenum target_, GLuint origtexture_, GLenum internalformat_, GLuint minlevel_, GLuint numlevels_, GLuint minlayer_, GLuint numlayers_)
{
  RESOLVE(PFNGLTEXTUREVIEWPROC, "glTextureView");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureView\n");
#endif
  RESOLVED_PROC(PFNGLTEXTUREVIEWPROC)( texture_, target_, origtexture_, internalformat_, minlevel_, numlevels_, minlayer_, numlayers_ );
}

static void __stdcall glBindVertexBufferWrapper(GLuint bindingindex_, GLuint buffer_, GLintptr offset_, GLsizei stride_)
{
  RESOLVE(PFNGLBINDVERTEXBUFFERPROC, "glBindVertexBuffer");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindVertexBuffer\n");
#endif
  RESOLVED_PROC(PFNGLBINDVERTEXBUFFERPROC)( bindingindex_, buffer_, offset_, stride_ );
}

static void __stdcall glVertexAttribFormatWrapper(GLuint attribindex_, GLint size_, GLenum type_, GLboolean normalized_, GLuint relativeoffset_)
{
  RESOLVE(PFNGLVERTEXATTRIBFORMATPROC, "glVertexAttribFormat");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribFormat\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBFORMATPROC)( attribindex_, size_, type_, normalized_, relativeoffset_ );
}

static void __stdcall glVertexAttribIFormatWrapper(GLuint attribindex_, GLint size_, GLenum type_, GLuint relativeoffset_)
{
  RESOLVE(PFNGLVERTEXATTRIBIFORMATPROC, "glVertexAttribIFormat");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribIFormat\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBIFORMATPROC)( attribindex_, size_, type_, relativeoffset_ );
}

static void __stdcall glVertexAttribLFormatWrapper(GLuint attribindex_, GLint size_, GLenum type_, GLuint relativeoffset_)
{
  RESOLVE(PFNGLVERTEXATTRIBLFORMATPROC, "glVertexAttribLFormat");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribLFormat\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBLFORMATPROC)( attribindex_, size_, type_, relativeoffset_ );
}

static void __stdcall glVertexAttribBindingWrapper(GLuint attribindex_, GLuint bindingindex_)
{
  RESOLVE(PFNGLVERTEXATTRIBBINDINGPROC, "glVertexAttribBinding");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribBinding\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBBINDINGPROC)( attribindex_, bindingindex_ );
}

static void __stdcall glVertexBindingDivisorWrapper(GLuint bindingindex_, GLuint divisor_)
{
  RESOLVE(PFNGLVERTEXBINDINGDIVISORPROC, "glVertexBindingDivisor");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexBindingDivisor\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXBINDINGDIVISORPROC)( bindingindex_, divisor_ );
}

static void __stdcall glDebugMessageControlWrapper(GLenum source_, GLenum type_, GLenum severity_, GLsizei count_, const GLuint* ids_, GLboolean enabled_)
{
  RESOLVE(PFNGLDEBUGMESSAGECONTROLPROC, "glDebugMessageControl");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDebugMessageControl\n");
#endif
  RESOLVED_PROC(PFNGLDEBUGMESSAGECONTROLPROC)( source_, type_, severity_, count_, ids_, enabled_ );
}

static void __stdcall glDebugMessageInsertWrapper(GLenum source_, GLenum type_, GLuint id_, GLenum severity_, GLsizei length_, const GLchar* buf_)
{
  RESOLVE(PFNGLDEBUGMESSAGEINSERTPROC, "glDebugMessageInsert");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDebugMessageInsert\n");
#endif
  RESOLVED_PROC(PFNGLDEBUGMESSAGEINSERTPROC)( source_, type_, id_, severity_, length_, buf_ );
}

static void __stdcall glDebugMessageCallbackWrapper(GLDEBUGPROC callback_, const void * userParam_)
{
  RESOLVE(PFNGLDEBUGMESSAGECALLBACKPROC, "glDebugMessageCallback");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDebugMessageCallback\n");
#endif
  RESOLVED_PROC(PFNGLDEBUGMESSAGECALLBACKPROC)( callback_, userParam_ );
}

static GLuint __stdcall glGetDebugMessageLogWrapper(GLuint count_, GLsizei bufSize_, GLenum* sources_, GLenum* types_, GLuint* ids_, GLenum* severities_, GLsizei* lengths_, GLchar* messageLog_)
{
  RESOLVE_RET(PFNGLGETDEBUGMESSAGELOGPROC, "glGetDebugMessageLog", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetDebugMessageLog\n");
#endif
  return RESOLVED_PROC(PFNGLGETDEBUGMESSAGELOGPROC)( count_, bufSize_, sources_, types_, ids_, severities_, lengths_, messageLog_ );
}

static void __stdcall glPushDebugGroupWrapper(GLenum source_, GLuint id_, GLsizei length_, const GLchar* message_)
{
  RESOLVE(PFNGLPUSHDEBUGGROUPPROC, "glPushDebugGroup");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPushDebugGroup\n");
#endif
  RESOLVED_PROC(PFNGLPUSHDEBUGGROUPPROC)( source_, id_, length_, message_ );
}

static void __stdcall glPopDebugGroupWrapper(void)
{
  RESOLVE(PFNGLPOPDEBUGGROUPPROC, "glPopDebugGroup");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPopDebugGroup\n");
#endif
  RESOLVED_PROC(PFNGLPOPDEBUGGROUPPROC)(  );
}

static void __stdcall glObjectLabelWrapper(GLenum identifier_, GLuint name_, GLsizei length_, const GLchar* label_)
{
  RESOLVE(PFNGLOBJECTLABELPROC, "glObjectLabel");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glObjectLabel\n");
#endif
  RESOLVED_PROC(PFNGLOBJECTLABELPROC)( identifier_, name_, length_, label_ );
}

static void __stdcall glGetObjectLabelWrapper(GLenum identifier_, GLuint name_, GLsizei bufSize_, GLsizei* length_, GLchar* label_)
{
  RESOLVE(PFNGLGETOBJECTLABELPROC, "glGetObjectLabel");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetObjectLabel\n");
#endif
  RESOLVED_PROC(PFNGLGETOBJECTLABELPROC)( identifier_, name_, bufSize_, length_, label_ );
}

static void __stdcall glObjectPtrLabelWrapper(const void * ptr_, GLsizei length_, const GLchar* label_)
{
  RESOLVE(PFNGLOBJECTPTRLABELPROC, "glObjectPtrLabel");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glObjectPtrLabel\n");
#endif
  RESOLVED_PROC(PFNGLOBJECTPTRLABELPROC)( ptr_, length_, label_ );
}

static void __stdcall glGetObjectPtrLabelWrapper(const void * ptr_, GLsizei bufSize_, GLsizei* length_, GLchar* label_)
{
  RESOLVE(PFNGLGETOBJECTPTRLABELPROC, "glGetObjectPtrLabel");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetObjectPtrLabel\n");
#endif
  RESOLVED_PROC(PFNGLGETOBJECTPTRLABELPROC)( ptr_, bufSize_, length_, label_ );
}

static void __stdcall glBufferStorageWrapper(GLenum target_, GLsizeiptr size_, const void * data_, GLbitfield flags_)
{
  RESOLVE(PFNGLBUFFERSTORAGEPROC, "glBufferStorage");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBufferStorage\n");
#endif
  RESOLVED_PROC(PFNGLBUFFERSTORAGEPROC)( target_, size_, data_, flags_ );
}

static void __stdcall glClearTexImageWrapper(GLuint texture_, GLint level_, GLenum format_, GLenum type_, const void * data_)
{
  RESOLVE(PFNGLCLEARTEXIMAGEPROC, "glClearTexImage");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClearTexImage\n");
#endif
  RESOLVED_PROC(PFNGLCLEARTEXIMAGEPROC)( texture_, level_, format_, type_, data_ );
}

static void __stdcall glClearTexSubImageWrapper(GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLenum type_, const void * data_)
{
  RESOLVE(PFNGLCLEARTEXSUBIMAGEPROC, "glClearTexSubImage");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClearTexSubImage\n");
#endif
  RESOLVED_PROC(PFNGLCLEARTEXSUBIMAGEPROC)( texture_, level_, xoffset_, yoffset_, zoffset_, width_, height_, depth_, format_, type_, data_ );
}

static void __stdcall glBindBuffersBaseWrapper(GLenum target_, GLuint first_, GLsizei count_, const GLuint* buffers_)
{
  RESOLVE(PFNGLBINDBUFFERSBASEPROC, "glBindBuffersBase");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindBuffersBase\n");
#endif
  RESOLVED_PROC(PFNGLBINDBUFFERSBASEPROC)( target_, first_, count_, buffers_ );
}

static void __stdcall glBindBuffersRangeWrapper(GLenum target_, GLuint first_, GLsizei count_, const GLuint* buffers_, const GLintptr* offsets_, const GLsizeiptr* sizes_)
{
  RESOLVE(PFNGLBINDBUFFERSRANGEPROC, "glBindBuffersRange");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindBuffersRange\n");
#endif
  RESOLVED_PROC(PFNGLBINDBUFFERSRANGEPROC)( target_, first_, count_, buffers_, offsets_, sizes_ );
}

static void __stdcall glBindTexturesWrapper(GLuint first_, GLsizei count_, const GLuint* textures_)
{
  RESOLVE(PFNGLBINDTEXTURESPROC, "glBindTextures");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindTextures\n");
#endif
  RESOLVED_PROC(PFNGLBINDTEXTURESPROC)( first_, count_, textures_ );
}

static void __stdcall glBindSamplersWrapper(GLuint first_, GLsizei count_, const GLuint* samplers_)
{
  RESOLVE(PFNGLBINDSAMPLERSPROC, "glBindSamplers");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindSamplers\n");
#endif
  RESOLVED_PROC(PFNGLBINDSAMPLERSPROC)( first_, count_, samplers_ );
}

static void __stdcall glBindImageTexturesWrapper(GLuint first_, GLsizei count_, const GLuint* textures_)
{
  RESOLVE(PFNGLBINDIMAGETEXTURESPROC, "glBindImageTextures");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindImageTextures\n");
#endif
  RESOLVED_PROC(PFNGLBINDIMAGETEXTURESPROC)( first_, count_, textures_ );
}

static void __stdcall glBindVertexBuffersWrapper(GLuint first_, GLsizei count_, const GLuint* buffers_, const GLintptr* offsets_, const GLsizei* strides_)
{
  RESOLVE(PFNGLBINDVERTEXBUFFERSPROC, "glBindVertexBuffers");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindVertexBuffers\n");
#endif
  RESOLVED_PROC(PFNGLBINDVERTEXBUFFERSPROC)( first_, count_, buffers_, offsets_, strides_ );
}

static void __stdcall glClipControlWrapper(GLenum origin_, GLenum depth_)
{
  RESOLVE(PFNGLCLIPCONTROLPROC, "glClipControl");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClipControl\n");
#endif
  RESOLVED_PROC(PFNGLCLIPCONTROLPROC)( origin_, depth_ );
}

static void __stdcall glCreateTransformFeedbacksWrapper(GLsizei n_, GLuint* ids_)
{
  RESOLVE(PFNGLCREATETRANSFORMFEEDBACKSPROC, "glCreateTransformFeedbacks");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCreateTransformFeedbacks\n");
#endif
  RESOLVED_PROC(PFNGLCREATETRANSFORMFEEDBACKSPROC)( n_, ids_ );
}

static void __stdcall glTransformFeedbackBufferBaseWrapper(GLuint xfb_, GLuint index_, GLuint buffer_)
{
  RESOLVE(PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC, "glTransformFeedbackBufferBase");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTransformFeedbackBufferBase\n");
#endif
  RESOLVED_PROC(PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC)( xfb_, index_, buffer_ );
}

static void __stdcall glTransformFeedbackBufferRangeWrapper(GLuint xfb_, GLuint index_, GLuint buffer_, GLintptr offset_, GLsizeiptr size_)
{
  RESOLVE(PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC, "glTransformFeedbackBufferRange");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTransformFeedbackBufferRange\n");
#endif
  RESOLVED_PROC(PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC)( xfb_, index_, buffer_, offset_, size_ );
}

static void __stdcall glGetTransformFeedbackivWrapper(GLuint xfb_, GLenum pname_, GLint* param_)
{
  RESOLVE(PFNGLGETTRANSFORMFEEDBACKIVPROC, "glGetTransformFeedbackiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTransformFeedbackiv\n");
#endif
  RESOLVED_PROC(PFNGLGETTRANSFORMFEEDBACKIVPROC)( xfb_, pname_, param_ );
}

static void __stdcall glGetTransformFeedbacki_vWrapper(GLuint xfb_, GLenum pname_, GLuint index_, GLint* param_)
{
  RESOLVE(PFNGLGETTRANSFORMFEEDBACKI_VPROC, "glGetTransformFeedbacki_v");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTransformFeedbacki_v\n");
#endif
  RESOLVED_PROC(PFNGLGETTRANSFORMFEEDBACKI_VPROC)( xfb_, pname_, index_, param_ );
}

static void __stdcall glGetTransformFeedbacki64_vWrapper(GLuint xfb_, GLenum pname_, GLuint index_, GLint64* param_)
{
  RESOLVE(PFNGLGETTRANSFORMFEEDBACKI64_VPROC, "glGetTransformFeedbacki64_v");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTransformFeedbacki64_v\n");
#endif
  RESOLVED_PROC(PFNGLGETTRANSFORMFEEDBACKI64_VPROC)( xfb_, pname_, index_, param_ );
}

static void __stdcall glCreateBuffersWrapper(GLsizei n_, GLuint* buffers_)
{
  RESOLVE(PFNGLCREATEBUFFERSPROC, "glCreateBuffers");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCreateBuffers\n");
#endif
  RESOLVED_PROC(PFNGLCREATEBUFFERSPROC)( n_, buffers_ );
}

static void __stdcall glNamedBufferStorageWrapper(GLuint buffer_, GLsizeiptr size_, const void * data_, GLbitfield flags_)
{
  RESOLVE(PFNGLNAMEDBUFFERSTORAGEPROC, "glNamedBufferStorage");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedBufferStorage\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDBUFFERSTORAGEPROC)( buffer_, size_, data_, flags_ );
}

static void __stdcall glNamedBufferDataWrapper(GLuint buffer_, GLsizeiptr size_, const void * data_, GLenum usage_)
{
  RESOLVE(PFNGLNAMEDBUFFERDATAPROC, "glNamedBufferData");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedBufferData\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDBUFFERDATAPROC)( buffer_, size_, data_, usage_ );
}

static void __stdcall glNamedBufferSubDataWrapper(GLuint buffer_, GLintptr offset_, GLsizeiptr size_, const void * data_)
{
  RESOLVE(PFNGLNAMEDBUFFERSUBDATAPROC, "glNamedBufferSubData");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedBufferSubData\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDBUFFERSUBDATAPROC)( buffer_, offset_, size_, data_ );
}

static void __stdcall glCopyNamedBufferSubDataWrapper(GLuint readBuffer_, GLuint writeBuffer_, GLintptr readOffset_, GLintptr writeOffset_, GLsizeiptr size_)
{
  RESOLVE(PFNGLCOPYNAMEDBUFFERSUBDATAPROC, "glCopyNamedBufferSubData");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCopyNamedBufferSubData\n");
#endif
  RESOLVED_PROC(PFNGLCOPYNAMEDBUFFERSUBDATAPROC)( readBuffer_, writeBuffer_, readOffset_, writeOffset_, size_ );
}

static void __stdcall glClearNamedBufferDataWrapper(GLuint buffer_, GLenum internalformat_, GLenum format_, GLenum type_, const void * data_)
{
  RESOLVE(PFNGLCLEARNAMEDBUFFERDATAPROC, "glClearNamedBufferData");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClearNamedBufferData\n");
#endif
  RESOLVED_PROC(PFNGLCLEARNAMEDBUFFERDATAPROC)( buffer_, internalformat_, format_, type_, data_ );
}

static void __stdcall glClearNamedBufferSubDataWrapper(GLuint buffer_, GLenum internalformat_, GLintptr offset_, GLsizeiptr size_, GLenum format_, GLenum type_, const void * data_)
{
  RESOLVE(PFNGLCLEARNAMEDBUFFERSUBDATAPROC, "glClearNamedBufferSubData");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClearNamedBufferSubData\n");
#endif
  RESOLVED_PROC(PFNGLCLEARNAMEDBUFFERSUBDATAPROC)( buffer_, internalformat_, offset_, size_, format_, type_, data_ );
}

static void * __stdcall glMapNamedBufferWrapper(GLuint buffer_, GLenum access_)
{
  RESOLVE_RET(PFNGLMAPNAMEDBUFFERPROC, "glMapNamedBuffer", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMapNamedBuffer\n");
#endif
  return RESOLVED_PROC(PFNGLMAPNAMEDBUFFERPROC)( buffer_, access_ );
}

static void * __stdcall glMapNamedBufferRangeWrapper(GLuint buffer_, GLintptr offset_, GLsizeiptr length_, GLbitfield access_)
{
  RESOLVE_RET(PFNGLMAPNAMEDBUFFERRANGEPROC, "glMapNamedBufferRange", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMapNamedBufferRange\n");
#endif
  return RESOLVED_PROC(PFNGLMAPNAMEDBUFFERRANGEPROC)( buffer_, offset_, length_, access_ );
}

/* No wrapper for glUnmapNamedBuffer, not in dispatch table */
static void __stdcall glFlushMappedNamedBufferRangeWrapper(GLuint buffer_, GLintptr offset_, GLsizeiptr length_)
{
  RESOLVE(PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC, "glFlushMappedNamedBufferRange");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFlushMappedNamedBufferRange\n");
#endif
  RESOLVED_PROC(PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC)( buffer_, offset_, length_ );
}

static void __stdcall glGetNamedBufferParameterivWrapper(GLuint buffer_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETNAMEDBUFFERPARAMETERIVPROC, "glGetNamedBufferParameteriv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetNamedBufferParameteriv\n");
#endif
  RESOLVED_PROC(PFNGLGETNAMEDBUFFERPARAMETERIVPROC)( buffer_, pname_, params_ );
}

static void __stdcall glGetNamedBufferParameteri64vWrapper(GLuint buffer_, GLenum pname_, GLint64* params_)
{
  RESOLVE(PFNGLGETNAMEDBUFFERPARAMETERI64VPROC, "glGetNamedBufferParameteri64v");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetNamedBufferParameteri64v\n");
#endif
  RESOLVED_PROC(PFNGLGETNAMEDBUFFERPARAMETERI64VPROC)( buffer_, pname_, params_ );
}

static void __stdcall glGetNamedBufferPointervWrapper(GLuint buffer_, GLenum pname_, void ** params_)
{
  RESOLVE(PFNGLGETNAMEDBUFFERPOINTERVPROC, "glGetNamedBufferPointerv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetNamedBufferPointerv\n");
#endif
  RESOLVED_PROC(PFNGLGETNAMEDBUFFERPOINTERVPROC)( buffer_, pname_, params_ );
}

static void __stdcall glGetNamedBufferSubDataWrapper(GLuint buffer_, GLintptr offset_, GLsizeiptr size_, void * data_)
{
  RESOLVE(PFNGLGETNAMEDBUFFERSUBDATAPROC, "glGetNamedBufferSubData");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetNamedBufferSubData\n");
#endif
  RESOLVED_PROC(PFNGLGETNAMEDBUFFERSUBDATAPROC)( buffer_, offset_, size_, data_ );
}

static void __stdcall glCreateFramebuffersWrapper(GLsizei n_, GLuint* framebuffers_)
{
  RESOLVE(PFNGLCREATEFRAMEBUFFERSPROC, "glCreateFramebuffers");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCreateFramebuffers\n");
#endif
  RESOLVED_PROC(PFNGLCREATEFRAMEBUFFERSPROC)( n_, framebuffers_ );
}

static void __stdcall glNamedFramebufferRenderbufferWrapper(GLuint framebuffer_, GLenum attachment_, GLenum renderbuffertarget_, GLuint renderbuffer_)
{
  RESOLVE(PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC, "glNamedFramebufferRenderbuffer");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedFramebufferRenderbuffer\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC)( framebuffer_, attachment_, renderbuffertarget_, renderbuffer_ );
}

static void __stdcall glNamedFramebufferParameteriWrapper(GLuint framebuffer_, GLenum pname_, GLint param_)
{
  RESOLVE(PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC, "glNamedFramebufferParameteri");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedFramebufferParameteri\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC)( framebuffer_, pname_, param_ );
}

static void __stdcall glNamedFramebufferTextureWrapper(GLuint framebuffer_, GLenum attachment_, GLuint texture_, GLint level_)
{
  RESOLVE(PFNGLNAMEDFRAMEBUFFERTEXTUREPROC, "glNamedFramebufferTexture");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedFramebufferTexture\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDFRAMEBUFFERTEXTUREPROC)( framebuffer_, attachment_, texture_, level_ );
}

static void __stdcall glNamedFramebufferTextureLayerWrapper(GLuint framebuffer_, GLenum attachment_, GLuint texture_, GLint level_, GLint layer_)
{
  RESOLVE(PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC, "glNamedFramebufferTextureLayer");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedFramebufferTextureLayer\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC)( framebuffer_, attachment_, texture_, level_, layer_ );
}

static void __stdcall glNamedFramebufferDrawBufferWrapper(GLuint framebuffer_, GLenum buf_)
{
  RESOLVE(PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC, "glNamedFramebufferDrawBuffer");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedFramebufferDrawBuffer\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC)( framebuffer_, buf_ );
}

static void __stdcall glNamedFramebufferDrawBuffersWrapper(GLuint framebuffer_, GLsizei n_, const GLenum* bufs_)
{
  RESOLVE(PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC, "glNamedFramebufferDrawBuffers");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedFramebufferDrawBuffers\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC)( framebuffer_, n_, bufs_ );
}

static void __stdcall glNamedFramebufferReadBufferWrapper(GLuint framebuffer_, GLenum src_)
{
  RESOLVE(PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC, "glNamedFramebufferReadBuffer");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedFramebufferReadBuffer\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC)( framebuffer_, src_ );
}

static void __stdcall glInvalidateNamedFramebufferDataWrapper(GLuint framebuffer_, GLsizei numAttachments_, const GLenum* attachments_)
{
  RESOLVE(PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC, "glInvalidateNamedFramebufferData");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glInvalidateNamedFramebufferData\n");
#endif
  RESOLVED_PROC(PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC)( framebuffer_, numAttachments_, attachments_ );
}

static void __stdcall glInvalidateNamedFramebufferSubDataWrapper(GLuint framebuffer_, GLsizei numAttachments_, const GLenum* attachments_, GLint x_, GLint y_, GLsizei width_, GLsizei height_)
{
  RESOLVE(PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC, "glInvalidateNamedFramebufferSubData");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glInvalidateNamedFramebufferSubData\n");
#endif
  RESOLVED_PROC(PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC)( framebuffer_, numAttachments_, attachments_, x_, y_, width_, height_ );
}

static void __stdcall glClearNamedFramebufferivWrapper(GLuint framebuffer_, GLenum buffer_, GLint drawbuffer_, const GLint* value_)
{
  RESOLVE(PFNGLCLEARNAMEDFRAMEBUFFERIVPROC, "glClearNamedFramebufferiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClearNamedFramebufferiv\n");
#endif
  RESOLVED_PROC(PFNGLCLEARNAMEDFRAMEBUFFERIVPROC)( framebuffer_, buffer_, drawbuffer_, value_ );
}

static void __stdcall glClearNamedFramebufferuivWrapper(GLuint framebuffer_, GLenum buffer_, GLint drawbuffer_, const GLuint* value_)
{
  RESOLVE(PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC, "glClearNamedFramebufferuiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClearNamedFramebufferuiv\n");
#endif
  RESOLVED_PROC(PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC)( framebuffer_, buffer_, drawbuffer_, value_ );
}

static void __stdcall glClearNamedFramebufferfvWrapper(GLuint framebuffer_, GLenum buffer_, GLint drawbuffer_, const GLfloat* value_)
{
  RESOLVE(PFNGLCLEARNAMEDFRAMEBUFFERFVPROC, "glClearNamedFramebufferfv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClearNamedFramebufferfv\n");
#endif
  RESOLVED_PROC(PFNGLCLEARNAMEDFRAMEBUFFERFVPROC)( framebuffer_, buffer_, drawbuffer_, value_ );
}

static void __stdcall glClearNamedFramebufferfiWrapper(GLuint framebuffer_, GLenum buffer_, GLint drawbuffer_, GLfloat depth_, GLint stencil_)
{
  RESOLVE(PFNGLCLEARNAMEDFRAMEBUFFERFIPROC, "glClearNamedFramebufferfi");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClearNamedFramebufferfi\n");
#endif
  RESOLVED_PROC(PFNGLCLEARNAMEDFRAMEBUFFERFIPROC)( framebuffer_, buffer_, drawbuffer_, depth_, stencil_ );
}

static void __stdcall glBlitNamedFramebufferWrapper(GLuint readFramebuffer_, GLuint drawFramebuffer_, GLint srcX0_, GLint srcY0_, GLint srcX1_, GLint srcY1_, GLint dstX0_, GLint dstY0_, GLint dstX1_, GLint dstY1_, GLbitfield mask_, GLenum filter_)
{
  RESOLVE(PFNGLBLITNAMEDFRAMEBUFFERPROC, "glBlitNamedFramebuffer");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBlitNamedFramebuffer\n");
#endif
  RESOLVED_PROC(PFNGLBLITNAMEDFRAMEBUFFERPROC)( readFramebuffer_, drawFramebuffer_, srcX0_, srcY0_, srcX1_, srcY1_, dstX0_, dstY0_, dstX1_, dstY1_, mask_, filter_ );
}

static GLenum __stdcall glCheckNamedFramebufferStatusWrapper(GLuint framebuffer_, GLenum target_)
{
  RESOLVE_RET(PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC, "glCheckNamedFramebufferStatus", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCheckNamedFramebufferStatus\n");
#endif
  return RESOLVED_PROC(PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC)( framebuffer_, target_ );
}

static void __stdcall glGetNamedFramebufferParameterivWrapper(GLuint framebuffer_, GLenum pname_, GLint* param_)
{
  RESOLVE(PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC, "glGetNamedFramebufferParameteriv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetNamedFramebufferParameteriv\n");
#endif
  RESOLVED_PROC(PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC)( framebuffer_, pname_, param_ );
}

static void __stdcall glGetNamedFramebufferAttachmentParameterivWrapper(GLuint framebuffer_, GLenum attachment_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC, "glGetNamedFramebufferAttachmentParameteriv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetNamedFramebufferAttachmentParameteriv\n");
#endif
  RESOLVED_PROC(PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC)( framebuffer_, attachment_, pname_, params_ );
}

static void __stdcall glCreateRenderbuffersWrapper(GLsizei n_, GLuint* renderbuffers_)
{
  RESOLVE(PFNGLCREATERENDERBUFFERSPROC, "glCreateRenderbuffers");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCreateRenderbuffers\n");
#endif
  RESOLVED_PROC(PFNGLCREATERENDERBUFFERSPROC)( n_, renderbuffers_ );
}

static void __stdcall glNamedRenderbufferStorageWrapper(GLuint renderbuffer_, GLenum internalformat_, GLsizei width_, GLsizei height_)
{
  RESOLVE(PFNGLNAMEDRENDERBUFFERSTORAGEPROC, "glNamedRenderbufferStorage");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedRenderbufferStorage\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDRENDERBUFFERSTORAGEPROC)( renderbuffer_, internalformat_, width_, height_ );
}

static void __stdcall glNamedRenderbufferStorageMultisampleWrapper(GLuint renderbuffer_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_)
{
  RESOLVE(PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC, "glNamedRenderbufferStorageMultisample");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedRenderbufferStorageMultisample\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC)( renderbuffer_, samples_, internalformat_, width_, height_ );
}

static void __stdcall glGetNamedRenderbufferParameterivWrapper(GLuint renderbuffer_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC, "glGetNamedRenderbufferParameteriv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetNamedRenderbufferParameteriv\n");
#endif
  RESOLVED_PROC(PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC)( renderbuffer_, pname_, params_ );
}

static void __stdcall glCreateTexturesWrapper(GLenum target_, GLsizei n_, GLuint* textures_)
{
  RESOLVE(PFNGLCREATETEXTURESPROC, "glCreateTextures");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCreateTextures\n");
#endif
  RESOLVED_PROC(PFNGLCREATETEXTURESPROC)( target_, n_, textures_ );
}

static void __stdcall glTextureBufferWrapper(GLuint texture_, GLenum internalformat_, GLuint buffer_)
{
  RESOLVE(PFNGLTEXTUREBUFFERPROC, "glTextureBuffer");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureBuffer\n");
#endif
  RESOLVED_PROC(PFNGLTEXTUREBUFFERPROC)( texture_, internalformat_, buffer_ );
}

static void __stdcall glTextureBufferRangeWrapper(GLuint texture_, GLenum internalformat_, GLuint buffer_, GLintptr offset_, GLsizeiptr size_)
{
  RESOLVE(PFNGLTEXTUREBUFFERRANGEPROC, "glTextureBufferRange");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureBufferRange\n");
#endif
  RESOLVED_PROC(PFNGLTEXTUREBUFFERRANGEPROC)( texture_, internalformat_, buffer_, offset_, size_ );
}

static void __stdcall glTextureStorage1DWrapper(GLuint texture_, GLsizei levels_, GLenum internalformat_, GLsizei width_)
{
  RESOLVE(PFNGLTEXTURESTORAGE1DPROC, "glTextureStorage1D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureStorage1D\n");
#endif
  RESOLVED_PROC(PFNGLTEXTURESTORAGE1DPROC)( texture_, levels_, internalformat_, width_ );
}

static void __stdcall glTextureStorage2DWrapper(GLuint texture_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_)
{
  RESOLVE(PFNGLTEXTURESTORAGE2DPROC, "glTextureStorage2D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureStorage2D\n");
#endif
  RESOLVED_PROC(PFNGLTEXTURESTORAGE2DPROC)( texture_, levels_, internalformat_, width_, height_ );
}

static void __stdcall glTextureStorage3DWrapper(GLuint texture_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_)
{
  RESOLVE(PFNGLTEXTURESTORAGE3DPROC, "glTextureStorage3D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureStorage3D\n");
#endif
  RESOLVED_PROC(PFNGLTEXTURESTORAGE3DPROC)( texture_, levels_, internalformat_, width_, height_, depth_ );
}

static void __stdcall glTextureStorage2DMultisampleWrapper(GLuint texture_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLboolean fixedsamplelocations_)
{
  RESOLVE(PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC, "glTextureStorage2DMultisample");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureStorage2DMultisample\n");
#endif
  RESOLVED_PROC(PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC)( texture_, samples_, internalformat_, width_, height_, fixedsamplelocations_ );
}

static void __stdcall glTextureStorage3DMultisampleWrapper(GLuint texture_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLboolean fixedsamplelocations_)
{
  RESOLVE(PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC, "glTextureStorage3DMultisample");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureStorage3DMultisample\n");
#endif
  RESOLVED_PROC(PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC)( texture_, samples_, internalformat_, width_, height_, depth_, fixedsamplelocations_ );
}

static void __stdcall glTextureSubImage1DWrapper(GLuint texture_, GLint level_, GLint xoffset_, GLsizei width_, GLenum format_, GLenum type_, const void * pixels_)
{
  RESOLVE(PFNGLTEXTURESUBIMAGE1DPROC, "glTextureSubImage1D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureSubImage1D\n");
#endif
  RESOLVED_PROC(PFNGLTEXTURESUBIMAGE1DPROC)( texture_, level_, xoffset_, width_, format_, type_, pixels_ );
}

static void __stdcall glTextureSubImage2DWrapper(GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, const void * pixels_)
{
  RESOLVE(PFNGLTEXTURESUBIMAGE2DPROC, "glTextureSubImage2D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureSubImage2D\n");
#endif
  RESOLVED_PROC(PFNGLTEXTURESUBIMAGE2DPROC)( texture_, level_, xoffset_, yoffset_, width_, height_, format_, type_, pixels_ );
}

static void __stdcall glTextureSubImage3DWrapper(GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLenum type_, const void * pixels_)
{
  RESOLVE(PFNGLTEXTURESUBIMAGE3DPROC, "glTextureSubImage3D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureSubImage3D\n");
#endif
  RESOLVED_PROC(PFNGLTEXTURESUBIMAGE3DPROC)( texture_, level_, xoffset_, yoffset_, zoffset_, width_, height_, depth_, format_, type_, pixels_ );
}

static void __stdcall glCompressedTextureSubImage1DWrapper(GLuint texture_, GLint level_, GLint xoffset_, GLsizei width_, GLenum format_, GLsizei imageSize_, const void * data_)
{
  RESOLVE(PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC, "glCompressedTextureSubImage1D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCompressedTextureSubImage1D\n");
#endif
  RESOLVED_PROC(PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC)( texture_, level_, xoffset_, width_, format_, imageSize_, data_ );
}

static void __stdcall glCompressedTextureSubImage2DWrapper(GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLsizei width_, GLsizei height_, GLenum format_, GLsizei imageSize_, const void * data_)
{
  RESOLVE(PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC, "glCompressedTextureSubImage2D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCompressedTextureSubImage2D\n");
#endif
  RESOLVED_PROC(PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC)( texture_, level_, xoffset_, yoffset_, width_, height_, format_, imageSize_, data_ );
}

static void __stdcall glCompressedTextureSubImage3DWrapper(GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLsizei imageSize_, const void * data_)
{
  RESOLVE(PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC, "glCompressedTextureSubImage3D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCompressedTextureSubImage3D\n");
#endif
  RESOLVED_PROC(PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC)( texture_, level_, xoffset_, yoffset_, zoffset_, width_, height_, depth_, format_, imageSize_, data_ );
}

static void __stdcall glCopyTextureSubImage1DWrapper(GLuint texture_, GLint level_, GLint xoffset_, GLint x_, GLint y_, GLsizei width_)
{
  RESOLVE(PFNGLCOPYTEXTURESUBIMAGE1DPROC, "glCopyTextureSubImage1D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCopyTextureSubImage1D\n");
#endif
  RESOLVED_PROC(PFNGLCOPYTEXTURESUBIMAGE1DPROC)( texture_, level_, xoffset_, x_, y_, width_ );
}

static void __stdcall glCopyTextureSubImage2DWrapper(GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint x_, GLint y_, GLsizei width_, GLsizei height_)
{
  RESOLVE(PFNGLCOPYTEXTURESUBIMAGE2DPROC, "glCopyTextureSubImage2D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCopyTextureSubImage2D\n");
#endif
  RESOLVED_PROC(PFNGLCOPYTEXTURESUBIMAGE2DPROC)( texture_, level_, xoffset_, yoffset_, x_, y_, width_, height_ );
}

static void __stdcall glCopyTextureSubImage3DWrapper(GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLint x_, GLint y_, GLsizei width_, GLsizei height_)
{
  RESOLVE(PFNGLCOPYTEXTURESUBIMAGE3DPROC, "glCopyTextureSubImage3D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCopyTextureSubImage3D\n");
#endif
  RESOLVED_PROC(PFNGLCOPYTEXTURESUBIMAGE3DPROC)( texture_, level_, xoffset_, yoffset_, zoffset_, x_, y_, width_, height_ );
}

static void __stdcall glTextureParameterfWrapper(GLuint texture_, GLenum pname_, GLfloat param_)
{
  RESOLVE(PFNGLTEXTUREPARAMETERFPROC, "glTextureParameterf");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureParameterf\n");
#endif
  RESOLVED_PROC(PFNGLTEXTUREPARAMETERFPROC)( texture_, pname_, param_ );
}

static void __stdcall glTextureParameterfvWrapper(GLuint texture_, GLenum pname_, const GLfloat* param_)
{
  RESOLVE(PFNGLTEXTUREPARAMETERFVPROC, "glTextureParameterfv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureParameterfv\n");
#endif
  RESOLVED_PROC(PFNGLTEXTUREPARAMETERFVPROC)( texture_, pname_, param_ );
}

static void __stdcall glTextureParameteriWrapper(GLuint texture_, GLenum pname_, GLint param_)
{
  RESOLVE(PFNGLTEXTUREPARAMETERIPROC, "glTextureParameteri");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureParameteri\n");
#endif
  RESOLVED_PROC(PFNGLTEXTUREPARAMETERIPROC)( texture_, pname_, param_ );
}

static void __stdcall glTextureParameterIivWrapper(GLuint texture_, GLenum pname_, const GLint* params_)
{
  RESOLVE(PFNGLTEXTUREPARAMETERIIVPROC, "glTextureParameterIiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureParameterIiv\n");
#endif
  RESOLVED_PROC(PFNGLTEXTUREPARAMETERIIVPROC)( texture_, pname_, params_ );
}

static void __stdcall glTextureParameterIuivWrapper(GLuint texture_, GLenum pname_, const GLuint* params_)
{
  RESOLVE(PFNGLTEXTUREPARAMETERIUIVPROC, "glTextureParameterIuiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureParameterIuiv\n");
#endif
  RESOLVED_PROC(PFNGLTEXTUREPARAMETERIUIVPROC)( texture_, pname_, params_ );
}

static void __stdcall glTextureParameterivWrapper(GLuint texture_, GLenum pname_, const GLint* param_)
{
  RESOLVE(PFNGLTEXTUREPARAMETERIVPROC, "glTextureParameteriv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureParameteriv\n");
#endif
  RESOLVED_PROC(PFNGLTEXTUREPARAMETERIVPROC)( texture_, pname_, param_ );
}

static void __stdcall glGenerateTextureMipmapWrapper(GLuint texture_)
{
  RESOLVE(PFNGLGENERATETEXTUREMIPMAPPROC, "glGenerateTextureMipmap");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGenerateTextureMipmap\n");
#endif
  RESOLVED_PROC(PFNGLGENERATETEXTUREMIPMAPPROC)( texture_ );
}

static void __stdcall glBindTextureUnitWrapper(GLuint unit_, GLuint texture_)
{
  RESOLVE(PFNGLBINDTEXTUREUNITPROC, "glBindTextureUnit");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindTextureUnit\n");
#endif
  RESOLVED_PROC(PFNGLBINDTEXTUREUNITPROC)( unit_, texture_ );
}

static void __stdcall glGetTextureImageWrapper(GLuint texture_, GLint level_, GLenum format_, GLenum type_, GLsizei bufSize_, void * pixels_)
{
  RESOLVE(PFNGLGETTEXTUREIMAGEPROC, "glGetTextureImage");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTextureImage\n");
#endif
  RESOLVED_PROC(PFNGLGETTEXTUREIMAGEPROC)( texture_, level_, format_, type_, bufSize_, pixels_ );
}

static void __stdcall glGetCompressedTextureImageWrapper(GLuint texture_, GLint level_, GLsizei bufSize_, void * pixels_)
{
  RESOLVE(PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC, "glGetCompressedTextureImage");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetCompressedTextureImage\n");
#endif
  RESOLVED_PROC(PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC)( texture_, level_, bufSize_, pixels_ );
}

static void __stdcall glGetTextureLevelParameterfvWrapper(GLuint texture_, GLint level_, GLenum pname_, GLfloat* params_)
{
  RESOLVE(PFNGLGETTEXTURELEVELPARAMETERFVPROC, "glGetTextureLevelParameterfv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTextureLevelParameterfv\n");
#endif
  RESOLVED_PROC(PFNGLGETTEXTURELEVELPARAMETERFVPROC)( texture_, level_, pname_, params_ );
}

static void __stdcall glGetTextureLevelParameterivWrapper(GLuint texture_, GLint level_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETTEXTURELEVELPARAMETERIVPROC, "glGetTextureLevelParameteriv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTextureLevelParameteriv\n");
#endif
  RESOLVED_PROC(PFNGLGETTEXTURELEVELPARAMETERIVPROC)( texture_, level_, pname_, params_ );
}

static void __stdcall glGetTextureParameterfvWrapper(GLuint texture_, GLenum pname_, GLfloat* params_)
{
  RESOLVE(PFNGLGETTEXTUREPARAMETERFVPROC, "glGetTextureParameterfv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTextureParameterfv\n");
#endif
  RESOLVED_PROC(PFNGLGETTEXTUREPARAMETERFVPROC)( texture_, pname_, params_ );
}

static void __stdcall glGetTextureParameterIivWrapper(GLuint texture_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETTEXTUREPARAMETERIIVPROC, "glGetTextureParameterIiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTextureParameterIiv\n");
#endif
  RESOLVED_PROC(PFNGLGETTEXTUREPARAMETERIIVPROC)( texture_, pname_, params_ );
}

static void __stdcall glGetTextureParameterIuivWrapper(GLuint texture_, GLenum pname_, GLuint* params_)
{
  RESOLVE(PFNGLGETTEXTUREPARAMETERIUIVPROC, "glGetTextureParameterIuiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTextureParameterIuiv\n");
#endif
  RESOLVED_PROC(PFNGLGETTEXTUREPARAMETERIUIVPROC)( texture_, pname_, params_ );
}

static void __stdcall glGetTextureParameterivWrapper(GLuint texture_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETTEXTUREPARAMETERIVPROC, "glGetTextureParameteriv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTextureParameteriv\n");
#endif
  RESOLVED_PROC(PFNGLGETTEXTUREPARAMETERIVPROC)( texture_, pname_, params_ );
}

static void __stdcall glCreateVertexArraysWrapper(GLsizei n_, GLuint* arrays_)
{
  RESOLVE(PFNGLCREATEVERTEXARRAYSPROC, "glCreateVertexArrays");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCreateVertexArrays\n");
#endif
  RESOLVED_PROC(PFNGLCREATEVERTEXARRAYSPROC)( n_, arrays_ );
}

static void __stdcall glDisableVertexArrayAttribWrapper(GLuint vaobj_, GLuint index_)
{
  RESOLVE(PFNGLDISABLEVERTEXARRAYATTRIBPROC, "glDisableVertexArrayAttrib");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDisableVertexArrayAttrib\n");
#endif
  RESOLVED_PROC(PFNGLDISABLEVERTEXARRAYATTRIBPROC)( vaobj_, index_ );
}

static void __stdcall glEnableVertexArrayAttribWrapper(GLuint vaobj_, GLuint index_)
{
  RESOLVE(PFNGLENABLEVERTEXARRAYATTRIBPROC, "glEnableVertexArrayAttrib");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEnableVertexArrayAttrib\n");
#endif
  RESOLVED_PROC(PFNGLENABLEVERTEXARRAYATTRIBPROC)( vaobj_, index_ );
}

static void __stdcall glVertexArrayElementBufferWrapper(GLuint vaobj_, GLuint buffer_)
{
  RESOLVE(PFNGLVERTEXARRAYELEMENTBUFFERPROC, "glVertexArrayElementBuffer");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexArrayElementBuffer\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXARRAYELEMENTBUFFERPROC)( vaobj_, buffer_ );
}

static void __stdcall glVertexArrayVertexBufferWrapper(GLuint vaobj_, GLuint bindingindex_, GLuint buffer_, GLintptr offset_, GLsizei stride_)
{
  RESOLVE(PFNGLVERTEXARRAYVERTEXBUFFERPROC, "glVertexArrayVertexBuffer");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexArrayVertexBuffer\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXARRAYVERTEXBUFFERPROC)( vaobj_, bindingindex_, buffer_, offset_, stride_ );
}

static void __stdcall glVertexArrayVertexBuffersWrapper(GLuint vaobj_, GLuint first_, GLsizei count_, const GLuint* buffers_, const GLintptr* offsets_, const GLsizei* strides_)
{
  RESOLVE(PFNGLVERTEXARRAYVERTEXBUFFERSPROC, "glVertexArrayVertexBuffers");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexArrayVertexBuffers\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXARRAYVERTEXBUFFERSPROC)( vaobj_, first_, count_, buffers_, offsets_, strides_ );
}

static void __stdcall glVertexArrayAttribBindingWrapper(GLuint vaobj_, GLuint attribindex_, GLuint bindingindex_)
{
  RESOLVE(PFNGLVERTEXARRAYATTRIBBINDINGPROC, "glVertexArrayAttribBinding");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexArrayAttribBinding\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXARRAYATTRIBBINDINGPROC)( vaobj_, attribindex_, bindingindex_ );
}

static void __stdcall glVertexArrayAttribFormatWrapper(GLuint vaobj_, GLuint attribindex_, GLint size_, GLenum type_, GLboolean normalized_, GLuint relativeoffset_)
{
  RESOLVE(PFNGLVERTEXARRAYATTRIBFORMATPROC, "glVertexArrayAttribFormat");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexArrayAttribFormat\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXARRAYATTRIBFORMATPROC)( vaobj_, attribindex_, size_, type_, normalized_, relativeoffset_ );
}

static void __stdcall glVertexArrayAttribIFormatWrapper(GLuint vaobj_, GLuint attribindex_, GLint size_, GLenum type_, GLuint relativeoffset_)
{
  RESOLVE(PFNGLVERTEXARRAYATTRIBIFORMATPROC, "glVertexArrayAttribIFormat");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexArrayAttribIFormat\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXARRAYATTRIBIFORMATPROC)( vaobj_, attribindex_, size_, type_, relativeoffset_ );
}

static void __stdcall glVertexArrayAttribLFormatWrapper(GLuint vaobj_, GLuint attribindex_, GLint size_, GLenum type_, GLuint relativeoffset_)
{
  RESOLVE(PFNGLVERTEXARRAYATTRIBLFORMATPROC, "glVertexArrayAttribLFormat");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexArrayAttribLFormat\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXARRAYATTRIBLFORMATPROC)( vaobj_, attribindex_, size_, type_, relativeoffset_ );
}

static void __stdcall glVertexArrayBindingDivisorWrapper(GLuint vaobj_, GLuint bindingindex_, GLuint divisor_)
{
  RESOLVE(PFNGLVERTEXARRAYBINDINGDIVISORPROC, "glVertexArrayBindingDivisor");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexArrayBindingDivisor\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXARRAYBINDINGDIVISORPROC)( vaobj_, bindingindex_, divisor_ );
}

static void __stdcall glGetVertexArrayivWrapper(GLuint vaobj_, GLenum pname_, GLint* param_)
{
  RESOLVE(PFNGLGETVERTEXARRAYIVPROC, "glGetVertexArrayiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetVertexArrayiv\n");
#endif
  RESOLVED_PROC(PFNGLGETVERTEXARRAYIVPROC)( vaobj_, pname_, param_ );
}

static void __stdcall glGetVertexArrayIndexedivWrapper(GLuint vaobj_, GLuint index_, GLenum pname_, GLint* param_)
{
  RESOLVE(PFNGLGETVERTEXARRAYINDEXEDIVPROC, "glGetVertexArrayIndexediv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetVertexArrayIndexediv\n");
#endif
  RESOLVED_PROC(PFNGLGETVERTEXARRAYINDEXEDIVPROC)( vaobj_, index_, pname_, param_ );
}

static void __stdcall glGetVertexArrayIndexed64ivWrapper(GLuint vaobj_, GLuint index_, GLenum pname_, GLint64* param_)
{
  RESOLVE(PFNGLGETVERTEXARRAYINDEXED64IVPROC, "glGetVertexArrayIndexed64iv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetVertexArrayIndexed64iv\n");
#endif
  RESOLVED_PROC(PFNGLGETVERTEXARRAYINDEXED64IVPROC)( vaobj_, index_, pname_, param_ );
}

static void __stdcall glCreateSamplersWrapper(GLsizei n_, GLuint* samplers_)
{
  RESOLVE(PFNGLCREATESAMPLERSPROC, "glCreateSamplers");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCreateSamplers\n");
#endif
  RESOLVED_PROC(PFNGLCREATESAMPLERSPROC)( n_, samplers_ );
}

static void __stdcall glCreateProgramPipelinesWrapper(GLsizei n_, GLuint* pipelines_)
{
  RESOLVE(PFNGLCREATEPROGRAMPIPELINESPROC, "glCreateProgramPipelines");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCreateProgramPipelines\n");
#endif
  RESOLVED_PROC(PFNGLCREATEPROGRAMPIPELINESPROC)( n_, pipelines_ );
}

static void __stdcall glCreateQueriesWrapper(GLenum target_, GLsizei n_, GLuint* ids_)
{
  RESOLVE(PFNGLCREATEQUERIESPROC, "glCreateQueries");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCreateQueries\n");
#endif
  RESOLVED_PROC(PFNGLCREATEQUERIESPROC)( target_, n_, ids_ );
}

static void __stdcall glGetQueryBufferObjecti64vWrapper(GLuint id_, GLuint buffer_, GLenum pname_, GLintptr offset_)
{
  RESOLVE(PFNGLGETQUERYBUFFEROBJECTI64VPROC, "glGetQueryBufferObjecti64v");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetQueryBufferObjecti64v\n");
#endif
  RESOLVED_PROC(PFNGLGETQUERYBUFFEROBJECTI64VPROC)( id_, buffer_, pname_, offset_ );
}

static void __stdcall glGetQueryBufferObjectivWrapper(GLuint id_, GLuint buffer_, GLenum pname_, GLintptr offset_)
{
  RESOLVE(PFNGLGETQUERYBUFFEROBJECTIVPROC, "glGetQueryBufferObjectiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetQueryBufferObjectiv\n");
#endif
  RESOLVED_PROC(PFNGLGETQUERYBUFFEROBJECTIVPROC)( id_, buffer_, pname_, offset_ );
}

static void __stdcall glGetQueryBufferObjectui64vWrapper(GLuint id_, GLuint buffer_, GLenum pname_, GLintptr offset_)
{
  RESOLVE(PFNGLGETQUERYBUFFEROBJECTUI64VPROC, "glGetQueryBufferObjectui64v");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetQueryBufferObjectui64v\n");
#endif
  RESOLVED_PROC(PFNGLGETQUERYBUFFEROBJECTUI64VPROC)( id_, buffer_, pname_, offset_ );
}

static void __stdcall glGetQueryBufferObjectuivWrapper(GLuint id_, GLuint buffer_, GLenum pname_, GLintptr offset_)
{
  RESOLVE(PFNGLGETQUERYBUFFEROBJECTUIVPROC, "glGetQueryBufferObjectuiv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetQueryBufferObjectuiv\n");
#endif
  RESOLVED_PROC(PFNGLGETQUERYBUFFEROBJECTUIVPROC)( id_, buffer_, pname_, offset_ );
}

static void __stdcall glMemoryBarrierByRegionWrapper(GLbitfield barriers_)
{
  RESOLVE(PFNGLMEMORYBARRIERBYREGIONPROC, "glMemoryBarrierByRegion");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMemoryBarrierByRegion\n");
#endif
  RESOLVED_PROC(PFNGLMEMORYBARRIERBYREGIONPROC)( barriers_ );
}

static void __stdcall glGetTextureSubImageWrapper(GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLenum type_, GLsizei bufSize_, void * pixels_)
{
  RESOLVE(PFNGLGETTEXTURESUBIMAGEPROC, "glGetTextureSubImage");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTextureSubImage\n");
#endif
  RESOLVED_PROC(PFNGLGETTEXTURESUBIMAGEPROC)( texture_, level_, xoffset_, yoffset_, zoffset_, width_, height_, depth_, format_, type_, bufSize_, pixels_ );
}

static void __stdcall glGetCompressedTextureSubImageWrapper(GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLsizei bufSize_, void * pixels_)
{
  RESOLVE(PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC, "glGetCompressedTextureSubImage");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetCompressedTextureSubImage\n");
#endif
  RESOLVED_PROC(PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC)( texture_, level_, xoffset_, yoffset_, zoffset_, width_, height_, depth_, bufSize_, pixels_ );
}

/* No wrapper for glGetGraphicsResetStatus, not in dispatch table */
/* No wrapper for glGetnCompressedTexImage, not in dispatch table */
/* No wrapper for glGetnTexImage, not in dispatch table */
/* No wrapper for glGetnUniformdv, not in dispatch table */
/* No wrapper for glGetnUniformfv, not in dispatch table */
/* No wrapper for glGetnUniformiv, not in dispatch table */
/* No wrapper for glGetnUniformuiv, not in dispatch table */
/* No wrapper for glReadnPixels, not in dispatch table */
/* No wrapper for glGetnMapdv, not in dispatch table */
/* No wrapper for glGetnMapfv, not in dispatch table */
/* No wrapper for glGetnMapiv, not in dispatch table */
/* No wrapper for glGetnPixelMapfv, not in dispatch table */
/* No wrapper for glGetnPixelMapuiv, not in dispatch table */
/* No wrapper for glGetnPixelMapusv, not in dispatch table */
/* No wrapper for glGetnPolygonStipple, not in dispatch table */
/* No wrapper for glGetnColorTable, not in dispatch table */
/* No wrapper for glGetnConvolutionFilter, not in dispatch table */
/* No wrapper for glGetnSeparableFilter, not in dispatch table */
/* No wrapper for glGetnHistogram, not in dispatch table */
/* No wrapper for glGetnMinmax, not in dispatch table */
/* No wrapper for glTextureBarrier, not in dispatch table */
/* No wrapper for glSpecializeShader, not in dispatch table */
/* No wrapper for glMultiDrawArraysIndirectCount, not in dispatch table */
/* No wrapper for glMultiDrawElementsIndirectCount, not in dispatch table */
/* No wrapper for glPolygonOffsetClamp, not in dispatch table */
/* No wrapper for glPrimitiveBoundingBoxARB, not in dispatch table */
static GLuint64 __stdcall glGetTextureHandleARBWrapper(GLuint texture_)
{
  RESOLVE_RET(PFNGLGETTEXTUREHANDLEARBPROC, "glGetTextureHandleARB", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTextureHandleARB\n");
#endif
  return RESOLVED_PROC(PFNGLGETTEXTUREHANDLEARBPROC)( texture_ );
}

static GLuint64 __stdcall glGetTextureSamplerHandleARBWrapper(GLuint texture_, GLuint sampler_)
{
  RESOLVE_RET(PFNGLGETTEXTURESAMPLERHANDLEARBPROC, "glGetTextureSamplerHandleARB", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTextureSamplerHandleARB\n");
#endif
  return RESOLVED_PROC(PFNGLGETTEXTURESAMPLERHANDLEARBPROC)( texture_, sampler_ );
}

static void __stdcall glMakeTextureHandleResidentARBWrapper(GLuint64 handle_)
{
  RESOLVE(PFNGLMAKETEXTUREHANDLERESIDENTARBPROC, "glMakeTextureHandleResidentARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMakeTextureHandleResidentARB\n");
#endif
  RESOLVED_PROC(PFNGLMAKETEXTUREHANDLERESIDENTARBPROC)( handle_ );
}

static void __stdcall glMakeTextureHandleNonResidentARBWrapper(GLuint64 handle_)
{
  RESOLVE(PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC, "glMakeTextureHandleNonResidentARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMakeTextureHandleNonResidentARB\n");
#endif
  RESOLVED_PROC(PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC)( handle_ );
}

static GLuint64 __stdcall glGetImageHandleARBWrapper(GLuint texture_, GLint level_, GLboolean layered_, GLint layer_, GLenum format_)
{
  RESOLVE_RET(PFNGLGETIMAGEHANDLEARBPROC, "glGetImageHandleARB", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetImageHandleARB\n");
#endif
  return RESOLVED_PROC(PFNGLGETIMAGEHANDLEARBPROC)( texture_, level_, layered_, layer_, format_ );
}

static void __stdcall glMakeImageHandleResidentARBWrapper(GLuint64 handle_, GLenum access_)
{
  RESOLVE(PFNGLMAKEIMAGEHANDLERESIDENTARBPROC, "glMakeImageHandleResidentARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMakeImageHandleResidentARB\n");
#endif
  RESOLVED_PROC(PFNGLMAKEIMAGEHANDLERESIDENTARBPROC)( handle_, access_ );
}

static void __stdcall glMakeImageHandleNonResidentARBWrapper(GLuint64 handle_)
{
  RESOLVE(PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC, "glMakeImageHandleNonResidentARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMakeImageHandleNonResidentARB\n");
#endif
  RESOLVED_PROC(PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC)( handle_ );
}

static void __stdcall glUniformHandleui64ARBWrapper(GLint location_, GLuint64 value_)
{
  RESOLVE(PFNGLUNIFORMHANDLEUI64ARBPROC, "glUniformHandleui64ARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniformHandleui64ARB\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORMHANDLEUI64ARBPROC)( location_, value_ );
}

static void __stdcall glUniformHandleui64vARBWrapper(GLint location_, GLsizei count_, const GLuint64* value_)
{
  RESOLVE(PFNGLUNIFORMHANDLEUI64VARBPROC, "glUniformHandleui64vARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniformHandleui64vARB\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORMHANDLEUI64VARBPROC)( location_, count_, value_ );
}

static void __stdcall glProgramUniformHandleui64ARBWrapper(GLuint program_, GLint location_, GLuint64 value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC, "glProgramUniformHandleui64ARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniformHandleui64ARB\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC)( program_, location_, value_ );
}

static void __stdcall glProgramUniformHandleui64vARBWrapper(GLuint program_, GLint location_, GLsizei count_, const GLuint64* values_)
{
  RESOLVE(PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC, "glProgramUniformHandleui64vARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniformHandleui64vARB\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC)( program_, location_, count_, values_ );
}

static GLboolean __stdcall glIsTextureHandleResidentARBWrapper(GLuint64 handle_)
{
  RESOLVE_RET(PFNGLISTEXTUREHANDLERESIDENTARBPROC, "glIsTextureHandleResidentARB", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIsTextureHandleResidentARB\n");
#endif
  return RESOLVED_PROC(PFNGLISTEXTUREHANDLERESIDENTARBPROC)( handle_ );
}

static GLboolean __stdcall glIsImageHandleResidentARBWrapper(GLuint64 handle_)
{
  RESOLVE_RET(PFNGLISIMAGEHANDLERESIDENTARBPROC, "glIsImageHandleResidentARB", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIsImageHandleResidentARB\n");
#endif
  return RESOLVED_PROC(PFNGLISIMAGEHANDLERESIDENTARBPROC)( handle_ );
}

static void __stdcall glVertexAttribL1ui64ARBWrapper(GLuint index_, GLuint64EXT x_)
{
  RESOLVE(PFNGLVERTEXATTRIBL1UI64ARBPROC, "glVertexAttribL1ui64ARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribL1ui64ARB\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBL1UI64ARBPROC)( index_, x_ );
}

static void __stdcall glVertexAttribL1ui64vARBWrapper(GLuint index_, const GLuint64EXT* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBL1UI64VARBPROC, "glVertexAttribL1ui64vARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribL1ui64vARB\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBL1UI64VARBPROC)( index_, v_ );
}

static void __stdcall glGetVertexAttribLui64vARBWrapper(GLuint index_, GLenum pname_, GLuint64EXT* params_)
{
  RESOLVE(PFNGLGETVERTEXATTRIBLUI64VARBPROC, "glGetVertexAttribLui64vARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetVertexAttribLui64vARB\n");
#endif
  RESOLVED_PROC(PFNGLGETVERTEXATTRIBLUI64VARBPROC)( index_, pname_, params_ );
}

/* No wrapper for glCreateSyncFromCLeventARB, not in dispatch table */
/* No wrapper for glClampColorARB, not in dispatch table */
static void __stdcall glDispatchComputeGroupSizeARBWrapper(GLuint num_groups_x_, GLuint num_groups_y_, GLuint num_groups_z_, GLuint group_size_x_, GLuint group_size_y_, GLuint group_size_z_)
{
  RESOLVE(PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC, "glDispatchComputeGroupSizeARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDispatchComputeGroupSizeARB\n");
#endif
  RESOLVED_PROC(PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC)( num_groups_x_, num_groups_y_, num_groups_z_, group_size_x_, group_size_y_, group_size_z_ );
}

/* No wrapper for glDebugMessageControlARB, not in dispatch table */
/* No wrapper for glDebugMessageInsertARB, not in dispatch table */
/* No wrapper for glDebugMessageCallbackARB, not in dispatch table */
/* No wrapper for glGetDebugMessageLogARB, not in dispatch table */
/* No wrapper for glDrawBuffersARB, not in dispatch table */
static void __stdcall glBlendEquationiARBWrapper(GLuint buf_, GLenum mode_)
{
  RESOLVE(PFNGLBLENDEQUATIONIARBPROC, "glBlendEquationiARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBlendEquationiARB\n");
#endif
  RESOLVED_PROC(PFNGLBLENDEQUATIONIARBPROC)( buf_, mode_ );
}

static void __stdcall glBlendEquationSeparateiARBWrapper(GLuint buf_, GLenum modeRGB_, GLenum modeAlpha_)
{
  RESOLVE(PFNGLBLENDEQUATIONSEPARATEIARBPROC, "glBlendEquationSeparateiARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBlendEquationSeparateiARB\n");
#endif
  RESOLVED_PROC(PFNGLBLENDEQUATIONSEPARATEIARBPROC)( buf_, modeRGB_, modeAlpha_ );
}

static void __stdcall glBlendFunciARBWrapper(GLuint buf_, GLenum src_, GLenum dst_)
{
  RESOLVE(PFNGLBLENDFUNCIARBPROC, "glBlendFunciARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBlendFunciARB\n");
#endif
  RESOLVED_PROC(PFNGLBLENDFUNCIARBPROC)( buf_, src_, dst_ );
}

static void __stdcall glBlendFuncSeparateiARBWrapper(GLuint buf_, GLenum srcRGB_, GLenum dstRGB_, GLenum srcAlpha_, GLenum dstAlpha_)
{
  RESOLVE(PFNGLBLENDFUNCSEPARATEIARBPROC, "glBlendFuncSeparateiARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBlendFuncSeparateiARB\n");
#endif
  RESOLVED_PROC(PFNGLBLENDFUNCSEPARATEIARBPROC)( buf_, srcRGB_, dstRGB_, srcAlpha_, dstAlpha_ );
}

/* No wrapper for glDrawArraysInstancedARB, not in dispatch table */
/* No wrapper for glDrawElementsInstancedARB, not in dispatch table */
static void __stdcall glProgramStringARBWrapper(GLenum target_, GLenum format_, GLsizei len_, const void * string_)
{
  RESOLVE(PFNGLPROGRAMSTRINGARBPROC, "glProgramStringARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramStringARB\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMSTRINGARBPROC)( target_, format_, len_, string_ );
}

static void __stdcall glBindProgramARBWrapper(GLenum target_, GLuint program_)
{
  RESOLVE(PFNGLBINDPROGRAMARBPROC, "glBindProgramARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindProgramARB\n");
#endif
  RESOLVED_PROC(PFNGLBINDPROGRAMARBPROC)( target_, program_ );
}

static void __stdcall glDeleteProgramsARBWrapper(GLsizei n_, const GLuint* programs_)
{
  RESOLVE(PFNGLDELETEPROGRAMSARBPROC, "glDeleteProgramsARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDeleteProgramsARB\n");
#endif
  RESOLVED_PROC(PFNGLDELETEPROGRAMSARBPROC)( n_, programs_ );
}

static void __stdcall glGenProgramsARBWrapper(GLsizei n_, GLuint* programs_)
{
  RESOLVE(PFNGLGENPROGRAMSARBPROC, "glGenProgramsARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGenProgramsARB\n");
#endif
  RESOLVED_PROC(PFNGLGENPROGRAMSARBPROC)( n_, programs_ );
}

static void __stdcall glProgramEnvParameter4dARBWrapper(GLenum target_, GLuint index_, GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_)
{
  RESOLVE(PFNGLPROGRAMENVPARAMETER4DARBPROC, "glProgramEnvParameter4dARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramEnvParameter4dARB\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMENVPARAMETER4DARBPROC)( target_, index_, x_, y_, z_, w_ );
}

static void __stdcall glProgramEnvParameter4dvARBWrapper(GLenum target_, GLuint index_, const GLdouble* params_)
{
  RESOLVE(PFNGLPROGRAMENVPARAMETER4DVARBPROC, "glProgramEnvParameter4dvARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramEnvParameter4dvARB\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMENVPARAMETER4DVARBPROC)( target_, index_, params_ );
}

static void __stdcall glProgramEnvParameter4fARBWrapper(GLenum target_, GLuint index_, GLfloat x_, GLfloat y_, GLfloat z_, GLfloat w_)
{
  RESOLVE(PFNGLPROGRAMENVPARAMETER4FARBPROC, "glProgramEnvParameter4fARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramEnvParameter4fARB\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMENVPARAMETER4FARBPROC)( target_, index_, x_, y_, z_, w_ );
}

static void __stdcall glProgramEnvParameter4fvARBWrapper(GLenum target_, GLuint index_, const GLfloat* params_)
{
  RESOLVE(PFNGLPROGRAMENVPARAMETER4FVARBPROC, "glProgramEnvParameter4fvARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramEnvParameter4fvARB\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMENVPARAMETER4FVARBPROC)( target_, index_, params_ );
}

static void __stdcall glProgramLocalParameter4dARBWrapper(GLenum target_, GLuint index_, GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_)
{
  RESOLVE(PFNGLPROGRAMLOCALPARAMETER4DARBPROC, "glProgramLocalParameter4dARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramLocalParameter4dARB\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMLOCALPARAMETER4DARBPROC)( target_, index_, x_, y_, z_, w_ );
}

static void __stdcall glProgramLocalParameter4dvARBWrapper(GLenum target_, GLuint index_, const GLdouble* params_)
{
  RESOLVE(PFNGLPROGRAMLOCALPARAMETER4DVARBPROC, "glProgramLocalParameter4dvARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramLocalParameter4dvARB\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMLOCALPARAMETER4DVARBPROC)( target_, index_, params_ );
}

static void __stdcall glProgramLocalParameter4fARBWrapper(GLenum target_, GLuint index_, GLfloat x_, GLfloat y_, GLfloat z_, GLfloat w_)
{
  RESOLVE(PFNGLPROGRAMLOCALPARAMETER4FARBPROC, "glProgramLocalParameter4fARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramLocalParameter4fARB\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMLOCALPARAMETER4FARBPROC)( target_, index_, x_, y_, z_, w_ );
}

static void __stdcall glProgramLocalParameter4fvARBWrapper(GLenum target_, GLuint index_, const GLfloat* params_)
{
  RESOLVE(PFNGLPROGRAMLOCALPARAMETER4FVARBPROC, "glProgramLocalParameter4fvARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramLocalParameter4fvARB\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMLOCALPARAMETER4FVARBPROC)( target_, index_, params_ );
}

static void __stdcall glGetProgramEnvParameterdvARBWrapper(GLenum target_, GLuint index_, GLdouble* params_)
{
  RESOLVE(PFNGLGETPROGRAMENVPARAMETERDVARBPROC, "glGetProgramEnvParameterdvARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetProgramEnvParameterdvARB\n");
#endif
  RESOLVED_PROC(PFNGLGETPROGRAMENVPARAMETERDVARBPROC)( target_, index_, params_ );
}

static void __stdcall glGetProgramEnvParameterfvARBWrapper(GLenum target_, GLuint index_, GLfloat* params_)
{
  RESOLVE(PFNGLGETPROGRAMENVPARAMETERFVARBPROC, "glGetProgramEnvParameterfvARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetProgramEnvParameterfvARB\n");
#endif
  RESOLVED_PROC(PFNGLGETPROGRAMENVPARAMETERFVARBPROC)( target_, index_, params_ );
}

static void __stdcall glGetProgramLocalParameterdvARBWrapper(GLenum target_, GLuint index_, GLdouble* params_)
{
  RESOLVE(PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC, "glGetProgramLocalParameterdvARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetProgramLocalParameterdvARB\n");
#endif
  RESOLVED_PROC(PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC)( target_, index_, params_ );
}

static void __stdcall glGetProgramLocalParameterfvARBWrapper(GLenum target_, GLuint index_, GLfloat* params_)
{
  RESOLVE(PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC, "glGetProgramLocalParameterfvARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetProgramLocalParameterfvARB\n");
#endif
  RESOLVED_PROC(PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC)( target_, index_, params_ );
}

static void __stdcall glGetProgramivARBWrapper(GLenum target_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETPROGRAMIVARBPROC, "glGetProgramivARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetProgramivARB\n");
#endif
  RESOLVED_PROC(PFNGLGETPROGRAMIVARBPROC)( target_, pname_, params_ );
}

static void __stdcall glGetProgramStringARBWrapper(GLenum target_, GLenum pname_, void * string_)
{
  RESOLVE(PFNGLGETPROGRAMSTRINGARBPROC, "glGetProgramStringARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetProgramStringARB\n");
#endif
  RESOLVED_PROC(PFNGLGETPROGRAMSTRINGARBPROC)( target_, pname_, string_ );
}

static GLboolean __stdcall glIsProgramARBWrapper(GLuint program_)
{
  RESOLVE_RET(PFNGLISPROGRAMARBPROC, "glIsProgramARB", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIsProgramARB\n");
#endif
  return RESOLVED_PROC(PFNGLISPROGRAMARBPROC)( program_ );
}

/* No wrapper for glProgramParameteriARB, not in dispatch table */
/* No wrapper for glFramebufferTextureARB, not in dispatch table */
/* No wrapper for glFramebufferTextureLayerARB, not in dispatch table */
/* No wrapper for glFramebufferTextureFaceARB, not in dispatch table */
static void __stdcall glSpecializeShaderARBWrapper(GLuint shader_, const GLchar* pEntryPoint_, GLuint numSpecializationConstants_, const GLuint* pConstantIndex_, const GLuint* pConstantValue_)
{
  RESOLVE(PFNGLSPECIALIZESHADERARBPROC, "glSpecializeShaderARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSpecializeShaderARB\n");
#endif
  RESOLVED_PROC(PFNGLSPECIALIZESHADERARBPROC)( shader_, pEntryPoint_, numSpecializationConstants_, pConstantIndex_, pConstantValue_ );
}

static void __stdcall glUniform1i64ARBWrapper(GLint location_, GLint64 x_)
{
  RESOLVE(PFNGLUNIFORM1I64ARBPROC, "glUniform1i64ARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform1i64ARB\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM1I64ARBPROC)( location_, x_ );
}

static void __stdcall glUniform2i64ARBWrapper(GLint location_, GLint64 x_, GLint64 y_)
{
  RESOLVE(PFNGLUNIFORM2I64ARBPROC, "glUniform2i64ARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform2i64ARB\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM2I64ARBPROC)( location_, x_, y_ );
}

static void __stdcall glUniform3i64ARBWrapper(GLint location_, GLint64 x_, GLint64 y_, GLint64 z_)
{
  RESOLVE(PFNGLUNIFORM3I64ARBPROC, "glUniform3i64ARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform3i64ARB\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM3I64ARBPROC)( location_, x_, y_, z_ );
}

static void __stdcall glUniform4i64ARBWrapper(GLint location_, GLint64 x_, GLint64 y_, GLint64 z_, GLint64 w_)
{
  RESOLVE(PFNGLUNIFORM4I64ARBPROC, "glUniform4i64ARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform4i64ARB\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM4I64ARBPROC)( location_, x_, y_, z_, w_ );
}

static void __stdcall glUniform1i64vARBWrapper(GLint location_, GLsizei count_, const GLint64* value_)
{
  RESOLVE(PFNGLUNIFORM1I64VARBPROC, "glUniform1i64vARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform1i64vARB\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM1I64VARBPROC)( location_, count_, value_ );
}

static void __stdcall glUniform2i64vARBWrapper(GLint location_, GLsizei count_, const GLint64* value_)
{
  RESOLVE(PFNGLUNIFORM2I64VARBPROC, "glUniform2i64vARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform2i64vARB\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM2I64VARBPROC)( location_, count_, value_ );
}

static void __stdcall glUniform3i64vARBWrapper(GLint location_, GLsizei count_, const GLint64* value_)
{
  RESOLVE(PFNGLUNIFORM3I64VARBPROC, "glUniform3i64vARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform3i64vARB\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM3I64VARBPROC)( location_, count_, value_ );
}

static void __stdcall glUniform4i64vARBWrapper(GLint location_, GLsizei count_, const GLint64* value_)
{
  RESOLVE(PFNGLUNIFORM4I64VARBPROC, "glUniform4i64vARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform4i64vARB\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM4I64VARBPROC)( location_, count_, value_ );
}

static void __stdcall glUniform1ui64ARBWrapper(GLint location_, GLuint64 x_)
{
  RESOLVE(PFNGLUNIFORM1UI64ARBPROC, "glUniform1ui64ARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform1ui64ARB\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM1UI64ARBPROC)( location_, x_ );
}

static void __stdcall glUniform2ui64ARBWrapper(GLint location_, GLuint64 x_, GLuint64 y_)
{
  RESOLVE(PFNGLUNIFORM2UI64ARBPROC, "glUniform2ui64ARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform2ui64ARB\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM2UI64ARBPROC)( location_, x_, y_ );
}

static void __stdcall glUniform3ui64ARBWrapper(GLint location_, GLuint64 x_, GLuint64 y_, GLuint64 z_)
{
  RESOLVE(PFNGLUNIFORM3UI64ARBPROC, "glUniform3ui64ARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform3ui64ARB\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM3UI64ARBPROC)( location_, x_, y_, z_ );
}

static void __stdcall glUniform4ui64ARBWrapper(GLint location_, GLuint64 x_, GLuint64 y_, GLuint64 z_, GLuint64 w_)
{
  RESOLVE(PFNGLUNIFORM4UI64ARBPROC, "glUniform4ui64ARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform4ui64ARB\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM4UI64ARBPROC)( location_, x_, y_, z_, w_ );
}

static void __stdcall glUniform1ui64vARBWrapper(GLint location_, GLsizei count_, const GLuint64* value_)
{
  RESOLVE(PFNGLUNIFORM1UI64VARBPROC, "glUniform1ui64vARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform1ui64vARB\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM1UI64VARBPROC)( location_, count_, value_ );
}

static void __stdcall glUniform2ui64vARBWrapper(GLint location_, GLsizei count_, const GLuint64* value_)
{
  RESOLVE(PFNGLUNIFORM2UI64VARBPROC, "glUniform2ui64vARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform2ui64vARB\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM2UI64VARBPROC)( location_, count_, value_ );
}

static void __stdcall glUniform3ui64vARBWrapper(GLint location_, GLsizei count_, const GLuint64* value_)
{
  RESOLVE(PFNGLUNIFORM3UI64VARBPROC, "glUniform3ui64vARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform3ui64vARB\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM3UI64VARBPROC)( location_, count_, value_ );
}

static void __stdcall glUniform4ui64vARBWrapper(GLint location_, GLsizei count_, const GLuint64* value_)
{
  RESOLVE(PFNGLUNIFORM4UI64VARBPROC, "glUniform4ui64vARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUniform4ui64vARB\n");
#endif
  RESOLVED_PROC(PFNGLUNIFORM4UI64VARBPROC)( location_, count_, value_ );
}

static void __stdcall glGetUniformi64vARBWrapper(GLuint program_, GLint location_, GLint64* params_)
{
  RESOLVE(PFNGLGETUNIFORMI64VARBPROC, "glGetUniformi64vARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetUniformi64vARB\n");
#endif
  RESOLVED_PROC(PFNGLGETUNIFORMI64VARBPROC)( program_, location_, params_ );
}

static void __stdcall glGetUniformui64vARBWrapper(GLuint program_, GLint location_, GLuint64* params_)
{
  RESOLVE(PFNGLGETUNIFORMUI64VARBPROC, "glGetUniformui64vARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetUniformui64vARB\n");
#endif
  RESOLVED_PROC(PFNGLGETUNIFORMUI64VARBPROC)( program_, location_, params_ );
}

static void __stdcall glGetnUniformi64vARBWrapper(GLuint program_, GLint location_, GLsizei bufSize_, GLint64* params_)
{
  RESOLVE(PFNGLGETNUNIFORMI64VARBPROC, "glGetnUniformi64vARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetnUniformi64vARB\n");
#endif
  RESOLVED_PROC(PFNGLGETNUNIFORMI64VARBPROC)( program_, location_, bufSize_, params_ );
}

static void __stdcall glGetnUniformui64vARBWrapper(GLuint program_, GLint location_, GLsizei bufSize_, GLuint64* params_)
{
  RESOLVE(PFNGLGETNUNIFORMUI64VARBPROC, "glGetnUniformui64vARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetnUniformui64vARB\n");
#endif
  RESOLVED_PROC(PFNGLGETNUNIFORMUI64VARBPROC)( program_, location_, bufSize_, params_ );
}

static void __stdcall glProgramUniform1i64ARBWrapper(GLuint program_, GLint location_, GLint64 x_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM1I64ARBPROC, "glProgramUniform1i64ARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform1i64ARB\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM1I64ARBPROC)( program_, location_, x_ );
}

static void __stdcall glProgramUniform2i64ARBWrapper(GLuint program_, GLint location_, GLint64 x_, GLint64 y_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM2I64ARBPROC, "glProgramUniform2i64ARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform2i64ARB\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM2I64ARBPROC)( program_, location_, x_, y_ );
}

static void __stdcall glProgramUniform3i64ARBWrapper(GLuint program_, GLint location_, GLint64 x_, GLint64 y_, GLint64 z_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM3I64ARBPROC, "glProgramUniform3i64ARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform3i64ARB\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM3I64ARBPROC)( program_, location_, x_, y_, z_ );
}

static void __stdcall glProgramUniform4i64ARBWrapper(GLuint program_, GLint location_, GLint64 x_, GLint64 y_, GLint64 z_, GLint64 w_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM4I64ARBPROC, "glProgramUniform4i64ARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform4i64ARB\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM4I64ARBPROC)( program_, location_, x_, y_, z_, w_ );
}

static void __stdcall glProgramUniform1i64vARBWrapper(GLuint program_, GLint location_, GLsizei count_, const GLint64* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM1I64VARBPROC, "glProgramUniform1i64vARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform1i64vARB\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM1I64VARBPROC)( program_, location_, count_, value_ );
}

static void __stdcall glProgramUniform2i64vARBWrapper(GLuint program_, GLint location_, GLsizei count_, const GLint64* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM2I64VARBPROC, "glProgramUniform2i64vARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform2i64vARB\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM2I64VARBPROC)( program_, location_, count_, value_ );
}

static void __stdcall glProgramUniform3i64vARBWrapper(GLuint program_, GLint location_, GLsizei count_, const GLint64* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM3I64VARBPROC, "glProgramUniform3i64vARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform3i64vARB\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM3I64VARBPROC)( program_, location_, count_, value_ );
}

static void __stdcall glProgramUniform4i64vARBWrapper(GLuint program_, GLint location_, GLsizei count_, const GLint64* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM4I64VARBPROC, "glProgramUniform4i64vARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform4i64vARB\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM4I64VARBPROC)( program_, location_, count_, value_ );
}

static void __stdcall glProgramUniform1ui64ARBWrapper(GLuint program_, GLint location_, GLuint64 x_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM1UI64ARBPROC, "glProgramUniform1ui64ARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform1ui64ARB\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM1UI64ARBPROC)( program_, location_, x_ );
}

static void __stdcall glProgramUniform2ui64ARBWrapper(GLuint program_, GLint location_, GLuint64 x_, GLuint64 y_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM2UI64ARBPROC, "glProgramUniform2ui64ARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform2ui64ARB\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM2UI64ARBPROC)( program_, location_, x_, y_ );
}

static void __stdcall glProgramUniform3ui64ARBWrapper(GLuint program_, GLint location_, GLuint64 x_, GLuint64 y_, GLuint64 z_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM3UI64ARBPROC, "glProgramUniform3ui64ARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform3ui64ARB\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM3UI64ARBPROC)( program_, location_, x_, y_, z_ );
}

static void __stdcall glProgramUniform4ui64ARBWrapper(GLuint program_, GLint location_, GLuint64 x_, GLuint64 y_, GLuint64 z_, GLuint64 w_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM4UI64ARBPROC, "glProgramUniform4ui64ARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform4ui64ARB\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM4UI64ARBPROC)( program_, location_, x_, y_, z_, w_ );
}

static void __stdcall glProgramUniform1ui64vARBWrapper(GLuint program_, GLint location_, GLsizei count_, const GLuint64* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM1UI64VARBPROC, "glProgramUniform1ui64vARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform1ui64vARB\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM1UI64VARBPROC)( program_, location_, count_, value_ );
}

static void __stdcall glProgramUniform2ui64vARBWrapper(GLuint program_, GLint location_, GLsizei count_, const GLuint64* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM2UI64VARBPROC, "glProgramUniform2ui64vARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform2ui64vARB\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM2UI64VARBPROC)( program_, location_, count_, value_ );
}

static void __stdcall glProgramUniform3ui64vARBWrapper(GLuint program_, GLint location_, GLsizei count_, const GLuint64* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM3UI64VARBPROC, "glProgramUniform3ui64vARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform3ui64vARB\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM3UI64VARBPROC)( program_, location_, count_, value_ );
}

static void __stdcall glProgramUniform4ui64vARBWrapper(GLuint program_, GLint location_, GLsizei count_, const GLuint64* value_)
{
  RESOLVE(PFNGLPROGRAMUNIFORM4UI64VARBPROC, "glProgramUniform4ui64vARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramUniform4ui64vARB\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMUNIFORM4UI64VARBPROC)( program_, location_, count_, value_ );
}

static void __stdcall glColorTableWrapper(GLenum target_, GLenum internalformat_, GLsizei width_, GLenum format_, GLenum type_, const void * table_)
{
  RESOLVE(PFNGLCOLORTABLEPROC, "glColorTable");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColorTable\n");
#endif
  RESOLVED_PROC(PFNGLCOLORTABLEPROC)( target_, internalformat_, width_, format_, type_, table_ );
}

static void __stdcall glColorTableParameterfvWrapper(GLenum target_, GLenum pname_, const GLfloat* params_)
{
  RESOLVE(PFNGLCOLORTABLEPARAMETERFVPROC, "glColorTableParameterfv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColorTableParameterfv\n");
#endif
  RESOLVED_PROC(PFNGLCOLORTABLEPARAMETERFVPROC)( target_, pname_, params_ );
}

static void __stdcall glColorTableParameterivWrapper(GLenum target_, GLenum pname_, const GLint* params_)
{
  RESOLVE(PFNGLCOLORTABLEPARAMETERIVPROC, "glColorTableParameteriv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColorTableParameteriv\n");
#endif
  RESOLVED_PROC(PFNGLCOLORTABLEPARAMETERIVPROC)( target_, pname_, params_ );
}

static void __stdcall glCopyColorTableWrapper(GLenum target_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_)
{
  RESOLVE(PFNGLCOPYCOLORTABLEPROC, "glCopyColorTable");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCopyColorTable\n");
#endif
  RESOLVED_PROC(PFNGLCOPYCOLORTABLEPROC)( target_, internalformat_, x_, y_, width_ );
}

static void __stdcall glGetColorTableWrapper(GLenum target_, GLenum format_, GLenum type_, void * table_)
{
  RESOLVE(PFNGLGETCOLORTABLEPROC, "glGetColorTable");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetColorTable\n");
#endif
  RESOLVED_PROC(PFNGLGETCOLORTABLEPROC)( target_, format_, type_, table_ );
}

static void __stdcall glGetColorTableParameterfvWrapper(GLenum target_, GLenum pname_, GLfloat* params_)
{
  RESOLVE(PFNGLGETCOLORTABLEPARAMETERFVPROC, "glGetColorTableParameterfv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetColorTableParameterfv\n");
#endif
  RESOLVED_PROC(PFNGLGETCOLORTABLEPARAMETERFVPROC)( target_, pname_, params_ );
}

static void __stdcall glGetColorTableParameterivWrapper(GLenum target_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETCOLORTABLEPARAMETERIVPROC, "glGetColorTableParameteriv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetColorTableParameteriv\n");
#endif
  RESOLVED_PROC(PFNGLGETCOLORTABLEPARAMETERIVPROC)( target_, pname_, params_ );
}

static void __stdcall glColorSubTableWrapper(GLenum target_, GLsizei start_, GLsizei count_, GLenum format_, GLenum type_, const void * data_)
{
  RESOLVE(PFNGLCOLORSUBTABLEPROC, "glColorSubTable");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColorSubTable\n");
#endif
  RESOLVED_PROC(PFNGLCOLORSUBTABLEPROC)( target_, start_, count_, format_, type_, data_ );
}

static void __stdcall glCopyColorSubTableWrapper(GLenum target_, GLsizei start_, GLint x_, GLint y_, GLsizei width_)
{
  RESOLVE(PFNGLCOPYCOLORSUBTABLEPROC, "glCopyColorSubTable");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCopyColorSubTable\n");
#endif
  RESOLVED_PROC(PFNGLCOPYCOLORSUBTABLEPROC)( target_, start_, x_, y_, width_ );
}

static void __stdcall glConvolutionFilter1DWrapper(GLenum target_, GLenum internalformat_, GLsizei width_, GLenum format_, GLenum type_, const void * image_)
{
  RESOLVE(PFNGLCONVOLUTIONFILTER1DPROC, "glConvolutionFilter1D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glConvolutionFilter1D\n");
#endif
  RESOLVED_PROC(PFNGLCONVOLUTIONFILTER1DPROC)( target_, internalformat_, width_, format_, type_, image_ );
}

static void __stdcall glConvolutionFilter2DWrapper(GLenum target_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, const void * image_)
{
  RESOLVE(PFNGLCONVOLUTIONFILTER2DPROC, "glConvolutionFilter2D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glConvolutionFilter2D\n");
#endif
  RESOLVED_PROC(PFNGLCONVOLUTIONFILTER2DPROC)( target_, internalformat_, width_, height_, format_, type_, image_ );
}

static void __stdcall glConvolutionParameterfWrapper(GLenum target_, GLenum pname_, GLfloat params_)
{
  RESOLVE(PFNGLCONVOLUTIONPARAMETERFPROC, "glConvolutionParameterf");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glConvolutionParameterf\n");
#endif
  RESOLVED_PROC(PFNGLCONVOLUTIONPARAMETERFPROC)( target_, pname_, params_ );
}

static void __stdcall glConvolutionParameterfvWrapper(GLenum target_, GLenum pname_, const GLfloat* params_)
{
  RESOLVE(PFNGLCONVOLUTIONPARAMETERFVPROC, "glConvolutionParameterfv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glConvolutionParameterfv\n");
#endif
  RESOLVED_PROC(PFNGLCONVOLUTIONPARAMETERFVPROC)( target_, pname_, params_ );
}

static void __stdcall glConvolutionParameteriWrapper(GLenum target_, GLenum pname_, GLint params_)
{
  RESOLVE(PFNGLCONVOLUTIONPARAMETERIPROC, "glConvolutionParameteri");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glConvolutionParameteri\n");
#endif
  RESOLVED_PROC(PFNGLCONVOLUTIONPARAMETERIPROC)( target_, pname_, params_ );
}

static void __stdcall glConvolutionParameterivWrapper(GLenum target_, GLenum pname_, const GLint* params_)
{
  RESOLVE(PFNGLCONVOLUTIONPARAMETERIVPROC, "glConvolutionParameteriv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glConvolutionParameteriv\n");
#endif
  RESOLVED_PROC(PFNGLCONVOLUTIONPARAMETERIVPROC)( target_, pname_, params_ );
}

static void __stdcall glCopyConvolutionFilter1DWrapper(GLenum target_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_)
{
  RESOLVE(PFNGLCOPYCONVOLUTIONFILTER1DPROC, "glCopyConvolutionFilter1D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCopyConvolutionFilter1D\n");
#endif
  RESOLVED_PROC(PFNGLCOPYCONVOLUTIONFILTER1DPROC)( target_, internalformat_, x_, y_, width_ );
}

static void __stdcall glCopyConvolutionFilter2DWrapper(GLenum target_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_, GLsizei height_)
{
  RESOLVE(PFNGLCOPYCONVOLUTIONFILTER2DPROC, "glCopyConvolutionFilter2D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCopyConvolutionFilter2D\n");
#endif
  RESOLVED_PROC(PFNGLCOPYCONVOLUTIONFILTER2DPROC)( target_, internalformat_, x_, y_, width_, height_ );
}

static void __stdcall glGetConvolutionFilterWrapper(GLenum target_, GLenum format_, GLenum type_, void * image_)
{
  RESOLVE(PFNGLGETCONVOLUTIONFILTERPROC, "glGetConvolutionFilter");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetConvolutionFilter\n");
#endif
  RESOLVED_PROC(PFNGLGETCONVOLUTIONFILTERPROC)( target_, format_, type_, image_ );
}

static void __stdcall glGetConvolutionParameterfvWrapper(GLenum target_, GLenum pname_, GLfloat* params_)
{
  RESOLVE(PFNGLGETCONVOLUTIONPARAMETERFVPROC, "glGetConvolutionParameterfv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetConvolutionParameterfv\n");
#endif
  RESOLVED_PROC(PFNGLGETCONVOLUTIONPARAMETERFVPROC)( target_, pname_, params_ );
}

static void __stdcall glGetConvolutionParameterivWrapper(GLenum target_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETCONVOLUTIONPARAMETERIVPROC, "glGetConvolutionParameteriv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetConvolutionParameteriv\n");
#endif
  RESOLVED_PROC(PFNGLGETCONVOLUTIONPARAMETERIVPROC)( target_, pname_, params_ );
}

static void __stdcall glGetSeparableFilterWrapper(GLenum target_, GLenum format_, GLenum type_, void * row_, void * column_, void * span_)
{
  RESOLVE(PFNGLGETSEPARABLEFILTERPROC, "glGetSeparableFilter");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetSeparableFilter\n");
#endif
  RESOLVED_PROC(PFNGLGETSEPARABLEFILTERPROC)( target_, format_, type_, row_, column_, span_ );
}

static void __stdcall glSeparableFilter2DWrapper(GLenum target_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, const void * row_, const void * column_)
{
  RESOLVE(PFNGLSEPARABLEFILTER2DPROC, "glSeparableFilter2D");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSeparableFilter2D\n");
#endif
  RESOLVED_PROC(PFNGLSEPARABLEFILTER2DPROC)( target_, internalformat_, width_, height_, format_, type_, row_, column_ );
}

static void __stdcall glGetHistogramWrapper(GLenum target_, GLboolean reset_, GLenum format_, GLenum type_, void * values_)
{
  RESOLVE(PFNGLGETHISTOGRAMPROC, "glGetHistogram");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetHistogram\n");
#endif
  RESOLVED_PROC(PFNGLGETHISTOGRAMPROC)( target_, reset_, format_, type_, values_ );
}

static void __stdcall glGetHistogramParameterfvWrapper(GLenum target_, GLenum pname_, GLfloat* params_)
{
  RESOLVE(PFNGLGETHISTOGRAMPARAMETERFVPROC, "glGetHistogramParameterfv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetHistogramParameterfv\n");
#endif
  RESOLVED_PROC(PFNGLGETHISTOGRAMPARAMETERFVPROC)( target_, pname_, params_ );
}

static void __stdcall glGetHistogramParameterivWrapper(GLenum target_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETHISTOGRAMPARAMETERIVPROC, "glGetHistogramParameteriv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetHistogramParameteriv\n");
#endif
  RESOLVED_PROC(PFNGLGETHISTOGRAMPARAMETERIVPROC)( target_, pname_, params_ );
}

static void __stdcall glGetMinmaxWrapper(GLenum target_, GLboolean reset_, GLenum format_, GLenum type_, void * values_)
{
  RESOLVE(PFNGLGETMINMAXPROC, "glGetMinmax");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetMinmax\n");
#endif
  RESOLVED_PROC(PFNGLGETMINMAXPROC)( target_, reset_, format_, type_, values_ );
}

static void __stdcall glGetMinmaxParameterfvWrapper(GLenum target_, GLenum pname_, GLfloat* params_)
{
  RESOLVE(PFNGLGETMINMAXPARAMETERFVPROC, "glGetMinmaxParameterfv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetMinmaxParameterfv\n");
#endif
  RESOLVED_PROC(PFNGLGETMINMAXPARAMETERFVPROC)( target_, pname_, params_ );
}

static void __stdcall glGetMinmaxParameterivWrapper(GLenum target_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETMINMAXPARAMETERIVPROC, "glGetMinmaxParameteriv");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetMinmaxParameteriv\n");
#endif
  RESOLVED_PROC(PFNGLGETMINMAXPARAMETERIVPROC)( target_, pname_, params_ );
}

static void __stdcall glHistogramWrapper(GLenum target_, GLsizei width_, GLenum internalformat_, GLboolean sink_)
{
  RESOLVE(PFNGLHISTOGRAMPROC, "glHistogram");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glHistogram\n");
#endif
  RESOLVED_PROC(PFNGLHISTOGRAMPROC)( target_, width_, internalformat_, sink_ );
}

static void __stdcall glMinmaxWrapper(GLenum target_, GLenum internalformat_, GLboolean sink_)
{
  RESOLVE(PFNGLMINMAXPROC, "glMinmax");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMinmax\n");
#endif
  RESOLVED_PROC(PFNGLMINMAXPROC)( target_, internalformat_, sink_ );
}

static void __stdcall glResetHistogramWrapper(GLenum target_)
{
  RESOLVE(PFNGLRESETHISTOGRAMPROC, "glResetHistogram");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glResetHistogram\n");
#endif
  RESOLVED_PROC(PFNGLRESETHISTOGRAMPROC)( target_ );
}

static void __stdcall glResetMinmaxWrapper(GLenum target_)
{
  RESOLVE(PFNGLRESETMINMAXPROC, "glResetMinmax");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glResetMinmax\n");
#endif
  RESOLVED_PROC(PFNGLRESETMINMAXPROC)( target_ );
}

static void __stdcall glMultiDrawArraysIndirectCountARBWrapper(GLenum mode_, const void * indirect_, GLintptr drawcount_, GLsizei maxdrawcount_, GLsizei stride_)
{
  RESOLVE(PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC, "glMultiDrawArraysIndirectCountARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiDrawArraysIndirectCountARB\n");
#endif
  RESOLVED_PROC(PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC)( mode_, indirect_, drawcount_, maxdrawcount_, stride_ );
}

static void __stdcall glMultiDrawElementsIndirectCountARBWrapper(GLenum mode_, GLenum type_, const void * indirect_, GLintptr drawcount_, GLsizei maxdrawcount_, GLsizei stride_)
{
  RESOLVE(PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC, "glMultiDrawElementsIndirectCountARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiDrawElementsIndirectCountARB\n");
#endif
  RESOLVED_PROC(PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC)( mode_, type_, indirect_, drawcount_, maxdrawcount_, stride_ );
}

/* No wrapper for glVertexAttribDivisorARB, not in dispatch table */
/* No wrapper for glCurrentPaletteMatrixARB, not in dispatch table */
/* No wrapper for glMatrixIndexubvARB, not in dispatch table */
/* No wrapper for glMatrixIndexusvARB, not in dispatch table */
/* No wrapper for glMatrixIndexuivARB, not in dispatch table */
/* No wrapper for glMatrixIndexPointerARB, not in dispatch table */
/* No wrapper for glSampleCoverageARB, not in dispatch table */
/* No wrapper for glActiveTextureARB, not in dispatch table */
/* No wrapper for glClientActiveTextureARB, not in dispatch table */
/* No wrapper for glMultiTexCoord1dARB, not in dispatch table */
/* No wrapper for glMultiTexCoord1dvARB, not in dispatch table */
static void __stdcall glMultiTexCoord1fARBWrapper(GLenum target_, GLfloat s_)
{
  RESOLVE(PFNGLMULTITEXCOORD1FARBPROC, "glMultiTexCoord1fARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord1fARB\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD1FARBPROC)( target_, s_ );
}

static void __stdcall glMultiTexCoord1fvARBWrapper(GLenum target_, const GLfloat* v_)
{
  RESOLVE(PFNGLMULTITEXCOORD1FVARBPROC, "glMultiTexCoord1fvARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord1fvARB\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD1FVARBPROC)( target_, v_ );
}

/* No wrapper for glMultiTexCoord1iARB, not in dispatch table */
/* No wrapper for glMultiTexCoord1ivARB, not in dispatch table */
/* No wrapper for glMultiTexCoord1sARB, not in dispatch table */
/* No wrapper for glMultiTexCoord1svARB, not in dispatch table */
/* No wrapper for glMultiTexCoord2dARB, not in dispatch table */
/* No wrapper for glMultiTexCoord2dvARB, not in dispatch table */
static void __stdcall glMultiTexCoord2fARBWrapper(GLenum target_, GLfloat s_, GLfloat t_)
{
  RESOLVE(PFNGLMULTITEXCOORD2FARBPROC, "glMultiTexCoord2fARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord2fARB\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD2FARBPROC)( target_, s_, t_ );
}

static void __stdcall glMultiTexCoord2fvARBWrapper(GLenum target_, const GLfloat* v_)
{
  RESOLVE(PFNGLMULTITEXCOORD2FVARBPROC, "glMultiTexCoord2fvARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord2fvARB\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD2FVARBPROC)( target_, v_ );
}

/* No wrapper for glMultiTexCoord2iARB, not in dispatch table */
/* No wrapper for glMultiTexCoord2ivARB, not in dispatch table */
/* No wrapper for glMultiTexCoord2sARB, not in dispatch table */
/* No wrapper for glMultiTexCoord2svARB, not in dispatch table */
/* No wrapper for glMultiTexCoord3dARB, not in dispatch table */
/* No wrapper for glMultiTexCoord3dvARB, not in dispatch table */
static void __stdcall glMultiTexCoord3fARBWrapper(GLenum target_, GLfloat s_, GLfloat t_, GLfloat r_)
{
  RESOLVE(PFNGLMULTITEXCOORD3FARBPROC, "glMultiTexCoord3fARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord3fARB\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD3FARBPROC)( target_, s_, t_, r_ );
}

static void __stdcall glMultiTexCoord3fvARBWrapper(GLenum target_, const GLfloat* v_)
{
  RESOLVE(PFNGLMULTITEXCOORD3FVARBPROC, "glMultiTexCoord3fvARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord3fvARB\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD3FVARBPROC)( target_, v_ );
}

/* No wrapper for glMultiTexCoord3iARB, not in dispatch table */
/* No wrapper for glMultiTexCoord3ivARB, not in dispatch table */
/* No wrapper for glMultiTexCoord3sARB, not in dispatch table */
/* No wrapper for glMultiTexCoord3svARB, not in dispatch table */
/* No wrapper for glMultiTexCoord4dARB, not in dispatch table */
/* No wrapper for glMultiTexCoord4dvARB, not in dispatch table */
static void __stdcall glMultiTexCoord4fARBWrapper(GLenum target_, GLfloat s_, GLfloat t_, GLfloat r_, GLfloat q_)
{
  RESOLVE(PFNGLMULTITEXCOORD4FARBPROC, "glMultiTexCoord4fARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord4fARB\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD4FARBPROC)( target_, s_, t_, r_, q_ );
}

static void __stdcall glMultiTexCoord4fvARBWrapper(GLenum target_, const GLfloat* v_)
{
  RESOLVE(PFNGLMULTITEXCOORD4FVARBPROC, "glMultiTexCoord4fvARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord4fvARB\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD4FVARBPROC)( target_, v_ );
}

/* No wrapper for glMultiTexCoord4iARB, not in dispatch table */
/* No wrapper for glMultiTexCoord4ivARB, not in dispatch table */
/* No wrapper for glMultiTexCoord4sARB, not in dispatch table */
/* No wrapper for glMultiTexCoord4svARB, not in dispatch table */
/* No wrapper for glGenQueriesARB, not in dispatch table */
/* No wrapper for glDeleteQueriesARB, not in dispatch table */
/* No wrapper for glIsQueryARB, not in dispatch table */
/* No wrapper for glBeginQueryARB, not in dispatch table */
/* No wrapper for glEndQueryARB, not in dispatch table */
/* No wrapper for glGetQueryivARB, not in dispatch table */
/* No wrapper for glGetQueryObjectivARB, not in dispatch table */
/* No wrapper for glGetQueryObjectuivARB, not in dispatch table */
/* No wrapper for glMaxShaderCompilerThreadsARB, not in dispatch table */
/* No wrapper for glPointParameterfARB, not in dispatch table */
/* No wrapper for glPointParameterfvARB, not in dispatch table */
static GLenum __stdcall glGetGraphicsResetStatusARBWrapper(void)
{
  RESOLVE_RET(PFNGLGETGRAPHICSRESETSTATUSARBPROC, "glGetGraphicsResetStatusARB", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetGraphicsResetStatusARB\n");
#endif
  return RESOLVED_PROC(PFNGLGETGRAPHICSRESETSTATUSARBPROC)(  );
}

static void __stdcall glGetnTexImageARBWrapper(GLenum target_, GLint level_, GLenum format_, GLenum type_, GLsizei bufSize_, void * img_)
{
  RESOLVE(PFNGLGETNTEXIMAGEARBPROC, "glGetnTexImageARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetnTexImageARB\n");
#endif
  RESOLVED_PROC(PFNGLGETNTEXIMAGEARBPROC)( target_, level_, format_, type_, bufSize_, img_ );
}

static void __stdcall glReadnPixelsARBWrapper(GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, GLsizei bufSize_, void * data_)
{
  RESOLVE(PFNGLREADNPIXELSARBPROC, "glReadnPixelsARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glReadnPixelsARB\n");
#endif
  RESOLVED_PROC(PFNGLREADNPIXELSARBPROC)( x_, y_, width_, height_, format_, type_, bufSize_, data_ );
}

static void __stdcall glGetnCompressedTexImageARBWrapper(GLenum target_, GLint lod_, GLsizei bufSize_, void * img_)
{
  RESOLVE(PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC, "glGetnCompressedTexImageARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetnCompressedTexImageARB\n");
#endif
  RESOLVED_PROC(PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC)( target_, lod_, bufSize_, img_ );
}

static void __stdcall glGetnUniformfvARBWrapper(GLuint program_, GLint location_, GLsizei bufSize_, GLfloat* params_)
{
  RESOLVE(PFNGLGETNUNIFORMFVARBPROC, "glGetnUniformfvARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetnUniformfvARB\n");
#endif
  RESOLVED_PROC(PFNGLGETNUNIFORMFVARBPROC)( program_, location_, bufSize_, params_ );
}

static void __stdcall glGetnUniformivARBWrapper(GLuint program_, GLint location_, GLsizei bufSize_, GLint* params_)
{
  RESOLVE(PFNGLGETNUNIFORMIVARBPROC, "glGetnUniformivARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetnUniformivARB\n");
#endif
  RESOLVED_PROC(PFNGLGETNUNIFORMIVARBPROC)( program_, location_, bufSize_, params_ );
}

static void __stdcall glGetnUniformuivARBWrapper(GLuint program_, GLint location_, GLsizei bufSize_, GLuint* params_)
{
  RESOLVE(PFNGLGETNUNIFORMUIVARBPROC, "glGetnUniformuivARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetnUniformuivARB\n");
#endif
  RESOLVED_PROC(PFNGLGETNUNIFORMUIVARBPROC)( program_, location_, bufSize_, params_ );
}

static void __stdcall glGetnUniformdvARBWrapper(GLuint program_, GLint location_, GLsizei bufSize_, GLdouble* params_)
{
  RESOLVE(PFNGLGETNUNIFORMDVARBPROC, "glGetnUniformdvARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetnUniformdvARB\n");
#endif
  RESOLVED_PROC(PFNGLGETNUNIFORMDVARBPROC)( program_, location_, bufSize_, params_ );
}

static void __stdcall glGetnMapdvARBWrapper(GLenum target_, GLenum query_, GLsizei bufSize_, GLdouble* v_)
{
  RESOLVE(PFNGLGETNMAPDVARBPROC, "glGetnMapdvARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetnMapdvARB\n");
#endif
  RESOLVED_PROC(PFNGLGETNMAPDVARBPROC)( target_, query_, bufSize_, v_ );
}

static void __stdcall glGetnMapfvARBWrapper(GLenum target_, GLenum query_, GLsizei bufSize_, GLfloat* v_)
{
  RESOLVE(PFNGLGETNMAPFVARBPROC, "glGetnMapfvARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetnMapfvARB\n");
#endif
  RESOLVED_PROC(PFNGLGETNMAPFVARBPROC)( target_, query_, bufSize_, v_ );
}

static void __stdcall glGetnMapivARBWrapper(GLenum target_, GLenum query_, GLsizei bufSize_, GLint* v_)
{
  RESOLVE(PFNGLGETNMAPIVARBPROC, "glGetnMapivARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetnMapivARB\n");
#endif
  RESOLVED_PROC(PFNGLGETNMAPIVARBPROC)( target_, query_, bufSize_, v_ );
}

static void __stdcall glGetnPixelMapfvARBWrapper(GLenum map_, GLsizei bufSize_, GLfloat* values_)
{
  RESOLVE(PFNGLGETNPIXELMAPFVARBPROC, "glGetnPixelMapfvARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetnPixelMapfvARB\n");
#endif
  RESOLVED_PROC(PFNGLGETNPIXELMAPFVARBPROC)( map_, bufSize_, values_ );
}

static void __stdcall glGetnPixelMapuivARBWrapper(GLenum map_, GLsizei bufSize_, GLuint* values_)
{
  RESOLVE(PFNGLGETNPIXELMAPUIVARBPROC, "glGetnPixelMapuivARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetnPixelMapuivARB\n");
#endif
  RESOLVED_PROC(PFNGLGETNPIXELMAPUIVARBPROC)( map_, bufSize_, values_ );
}

static void __stdcall glGetnPixelMapusvARBWrapper(GLenum map_, GLsizei bufSize_, GLushort* values_)
{
  RESOLVE(PFNGLGETNPIXELMAPUSVARBPROC, "glGetnPixelMapusvARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetnPixelMapusvARB\n");
#endif
  RESOLVED_PROC(PFNGLGETNPIXELMAPUSVARBPROC)( map_, bufSize_, values_ );
}

static void __stdcall glGetnPolygonStippleARBWrapper(GLsizei bufSize_, GLubyte* pattern_)
{
  RESOLVE(PFNGLGETNPOLYGONSTIPPLEARBPROC, "glGetnPolygonStippleARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetnPolygonStippleARB\n");
#endif
  RESOLVED_PROC(PFNGLGETNPOLYGONSTIPPLEARBPROC)( bufSize_, pattern_ );
}

static void __stdcall glGetnColorTableARBWrapper(GLenum target_, GLenum format_, GLenum type_, GLsizei bufSize_, void * table_)
{
  RESOLVE(PFNGLGETNCOLORTABLEARBPROC, "glGetnColorTableARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetnColorTableARB\n");
#endif
  RESOLVED_PROC(PFNGLGETNCOLORTABLEARBPROC)( target_, format_, type_, bufSize_, table_ );
}

static void __stdcall glGetnConvolutionFilterARBWrapper(GLenum target_, GLenum format_, GLenum type_, GLsizei bufSize_, void * image_)
{
  RESOLVE(PFNGLGETNCONVOLUTIONFILTERARBPROC, "glGetnConvolutionFilterARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetnConvolutionFilterARB\n");
#endif
  RESOLVED_PROC(PFNGLGETNCONVOLUTIONFILTERARBPROC)( target_, format_, type_, bufSize_, image_ );
}

static void __stdcall glGetnSeparableFilterARBWrapper(GLenum target_, GLenum format_, GLenum type_, GLsizei rowBufSize_, void * row_, GLsizei columnBufSize_, void * column_, void * span_)
{
  RESOLVE(PFNGLGETNSEPARABLEFILTERARBPROC, "glGetnSeparableFilterARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetnSeparableFilterARB\n");
#endif
  RESOLVED_PROC(PFNGLGETNSEPARABLEFILTERARBPROC)( target_, format_, type_, rowBufSize_, row_, columnBufSize_, column_, span_ );
}

static void __stdcall glGetnHistogramARBWrapper(GLenum target_, GLboolean reset_, GLenum format_, GLenum type_, GLsizei bufSize_, void * values_)
{
  RESOLVE(PFNGLGETNHISTOGRAMARBPROC, "glGetnHistogramARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetnHistogramARB\n");
#endif
  RESOLVED_PROC(PFNGLGETNHISTOGRAMARBPROC)( target_, reset_, format_, type_, bufSize_, values_ );
}

static void __stdcall glGetnMinmaxARBWrapper(GLenum target_, GLboolean reset_, GLenum format_, GLenum type_, GLsizei bufSize_, void * values_)
{
  RESOLVE(PFNGLGETNMINMAXARBPROC, "glGetnMinmaxARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetnMinmaxARB\n");
#endif
  RESOLVED_PROC(PFNGLGETNMINMAXARBPROC)( target_, reset_, format_, type_, bufSize_, values_ );
}

static void __stdcall glFramebufferSampleLocationsfvARBWrapper(GLenum target_, GLuint start_, GLsizei count_, const GLfloat* v_)
{
  RESOLVE(PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC, "glFramebufferSampleLocationsfvARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFramebufferSampleLocationsfvARB\n");
#endif
  RESOLVED_PROC(PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC)( target_, start_, count_, v_ );
}

static void __stdcall glNamedFramebufferSampleLocationsfvARBWrapper(GLuint framebuffer_, GLuint start_, GLsizei count_, const GLfloat* v_)
{
  RESOLVE(PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC, "glNamedFramebufferSampleLocationsfvARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedFramebufferSampleLocationsfvARB\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC)( framebuffer_, start_, count_, v_ );
}

static void __stdcall glEvaluateDepthValuesARBWrapper(void)
{
  RESOLVE(PFNGLEVALUATEDEPTHVALUESARBPROC, "glEvaluateDepthValuesARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEvaluateDepthValuesARB\n");
#endif
  RESOLVED_PROC(PFNGLEVALUATEDEPTHVALUESARBPROC)(  );
}

/* No wrapper for glMinSampleShadingARB, not in dispatch table */
static void __stdcall glDeleteObjectARBWrapper(GLhandleARB obj_)
{
  RESOLVE(PFNGLDELETEOBJECTARBPROC, "glDeleteObjectARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDeleteObjectARB\n");
#endif
  RESOLVED_PROC(PFNGLDELETEOBJECTARBPROC)( obj_ );
}

static GLhandleARB __stdcall glGetHandleARBWrapper(GLenum pname_)
{
  RESOLVE_RET(PFNGLGETHANDLEARBPROC, "glGetHandleARB", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetHandleARB\n");
#endif
  return RESOLVED_PROC(PFNGLGETHANDLEARBPROC)( pname_ );
}

static void __stdcall glDetachObjectARBWrapper(GLhandleARB containerObj_, GLhandleARB attachedObj_)
{
  RESOLVE(PFNGLDETACHOBJECTARBPROC, "glDetachObjectARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDetachObjectARB\n");
#endif
  RESOLVED_PROC(PFNGLDETACHOBJECTARBPROC)( containerObj_, attachedObj_ );
}

static GLhandleARB __stdcall glCreateShaderObjectARBWrapper(GLenum shaderType_)
{
  RESOLVE_RET(PFNGLCREATESHADEROBJECTARBPROC, "glCreateShaderObjectARB", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCreateShaderObjectARB\n");
#endif
  return RESOLVED_PROC(PFNGLCREATESHADEROBJECTARBPROC)( shaderType_ );
}

/* No wrapper for glShaderSourceARB, not in dispatch table */
/* No wrapper for glCompileShaderARB, not in dispatch table */
static GLhandleARB __stdcall glCreateProgramObjectARBWrapper(void)
{
  RESOLVE_RET(PFNGLCREATEPROGRAMOBJECTARBPROC, "glCreateProgramObjectARB", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCreateProgramObjectARB\n");
#endif
  return RESOLVED_PROC(PFNGLCREATEPROGRAMOBJECTARBPROC)(  );
}

static void __stdcall glAttachObjectARBWrapper(GLhandleARB containerObj_, GLhandleARB obj_)
{
  RESOLVE(PFNGLATTACHOBJECTARBPROC, "glAttachObjectARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glAttachObjectARB\n");
#endif
  RESOLVED_PROC(PFNGLATTACHOBJECTARBPROC)( containerObj_, obj_ );
}

/* No wrapper for glLinkProgramARB, not in dispatch table */
/* No wrapper for glUseProgramObjectARB, not in dispatch table */
/* No wrapper for glValidateProgramARB, not in dispatch table */
/* No wrapper for glUniform1fARB, not in dispatch table */
/* No wrapper for glUniform2fARB, not in dispatch table */
/* No wrapper for glUniform3fARB, not in dispatch table */
/* No wrapper for glUniform4fARB, not in dispatch table */
/* No wrapper for glUniform1iARB, not in dispatch table */
/* No wrapper for glUniform2iARB, not in dispatch table */
/* No wrapper for glUniform3iARB, not in dispatch table */
/* No wrapper for glUniform4iARB, not in dispatch table */
/* No wrapper for glUniform1fvARB, not in dispatch table */
/* No wrapper for glUniform2fvARB, not in dispatch table */
/* No wrapper for glUniform3fvARB, not in dispatch table */
/* No wrapper for glUniform4fvARB, not in dispatch table */
/* No wrapper for glUniform1ivARB, not in dispatch table */
/* No wrapper for glUniform2ivARB, not in dispatch table */
/* No wrapper for glUniform3ivARB, not in dispatch table */
/* No wrapper for glUniform4ivARB, not in dispatch table */
/* No wrapper for glUniformMatrix2fvARB, not in dispatch table */
/* No wrapper for glUniformMatrix3fvARB, not in dispatch table */
/* No wrapper for glUniformMatrix4fvARB, not in dispatch table */
static void __stdcall glGetObjectParameterfvARBWrapper(GLhandleARB obj_, GLenum pname_, GLfloat* params_)
{
  RESOLVE(PFNGLGETOBJECTPARAMETERFVARBPROC, "glGetObjectParameterfvARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetObjectParameterfvARB\n");
#endif
  RESOLVED_PROC(PFNGLGETOBJECTPARAMETERFVARBPROC)( obj_, pname_, params_ );
}

static void __stdcall glGetObjectParameterivARBWrapper(GLhandleARB obj_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETOBJECTPARAMETERIVARBPROC, "glGetObjectParameterivARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetObjectParameterivARB\n");
#endif
  RESOLVED_PROC(PFNGLGETOBJECTPARAMETERIVARBPROC)( obj_, pname_, params_ );
}

static void __stdcall glGetInfoLogARBWrapper(GLhandleARB obj_, GLsizei maxLength_, GLsizei* length_, GLcharARB* infoLog_)
{
  RESOLVE(PFNGLGETINFOLOGARBPROC, "glGetInfoLogARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetInfoLogARB\n");
#endif
  RESOLVED_PROC(PFNGLGETINFOLOGARBPROC)( obj_, maxLength_, length_, infoLog_ );
}

static void __stdcall glGetAttachedObjectsARBWrapper(GLhandleARB containerObj_, GLsizei maxCount_, GLsizei* count_, GLhandleARB* obj_)
{
  RESOLVE(PFNGLGETATTACHEDOBJECTSARBPROC, "glGetAttachedObjectsARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetAttachedObjectsARB\n");
#endif
  RESOLVED_PROC(PFNGLGETATTACHEDOBJECTSARBPROC)( containerObj_, maxCount_, count_, obj_ );
}

/* No wrapper for glGetUniformLocationARB, not in dispatch table */
/* No wrapper for glGetActiveUniformARB, not in dispatch table */
/* No wrapper for glGetUniformfvARB, not in dispatch table */
/* No wrapper for glGetUniformivARB, not in dispatch table */
/* No wrapper for glGetShaderSourceARB, not in dispatch table */
static void __stdcall glNamedStringARBWrapper(GLenum type_, GLint namelen_, const GLchar* name_, GLint stringlen_, const GLchar* string_)
{
  RESOLVE(PFNGLNAMEDSTRINGARBPROC, "glNamedStringARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedStringARB\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDSTRINGARBPROC)( type_, namelen_, name_, stringlen_, string_ );
}

static void __stdcall glDeleteNamedStringARBWrapper(GLint namelen_, const GLchar* name_)
{
  RESOLVE(PFNGLDELETENAMEDSTRINGARBPROC, "glDeleteNamedStringARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDeleteNamedStringARB\n");
#endif
  RESOLVED_PROC(PFNGLDELETENAMEDSTRINGARBPROC)( namelen_, name_ );
}

static void __stdcall glCompileShaderIncludeARBWrapper(GLuint shader_, GLsizei count_, const GLchar*const* path_, const GLint* length_)
{
  RESOLVE(PFNGLCOMPILESHADERINCLUDEARBPROC, "glCompileShaderIncludeARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCompileShaderIncludeARB\n");
#endif
  RESOLVED_PROC(PFNGLCOMPILESHADERINCLUDEARBPROC)( shader_, count_, path_, length_ );
}

static GLboolean __stdcall glIsNamedStringARBWrapper(GLint namelen_, const GLchar* name_)
{
  RESOLVE_RET(PFNGLISNAMEDSTRINGARBPROC, "glIsNamedStringARB", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIsNamedStringARB\n");
#endif
  return RESOLVED_PROC(PFNGLISNAMEDSTRINGARBPROC)( namelen_, name_ );
}

static void __stdcall glGetNamedStringARBWrapper(GLint namelen_, const GLchar* name_, GLsizei bufSize_, GLint* stringlen_, GLchar* string_)
{
  RESOLVE(PFNGLGETNAMEDSTRINGARBPROC, "glGetNamedStringARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetNamedStringARB\n");
#endif
  RESOLVED_PROC(PFNGLGETNAMEDSTRINGARBPROC)( namelen_, name_, bufSize_, stringlen_, string_ );
}

static void __stdcall glGetNamedStringivARBWrapper(GLint namelen_, const GLchar* name_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETNAMEDSTRINGIVARBPROC, "glGetNamedStringivARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetNamedStringivARB\n");
#endif
  RESOLVED_PROC(PFNGLGETNAMEDSTRINGIVARBPROC)( namelen_, name_, pname_, params_ );
}

static void __stdcall glBufferPageCommitmentARBWrapper(GLenum target_, GLintptr offset_, GLsizeiptr size_, GLboolean commit_)
{
  RESOLVE(PFNGLBUFFERPAGECOMMITMENTARBPROC, "glBufferPageCommitmentARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBufferPageCommitmentARB\n");
#endif
  RESOLVED_PROC(PFNGLBUFFERPAGECOMMITMENTARBPROC)( target_, offset_, size_, commit_ );
}

static void __stdcall glNamedBufferPageCommitmentEXTWrapper(GLuint buffer_, GLintptr offset_, GLsizeiptr size_, GLboolean commit_)
{
  RESOLVE(PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC, "glNamedBufferPageCommitmentEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedBufferPageCommitmentEXT\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC)( buffer_, offset_, size_, commit_ );
}

static void __stdcall glNamedBufferPageCommitmentARBWrapper(GLuint buffer_, GLintptr offset_, GLsizeiptr size_, GLboolean commit_)
{
  RESOLVE(PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC, "glNamedBufferPageCommitmentARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedBufferPageCommitmentARB\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC)( buffer_, offset_, size_, commit_ );
}

static void __stdcall glTexPageCommitmentARBWrapper(GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLboolean commit_)
{
  RESOLVE(PFNGLTEXPAGECOMMITMENTARBPROC, "glTexPageCommitmentARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexPageCommitmentARB\n");
#endif
  RESOLVED_PROC(PFNGLTEXPAGECOMMITMENTARBPROC)( target_, level_, xoffset_, yoffset_, zoffset_, width_, height_, depth_, commit_ );
}

/* No wrapper for glTexBufferARB, not in dispatch table */
/* No wrapper for glCompressedTexImage3DARB, not in dispatch table */
/* No wrapper for glCompressedTexImage2DARB, not in dispatch table */
/* No wrapper for glCompressedTexImage1DARB, not in dispatch table */
/* No wrapper for glCompressedTexSubImage3DARB, not in dispatch table */
/* No wrapper for glCompressedTexSubImage2DARB, not in dispatch table */
/* No wrapper for glCompressedTexSubImage1DARB, not in dispatch table */
/* No wrapper for glGetCompressedTexImageARB, not in dispatch table */
/* No wrapper for glLoadTransposeMatrixfARB, not in dispatch table */
/* No wrapper for glLoadTransposeMatrixdARB, not in dispatch table */
/* No wrapper for glMultTransposeMatrixfARB, not in dispatch table */
/* No wrapper for glMultTransposeMatrixdARB, not in dispatch table */
/* No wrapper for glWeightbvARB, not in dispatch table */
/* No wrapper for glWeightsvARB, not in dispatch table */
/* No wrapper for glWeightivARB, not in dispatch table */
/* No wrapper for glWeightfvARB, not in dispatch table */
/* No wrapper for glWeightdvARB, not in dispatch table */
/* No wrapper for glWeightubvARB, not in dispatch table */
/* No wrapper for glWeightusvARB, not in dispatch table */
/* No wrapper for glWeightuivARB, not in dispatch table */
/* No wrapper for glWeightPointerARB, not in dispatch table */
/* No wrapper for glVertexBlendARB, not in dispatch table */
/* No wrapper for glBindBufferARB, not in dispatch table */
/* No wrapper for glDeleteBuffersARB, not in dispatch table */
/* No wrapper for glGenBuffersARB, not in dispatch table */
/* No wrapper for glIsBufferARB, not in dispatch table */
/* No wrapper for glBufferDataARB, not in dispatch table */
/* No wrapper for glBufferSubDataARB, not in dispatch table */
/* No wrapper for glGetBufferSubDataARB, not in dispatch table */
/* No wrapper for glMapBufferARB, not in dispatch table */
/* No wrapper for glUnmapBufferARB, not in dispatch table */
/* No wrapper for glGetBufferParameterivARB, not in dispatch table */
/* No wrapper for glGetBufferPointervARB, not in dispatch table */
/* No wrapper for glVertexAttrib1dARB, not in dispatch table */
/* No wrapper for glVertexAttrib1dvARB, not in dispatch table */
static void __stdcall glVertexAttrib1fARBWrapper(GLuint index_, GLfloat x_)
{
  RESOLVE(PFNGLVERTEXATTRIB1FARBPROC, "glVertexAttrib1fARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib1fARB\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB1FARBPROC)( index_, x_ );
}

static void __stdcall glVertexAttrib1fvARBWrapper(GLuint index_, const GLfloat* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB1FVARBPROC, "glVertexAttrib1fvARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib1fvARB\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB1FVARBPROC)( index_, v_ );
}

/* No wrapper for glVertexAttrib1sARB, not in dispatch table */
/* No wrapper for glVertexAttrib1svARB, not in dispatch table */
/* No wrapper for glVertexAttrib2dARB, not in dispatch table */
/* No wrapper for glVertexAttrib2dvARB, not in dispatch table */
static void __stdcall glVertexAttrib2fARBWrapper(GLuint index_, GLfloat x_, GLfloat y_)
{
  RESOLVE(PFNGLVERTEXATTRIB2FARBPROC, "glVertexAttrib2fARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib2fARB\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB2FARBPROC)( index_, x_, y_ );
}

static void __stdcall glVertexAttrib2fvARBWrapper(GLuint index_, const GLfloat* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB2FVARBPROC, "glVertexAttrib2fvARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib2fvARB\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB2FVARBPROC)( index_, v_ );
}

/* No wrapper for glVertexAttrib2sARB, not in dispatch table */
/* No wrapper for glVertexAttrib2svARB, not in dispatch table */
/* No wrapper for glVertexAttrib3dARB, not in dispatch table */
/* No wrapper for glVertexAttrib3dvARB, not in dispatch table */
static void __stdcall glVertexAttrib3fARBWrapper(GLuint index_, GLfloat x_, GLfloat y_, GLfloat z_)
{
  RESOLVE(PFNGLVERTEXATTRIB3FARBPROC, "glVertexAttrib3fARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib3fARB\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB3FARBPROC)( index_, x_, y_, z_ );
}

static void __stdcall glVertexAttrib3fvARBWrapper(GLuint index_, const GLfloat* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB3FVARBPROC, "glVertexAttrib3fvARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib3fvARB\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB3FVARBPROC)( index_, v_ );
}

/* No wrapper for glVertexAttrib3sARB, not in dispatch table */
/* No wrapper for glVertexAttrib3svARB, not in dispatch table */
/* No wrapper for glVertexAttrib4NbvARB, not in dispatch table */
/* No wrapper for glVertexAttrib4NivARB, not in dispatch table */
/* No wrapper for glVertexAttrib4NsvARB, not in dispatch table */
/* No wrapper for glVertexAttrib4NubARB, not in dispatch table */
/* No wrapper for glVertexAttrib4NubvARB, not in dispatch table */
/* No wrapper for glVertexAttrib4NuivARB, not in dispatch table */
/* No wrapper for glVertexAttrib4NusvARB, not in dispatch table */
/* No wrapper for glVertexAttrib4bvARB, not in dispatch table */
/* No wrapper for glVertexAttrib4dARB, not in dispatch table */
/* No wrapper for glVertexAttrib4dvARB, not in dispatch table */
static void __stdcall glVertexAttrib4fARBWrapper(GLuint index_, GLfloat x_, GLfloat y_, GLfloat z_, GLfloat w_)
{
  RESOLVE(PFNGLVERTEXATTRIB4FARBPROC, "glVertexAttrib4fARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib4fARB\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB4FARBPROC)( index_, x_, y_, z_, w_ );
}

static void __stdcall glVertexAttrib4fvARBWrapper(GLuint index_, const GLfloat* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB4FVARBPROC, "glVertexAttrib4fvARB");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib4fvARB\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB4FVARBPROC)( index_, v_ );
}

/* No wrapper for glVertexAttrib4ivARB, not in dispatch table */
/* No wrapper for glVertexAttrib4sARB, not in dispatch table */
/* No wrapper for glVertexAttrib4svARB, not in dispatch table */
/* No wrapper for glVertexAttrib4ubvARB, not in dispatch table */
/* No wrapper for glVertexAttrib4uivARB, not in dispatch table */
/* No wrapper for glVertexAttrib4usvARB, not in dispatch table */
/* No wrapper for glVertexAttribPointerARB, not in dispatch table */
/* No wrapper for glEnableVertexAttribArrayARB, not in dispatch table */
/* No wrapper for glDisableVertexAttribArrayARB, not in dispatch table */
/* No wrapper for glGetVertexAttribdvARB, not in dispatch table */
/* No wrapper for glGetVertexAttribfvARB, not in dispatch table */
/* No wrapper for glGetVertexAttribivARB, not in dispatch table */
/* No wrapper for glGetVertexAttribPointervARB, not in dispatch table */
/* No wrapper for glBindAttribLocationARB, not in dispatch table */
/* No wrapper for glGetActiveAttribARB, not in dispatch table */
/* No wrapper for glGetAttribLocationARB, not in dispatch table */
/* No wrapper for glDepthRangeArraydvNV, not in dispatch table */
/* No wrapper for glDepthRangeIndexeddNV, not in dispatch table */
/* No wrapper for glWindowPos2dARB, not in dispatch table */
/* No wrapper for glWindowPos2dvARB, not in dispatch table */
/* No wrapper for glWindowPos2fARB, not in dispatch table */
/* No wrapper for glWindowPos2fvARB, not in dispatch table */
/* No wrapper for glWindowPos2iARB, not in dispatch table */
/* No wrapper for glWindowPos2ivARB, not in dispatch table */
/* No wrapper for glWindowPos2sARB, not in dispatch table */
/* No wrapper for glWindowPos2svARB, not in dispatch table */
/* No wrapper for glWindowPos3dARB, not in dispatch table */
/* No wrapper for glWindowPos3dvARB, not in dispatch table */
/* No wrapper for glWindowPos3fARB, not in dispatch table */
/* No wrapper for glWindowPos3fvARB, not in dispatch table */
/* No wrapper for glWindowPos3iARB, not in dispatch table */
/* No wrapper for glWindowPos3ivARB, not in dispatch table */
/* No wrapper for glWindowPos3sARB, not in dispatch table */
/* No wrapper for glWindowPos3svARB, not in dispatch table */
/* No wrapper for glBlendBarrierKHR, not in dispatch table */
static void __stdcall glMaxShaderCompilerThreadsKHRWrapper(GLuint count_)
{
  RESOLVE(PFNGLMAXSHADERCOMPILERTHREADSKHRPROC, "glMaxShaderCompilerThreadsKHR");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMaxShaderCompilerThreadsKHR\n");
#endif
  RESOLVED_PROC(PFNGLMAXSHADERCOMPILERTHREADSKHRPROC)( count_ );
}

/* No wrapper for glMultiTexCoord1bOES, not in dispatch table */
/* No wrapper for glMultiTexCoord1bvOES, not in dispatch table */
/* No wrapper for glMultiTexCoord2bOES, not in dispatch table */
/* No wrapper for glMultiTexCoord2bvOES, not in dispatch table */
/* No wrapper for glMultiTexCoord3bOES, not in dispatch table */
/* No wrapper for glMultiTexCoord3bvOES, not in dispatch table */
/* No wrapper for glMultiTexCoord4bOES, not in dispatch table */
/* No wrapper for glMultiTexCoord4bvOES, not in dispatch table */
/* No wrapper for glTexCoord1bOES, not in dispatch table */
/* No wrapper for glTexCoord1bvOES, not in dispatch table */
/* No wrapper for glTexCoord2bOES, not in dispatch table */
/* No wrapper for glTexCoord2bvOES, not in dispatch table */
/* No wrapper for glTexCoord3bOES, not in dispatch table */
/* No wrapper for glTexCoord3bvOES, not in dispatch table */
/* No wrapper for glTexCoord4bOES, not in dispatch table */
/* No wrapper for glTexCoord4bvOES, not in dispatch table */
/* No wrapper for glVertex2bOES, not in dispatch table */
/* No wrapper for glVertex2bvOES, not in dispatch table */
/* No wrapper for glVertex3bOES, not in dispatch table */
/* No wrapper for glVertex3bvOES, not in dispatch table */
/* No wrapper for glVertex4bOES, not in dispatch table */
/* No wrapper for glVertex4bvOES, not in dispatch table */
/* No wrapper for glAlphaFuncxOES, not in dispatch table */
/* No wrapper for glClearColorxOES, not in dispatch table */
/* No wrapper for glClearDepthxOES, not in dispatch table */
/* No wrapper for glClipPlanexOES, not in dispatch table */
/* No wrapper for glColor4xOES, not in dispatch table */
/* No wrapper for glDepthRangexOES, not in dispatch table */
/* No wrapper for glFogxOES, not in dispatch table */
/* No wrapper for glFogxvOES, not in dispatch table */
/* No wrapper for glFrustumxOES, not in dispatch table */
/* No wrapper for glGetClipPlanexOES, not in dispatch table */
/* No wrapper for glGetFixedvOES, not in dispatch table */
/* No wrapper for glGetTexEnvxvOES, not in dispatch table */
/* No wrapper for glGetTexParameterxvOES, not in dispatch table */
/* No wrapper for glLightModelxOES, not in dispatch table */
/* No wrapper for glLightModelxvOES, not in dispatch table */
/* No wrapper for glLightxOES, not in dispatch table */
/* No wrapper for glLightxvOES, not in dispatch table */
/* No wrapper for glLineWidthxOES, not in dispatch table */
/* No wrapper for glLoadMatrixxOES, not in dispatch table */
/* No wrapper for glMaterialxOES, not in dispatch table */
/* No wrapper for glMaterialxvOES, not in dispatch table */
/* No wrapper for glMultMatrixxOES, not in dispatch table */
/* No wrapper for glMultiTexCoord4xOES, not in dispatch table */
/* No wrapper for glNormal3xOES, not in dispatch table */
/* No wrapper for glOrthoxOES, not in dispatch table */
/* No wrapper for glPointParameterxvOES, not in dispatch table */
/* No wrapper for glPointSizexOES, not in dispatch table */
/* No wrapper for glPolygonOffsetxOES, not in dispatch table */
/* No wrapper for glRotatexOES, not in dispatch table */
/* No wrapper for glScalexOES, not in dispatch table */
/* No wrapper for glTexEnvxOES, not in dispatch table */
/* No wrapper for glTexEnvxvOES, not in dispatch table */
/* No wrapper for glTexParameterxOES, not in dispatch table */
/* No wrapper for glTexParameterxvOES, not in dispatch table */
/* No wrapper for glTranslatexOES, not in dispatch table */
/* No wrapper for glAccumxOES, not in dispatch table */
/* No wrapper for glBitmapxOES, not in dispatch table */
/* No wrapper for glBlendColorxOES, not in dispatch table */
/* No wrapper for glClearAccumxOES, not in dispatch table */
/* No wrapper for glColor3xOES, not in dispatch table */
/* No wrapper for glColor3xvOES, not in dispatch table */
/* No wrapper for glColor4xvOES, not in dispatch table */
/* No wrapper for glConvolutionParameterxOES, not in dispatch table */
/* No wrapper for glConvolutionParameterxvOES, not in dispatch table */
/* No wrapper for glEvalCoord1xOES, not in dispatch table */
/* No wrapper for glEvalCoord1xvOES, not in dispatch table */
/* No wrapper for glEvalCoord2xOES, not in dispatch table */
/* No wrapper for glEvalCoord2xvOES, not in dispatch table */
/* No wrapper for glFeedbackBufferxOES, not in dispatch table */
/* No wrapper for glGetConvolutionParameterxvOES, not in dispatch table */
/* No wrapper for glGetHistogramParameterxvOES, not in dispatch table */
/* No wrapper for glGetLightxOES, not in dispatch table */
/* No wrapper for glGetMapxvOES, not in dispatch table */
/* No wrapper for glGetMaterialxOES, not in dispatch table */
/* No wrapper for glGetPixelMapxv, not in dispatch table */
static void __stdcall glGetTexGenxvOESWrapper(GLenum coord_, GLenum pname_, GLfixed* params_)
{
  RESOLVE(PFNGLGETTEXGENXVOESPROC, "glGetTexGenxvOES");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTexGenxvOES\n");
#endif
  RESOLVED_PROC(PFNGLGETTEXGENXVOESPROC)( coord_, pname_, params_ );
}

/* No wrapper for glGetTexLevelParameterxvOES, not in dispatch table */
/* No wrapper for glIndexxOES, not in dispatch table */
/* No wrapper for glIndexxvOES, not in dispatch table */
/* No wrapper for glLoadTransposeMatrixxOES, not in dispatch table */
/* No wrapper for glMap1xOES, not in dispatch table */
/* No wrapper for glMap2xOES, not in dispatch table */
/* No wrapper for glMapGrid1xOES, not in dispatch table */
/* No wrapper for glMapGrid2xOES, not in dispatch table */
/* No wrapper for glMultTransposeMatrixxOES, not in dispatch table */
/* No wrapper for glMultiTexCoord1xOES, not in dispatch table */
/* No wrapper for glMultiTexCoord1xvOES, not in dispatch table */
/* No wrapper for glMultiTexCoord2xOES, not in dispatch table */
/* No wrapper for glMultiTexCoord2xvOES, not in dispatch table */
/* No wrapper for glMultiTexCoord3xOES, not in dispatch table */
/* No wrapper for glMultiTexCoord3xvOES, not in dispatch table */
/* No wrapper for glMultiTexCoord4xvOES, not in dispatch table */
/* No wrapper for glNormal3xvOES, not in dispatch table */
/* No wrapper for glPassThroughxOES, not in dispatch table */
/* No wrapper for glPixelMapx, not in dispatch table */
/* No wrapper for glPixelStorex, not in dispatch table */
/* No wrapper for glPixelTransferxOES, not in dispatch table */
/* No wrapper for glPixelZoomxOES, not in dispatch table */
/* No wrapper for glPrioritizeTexturesxOES, not in dispatch table */
/* No wrapper for glRasterPos2xOES, not in dispatch table */
/* No wrapper for glRasterPos2xvOES, not in dispatch table */
/* No wrapper for glRasterPos3xOES, not in dispatch table */
/* No wrapper for glRasterPos3xvOES, not in dispatch table */
/* No wrapper for glRasterPos4xOES, not in dispatch table */
/* No wrapper for glRasterPos4xvOES, not in dispatch table */
/* No wrapper for glRectxOES, not in dispatch table */
/* No wrapper for glRectxvOES, not in dispatch table */
/* No wrapper for glTexCoord1xOES, not in dispatch table */
/* No wrapper for glTexCoord1xvOES, not in dispatch table */
/* No wrapper for glTexCoord2xOES, not in dispatch table */
/* No wrapper for glTexCoord2xvOES, not in dispatch table */
/* No wrapper for glTexCoord3xOES, not in dispatch table */
/* No wrapper for glTexCoord3xvOES, not in dispatch table */
/* No wrapper for glTexCoord4xOES, not in dispatch table */
/* No wrapper for glTexCoord4xvOES, not in dispatch table */
static void __stdcall glTexGenxOESWrapper(GLenum coord_, GLenum pname_, GLfixed param_)
{
  RESOLVE(PFNGLTEXGENXOESPROC, "glTexGenxOES");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexGenxOES\n");
#endif
  RESOLVED_PROC(PFNGLTEXGENXOESPROC)( coord_, pname_, param_ );
}

static void __stdcall glTexGenxvOESWrapper(GLenum coord_, GLenum pname_, const GLfixed* params_)
{
  RESOLVE(PFNGLTEXGENXVOESPROC, "glTexGenxvOES");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexGenxvOES\n");
#endif
  RESOLVED_PROC(PFNGLTEXGENXVOESPROC)( coord_, pname_, params_ );
}

/* No wrapper for glVertex2xOES, not in dispatch table */
/* No wrapper for glVertex2xvOES, not in dispatch table */
/* No wrapper for glVertex3xOES, not in dispatch table */
/* No wrapper for glVertex3xvOES, not in dispatch table */
/* No wrapper for glVertex4xOES, not in dispatch table */
/* No wrapper for glVertex4xvOES, not in dispatch table */
static GLbitfield __stdcall glQueryMatrixxOESWrapper(GLfixed* mantissa_, GLint* exponent_)
{
  RESOLVE_RET(PFNGLQUERYMATRIXXOESPROC, "glQueryMatrixxOES", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glQueryMatrixxOES\n");
#endif
  return RESOLVED_PROC(PFNGLQUERYMATRIXXOESPROC)( mantissa_, exponent_ );
}

/* No wrapper for glClearDepthfOES, not in dispatch table */
/* No wrapper for glClipPlanefOES, not in dispatch table */
/* No wrapper for glDepthRangefOES, not in dispatch table */
/* No wrapper for glFrustumfOES, not in dispatch table */
/* No wrapper for glGetClipPlanefOES, not in dispatch table */
/* No wrapper for glOrthofOES, not in dispatch table */
/* No wrapper for glTbufferMask3DFX, not in dispatch table */
/* No wrapper for glDebugMessageEnableAMD, not in dispatch table */
/* No wrapper for glDebugMessageInsertAMD, not in dispatch table */
/* No wrapper for glDebugMessageCallbackAMD, not in dispatch table */
/* No wrapper for glGetDebugMessageLogAMD, not in dispatch table */
/* No wrapper for glBlendFuncIndexedAMD, not in dispatch table */
/* No wrapper for glBlendFuncSeparateIndexedAMD, not in dispatch table */
/* No wrapper for glBlendEquationIndexedAMD, not in dispatch table */
/* No wrapper for glBlendEquationSeparateIndexedAMD, not in dispatch table */
static void __stdcall glRenderbufferStorageMultisampleAdvancedAMDWrapper(GLenum target_, GLsizei samples_, GLsizei storageSamples_, GLenum internalformat_, GLsizei width_, GLsizei height_)
{
  RESOLVE(PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC, "glRenderbufferStorageMultisampleAdvancedAMD");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRenderbufferStorageMultisampleAdvancedAMD\n");
#endif
  RESOLVED_PROC(PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC)( target_, samples_, storageSamples_, internalformat_, width_, height_ );
}

static void __stdcall glNamedRenderbufferStorageMultisampleAdvancedAMDWrapper(GLuint renderbuffer_, GLsizei samples_, GLsizei storageSamples_, GLenum internalformat_, GLsizei width_, GLsizei height_)
{
  RESOLVE(PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC, "glNamedRenderbufferStorageMultisampleAdvancedAMD");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedRenderbufferStorageMultisampleAdvancedAMD\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC)( renderbuffer_, samples_, storageSamples_, internalformat_, width_, height_ );
}

/* No wrapper for glFramebufferSamplePositionsfvAMD, not in dispatch table */
/* No wrapper for glNamedFramebufferSamplePositionsfvAMD, not in dispatch table */
/* No wrapper for glGetFramebufferParameterfvAMD, not in dispatch table */
/* No wrapper for glGetNamedFramebufferParameterfvAMD, not in dispatch table */
/* No wrapper for glUniform1i64NV, not in dispatch table */
/* No wrapper for glUniform2i64NV, not in dispatch table */
/* No wrapper for glUniform3i64NV, not in dispatch table */
/* No wrapper for glUniform4i64NV, not in dispatch table */
/* No wrapper for glUniform1i64vNV, not in dispatch table */
/* No wrapper for glUniform2i64vNV, not in dispatch table */
/* No wrapper for glUniform3i64vNV, not in dispatch table */
/* No wrapper for glUniform4i64vNV, not in dispatch table */
/* No wrapper for glUniform1ui64NV, not in dispatch table */
/* No wrapper for glUniform2ui64NV, not in dispatch table */
/* No wrapper for glUniform3ui64NV, not in dispatch table */
/* No wrapper for glUniform4ui64NV, not in dispatch table */
/* No wrapper for glUniform1ui64vNV, not in dispatch table */
/* No wrapper for glUniform2ui64vNV, not in dispatch table */
/* No wrapper for glUniform3ui64vNV, not in dispatch table */
/* No wrapper for glUniform4ui64vNV, not in dispatch table */
/* No wrapper for glGetUniformi64vNV, not in dispatch table */
/* No wrapper for glGetUniformui64vNV, not in dispatch table */
/* No wrapper for glProgramUniform1i64NV, not in dispatch table */
/* No wrapper for glProgramUniform2i64NV, not in dispatch table */
/* No wrapper for glProgramUniform3i64NV, not in dispatch table */
/* No wrapper for glProgramUniform4i64NV, not in dispatch table */
/* No wrapper for glProgramUniform1i64vNV, not in dispatch table */
/* No wrapper for glProgramUniform2i64vNV, not in dispatch table */
/* No wrapper for glProgramUniform3i64vNV, not in dispatch table */
/* No wrapper for glProgramUniform4i64vNV, not in dispatch table */
/* No wrapper for glProgramUniform1ui64NV, not in dispatch table */
/* No wrapper for glProgramUniform2ui64NV, not in dispatch table */
/* No wrapper for glProgramUniform3ui64NV, not in dispatch table */
/* No wrapper for glProgramUniform4ui64NV, not in dispatch table */
/* No wrapper for glProgramUniform1ui64vNV, not in dispatch table */
/* No wrapper for glProgramUniform2ui64vNV, not in dispatch table */
/* No wrapper for glProgramUniform3ui64vNV, not in dispatch table */
/* No wrapper for glProgramUniform4ui64vNV, not in dispatch table */
/* No wrapper for glVertexAttribParameteriAMD, not in dispatch table */
/* No wrapper for glMultiDrawArraysIndirectAMD, not in dispatch table */
/* No wrapper for glMultiDrawElementsIndirectAMD, not in dispatch table */
/* No wrapper for glGenNamesAMD, not in dispatch table */
/* No wrapper for glDeleteNamesAMD, not in dispatch table */
/* No wrapper for glIsNameAMD, not in dispatch table */
/* No wrapper for glQueryObjectParameteruiAMD, not in dispatch table */
static void __stdcall glGetPerfMonitorGroupsAMDWrapper(GLint* numGroups_, GLsizei groupsSize_, GLuint* groups_)
{
  RESOLVE(PFNGLGETPERFMONITORGROUPSAMDPROC, "glGetPerfMonitorGroupsAMD");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetPerfMonitorGroupsAMD\n");
#endif
  RESOLVED_PROC(PFNGLGETPERFMONITORGROUPSAMDPROC)( numGroups_, groupsSize_, groups_ );
}

static void __stdcall glGetPerfMonitorCountersAMDWrapper(GLuint group_, GLint* numCounters_, GLint* maxActiveCounters_, GLsizei counterSize_, GLuint* counters_)
{
  RESOLVE(PFNGLGETPERFMONITORCOUNTERSAMDPROC, "glGetPerfMonitorCountersAMD");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetPerfMonitorCountersAMD\n");
#endif
  RESOLVED_PROC(PFNGLGETPERFMONITORCOUNTERSAMDPROC)( group_, numCounters_, maxActiveCounters_, counterSize_, counters_ );
}

static void __stdcall glGetPerfMonitorGroupStringAMDWrapper(GLuint group_, GLsizei bufSize_, GLsizei* length_, GLchar* groupString_)
{
  RESOLVE(PFNGLGETPERFMONITORGROUPSTRINGAMDPROC, "glGetPerfMonitorGroupStringAMD");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetPerfMonitorGroupStringAMD\n");
#endif
  RESOLVED_PROC(PFNGLGETPERFMONITORGROUPSTRINGAMDPROC)( group_, bufSize_, length_, groupString_ );
}

static void __stdcall glGetPerfMonitorCounterStringAMDWrapper(GLuint group_, GLuint counter_, GLsizei bufSize_, GLsizei* length_, GLchar* counterString_)
{
  RESOLVE(PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC, "glGetPerfMonitorCounterStringAMD");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetPerfMonitorCounterStringAMD\n");
#endif
  RESOLVED_PROC(PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC)( group_, counter_, bufSize_, length_, counterString_ );
}

static void __stdcall glGetPerfMonitorCounterInfoAMDWrapper(GLuint group_, GLuint counter_, GLenum pname_, void * data_)
{
  RESOLVE(PFNGLGETPERFMONITORCOUNTERINFOAMDPROC, "glGetPerfMonitorCounterInfoAMD");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetPerfMonitorCounterInfoAMD\n");
#endif
  RESOLVED_PROC(PFNGLGETPERFMONITORCOUNTERINFOAMDPROC)( group_, counter_, pname_, data_ );
}

static void __stdcall glGenPerfMonitorsAMDWrapper(GLsizei n_, GLuint* monitors_)
{
  RESOLVE(PFNGLGENPERFMONITORSAMDPROC, "glGenPerfMonitorsAMD");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGenPerfMonitorsAMD\n");
#endif
  RESOLVED_PROC(PFNGLGENPERFMONITORSAMDPROC)( n_, monitors_ );
}

static void __stdcall glDeletePerfMonitorsAMDWrapper(GLsizei n_, GLuint* monitors_)
{
  RESOLVE(PFNGLDELETEPERFMONITORSAMDPROC, "glDeletePerfMonitorsAMD");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDeletePerfMonitorsAMD\n");
#endif
  RESOLVED_PROC(PFNGLDELETEPERFMONITORSAMDPROC)( n_, monitors_ );
}

static void __stdcall glSelectPerfMonitorCountersAMDWrapper(GLuint monitor_, GLboolean enable_, GLuint group_, GLint numCounters_, GLuint* counterList_)
{
  RESOLVE(PFNGLSELECTPERFMONITORCOUNTERSAMDPROC, "glSelectPerfMonitorCountersAMD");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSelectPerfMonitorCountersAMD\n");
#endif
  RESOLVED_PROC(PFNGLSELECTPERFMONITORCOUNTERSAMDPROC)( monitor_, enable_, group_, numCounters_, counterList_ );
}

static void __stdcall glBeginPerfMonitorAMDWrapper(GLuint monitor_)
{
  RESOLVE(PFNGLBEGINPERFMONITORAMDPROC, "glBeginPerfMonitorAMD");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBeginPerfMonitorAMD\n");
#endif
  RESOLVED_PROC(PFNGLBEGINPERFMONITORAMDPROC)( monitor_ );
}

static void __stdcall glEndPerfMonitorAMDWrapper(GLuint monitor_)
{
  RESOLVE(PFNGLENDPERFMONITORAMDPROC, "glEndPerfMonitorAMD");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEndPerfMonitorAMD\n");
#endif
  RESOLVED_PROC(PFNGLENDPERFMONITORAMDPROC)( monitor_ );
}

static void __stdcall glGetPerfMonitorCounterDataAMDWrapper(GLuint monitor_, GLenum pname_, GLsizei dataSize_, GLuint* data_, GLint* bytesWritten_)
{
  RESOLVE(PFNGLGETPERFMONITORCOUNTERDATAAMDPROC, "glGetPerfMonitorCounterDataAMD");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetPerfMonitorCounterDataAMD\n");
#endif
  RESOLVED_PROC(PFNGLGETPERFMONITORCOUNTERDATAAMDPROC)( monitor_, pname_, dataSize_, data_, bytesWritten_ );
}

/* No wrapper for glSetMultisamplefvAMD, not in dispatch table */
/* No wrapper for glTexStorageSparseAMD, not in dispatch table */
/* No wrapper for glTextureStorageSparseAMD, not in dispatch table */
/* No wrapper for glStencilOpValueAMD, not in dispatch table */
/* No wrapper for glTessellationFactorAMD, not in dispatch table */
/* No wrapper for glTessellationModeAMD, not in dispatch table */
/* No wrapper for glElementPointerAPPLE, not in dispatch table */
/* No wrapper for glDrawElementArrayAPPLE, not in dispatch table */
/* No wrapper for glDrawRangeElementArrayAPPLE, not in dispatch table */
/* No wrapper for glMultiDrawElementArrayAPPLE, not in dispatch table */
/* No wrapper for glMultiDrawRangeElementArrayAPPLE, not in dispatch table */
/* No wrapper for glGenFencesAPPLE, not in dispatch table */
/* No wrapper for glDeleteFencesAPPLE, not in dispatch table */
/* No wrapper for glSetFenceAPPLE, not in dispatch table */
/* No wrapper for glIsFenceAPPLE, not in dispatch table */
/* No wrapper for glTestFenceAPPLE, not in dispatch table */
/* No wrapper for glFinishFenceAPPLE, not in dispatch table */
/* No wrapper for glTestObjectAPPLE, not in dispatch table */
/* No wrapper for glFinishObjectAPPLE, not in dispatch table */
static void __stdcall glBufferParameteriAPPLEWrapper(GLenum target_, GLenum pname_, GLint param_)
{
  RESOLVE(PFNGLBUFFERPARAMETERIAPPLEPROC, "glBufferParameteriAPPLE");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBufferParameteriAPPLE\n");
#endif
  RESOLVED_PROC(PFNGLBUFFERPARAMETERIAPPLEPROC)( target_, pname_, param_ );
}

static void __stdcall glFlushMappedBufferRangeAPPLEWrapper(GLenum target_, GLintptr offset_, GLsizeiptr size_)
{
  RESOLVE(PFNGLFLUSHMAPPEDBUFFERRANGEAPPLEPROC, "glFlushMappedBufferRangeAPPLE");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFlushMappedBufferRangeAPPLE\n");
#endif
  RESOLVED_PROC(PFNGLFLUSHMAPPEDBUFFERRANGEAPPLEPROC)( target_, offset_, size_ );
}

static GLenum __stdcall glObjectPurgeableAPPLEWrapper(GLenum objectType_, GLuint name_, GLenum option_)
{
  RESOLVE_RET(PFNGLOBJECTPURGEABLEAPPLEPROC, "glObjectPurgeableAPPLE", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glObjectPurgeableAPPLE\n");
#endif
  return RESOLVED_PROC(PFNGLOBJECTPURGEABLEAPPLEPROC)( objectType_, name_, option_ );
}

static GLenum __stdcall glObjectUnpurgeableAPPLEWrapper(GLenum objectType_, GLuint name_, GLenum option_)
{
  RESOLVE_RET(PFNGLOBJECTUNPURGEABLEAPPLEPROC, "glObjectUnpurgeableAPPLE", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glObjectUnpurgeableAPPLE\n");
#endif
  return RESOLVED_PROC(PFNGLOBJECTUNPURGEABLEAPPLEPROC)( objectType_, name_, option_ );
}

static void __stdcall glGetObjectParameterivAPPLEWrapper(GLenum objectType_, GLuint name_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETOBJECTPARAMETERIVAPPLEPROC, "glGetObjectParameterivAPPLE");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetObjectParameterivAPPLE\n");
#endif
  RESOLVED_PROC(PFNGLGETOBJECTPARAMETERIVAPPLEPROC)( objectType_, name_, pname_, params_ );
}

/* No wrapper for glTextureRangeAPPLE, not in dispatch table */
/* No wrapper for glGetTexParameterPointervAPPLE, not in dispatch table */
/* No wrapper for glBindVertexArrayAPPLE, not in dispatch table */
/* No wrapper for glDeleteVertexArraysAPPLE, not in dispatch table */
/* No wrapper for glGenVertexArraysAPPLE, not in dispatch table */
/* No wrapper for glIsVertexArrayAPPLE, not in dispatch table */
/* No wrapper for glVertexArrayRangeAPPLE, not in dispatch table */
/* No wrapper for glFlushVertexArrayRangeAPPLE, not in dispatch table */
/* No wrapper for glVertexArrayParameteriAPPLE, not in dispatch table */
/* No wrapper for glEnableVertexAttribAPPLE, not in dispatch table */
/* No wrapper for glDisableVertexAttribAPPLE, not in dispatch table */
/* No wrapper for glIsVertexAttribEnabledAPPLE, not in dispatch table */
/* No wrapper for glMapVertexAttrib1dAPPLE, not in dispatch table */
/* No wrapper for glMapVertexAttrib1fAPPLE, not in dispatch table */
/* No wrapper for glMapVertexAttrib2dAPPLE, not in dispatch table */
/* No wrapper for glMapVertexAttrib2fAPPLE, not in dispatch table */
/* No wrapper for glDrawBuffersATI, not in dispatch table */
/* No wrapper for glElementPointerATI, not in dispatch table */
/* No wrapper for glDrawElementArrayATI, not in dispatch table */
/* No wrapper for glDrawRangeElementArrayATI, not in dispatch table */
static void __stdcall glTexBumpParameterivATIWrapper(GLenum pname_, const GLint* param_)
{
  RESOLVE(PFNGLTEXBUMPPARAMETERIVATIPROC, "glTexBumpParameterivATI");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexBumpParameterivATI\n");
#endif
  RESOLVED_PROC(PFNGLTEXBUMPPARAMETERIVATIPROC)( pname_, param_ );
}

static void __stdcall glTexBumpParameterfvATIWrapper(GLenum pname_, const GLfloat* param_)
{
  RESOLVE(PFNGLTEXBUMPPARAMETERFVATIPROC, "glTexBumpParameterfvATI");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexBumpParameterfvATI\n");
#endif
  RESOLVED_PROC(PFNGLTEXBUMPPARAMETERFVATIPROC)( pname_, param_ );
}

static void __stdcall glGetTexBumpParameterivATIWrapper(GLenum pname_, GLint* param_)
{
  RESOLVE(PFNGLGETTEXBUMPPARAMETERIVATIPROC, "glGetTexBumpParameterivATI");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTexBumpParameterivATI\n");
#endif
  RESOLVED_PROC(PFNGLGETTEXBUMPPARAMETERIVATIPROC)( pname_, param_ );
}

static void __stdcall glGetTexBumpParameterfvATIWrapper(GLenum pname_, GLfloat* param_)
{
  RESOLVE(PFNGLGETTEXBUMPPARAMETERFVATIPROC, "glGetTexBumpParameterfvATI");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTexBumpParameterfvATI\n");
#endif
  RESOLVED_PROC(PFNGLGETTEXBUMPPARAMETERFVATIPROC)( pname_, param_ );
}

static GLuint __stdcall glGenFragmentShadersATIWrapper(GLuint range_)
{
  RESOLVE_RET(PFNGLGENFRAGMENTSHADERSATIPROC, "glGenFragmentShadersATI", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGenFragmentShadersATI\n");
#endif
  return RESOLVED_PROC(PFNGLGENFRAGMENTSHADERSATIPROC)( range_ );
}

static void __stdcall glBindFragmentShaderATIWrapper(GLuint id_)
{
  RESOLVE(PFNGLBINDFRAGMENTSHADERATIPROC, "glBindFragmentShaderATI");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindFragmentShaderATI\n");
#endif
  RESOLVED_PROC(PFNGLBINDFRAGMENTSHADERATIPROC)( id_ );
}

static void __stdcall glDeleteFragmentShaderATIWrapper(GLuint id_)
{
  RESOLVE(PFNGLDELETEFRAGMENTSHADERATIPROC, "glDeleteFragmentShaderATI");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDeleteFragmentShaderATI\n");
#endif
  RESOLVED_PROC(PFNGLDELETEFRAGMENTSHADERATIPROC)( id_ );
}

static void __stdcall glBeginFragmentShaderATIWrapper(void)
{
  RESOLVE(PFNGLBEGINFRAGMENTSHADERATIPROC, "glBeginFragmentShaderATI");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBeginFragmentShaderATI\n");
#endif
  RESOLVED_PROC(PFNGLBEGINFRAGMENTSHADERATIPROC)(  );
}

static void __stdcall glEndFragmentShaderATIWrapper(void)
{
  RESOLVE(PFNGLENDFRAGMENTSHADERATIPROC, "glEndFragmentShaderATI");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEndFragmentShaderATI\n");
#endif
  RESOLVED_PROC(PFNGLENDFRAGMENTSHADERATIPROC)(  );
}

static void __stdcall glPassTexCoordATIWrapper(GLuint dst_, GLuint coord_, GLenum swizzle_)
{
  RESOLVE(PFNGLPASSTEXCOORDATIPROC, "glPassTexCoordATI");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPassTexCoordATI\n");
#endif
  RESOLVED_PROC(PFNGLPASSTEXCOORDATIPROC)( dst_, coord_, swizzle_ );
}

static void __stdcall glSampleMapATIWrapper(GLuint dst_, GLuint interp_, GLenum swizzle_)
{
  RESOLVE(PFNGLSAMPLEMAPATIPROC, "glSampleMapATI");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSampleMapATI\n");
#endif
  RESOLVED_PROC(PFNGLSAMPLEMAPATIPROC)( dst_, interp_, swizzle_ );
}

static void __stdcall glColorFragmentOp1ATIWrapper(GLenum op_, GLuint dst_, GLuint dstMask_, GLuint dstMod_, GLuint arg1_, GLuint arg1Rep_, GLuint arg1Mod_)
{
  RESOLVE(PFNGLCOLORFRAGMENTOP1ATIPROC, "glColorFragmentOp1ATI");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColorFragmentOp1ATI\n");
#endif
  RESOLVED_PROC(PFNGLCOLORFRAGMENTOP1ATIPROC)( op_, dst_, dstMask_, dstMod_, arg1_, arg1Rep_, arg1Mod_ );
}

static void __stdcall glColorFragmentOp2ATIWrapper(GLenum op_, GLuint dst_, GLuint dstMask_, GLuint dstMod_, GLuint arg1_, GLuint arg1Rep_, GLuint arg1Mod_, GLuint arg2_, GLuint arg2Rep_, GLuint arg2Mod_)
{
  RESOLVE(PFNGLCOLORFRAGMENTOP2ATIPROC, "glColorFragmentOp2ATI");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColorFragmentOp2ATI\n");
#endif
  RESOLVED_PROC(PFNGLCOLORFRAGMENTOP2ATIPROC)( op_, dst_, dstMask_, dstMod_, arg1_, arg1Rep_, arg1Mod_, arg2_, arg2Rep_, arg2Mod_ );
}

static void __stdcall glColorFragmentOp3ATIWrapper(GLenum op_, GLuint dst_, GLuint dstMask_, GLuint dstMod_, GLuint arg1_, GLuint arg1Rep_, GLuint arg1Mod_, GLuint arg2_, GLuint arg2Rep_, GLuint arg2Mod_, GLuint arg3_, GLuint arg3Rep_, GLuint arg3Mod_)
{
  RESOLVE(PFNGLCOLORFRAGMENTOP3ATIPROC, "glColorFragmentOp3ATI");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColorFragmentOp3ATI\n");
#endif
  RESOLVED_PROC(PFNGLCOLORFRAGMENTOP3ATIPROC)( op_, dst_, dstMask_, dstMod_, arg1_, arg1Rep_, arg1Mod_, arg2_, arg2Rep_, arg2Mod_, arg3_, arg3Rep_, arg3Mod_ );
}

static void __stdcall glAlphaFragmentOp1ATIWrapper(GLenum op_, GLuint dst_, GLuint dstMod_, GLuint arg1_, GLuint arg1Rep_, GLuint arg1Mod_)
{
  RESOLVE(PFNGLALPHAFRAGMENTOP1ATIPROC, "glAlphaFragmentOp1ATI");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glAlphaFragmentOp1ATI\n");
#endif
  RESOLVED_PROC(PFNGLALPHAFRAGMENTOP1ATIPROC)( op_, dst_, dstMod_, arg1_, arg1Rep_, arg1Mod_ );
}

static void __stdcall glAlphaFragmentOp2ATIWrapper(GLenum op_, GLuint dst_, GLuint dstMod_, GLuint arg1_, GLuint arg1Rep_, GLuint arg1Mod_, GLuint arg2_, GLuint arg2Rep_, GLuint arg2Mod_)
{
  RESOLVE(PFNGLALPHAFRAGMENTOP2ATIPROC, "glAlphaFragmentOp2ATI");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glAlphaFragmentOp2ATI\n");
#endif
  RESOLVED_PROC(PFNGLALPHAFRAGMENTOP2ATIPROC)( op_, dst_, dstMod_, arg1_, arg1Rep_, arg1Mod_, arg2_, arg2Rep_, arg2Mod_ );
}

static void __stdcall glAlphaFragmentOp3ATIWrapper(GLenum op_, GLuint dst_, GLuint dstMod_, GLuint arg1_, GLuint arg1Rep_, GLuint arg1Mod_, GLuint arg2_, GLuint arg2Rep_, GLuint arg2Mod_, GLuint arg3_, GLuint arg3Rep_, GLuint arg3Mod_)
{
  RESOLVE(PFNGLALPHAFRAGMENTOP3ATIPROC, "glAlphaFragmentOp3ATI");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glAlphaFragmentOp3ATI\n");
#endif
  RESOLVED_PROC(PFNGLALPHAFRAGMENTOP3ATIPROC)( op_, dst_, dstMod_, arg1_, arg1Rep_, arg1Mod_, arg2_, arg2Rep_, arg2Mod_, arg3_, arg3Rep_, arg3Mod_ );
}

static void __stdcall glSetFragmentShaderConstantATIWrapper(GLuint dst_, const GLfloat* value_)
{
  RESOLVE(PFNGLSETFRAGMENTSHADERCONSTANTATIPROC, "glSetFragmentShaderConstantATI");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSetFragmentShaderConstantATI\n");
#endif
  RESOLVED_PROC(PFNGLSETFRAGMENTSHADERCONSTANTATIPROC)( dst_, value_ );
}

/* No wrapper for glMapObjectBufferATI, not in dispatch table */
/* No wrapper for glUnmapObjectBufferATI, not in dispatch table */
/* No wrapper for glPNTrianglesiATI, not in dispatch table */
/* No wrapper for glPNTrianglesfATI, not in dispatch table */
/* No wrapper for glStencilOpSeparateATI, not in dispatch table */
static void __stdcall glStencilFuncSeparateATIWrapper(GLenum frontfunc_, GLenum backfunc_, GLint ref_, GLuint mask_)
{
  RESOLVE(PFNGLSTENCILFUNCSEPARATEATIPROC, "glStencilFuncSeparateATI");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glStencilFuncSeparateATI\n");
#endif
  RESOLVED_PROC(PFNGLSTENCILFUNCSEPARATEATIPROC)( frontfunc_, backfunc_, ref_, mask_ );
}

/* No wrapper for glNewObjectBufferATI, not in dispatch table */
/* No wrapper for glIsObjectBufferATI, not in dispatch table */
/* No wrapper for glUpdateObjectBufferATI, not in dispatch table */
/* No wrapper for glGetObjectBufferfvATI, not in dispatch table */
/* No wrapper for glGetObjectBufferivATI, not in dispatch table */
/* No wrapper for glFreeObjectBufferATI, not in dispatch table */
/* No wrapper for glArrayObjectATI, not in dispatch table */
/* No wrapper for glGetArrayObjectfvATI, not in dispatch table */
/* No wrapper for glGetArrayObjectivATI, not in dispatch table */
/* No wrapper for glVariantArrayObjectATI, not in dispatch table */
/* No wrapper for glGetVariantArrayObjectfvATI, not in dispatch table */
/* No wrapper for glGetVariantArrayObjectivATI, not in dispatch table */
/* No wrapper for glVertexAttribArrayObjectATI, not in dispatch table */
/* No wrapper for glGetVertexAttribArrayObjectfvATI, not in dispatch table */
/* No wrapper for glGetVertexAttribArrayObjectivATI, not in dispatch table */
/* No wrapper for glVertexStream1sATI, not in dispatch table */
/* No wrapper for glVertexStream1svATI, not in dispatch table */
/* No wrapper for glVertexStream1iATI, not in dispatch table */
/* No wrapper for glVertexStream1ivATI, not in dispatch table */
/* No wrapper for glVertexStream1fATI, not in dispatch table */
/* No wrapper for glVertexStream1fvATI, not in dispatch table */
/* No wrapper for glVertexStream1dATI, not in dispatch table */
/* No wrapper for glVertexStream1dvATI, not in dispatch table */
/* No wrapper for glVertexStream2sATI, not in dispatch table */
/* No wrapper for glVertexStream2svATI, not in dispatch table */
/* No wrapper for glVertexStream2iATI, not in dispatch table */
/* No wrapper for glVertexStream2ivATI, not in dispatch table */
/* No wrapper for glVertexStream2fATI, not in dispatch table */
/* No wrapper for glVertexStream2fvATI, not in dispatch table */
/* No wrapper for glVertexStream2dATI, not in dispatch table */
/* No wrapper for glVertexStream2dvATI, not in dispatch table */
/* No wrapper for glVertexStream3sATI, not in dispatch table */
/* No wrapper for glVertexStream3svATI, not in dispatch table */
/* No wrapper for glVertexStream3iATI, not in dispatch table */
/* No wrapper for glVertexStream3ivATI, not in dispatch table */
/* No wrapper for glVertexStream3fATI, not in dispatch table */
/* No wrapper for glVertexStream3fvATI, not in dispatch table */
/* No wrapper for glVertexStream3dATI, not in dispatch table */
/* No wrapper for glVertexStream3dvATI, not in dispatch table */
/* No wrapper for glVertexStream4sATI, not in dispatch table */
/* No wrapper for glVertexStream4svATI, not in dispatch table */
/* No wrapper for glVertexStream4iATI, not in dispatch table */
/* No wrapper for glVertexStream4ivATI, not in dispatch table */
/* No wrapper for glVertexStream4fATI, not in dispatch table */
/* No wrapper for glVertexStream4fvATI, not in dispatch table */
/* No wrapper for glVertexStream4dATI, not in dispatch table */
/* No wrapper for glVertexStream4dvATI, not in dispatch table */
/* No wrapper for glNormalStream3bATI, not in dispatch table */
/* No wrapper for glNormalStream3bvATI, not in dispatch table */
/* No wrapper for glNormalStream3sATI, not in dispatch table */
/* No wrapper for glNormalStream3svATI, not in dispatch table */
/* No wrapper for glNormalStream3iATI, not in dispatch table */
/* No wrapper for glNormalStream3ivATI, not in dispatch table */
/* No wrapper for glNormalStream3fATI, not in dispatch table */
/* No wrapper for glNormalStream3fvATI, not in dispatch table */
/* No wrapper for glNormalStream3dATI, not in dispatch table */
/* No wrapper for glNormalStream3dvATI, not in dispatch table */
/* No wrapper for glClientActiveVertexStreamATI, not in dispatch table */
/* No wrapper for glVertexBlendEnviATI, not in dispatch table */
/* No wrapper for glVertexBlendEnvfATI, not in dispatch table */
static void __stdcall glEGLImageTargetTexStorageEXTWrapper(GLenum target_, GLeglImageOES image_, const GLint* attrib_list_)
{
  RESOLVE(PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC, "glEGLImageTargetTexStorageEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEGLImageTargetTexStorageEXT\n");
#endif
  RESOLVED_PROC(PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC)( target_, image_, attrib_list_ );
}

static void __stdcall glEGLImageTargetTextureStorageEXTWrapper(GLuint texture_, GLeglImageOES image_, const GLint* attrib_list_)
{
  RESOLVE(PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC, "glEGLImageTargetTextureStorageEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEGLImageTargetTextureStorageEXT\n");
#endif
  RESOLVED_PROC(PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC)( texture_, image_, attrib_list_ );
}

/* No wrapper for glUniformBufferEXT, not in dispatch table */
/* No wrapper for glGetUniformBufferSizeEXT, not in dispatch table */
/* No wrapper for glGetUniformOffsetEXT, not in dispatch table */
/* No wrapper for glBlendColorEXT, not in dispatch table */
/* No wrapper for glBlendEquationSeparateEXT, not in dispatch table */
/* No wrapper for glBlendFuncSeparateEXT, not in dispatch table */
/* No wrapper for glBlendEquationEXT, not in dispatch table */
/* No wrapper for glColorSubTableEXT, not in dispatch table */
/* No wrapper for glCopyColorSubTableEXT, not in dispatch table */
static void __stdcall glLockArraysEXTWrapper(GLint first_, GLsizei count_)
{
  RESOLVE(PFNGLLOCKARRAYSEXTPROC, "glLockArraysEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glLockArraysEXT\n");
#endif
  RESOLVED_PROC(PFNGLLOCKARRAYSEXTPROC)( first_, count_ );
}

static void __stdcall glUnlockArraysEXTWrapper(void)
{
  RESOLVE(PFNGLUNLOCKARRAYSEXTPROC, "glUnlockArraysEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUnlockArraysEXT\n");
#endif
  RESOLVED_PROC(PFNGLUNLOCKARRAYSEXTPROC)(  );
}

/* No wrapper for glConvolutionFilter1DEXT, not in dispatch table */
/* No wrapper for glConvolutionFilter2DEXT, not in dispatch table */
/* No wrapper for glConvolutionParameterfEXT, not in dispatch table */
/* No wrapper for glConvolutionParameterfvEXT, not in dispatch table */
/* No wrapper for glConvolutionParameteriEXT, not in dispatch table */
/* No wrapper for glConvolutionParameterivEXT, not in dispatch table */
/* No wrapper for glCopyConvolutionFilter1DEXT, not in dispatch table */
/* No wrapper for glCopyConvolutionFilter2DEXT, not in dispatch table */
/* No wrapper for glGetConvolutionFilterEXT, not in dispatch table */
/* No wrapper for glGetConvolutionParameterfvEXT, not in dispatch table */
/* No wrapper for glGetConvolutionParameterivEXT, not in dispatch table */
/* No wrapper for glGetSeparableFilterEXT, not in dispatch table */
/* No wrapper for glSeparableFilter2DEXT, not in dispatch table */
/* No wrapper for glTangent3bEXT, not in dispatch table */
/* No wrapper for glTangent3bvEXT, not in dispatch table */
/* No wrapper for glTangent3dEXT, not in dispatch table */
/* No wrapper for glTangent3dvEXT, not in dispatch table */
/* No wrapper for glTangent3fEXT, not in dispatch table */
/* No wrapper for glTangent3fvEXT, not in dispatch table */
/* No wrapper for glTangent3iEXT, not in dispatch table */
/* No wrapper for glTangent3ivEXT, not in dispatch table */
/* No wrapper for glTangent3sEXT, not in dispatch table */
/* No wrapper for glTangent3svEXT, not in dispatch table */
/* No wrapper for glBinormal3bEXT, not in dispatch table */
/* No wrapper for glBinormal3bvEXT, not in dispatch table */
/* No wrapper for glBinormal3dEXT, not in dispatch table */
/* No wrapper for glBinormal3dvEXT, not in dispatch table */
/* No wrapper for glBinormal3fEXT, not in dispatch table */
/* No wrapper for glBinormal3fvEXT, not in dispatch table */
/* No wrapper for glBinormal3iEXT, not in dispatch table */
/* No wrapper for glBinormal3ivEXT, not in dispatch table */
/* No wrapper for glBinormal3sEXT, not in dispatch table */
/* No wrapper for glBinormal3svEXT, not in dispatch table */
/* No wrapper for glTangentPointerEXT, not in dispatch table */
/* No wrapper for glBinormalPointerEXT, not in dispatch table */
/* No wrapper for glCopyTexImage1DEXT, not in dispatch table */
/* No wrapper for glCopyTexImage2DEXT, not in dispatch table */
/* No wrapper for glCopyTexSubImage1DEXT, not in dispatch table */
/* No wrapper for glCopyTexSubImage2DEXT, not in dispatch table */
/* No wrapper for glCopyTexSubImage3DEXT, not in dispatch table */
/* No wrapper for glCullParameterdvEXT, not in dispatch table */
/* No wrapper for glCullParameterfvEXT, not in dispatch table */
static void __stdcall glLabelObjectEXTWrapper(GLenum type_, GLuint object_, GLsizei length_, const GLchar* label_)
{
  RESOLVE(PFNGLLABELOBJECTEXTPROC, "glLabelObjectEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glLabelObjectEXT\n");
#endif
  RESOLVED_PROC(PFNGLLABELOBJECTEXTPROC)( type_, object_, length_, label_ );
}

static void __stdcall glGetObjectLabelEXTWrapper(GLenum type_, GLuint object_, GLsizei bufSize_, GLsizei* length_, GLchar* label_)
{
  RESOLVE(PFNGLGETOBJECTLABELEXTPROC, "glGetObjectLabelEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetObjectLabelEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETOBJECTLABELEXTPROC)( type_, object_, bufSize_, length_, label_ );
}

/* No wrapper for glInsertEventMarkerEXT, not in dispatch table */
/* No wrapper for glPushGroupMarkerEXT, not in dispatch table */
/* No wrapper for glPopGroupMarkerEXT, not in dispatch table */
static void __stdcall glDepthBoundsEXTWrapper(GLclampd zmin_, GLclampd zmax_)
{
  RESOLVE(PFNGLDEPTHBOUNDSEXTPROC, "glDepthBoundsEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDepthBoundsEXT\n");
#endif
  RESOLVED_PROC(PFNGLDEPTHBOUNDSEXTPROC)( zmin_, zmax_ );
}

static void __stdcall glMatrixLoadfEXTWrapper(GLenum mode_, const GLfloat* m_)
{
  RESOLVE(PFNGLMATRIXLOADFEXTPROC, "glMatrixLoadfEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMatrixLoadfEXT\n");
#endif
  RESOLVED_PROC(PFNGLMATRIXLOADFEXTPROC)( mode_, m_ );
}

static void __stdcall glMatrixLoaddEXTWrapper(GLenum mode_, const GLdouble* m_)
{
  RESOLVE(PFNGLMATRIXLOADDEXTPROC, "glMatrixLoaddEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMatrixLoaddEXT\n");
#endif
  RESOLVED_PROC(PFNGLMATRIXLOADDEXTPROC)( mode_, m_ );
}

static void __stdcall glMatrixMultfEXTWrapper(GLenum mode_, const GLfloat* m_)
{
  RESOLVE(PFNGLMATRIXMULTFEXTPROC, "glMatrixMultfEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMatrixMultfEXT\n");
#endif
  RESOLVED_PROC(PFNGLMATRIXMULTFEXTPROC)( mode_, m_ );
}

static void __stdcall glMatrixMultdEXTWrapper(GLenum mode_, const GLdouble* m_)
{
  RESOLVE(PFNGLMATRIXMULTDEXTPROC, "glMatrixMultdEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMatrixMultdEXT\n");
#endif
  RESOLVED_PROC(PFNGLMATRIXMULTDEXTPROC)( mode_, m_ );
}

static void __stdcall glMatrixLoadIdentityEXTWrapper(GLenum mode_)
{
  RESOLVE(PFNGLMATRIXLOADIDENTITYEXTPROC, "glMatrixLoadIdentityEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMatrixLoadIdentityEXT\n");
#endif
  RESOLVED_PROC(PFNGLMATRIXLOADIDENTITYEXTPROC)( mode_ );
}

static void __stdcall glMatrixRotatefEXTWrapper(GLenum mode_, GLfloat angle_, GLfloat x_, GLfloat y_, GLfloat z_)
{
  RESOLVE(PFNGLMATRIXROTATEFEXTPROC, "glMatrixRotatefEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMatrixRotatefEXT\n");
#endif
  RESOLVED_PROC(PFNGLMATRIXROTATEFEXTPROC)( mode_, angle_, x_, y_, z_ );
}

static void __stdcall glMatrixRotatedEXTWrapper(GLenum mode_, GLdouble angle_, GLdouble x_, GLdouble y_, GLdouble z_)
{
  RESOLVE(PFNGLMATRIXROTATEDEXTPROC, "glMatrixRotatedEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMatrixRotatedEXT\n");
#endif
  RESOLVED_PROC(PFNGLMATRIXROTATEDEXTPROC)( mode_, angle_, x_, y_, z_ );
}

static void __stdcall glMatrixScalefEXTWrapper(GLenum mode_, GLfloat x_, GLfloat y_, GLfloat z_)
{
  RESOLVE(PFNGLMATRIXSCALEFEXTPROC, "glMatrixScalefEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMatrixScalefEXT\n");
#endif
  RESOLVED_PROC(PFNGLMATRIXSCALEFEXTPROC)( mode_, x_, y_, z_ );
}

static void __stdcall glMatrixScaledEXTWrapper(GLenum mode_, GLdouble x_, GLdouble y_, GLdouble z_)
{
  RESOLVE(PFNGLMATRIXSCALEDEXTPROC, "glMatrixScaledEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMatrixScaledEXT\n");
#endif
  RESOLVED_PROC(PFNGLMATRIXSCALEDEXTPROC)( mode_, x_, y_, z_ );
}

static void __stdcall glMatrixTranslatefEXTWrapper(GLenum mode_, GLfloat x_, GLfloat y_, GLfloat z_)
{
  RESOLVE(PFNGLMATRIXTRANSLATEFEXTPROC, "glMatrixTranslatefEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMatrixTranslatefEXT\n");
#endif
  RESOLVED_PROC(PFNGLMATRIXTRANSLATEFEXTPROC)( mode_, x_, y_, z_ );
}

static void __stdcall glMatrixTranslatedEXTWrapper(GLenum mode_, GLdouble x_, GLdouble y_, GLdouble z_)
{
  RESOLVE(PFNGLMATRIXTRANSLATEDEXTPROC, "glMatrixTranslatedEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMatrixTranslatedEXT\n");
#endif
  RESOLVED_PROC(PFNGLMATRIXTRANSLATEDEXTPROC)( mode_, x_, y_, z_ );
}

static void __stdcall glMatrixFrustumEXTWrapper(GLenum mode_, GLdouble left_, GLdouble right_, GLdouble bottom_, GLdouble top_, GLdouble zNear_, GLdouble zFar_)
{
  RESOLVE(PFNGLMATRIXFRUSTUMEXTPROC, "glMatrixFrustumEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMatrixFrustumEXT\n");
#endif
  RESOLVED_PROC(PFNGLMATRIXFRUSTUMEXTPROC)( mode_, left_, right_, bottom_, top_, zNear_, zFar_ );
}

static void __stdcall glMatrixOrthoEXTWrapper(GLenum mode_, GLdouble left_, GLdouble right_, GLdouble bottom_, GLdouble top_, GLdouble zNear_, GLdouble zFar_)
{
  RESOLVE(PFNGLMATRIXORTHOEXTPROC, "glMatrixOrthoEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMatrixOrthoEXT\n");
#endif
  RESOLVED_PROC(PFNGLMATRIXORTHOEXTPROC)( mode_, left_, right_, bottom_, top_, zNear_, zFar_ );
}

static void __stdcall glMatrixPopEXTWrapper(GLenum mode_)
{
  RESOLVE(PFNGLMATRIXPOPEXTPROC, "glMatrixPopEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMatrixPopEXT\n");
#endif
  RESOLVED_PROC(PFNGLMATRIXPOPEXTPROC)( mode_ );
}

static void __stdcall glMatrixPushEXTWrapper(GLenum mode_)
{
  RESOLVE(PFNGLMATRIXPUSHEXTPROC, "glMatrixPushEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMatrixPushEXT\n");
#endif
  RESOLVED_PROC(PFNGLMATRIXPUSHEXTPROC)( mode_ );
}

static void __stdcall glClientAttribDefaultEXTWrapper(GLbitfield mask_)
{
  RESOLVE(PFNGLCLIENTATTRIBDEFAULTEXTPROC, "glClientAttribDefaultEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClientAttribDefaultEXT\n");
#endif
  RESOLVED_PROC(PFNGLCLIENTATTRIBDEFAULTEXTPROC)( mask_ );
}

static void __stdcall glPushClientAttribDefaultEXTWrapper(GLbitfield mask_)
{
  RESOLVE(PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC, "glPushClientAttribDefaultEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPushClientAttribDefaultEXT\n");
#endif
  RESOLVED_PROC(PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC)( mask_ );
}

static void __stdcall glTextureParameterfEXTWrapper(GLuint texture_, GLenum target_, GLenum pname_, GLfloat param_)
{
  RESOLVE(PFNGLTEXTUREPARAMETERFEXTPROC, "glTextureParameterfEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureParameterfEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXTUREPARAMETERFEXTPROC)( texture_, target_, pname_, param_ );
}

static void __stdcall glTextureParameterfvEXTWrapper(GLuint texture_, GLenum target_, GLenum pname_, const GLfloat* params_)
{
  RESOLVE(PFNGLTEXTUREPARAMETERFVEXTPROC, "glTextureParameterfvEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureParameterfvEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXTUREPARAMETERFVEXTPROC)( texture_, target_, pname_, params_ );
}

static void __stdcall glTextureParameteriEXTWrapper(GLuint texture_, GLenum target_, GLenum pname_, GLint param_)
{
  RESOLVE(PFNGLTEXTUREPARAMETERIEXTPROC, "glTextureParameteriEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureParameteriEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXTUREPARAMETERIEXTPROC)( texture_, target_, pname_, param_ );
}

static void __stdcall glTextureParameterivEXTWrapper(GLuint texture_, GLenum target_, GLenum pname_, const GLint* params_)
{
  RESOLVE(PFNGLTEXTUREPARAMETERIVEXTPROC, "glTextureParameterivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureParameterivEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXTUREPARAMETERIVEXTPROC)( texture_, target_, pname_, params_ );
}

static void __stdcall glTextureImage1DEXTWrapper(GLuint texture_, GLenum target_, GLint level_, GLint internalformat_, GLsizei width_, GLint border_, GLenum format_, GLenum type_, const void * pixels_)
{
  RESOLVE(PFNGLTEXTUREIMAGE1DEXTPROC, "glTextureImage1DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureImage1DEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXTUREIMAGE1DEXTPROC)( texture_, target_, level_, internalformat_, width_, border_, format_, type_, pixels_ );
}

static void __stdcall glTextureImage2DEXTWrapper(GLuint texture_, GLenum target_, GLint level_, GLint internalformat_, GLsizei width_, GLsizei height_, GLint border_, GLenum format_, GLenum type_, const void * pixels_)
{
  RESOLVE(PFNGLTEXTUREIMAGE2DEXTPROC, "glTextureImage2DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureImage2DEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXTUREIMAGE2DEXTPROC)( texture_, target_, level_, internalformat_, width_, height_, border_, format_, type_, pixels_ );
}

static void __stdcall glTextureSubImage1DEXTWrapper(GLuint texture_, GLenum target_, GLint level_, GLint xoffset_, GLsizei width_, GLenum format_, GLenum type_, const void * pixels_)
{
  RESOLVE(PFNGLTEXTURESUBIMAGE1DEXTPROC, "glTextureSubImage1DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureSubImage1DEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXTURESUBIMAGE1DEXTPROC)( texture_, target_, level_, xoffset_, width_, format_, type_, pixels_ );
}

static void __stdcall glTextureSubImage2DEXTWrapper(GLuint texture_, GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, const void * pixels_)
{
  RESOLVE(PFNGLTEXTURESUBIMAGE2DEXTPROC, "glTextureSubImage2DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureSubImage2DEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXTURESUBIMAGE2DEXTPROC)( texture_, target_, level_, xoffset_, yoffset_, width_, height_, format_, type_, pixels_ );
}

static void __stdcall glCopyTextureImage1DEXTWrapper(GLuint texture_, GLenum target_, GLint level_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_, GLint border_)
{
  RESOLVE(PFNGLCOPYTEXTUREIMAGE1DEXTPROC, "glCopyTextureImage1DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCopyTextureImage1DEXT\n");
#endif
  RESOLVED_PROC(PFNGLCOPYTEXTUREIMAGE1DEXTPROC)( texture_, target_, level_, internalformat_, x_, y_, width_, border_ );
}

static void __stdcall glCopyTextureImage2DEXTWrapper(GLuint texture_, GLenum target_, GLint level_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLint border_)
{
  RESOLVE(PFNGLCOPYTEXTUREIMAGE2DEXTPROC, "glCopyTextureImage2DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCopyTextureImage2DEXT\n");
#endif
  RESOLVED_PROC(PFNGLCOPYTEXTUREIMAGE2DEXTPROC)( texture_, target_, level_, internalformat_, x_, y_, width_, height_, border_ );
}

static void __stdcall glCopyTextureSubImage1DEXTWrapper(GLuint texture_, GLenum target_, GLint level_, GLint xoffset_, GLint x_, GLint y_, GLsizei width_)
{
  RESOLVE(PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC, "glCopyTextureSubImage1DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCopyTextureSubImage1DEXT\n");
#endif
  RESOLVED_PROC(PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC)( texture_, target_, level_, xoffset_, x_, y_, width_ );
}

static void __stdcall glCopyTextureSubImage2DEXTWrapper(GLuint texture_, GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint x_, GLint y_, GLsizei width_, GLsizei height_)
{
  RESOLVE(PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC, "glCopyTextureSubImage2DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCopyTextureSubImage2DEXT\n");
#endif
  RESOLVED_PROC(PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC)( texture_, target_, level_, xoffset_, yoffset_, x_, y_, width_, height_ );
}

static void __stdcall glGetTextureImageEXTWrapper(GLuint texture_, GLenum target_, GLint level_, GLenum format_, GLenum type_, void * pixels_)
{
  RESOLVE(PFNGLGETTEXTUREIMAGEEXTPROC, "glGetTextureImageEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTextureImageEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETTEXTUREIMAGEEXTPROC)( texture_, target_, level_, format_, type_, pixels_ );
}

static void __stdcall glGetTextureParameterfvEXTWrapper(GLuint texture_, GLenum target_, GLenum pname_, GLfloat* params_)
{
  RESOLVE(PFNGLGETTEXTUREPARAMETERFVEXTPROC, "glGetTextureParameterfvEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTextureParameterfvEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETTEXTUREPARAMETERFVEXTPROC)( texture_, target_, pname_, params_ );
}

static void __stdcall glGetTextureParameterivEXTWrapper(GLuint texture_, GLenum target_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETTEXTUREPARAMETERIVEXTPROC, "glGetTextureParameterivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTextureParameterivEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETTEXTUREPARAMETERIVEXTPROC)( texture_, target_, pname_, params_ );
}

static void __stdcall glGetTextureLevelParameterfvEXTWrapper(GLuint texture_, GLenum target_, GLint level_, GLenum pname_, GLfloat* params_)
{
  RESOLVE(PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC, "glGetTextureLevelParameterfvEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTextureLevelParameterfvEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC)( texture_, target_, level_, pname_, params_ );
}

static void __stdcall glGetTextureLevelParameterivEXTWrapper(GLuint texture_, GLenum target_, GLint level_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC, "glGetTextureLevelParameterivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTextureLevelParameterivEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC)( texture_, target_, level_, pname_, params_ );
}

static void __stdcall glTextureImage3DEXTWrapper(GLuint texture_, GLenum target_, GLint level_, GLint internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLint border_, GLenum format_, GLenum type_, const void * pixels_)
{
  RESOLVE(PFNGLTEXTUREIMAGE3DEXTPROC, "glTextureImage3DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureImage3DEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXTUREIMAGE3DEXTPROC)( texture_, target_, level_, internalformat_, width_, height_, depth_, border_, format_, type_, pixels_ );
}

static void __stdcall glTextureSubImage3DEXTWrapper(GLuint texture_, GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLenum type_, const void * pixels_)
{
  RESOLVE(PFNGLTEXTURESUBIMAGE3DEXTPROC, "glTextureSubImage3DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureSubImage3DEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXTURESUBIMAGE3DEXTPROC)( texture_, target_, level_, xoffset_, yoffset_, zoffset_, width_, height_, depth_, format_, type_, pixels_ );
}

static void __stdcall glCopyTextureSubImage3DEXTWrapper(GLuint texture_, GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLint x_, GLint y_, GLsizei width_, GLsizei height_)
{
  RESOLVE(PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC, "glCopyTextureSubImage3DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCopyTextureSubImage3DEXT\n");
#endif
  RESOLVED_PROC(PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC)( texture_, target_, level_, xoffset_, yoffset_, zoffset_, x_, y_, width_, height_ );
}

static void __stdcall glBindMultiTextureEXTWrapper(GLenum texunit_, GLenum target_, GLuint texture_)
{
  RESOLVE(PFNGLBINDMULTITEXTUREEXTPROC, "glBindMultiTextureEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindMultiTextureEXT\n");
#endif
  RESOLVED_PROC(PFNGLBINDMULTITEXTUREEXTPROC)( texunit_, target_, texture_ );
}

static void __stdcall glMultiTexCoordPointerEXTWrapper(GLenum texunit_, GLint size_, GLenum type_, GLsizei stride_, const void * pointer_)
{
  RESOLVE(PFNGLMULTITEXCOORDPOINTEREXTPROC, "glMultiTexCoordPointerEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoordPointerEXT\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORDPOINTEREXTPROC)( texunit_, size_, type_, stride_, pointer_ );
}

static void __stdcall glMultiTexEnvfEXTWrapper(GLenum texunit_, GLenum target_, GLenum pname_, GLfloat param_)
{
  RESOLVE(PFNGLMULTITEXENVFEXTPROC, "glMultiTexEnvfEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexEnvfEXT\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXENVFEXTPROC)( texunit_, target_, pname_, param_ );
}

static void __stdcall glMultiTexEnvfvEXTWrapper(GLenum texunit_, GLenum target_, GLenum pname_, const GLfloat* params_)
{
  RESOLVE(PFNGLMULTITEXENVFVEXTPROC, "glMultiTexEnvfvEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexEnvfvEXT\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXENVFVEXTPROC)( texunit_, target_, pname_, params_ );
}

static void __stdcall glMultiTexEnviEXTWrapper(GLenum texunit_, GLenum target_, GLenum pname_, GLint param_)
{
  RESOLVE(PFNGLMULTITEXENVIEXTPROC, "glMultiTexEnviEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexEnviEXT\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXENVIEXTPROC)( texunit_, target_, pname_, param_ );
}

static void __stdcall glMultiTexEnvivEXTWrapper(GLenum texunit_, GLenum target_, GLenum pname_, const GLint* params_)
{
  RESOLVE(PFNGLMULTITEXENVIVEXTPROC, "glMultiTexEnvivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexEnvivEXT\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXENVIVEXTPROC)( texunit_, target_, pname_, params_ );
}

static void __stdcall glMultiTexGendEXTWrapper(GLenum texunit_, GLenum coord_, GLenum pname_, GLdouble param_)
{
  RESOLVE(PFNGLMULTITEXGENDEXTPROC, "glMultiTexGendEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexGendEXT\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXGENDEXTPROC)( texunit_, coord_, pname_, param_ );
}

static void __stdcall glMultiTexGendvEXTWrapper(GLenum texunit_, GLenum coord_, GLenum pname_, const GLdouble* params_)
{
  RESOLVE(PFNGLMULTITEXGENDVEXTPROC, "glMultiTexGendvEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexGendvEXT\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXGENDVEXTPROC)( texunit_, coord_, pname_, params_ );
}

static void __stdcall glMultiTexGenfEXTWrapper(GLenum texunit_, GLenum coord_, GLenum pname_, GLfloat param_)
{
  RESOLVE(PFNGLMULTITEXGENFEXTPROC, "glMultiTexGenfEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexGenfEXT\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXGENFEXTPROC)( texunit_, coord_, pname_, param_ );
}

static void __stdcall glMultiTexGenfvEXTWrapper(GLenum texunit_, GLenum coord_, GLenum pname_, const GLfloat* params_)
{
  RESOLVE(PFNGLMULTITEXGENFVEXTPROC, "glMultiTexGenfvEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexGenfvEXT\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXGENFVEXTPROC)( texunit_, coord_, pname_, params_ );
}

static void __stdcall glMultiTexGeniEXTWrapper(GLenum texunit_, GLenum coord_, GLenum pname_, GLint param_)
{
  RESOLVE(PFNGLMULTITEXGENIEXTPROC, "glMultiTexGeniEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexGeniEXT\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXGENIEXTPROC)( texunit_, coord_, pname_, param_ );
}

static void __stdcall glMultiTexGenivEXTWrapper(GLenum texunit_, GLenum coord_, GLenum pname_, const GLint* params_)
{
  RESOLVE(PFNGLMULTITEXGENIVEXTPROC, "glMultiTexGenivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexGenivEXT\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXGENIVEXTPROC)( texunit_, coord_, pname_, params_ );
}

static void __stdcall glGetMultiTexEnvfvEXTWrapper(GLenum texunit_, GLenum target_, GLenum pname_, GLfloat* params_)
{
  RESOLVE(PFNGLGETMULTITEXENVFVEXTPROC, "glGetMultiTexEnvfvEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetMultiTexEnvfvEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETMULTITEXENVFVEXTPROC)( texunit_, target_, pname_, params_ );
}

static void __stdcall glGetMultiTexEnvivEXTWrapper(GLenum texunit_, GLenum target_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETMULTITEXENVIVEXTPROC, "glGetMultiTexEnvivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetMultiTexEnvivEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETMULTITEXENVIVEXTPROC)( texunit_, target_, pname_, params_ );
}

static void __stdcall glGetMultiTexGendvEXTWrapper(GLenum texunit_, GLenum coord_, GLenum pname_, GLdouble* params_)
{
  RESOLVE(PFNGLGETMULTITEXGENDVEXTPROC, "glGetMultiTexGendvEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetMultiTexGendvEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETMULTITEXGENDVEXTPROC)( texunit_, coord_, pname_, params_ );
}

static void __stdcall glGetMultiTexGenfvEXTWrapper(GLenum texunit_, GLenum coord_, GLenum pname_, GLfloat* params_)
{
  RESOLVE(PFNGLGETMULTITEXGENFVEXTPROC, "glGetMultiTexGenfvEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetMultiTexGenfvEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETMULTITEXGENFVEXTPROC)( texunit_, coord_, pname_, params_ );
}

static void __stdcall glGetMultiTexGenivEXTWrapper(GLenum texunit_, GLenum coord_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETMULTITEXGENIVEXTPROC, "glGetMultiTexGenivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetMultiTexGenivEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETMULTITEXGENIVEXTPROC)( texunit_, coord_, pname_, params_ );
}

static void __stdcall glMultiTexParameteriEXTWrapper(GLenum texunit_, GLenum target_, GLenum pname_, GLint param_)
{
  RESOLVE(PFNGLMULTITEXPARAMETERIEXTPROC, "glMultiTexParameteriEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexParameteriEXT\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXPARAMETERIEXTPROC)( texunit_, target_, pname_, param_ );
}

static void __stdcall glMultiTexParameterivEXTWrapper(GLenum texunit_, GLenum target_, GLenum pname_, const GLint* params_)
{
  RESOLVE(PFNGLMULTITEXPARAMETERIVEXTPROC, "glMultiTexParameterivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexParameterivEXT\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXPARAMETERIVEXTPROC)( texunit_, target_, pname_, params_ );
}

static void __stdcall glMultiTexParameterfEXTWrapper(GLenum texunit_, GLenum target_, GLenum pname_, GLfloat param_)
{
  RESOLVE(PFNGLMULTITEXPARAMETERFEXTPROC, "glMultiTexParameterfEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexParameterfEXT\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXPARAMETERFEXTPROC)( texunit_, target_, pname_, param_ );
}

static void __stdcall glMultiTexParameterfvEXTWrapper(GLenum texunit_, GLenum target_, GLenum pname_, const GLfloat* params_)
{
  RESOLVE(PFNGLMULTITEXPARAMETERFVEXTPROC, "glMultiTexParameterfvEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexParameterfvEXT\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXPARAMETERFVEXTPROC)( texunit_, target_, pname_, params_ );
}

static void __stdcall glMultiTexImage1DEXTWrapper(GLenum texunit_, GLenum target_, GLint level_, GLint internalformat_, GLsizei width_, GLint border_, GLenum format_, GLenum type_, const void * pixels_)
{
  RESOLVE(PFNGLMULTITEXIMAGE1DEXTPROC, "glMultiTexImage1DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexImage1DEXT\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXIMAGE1DEXTPROC)( texunit_, target_, level_, internalformat_, width_, border_, format_, type_, pixels_ );
}

static void __stdcall glMultiTexImage2DEXTWrapper(GLenum texunit_, GLenum target_, GLint level_, GLint internalformat_, GLsizei width_, GLsizei height_, GLint border_, GLenum format_, GLenum type_, const void * pixels_)
{
  RESOLVE(PFNGLMULTITEXIMAGE2DEXTPROC, "glMultiTexImage2DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexImage2DEXT\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXIMAGE2DEXTPROC)( texunit_, target_, level_, internalformat_, width_, height_, border_, format_, type_, pixels_ );
}

static void __stdcall glMultiTexSubImage1DEXTWrapper(GLenum texunit_, GLenum target_, GLint level_, GLint xoffset_, GLsizei width_, GLenum format_, GLenum type_, const void * pixels_)
{
  RESOLVE(PFNGLMULTITEXSUBIMAGE1DEXTPROC, "glMultiTexSubImage1DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexSubImage1DEXT\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXSUBIMAGE1DEXTPROC)( texunit_, target_, level_, xoffset_, width_, format_, type_, pixels_ );
}

static void __stdcall glMultiTexSubImage2DEXTWrapper(GLenum texunit_, GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLsizei width_, GLsizei height_, GLenum format_, GLenum type_, const void * pixels_)
{
  RESOLVE(PFNGLMULTITEXSUBIMAGE2DEXTPROC, "glMultiTexSubImage2DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexSubImage2DEXT\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXSUBIMAGE2DEXTPROC)( texunit_, target_, level_, xoffset_, yoffset_, width_, height_, format_, type_, pixels_ );
}

static void __stdcall glCopyMultiTexImage1DEXTWrapper(GLenum texunit_, GLenum target_, GLint level_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_, GLint border_)
{
  RESOLVE(PFNGLCOPYMULTITEXIMAGE1DEXTPROC, "glCopyMultiTexImage1DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCopyMultiTexImage1DEXT\n");
#endif
  RESOLVED_PROC(PFNGLCOPYMULTITEXIMAGE1DEXTPROC)( texunit_, target_, level_, internalformat_, x_, y_, width_, border_ );
}

static void __stdcall glCopyMultiTexImage2DEXTWrapper(GLenum texunit_, GLenum target_, GLint level_, GLenum internalformat_, GLint x_, GLint y_, GLsizei width_, GLsizei height_, GLint border_)
{
  RESOLVE(PFNGLCOPYMULTITEXIMAGE2DEXTPROC, "glCopyMultiTexImage2DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCopyMultiTexImage2DEXT\n");
#endif
  RESOLVED_PROC(PFNGLCOPYMULTITEXIMAGE2DEXTPROC)( texunit_, target_, level_, internalformat_, x_, y_, width_, height_, border_ );
}

static void __stdcall glCopyMultiTexSubImage1DEXTWrapper(GLenum texunit_, GLenum target_, GLint level_, GLint xoffset_, GLint x_, GLint y_, GLsizei width_)
{
  RESOLVE(PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC, "glCopyMultiTexSubImage1DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCopyMultiTexSubImage1DEXT\n");
#endif
  RESOLVED_PROC(PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC)( texunit_, target_, level_, xoffset_, x_, y_, width_ );
}

static void __stdcall glCopyMultiTexSubImage2DEXTWrapper(GLenum texunit_, GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint x_, GLint y_, GLsizei width_, GLsizei height_)
{
  RESOLVE(PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC, "glCopyMultiTexSubImage2DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCopyMultiTexSubImage2DEXT\n");
#endif
  RESOLVED_PROC(PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC)( texunit_, target_, level_, xoffset_, yoffset_, x_, y_, width_, height_ );
}

static void __stdcall glGetMultiTexImageEXTWrapper(GLenum texunit_, GLenum target_, GLint level_, GLenum format_, GLenum type_, void * pixels_)
{
  RESOLVE(PFNGLGETMULTITEXIMAGEEXTPROC, "glGetMultiTexImageEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetMultiTexImageEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETMULTITEXIMAGEEXTPROC)( texunit_, target_, level_, format_, type_, pixels_ );
}

static void __stdcall glGetMultiTexParameterfvEXTWrapper(GLenum texunit_, GLenum target_, GLenum pname_, GLfloat* params_)
{
  RESOLVE(PFNGLGETMULTITEXPARAMETERFVEXTPROC, "glGetMultiTexParameterfvEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetMultiTexParameterfvEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETMULTITEXPARAMETERFVEXTPROC)( texunit_, target_, pname_, params_ );
}

static void __stdcall glGetMultiTexParameterivEXTWrapper(GLenum texunit_, GLenum target_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETMULTITEXPARAMETERIVEXTPROC, "glGetMultiTexParameterivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetMultiTexParameterivEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETMULTITEXPARAMETERIVEXTPROC)( texunit_, target_, pname_, params_ );
}

static void __stdcall glGetMultiTexLevelParameterfvEXTWrapper(GLenum texunit_, GLenum target_, GLint level_, GLenum pname_, GLfloat* params_)
{
  RESOLVE(PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC, "glGetMultiTexLevelParameterfvEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetMultiTexLevelParameterfvEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC)( texunit_, target_, level_, pname_, params_ );
}

static void __stdcall glGetMultiTexLevelParameterivEXTWrapper(GLenum texunit_, GLenum target_, GLint level_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC, "glGetMultiTexLevelParameterivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetMultiTexLevelParameterivEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC)( texunit_, target_, level_, pname_, params_ );
}

static void __stdcall glMultiTexImage3DEXTWrapper(GLenum texunit_, GLenum target_, GLint level_, GLint internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLint border_, GLenum format_, GLenum type_, const void * pixels_)
{
  RESOLVE(PFNGLMULTITEXIMAGE3DEXTPROC, "glMultiTexImage3DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexImage3DEXT\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXIMAGE3DEXTPROC)( texunit_, target_, level_, internalformat_, width_, height_, depth_, border_, format_, type_, pixels_ );
}

static void __stdcall glMultiTexSubImage3DEXTWrapper(GLenum texunit_, GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLenum type_, const void * pixels_)
{
  RESOLVE(PFNGLMULTITEXSUBIMAGE3DEXTPROC, "glMultiTexSubImage3DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexSubImage3DEXT\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXSUBIMAGE3DEXTPROC)( texunit_, target_, level_, xoffset_, yoffset_, zoffset_, width_, height_, depth_, format_, type_, pixels_ );
}

static void __stdcall glCopyMultiTexSubImage3DEXTWrapper(GLenum texunit_, GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLint x_, GLint y_, GLsizei width_, GLsizei height_)
{
  RESOLVE(PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC, "glCopyMultiTexSubImage3DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCopyMultiTexSubImage3DEXT\n");
#endif
  RESOLVED_PROC(PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC)( texunit_, target_, level_, xoffset_, yoffset_, zoffset_, x_, y_, width_, height_ );
}

/* No wrapper for glEnableClientStateIndexedEXT, not in dispatch table */
/* No wrapper for glDisableClientStateIndexedEXT, not in dispatch table */
/* No wrapper for glGetFloatIndexedvEXT, not in dispatch table */
/* No wrapper for glGetDoubleIndexedvEXT, not in dispatch table */
static void __stdcall glGetPointerIndexedvEXTWrapper(GLenum target_, GLuint index_, void ** data_)
{
  RESOLVE(PFNGLGETPOINTERINDEXEDVEXTPROC, "glGetPointerIndexedvEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetPointerIndexedvEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETPOINTERINDEXEDVEXTPROC)( target_, index_, data_ );
}

/* No wrapper for glEnableIndexedEXT, not in dispatch table */
/* No wrapper for glDisableIndexedEXT, not in dispatch table */
/* No wrapper for glIsEnabledIndexedEXT, not in dispatch table */
/* No wrapper for glGetIntegerIndexedvEXT, not in dispatch table */
/* No wrapper for glGetBooleanIndexedvEXT, not in dispatch table */
static void __stdcall glCompressedTextureImage3DEXTWrapper(GLuint texture_, GLenum target_, GLint level_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLint border_, GLsizei imageSize_, const void * bits_)
{
  RESOLVE(PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC, "glCompressedTextureImage3DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCompressedTextureImage3DEXT\n");
#endif
  RESOLVED_PROC(PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC)( texture_, target_, level_, internalformat_, width_, height_, depth_, border_, imageSize_, bits_ );
}

static void __stdcall glCompressedTextureImage2DEXTWrapper(GLuint texture_, GLenum target_, GLint level_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLint border_, GLsizei imageSize_, const void * bits_)
{
  RESOLVE(PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC, "glCompressedTextureImage2DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCompressedTextureImage2DEXT\n");
#endif
  RESOLVED_PROC(PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC)( texture_, target_, level_, internalformat_, width_, height_, border_, imageSize_, bits_ );
}

static void __stdcall glCompressedTextureImage1DEXTWrapper(GLuint texture_, GLenum target_, GLint level_, GLenum internalformat_, GLsizei width_, GLint border_, GLsizei imageSize_, const void * bits_)
{
  RESOLVE(PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC, "glCompressedTextureImage1DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCompressedTextureImage1DEXT\n");
#endif
  RESOLVED_PROC(PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC)( texture_, target_, level_, internalformat_, width_, border_, imageSize_, bits_ );
}

static void __stdcall glCompressedTextureSubImage3DEXTWrapper(GLuint texture_, GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLsizei imageSize_, const void * bits_)
{
  RESOLVE(PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC, "glCompressedTextureSubImage3DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCompressedTextureSubImage3DEXT\n");
#endif
  RESOLVED_PROC(PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC)( texture_, target_, level_, xoffset_, yoffset_, zoffset_, width_, height_, depth_, format_, imageSize_, bits_ );
}

static void __stdcall glCompressedTextureSubImage2DEXTWrapper(GLuint texture_, GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLsizei width_, GLsizei height_, GLenum format_, GLsizei imageSize_, const void * bits_)
{
  RESOLVE(PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC, "glCompressedTextureSubImage2DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCompressedTextureSubImage2DEXT\n");
#endif
  RESOLVED_PROC(PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC)( texture_, target_, level_, xoffset_, yoffset_, width_, height_, format_, imageSize_, bits_ );
}

static void __stdcall glCompressedTextureSubImage1DEXTWrapper(GLuint texture_, GLenum target_, GLint level_, GLint xoffset_, GLsizei width_, GLenum format_, GLsizei imageSize_, const void * bits_)
{
  RESOLVE(PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC, "glCompressedTextureSubImage1DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCompressedTextureSubImage1DEXT\n");
#endif
  RESOLVED_PROC(PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC)( texture_, target_, level_, xoffset_, width_, format_, imageSize_, bits_ );
}

static void __stdcall glGetCompressedTextureImageEXTWrapper(GLuint texture_, GLenum target_, GLint lod_, void * img_)
{
  RESOLVE(PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC, "glGetCompressedTextureImageEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetCompressedTextureImageEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC)( texture_, target_, lod_, img_ );
}

static void __stdcall glCompressedMultiTexImage3DEXTWrapper(GLenum texunit_, GLenum target_, GLint level_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLint border_, GLsizei imageSize_, const void * bits_)
{
  RESOLVE(PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC, "glCompressedMultiTexImage3DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCompressedMultiTexImage3DEXT\n");
#endif
  RESOLVED_PROC(PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC)( texunit_, target_, level_, internalformat_, width_, height_, depth_, border_, imageSize_, bits_ );
}

static void __stdcall glCompressedMultiTexImage2DEXTWrapper(GLenum texunit_, GLenum target_, GLint level_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLint border_, GLsizei imageSize_, const void * bits_)
{
  RESOLVE(PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC, "glCompressedMultiTexImage2DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCompressedMultiTexImage2DEXT\n");
#endif
  RESOLVED_PROC(PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC)( texunit_, target_, level_, internalformat_, width_, height_, border_, imageSize_, bits_ );
}

static void __stdcall glCompressedMultiTexImage1DEXTWrapper(GLenum texunit_, GLenum target_, GLint level_, GLenum internalformat_, GLsizei width_, GLint border_, GLsizei imageSize_, const void * bits_)
{
  RESOLVE(PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC, "glCompressedMultiTexImage1DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCompressedMultiTexImage1DEXT\n");
#endif
  RESOLVED_PROC(PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC)( texunit_, target_, level_, internalformat_, width_, border_, imageSize_, bits_ );
}

static void __stdcall glCompressedMultiTexSubImage3DEXTWrapper(GLenum texunit_, GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLenum format_, GLsizei imageSize_, const void * bits_)
{
  RESOLVE(PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC, "glCompressedMultiTexSubImage3DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCompressedMultiTexSubImage3DEXT\n");
#endif
  RESOLVED_PROC(PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC)( texunit_, target_, level_, xoffset_, yoffset_, zoffset_, width_, height_, depth_, format_, imageSize_, bits_ );
}

static void __stdcall glCompressedMultiTexSubImage2DEXTWrapper(GLenum texunit_, GLenum target_, GLint level_, GLint xoffset_, GLint yoffset_, GLsizei width_, GLsizei height_, GLenum format_, GLsizei imageSize_, const void * bits_)
{
  RESOLVE(PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC, "glCompressedMultiTexSubImage2DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCompressedMultiTexSubImage2DEXT\n");
#endif
  RESOLVED_PROC(PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC)( texunit_, target_, level_, xoffset_, yoffset_, width_, height_, format_, imageSize_, bits_ );
}

static void __stdcall glCompressedMultiTexSubImage1DEXTWrapper(GLenum texunit_, GLenum target_, GLint level_, GLint xoffset_, GLsizei width_, GLenum format_, GLsizei imageSize_, const void * bits_)
{
  RESOLVE(PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC, "glCompressedMultiTexSubImage1DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCompressedMultiTexSubImage1DEXT\n");
#endif
  RESOLVED_PROC(PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC)( texunit_, target_, level_, xoffset_, width_, format_, imageSize_, bits_ );
}

static void __stdcall glGetCompressedMultiTexImageEXTWrapper(GLenum texunit_, GLenum target_, GLint lod_, void * img_)
{
  RESOLVE(PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC, "glGetCompressedMultiTexImageEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetCompressedMultiTexImageEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC)( texunit_, target_, lod_, img_ );
}

static void __stdcall glMatrixLoadTransposefEXTWrapper(GLenum mode_, const GLfloat* m_)
{
  RESOLVE(PFNGLMATRIXLOADTRANSPOSEFEXTPROC, "glMatrixLoadTransposefEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMatrixLoadTransposefEXT\n");
#endif
  RESOLVED_PROC(PFNGLMATRIXLOADTRANSPOSEFEXTPROC)( mode_, m_ );
}

static void __stdcall glMatrixLoadTransposedEXTWrapper(GLenum mode_, const GLdouble* m_)
{
  RESOLVE(PFNGLMATRIXLOADTRANSPOSEDEXTPROC, "glMatrixLoadTransposedEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMatrixLoadTransposedEXT\n");
#endif
  RESOLVED_PROC(PFNGLMATRIXLOADTRANSPOSEDEXTPROC)( mode_, m_ );
}

static void __stdcall glMatrixMultTransposefEXTWrapper(GLenum mode_, const GLfloat* m_)
{
  RESOLVE(PFNGLMATRIXMULTTRANSPOSEFEXTPROC, "glMatrixMultTransposefEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMatrixMultTransposefEXT\n");
#endif
  RESOLVED_PROC(PFNGLMATRIXMULTTRANSPOSEFEXTPROC)( mode_, m_ );
}

static void __stdcall glMatrixMultTransposedEXTWrapper(GLenum mode_, const GLdouble* m_)
{
  RESOLVE(PFNGLMATRIXMULTTRANSPOSEDEXTPROC, "glMatrixMultTransposedEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMatrixMultTransposedEXT\n");
#endif
  RESOLVED_PROC(PFNGLMATRIXMULTTRANSPOSEDEXTPROC)( mode_, m_ );
}

static void __stdcall glNamedBufferDataEXTWrapper(GLuint buffer_, GLsizeiptr size_, const void * data_, GLenum usage_)
{
  RESOLVE(PFNGLNAMEDBUFFERDATAEXTPROC, "glNamedBufferDataEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedBufferDataEXT\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDBUFFERDATAEXTPROC)( buffer_, size_, data_, usage_ );
}

static void __stdcall glNamedBufferSubDataEXTWrapper(GLuint buffer_, GLintptr offset_, GLsizeiptr size_, const void * data_)
{
  RESOLVE(PFNGLNAMEDBUFFERSUBDATAEXTPROC, "glNamedBufferSubDataEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedBufferSubDataEXT\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDBUFFERSUBDATAEXTPROC)( buffer_, offset_, size_, data_ );
}

static void * __stdcall glMapNamedBufferEXTWrapper(GLuint buffer_, GLenum access_)
{
  RESOLVE_RET(PFNGLMAPNAMEDBUFFEREXTPROC, "glMapNamedBufferEXT", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMapNamedBufferEXT\n");
#endif
  return RESOLVED_PROC(PFNGLMAPNAMEDBUFFEREXTPROC)( buffer_, access_ );
}

static GLboolean __stdcall glUnmapNamedBufferEXTWrapper(GLuint buffer_)
{
  RESOLVE_RET(PFNGLUNMAPNAMEDBUFFEREXTPROC, "glUnmapNamedBufferEXT", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUnmapNamedBufferEXT\n");
#endif
  return RESOLVED_PROC(PFNGLUNMAPNAMEDBUFFEREXTPROC)( buffer_ );
}

static void __stdcall glGetNamedBufferParameterivEXTWrapper(GLuint buffer_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC, "glGetNamedBufferParameterivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetNamedBufferParameterivEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC)( buffer_, pname_, params_ );
}

static void __stdcall glGetNamedBufferPointervEXTWrapper(GLuint buffer_, GLenum pname_, void ** params_)
{
  RESOLVE(PFNGLGETNAMEDBUFFERPOINTERVEXTPROC, "glGetNamedBufferPointervEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetNamedBufferPointervEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETNAMEDBUFFERPOINTERVEXTPROC)( buffer_, pname_, params_ );
}

static void __stdcall glGetNamedBufferSubDataEXTWrapper(GLuint buffer_, GLintptr offset_, GLsizeiptr size_, void * data_)
{
  RESOLVE(PFNGLGETNAMEDBUFFERSUBDATAEXTPROC, "glGetNamedBufferSubDataEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetNamedBufferSubDataEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETNAMEDBUFFERSUBDATAEXTPROC)( buffer_, offset_, size_, data_ );
}

/* No wrapper for glProgramUniform1fEXT, not in dispatch table */
/* No wrapper for glProgramUniform2fEXT, not in dispatch table */
/* No wrapper for glProgramUniform3fEXT, not in dispatch table */
/* No wrapper for glProgramUniform4fEXT, not in dispatch table */
/* No wrapper for glProgramUniform1iEXT, not in dispatch table */
/* No wrapper for glProgramUniform2iEXT, not in dispatch table */
/* No wrapper for glProgramUniform3iEXT, not in dispatch table */
/* No wrapper for glProgramUniform4iEXT, not in dispatch table */
/* No wrapper for glProgramUniform1fvEXT, not in dispatch table */
/* No wrapper for glProgramUniform2fvEXT, not in dispatch table */
/* No wrapper for glProgramUniform3fvEXT, not in dispatch table */
/* No wrapper for glProgramUniform4fvEXT, not in dispatch table */
/* No wrapper for glProgramUniform1ivEXT, not in dispatch table */
/* No wrapper for glProgramUniform2ivEXT, not in dispatch table */
/* No wrapper for glProgramUniform3ivEXT, not in dispatch table */
/* No wrapper for glProgramUniform4ivEXT, not in dispatch table */
/* No wrapper for glProgramUniformMatrix2fvEXT, not in dispatch table */
/* No wrapper for glProgramUniformMatrix3fvEXT, not in dispatch table */
/* No wrapper for glProgramUniformMatrix4fvEXT, not in dispatch table */
/* No wrapper for glProgramUniformMatrix2x3fvEXT, not in dispatch table */
/* No wrapper for glProgramUniformMatrix3x2fvEXT, not in dispatch table */
/* No wrapper for glProgramUniformMatrix2x4fvEXT, not in dispatch table */
/* No wrapper for glProgramUniformMatrix4x2fvEXT, not in dispatch table */
/* No wrapper for glProgramUniformMatrix3x4fvEXT, not in dispatch table */
/* No wrapper for glProgramUniformMatrix4x3fvEXT, not in dispatch table */
static void __stdcall glTextureBufferEXTWrapper(GLuint texture_, GLenum target_, GLenum internalformat_, GLuint buffer_)
{
  RESOLVE(PFNGLTEXTUREBUFFEREXTPROC, "glTextureBufferEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureBufferEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXTUREBUFFEREXTPROC)( texture_, target_, internalformat_, buffer_ );
}

static void __stdcall glMultiTexBufferEXTWrapper(GLenum texunit_, GLenum target_, GLenum internalformat_, GLuint buffer_)
{
  RESOLVE(PFNGLMULTITEXBUFFEREXTPROC, "glMultiTexBufferEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexBufferEXT\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXBUFFEREXTPROC)( texunit_, target_, internalformat_, buffer_ );
}

static void __stdcall glTextureParameterIivEXTWrapper(GLuint texture_, GLenum target_, GLenum pname_, const GLint* params_)
{
  RESOLVE(PFNGLTEXTUREPARAMETERIIVEXTPROC, "glTextureParameterIivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureParameterIivEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXTUREPARAMETERIIVEXTPROC)( texture_, target_, pname_, params_ );
}

static void __stdcall glTextureParameterIuivEXTWrapper(GLuint texture_, GLenum target_, GLenum pname_, const GLuint* params_)
{
  RESOLVE(PFNGLTEXTUREPARAMETERIUIVEXTPROC, "glTextureParameterIuivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureParameterIuivEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXTUREPARAMETERIUIVEXTPROC)( texture_, target_, pname_, params_ );
}

static void __stdcall glGetTextureParameterIivEXTWrapper(GLuint texture_, GLenum target_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETTEXTUREPARAMETERIIVEXTPROC, "glGetTextureParameterIivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTextureParameterIivEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETTEXTUREPARAMETERIIVEXTPROC)( texture_, target_, pname_, params_ );
}

static void __stdcall glGetTextureParameterIuivEXTWrapper(GLuint texture_, GLenum target_, GLenum pname_, GLuint* params_)
{
  RESOLVE(PFNGLGETTEXTUREPARAMETERIUIVEXTPROC, "glGetTextureParameterIuivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTextureParameterIuivEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETTEXTUREPARAMETERIUIVEXTPROC)( texture_, target_, pname_, params_ );
}

static void __stdcall glMultiTexParameterIivEXTWrapper(GLenum texunit_, GLenum target_, GLenum pname_, const GLint* params_)
{
  RESOLVE(PFNGLMULTITEXPARAMETERIIVEXTPROC, "glMultiTexParameterIivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexParameterIivEXT\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXPARAMETERIIVEXTPROC)( texunit_, target_, pname_, params_ );
}

static void __stdcall glMultiTexParameterIuivEXTWrapper(GLenum texunit_, GLenum target_, GLenum pname_, const GLuint* params_)
{
  RESOLVE(PFNGLMULTITEXPARAMETERIUIVEXTPROC, "glMultiTexParameterIuivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexParameterIuivEXT\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXPARAMETERIUIVEXTPROC)( texunit_, target_, pname_, params_ );
}

static void __stdcall glGetMultiTexParameterIivEXTWrapper(GLenum texunit_, GLenum target_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETMULTITEXPARAMETERIIVEXTPROC, "glGetMultiTexParameterIivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetMultiTexParameterIivEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETMULTITEXPARAMETERIIVEXTPROC)( texunit_, target_, pname_, params_ );
}

static void __stdcall glGetMultiTexParameterIuivEXTWrapper(GLenum texunit_, GLenum target_, GLenum pname_, GLuint* params_)
{
  RESOLVE(PFNGLGETMULTITEXPARAMETERIUIVEXTPROC, "glGetMultiTexParameterIuivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetMultiTexParameterIuivEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETMULTITEXPARAMETERIUIVEXTPROC)( texunit_, target_, pname_, params_ );
}

/* No wrapper for glProgramUniform1uiEXT, not in dispatch table */
/* No wrapper for glProgramUniform2uiEXT, not in dispatch table */
/* No wrapper for glProgramUniform3uiEXT, not in dispatch table */
/* No wrapper for glProgramUniform4uiEXT, not in dispatch table */
/* No wrapper for glProgramUniform1uivEXT, not in dispatch table */
/* No wrapper for glProgramUniform2uivEXT, not in dispatch table */
/* No wrapper for glProgramUniform3uivEXT, not in dispatch table */
/* No wrapper for glProgramUniform4uivEXT, not in dispatch table */
static void __stdcall glNamedProgramLocalParameters4fvEXTWrapper(GLuint program_, GLenum target_, GLuint index_, GLsizei count_, const GLfloat* params_)
{
  RESOLVE(PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC, "glNamedProgramLocalParameters4fvEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedProgramLocalParameters4fvEXT\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC)( program_, target_, index_, count_, params_ );
}

/* No wrapper for glNamedProgramLocalParameterI4iEXT, not in dispatch table */
/* No wrapper for glNamedProgramLocalParameterI4ivEXT, not in dispatch table */
/* No wrapper for glNamedProgramLocalParametersI4ivEXT, not in dispatch table */
/* No wrapper for glNamedProgramLocalParameterI4uiEXT, not in dispatch table */
/* No wrapper for glNamedProgramLocalParameterI4uivEXT, not in dispatch table */
/* No wrapper for glNamedProgramLocalParametersI4uivEXT, not in dispatch table */
/* No wrapper for glGetNamedProgramLocalParameterIivEXT, not in dispatch table */
/* No wrapper for glGetNamedProgramLocalParameterIuivEXT, not in dispatch table */
static void __stdcall glEnableClientStateiEXTWrapper(GLenum array_, GLuint index_)
{
  RESOLVE(PFNGLENABLECLIENTSTATEIEXTPROC, "glEnableClientStateiEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEnableClientStateiEXT\n");
#endif
  RESOLVED_PROC(PFNGLENABLECLIENTSTATEIEXTPROC)( array_, index_ );
}

static void __stdcall glDisableClientStateiEXTWrapper(GLenum array_, GLuint index_)
{
  RESOLVE(PFNGLDISABLECLIENTSTATEIEXTPROC, "glDisableClientStateiEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDisableClientStateiEXT\n");
#endif
  RESOLVED_PROC(PFNGLDISABLECLIENTSTATEIEXTPROC)( array_, index_ );
}

/* No wrapper for glGetFloati_vEXT, not in dispatch table */
/* No wrapper for glGetDoublei_vEXT, not in dispatch table */
/* No wrapper for glGetPointeri_vEXT, not in dispatch table */
static void __stdcall glNamedProgramStringEXTWrapper(GLuint program_, GLenum target_, GLenum format_, GLsizei len_, const void * string_)
{
  RESOLVE(PFNGLNAMEDPROGRAMSTRINGEXTPROC, "glNamedProgramStringEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedProgramStringEXT\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDPROGRAMSTRINGEXTPROC)( program_, target_, format_, len_, string_ );
}

static void __stdcall glNamedProgramLocalParameter4dEXTWrapper(GLuint program_, GLenum target_, GLuint index_, GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_)
{
  RESOLVE(PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC, "glNamedProgramLocalParameter4dEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedProgramLocalParameter4dEXT\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC)( program_, target_, index_, x_, y_, z_, w_ );
}

static void __stdcall glNamedProgramLocalParameter4dvEXTWrapper(GLuint program_, GLenum target_, GLuint index_, const GLdouble* params_)
{
  RESOLVE(PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC, "glNamedProgramLocalParameter4dvEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedProgramLocalParameter4dvEXT\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC)( program_, target_, index_, params_ );
}

static void __stdcall glNamedProgramLocalParameter4fEXTWrapper(GLuint program_, GLenum target_, GLuint index_, GLfloat x_, GLfloat y_, GLfloat z_, GLfloat w_)
{
  RESOLVE(PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC, "glNamedProgramLocalParameter4fEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedProgramLocalParameter4fEXT\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC)( program_, target_, index_, x_, y_, z_, w_ );
}

static void __stdcall glNamedProgramLocalParameter4fvEXTWrapper(GLuint program_, GLenum target_, GLuint index_, const GLfloat* params_)
{
  RESOLVE(PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC, "glNamedProgramLocalParameter4fvEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedProgramLocalParameter4fvEXT\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC)( program_, target_, index_, params_ );
}

static void __stdcall glGetNamedProgramLocalParameterdvEXTWrapper(GLuint program_, GLenum target_, GLuint index_, GLdouble* params_)
{
  RESOLVE(PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC, "glGetNamedProgramLocalParameterdvEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetNamedProgramLocalParameterdvEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC)( program_, target_, index_, params_ );
}

static void __stdcall glGetNamedProgramLocalParameterfvEXTWrapper(GLuint program_, GLenum target_, GLuint index_, GLfloat* params_)
{
  RESOLVE(PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC, "glGetNamedProgramLocalParameterfvEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetNamedProgramLocalParameterfvEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC)( program_, target_, index_, params_ );
}

static void __stdcall glGetNamedProgramivEXTWrapper(GLuint program_, GLenum target_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETNAMEDPROGRAMIVEXTPROC, "glGetNamedProgramivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetNamedProgramivEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETNAMEDPROGRAMIVEXTPROC)( program_, target_, pname_, params_ );
}

static void __stdcall glGetNamedProgramStringEXTWrapper(GLuint program_, GLenum target_, GLenum pname_, void * string_)
{
  RESOLVE(PFNGLGETNAMEDPROGRAMSTRINGEXTPROC, "glGetNamedProgramStringEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetNamedProgramStringEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETNAMEDPROGRAMSTRINGEXTPROC)( program_, target_, pname_, string_ );
}

static void __stdcall glNamedRenderbufferStorageEXTWrapper(GLuint renderbuffer_, GLenum internalformat_, GLsizei width_, GLsizei height_)
{
  RESOLVE(PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC, "glNamedRenderbufferStorageEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedRenderbufferStorageEXT\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC)( renderbuffer_, internalformat_, width_, height_ );
}

static void __stdcall glGetNamedRenderbufferParameterivEXTWrapper(GLuint renderbuffer_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC, "glGetNamedRenderbufferParameterivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetNamedRenderbufferParameterivEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC)( renderbuffer_, pname_, params_ );
}

static void __stdcall glNamedRenderbufferStorageMultisampleEXTWrapper(GLuint renderbuffer_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_)
{
  RESOLVE(PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC, "glNamedRenderbufferStorageMultisampleEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedRenderbufferStorageMultisampleEXT\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC)( renderbuffer_, samples_, internalformat_, width_, height_ );
}

/* No wrapper for glNamedRenderbufferStorageMultisampleCoverageEXT, not in dispatch table */
static GLenum __stdcall glCheckNamedFramebufferStatusEXTWrapper(GLuint framebuffer_, GLenum target_)
{
  RESOLVE_RET(PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC, "glCheckNamedFramebufferStatusEXT", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCheckNamedFramebufferStatusEXT\n");
#endif
  return RESOLVED_PROC(PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC)( framebuffer_, target_ );
}

static void __stdcall glNamedFramebufferTexture1DEXTWrapper(GLuint framebuffer_, GLenum attachment_, GLenum textarget_, GLuint texture_, GLint level_)
{
  RESOLVE(PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC, "glNamedFramebufferTexture1DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedFramebufferTexture1DEXT\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC)( framebuffer_, attachment_, textarget_, texture_, level_ );
}

static void __stdcall glNamedFramebufferTexture2DEXTWrapper(GLuint framebuffer_, GLenum attachment_, GLenum textarget_, GLuint texture_, GLint level_)
{
  RESOLVE(PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC, "glNamedFramebufferTexture2DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedFramebufferTexture2DEXT\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC)( framebuffer_, attachment_, textarget_, texture_, level_ );
}

static void __stdcall glNamedFramebufferTexture3DEXTWrapper(GLuint framebuffer_, GLenum attachment_, GLenum textarget_, GLuint texture_, GLint level_, GLint zoffset_)
{
  RESOLVE(PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC, "glNamedFramebufferTexture3DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedFramebufferTexture3DEXT\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC)( framebuffer_, attachment_, textarget_, texture_, level_, zoffset_ );
}

static void __stdcall glNamedFramebufferRenderbufferEXTWrapper(GLuint framebuffer_, GLenum attachment_, GLenum renderbuffertarget_, GLuint renderbuffer_)
{
  RESOLVE(PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC, "glNamedFramebufferRenderbufferEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedFramebufferRenderbufferEXT\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC)( framebuffer_, attachment_, renderbuffertarget_, renderbuffer_ );
}

static void __stdcall glGetNamedFramebufferAttachmentParameterivEXTWrapper(GLuint framebuffer_, GLenum attachment_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC, "glGetNamedFramebufferAttachmentParameterivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetNamedFramebufferAttachmentParameterivEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC)( framebuffer_, attachment_, pname_, params_ );
}

static void __stdcall glGenerateTextureMipmapEXTWrapper(GLuint texture_, GLenum target_)
{
  RESOLVE(PFNGLGENERATETEXTUREMIPMAPEXTPROC, "glGenerateTextureMipmapEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGenerateTextureMipmapEXT\n");
#endif
  RESOLVED_PROC(PFNGLGENERATETEXTUREMIPMAPEXTPROC)( texture_, target_ );
}

static void __stdcall glGenerateMultiTexMipmapEXTWrapper(GLenum texunit_, GLenum target_)
{
  RESOLVE(PFNGLGENERATEMULTITEXMIPMAPEXTPROC, "glGenerateMultiTexMipmapEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGenerateMultiTexMipmapEXT\n");
#endif
  RESOLVED_PROC(PFNGLGENERATEMULTITEXMIPMAPEXTPROC)( texunit_, target_ );
}

static void __stdcall glFramebufferDrawBufferEXTWrapper(GLuint framebuffer_, GLenum mode_)
{
  RESOLVE(PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC, "glFramebufferDrawBufferEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFramebufferDrawBufferEXT\n");
#endif
  RESOLVED_PROC(PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC)( framebuffer_, mode_ );
}

static void __stdcall glFramebufferDrawBuffersEXTWrapper(GLuint framebuffer_, GLsizei n_, const GLenum* bufs_)
{
  RESOLVE(PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC, "glFramebufferDrawBuffersEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFramebufferDrawBuffersEXT\n");
#endif
  RESOLVED_PROC(PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC)( framebuffer_, n_, bufs_ );
}

static void __stdcall glFramebufferReadBufferEXTWrapper(GLuint framebuffer_, GLenum mode_)
{
  RESOLVE(PFNGLFRAMEBUFFERREADBUFFEREXTPROC, "glFramebufferReadBufferEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFramebufferReadBufferEXT\n");
#endif
  RESOLVED_PROC(PFNGLFRAMEBUFFERREADBUFFEREXTPROC)( framebuffer_, mode_ );
}

static void __stdcall glGetFramebufferParameterivEXTWrapper(GLuint framebuffer_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC, "glGetFramebufferParameterivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetFramebufferParameterivEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC)( framebuffer_, pname_, params_ );
}

static void __stdcall glNamedCopyBufferSubDataEXTWrapper(GLuint readBuffer_, GLuint writeBuffer_, GLintptr readOffset_, GLintptr writeOffset_, GLsizeiptr size_)
{
  RESOLVE(PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC, "glNamedCopyBufferSubDataEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedCopyBufferSubDataEXT\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC)( readBuffer_, writeBuffer_, readOffset_, writeOffset_, size_ );
}

/* No wrapper for glNamedFramebufferTextureEXT, not in dispatch table */
/* No wrapper for glNamedFramebufferTextureLayerEXT, not in dispatch table */
/* No wrapper for glNamedFramebufferTextureFaceEXT, not in dispatch table */
/* No wrapper for glTextureRenderbufferEXT, not in dispatch table */
/* No wrapper for glMultiTexRenderbufferEXT, not in dispatch table */
static void __stdcall glVertexArrayVertexOffsetEXTWrapper(GLuint vaobj_, GLuint buffer_, GLint size_, GLenum type_, GLsizei stride_, GLintptr offset_)
{
  RESOLVE(PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC, "glVertexArrayVertexOffsetEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexArrayVertexOffsetEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC)( vaobj_, buffer_, size_, type_, stride_, offset_ );
}

static void __stdcall glVertexArrayColorOffsetEXTWrapper(GLuint vaobj_, GLuint buffer_, GLint size_, GLenum type_, GLsizei stride_, GLintptr offset_)
{
  RESOLVE(PFNGLVERTEXARRAYCOLOROFFSETEXTPROC, "glVertexArrayColorOffsetEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexArrayColorOffsetEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXARRAYCOLOROFFSETEXTPROC)( vaobj_, buffer_, size_, type_, stride_, offset_ );
}

static void __stdcall glVertexArrayEdgeFlagOffsetEXTWrapper(GLuint vaobj_, GLuint buffer_, GLsizei stride_, GLintptr offset_)
{
  RESOLVE(PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC, "glVertexArrayEdgeFlagOffsetEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexArrayEdgeFlagOffsetEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC)( vaobj_, buffer_, stride_, offset_ );
}

static void __stdcall glVertexArrayIndexOffsetEXTWrapper(GLuint vaobj_, GLuint buffer_, GLenum type_, GLsizei stride_, GLintptr offset_)
{
  RESOLVE(PFNGLVERTEXARRAYINDEXOFFSETEXTPROC, "glVertexArrayIndexOffsetEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexArrayIndexOffsetEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXARRAYINDEXOFFSETEXTPROC)( vaobj_, buffer_, type_, stride_, offset_ );
}

static void __stdcall glVertexArrayNormalOffsetEXTWrapper(GLuint vaobj_, GLuint buffer_, GLenum type_, GLsizei stride_, GLintptr offset_)
{
  RESOLVE(PFNGLVERTEXARRAYNORMALOFFSETEXTPROC, "glVertexArrayNormalOffsetEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexArrayNormalOffsetEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXARRAYNORMALOFFSETEXTPROC)( vaobj_, buffer_, type_, stride_, offset_ );
}

static void __stdcall glVertexArrayTexCoordOffsetEXTWrapper(GLuint vaobj_, GLuint buffer_, GLint size_, GLenum type_, GLsizei stride_, GLintptr offset_)
{
  RESOLVE(PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC, "glVertexArrayTexCoordOffsetEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexArrayTexCoordOffsetEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC)( vaobj_, buffer_, size_, type_, stride_, offset_ );
}

static void __stdcall glVertexArrayMultiTexCoordOffsetEXTWrapper(GLuint vaobj_, GLuint buffer_, GLenum texunit_, GLint size_, GLenum type_, GLsizei stride_, GLintptr offset_)
{
  RESOLVE(PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC, "glVertexArrayMultiTexCoordOffsetEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexArrayMultiTexCoordOffsetEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC)( vaobj_, buffer_, texunit_, size_, type_, stride_, offset_ );
}

static void __stdcall glVertexArrayFogCoordOffsetEXTWrapper(GLuint vaobj_, GLuint buffer_, GLenum type_, GLsizei stride_, GLintptr offset_)
{
  RESOLVE(PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC, "glVertexArrayFogCoordOffsetEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexArrayFogCoordOffsetEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC)( vaobj_, buffer_, type_, stride_, offset_ );
}

static void __stdcall glVertexArraySecondaryColorOffsetEXTWrapper(GLuint vaobj_, GLuint buffer_, GLint size_, GLenum type_, GLsizei stride_, GLintptr offset_)
{
  RESOLVE(PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC, "glVertexArraySecondaryColorOffsetEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexArraySecondaryColorOffsetEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC)( vaobj_, buffer_, size_, type_, stride_, offset_ );
}

static void __stdcall glVertexArrayVertexAttribOffsetEXTWrapper(GLuint vaobj_, GLuint buffer_, GLuint index_, GLint size_, GLenum type_, GLboolean normalized_, GLsizei stride_, GLintptr offset_)
{
  RESOLVE(PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC, "glVertexArrayVertexAttribOffsetEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexArrayVertexAttribOffsetEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC)( vaobj_, buffer_, index_, size_, type_, normalized_, stride_, offset_ );
}

static void __stdcall glVertexArrayVertexAttribIOffsetEXTWrapper(GLuint vaobj_, GLuint buffer_, GLuint index_, GLint size_, GLenum type_, GLsizei stride_, GLintptr offset_)
{
  RESOLVE(PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC, "glVertexArrayVertexAttribIOffsetEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexArrayVertexAttribIOffsetEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC)( vaobj_, buffer_, index_, size_, type_, stride_, offset_ );
}

static void __stdcall glEnableVertexArrayEXTWrapper(GLuint vaobj_, GLenum array_)
{
  RESOLVE(PFNGLENABLEVERTEXARRAYEXTPROC, "glEnableVertexArrayEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEnableVertexArrayEXT\n");
#endif
  RESOLVED_PROC(PFNGLENABLEVERTEXARRAYEXTPROC)( vaobj_, array_ );
}

static void __stdcall glDisableVertexArrayEXTWrapper(GLuint vaobj_, GLenum array_)
{
  RESOLVE(PFNGLDISABLEVERTEXARRAYEXTPROC, "glDisableVertexArrayEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDisableVertexArrayEXT\n");
#endif
  RESOLVED_PROC(PFNGLDISABLEVERTEXARRAYEXTPROC)( vaobj_, array_ );
}

static void __stdcall glEnableVertexArrayAttribEXTWrapper(GLuint vaobj_, GLuint index_)
{
  RESOLVE(PFNGLENABLEVERTEXARRAYATTRIBEXTPROC, "glEnableVertexArrayAttribEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEnableVertexArrayAttribEXT\n");
#endif
  RESOLVED_PROC(PFNGLENABLEVERTEXARRAYATTRIBEXTPROC)( vaobj_, index_ );
}

static void __stdcall glDisableVertexArrayAttribEXTWrapper(GLuint vaobj_, GLuint index_)
{
  RESOLVE(PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC, "glDisableVertexArrayAttribEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDisableVertexArrayAttribEXT\n");
#endif
  RESOLVED_PROC(PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC)( vaobj_, index_ );
}

static void __stdcall glGetVertexArrayIntegervEXTWrapper(GLuint vaobj_, GLenum pname_, GLint* param_)
{
  RESOLVE(PFNGLGETVERTEXARRAYINTEGERVEXTPROC, "glGetVertexArrayIntegervEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetVertexArrayIntegervEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETVERTEXARRAYINTEGERVEXTPROC)( vaobj_, pname_, param_ );
}

static void __stdcall glGetVertexArrayPointervEXTWrapper(GLuint vaobj_, GLenum pname_, void ** param_)
{
  RESOLVE(PFNGLGETVERTEXARRAYPOINTERVEXTPROC, "glGetVertexArrayPointervEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetVertexArrayPointervEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETVERTEXARRAYPOINTERVEXTPROC)( vaobj_, pname_, param_ );
}

static void __stdcall glGetVertexArrayIntegeri_vEXTWrapper(GLuint vaobj_, GLuint index_, GLenum pname_, GLint* param_)
{
  RESOLVE(PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC, "glGetVertexArrayIntegeri_vEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetVertexArrayIntegeri_vEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC)( vaobj_, index_, pname_, param_ );
}

static void __stdcall glGetVertexArrayPointeri_vEXTWrapper(GLuint vaobj_, GLuint index_, GLenum pname_, void ** param_)
{
  RESOLVE(PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC, "glGetVertexArrayPointeri_vEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetVertexArrayPointeri_vEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC)( vaobj_, index_, pname_, param_ );
}

static void * __stdcall glMapNamedBufferRangeEXTWrapper(GLuint buffer_, GLintptr offset_, GLsizeiptr length_, GLbitfield access_)
{
  RESOLVE_RET(PFNGLMAPNAMEDBUFFERRANGEEXTPROC, "glMapNamedBufferRangeEXT", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMapNamedBufferRangeEXT\n");
#endif
  return RESOLVED_PROC(PFNGLMAPNAMEDBUFFERRANGEEXTPROC)( buffer_, offset_, length_, access_ );
}

static void __stdcall glFlushMappedNamedBufferRangeEXTWrapper(GLuint buffer_, GLintptr offset_, GLsizeiptr length_)
{
  RESOLVE(PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC, "glFlushMappedNamedBufferRangeEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFlushMappedNamedBufferRangeEXT\n");
#endif
  RESOLVED_PROC(PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC)( buffer_, offset_, length_ );
}

static void __stdcall glNamedBufferStorageEXTWrapper(GLuint buffer_, GLsizeiptr size_, const void * data_, GLbitfield flags_)
{
  RESOLVE(PFNGLNAMEDBUFFERSTORAGEEXTPROC, "glNamedBufferStorageEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedBufferStorageEXT\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDBUFFERSTORAGEEXTPROC)( buffer_, size_, data_, flags_ );
}

static void __stdcall glClearNamedBufferDataEXTWrapper(GLuint buffer_, GLenum internalformat_, GLenum format_, GLenum type_, const void * data_)
{
  RESOLVE(PFNGLCLEARNAMEDBUFFERDATAEXTPROC, "glClearNamedBufferDataEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClearNamedBufferDataEXT\n");
#endif
  RESOLVED_PROC(PFNGLCLEARNAMEDBUFFERDATAEXTPROC)( buffer_, internalformat_, format_, type_, data_ );
}

static void __stdcall glClearNamedBufferSubDataEXTWrapper(GLuint buffer_, GLenum internalformat_, GLsizeiptr offset_, GLsizeiptr size_, GLenum format_, GLenum type_, const void * data_)
{
  RESOLVE(PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC, "glClearNamedBufferSubDataEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClearNamedBufferSubDataEXT\n");
#endif
  RESOLVED_PROC(PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC)( buffer_, internalformat_, offset_, size_, format_, type_, data_ );
}

static void __stdcall glNamedFramebufferParameteriEXTWrapper(GLuint framebuffer_, GLenum pname_, GLint param_)
{
  RESOLVE(PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC, "glNamedFramebufferParameteriEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedFramebufferParameteriEXT\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC)( framebuffer_, pname_, param_ );
}

static void __stdcall glGetNamedFramebufferParameterivEXTWrapper(GLuint framebuffer_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC, "glGetNamedFramebufferParameterivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetNamedFramebufferParameterivEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC)( framebuffer_, pname_, params_ );
}

/* No wrapper for glProgramUniform1dEXT, not in dispatch table */
/* No wrapper for glProgramUniform2dEXT, not in dispatch table */
/* No wrapper for glProgramUniform3dEXT, not in dispatch table */
/* No wrapper for glProgramUniform4dEXT, not in dispatch table */
/* No wrapper for glProgramUniform1dvEXT, not in dispatch table */
/* No wrapper for glProgramUniform2dvEXT, not in dispatch table */
/* No wrapper for glProgramUniform3dvEXT, not in dispatch table */
/* No wrapper for glProgramUniform4dvEXT, not in dispatch table */
/* No wrapper for glProgramUniformMatrix2dvEXT, not in dispatch table */
/* No wrapper for glProgramUniformMatrix3dvEXT, not in dispatch table */
/* No wrapper for glProgramUniformMatrix4dvEXT, not in dispatch table */
/* No wrapper for glProgramUniformMatrix2x3dvEXT, not in dispatch table */
/* No wrapper for glProgramUniformMatrix2x4dvEXT, not in dispatch table */
/* No wrapper for glProgramUniformMatrix3x2dvEXT, not in dispatch table */
/* No wrapper for glProgramUniformMatrix3x4dvEXT, not in dispatch table */
/* No wrapper for glProgramUniformMatrix4x2dvEXT, not in dispatch table */
/* No wrapper for glProgramUniformMatrix4x3dvEXT, not in dispatch table */
static void __stdcall glTextureBufferRangeEXTWrapper(GLuint texture_, GLenum target_, GLenum internalformat_, GLuint buffer_, GLintptr offset_, GLsizeiptr size_)
{
  RESOLVE(PFNGLTEXTUREBUFFERRANGEEXTPROC, "glTextureBufferRangeEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureBufferRangeEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXTUREBUFFERRANGEEXTPROC)( texture_, target_, internalformat_, buffer_, offset_, size_ );
}

static void __stdcall glTextureStorage1DEXTWrapper(GLuint texture_, GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_)
{
  RESOLVE(PFNGLTEXTURESTORAGE1DEXTPROC, "glTextureStorage1DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureStorage1DEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXTURESTORAGE1DEXTPROC)( texture_, target_, levels_, internalformat_, width_ );
}

static void __stdcall glTextureStorage2DEXTWrapper(GLuint texture_, GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_)
{
  RESOLVE(PFNGLTEXTURESTORAGE2DEXTPROC, "glTextureStorage2DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureStorage2DEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXTURESTORAGE2DEXTPROC)( texture_, target_, levels_, internalformat_, width_, height_ );
}

static void __stdcall glTextureStorage3DEXTWrapper(GLuint texture_, GLenum target_, GLsizei levels_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_)
{
  RESOLVE(PFNGLTEXTURESTORAGE3DEXTPROC, "glTextureStorage3DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureStorage3DEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXTURESTORAGE3DEXTPROC)( texture_, target_, levels_, internalformat_, width_, height_, depth_ );
}

static void __stdcall glTextureStorage2DMultisampleEXTWrapper(GLuint texture_, GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLboolean fixedsamplelocations_)
{
  RESOLVE(PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC, "glTextureStorage2DMultisampleEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureStorage2DMultisampleEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC)( texture_, target_, samples_, internalformat_, width_, height_, fixedsamplelocations_ );
}

static void __stdcall glTextureStorage3DMultisampleEXTWrapper(GLuint texture_, GLenum target_, GLsizei samples_, GLenum internalformat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLboolean fixedsamplelocations_)
{
  RESOLVE(PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC, "glTextureStorage3DMultisampleEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureStorage3DMultisampleEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC)( texture_, target_, samples_, internalformat_, width_, height_, depth_, fixedsamplelocations_ );
}

static void __stdcall glVertexArrayBindVertexBufferEXTWrapper(GLuint vaobj_, GLuint bindingindex_, GLuint buffer_, GLintptr offset_, GLsizei stride_)
{
  RESOLVE(PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC, "glVertexArrayBindVertexBufferEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexArrayBindVertexBufferEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC)( vaobj_, bindingindex_, buffer_, offset_, stride_ );
}

static void __stdcall glVertexArrayVertexAttribFormatEXTWrapper(GLuint vaobj_, GLuint attribindex_, GLint size_, GLenum type_, GLboolean normalized_, GLuint relativeoffset_)
{
  RESOLVE(PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC, "glVertexArrayVertexAttribFormatEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexArrayVertexAttribFormatEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC)( vaobj_, attribindex_, size_, type_, normalized_, relativeoffset_ );
}

static void __stdcall glVertexArrayVertexAttribIFormatEXTWrapper(GLuint vaobj_, GLuint attribindex_, GLint size_, GLenum type_, GLuint relativeoffset_)
{
  RESOLVE(PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC, "glVertexArrayVertexAttribIFormatEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexArrayVertexAttribIFormatEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC)( vaobj_, attribindex_, size_, type_, relativeoffset_ );
}

static void __stdcall glVertexArrayVertexAttribLFormatEXTWrapper(GLuint vaobj_, GLuint attribindex_, GLint size_, GLenum type_, GLuint relativeoffset_)
{
  RESOLVE(PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC, "glVertexArrayVertexAttribLFormatEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexArrayVertexAttribLFormatEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC)( vaobj_, attribindex_, size_, type_, relativeoffset_ );
}

static void __stdcall glVertexArrayVertexAttribBindingEXTWrapper(GLuint vaobj_, GLuint attribindex_, GLuint bindingindex_)
{
  RESOLVE(PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC, "glVertexArrayVertexAttribBindingEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexArrayVertexAttribBindingEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC)( vaobj_, attribindex_, bindingindex_ );
}

static void __stdcall glVertexArrayVertexBindingDivisorEXTWrapper(GLuint vaobj_, GLuint bindingindex_, GLuint divisor_)
{
  RESOLVE(PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC, "glVertexArrayVertexBindingDivisorEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexArrayVertexBindingDivisorEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC)( vaobj_, bindingindex_, divisor_ );
}

static void __stdcall glVertexArrayVertexAttribLOffsetEXTWrapper(GLuint vaobj_, GLuint buffer_, GLuint index_, GLint size_, GLenum type_, GLsizei stride_, GLintptr offset_)
{
  RESOLVE(PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC, "glVertexArrayVertexAttribLOffsetEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexArrayVertexAttribLOffsetEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC)( vaobj_, buffer_, index_, size_, type_, stride_, offset_ );
}

static void __stdcall glTexturePageCommitmentEXTWrapper(GLuint texture_, GLint level_, GLint xoffset_, GLint yoffset_, GLint zoffset_, GLsizei width_, GLsizei height_, GLsizei depth_, GLboolean commit_)
{
  RESOLVE(PFNGLTEXTUREPAGECOMMITMENTEXTPROC, "glTexturePageCommitmentEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexturePageCommitmentEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXTUREPAGECOMMITMENTEXTPROC)( texture_, level_, xoffset_, yoffset_, zoffset_, width_, height_, depth_, commit_ );
}

static void __stdcall glVertexArrayVertexAttribDivisorEXTWrapper(GLuint vaobj_, GLuint index_, GLuint divisor_)
{
  RESOLVE(PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC, "glVertexArrayVertexAttribDivisorEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexArrayVertexAttribDivisorEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC)( vaobj_, index_, divisor_ );
}

/* No wrapper for glColorMaskIndexedEXT, not in dispatch table */
/* No wrapper for glDrawArraysInstancedEXT, not in dispatch table */
/* No wrapper for glDrawElementsInstancedEXT, not in dispatch table */
/* No wrapper for glDrawRangeElementsEXT, not in dispatch table */
/* No wrapper for glBufferStorageExternalEXT, not in dispatch table */
/* No wrapper for glNamedBufferStorageExternalEXT, not in dispatch table */
static void __stdcall glFogCoordfEXTWrapper(GLfloat coord_)
{
  RESOLVE(PFNGLFOGCOORDFEXTPROC, "glFogCoordfEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFogCoordfEXT\n");
#endif
  RESOLVED_PROC(PFNGLFOGCOORDFEXTPROC)( coord_ );
}

static void __stdcall glFogCoordfvEXTWrapper(const GLfloat* coord_)
{
  RESOLVE(PFNGLFOGCOORDFVEXTPROC, "glFogCoordfvEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFogCoordfvEXT\n");
#endif
  RESOLVED_PROC(PFNGLFOGCOORDFVEXTPROC)( coord_ );
}

/* No wrapper for glFogCoorddEXT, not in dispatch table */
/* No wrapper for glFogCoorddvEXT, not in dispatch table */
/* No wrapper for glFogCoordPointerEXT, not in dispatch table */
/* No wrapper for glBlitFramebufferEXT, not in dispatch table */
/* No wrapper for glBlitFramebufferLayersEXT, not in dispatch table */
/* No wrapper for glBlitFramebufferLayerEXT, not in dispatch table */
/* No wrapper for glRenderbufferStorageMultisampleEXT, not in dispatch table */
/* No wrapper for glIsRenderbufferEXT, not in dispatch table */
static void __stdcall glBindRenderbufferEXTWrapper(GLenum target_, GLuint renderbuffer_)
{
  RESOLVE(PFNGLBINDRENDERBUFFEREXTPROC, "glBindRenderbufferEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindRenderbufferEXT\n");
#endif
  RESOLVED_PROC(PFNGLBINDRENDERBUFFEREXTPROC)( target_, renderbuffer_ );
}

/* No wrapper for glDeleteRenderbuffersEXT, not in dispatch table */
/* No wrapper for glGenRenderbuffersEXT, not in dispatch table */
/* No wrapper for glRenderbufferStorageEXT, not in dispatch table */
/* No wrapper for glGetRenderbufferParameterivEXT, not in dispatch table */
/* No wrapper for glIsFramebufferEXT, not in dispatch table */
static void __stdcall glBindFramebufferEXTWrapper(GLenum target_, GLuint framebuffer_)
{
  RESOLVE(PFNGLBINDFRAMEBUFFEREXTPROC, "glBindFramebufferEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindFramebufferEXT\n");
#endif
  RESOLVED_PROC(PFNGLBINDFRAMEBUFFEREXTPROC)( target_, framebuffer_ );
}

/* No wrapper for glDeleteFramebuffersEXT, not in dispatch table */
/* No wrapper for glGenFramebuffersEXT, not in dispatch table */
/* No wrapper for glCheckFramebufferStatusEXT, not in dispatch table */
/* No wrapper for glFramebufferTexture1DEXT, not in dispatch table */
/* No wrapper for glFramebufferTexture2DEXT, not in dispatch table */
/* No wrapper for glFramebufferTexture3DEXT, not in dispatch table */
/* No wrapper for glFramebufferRenderbufferEXT, not in dispatch table */
/* No wrapper for glGetFramebufferAttachmentParameterivEXT, not in dispatch table */
/* No wrapper for glGenerateMipmapEXT, not in dispatch table */
/* No wrapper for glProgramParameteriEXT, not in dispatch table */
static void __stdcall glProgramEnvParameters4fvEXTWrapper(GLenum target_, GLuint index_, GLsizei count_, const GLfloat* params_)
{
  RESOLVE(PFNGLPROGRAMENVPARAMETERS4FVEXTPROC, "glProgramEnvParameters4fvEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramEnvParameters4fvEXT\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMENVPARAMETERS4FVEXTPROC)( target_, index_, count_, params_ );
}

static void __stdcall glProgramLocalParameters4fvEXTWrapper(GLenum target_, GLuint index_, GLsizei count_, const GLfloat* params_)
{
  RESOLVE(PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC, "glProgramLocalParameters4fvEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramLocalParameters4fvEXT\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC)( target_, index_, count_, params_ );
}

/* No wrapper for glGetUniformuivEXT, not in dispatch table */
/* No wrapper for glBindFragDataLocationEXT, not in dispatch table */
/* No wrapper for glGetFragDataLocationEXT, not in dispatch table */
/* No wrapper for glUniform1uiEXT, not in dispatch table */
/* No wrapper for glUniform2uiEXT, not in dispatch table */
/* No wrapper for glUniform3uiEXT, not in dispatch table */
/* No wrapper for glUniform4uiEXT, not in dispatch table */
/* No wrapper for glUniform1uivEXT, not in dispatch table */
/* No wrapper for glUniform2uivEXT, not in dispatch table */
/* No wrapper for glUniform3uivEXT, not in dispatch table */
/* No wrapper for glUniform4uivEXT, not in dispatch table */
static void __stdcall glVertexAttribI1iEXTWrapper(GLuint index_, GLint x_)
{
  RESOLVE(PFNGLVERTEXATTRIBI1IEXTPROC, "glVertexAttribI1iEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribI1iEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBI1IEXTPROC)( index_, x_ );
}

static void __stdcall glVertexAttribI2iEXTWrapper(GLuint index_, GLint x_, GLint y_)
{
  RESOLVE(PFNGLVERTEXATTRIBI2IEXTPROC, "glVertexAttribI2iEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribI2iEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBI2IEXTPROC)( index_, x_, y_ );
}

static void __stdcall glVertexAttribI3iEXTWrapper(GLuint index_, GLint x_, GLint y_, GLint z_)
{
  RESOLVE(PFNGLVERTEXATTRIBI3IEXTPROC, "glVertexAttribI3iEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribI3iEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBI3IEXTPROC)( index_, x_, y_, z_ );
}

static void __stdcall glVertexAttribI4iEXTWrapper(GLuint index_, GLint x_, GLint y_, GLint z_, GLint w_)
{
  RESOLVE(PFNGLVERTEXATTRIBI4IEXTPROC, "glVertexAttribI4iEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribI4iEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBI4IEXTPROC)( index_, x_, y_, z_, w_ );
}

static void __stdcall glVertexAttribI1uiEXTWrapper(GLuint index_, GLuint x_)
{
  RESOLVE(PFNGLVERTEXATTRIBI1UIEXTPROC, "glVertexAttribI1uiEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribI1uiEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBI1UIEXTPROC)( index_, x_ );
}

static void __stdcall glVertexAttribI2uiEXTWrapper(GLuint index_, GLuint x_, GLuint y_)
{
  RESOLVE(PFNGLVERTEXATTRIBI2UIEXTPROC, "glVertexAttribI2uiEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribI2uiEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBI2UIEXTPROC)( index_, x_, y_ );
}

static void __stdcall glVertexAttribI3uiEXTWrapper(GLuint index_, GLuint x_, GLuint y_, GLuint z_)
{
  RESOLVE(PFNGLVERTEXATTRIBI3UIEXTPROC, "glVertexAttribI3uiEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribI3uiEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBI3UIEXTPROC)( index_, x_, y_, z_ );
}

static void __stdcall glVertexAttribI4uiEXTWrapper(GLuint index_, GLuint x_, GLuint y_, GLuint z_, GLuint w_)
{
  RESOLVE(PFNGLVERTEXATTRIBI4UIEXTPROC, "glVertexAttribI4uiEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribI4uiEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBI4UIEXTPROC)( index_, x_, y_, z_, w_ );
}

/* No wrapper for glVertexAttribI1ivEXT, not in dispatch table */
static void __stdcall glVertexAttribI2ivEXTWrapper(GLuint index_, const GLint* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBI2IVEXTPROC, "glVertexAttribI2ivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribI2ivEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBI2IVEXTPROC)( index_, v_ );
}

static void __stdcall glVertexAttribI3ivEXTWrapper(GLuint index_, const GLint* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBI3IVEXTPROC, "glVertexAttribI3ivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribI3ivEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBI3IVEXTPROC)( index_, v_ );
}

static void __stdcall glVertexAttribI4ivEXTWrapper(GLuint index_, const GLint* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBI4IVEXTPROC, "glVertexAttribI4ivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribI4ivEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBI4IVEXTPROC)( index_, v_ );
}

/* No wrapper for glVertexAttribI1uivEXT, not in dispatch table */
static void __stdcall glVertexAttribI2uivEXTWrapper(GLuint index_, const GLuint* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBI2UIVEXTPROC, "glVertexAttribI2uivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribI2uivEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBI2UIVEXTPROC)( index_, v_ );
}

static void __stdcall glVertexAttribI3uivEXTWrapper(GLuint index_, const GLuint* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBI3UIVEXTPROC, "glVertexAttribI3uivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribI3uivEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBI3UIVEXTPROC)( index_, v_ );
}

static void __stdcall glVertexAttribI4uivEXTWrapper(GLuint index_, const GLuint* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBI4UIVEXTPROC, "glVertexAttribI4uivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribI4uivEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBI4UIVEXTPROC)( index_, v_ );
}

/* No wrapper for glVertexAttribI4bvEXT, not in dispatch table */
/* No wrapper for glVertexAttribI4svEXT, not in dispatch table */
/* No wrapper for glVertexAttribI4ubvEXT, not in dispatch table */
/* No wrapper for glVertexAttribI4usvEXT, not in dispatch table */
/* No wrapper for glVertexAttribIPointerEXT, not in dispatch table */
/* No wrapper for glGetVertexAttribIivEXT, not in dispatch table */
/* No wrapper for glGetVertexAttribIuivEXT, not in dispatch table */
/* No wrapper for glGetHistogramEXT, not in dispatch table */
/* No wrapper for glGetHistogramParameterfvEXT, not in dispatch table */
/* No wrapper for glGetHistogramParameterivEXT, not in dispatch table */
/* No wrapper for glGetMinmaxEXT, not in dispatch table */
/* No wrapper for glGetMinmaxParameterfvEXT, not in dispatch table */
/* No wrapper for glGetMinmaxParameterivEXT, not in dispatch table */
/* No wrapper for glHistogramEXT, not in dispatch table */
/* No wrapper for glMinmaxEXT, not in dispatch table */
/* No wrapper for glResetHistogramEXT, not in dispatch table */
/* No wrapper for glResetMinmaxEXT, not in dispatch table */
/* No wrapper for glIndexFuncEXT, not in dispatch table */
/* No wrapper for glIndexMaterialEXT, not in dispatch table */
/* No wrapper for glApplyTextureEXT, not in dispatch table */
/* No wrapper for glTextureLightEXT, not in dispatch table */
/* No wrapper for glTextureMaterialEXT, not in dispatch table */
static void __stdcall glGetUnsignedBytevEXTWrapper(GLenum pname_, GLubyte* data_)
{
  RESOLVE(PFNGLGETUNSIGNEDBYTEVEXTPROC, "glGetUnsignedBytevEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetUnsignedBytevEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETUNSIGNEDBYTEVEXTPROC)( pname_, data_ );
}

static void __stdcall glGetUnsignedBytei_vEXTWrapper(GLenum target_, GLuint index_, GLubyte* data_)
{
  RESOLVE(PFNGLGETUNSIGNEDBYTEI_VEXTPROC, "glGetUnsignedBytei_vEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetUnsignedBytei_vEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETUNSIGNEDBYTEI_VEXTPROC)( target_, index_, data_ );
}

static void __stdcall glDeleteMemoryObjectsEXTWrapper(GLsizei n_, const GLuint* memoryObjects_)
{
  RESOLVE(PFNGLDELETEMEMORYOBJECTSEXTPROC, "glDeleteMemoryObjectsEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDeleteMemoryObjectsEXT\n");
#endif
  RESOLVED_PROC(PFNGLDELETEMEMORYOBJECTSEXTPROC)( n_, memoryObjects_ );
}

static GLboolean __stdcall glIsMemoryObjectEXTWrapper(GLuint memoryObject_)
{
  RESOLVE_RET(PFNGLISMEMORYOBJECTEXTPROC, "glIsMemoryObjectEXT", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIsMemoryObjectEXT\n");
#endif
  return RESOLVED_PROC(PFNGLISMEMORYOBJECTEXTPROC)( memoryObject_ );
}

static void __stdcall glCreateMemoryObjectsEXTWrapper(GLsizei n_, GLuint* memoryObjects_)
{
  RESOLVE(PFNGLCREATEMEMORYOBJECTSEXTPROC, "glCreateMemoryObjectsEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCreateMemoryObjectsEXT\n");
#endif
  RESOLVED_PROC(PFNGLCREATEMEMORYOBJECTSEXTPROC)( n_, memoryObjects_ );
}

static void __stdcall glMemoryObjectParameterivEXTWrapper(GLuint memoryObject_, GLenum pname_, const GLint* params_)
{
  RESOLVE(PFNGLMEMORYOBJECTPARAMETERIVEXTPROC, "glMemoryObjectParameterivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMemoryObjectParameterivEXT\n");
#endif
  RESOLVED_PROC(PFNGLMEMORYOBJECTPARAMETERIVEXTPROC)( memoryObject_, pname_, params_ );
}

static void __stdcall glGetMemoryObjectParameterivEXTWrapper(GLuint memoryObject_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETMEMORYOBJECTPARAMETERIVEXTPROC, "glGetMemoryObjectParameterivEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetMemoryObjectParameterivEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETMEMORYOBJECTPARAMETERIVEXTPROC)( memoryObject_, pname_, params_ );
}

static void __stdcall glTexStorageMem2DEXTWrapper(GLenum target_, GLsizei levels_, GLenum internalFormat_, GLsizei width_, GLsizei height_, GLuint memory_, GLuint64 offset_)
{
  RESOLVE(PFNGLTEXSTORAGEMEM2DEXTPROC, "glTexStorageMem2DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexStorageMem2DEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXSTORAGEMEM2DEXTPROC)( target_, levels_, internalFormat_, width_, height_, memory_, offset_ );
}

static void __stdcall glTexStorageMem2DMultisampleEXTWrapper(GLenum target_, GLsizei samples_, GLenum internalFormat_, GLsizei width_, GLsizei height_, GLboolean fixedSampleLocations_, GLuint memory_, GLuint64 offset_)
{
  RESOLVE(PFNGLTEXSTORAGEMEM2DMULTISAMPLEEXTPROC, "glTexStorageMem2DMultisampleEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexStorageMem2DMultisampleEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXSTORAGEMEM2DMULTISAMPLEEXTPROC)( target_, samples_, internalFormat_, width_, height_, fixedSampleLocations_, memory_, offset_ );
}

static void __stdcall glTexStorageMem3DEXTWrapper(GLenum target_, GLsizei levels_, GLenum internalFormat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLuint memory_, GLuint64 offset_)
{
  RESOLVE(PFNGLTEXSTORAGEMEM3DEXTPROC, "glTexStorageMem3DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexStorageMem3DEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXSTORAGEMEM3DEXTPROC)( target_, levels_, internalFormat_, width_, height_, depth_, memory_, offset_ );
}

static void __stdcall glTexStorageMem3DMultisampleEXTWrapper(GLenum target_, GLsizei samples_, GLenum internalFormat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLboolean fixedSampleLocations_, GLuint memory_, GLuint64 offset_)
{
  RESOLVE(PFNGLTEXSTORAGEMEM3DMULTISAMPLEEXTPROC, "glTexStorageMem3DMultisampleEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexStorageMem3DMultisampleEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXSTORAGEMEM3DMULTISAMPLEEXTPROC)( target_, samples_, internalFormat_, width_, height_, depth_, fixedSampleLocations_, memory_, offset_ );
}

static void __stdcall glBufferStorageMemEXTWrapper(GLenum target_, GLsizeiptr size_, GLuint memory_, GLuint64 offset_)
{
  RESOLVE(PFNGLBUFFERSTORAGEMEMEXTPROC, "glBufferStorageMemEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBufferStorageMemEXT\n");
#endif
  RESOLVED_PROC(PFNGLBUFFERSTORAGEMEMEXTPROC)( target_, size_, memory_, offset_ );
}

static void __stdcall glTextureStorageMem2DEXTWrapper(GLuint texture_, GLsizei levels_, GLenum internalFormat_, GLsizei width_, GLsizei height_, GLuint memory_, GLuint64 offset_)
{
  RESOLVE(PFNGLTEXTURESTORAGEMEM2DEXTPROC, "glTextureStorageMem2DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureStorageMem2DEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXTURESTORAGEMEM2DEXTPROC)( texture_, levels_, internalFormat_, width_, height_, memory_, offset_ );
}

static void __stdcall glTextureStorageMem2DMultisampleEXTWrapper(GLuint texture_, GLsizei samples_, GLenum internalFormat_, GLsizei width_, GLsizei height_, GLboolean fixedSampleLocations_, GLuint memory_, GLuint64 offset_)
{
  RESOLVE(PFNGLTEXTURESTORAGEMEM2DMULTISAMPLEEXTPROC, "glTextureStorageMem2DMultisampleEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureStorageMem2DMultisampleEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXTURESTORAGEMEM2DMULTISAMPLEEXTPROC)( texture_, samples_, internalFormat_, width_, height_, fixedSampleLocations_, memory_, offset_ );
}

static void __stdcall glTextureStorageMem3DEXTWrapper(GLuint texture_, GLsizei levels_, GLenum internalFormat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLuint memory_, GLuint64 offset_)
{
  RESOLVE(PFNGLTEXTURESTORAGEMEM3DEXTPROC, "glTextureStorageMem3DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureStorageMem3DEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXTURESTORAGEMEM3DEXTPROC)( texture_, levels_, internalFormat_, width_, height_, depth_, memory_, offset_ );
}

static void __stdcall glTextureStorageMem3DMultisampleEXTWrapper(GLuint texture_, GLsizei samples_, GLenum internalFormat_, GLsizei width_, GLsizei height_, GLsizei depth_, GLboolean fixedSampleLocations_, GLuint memory_, GLuint64 offset_)
{
  RESOLVE(PFNGLTEXTURESTORAGEMEM3DMULTISAMPLEEXTPROC, "glTextureStorageMem3DMultisampleEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureStorageMem3DMultisampleEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXTURESTORAGEMEM3DMULTISAMPLEEXTPROC)( texture_, samples_, internalFormat_, width_, height_, depth_, fixedSampleLocations_, memory_, offset_ );
}

static void __stdcall glNamedBufferStorageMemEXTWrapper(GLuint buffer_, GLsizeiptr size_, GLuint memory_, GLuint64 offset_)
{
  RESOLVE(PFNGLNAMEDBUFFERSTORAGEMEMEXTPROC, "glNamedBufferStorageMemEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedBufferStorageMemEXT\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDBUFFERSTORAGEMEMEXTPROC)( buffer_, size_, memory_, offset_ );
}

static void __stdcall glTexStorageMem1DEXTWrapper(GLenum target_, GLsizei levels_, GLenum internalFormat_, GLsizei width_, GLuint memory_, GLuint64 offset_)
{
  RESOLVE(PFNGLTEXSTORAGEMEM1DEXTPROC, "glTexStorageMem1DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexStorageMem1DEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXSTORAGEMEM1DEXTPROC)( target_, levels_, internalFormat_, width_, memory_, offset_ );
}

static void __stdcall glTextureStorageMem1DEXTWrapper(GLuint texture_, GLsizei levels_, GLenum internalFormat_, GLsizei width_, GLuint memory_, GLuint64 offset_)
{
  RESOLVE(PFNGLTEXTURESTORAGEMEM1DEXTPROC, "glTextureStorageMem1DEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureStorageMem1DEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXTURESTORAGEMEM1DEXTPROC)( texture_, levels_, internalFormat_, width_, memory_, offset_ );
}

static void __stdcall glImportMemoryFdEXTWrapper(GLuint memory_, GLuint64 size_, GLenum handleType_, GLint fd_)
{
  RESOLVE(PFNGLIMPORTMEMORYFDEXTPROC, "glImportMemoryFdEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glImportMemoryFdEXT\n");
#endif
  RESOLVED_PROC(PFNGLIMPORTMEMORYFDEXTPROC)( memory_, size_, handleType_, fd_ );
}

static void __stdcall glImportMemoryWin32HandleEXTWrapper(GLuint memory_, GLuint64 size_, GLenum handleType_, void * handle_)
{
  RESOLVE(PFNGLIMPORTMEMORYWIN32HANDLEEXTPROC, "glImportMemoryWin32HandleEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glImportMemoryWin32HandleEXT\n");
#endif
  RESOLVED_PROC(PFNGLIMPORTMEMORYWIN32HANDLEEXTPROC)( memory_, size_, handleType_, handle_ );
}

static void __stdcall glImportMemoryWin32NameEXTWrapper(GLuint memory_, GLuint64 size_, GLenum handleType_, const void * name_)
{
  RESOLVE(PFNGLIMPORTMEMORYWIN32NAMEEXTPROC, "glImportMemoryWin32NameEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glImportMemoryWin32NameEXT\n");
#endif
  RESOLVED_PROC(PFNGLIMPORTMEMORYWIN32NAMEEXTPROC)( memory_, size_, handleType_, name_ );
}

/* No wrapper for glMultiDrawArraysEXT, not in dispatch table */
/* No wrapper for glMultiDrawElementsEXT, not in dispatch table */
/* No wrapper for glSampleMaskEXT, not in dispatch table */
/* No wrapper for glSamplePatternEXT, not in dispatch table */
/* No wrapper for glColorTableEXT, not in dispatch table */
/* No wrapper for glGetColorTableEXT, not in dispatch table */
/* No wrapper for glGetColorTableParameterivEXT, not in dispatch table */
/* No wrapper for glGetColorTableParameterfvEXT, not in dispatch table */
/* No wrapper for glPixelTransformParameteriEXT, not in dispatch table */
/* No wrapper for glPixelTransformParameterfEXT, not in dispatch table */
/* No wrapper for glPixelTransformParameterivEXT, not in dispatch table */
/* No wrapper for glPixelTransformParameterfvEXT, not in dispatch table */
/* No wrapper for glGetPixelTransformParameterivEXT, not in dispatch table */
/* No wrapper for glGetPixelTransformParameterfvEXT, not in dispatch table */
/* No wrapper for glPointParameterfEXT, not in dispatch table */
/* No wrapper for glPointParameterfvEXT, not in dispatch table */
/* No wrapper for glPolygonOffsetEXT, not in dispatch table */
static void __stdcall glPolygonOffsetClampEXTWrapper(GLfloat factor_, GLfloat units_, GLfloat clamp_)
{
  RESOLVE(PFNGLPOLYGONOFFSETCLAMPEXTPROC, "glPolygonOffsetClampEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPolygonOffsetClampEXT\n");
#endif
  RESOLVED_PROC(PFNGLPOLYGONOFFSETCLAMPEXTPROC)( factor_, units_, clamp_ );
}

/* No wrapper for glProvokingVertexEXT, not in dispatch table */
/* No wrapper for glRasterSamplesEXT, not in dispatch table */
/* No wrapper for glSecondaryColor3bEXT, not in dispatch table */
/* No wrapper for glSecondaryColor3bvEXT, not in dispatch table */
/* No wrapper for glSecondaryColor3dEXT, not in dispatch table */
/* No wrapper for glSecondaryColor3dvEXT, not in dispatch table */
static void __stdcall glSecondaryColor3fEXTWrapper(GLfloat red_, GLfloat green_, GLfloat blue_)
{
  RESOLVE(PFNGLSECONDARYCOLOR3FEXTPROC, "glSecondaryColor3fEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSecondaryColor3fEXT\n");
#endif
  RESOLVED_PROC(PFNGLSECONDARYCOLOR3FEXTPROC)( red_, green_, blue_ );
}

static void __stdcall glSecondaryColor3fvEXTWrapper(const GLfloat* v_)
{
  RESOLVE(PFNGLSECONDARYCOLOR3FVEXTPROC, "glSecondaryColor3fvEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSecondaryColor3fvEXT\n");
#endif
  RESOLVED_PROC(PFNGLSECONDARYCOLOR3FVEXTPROC)( v_ );
}

/* No wrapper for glSecondaryColor3iEXT, not in dispatch table */
/* No wrapper for glSecondaryColor3ivEXT, not in dispatch table */
/* No wrapper for glSecondaryColor3sEXT, not in dispatch table */
/* No wrapper for glSecondaryColor3svEXT, not in dispatch table */
/* No wrapper for glSecondaryColor3ubEXT, not in dispatch table */
/* No wrapper for glSecondaryColor3ubvEXT, not in dispatch table */
/* No wrapper for glSecondaryColor3uiEXT, not in dispatch table */
/* No wrapper for glSecondaryColor3uivEXT, not in dispatch table */
/* No wrapper for glSecondaryColor3usEXT, not in dispatch table */
/* No wrapper for glSecondaryColor3usvEXT, not in dispatch table */
/* No wrapper for glSecondaryColorPointerEXT, not in dispatch table */
static void __stdcall glGenSemaphoresEXTWrapper(GLsizei n_, GLuint* semaphores_)
{
  RESOLVE(PFNGLGENSEMAPHORESEXTPROC, "glGenSemaphoresEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGenSemaphoresEXT\n");
#endif
  RESOLVED_PROC(PFNGLGENSEMAPHORESEXTPROC)( n_, semaphores_ );
}

static void __stdcall glDeleteSemaphoresEXTWrapper(GLsizei n_, const GLuint* semaphores_)
{
  RESOLVE(PFNGLDELETESEMAPHORESEXTPROC, "glDeleteSemaphoresEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDeleteSemaphoresEXT\n");
#endif
  RESOLVED_PROC(PFNGLDELETESEMAPHORESEXTPROC)( n_, semaphores_ );
}

static GLboolean __stdcall glIsSemaphoreEXTWrapper(GLuint semaphore_)
{
  RESOLVE_RET(PFNGLISSEMAPHOREEXTPROC, "glIsSemaphoreEXT", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIsSemaphoreEXT\n");
#endif
  return RESOLVED_PROC(PFNGLISSEMAPHOREEXTPROC)( semaphore_ );
}

static void __stdcall glSemaphoreParameterui64vEXTWrapper(GLuint semaphore_, GLenum pname_, const GLuint64* params_)
{
  RESOLVE(PFNGLSEMAPHOREPARAMETERUI64VEXTPROC, "glSemaphoreParameterui64vEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSemaphoreParameterui64vEXT\n");
#endif
  RESOLVED_PROC(PFNGLSEMAPHOREPARAMETERUI64VEXTPROC)( semaphore_, pname_, params_ );
}

static void __stdcall glGetSemaphoreParameterui64vEXTWrapper(GLuint semaphore_, GLenum pname_, GLuint64* params_)
{
  RESOLVE(PFNGLGETSEMAPHOREPARAMETERUI64VEXTPROC, "glGetSemaphoreParameterui64vEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetSemaphoreParameterui64vEXT\n");
#endif
  RESOLVED_PROC(PFNGLGETSEMAPHOREPARAMETERUI64VEXTPROC)( semaphore_, pname_, params_ );
}

static void __stdcall glWaitSemaphoreEXTWrapper(GLuint semaphore_, GLuint numBufferBarriers_, const GLuint* buffers_, GLuint numTextureBarriers_, const GLuint* textures_, const GLenum* srcLayouts_)
{
  RESOLVE(PFNGLWAITSEMAPHOREEXTPROC, "glWaitSemaphoreEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glWaitSemaphoreEXT\n");
#endif
  RESOLVED_PROC(PFNGLWAITSEMAPHOREEXTPROC)( semaphore_, numBufferBarriers_, buffers_, numTextureBarriers_, textures_, srcLayouts_ );
}

static void __stdcall glSignalSemaphoreEXTWrapper(GLuint semaphore_, GLuint numBufferBarriers_, const GLuint* buffers_, GLuint numTextureBarriers_, const GLuint* textures_, const GLenum* dstLayouts_)
{
  RESOLVE(PFNGLSIGNALSEMAPHOREEXTPROC, "glSignalSemaphoreEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSignalSemaphoreEXT\n");
#endif
  RESOLVED_PROC(PFNGLSIGNALSEMAPHOREEXTPROC)( semaphore_, numBufferBarriers_, buffers_, numTextureBarriers_, textures_, dstLayouts_ );
}

static void __stdcall glImportSemaphoreFdEXTWrapper(GLuint semaphore_, GLenum handleType_, GLint fd_)
{
  RESOLVE(PFNGLIMPORTSEMAPHOREFDEXTPROC, "glImportSemaphoreFdEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glImportSemaphoreFdEXT\n");
#endif
  RESOLVED_PROC(PFNGLIMPORTSEMAPHOREFDEXTPROC)( semaphore_, handleType_, fd_ );
}

static void __stdcall glImportSemaphoreWin32HandleEXTWrapper(GLuint semaphore_, GLenum handleType_, void * handle_)
{
  RESOLVE(PFNGLIMPORTSEMAPHOREWIN32HANDLEEXTPROC, "glImportSemaphoreWin32HandleEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glImportSemaphoreWin32HandleEXT\n");
#endif
  RESOLVED_PROC(PFNGLIMPORTSEMAPHOREWIN32HANDLEEXTPROC)( semaphore_, handleType_, handle_ );
}

static void __stdcall glImportSemaphoreWin32NameEXTWrapper(GLuint semaphore_, GLenum handleType_, const void * name_)
{
  RESOLVE(PFNGLIMPORTSEMAPHOREWIN32NAMEEXTPROC, "glImportSemaphoreWin32NameEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glImportSemaphoreWin32NameEXT\n");
#endif
  RESOLVED_PROC(PFNGLIMPORTSEMAPHOREWIN32NAMEEXTPROC)( semaphore_, handleType_, name_ );
}

static void __stdcall glUseShaderProgramEXTWrapper(GLenum type_, GLuint program_)
{
  RESOLVE(PFNGLUSESHADERPROGRAMEXTPROC, "glUseShaderProgramEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glUseShaderProgramEXT\n");
#endif
  RESOLVED_PROC(PFNGLUSESHADERPROGRAMEXTPROC)( type_, program_ );
}

static void __stdcall glActiveProgramEXTWrapper(GLuint program_)
{
  RESOLVE(PFNGLACTIVEPROGRAMEXTPROC, "glActiveProgramEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glActiveProgramEXT\n");
#endif
  RESOLVED_PROC(PFNGLACTIVEPROGRAMEXTPROC)( program_ );
}

static GLuint __stdcall glCreateShaderProgramEXTWrapper(GLenum type_, const GLchar* string_)
{
  RESOLVE_RET(PFNGLCREATESHADERPROGRAMEXTPROC, "glCreateShaderProgramEXT", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCreateShaderProgramEXT\n");
#endif
  return RESOLVED_PROC(PFNGLCREATESHADERPROGRAMEXTPROC)( type_, string_ );
}

static void __stdcall glFramebufferFetchBarrierEXTWrapper(void)
{
  RESOLVE(PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC, "glFramebufferFetchBarrierEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFramebufferFetchBarrierEXT\n");
#endif
  RESOLVED_PROC(PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC)(  );
}

static void __stdcall glBindImageTextureEXTWrapper(GLuint index_, GLuint texture_, GLint level_, GLboolean layered_, GLint layer_, GLenum access_, GLint format_)
{
  RESOLVE(PFNGLBINDIMAGETEXTUREEXTPROC, "glBindImageTextureEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindImageTextureEXT\n");
#endif
  RESOLVED_PROC(PFNGLBINDIMAGETEXTUREEXTPROC)( index_, texture_, level_, layered_, layer_, access_, format_ );
}

/* No wrapper for glMemoryBarrierEXT, not in dispatch table */
/* No wrapper for glStencilClearTagEXT, not in dispatch table */
static void __stdcall glActiveStencilFaceEXTWrapper(GLenum face_)
{
  RESOLVE(PFNGLACTIVESTENCILFACEEXTPROC, "glActiveStencilFaceEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glActiveStencilFaceEXT\n");
#endif
  RESOLVED_PROC(PFNGLACTIVESTENCILFACEEXTPROC)( face_ );
}

/* No wrapper for glTexSubImage1DEXT, not in dispatch table */
/* No wrapper for glTexSubImage2DEXT, not in dispatch table */
/* No wrapper for glTexImage3DEXT, not in dispatch table */
/* No wrapper for glTexSubImage3DEXT, not in dispatch table */
/* No wrapper for glFramebufferTextureLayerEXT, not in dispatch table */
/* No wrapper for glTexBufferEXT, not in dispatch table */
/* No wrapper for glTexParameterIivEXT, not in dispatch table */
/* No wrapper for glTexParameterIuivEXT, not in dispatch table */
/* No wrapper for glGetTexParameterIivEXT, not in dispatch table */
/* No wrapper for glGetTexParameterIuivEXT, not in dispatch table */
static void __stdcall glClearColorIiEXTWrapper(GLint red_, GLint green_, GLint blue_, GLint alpha_)
{
  RESOLVE(PFNGLCLEARCOLORIIEXTPROC, "glClearColorIiEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClearColorIiEXT\n");
#endif
  RESOLVED_PROC(PFNGLCLEARCOLORIIEXTPROC)( red_, green_, blue_, alpha_ );
}

static void __stdcall glClearColorIuiEXTWrapper(GLuint red_, GLuint green_, GLuint blue_, GLuint alpha_)
{
  RESOLVE(PFNGLCLEARCOLORIUIEXTPROC, "glClearColorIuiEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glClearColorIuiEXT\n");
#endif
  RESOLVED_PROC(PFNGLCLEARCOLORIUIEXTPROC)( red_, green_, blue_, alpha_ );
}

/* No wrapper for glAreTexturesResidentEXT, not in dispatch table */
/* No wrapper for glBindTextureEXT, not in dispatch table */
/* No wrapper for glDeleteTexturesEXT, not in dispatch table */
/* No wrapper for glGenTexturesEXT, not in dispatch table */
/* No wrapper for glIsTextureEXT, not in dispatch table */
/* No wrapper for glPrioritizeTexturesEXT, not in dispatch table */
/* No wrapper for glTextureNormalEXT, not in dispatch table */
/* No wrapper for glTexStorage1DEXT, not in dispatch table */
/* No wrapper for glTexStorage2DEXT, not in dispatch table */
/* No wrapper for glTexStorage3DEXT, not in dispatch table */
/* No wrapper for glGetQueryObjecti64vEXT, not in dispatch table */
/* No wrapper for glGetQueryObjectui64vEXT, not in dispatch table */
/* No wrapper for glBeginTransformFeedbackEXT, not in dispatch table */
/* No wrapper for glEndTransformFeedbackEXT, not in dispatch table */
/* No wrapper for glBindBufferRangeEXT, not in dispatch table */
static void __stdcall glBindBufferOffsetEXTWrapper(GLenum target_, GLuint index_, GLuint buffer_, GLintptr offset_)
{
  RESOLVE(PFNGLBINDBUFFEROFFSETEXTPROC, "glBindBufferOffsetEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBindBufferOffsetEXT\n");
#endif
  RESOLVED_PROC(PFNGLBINDBUFFEROFFSETEXTPROC)( target_, index_, buffer_, offset_ );
}

/* No wrapper for glBindBufferBaseEXT, not in dispatch table */
/* No wrapper for glTransformFeedbackVaryingsEXT, not in dispatch table */
/* No wrapper for glGetTransformFeedbackVaryingEXT, not in dispatch table */
/* No wrapper for glArrayElementEXT, not in dispatch table */
static void __stdcall glColorPointerEXTWrapper(GLint size_, GLenum type_, GLsizei stride_, GLsizei count_, const void * pointer_)
{
  RESOLVE(PFNGLCOLORPOINTEREXTPROC, "glColorPointerEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColorPointerEXT\n");
#endif
  RESOLVED_PROC(PFNGLCOLORPOINTEREXTPROC)( size_, type_, stride_, count_, pointer_ );
}

/* No wrapper for glDrawArraysEXT, not in dispatch table */
static void __stdcall glEdgeFlagPointerEXTWrapper(GLsizei stride_, GLsizei count_, const GLboolean* pointer_)
{
  RESOLVE(PFNGLEDGEFLAGPOINTEREXTPROC, "glEdgeFlagPointerEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEdgeFlagPointerEXT\n");
#endif
  RESOLVED_PROC(PFNGLEDGEFLAGPOINTEREXTPROC)( stride_, count_, pointer_ );
}

/* No wrapper for glGetPointervEXT, not in dispatch table */
static void __stdcall glIndexPointerEXTWrapper(GLenum type_, GLsizei stride_, GLsizei count_, const void * pointer_)
{
  RESOLVE(PFNGLINDEXPOINTEREXTPROC, "glIndexPointerEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glIndexPointerEXT\n");
#endif
  RESOLVED_PROC(PFNGLINDEXPOINTEREXTPROC)( type_, stride_, count_, pointer_ );
}

static void __stdcall glNormalPointerEXTWrapper(GLenum type_, GLsizei stride_, GLsizei count_, const void * pointer_)
{
  RESOLVE(PFNGLNORMALPOINTEREXTPROC, "glNormalPointerEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNormalPointerEXT\n");
#endif
  RESOLVED_PROC(PFNGLNORMALPOINTEREXTPROC)( type_, stride_, count_, pointer_ );
}

static void __stdcall glTexCoordPointerEXTWrapper(GLint size_, GLenum type_, GLsizei stride_, GLsizei count_, const void * pointer_)
{
  RESOLVE(PFNGLTEXCOORDPOINTEREXTPROC, "glTexCoordPointerEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoordPointerEXT\n");
#endif
  RESOLVED_PROC(PFNGLTEXCOORDPOINTEREXTPROC)( size_, type_, stride_, count_, pointer_ );
}

static void __stdcall glVertexPointerEXTWrapper(GLint size_, GLenum type_, GLsizei stride_, GLsizei count_, const void * pointer_)
{
  RESOLVE(PFNGLVERTEXPOINTEREXTPROC, "glVertexPointerEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexPointerEXT\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXPOINTEREXTPROC)( size_, type_, stride_, count_, pointer_ );
}

/* No wrapper for glVertexAttribL1dEXT, not in dispatch table */
/* No wrapper for glVertexAttribL2dEXT, not in dispatch table */
/* No wrapper for glVertexAttribL3dEXT, not in dispatch table */
/* No wrapper for glVertexAttribL4dEXT, not in dispatch table */
/* No wrapper for glVertexAttribL1dvEXT, not in dispatch table */
/* No wrapper for glVertexAttribL2dvEXT, not in dispatch table */
/* No wrapper for glVertexAttribL3dvEXT, not in dispatch table */
/* No wrapper for glVertexAttribL4dvEXT, not in dispatch table */
/* No wrapper for glVertexAttribLPointerEXT, not in dispatch table */
/* No wrapper for glGetVertexAttribLdvEXT, not in dispatch table */
/* No wrapper for glBeginVertexShaderEXT, not in dispatch table */
/* No wrapper for glEndVertexShaderEXT, not in dispatch table */
/* No wrapper for glBindVertexShaderEXT, not in dispatch table */
/* No wrapper for glGenVertexShadersEXT, not in dispatch table */
/* No wrapper for glDeleteVertexShaderEXT, not in dispatch table */
/* No wrapper for glShaderOp1EXT, not in dispatch table */
/* No wrapper for glShaderOp2EXT, not in dispatch table */
/* No wrapper for glShaderOp3EXT, not in dispatch table */
/* No wrapper for glSwizzleEXT, not in dispatch table */
/* No wrapper for glWriteMaskEXT, not in dispatch table */
/* No wrapper for glInsertComponentEXT, not in dispatch table */
/* No wrapper for glExtractComponentEXT, not in dispatch table */
/* No wrapper for glGenSymbolsEXT, not in dispatch table */
/* No wrapper for glSetInvariantEXT, not in dispatch table */
/* No wrapper for glSetLocalConstantEXT, not in dispatch table */
/* No wrapper for glVariantbvEXT, not in dispatch table */
/* No wrapper for glVariantsvEXT, not in dispatch table */
/* No wrapper for glVariantivEXT, not in dispatch table */
/* No wrapper for glVariantfvEXT, not in dispatch table */
/* No wrapper for glVariantdvEXT, not in dispatch table */
/* No wrapper for glVariantubvEXT, not in dispatch table */
/* No wrapper for glVariantusvEXT, not in dispatch table */
/* No wrapper for glVariantuivEXT, not in dispatch table */
/* No wrapper for glVariantPointerEXT, not in dispatch table */
/* No wrapper for glEnableVariantClientStateEXT, not in dispatch table */
/* No wrapper for glDisableVariantClientStateEXT, not in dispatch table */
/* No wrapper for glBindLightParameterEXT, not in dispatch table */
/* No wrapper for glBindMaterialParameterEXT, not in dispatch table */
/* No wrapper for glBindTexGenParameterEXT, not in dispatch table */
/* No wrapper for glBindTextureUnitParameterEXT, not in dispatch table */
/* No wrapper for glBindParameterEXT, not in dispatch table */
/* No wrapper for glIsVariantEnabledEXT, not in dispatch table */
/* No wrapper for glGetVariantBooleanvEXT, not in dispatch table */
/* No wrapper for glGetVariantIntegervEXT, not in dispatch table */
/* No wrapper for glGetVariantFloatvEXT, not in dispatch table */
/* No wrapper for glGetVariantPointervEXT, not in dispatch table */
/* No wrapper for glGetInvariantBooleanvEXT, not in dispatch table */
/* No wrapper for glGetInvariantIntegervEXT, not in dispatch table */
/* No wrapper for glGetInvariantFloatvEXT, not in dispatch table */
/* No wrapper for glGetLocalConstantBooleanvEXT, not in dispatch table */
/* No wrapper for glGetLocalConstantIntegervEXT, not in dispatch table */
/* No wrapper for glGetLocalConstantFloatvEXT, not in dispatch table */
/* No wrapper for glVertexWeightfEXT, not in dispatch table */
/* No wrapper for glVertexWeightfvEXT, not in dispatch table */
/* No wrapper for glVertexWeightPointerEXT, not in dispatch table */
/* No wrapper for glAcquireKeyedMutexWin32EXT, not in dispatch table */
/* No wrapper for glReleaseKeyedMutexWin32EXT, not in dispatch table */
static void __stdcall glWindowRectanglesEXTWrapper(GLenum mode_, GLsizei count_, const GLint* box_)
{
  RESOLVE(PFNGLWINDOWRECTANGLESEXTPROC, "glWindowRectanglesEXT");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glWindowRectanglesEXT\n");
#endif
  RESOLVED_PROC(PFNGLWINDOWRECTANGLESEXTPROC)( mode_, count_, box_ );
}

/* No wrapper for glImportSyncEXT, not in dispatch table */
/* No wrapper for glFrameTerminatorGREMEDY, not in dispatch table */
static void __stdcall glStringMarkerGREMEDYWrapper(GLsizei len_, const void * string_)
{
  RESOLVE(PFNGLSTRINGMARKERGREMEDYPROC, "glStringMarkerGREMEDY");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glStringMarkerGREMEDY\n");
#endif
  RESOLVED_PROC(PFNGLSTRINGMARKERGREMEDYPROC)( len_, string_ );
}

/* No wrapper for glImageTransformParameteriHP, not in dispatch table */
/* No wrapper for glImageTransformParameterfHP, not in dispatch table */
/* No wrapper for glImageTransformParameterivHP, not in dispatch table */
/* No wrapper for glImageTransformParameterfvHP, not in dispatch table */
/* No wrapper for glGetImageTransformParameterivHP, not in dispatch table */
/* No wrapper for glGetImageTransformParameterfvHP, not in dispatch table */
static void __stdcall glMultiModeDrawArraysIBMWrapper(const GLenum* mode_, const GLint* first_, const GLsizei* count_, GLsizei primcount_, GLint modestride_)
{
  RESOLVE(PFNGLMULTIMODEDRAWARRAYSIBMPROC, "glMultiModeDrawArraysIBM");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiModeDrawArraysIBM\n");
#endif
  RESOLVED_PROC(PFNGLMULTIMODEDRAWARRAYSIBMPROC)( mode_, first_, count_, primcount_, modestride_ );
}

static void __stdcall glMultiModeDrawElementsIBMWrapper(const GLenum* mode_, const GLsizei* count_, GLenum type_, const void *const* indices_, GLsizei primcount_, GLint modestride_)
{
  RESOLVE(PFNGLMULTIMODEDRAWELEMENTSIBMPROC, "glMultiModeDrawElementsIBM");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiModeDrawElementsIBM\n");
#endif
  RESOLVED_PROC(PFNGLMULTIMODEDRAWELEMENTSIBMPROC)( mode_, count_, type_, indices_, primcount_, modestride_ );
}

/* No wrapper for glFlushStaticDataIBM, not in dispatch table */
/* No wrapper for glColorPointerListIBM, not in dispatch table */
/* No wrapper for glSecondaryColorPointerListIBM, not in dispatch table */
/* No wrapper for glEdgeFlagPointerListIBM, not in dispatch table */
/* No wrapper for glFogCoordPointerListIBM, not in dispatch table */
/* No wrapper for glIndexPointerListIBM, not in dispatch table */
/* No wrapper for glNormalPointerListIBM, not in dispatch table */
/* No wrapper for glTexCoordPointerListIBM, not in dispatch table */
/* No wrapper for glVertexPointerListIBM, not in dispatch table */
/* No wrapper for glBlendFuncSeparateINGR, not in dispatch table */
/* No wrapper for glApplyFramebufferAttachmentCMAAINTEL, not in dispatch table */
/* No wrapper for glSyncTextureINTEL, not in dispatch table */
/* No wrapper for glUnmapTexture2DINTEL, not in dispatch table */
/* No wrapper for glMapTexture2DINTEL, not in dispatch table */
/* No wrapper for glVertexPointervINTEL, not in dispatch table */
/* No wrapper for glNormalPointervINTEL, not in dispatch table */
/* No wrapper for glColorPointervINTEL, not in dispatch table */
/* No wrapper for glTexCoordPointervINTEL, not in dispatch table */
static void __stdcall glBeginPerfQueryINTELWrapper(GLuint queryHandle_)
{
  RESOLVE(PFNGLBEGINPERFQUERYINTELPROC, "glBeginPerfQueryINTEL");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glBeginPerfQueryINTEL\n");
#endif
  RESOLVED_PROC(PFNGLBEGINPERFQUERYINTELPROC)( queryHandle_ );
}

static void __stdcall glCreatePerfQueryINTELWrapper(GLuint queryId_, GLuint* queryHandle_)
{
  RESOLVE(PFNGLCREATEPERFQUERYINTELPROC, "glCreatePerfQueryINTEL");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCreatePerfQueryINTEL\n");
#endif
  RESOLVED_PROC(PFNGLCREATEPERFQUERYINTELPROC)( queryId_, queryHandle_ );
}

static void __stdcall glDeletePerfQueryINTELWrapper(GLuint queryHandle_)
{
  RESOLVE(PFNGLDELETEPERFQUERYINTELPROC, "glDeletePerfQueryINTEL");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glDeletePerfQueryINTEL\n");
#endif
  RESOLVED_PROC(PFNGLDELETEPERFQUERYINTELPROC)( queryHandle_ );
}

static void __stdcall glEndPerfQueryINTELWrapper(GLuint queryHandle_)
{
  RESOLVE(PFNGLENDPERFQUERYINTELPROC, "glEndPerfQueryINTEL");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glEndPerfQueryINTEL\n");
#endif
  RESOLVED_PROC(PFNGLENDPERFQUERYINTELPROC)( queryHandle_ );
}

static void __stdcall glGetFirstPerfQueryIdINTELWrapper(GLuint* queryId_)
{
  RESOLVE(PFNGLGETFIRSTPERFQUERYIDINTELPROC, "glGetFirstPerfQueryIdINTEL");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetFirstPerfQueryIdINTEL\n");
#endif
  RESOLVED_PROC(PFNGLGETFIRSTPERFQUERYIDINTELPROC)( queryId_ );
}

static void __stdcall glGetNextPerfQueryIdINTELWrapper(GLuint queryId_, GLuint* nextQueryId_)
{
  RESOLVE(PFNGLGETNEXTPERFQUERYIDINTELPROC, "glGetNextPerfQueryIdINTEL");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetNextPerfQueryIdINTEL\n");
#endif
  RESOLVED_PROC(PFNGLGETNEXTPERFQUERYIDINTELPROC)( queryId_, nextQueryId_ );
}

static void __stdcall glGetPerfCounterInfoINTELWrapper(GLuint queryId_, GLuint counterId_, GLuint counterNameLength_, GLchar* counterName_, GLuint counterDescLength_, GLchar* counterDesc_, GLuint* counterOffset_, GLuint* counterDataSize_, GLuint* counterTypeEnum_, GLuint* counterDataTypeEnum_, GLuint64* rawCounterMaxValue_)
{
  RESOLVE(PFNGLGETPERFCOUNTERINFOINTELPROC, "glGetPerfCounterInfoINTEL");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetPerfCounterInfoINTEL\n");
#endif
  RESOLVED_PROC(PFNGLGETPERFCOUNTERINFOINTELPROC)( queryId_, counterId_, counterNameLength_, counterName_, counterDescLength_, counterDesc_, counterOffset_, counterDataSize_, counterTypeEnum_, counterDataTypeEnum_, rawCounterMaxValue_ );
}

static void __stdcall glGetPerfQueryDataINTELWrapper(GLuint queryHandle_, GLuint flags_, GLsizei dataSize_, void * data_, GLuint* bytesWritten_)
{
  RESOLVE(PFNGLGETPERFQUERYDATAINTELPROC, "glGetPerfQueryDataINTEL");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetPerfQueryDataINTEL\n");
#endif
  RESOLVED_PROC(PFNGLGETPERFQUERYDATAINTELPROC)( queryHandle_, flags_, dataSize_, data_, bytesWritten_ );
}

static void __stdcall glGetPerfQueryIdByNameINTELWrapper(GLchar* queryName_, GLuint* queryId_)
{
  RESOLVE(PFNGLGETPERFQUERYIDBYNAMEINTELPROC, "glGetPerfQueryIdByNameINTEL");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetPerfQueryIdByNameINTEL\n");
#endif
  RESOLVED_PROC(PFNGLGETPERFQUERYIDBYNAMEINTELPROC)( queryName_, queryId_ );
}

static void __stdcall glGetPerfQueryInfoINTELWrapper(GLuint queryId_, GLuint queryNameLength_, GLchar* queryName_, GLuint* dataSize_, GLuint* noCounters_, GLuint* noInstances_, GLuint* capsMask_)
{
  RESOLVE(PFNGLGETPERFQUERYINFOINTELPROC, "glGetPerfQueryInfoINTEL");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetPerfQueryInfoINTEL\n");
#endif
  RESOLVED_PROC(PFNGLGETPERFQUERYINFOINTELPROC)( queryId_, queryNameLength_, queryName_, dataSize_, noCounters_, noInstances_, capsMask_ );
}

static void __stdcall glFramebufferParameteriMESAWrapper(GLenum target_, GLenum pname_, GLint param_)
{
  RESOLVE(PFNGLFRAMEBUFFERPARAMETERIMESAPROC, "glFramebufferParameteriMESA");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFramebufferParameteriMESA\n");
#endif
  RESOLVED_PROC(PFNGLFRAMEBUFFERPARAMETERIMESAPROC)( target_, pname_, param_ );
}

static void __stdcall glGetFramebufferParameterivMESAWrapper(GLenum target_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETFRAMEBUFFERPARAMETERIVMESAPROC, "glGetFramebufferParameterivMESA");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetFramebufferParameterivMESA\n");
#endif
  RESOLVED_PROC(PFNGLGETFRAMEBUFFERPARAMETERIVMESAPROC)( target_, pname_, params_ );
}

static void __stdcall glResizeBuffersMESAWrapper(void)
{
  RESOLVE(PFNGLRESIZEBUFFERSMESAPROC, "glResizeBuffersMESA");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glResizeBuffersMESA\n");
#endif
  RESOLVED_PROC(PFNGLRESIZEBUFFERSMESAPROC)(  );
}

/* No wrapper for glWindowPos2dMESA, not in dispatch table */
/* No wrapper for glWindowPos2dvMESA, not in dispatch table */
/* No wrapper for glWindowPos2fMESA, not in dispatch table */
/* No wrapper for glWindowPos2fvMESA, not in dispatch table */
/* No wrapper for glWindowPos2iMESA, not in dispatch table */
/* No wrapper for glWindowPos2ivMESA, not in dispatch table */
/* No wrapper for glWindowPos2sMESA, not in dispatch table */
/* No wrapper for glWindowPos2svMESA, not in dispatch table */
/* No wrapper for glWindowPos3dMESA, not in dispatch table */
/* No wrapper for glWindowPos3dvMESA, not in dispatch table */
/* No wrapper for glWindowPos3fMESA, not in dispatch table */
/* No wrapper for glWindowPos3fvMESA, not in dispatch table */
/* No wrapper for glWindowPos3iMESA, not in dispatch table */
/* No wrapper for glWindowPos3ivMESA, not in dispatch table */
/* No wrapper for glWindowPos3sMESA, not in dispatch table */
/* No wrapper for glWindowPos3svMESA, not in dispatch table */
static void __stdcall glWindowPos4dMESAWrapper(GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_)
{
  RESOLVE(PFNGLWINDOWPOS4DMESAPROC, "glWindowPos4dMESA");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glWindowPos4dMESA\n");
#endif
  RESOLVED_PROC(PFNGLWINDOWPOS4DMESAPROC)( x_, y_, z_, w_ );
}

static void __stdcall glWindowPos4dvMESAWrapper(const GLdouble* v_)
{
  RESOLVE(PFNGLWINDOWPOS4DVMESAPROC, "glWindowPos4dvMESA");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glWindowPos4dvMESA\n");
#endif
  RESOLVED_PROC(PFNGLWINDOWPOS4DVMESAPROC)( v_ );
}

static void __stdcall glWindowPos4fMESAWrapper(GLfloat x_, GLfloat y_, GLfloat z_, GLfloat w_)
{
  RESOLVE(PFNGLWINDOWPOS4FMESAPROC, "glWindowPos4fMESA");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glWindowPos4fMESA\n");
#endif
  RESOLVED_PROC(PFNGLWINDOWPOS4FMESAPROC)( x_, y_, z_, w_ );
}

static void __stdcall glWindowPos4fvMESAWrapper(const GLfloat* v_)
{
  RESOLVE(PFNGLWINDOWPOS4FVMESAPROC, "glWindowPos4fvMESA");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glWindowPos4fvMESA\n");
#endif
  RESOLVED_PROC(PFNGLWINDOWPOS4FVMESAPROC)( v_ );
}

static void __stdcall glWindowPos4iMESAWrapper(GLint x_, GLint y_, GLint z_, GLint w_)
{
  RESOLVE(PFNGLWINDOWPOS4IMESAPROC, "glWindowPos4iMESA");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glWindowPos4iMESA\n");
#endif
  RESOLVED_PROC(PFNGLWINDOWPOS4IMESAPROC)( x_, y_, z_, w_ );
}

static void __stdcall glWindowPos4ivMESAWrapper(const GLint* v_)
{
  RESOLVE(PFNGLWINDOWPOS4IVMESAPROC, "glWindowPos4ivMESA");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glWindowPos4ivMESA\n");
#endif
  RESOLVED_PROC(PFNGLWINDOWPOS4IVMESAPROC)( v_ );
}

static void __stdcall glWindowPos4sMESAWrapper(GLshort x_, GLshort y_, GLshort z_, GLshort w_)
{
  RESOLVE(PFNGLWINDOWPOS4SMESAPROC, "glWindowPos4sMESA");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glWindowPos4sMESA\n");
#endif
  RESOLVED_PROC(PFNGLWINDOWPOS4SMESAPROC)( x_, y_, z_, w_ );
}

static void __stdcall glWindowPos4svMESAWrapper(const GLshort* v_)
{
  RESOLVE(PFNGLWINDOWPOS4SVMESAPROC, "glWindowPos4svMESA");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glWindowPos4svMESA\n");
#endif
  RESOLVED_PROC(PFNGLWINDOWPOS4SVMESAPROC)( v_ );
}

/* No wrapper for glBeginConditionalRenderNVX, not in dispatch table */
/* No wrapper for glEndConditionalRenderNVX, not in dispatch table */
/* No wrapper for glUploadGpuMaskNVX, not in dispatch table */
/* No wrapper for glMulticastViewportArrayvNVX, not in dispatch table */
/* No wrapper for glMulticastViewportPositionWScaleNVX, not in dispatch table */
/* No wrapper for glMulticastScissorArrayvNVX, not in dispatch table */
/* No wrapper for glAsyncCopyBufferSubDataNVX, not in dispatch table */
/* No wrapper for glAsyncCopyImageSubDataNVX, not in dispatch table */
/* No wrapper for glLGPUNamedBufferSubDataNVX, not in dispatch table */
/* No wrapper for glLGPUCopyImageSubDataNVX, not in dispatch table */
/* No wrapper for glLGPUInterlockNVX, not in dispatch table */
/* No wrapper for glCreateProgressFenceNVX, not in dispatch table */
/* No wrapper for glSignalSemaphoreui64NVX, not in dispatch table */
/* No wrapper for glWaitSemaphoreui64NVX, not in dispatch table */
/* No wrapper for glClientWaitSemaphoreui64NVX, not in dispatch table */
static void __stdcall glAlphaToCoverageDitherControlNVWrapper(GLenum mode_)
{
  RESOLVE(PFNGLALPHATOCOVERAGEDITHERCONTROLNVPROC, "glAlphaToCoverageDitherControlNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glAlphaToCoverageDitherControlNV\n");
#endif
  RESOLVED_PROC(PFNGLALPHATOCOVERAGEDITHERCONTROLNVPROC)( mode_ );
}

/* No wrapper for glMultiDrawArraysIndirectBindlessNV, not in dispatch table */
/* No wrapper for glMultiDrawElementsIndirectBindlessNV, not in dispatch table */
/* No wrapper for glMultiDrawArraysIndirectBindlessCountNV, not in dispatch table */
/* No wrapper for glMultiDrawElementsIndirectBindlessCountNV, not in dispatch table */
/* No wrapper for glGetTextureHandleNV, not in dispatch table */
/* No wrapper for glGetTextureSamplerHandleNV, not in dispatch table */
/* No wrapper for glMakeTextureHandleResidentNV, not in dispatch table */
/* No wrapper for glMakeTextureHandleNonResidentNV, not in dispatch table */
/* No wrapper for glGetImageHandleNV, not in dispatch table */
/* No wrapper for glMakeImageHandleResidentNV, not in dispatch table */
/* No wrapper for glMakeImageHandleNonResidentNV, not in dispatch table */
/* No wrapper for glUniformHandleui64NV, not in dispatch table */
/* No wrapper for glUniformHandleui64vNV, not in dispatch table */
/* No wrapper for glProgramUniformHandleui64NV, not in dispatch table */
/* No wrapper for glProgramUniformHandleui64vNV, not in dispatch table */
/* No wrapper for glIsTextureHandleResidentNV, not in dispatch table */
/* No wrapper for glIsImageHandleResidentNV, not in dispatch table */
/* No wrapper for glBlendParameteriNV, not in dispatch table */
/* No wrapper for glBlendBarrierNV, not in dispatch table */
/* No wrapper for glViewportPositionWScaleNV, not in dispatch table */
/* No wrapper for glCreateStatesNV, not in dispatch table */
/* No wrapper for glDeleteStatesNV, not in dispatch table */
/* No wrapper for glIsStateNV, not in dispatch table */
/* No wrapper for glStateCaptureNV, not in dispatch table */
/* No wrapper for glGetCommandHeaderNV, not in dispatch table */
/* No wrapper for glGetStageIndexNV, not in dispatch table */
/* No wrapper for glDrawCommandsNV, not in dispatch table */
/* No wrapper for glDrawCommandsAddressNV, not in dispatch table */
/* No wrapper for glDrawCommandsStatesNV, not in dispatch table */
/* No wrapper for glDrawCommandsStatesAddressNV, not in dispatch table */
/* No wrapper for glCreateCommandListsNV, not in dispatch table */
/* No wrapper for glDeleteCommandListsNV, not in dispatch table */
/* No wrapper for glIsCommandListNV, not in dispatch table */
/* No wrapper for glListDrawCommandsStatesClientNV, not in dispatch table */
/* No wrapper for glCommandListSegmentsNV, not in dispatch table */
/* No wrapper for glCompileCommandListNV, not in dispatch table */
/* No wrapper for glCallCommandListNV, not in dispatch table */
/* No wrapper for glBeginConditionalRenderNV, not in dispatch table */
/* No wrapper for glEndConditionalRenderNV, not in dispatch table */
static void __stdcall glSubpixelPrecisionBiasNVWrapper(GLuint xbits_, GLuint ybits_)
{
  RESOLVE(PFNGLSUBPIXELPRECISIONBIASNVPROC, "glSubpixelPrecisionBiasNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSubpixelPrecisionBiasNV\n");
#endif
  RESOLVED_PROC(PFNGLSUBPIXELPRECISIONBIASNVPROC)( xbits_, ybits_ );
}

static void __stdcall glConservativeRasterParameterfNVWrapper(GLenum pname_, GLfloat value_)
{
  RESOLVE(PFNGLCONSERVATIVERASTERPARAMETERFNVPROC, "glConservativeRasterParameterfNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glConservativeRasterParameterfNV\n");
#endif
  RESOLVED_PROC(PFNGLCONSERVATIVERASTERPARAMETERFNVPROC)( pname_, value_ );
}

static void __stdcall glConservativeRasterParameteriNVWrapper(GLenum pname_, GLint param_)
{
  RESOLVE(PFNGLCONSERVATIVERASTERPARAMETERINVPROC, "glConservativeRasterParameteriNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glConservativeRasterParameteriNV\n");
#endif
  RESOLVED_PROC(PFNGLCONSERVATIVERASTERPARAMETERINVPROC)( pname_, param_ );
}

static void __stdcall glCopyImageSubDataNVWrapper(GLuint srcName_, GLenum srcTarget_, GLint srcLevel_, GLint srcX_, GLint srcY_, GLint srcZ_, GLuint dstName_, GLenum dstTarget_, GLint dstLevel_, GLint dstX_, GLint dstY_, GLint dstZ_, GLsizei width_, GLsizei height_, GLsizei depth_)
{
  RESOLVE(PFNGLCOPYIMAGESUBDATANVPROC, "glCopyImageSubDataNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glCopyImageSubDataNV\n");
#endif
  RESOLVED_PROC(PFNGLCOPYIMAGESUBDATANVPROC)( srcName_, srcTarget_, srcLevel_, srcX_, srcY_, srcZ_, dstName_, dstTarget_, dstLevel_, dstX_, dstY_, dstZ_, width_, height_, depth_ );
}

/* No wrapper for glDepthRangedNV, not in dispatch table */
/* No wrapper for glClearDepthdNV, not in dispatch table */
/* No wrapper for glDepthBoundsdNV, not in dispatch table */
/* No wrapper for glDrawTextureNV, not in dispatch table */
/* No wrapper for glDrawVkImageNV, not in dispatch table */
/* No wrapper for glGetVkProcAddrNV, not in dispatch table */
/* No wrapper for glWaitVkSemaphoreNV, not in dispatch table */
/* No wrapper for glSignalVkSemaphoreNV, not in dispatch table */
/* No wrapper for glSignalVkFenceNV, not in dispatch table */
/* No wrapper for glMapControlPointsNV, not in dispatch table */
/* No wrapper for glMapParameterivNV, not in dispatch table */
/* No wrapper for glMapParameterfvNV, not in dispatch table */
/* No wrapper for glGetMapControlPointsNV, not in dispatch table */
/* No wrapper for glGetMapParameterivNV, not in dispatch table */
/* No wrapper for glGetMapParameterfvNV, not in dispatch table */
/* No wrapper for glGetMapAttribParameterivNV, not in dispatch table */
/* No wrapper for glGetMapAttribParameterfvNV, not in dispatch table */
/* No wrapper for glEvalMapsNV, not in dispatch table */
/* No wrapper for glGetMultisamplefvNV, not in dispatch table */
/* No wrapper for glSampleMaskIndexedNV, not in dispatch table */
/* No wrapper for glTexRenderbufferNV, not in dispatch table */
/* No wrapper for glDeleteFencesNV, not in dispatch table */
/* No wrapper for glGenFencesNV, not in dispatch table */
/* No wrapper for glIsFenceNV, not in dispatch table */
/* No wrapper for glTestFenceNV, not in dispatch table */
/* No wrapper for glGetFenceivNV, not in dispatch table */
/* No wrapper for glFinishFenceNV, not in dispatch table */
/* No wrapper for glSetFenceNV, not in dispatch table */
/* No wrapper for glFragmentCoverageColorNV, not in dispatch table */
static void __stdcall glProgramNamedParameter4fNVWrapper(GLuint id_, GLsizei len_, const GLubyte* name_, GLfloat x_, GLfloat y_, GLfloat z_, GLfloat w_)
{
  RESOLVE(PFNGLPROGRAMNAMEDPARAMETER4FNVPROC, "glProgramNamedParameter4fNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramNamedParameter4fNV\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMNAMEDPARAMETER4FNVPROC)( id_, len_, name_, x_, y_, z_, w_ );
}

static void __stdcall glProgramNamedParameter4fvNVWrapper(GLuint id_, GLsizei len_, const GLubyte* name_, const GLfloat* v_)
{
  RESOLVE(PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC, "glProgramNamedParameter4fvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramNamedParameter4fvNV\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC)( id_, len_, name_, v_ );
}

static void __stdcall glProgramNamedParameter4dNVWrapper(GLuint id_, GLsizei len_, const GLubyte* name_, GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_)
{
  RESOLVE(PFNGLPROGRAMNAMEDPARAMETER4DNVPROC, "glProgramNamedParameter4dNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramNamedParameter4dNV\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMNAMEDPARAMETER4DNVPROC)( id_, len_, name_, x_, y_, z_, w_ );
}

static void __stdcall glProgramNamedParameter4dvNVWrapper(GLuint id_, GLsizei len_, const GLubyte* name_, const GLdouble* v_)
{
  RESOLVE(PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC, "glProgramNamedParameter4dvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramNamedParameter4dvNV\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC)( id_, len_, name_, v_ );
}

static void __stdcall glGetProgramNamedParameterfvNVWrapper(GLuint id_, GLsizei len_, const GLubyte* name_, GLfloat* params_)
{
  RESOLVE(PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC, "glGetProgramNamedParameterfvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetProgramNamedParameterfvNV\n");
#endif
  RESOLVED_PROC(PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC)( id_, len_, name_, params_ );
}

static void __stdcall glGetProgramNamedParameterdvNVWrapper(GLuint id_, GLsizei len_, const GLubyte* name_, GLdouble* params_)
{
  RESOLVE(PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC, "glGetProgramNamedParameterdvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetProgramNamedParameterdvNV\n");
#endif
  RESOLVED_PROC(PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC)( id_, len_, name_, params_ );
}

/* No wrapper for glCoverageModulationTableNV, not in dispatch table */
/* No wrapper for glGetCoverageModulationTableNV, not in dispatch table */
/* No wrapper for glCoverageModulationNV, not in dispatch table */
/* No wrapper for glRenderbufferStorageMultisampleCoverageNV, not in dispatch table */
/* No wrapper for glProgramVertexLimitNV, not in dispatch table */
/* No wrapper for glFramebufferTextureEXT, not in dispatch table */
/* No wrapper for glFramebufferTextureFaceEXT, not in dispatch table */
/* No wrapper for glRenderGpuMaskNV, not in dispatch table */
/* No wrapper for glMulticastBufferSubDataNV, not in dispatch table */
/* No wrapper for glMulticastCopyBufferSubDataNV, not in dispatch table */
/* No wrapper for glMulticastCopyImageSubDataNV, not in dispatch table */
/* No wrapper for glMulticastBlitFramebufferNV, not in dispatch table */
/* No wrapper for glMulticastFramebufferSampleLocationsfvNV, not in dispatch table */
/* No wrapper for glMulticastBarrierNV, not in dispatch table */
/* No wrapper for glMulticastWaitSyncNV, not in dispatch table */
/* No wrapper for glMulticastGetQueryObjectivNV, not in dispatch table */
/* No wrapper for glMulticastGetQueryObjectuivNV, not in dispatch table */
/* No wrapper for glMulticastGetQueryObjecti64vNV, not in dispatch table */
/* No wrapper for glMulticastGetQueryObjectui64vNV, not in dispatch table */
/* No wrapper for glProgramLocalParameterI4iNV, not in dispatch table */
/* No wrapper for glProgramLocalParameterI4ivNV, not in dispatch table */
/* No wrapper for glProgramLocalParametersI4ivNV, not in dispatch table */
/* No wrapper for glProgramLocalParameterI4uiNV, not in dispatch table */
/* No wrapper for glProgramLocalParameterI4uivNV, not in dispatch table */
/* No wrapper for glProgramLocalParametersI4uivNV, not in dispatch table */
/* No wrapper for glProgramEnvParameterI4iNV, not in dispatch table */
/* No wrapper for glProgramEnvParameterI4ivNV, not in dispatch table */
/* No wrapper for glProgramEnvParametersI4ivNV, not in dispatch table */
/* No wrapper for glProgramEnvParameterI4uiNV, not in dispatch table */
/* No wrapper for glProgramEnvParameterI4uivNV, not in dispatch table */
/* No wrapper for glProgramEnvParametersI4uivNV, not in dispatch table */
/* No wrapper for glGetProgramLocalParameterIivNV, not in dispatch table */
/* No wrapper for glGetProgramLocalParameterIuivNV, not in dispatch table */
/* No wrapper for glGetProgramEnvParameterIivNV, not in dispatch table */
/* No wrapper for glGetProgramEnvParameterIuivNV, not in dispatch table */
/* No wrapper for glProgramSubroutineParametersuivNV, not in dispatch table */
/* No wrapper for glGetProgramSubroutineParameteruivNV, not in dispatch table */
static void __stdcall glVertex2hNVWrapper(GLhalfNV x_, GLhalfNV y_)
{
  RESOLVE(PFNGLVERTEX2HNVPROC, "glVertex2hNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex2hNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEX2HNVPROC)( x_, y_ );
}

static void __stdcall glVertex2hvNVWrapper(const GLhalfNV* v_)
{
  RESOLVE(PFNGLVERTEX2HVNVPROC, "glVertex2hvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex2hvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEX2HVNVPROC)( v_ );
}

static void __stdcall glVertex3hNVWrapper(GLhalfNV x_, GLhalfNV y_, GLhalfNV z_)
{
  RESOLVE(PFNGLVERTEX3HNVPROC, "glVertex3hNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex3hNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEX3HNVPROC)( x_, y_, z_ );
}

static void __stdcall glVertex3hvNVWrapper(const GLhalfNV* v_)
{
  RESOLVE(PFNGLVERTEX3HVNVPROC, "glVertex3hvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex3hvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEX3HVNVPROC)( v_ );
}

static void __stdcall glVertex4hNVWrapper(GLhalfNV x_, GLhalfNV y_, GLhalfNV z_, GLhalfNV w_)
{
  RESOLVE(PFNGLVERTEX4HNVPROC, "glVertex4hNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex4hNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEX4HNVPROC)( x_, y_, z_, w_ );
}

static void __stdcall glVertex4hvNVWrapper(const GLhalfNV* v_)
{
  RESOLVE(PFNGLVERTEX4HVNVPROC, "glVertex4hvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertex4hvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEX4HVNVPROC)( v_ );
}

static void __stdcall glNormal3hNVWrapper(GLhalfNV nx_, GLhalfNV ny_, GLhalfNV nz_)
{
  RESOLVE(PFNGLNORMAL3HNVPROC, "glNormal3hNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNormal3hNV\n");
#endif
  RESOLVED_PROC(PFNGLNORMAL3HNVPROC)( nx_, ny_, nz_ );
}

static void __stdcall glNormal3hvNVWrapper(const GLhalfNV* v_)
{
  RESOLVE(PFNGLNORMAL3HVNVPROC, "glNormal3hvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNormal3hvNV\n");
#endif
  RESOLVED_PROC(PFNGLNORMAL3HVNVPROC)( v_ );
}

static void __stdcall glColor3hNVWrapper(GLhalfNV red_, GLhalfNV green_, GLhalfNV blue_)
{
  RESOLVE(PFNGLCOLOR3HNVPROC, "glColor3hNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor3hNV\n");
#endif
  RESOLVED_PROC(PFNGLCOLOR3HNVPROC)( red_, green_, blue_ );
}

static void __stdcall glColor3hvNVWrapper(const GLhalfNV* v_)
{
  RESOLVE(PFNGLCOLOR3HVNVPROC, "glColor3hvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor3hvNV\n");
#endif
  RESOLVED_PROC(PFNGLCOLOR3HVNVPROC)( v_ );
}

static void __stdcall glColor4hNVWrapper(GLhalfNV red_, GLhalfNV green_, GLhalfNV blue_, GLhalfNV alpha_)
{
  RESOLVE(PFNGLCOLOR4HNVPROC, "glColor4hNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor4hNV\n");
#endif
  RESOLVED_PROC(PFNGLCOLOR4HNVPROC)( red_, green_, blue_, alpha_ );
}

static void __stdcall glColor4hvNVWrapper(const GLhalfNV* v_)
{
  RESOLVE(PFNGLCOLOR4HVNVPROC, "glColor4hvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glColor4hvNV\n");
#endif
  RESOLVED_PROC(PFNGLCOLOR4HVNVPROC)( v_ );
}

static void __stdcall glTexCoord1hNVWrapper(GLhalfNV s_)
{
  RESOLVE(PFNGLTEXCOORD1HNVPROC, "glTexCoord1hNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord1hNV\n");
#endif
  RESOLVED_PROC(PFNGLTEXCOORD1HNVPROC)( s_ );
}

static void __stdcall glTexCoord1hvNVWrapper(const GLhalfNV* v_)
{
  RESOLVE(PFNGLTEXCOORD1HVNVPROC, "glTexCoord1hvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord1hvNV\n");
#endif
  RESOLVED_PROC(PFNGLTEXCOORD1HVNVPROC)( v_ );
}

static void __stdcall glTexCoord2hNVWrapper(GLhalfNV s_, GLhalfNV t_)
{
  RESOLVE(PFNGLTEXCOORD2HNVPROC, "glTexCoord2hNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord2hNV\n");
#endif
  RESOLVED_PROC(PFNGLTEXCOORD2HNVPROC)( s_, t_ );
}

static void __stdcall glTexCoord2hvNVWrapper(const GLhalfNV* v_)
{
  RESOLVE(PFNGLTEXCOORD2HVNVPROC, "glTexCoord2hvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord2hvNV\n");
#endif
  RESOLVED_PROC(PFNGLTEXCOORD2HVNVPROC)( v_ );
}

static void __stdcall glTexCoord3hNVWrapper(GLhalfNV s_, GLhalfNV t_, GLhalfNV r_)
{
  RESOLVE(PFNGLTEXCOORD3HNVPROC, "glTexCoord3hNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord3hNV\n");
#endif
  RESOLVED_PROC(PFNGLTEXCOORD3HNVPROC)( s_, t_, r_ );
}

static void __stdcall glTexCoord3hvNVWrapper(const GLhalfNV* v_)
{
  RESOLVE(PFNGLTEXCOORD3HVNVPROC, "glTexCoord3hvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord3hvNV\n");
#endif
  RESOLVED_PROC(PFNGLTEXCOORD3HVNVPROC)( v_ );
}

static void __stdcall glTexCoord4hNVWrapper(GLhalfNV s_, GLhalfNV t_, GLhalfNV r_, GLhalfNV q_)
{
  RESOLVE(PFNGLTEXCOORD4HNVPROC, "glTexCoord4hNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord4hNV\n");
#endif
  RESOLVED_PROC(PFNGLTEXCOORD4HNVPROC)( s_, t_, r_, q_ );
}

static void __stdcall glTexCoord4hvNVWrapper(const GLhalfNV* v_)
{
  RESOLVE(PFNGLTEXCOORD4HVNVPROC, "glTexCoord4hvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTexCoord4hvNV\n");
#endif
  RESOLVED_PROC(PFNGLTEXCOORD4HVNVPROC)( v_ );
}

static void __stdcall glMultiTexCoord1hNVWrapper(GLenum target_, GLhalfNV s_)
{
  RESOLVE(PFNGLMULTITEXCOORD1HNVPROC, "glMultiTexCoord1hNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord1hNV\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD1HNVPROC)( target_, s_ );
}

static void __stdcall glMultiTexCoord1hvNVWrapper(GLenum target_, const GLhalfNV* v_)
{
  RESOLVE(PFNGLMULTITEXCOORD1HVNVPROC, "glMultiTexCoord1hvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord1hvNV\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD1HVNVPROC)( target_, v_ );
}

static void __stdcall glMultiTexCoord2hNVWrapper(GLenum target_, GLhalfNV s_, GLhalfNV t_)
{
  RESOLVE(PFNGLMULTITEXCOORD2HNVPROC, "glMultiTexCoord2hNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord2hNV\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD2HNVPROC)( target_, s_, t_ );
}

static void __stdcall glMultiTexCoord2hvNVWrapper(GLenum target_, const GLhalfNV* v_)
{
  RESOLVE(PFNGLMULTITEXCOORD2HVNVPROC, "glMultiTexCoord2hvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord2hvNV\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD2HVNVPROC)( target_, v_ );
}

static void __stdcall glMultiTexCoord3hNVWrapper(GLenum target_, GLhalfNV s_, GLhalfNV t_, GLhalfNV r_)
{
  RESOLVE(PFNGLMULTITEXCOORD3HNVPROC, "glMultiTexCoord3hNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord3hNV\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD3HNVPROC)( target_, s_, t_, r_ );
}

static void __stdcall glMultiTexCoord3hvNVWrapper(GLenum target_, const GLhalfNV* v_)
{
  RESOLVE(PFNGLMULTITEXCOORD3HVNVPROC, "glMultiTexCoord3hvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord3hvNV\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD3HVNVPROC)( target_, v_ );
}

static void __stdcall glMultiTexCoord4hNVWrapper(GLenum target_, GLhalfNV s_, GLhalfNV t_, GLhalfNV r_, GLhalfNV q_)
{
  RESOLVE(PFNGLMULTITEXCOORD4HNVPROC, "glMultiTexCoord4hNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord4hNV\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD4HNVPROC)( target_, s_, t_, r_, q_ );
}

static void __stdcall glMultiTexCoord4hvNVWrapper(GLenum target_, const GLhalfNV* v_)
{
  RESOLVE(PFNGLMULTITEXCOORD4HVNVPROC, "glMultiTexCoord4hvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glMultiTexCoord4hvNV\n");
#endif
  RESOLVED_PROC(PFNGLMULTITEXCOORD4HVNVPROC)( target_, v_ );
}

static void __stdcall glVertexAttrib1hNVWrapper(GLuint index_, GLhalfNV x_)
{
  RESOLVE(PFNGLVERTEXATTRIB1HNVPROC, "glVertexAttrib1hNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib1hNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB1HNVPROC)( index_, x_ );
}

static void __stdcall glVertexAttrib1hvNVWrapper(GLuint index_, const GLhalfNV* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB1HVNVPROC, "glVertexAttrib1hvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib1hvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB1HVNVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib2hNVWrapper(GLuint index_, GLhalfNV x_, GLhalfNV y_)
{
  RESOLVE(PFNGLVERTEXATTRIB2HNVPROC, "glVertexAttrib2hNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib2hNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB2HNVPROC)( index_, x_, y_ );
}

static void __stdcall glVertexAttrib2hvNVWrapper(GLuint index_, const GLhalfNV* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB2HVNVPROC, "glVertexAttrib2hvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib2hvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB2HVNVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib3hNVWrapper(GLuint index_, GLhalfNV x_, GLhalfNV y_, GLhalfNV z_)
{
  RESOLVE(PFNGLVERTEXATTRIB3HNVPROC, "glVertexAttrib3hNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib3hNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB3HNVPROC)( index_, x_, y_, z_ );
}

static void __stdcall glVertexAttrib3hvNVWrapper(GLuint index_, const GLhalfNV* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB3HVNVPROC, "glVertexAttrib3hvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib3hvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB3HVNVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib4hNVWrapper(GLuint index_, GLhalfNV x_, GLhalfNV y_, GLhalfNV z_, GLhalfNV w_)
{
  RESOLVE(PFNGLVERTEXATTRIB4HNVPROC, "glVertexAttrib4hNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib4hNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB4HNVPROC)( index_, x_, y_, z_, w_ );
}

static void __stdcall glVertexAttrib4hvNVWrapper(GLuint index_, const GLhalfNV* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB4HVNVPROC, "glVertexAttrib4hvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib4hvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB4HVNVPROC)( index_, v_ );
}

static void __stdcall glVertexAttribs1hvNVWrapper(GLuint index_, GLsizei n_, const GLhalfNV* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBS1HVNVPROC, "glVertexAttribs1hvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribs1hvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBS1HVNVPROC)( index_, n_, v_ );
}

static void __stdcall glVertexAttribs2hvNVWrapper(GLuint index_, GLsizei n_, const GLhalfNV* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBS2HVNVPROC, "glVertexAttribs2hvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribs2hvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBS2HVNVPROC)( index_, n_, v_ );
}

static void __stdcall glVertexAttribs3hvNVWrapper(GLuint index_, GLsizei n_, const GLhalfNV* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBS3HVNVPROC, "glVertexAttribs3hvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribs3hvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBS3HVNVPROC)( index_, n_, v_ );
}

static void __stdcall glVertexAttribs4hvNVWrapper(GLuint index_, GLsizei n_, const GLhalfNV* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBS4HVNVPROC, "glVertexAttribs4hvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribs4hvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBS4HVNVPROC)( index_, n_, v_ );
}

static void __stdcall glFogCoordhNVWrapper(GLhalfNV fog_)
{
  RESOLVE(PFNGLFOGCOORDHNVPROC, "glFogCoordhNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFogCoordhNV\n");
#endif
  RESOLVED_PROC(PFNGLFOGCOORDHNVPROC)( fog_ );
}

static void __stdcall glFogCoordhvNVWrapper(const GLhalfNV* fog_)
{
  RESOLVE(PFNGLFOGCOORDHVNVPROC, "glFogCoordhvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFogCoordhvNV\n");
#endif
  RESOLVED_PROC(PFNGLFOGCOORDHVNVPROC)( fog_ );
}

static void __stdcall glSecondaryColor3hNVWrapper(GLhalfNV red_, GLhalfNV green_, GLhalfNV blue_)
{
  RESOLVE(PFNGLSECONDARYCOLOR3HNVPROC, "glSecondaryColor3hNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSecondaryColor3hNV\n");
#endif
  RESOLVED_PROC(PFNGLSECONDARYCOLOR3HNVPROC)( red_, green_, blue_ );
}

static void __stdcall glSecondaryColor3hvNVWrapper(const GLhalfNV* v_)
{
  RESOLVE(PFNGLSECONDARYCOLOR3HVNVPROC, "glSecondaryColor3hvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSecondaryColor3hvNV\n");
#endif
  RESOLVED_PROC(PFNGLSECONDARYCOLOR3HVNVPROC)( v_ );
}

/* No wrapper for glVertexWeighthNV, not in dispatch table */
/* No wrapper for glVertexWeighthvNV, not in dispatch table */
/* No wrapper for glGetInternalformatSampleivNV, not in dispatch table */
/* No wrapper for glGetMemoryObjectDetachedResourcesuivNV, not in dispatch table */
/* No wrapper for glResetMemoryObjectParameterNV, not in dispatch table */
/* No wrapper for glTexAttachMemoryNV, not in dispatch table */
/* No wrapper for glBufferAttachMemoryNV, not in dispatch table */
/* No wrapper for glTextureAttachMemoryNV, not in dispatch table */
/* No wrapper for glNamedBufferAttachMemoryNV, not in dispatch table */
/* No wrapper for glBufferPageCommitmentMemNV, not in dispatch table */
/* No wrapper for glTexPageCommitmentMemNV, not in dispatch table */
/* No wrapper for glNamedBufferPageCommitmentMemNV, not in dispatch table */
/* No wrapper for glTexturePageCommitmentMemNV, not in dispatch table */
/* No wrapper for glDrawMeshTasksNV, not in dispatch table */
/* No wrapper for glDrawMeshTasksIndirectNV, not in dispatch table */
/* No wrapper for glMultiDrawMeshTasksIndirectNV, not in dispatch table */
/* No wrapper for glMultiDrawMeshTasksIndirectCountNV, not in dispatch table */
/* No wrapper for glGenOcclusionQueriesNV, not in dispatch table */
/* No wrapper for glDeleteOcclusionQueriesNV, not in dispatch table */
/* No wrapper for glIsOcclusionQueryNV, not in dispatch table */
/* No wrapper for glBeginOcclusionQueryNV, not in dispatch table */
/* No wrapper for glEndOcclusionQueryNV, not in dispatch table */
/* No wrapper for glGetOcclusionQueryivNV, not in dispatch table */
/* No wrapper for glGetOcclusionQueryuivNV, not in dispatch table */
/* No wrapper for glProgramBufferParametersfvNV, not in dispatch table */
/* No wrapper for glProgramBufferParametersIivNV, not in dispatch table */
/* No wrapper for glProgramBufferParametersIuivNV, not in dispatch table */
/* No wrapper for glGenPathsNV, not in dispatch table */
/* No wrapper for glDeletePathsNV, not in dispatch table */
/* No wrapper for glIsPathNV, not in dispatch table */
/* No wrapper for glPathCommandsNV, not in dispatch table */
/* No wrapper for glPathCoordsNV, not in dispatch table */
/* No wrapper for glPathSubCommandsNV, not in dispatch table */
/* No wrapper for glPathSubCoordsNV, not in dispatch table */
/* No wrapper for glPathStringNV, not in dispatch table */
/* No wrapper for glPathGlyphsNV, not in dispatch table */
/* No wrapper for glPathGlyphRangeNV, not in dispatch table */
/* No wrapper for glWeightPathsNV, not in dispatch table */
/* No wrapper for glCopyPathNV, not in dispatch table */
/* No wrapper for glInterpolatePathsNV, not in dispatch table */
/* No wrapper for glTransformPathNV, not in dispatch table */
/* No wrapper for glPathParameterivNV, not in dispatch table */
/* No wrapper for glPathParameteriNV, not in dispatch table */
/* No wrapper for glPathParameterfvNV, not in dispatch table */
/* No wrapper for glPathParameterfNV, not in dispatch table */
/* No wrapper for glPathDashArrayNV, not in dispatch table */
/* No wrapper for glPathStencilFuncNV, not in dispatch table */
/* No wrapper for glPathStencilDepthOffsetNV, not in dispatch table */
/* No wrapper for glStencilFillPathNV, not in dispatch table */
/* No wrapper for glStencilStrokePathNV, not in dispatch table */
/* No wrapper for glStencilFillPathInstancedNV, not in dispatch table */
/* No wrapper for glStencilStrokePathInstancedNV, not in dispatch table */
/* No wrapper for glPathCoverDepthFuncNV, not in dispatch table */
/* No wrapper for glCoverFillPathNV, not in dispatch table */
/* No wrapper for glCoverStrokePathNV, not in dispatch table */
/* No wrapper for glCoverFillPathInstancedNV, not in dispatch table */
/* No wrapper for glCoverStrokePathInstancedNV, not in dispatch table */
/* No wrapper for glGetPathParameterivNV, not in dispatch table */
/* No wrapper for glGetPathParameterfvNV, not in dispatch table */
/* No wrapper for glGetPathCommandsNV, not in dispatch table */
/* No wrapper for glGetPathCoordsNV, not in dispatch table */
/* No wrapper for glGetPathDashArrayNV, not in dispatch table */
/* No wrapper for glGetPathMetricsNV, not in dispatch table */
/* No wrapper for glGetPathMetricRangeNV, not in dispatch table */
/* No wrapper for glGetPathSpacingNV, not in dispatch table */
/* No wrapper for glIsPointInFillPathNV, not in dispatch table */
/* No wrapper for glIsPointInStrokePathNV, not in dispatch table */
/* No wrapper for glGetPathLengthNV, not in dispatch table */
/* No wrapper for glPointAlongPathNV, not in dispatch table */
/* No wrapper for glMatrixLoad3x2fNV, not in dispatch table */
/* No wrapper for glMatrixLoad3x3fNV, not in dispatch table */
/* No wrapper for glMatrixLoadTranspose3x3fNV, not in dispatch table */
/* No wrapper for glMatrixMult3x2fNV, not in dispatch table */
/* No wrapper for glMatrixMult3x3fNV, not in dispatch table */
/* No wrapper for glMatrixMultTranspose3x3fNV, not in dispatch table */
/* No wrapper for glStencilThenCoverFillPathNV, not in dispatch table */
/* No wrapper for glStencilThenCoverStrokePathNV, not in dispatch table */
/* No wrapper for glStencilThenCoverFillPathInstancedNV, not in dispatch table */
/* No wrapper for glStencilThenCoverStrokePathInstancedNV, not in dispatch table */
/* No wrapper for glPathGlyphIndexRangeNV, not in dispatch table */
/* No wrapper for glPathGlyphIndexArrayNV, not in dispatch table */
/* No wrapper for glPathMemoryGlyphIndexArrayNV, not in dispatch table */
/* No wrapper for glProgramPathFragmentInputGenNV, not in dispatch table */
/* No wrapper for glGetProgramResourcefvNV, not in dispatch table */
/* No wrapper for glPathColorGenNV, not in dispatch table */
/* No wrapper for glPathTexGenNV, not in dispatch table */
/* No wrapper for glPathFogGenNV, not in dispatch table */
/* No wrapper for glGetPathColorGenivNV, not in dispatch table */
/* No wrapper for glGetPathColorGenfvNV, not in dispatch table */
/* No wrapper for glGetPathTexGenivNV, not in dispatch table */
/* No wrapper for glGetPathTexGenfvNV, not in dispatch table */
/* No wrapper for glPixelDataRangeNV, not in dispatch table */
/* No wrapper for glFlushPixelDataRangeNV, not in dispatch table */
/* No wrapper for glPointParameteriNV, not in dispatch table */
/* No wrapper for glPointParameterivNV, not in dispatch table */
/* No wrapper for glPresentFrameKeyedNV, not in dispatch table */
/* No wrapper for glPresentFrameDualFillNV, not in dispatch table */
/* No wrapper for glGetVideoivNV, not in dispatch table */
/* No wrapper for glGetVideouivNV, not in dispatch table */
/* No wrapper for glGetVideoi64vNV, not in dispatch table */
/* No wrapper for glGetVideoui64vNV, not in dispatch table */
static void __stdcall glPrimitiveRestartNVWrapper(void)
{
  RESOLVE(PFNGLPRIMITIVERESTARTNVPROC, "glPrimitiveRestartNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glPrimitiveRestartNV\n");
#endif
  RESOLVED_PROC(PFNGLPRIMITIVERESTARTNVPROC)(  );
}

/* No wrapper for glPrimitiveRestartIndexNV, not in dispatch table */
/* No wrapper for glQueryResourceNV, not in dispatch table */
/* No wrapper for glGenQueryResourceTagNV, not in dispatch table */
/* No wrapper for glDeleteQueryResourceTagNV, not in dispatch table */
/* No wrapper for glQueryResourceTagNV, not in dispatch table */
/* No wrapper for glCombinerParameterfvNV, not in dispatch table */
/* No wrapper for glCombinerParameterfNV, not in dispatch table */
/* No wrapper for glCombinerParameterivNV, not in dispatch table */
/* No wrapper for glCombinerParameteriNV, not in dispatch table */
/* No wrapper for glCombinerInputNV, not in dispatch table */
/* No wrapper for glCombinerOutputNV, not in dispatch table */
/* No wrapper for glFinalCombinerInputNV, not in dispatch table */
/* No wrapper for glGetCombinerInputParameterfvNV, not in dispatch table */
/* No wrapper for glGetCombinerInputParameterivNV, not in dispatch table */
/* No wrapper for glGetCombinerOutputParameterfvNV, not in dispatch table */
/* No wrapper for glGetCombinerOutputParameterivNV, not in dispatch table */
/* No wrapper for glGetFinalCombinerInputParameterfvNV, not in dispatch table */
/* No wrapper for glGetFinalCombinerInputParameterivNV, not in dispatch table */
/* No wrapper for glCombinerStageParameterfvNV, not in dispatch table */
/* No wrapper for glGetCombinerStageParameterfvNV, not in dispatch table */
/* No wrapper for glFramebufferSampleLocationsfvNV, not in dispatch table */
/* No wrapper for glNamedFramebufferSampleLocationsfvNV, not in dispatch table */
/* No wrapper for glResolveDepthValuesNV, not in dispatch table */
/* No wrapper for glScissorExclusiveNV, not in dispatch table */
/* No wrapper for glScissorExclusiveArrayvNV, not in dispatch table */
/* No wrapper for glMakeBufferResidentNV, not in dispatch table */
/* No wrapper for glMakeBufferNonResidentNV, not in dispatch table */
/* No wrapper for glIsBufferResidentNV, not in dispatch table */
/* No wrapper for glMakeNamedBufferResidentNV, not in dispatch table */
/* No wrapper for glMakeNamedBufferNonResidentNV, not in dispatch table */
/* No wrapper for glIsNamedBufferResidentNV, not in dispatch table */
/* No wrapper for glGetBufferParameterui64vNV, not in dispatch table */
/* No wrapper for glGetNamedBufferParameterui64vNV, not in dispatch table */
/* No wrapper for glGetIntegerui64vNV, not in dispatch table */
/* No wrapper for glUniformui64NV, not in dispatch table */
/* No wrapper for glUniformui64vNV, not in dispatch table */
/* No wrapper for glProgramUniformui64NV, not in dispatch table */
/* No wrapper for glProgramUniformui64vNV, not in dispatch table */
/* No wrapper for glBindShadingRateImageNV, not in dispatch table */
/* No wrapper for glGetShadingRateImagePaletteNV, not in dispatch table */
/* No wrapper for glGetShadingRateSampleLocationivNV, not in dispatch table */
/* No wrapper for glShadingRateImageBarrierNV, not in dispatch table */
/* No wrapper for glShadingRateImagePaletteNV, not in dispatch table */
/* No wrapper for glShadingRateSampleOrderNV, not in dispatch table */
/* No wrapper for glShadingRateSampleOrderCustomNV, not in dispatch table */
static void __stdcall glTextureBarrierNVWrapper(void)
{
  RESOLVE(PFNGLTEXTUREBARRIERNVPROC, "glTextureBarrierNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTextureBarrierNV\n");
#endif
  RESOLVED_PROC(PFNGLTEXTUREBARRIERNVPROC)(  );
}

/* No wrapper for glTexImage2DMultisampleCoverageNV, not in dispatch table */
/* No wrapper for glTexImage3DMultisampleCoverageNV, not in dispatch table */
/* No wrapper for glTextureImage2DMultisampleNV, not in dispatch table */
/* No wrapper for glTextureImage3DMultisampleNV, not in dispatch table */
/* No wrapper for glTextureImage2DMultisampleCoverageNV, not in dispatch table */
/* No wrapper for glTextureImage3DMultisampleCoverageNV, not in dispatch table */
/* No wrapper for glCreateSemaphoresNV, not in dispatch table */
/* No wrapper for glSemaphoreParameterivNV, not in dispatch table */
/* No wrapper for glGetSemaphoreParameterivNV, not in dispatch table */
/* No wrapper for glBeginTransformFeedbackNV, not in dispatch table */
/* No wrapper for glEndTransformFeedbackNV, not in dispatch table */
/* No wrapper for glTransformFeedbackAttribsNV, not in dispatch table */
/* No wrapper for glBindBufferRangeNV, not in dispatch table */
/* No wrapper for glBindBufferOffsetNV, not in dispatch table */
/* No wrapper for glBindBufferBaseNV, not in dispatch table */
/* No wrapper for glTransformFeedbackVaryingsNV, not in dispatch table */
/* No wrapper for glActiveVaryingNV, not in dispatch table */
/* No wrapper for glGetVaryingLocationNV, not in dispatch table */
/* No wrapper for glGetActiveVaryingNV, not in dispatch table */
/* No wrapper for glGetTransformFeedbackVaryingNV, not in dispatch table */
/* No wrapper for glTransformFeedbackStreamAttribsNV, not in dispatch table */
/* No wrapper for glBindTransformFeedbackNV, not in dispatch table */
/* No wrapper for glDeleteTransformFeedbacksNV, not in dispatch table */
/* No wrapper for glGenTransformFeedbacksNV, not in dispatch table */
/* No wrapper for glIsTransformFeedbackNV, not in dispatch table */
/* No wrapper for glPauseTransformFeedbackNV, not in dispatch table */
/* No wrapper for glResumeTransformFeedbackNV, not in dispatch table */
/* No wrapper for glDrawTransformFeedbackNV, not in dispatch table */
static void __stdcall glVDPAUInitNVWrapper(const void * vdpDevice_, const void * getProcAddress_)
{
  RESOLVE(PFNGLVDPAUINITNVPROC, "glVDPAUInitNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVDPAUInitNV\n");
#endif
  RESOLVED_PROC(PFNGLVDPAUINITNVPROC)( vdpDevice_, getProcAddress_ );
}

static void __stdcall glVDPAUFiniNVWrapper(void)
{
  RESOLVE(PFNGLVDPAUFININVPROC, "glVDPAUFiniNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVDPAUFiniNV\n");
#endif
  RESOLVED_PROC(PFNGLVDPAUFININVPROC)(  );
}

static GLvdpauSurfaceNV __stdcall glVDPAURegisterVideoSurfaceNVWrapper(const void * vdpSurface_, GLenum target_, GLsizei numTextureNames_, const GLuint* textureNames_)
{
  RESOLVE_RET(PFNGLVDPAUREGISTERVIDEOSURFACENVPROC, "glVDPAURegisterVideoSurfaceNV", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVDPAURegisterVideoSurfaceNV\n");
#endif
  return RESOLVED_PROC(PFNGLVDPAUREGISTERVIDEOSURFACENVPROC)( vdpSurface_, target_, numTextureNames_, textureNames_ );
}

static GLvdpauSurfaceNV __stdcall glVDPAURegisterOutputSurfaceNVWrapper(const void * vdpSurface_, GLenum target_, GLsizei numTextureNames_, const GLuint* textureNames_)
{
  RESOLVE_RET(PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC, "glVDPAURegisterOutputSurfaceNV", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVDPAURegisterOutputSurfaceNV\n");
#endif
  return RESOLVED_PROC(PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC)( vdpSurface_, target_, numTextureNames_, textureNames_ );
}

static GLboolean __stdcall glVDPAUIsSurfaceNVWrapper(GLvdpauSurfaceNV surface_)
{
  RESOLVE_RET(PFNGLVDPAUISSURFACENVPROC, "glVDPAUIsSurfaceNV", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVDPAUIsSurfaceNV\n");
#endif
  return RESOLVED_PROC(PFNGLVDPAUISSURFACENVPROC)( surface_ );
}

static void __stdcall glVDPAUUnregisterSurfaceNVWrapper(GLvdpauSurfaceNV surface_)
{
  RESOLVE(PFNGLVDPAUUNREGISTERSURFACENVPROC, "glVDPAUUnregisterSurfaceNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVDPAUUnregisterSurfaceNV\n");
#endif
  RESOLVED_PROC(PFNGLVDPAUUNREGISTERSURFACENVPROC)( surface_ );
}

static void __stdcall glVDPAUGetSurfaceivNVWrapper(GLvdpauSurfaceNV surface_, GLenum pname_, GLsizei count_, GLsizei* length_, GLint* values_)
{
  RESOLVE(PFNGLVDPAUGETSURFACEIVNVPROC, "glVDPAUGetSurfaceivNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVDPAUGetSurfaceivNV\n");
#endif
  RESOLVED_PROC(PFNGLVDPAUGETSURFACEIVNVPROC)( surface_, pname_, count_, length_, values_ );
}

static void __stdcall glVDPAUSurfaceAccessNVWrapper(GLvdpauSurfaceNV surface_, GLenum access_)
{
  RESOLVE(PFNGLVDPAUSURFACEACCESSNVPROC, "glVDPAUSurfaceAccessNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVDPAUSurfaceAccessNV\n");
#endif
  RESOLVED_PROC(PFNGLVDPAUSURFACEACCESSNVPROC)( surface_, access_ );
}

static void __stdcall glVDPAUMapSurfacesNVWrapper(GLsizei numSurfaces_, const GLvdpauSurfaceNV* surfaces_)
{
  RESOLVE(PFNGLVDPAUMAPSURFACESNVPROC, "glVDPAUMapSurfacesNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVDPAUMapSurfacesNV\n");
#endif
  RESOLVED_PROC(PFNGLVDPAUMAPSURFACESNVPROC)( numSurfaces_, surfaces_ );
}

static void __stdcall glVDPAUUnmapSurfacesNVWrapper(GLsizei numSurface_, const GLvdpauSurfaceNV* surfaces_)
{
  RESOLVE(PFNGLVDPAUUNMAPSURFACESNVPROC, "glVDPAUUnmapSurfacesNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVDPAUUnmapSurfacesNV\n");
#endif
  RESOLVED_PROC(PFNGLVDPAUUNMAPSURFACESNVPROC)( numSurface_, surfaces_ );
}

/* No wrapper for glVDPAURegisterVideoSurfaceWithPictureStructureNV, not in dispatch table */
/* No wrapper for glFlushVertexArrayRangeNV, not in dispatch table */
/* No wrapper for glVertexArrayRangeNV, not in dispatch table */
/* No wrapper for glVertexAttribL1i64NV, not in dispatch table */
/* No wrapper for glVertexAttribL2i64NV, not in dispatch table */
/* No wrapper for glVertexAttribL3i64NV, not in dispatch table */
/* No wrapper for glVertexAttribL4i64NV, not in dispatch table */
/* No wrapper for glVertexAttribL1i64vNV, not in dispatch table */
/* No wrapper for glVertexAttribL2i64vNV, not in dispatch table */
/* No wrapper for glVertexAttribL3i64vNV, not in dispatch table */
/* No wrapper for glVertexAttribL4i64vNV, not in dispatch table */
/* No wrapper for glVertexAttribL1ui64NV, not in dispatch table */
/* No wrapper for glVertexAttribL2ui64NV, not in dispatch table */
/* No wrapper for glVertexAttribL3ui64NV, not in dispatch table */
/* No wrapper for glVertexAttribL4ui64NV, not in dispatch table */
/* No wrapper for glVertexAttribL1ui64vNV, not in dispatch table */
/* No wrapper for glVertexAttribL2ui64vNV, not in dispatch table */
/* No wrapper for glVertexAttribL3ui64vNV, not in dispatch table */
/* No wrapper for glVertexAttribL4ui64vNV, not in dispatch table */
/* No wrapper for glGetVertexAttribLi64vNV, not in dispatch table */
/* No wrapper for glGetVertexAttribLui64vNV, not in dispatch table */
/* No wrapper for glVertexAttribLFormatNV, not in dispatch table */
/* No wrapper for glBufferAddressRangeNV, not in dispatch table */
/* No wrapper for glVertexFormatNV, not in dispatch table */
/* No wrapper for glNormalFormatNV, not in dispatch table */
/* No wrapper for glColorFormatNV, not in dispatch table */
/* No wrapper for glIndexFormatNV, not in dispatch table */
/* No wrapper for glTexCoordFormatNV, not in dispatch table */
/* No wrapper for glEdgeFlagFormatNV, not in dispatch table */
/* No wrapper for glSecondaryColorFormatNV, not in dispatch table */
/* No wrapper for glFogCoordFormatNV, not in dispatch table */
/* No wrapper for glVertexAttribFormatNV, not in dispatch table */
/* No wrapper for glVertexAttribIFormatNV, not in dispatch table */
/* No wrapper for glGetIntegerui64i_vNV, not in dispatch table */
static GLboolean __stdcall glAreProgramsResidentNVWrapper(GLsizei n_, const GLuint* programs_, GLboolean* residences_)
{
  RESOLVE_RET(PFNGLAREPROGRAMSRESIDENTNVPROC, "glAreProgramsResidentNV", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glAreProgramsResidentNV\n");
#endif
  return RESOLVED_PROC(PFNGLAREPROGRAMSRESIDENTNVPROC)( n_, programs_, residences_ );
}

/* No wrapper for glBindProgramNV, not in dispatch table */
/* No wrapper for glDeleteProgramsNV, not in dispatch table */
static void __stdcall glExecuteProgramNVWrapper(GLenum target_, GLuint id_, const GLfloat* params_)
{
  RESOLVE(PFNGLEXECUTEPROGRAMNVPROC, "glExecuteProgramNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glExecuteProgramNV\n");
#endif
  RESOLVED_PROC(PFNGLEXECUTEPROGRAMNVPROC)( target_, id_, params_ );
}

/* No wrapper for glGenProgramsNV, not in dispatch table */
static void __stdcall glGetProgramParameterdvNVWrapper(GLenum target_, GLuint index_, GLenum pname_, GLdouble* params_)
{
  RESOLVE(PFNGLGETPROGRAMPARAMETERDVNVPROC, "glGetProgramParameterdvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetProgramParameterdvNV\n");
#endif
  RESOLVED_PROC(PFNGLGETPROGRAMPARAMETERDVNVPROC)( target_, index_, pname_, params_ );
}

static void __stdcall glGetProgramParameterfvNVWrapper(GLenum target_, GLuint index_, GLenum pname_, GLfloat* params_)
{
  RESOLVE(PFNGLGETPROGRAMPARAMETERFVNVPROC, "glGetProgramParameterfvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetProgramParameterfvNV\n");
#endif
  RESOLVED_PROC(PFNGLGETPROGRAMPARAMETERFVNVPROC)( target_, index_, pname_, params_ );
}

static void __stdcall glGetProgramivNVWrapper(GLuint id_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETPROGRAMIVNVPROC, "glGetProgramivNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetProgramivNV\n");
#endif
  RESOLVED_PROC(PFNGLGETPROGRAMIVNVPROC)( id_, pname_, params_ );
}

static void __stdcall glGetProgramStringNVWrapper(GLuint id_, GLenum pname_, GLubyte* program_)
{
  RESOLVE(PFNGLGETPROGRAMSTRINGNVPROC, "glGetProgramStringNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetProgramStringNV\n");
#endif
  RESOLVED_PROC(PFNGLGETPROGRAMSTRINGNVPROC)( id_, pname_, program_ );
}

static void __stdcall glGetTrackMatrixivNVWrapper(GLenum target_, GLuint address_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETTRACKMATRIXIVNVPROC, "glGetTrackMatrixivNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetTrackMatrixivNV\n");
#endif
  RESOLVED_PROC(PFNGLGETTRACKMATRIXIVNVPROC)( target_, address_, pname_, params_ );
}

static void __stdcall glGetVertexAttribdvNVWrapper(GLuint index_, GLenum pname_, GLdouble* params_)
{
  RESOLVE(PFNGLGETVERTEXATTRIBDVNVPROC, "glGetVertexAttribdvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetVertexAttribdvNV\n");
#endif
  RESOLVED_PROC(PFNGLGETVERTEXATTRIBDVNVPROC)( index_, pname_, params_ );
}

static void __stdcall glGetVertexAttribfvNVWrapper(GLuint index_, GLenum pname_, GLfloat* params_)
{
  RESOLVE(PFNGLGETVERTEXATTRIBFVNVPROC, "glGetVertexAttribfvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetVertexAttribfvNV\n");
#endif
  RESOLVED_PROC(PFNGLGETVERTEXATTRIBFVNVPROC)( index_, pname_, params_ );
}

static void __stdcall glGetVertexAttribivNVWrapper(GLuint index_, GLenum pname_, GLint* params_)
{
  RESOLVE(PFNGLGETVERTEXATTRIBIVNVPROC, "glGetVertexAttribivNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glGetVertexAttribivNV\n");
#endif
  RESOLVED_PROC(PFNGLGETVERTEXATTRIBIVNVPROC)( index_, pname_, params_ );
}

/* No wrapper for glGetVertexAttribPointervNV, not in dispatch table */
/* No wrapper for glIsProgramNV, not in dispatch table */
static void __stdcall glLoadProgramNVWrapper(GLenum target_, GLuint id_, GLsizei len_, const GLubyte* program_)
{
  RESOLVE(PFNGLLOADPROGRAMNVPROC, "glLoadProgramNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glLoadProgramNV\n");
#endif
  RESOLVED_PROC(PFNGLLOADPROGRAMNVPROC)( target_, id_, len_, program_ );
}

/* No wrapper for glProgramParameter4dNV, not in dispatch table */
/* No wrapper for glProgramParameter4dvNV, not in dispatch table */
/* No wrapper for glProgramParameter4fNV, not in dispatch table */
/* No wrapper for glProgramParameter4fvNV, not in dispatch table */
static void __stdcall glProgramParameters4dvNVWrapper(GLenum target_, GLuint index_, GLsizei count_, const GLdouble* v_)
{
  RESOLVE(PFNGLPROGRAMPARAMETERS4DVNVPROC, "glProgramParameters4dvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramParameters4dvNV\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMPARAMETERS4DVNVPROC)( target_, index_, count_, v_ );
}

static void __stdcall glProgramParameters4fvNVWrapper(GLenum target_, GLuint index_, GLsizei count_, const GLfloat* v_)
{
  RESOLVE(PFNGLPROGRAMPARAMETERS4FVNVPROC, "glProgramParameters4fvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glProgramParameters4fvNV\n");
#endif
  RESOLVED_PROC(PFNGLPROGRAMPARAMETERS4FVNVPROC)( target_, index_, count_, v_ );
}

static void __stdcall glRequestResidentProgramsNVWrapper(GLsizei n_, const GLuint* programs_)
{
  RESOLVE(PFNGLREQUESTRESIDENTPROGRAMSNVPROC, "glRequestResidentProgramsNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glRequestResidentProgramsNV\n");
#endif
  RESOLVED_PROC(PFNGLREQUESTRESIDENTPROGRAMSNVPROC)( n_, programs_ );
}

static void __stdcall glTrackMatrixNVWrapper(GLenum target_, GLuint address_, GLenum matrix_, GLenum transform_)
{
  RESOLVE(PFNGLTRACKMATRIXNVPROC, "glTrackMatrixNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glTrackMatrixNV\n");
#endif
  RESOLVED_PROC(PFNGLTRACKMATRIXNVPROC)( target_, address_, matrix_, transform_ );
}

static void __stdcall glVertexAttribPointerNVWrapper(GLuint index_, GLint fsize_, GLenum type_, GLsizei stride_, const void * pointer_)
{
  RESOLVE(PFNGLVERTEXATTRIBPOINTERNVPROC, "glVertexAttribPointerNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribPointerNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBPOINTERNVPROC)( index_, fsize_, type_, stride_, pointer_ );
}

static void __stdcall glVertexAttrib1dNVWrapper(GLuint index_, GLdouble x_)
{
  RESOLVE(PFNGLVERTEXATTRIB1DNVPROC, "glVertexAttrib1dNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib1dNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB1DNVPROC)( index_, x_ );
}

static void __stdcall glVertexAttrib1dvNVWrapper(GLuint index_, const GLdouble* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB1DVNVPROC, "glVertexAttrib1dvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib1dvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB1DVNVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib1fNVWrapper(GLuint index_, GLfloat x_)
{
  RESOLVE(PFNGLVERTEXATTRIB1FNVPROC, "glVertexAttrib1fNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib1fNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB1FNVPROC)( index_, x_ );
}

static void __stdcall glVertexAttrib1fvNVWrapper(GLuint index_, const GLfloat* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB1FVNVPROC, "glVertexAttrib1fvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib1fvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB1FVNVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib1sNVWrapper(GLuint index_, GLshort x_)
{
  RESOLVE(PFNGLVERTEXATTRIB1SNVPROC, "glVertexAttrib1sNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib1sNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB1SNVPROC)( index_, x_ );
}

static void __stdcall glVertexAttrib1svNVWrapper(GLuint index_, const GLshort* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB1SVNVPROC, "glVertexAttrib1svNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib1svNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB1SVNVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib2dNVWrapper(GLuint index_, GLdouble x_, GLdouble y_)
{
  RESOLVE(PFNGLVERTEXATTRIB2DNVPROC, "glVertexAttrib2dNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib2dNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB2DNVPROC)( index_, x_, y_ );
}

static void __stdcall glVertexAttrib2dvNVWrapper(GLuint index_, const GLdouble* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB2DVNVPROC, "glVertexAttrib2dvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib2dvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB2DVNVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib2fNVWrapper(GLuint index_, GLfloat x_, GLfloat y_)
{
  RESOLVE(PFNGLVERTEXATTRIB2FNVPROC, "glVertexAttrib2fNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib2fNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB2FNVPROC)( index_, x_, y_ );
}

static void __stdcall glVertexAttrib2fvNVWrapper(GLuint index_, const GLfloat* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB2FVNVPROC, "glVertexAttrib2fvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib2fvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB2FVNVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib2sNVWrapper(GLuint index_, GLshort x_, GLshort y_)
{
  RESOLVE(PFNGLVERTEXATTRIB2SNVPROC, "glVertexAttrib2sNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib2sNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB2SNVPROC)( index_, x_, y_ );
}

static void __stdcall glVertexAttrib2svNVWrapper(GLuint index_, const GLshort* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB2SVNVPROC, "glVertexAttrib2svNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib2svNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB2SVNVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib3dNVWrapper(GLuint index_, GLdouble x_, GLdouble y_, GLdouble z_)
{
  RESOLVE(PFNGLVERTEXATTRIB3DNVPROC, "glVertexAttrib3dNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib3dNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB3DNVPROC)( index_, x_, y_, z_ );
}

static void __stdcall glVertexAttrib3dvNVWrapper(GLuint index_, const GLdouble* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB3DVNVPROC, "glVertexAttrib3dvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib3dvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB3DVNVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib3fNVWrapper(GLuint index_, GLfloat x_, GLfloat y_, GLfloat z_)
{
  RESOLVE(PFNGLVERTEXATTRIB3FNVPROC, "glVertexAttrib3fNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib3fNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB3FNVPROC)( index_, x_, y_, z_ );
}

static void __stdcall glVertexAttrib3fvNVWrapper(GLuint index_, const GLfloat* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB3FVNVPROC, "glVertexAttrib3fvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib3fvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB3FVNVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib3sNVWrapper(GLuint index_, GLshort x_, GLshort y_, GLshort z_)
{
  RESOLVE(PFNGLVERTEXATTRIB3SNVPROC, "glVertexAttrib3sNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib3sNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB3SNVPROC)( index_, x_, y_, z_ );
}

static void __stdcall glVertexAttrib3svNVWrapper(GLuint index_, const GLshort* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB3SVNVPROC, "glVertexAttrib3svNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib3svNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB3SVNVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib4dNVWrapper(GLuint index_, GLdouble x_, GLdouble y_, GLdouble z_, GLdouble w_)
{
  RESOLVE(PFNGLVERTEXATTRIB4DNVPROC, "glVertexAttrib4dNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib4dNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB4DNVPROC)( index_, x_, y_, z_, w_ );
}

static void __stdcall glVertexAttrib4dvNVWrapper(GLuint index_, const GLdouble* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB4DVNVPROC, "glVertexAttrib4dvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib4dvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB4DVNVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib4fNVWrapper(GLuint index_, GLfloat x_, GLfloat y_, GLfloat z_, GLfloat w_)
{
  RESOLVE(PFNGLVERTEXATTRIB4FNVPROC, "glVertexAttrib4fNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib4fNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB4FNVPROC)( index_, x_, y_, z_, w_ );
}

static void __stdcall glVertexAttrib4fvNVWrapper(GLuint index_, const GLfloat* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB4FVNVPROC, "glVertexAttrib4fvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib4fvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB4FVNVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib4sNVWrapper(GLuint index_, GLshort x_, GLshort y_, GLshort z_, GLshort w_)
{
  RESOLVE(PFNGLVERTEXATTRIB4SNVPROC, "glVertexAttrib4sNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib4sNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB4SNVPROC)( index_, x_, y_, z_, w_ );
}

static void __stdcall glVertexAttrib4svNVWrapper(GLuint index_, const GLshort* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB4SVNVPROC, "glVertexAttrib4svNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib4svNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB4SVNVPROC)( index_, v_ );
}

static void __stdcall glVertexAttrib4ubNVWrapper(GLuint index_, GLubyte x_, GLubyte y_, GLubyte z_, GLubyte w_)
{
  RESOLVE(PFNGLVERTEXATTRIB4UBNVPROC, "glVertexAttrib4ubNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib4ubNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB4UBNVPROC)( index_, x_, y_, z_, w_ );
}

static void __stdcall glVertexAttrib4ubvNVWrapper(GLuint index_, const GLubyte* v_)
{
  RESOLVE(PFNGLVERTEXATTRIB4UBVNVPROC, "glVertexAttrib4ubvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttrib4ubvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIB4UBVNVPROC)( index_, v_ );
}

static void __stdcall glVertexAttribs1dvNVWrapper(GLuint index_, GLsizei count_, const GLdouble* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBS1DVNVPROC, "glVertexAttribs1dvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribs1dvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBS1DVNVPROC)( index_, count_, v_ );
}

static void __stdcall glVertexAttribs1fvNVWrapper(GLuint index_, GLsizei count_, const GLfloat* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBS1FVNVPROC, "glVertexAttribs1fvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribs1fvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBS1FVNVPROC)( index_, count_, v_ );
}

static void __stdcall glVertexAttribs1svNVWrapper(GLuint index_, GLsizei count_, const GLshort* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBS1SVNVPROC, "glVertexAttribs1svNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribs1svNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBS1SVNVPROC)( index_, count_, v_ );
}

static void __stdcall glVertexAttribs2dvNVWrapper(GLuint index_, GLsizei count_, const GLdouble* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBS2DVNVPROC, "glVertexAttribs2dvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribs2dvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBS2DVNVPROC)( index_, count_, v_ );
}

static void __stdcall glVertexAttribs2fvNVWrapper(GLuint index_, GLsizei count_, const GLfloat* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBS2FVNVPROC, "glVertexAttribs2fvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribs2fvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBS2FVNVPROC)( index_, count_, v_ );
}

static void __stdcall glVertexAttribs2svNVWrapper(GLuint index_, GLsizei count_, const GLshort* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBS2SVNVPROC, "glVertexAttribs2svNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribs2svNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBS2SVNVPROC)( index_, count_, v_ );
}

static void __stdcall glVertexAttribs3dvNVWrapper(GLuint index_, GLsizei count_, const GLdouble* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBS3DVNVPROC, "glVertexAttribs3dvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribs3dvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBS3DVNVPROC)( index_, count_, v_ );
}

static void __stdcall glVertexAttribs3fvNVWrapper(GLuint index_, GLsizei count_, const GLfloat* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBS3FVNVPROC, "glVertexAttribs3fvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribs3fvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBS3FVNVPROC)( index_, count_, v_ );
}

static void __stdcall glVertexAttribs3svNVWrapper(GLuint index_, GLsizei count_, const GLshort* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBS3SVNVPROC, "glVertexAttribs3svNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribs3svNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBS3SVNVPROC)( index_, count_, v_ );
}

static void __stdcall glVertexAttribs4dvNVWrapper(GLuint index_, GLsizei count_, const GLdouble* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBS4DVNVPROC, "glVertexAttribs4dvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribs4dvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBS4DVNVPROC)( index_, count_, v_ );
}

static void __stdcall glVertexAttribs4fvNVWrapper(GLuint index_, GLsizei count_, const GLfloat* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBS4FVNVPROC, "glVertexAttribs4fvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribs4fvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBS4FVNVPROC)( index_, count_, v_ );
}

static void __stdcall glVertexAttribs4svNVWrapper(GLuint index_, GLsizei count_, const GLshort* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBS4SVNVPROC, "glVertexAttribs4svNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribs4svNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBS4SVNVPROC)( index_, count_, v_ );
}

static void __stdcall glVertexAttribs4ubvNVWrapper(GLuint index_, GLsizei count_, const GLubyte* v_)
{
  RESOLVE(PFNGLVERTEXATTRIBS4UBVNVPROC, "glVertexAttribs4ubvNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glVertexAttribs4ubvNV\n");
#endif
  RESOLVED_PROC(PFNGLVERTEXATTRIBS4UBVNVPROC)( index_, count_, v_ );
}

/* No wrapper for glBeginVideoCaptureNV, not in dispatch table */
/* No wrapper for glBindVideoCaptureStreamBufferNV, not in dispatch table */
/* No wrapper for glBindVideoCaptureStreamTextureNV, not in dispatch table */
/* No wrapper for glEndVideoCaptureNV, not in dispatch table */
/* No wrapper for glGetVideoCaptureivNV, not in dispatch table */
/* No wrapper for glGetVideoCaptureStreamivNV, not in dispatch table */
/* No wrapper for glGetVideoCaptureStreamfvNV, not in dispatch table */
/* No wrapper for glGetVideoCaptureStreamdvNV, not in dispatch table */
/* No wrapper for glVideoCaptureNV, not in dispatch table */
/* No wrapper for glVideoCaptureStreamParameterivNV, not in dispatch table */
/* No wrapper for glVideoCaptureStreamParameterfvNV, not in dispatch table */
/* No wrapper for glVideoCaptureStreamParameterdvNV, not in dispatch table */
static void __stdcall glViewportSwizzleNVWrapper(GLuint index_, GLenum swizzlex_, GLenum swizzley_, GLenum swizzlez_, GLenum swizzlew_)
{
  RESOLVE(PFNGLVIEWPORTSWIZZLENVPROC, "glViewportSwizzleNV");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glViewportSwizzleNV\n");
#endif
  RESOLVED_PROC(PFNGLVIEWPORTSWIZZLENVPROC)( index_, swizzlex_, swizzley_, swizzlez_, swizzlew_ );
}

static void __stdcall glFramebufferTextureMultiviewOVRWrapper(GLenum target_, GLenum attachment_, GLuint texture_, GLint level_, GLint baseViewIndex_, GLsizei numViews_)
{
  RESOLVE(PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC, "glFramebufferTextureMultiviewOVR");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glFramebufferTextureMultiviewOVR\n");
#endif
  RESOLVED_PROC(PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC)( target_, attachment_, texture_, level_, baseViewIndex_, numViews_ );
}

static void __stdcall glNamedFramebufferTextureMultiviewOVRWrapper(GLuint framebuffer_, GLenum attachment_, GLuint texture_, GLint level_, GLint baseViewIndex_, GLsizei numViews_)
{
  RESOLVE(PFNGLNAMEDFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC, "glNamedFramebufferTextureMultiviewOVR");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glNamedFramebufferTextureMultiviewOVR\n");
#endif
  RESOLVED_PROC(PFNGLNAMEDFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC)( framebuffer_, attachment_, texture_, level_, baseViewIndex_, numViews_ );
}

/* No wrapper for glHintPGI, not in dispatch table */
/* No wrapper for glDetailTexFuncSGIS, not in dispatch table */
/* No wrapper for glGetDetailTexFuncSGIS, not in dispatch table */
/* No wrapper for glFogFuncSGIS, not in dispatch table */
/* No wrapper for glGetFogFuncSGIS, not in dispatch table */
static void __stdcall glSampleMaskSGISWrapper(GLclampf value_, GLboolean invert_)
{
  RESOLVE(PFNGLSAMPLEMASKSGISPROC, "glSampleMaskSGIS");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSampleMaskSGIS\n");
#endif
  RESOLVED_PROC(PFNGLSAMPLEMASKSGISPROC)( value_, invert_ );
}

static void __stdcall glSamplePatternSGISWrapper(GLenum pattern_)
{
  RESOLVE(PFNGLSAMPLEPATTERNSGISPROC, "glSamplePatternSGIS");
#ifdef _DEBUG
  if (glxWinDebugSettings.enableGLcallTrace) ErrorF("glSamplePatternSGIS\n");
#endif
  RESOLVED_PROC(PFNGLSAMPLEPATTERNSGISPROC)( pattern_ );
}

/* No wrapper for glPixelTexGenParameteriSGIS, not in dispatch table */
/* No wrapper for glPixelTexGenParameterivSGIS, not in dispatch table */
/* No wrapper for glPixelTexGenParameterfSGIS, not in dispatch table */
/* No wrapper for glPixelTexGenParameterfvSGIS, not in dispatch table */
/* No wrapper for glGetPixelTexGenParameterivSGIS, not in dispatch table */
/* No wrapper for glGetPixelTexGenParameterfvSGIS, not in dispatch table */
/* No wrapper for glPointParameterfSGIS, not in dispatch table */
/* No wrapper for glPointParameterfvSGIS, not in dispatch table */
/* No wrapper for glSharpenTexFuncSGIS, not in dispatch table */
/* No wrapper for glGetSharpenTexFuncSGIS, not in dispatch table */
/* No wrapper for glTexImage4DSGIS, not in dispatch table */
/* No wrapper for glTexSubImage4DSGIS, not in dispatch table */
/* No wrapper for glTextureColorMaskSGIS, not in dispatch table */
/* No wrapper for glGetTexFilterFuncSGIS, not in dispatch table */
/* No wrapper for glTexFilterFuncSGIS, not in dispatch table */
/* No wrapper for glAsyncMarkerSGIX, not in dispatch table */
/* No wrapper for glFinishAsyncSGIX, not in dispatch table */
/* No wrapper for glPollAsyncSGIX, not in dispatch table */
/* No wrapper for glGenAsyncMarkersSGIX, not in dispatch table */
/* No wrapper for glDeleteAsyncMarkersSGIX, not in dispatch table */
/* No wrapper for glIsAsyncMarkerSGIX, not in dispatch table */
/* No wrapper for glFlushRasterSGIX, not in dispatch table */
/* No wrapper for glFragmentColorMaterialSGIX, not in dispatch table */
/* No wrapper for glFragmentLightfSGIX, not in dispatch table */
/* No wrapper for glFragmentLightfvSGIX, not in dispatch table */
/* No wrapper for glFragmentLightiSGIX, not in dispatch table */
/* No wrapper for glFragmentLightivSGIX, not in dispatch table */
/* No wrapper for glFragmentLightModelfSGIX, not in dispatch table */
/* No wrapper for glFragmentLightModelfvSGIX, not in dispatch table */
/* No wrapper for glFragmentLightModeliSGIX, not in dispatch table */
/* No wrapper for glFragmentLightModelivSGIX, not in dispatch table */
/* No wrapper for glFragmentMaterialfSGIX, not in dispatch table */
/* No wrapper for glFragmentMaterialfvSGIX, not in dispatch table */
/* No wrapper for glFragmentMaterialiSGIX, not in dispatch table */
/* No wrapper for glFragmentMaterialivSGIX, not in dispatch table */
/* No wrapper for glGetFragmentLightfvSGIX, not in dispatch table */
/* No wrapper for glGetFragmentLightivSGIX, not in dispatch table */
/* No wrapper for glGetFragmentMaterialfvSGIX, not in dispatch table */
/* No wrapper for glGetFragmentMaterialivSGIX, not in dispatch table */
/* No wrapper for glLightEnviSGIX, not in dispatch table */
/* No wrapper for glFrameZoomSGIX, not in dispatch table */
/* No wrapper for glIglooInterfaceSGIX, not in dispatch table */
/* No wrapper for glGetInstrumentsSGIX, not in dispatch table */
/* No wrapper for glInstrumentsBufferSGIX, not in dispatch table */
/* No wrapper for glPollInstrumentsSGIX, not in dispatch table */
/* No wrapper for glReadInstrumentsSGIX, not in dispatch table */
/* No wrapper for glStartInstrumentsSGIX, not in dispatch table */
/* No wrapper for glStopInstrumentsSGIX, not in dispatch table */
/* No wrapper for glGetListParameterfvSGIX, not in dispatch table */
/* No wrapper for glGetListParameterivSGIX, not in dispatch table */
/* No wrapper for glListParameterfSGIX, not in dispatch table */
/* No wrapper for glListParameterfvSGIX, not in dispatch table */
/* No wrapper for glListParameteriSGIX, not in dispatch table */
/* No wrapper for glListParameterivSGIX, not in dispatch table */
/* No wrapper for glPixelTexGenSGIX, not in dispatch table */
/* No wrapper for glDeformationMap3dSGIX, not in dispatch table */
/* No wrapper for glDeformationMap3fSGIX, not in dispatch table */
/* No wrapper for glDeformSGIX, not in dispatch table */
/* No wrapper for glLoadIdentityDeformationMapSGIX, not in dispatch table */
/* No wrapper for glReferencePlaneSGIX, not in dispatch table */
/* No wrapper for glSpriteParameterfSGIX, not in dispatch table */
/* No wrapper for glSpriteParameterfvSGIX, not in dispatch table */
/* No wrapper for glSpriteParameteriSGIX, not in dispatch table */
/* No wrapper for glSpriteParameterivSGIX, not in dispatch table */
/* No wrapper for glTagSampleBufferSGIX, not in dispatch table */
/* No wrapper for glColorTableSGI, not in dispatch table */
/* No wrapper for glColorTableParameterfvSGI, not in dispatch table */
/* No wrapper for glColorTableParameterivSGI, not in dispatch table */
/* No wrapper for glCopyColorTableSGI, not in dispatch table */
/* No wrapper for glGetColorTableSGI, not in dispatch table */
/* No wrapper for glGetColorTableParameterfvSGI, not in dispatch table */
/* No wrapper for glGetColorTableParameterivSGI, not in dispatch table */
/* No wrapper for glFinishTextureSUNX, not in dispatch table */
/* No wrapper for glGlobalAlphaFactorbSUN, not in dispatch table */
/* No wrapper for glGlobalAlphaFactorsSUN, not in dispatch table */
/* No wrapper for glGlobalAlphaFactoriSUN, not in dispatch table */
/* No wrapper for glGlobalAlphaFactorfSUN, not in dispatch table */
/* No wrapper for glGlobalAlphaFactordSUN, not in dispatch table */
/* No wrapper for glGlobalAlphaFactorubSUN, not in dispatch table */
/* No wrapper for glGlobalAlphaFactorusSUN, not in dispatch table */
/* No wrapper for glGlobalAlphaFactoruiSUN, not in dispatch table */
/* No wrapper for glDrawMeshArraysSUN, not in dispatch table */
/* No wrapper for glReplacementCodeuiSUN, not in dispatch table */
/* No wrapper for glReplacementCodeusSUN, not in dispatch table */
/* No wrapper for glReplacementCodeubSUN, not in dispatch table */
/* No wrapper for glReplacementCodeuivSUN, not in dispatch table */
/* No wrapper for glReplacementCodeusvSUN, not in dispatch table */
/* No wrapper for glReplacementCodeubvSUN, not in dispatch table */
/* No wrapper for glReplacementCodePointerSUN, not in dispatch table */
/* No wrapper for glColor4ubVertex2fSUN, not in dispatch table */
/* No wrapper for glColor4ubVertex2fvSUN, not in dispatch table */
/* No wrapper for glColor4ubVertex3fSUN, not in dispatch table */
/* No wrapper for glColor4ubVertex3fvSUN, not in dispatch table */
/* No wrapper for glColor3fVertex3fSUN, not in dispatch table */
/* No wrapper for glColor3fVertex3fvSUN, not in dispatch table */
/* No wrapper for glNormal3fVertex3fSUN, not in dispatch table */
/* No wrapper for glNormal3fVertex3fvSUN, not in dispatch table */
/* No wrapper for glColor4fNormal3fVertex3fSUN, not in dispatch table */
/* No wrapper for glColor4fNormal3fVertex3fvSUN, not in dispatch table */
/* No wrapper for glTexCoord2fVertex3fSUN, not in dispatch table */
/* No wrapper for glTexCoord2fVertex3fvSUN, not in dispatch table */
/* No wrapper for glTexCoord4fVertex4fSUN, not in dispatch table */
/* No wrapper for glTexCoord4fVertex4fvSUN, not in dispatch table */
/* No wrapper for glTexCoord2fColor4ubVertex3fSUN, not in dispatch table */
/* No wrapper for glTexCoord2fColor4ubVertex3fvSUN, not in dispatch table */
/* No wrapper for glTexCoord2fColor3fVertex3fSUN, not in dispatch table */
/* No wrapper for glTexCoord2fColor3fVertex3fvSUN, not in dispatch table */
/* No wrapper for glTexCoord2fNormal3fVertex3fSUN, not in dispatch table */
/* No wrapper for glTexCoord2fNormal3fVertex3fvSUN, not in dispatch table */
/* No wrapper for glTexCoord2fColor4fNormal3fVertex3fSUN, not in dispatch table */
/* No wrapper for glTexCoord2fColor4fNormal3fVertex3fvSUN, not in dispatch table */
/* No wrapper for glTexCoord4fColor4fNormal3fVertex4fSUN, not in dispatch table */
/* No wrapper for glTexCoord4fColor4fNormal3fVertex4fvSUN, not in dispatch table */
/* No wrapper for glReplacementCodeuiVertex3fSUN, not in dispatch table */
/* No wrapper for glReplacementCodeuiVertex3fvSUN, not in dispatch table */
/* No wrapper for glReplacementCodeuiColor4ubVertex3fSUN, not in dispatch table */
/* No wrapper for glReplacementCodeuiColor4ubVertex3fvSUN, not in dispatch table */
/* No wrapper for glReplacementCodeuiColor3fVertex3fSUN, not in dispatch table */
/* No wrapper for glReplacementCodeuiColor3fVertex3fvSUN, not in dispatch table */
/* No wrapper for glReplacementCodeuiNormal3fVertex3fSUN, not in dispatch table */
/* No wrapper for glReplacementCodeuiNormal3fVertex3fvSUN, not in dispatch table */
/* No wrapper for glReplacementCodeuiColor4fNormal3fVertex3fSUN, not in dispatch table */
/* No wrapper for glReplacementCodeuiColor4fNormal3fVertex3fvSUN, not in dispatch table */
/* No wrapper for glReplacementCodeuiTexCoord2fVertex3fSUN, not in dispatch table */
/* No wrapper for glReplacementCodeuiTexCoord2fVertex3fvSUN, not in dispatch table */
/* No wrapper for glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN, not in dispatch table */
/* No wrapper for glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN, not in dispatch table */
/* No wrapper for glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN, not in dispatch table */
/* No wrapper for glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN, not in dispatch table */
void glWinSetupDispatchTable(void)
{
  struct _glapi_table *disp = _mesa_glapi_get_dispatch();
  SET_Accum(disp, (void *)glAccumWrapper);
  SET_ActiveProgramEXT(disp, (void *)glActiveProgramEXTWrapper);
  SET_ActiveShaderProgram(disp, (void *)glActiveShaderProgramWrapper);
  SET_ActiveStencilFaceEXT(disp, (void *)glActiveStencilFaceEXTWrapper);
  SET_ActiveTexture(disp, (void *)glActiveTextureWrapper);
  SET_AlphaFragmentOp1ATI(disp, (void *)glAlphaFragmentOp1ATIWrapper);
  SET_AlphaFragmentOp2ATI(disp, (void *)glAlphaFragmentOp2ATIWrapper);
  SET_AlphaFragmentOp3ATI(disp, (void *)glAlphaFragmentOp3ATIWrapper);
  SET_AlphaFunc(disp, (void *)glAlphaFuncWrapper);
  SET_AlphaToCoverageDitherControlNV(disp, (void *)glAlphaToCoverageDitherControlNVWrapper);
  SET_AreProgramsResidentNV(disp, (void *)glAreProgramsResidentNVWrapper);
  SET_AreTexturesResident(disp, (void *)glAreTexturesResidentWrapper);
  SET_ArrayElement(disp, (void *)glArrayElementWrapper);
  SET_AttachObjectARB(disp, (void *)glAttachObjectARBWrapper);
  SET_AttachShader(disp, (void *)glAttachShaderWrapper);
  SET_Begin(disp, (void *)glBeginWrapper);
  SET_BeginConditionalRender(disp, (void *)glBeginConditionalRenderWrapper);
  SET_BeginFragmentShaderATI(disp, (void *)glBeginFragmentShaderATIWrapper);
  SET_BeginPerfMonitorAMD(disp, (void *)glBeginPerfMonitorAMDWrapper);
  SET_BeginPerfQueryINTEL(disp, (void *)glBeginPerfQueryINTELWrapper);
  SET_BeginQuery(disp, (void *)glBeginQueryWrapper);
  SET_BeginQueryIndexed(disp, (void *)glBeginQueryIndexedWrapper);
  SET_BeginTransformFeedback(disp, (void *)glBeginTransformFeedbackWrapper);
  SET_BindAttribLocation(disp, (void *)glBindAttribLocationWrapper);
  SET_BindBuffer(disp, (void *)glBindBufferWrapper);
  SET_BindBufferBase(disp, (void *)glBindBufferBaseWrapper);
  SET_BindBufferOffsetEXT(disp, (void *)glBindBufferOffsetEXTWrapper);
  SET_BindBufferRange(disp, (void *)glBindBufferRangeWrapper);
  SET_BindBuffersBase(disp, (void *)glBindBuffersBaseWrapper);
  SET_BindBuffersRange(disp, (void *)glBindBuffersRangeWrapper);
  SET_BindFragDataLocation(disp, (void *)glBindFragDataLocationWrapper);
  SET_BindFragDataLocationIndexed(disp, (void *)glBindFragDataLocationIndexedWrapper);
  SET_BindFragmentShaderATI(disp, (void *)glBindFragmentShaderATIWrapper);
  SET_BindFramebuffer(disp, (void *)glBindFramebufferWrapper);
  SET_BindFramebufferEXT(disp, (void *)glBindFramebufferEXTWrapper);
  SET_BindImageTexture(disp, (void *)glBindImageTextureWrapper);
  SET_BindImageTextureEXT(disp, (void *)glBindImageTextureEXTWrapper);
  SET_BindImageTextures(disp, (void *)glBindImageTexturesWrapper);
  SET_BindMultiTextureEXT(disp, (void *)glBindMultiTextureEXTWrapper);
  SET_BindProgramARB(disp, (void *)glBindProgramARBWrapper);
  SET_BindProgramPipeline(disp, (void *)glBindProgramPipelineWrapper);
  SET_BindRenderbuffer(disp, (void *)glBindRenderbufferWrapper);
  SET_BindRenderbufferEXT(disp, (void *)glBindRenderbufferEXTWrapper);
  SET_BindSampler(disp, (void *)glBindSamplerWrapper);
  SET_BindSamplers(disp, (void *)glBindSamplersWrapper);
  SET_BindTexture(disp, (void *)glBindTextureWrapper);
  SET_BindTextureUnit(disp, (void *)glBindTextureUnitWrapper);
  SET_BindTextures(disp, (void *)glBindTexturesWrapper);
  SET_BindTransformFeedback(disp, (void *)glBindTransformFeedbackWrapper);
  SET_BindVertexArray(disp, (void *)glBindVertexArrayWrapper);
  SET_BindVertexBuffer(disp, (void *)glBindVertexBufferWrapper);
  SET_BindVertexBuffers(disp, (void *)glBindVertexBuffersWrapper);
  SET_Bitmap(disp, (void *)glBitmapWrapper);
  SET_BlendColor(disp, (void *)glBlendColorWrapper);
  SET_BlendEquation(disp, (void *)glBlendEquationWrapper);
  SET_BlendEquationSeparate(disp, (void *)glBlendEquationSeparateWrapper);
  SET_BlendEquationSeparateiARB(disp, (void *)glBlendEquationSeparateiARBWrapper);
  SET_BlendEquationiARB(disp, (void *)glBlendEquationiARBWrapper);
  SET_BlendFunc(disp, (void *)glBlendFuncWrapper);
  SET_BlendFuncSeparate(disp, (void *)glBlendFuncSeparateWrapper);
  SET_BlendFuncSeparateiARB(disp, (void *)glBlendFuncSeparateiARBWrapper);
  SET_BlendFunciARB(disp, (void *)glBlendFunciARBWrapper);
  SET_BlitFramebuffer(disp, (void *)glBlitFramebufferWrapper);
  SET_BlitNamedFramebuffer(disp, (void *)glBlitNamedFramebufferWrapper);
  SET_BufferData(disp, (void *)glBufferDataWrapper);
  SET_BufferPageCommitmentARB(disp, (void *)glBufferPageCommitmentARBWrapper);
  SET_BufferParameteriAPPLE(disp, (void *)glBufferParameteriAPPLEWrapper);
  SET_BufferStorage(disp, (void *)glBufferStorageWrapper);
  SET_BufferStorageMemEXT(disp, (void *)glBufferStorageMemEXTWrapper);
  SET_BufferSubData(disp, (void *)glBufferSubDataWrapper);
  SET_CallList(disp, (void *)glCallListWrapper);
  SET_CallLists(disp, (void *)glCallListsWrapper);
  SET_CheckFramebufferStatus(disp, (void *)glCheckFramebufferStatusWrapper);
  SET_CheckNamedFramebufferStatus(disp, (void *)glCheckNamedFramebufferStatusWrapper);
  SET_CheckNamedFramebufferStatusEXT(disp, (void *)glCheckNamedFramebufferStatusEXTWrapper);
  SET_ClampColor(disp, (void *)glClampColorWrapper);
  SET_Clear(disp, (void *)glClearWrapper);
  SET_ClearAccum(disp, (void *)glClearAccumWrapper);
  SET_ClearBufferData(disp, (void *)glClearBufferDataWrapper);
  SET_ClearBufferSubData(disp, (void *)glClearBufferSubDataWrapper);
  SET_ClearBufferfi(disp, (void *)glClearBufferfiWrapper);
  SET_ClearBufferfv(disp, (void *)glClearBufferfvWrapper);
  SET_ClearBufferiv(disp, (void *)glClearBufferivWrapper);
  SET_ClearBufferuiv(disp, (void *)glClearBufferuivWrapper);
  SET_ClearColor(disp, (void *)glClearColorWrapper);
  SET_ClearColorIiEXT(disp, (void *)glClearColorIiEXTWrapper);
  SET_ClearColorIuiEXT(disp, (void *)glClearColorIuiEXTWrapper);
  SET_ClearDepth(disp, (void *)glClearDepthWrapper);
  SET_ClearDepthf(disp, (void *)glClearDepthfWrapper);
  SET_ClearIndex(disp, (void *)glClearIndexWrapper);
  SET_ClearNamedBufferData(disp, (void *)glClearNamedBufferDataWrapper);
  SET_ClearNamedBufferDataEXT(disp, (void *)glClearNamedBufferDataEXTWrapper);
  SET_ClearNamedBufferSubData(disp, (void *)glClearNamedBufferSubDataWrapper);
  SET_ClearNamedBufferSubDataEXT(disp, (void *)glClearNamedBufferSubDataEXTWrapper);
  SET_ClearNamedFramebufferfi(disp, (void *)glClearNamedFramebufferfiWrapper);
  SET_ClearNamedFramebufferfv(disp, (void *)glClearNamedFramebufferfvWrapper);
  SET_ClearNamedFramebufferiv(disp, (void *)glClearNamedFramebufferivWrapper);
  SET_ClearNamedFramebufferuiv(disp, (void *)glClearNamedFramebufferuivWrapper);
  SET_ClearStencil(disp, (void *)glClearStencilWrapper);
  SET_ClearTexImage(disp, (void *)glClearTexImageWrapper);
  SET_ClearTexSubImage(disp, (void *)glClearTexSubImageWrapper);
  SET_ClientActiveTexture(disp, (void *)glClientActiveTextureWrapper);
  SET_ClientAttribDefaultEXT(disp, (void *)glClientAttribDefaultEXTWrapper);
  SET_ClientWaitSync(disp, (void *)glClientWaitSyncWrapper);
  SET_ClipControl(disp, (void *)glClipControlWrapper);
  SET_ClipPlane(disp, (void *)glClipPlaneWrapper);
  SET_Color3b(disp, (void *)glColor3bWrapper);
  SET_Color3bv(disp, (void *)glColor3bvWrapper);
  SET_Color3d(disp, (void *)glColor3dWrapper);
  SET_Color3dv(disp, (void *)glColor3dvWrapper);
  SET_Color3f(disp, (void *)glColor3fWrapper);
  SET_Color3fv(disp, (void *)glColor3fvWrapper);
  SET_Color3hNV(disp, (void *)glColor3hNVWrapper);
  SET_Color3hvNV(disp, (void *)glColor3hvNVWrapper);
  SET_Color3i(disp, (void *)glColor3iWrapper);
  SET_Color3iv(disp, (void *)glColor3ivWrapper);
  SET_Color3s(disp, (void *)glColor3sWrapper);
  SET_Color3sv(disp, (void *)glColor3svWrapper);
  SET_Color3ub(disp, (void *)glColor3ubWrapper);
  SET_Color3ubv(disp, (void *)glColor3ubvWrapper);
  SET_Color3ui(disp, (void *)glColor3uiWrapper);
  SET_Color3uiv(disp, (void *)glColor3uivWrapper);
  SET_Color3us(disp, (void *)glColor3usWrapper);
  SET_Color3usv(disp, (void *)glColor3usvWrapper);
  SET_Color4b(disp, (void *)glColor4bWrapper);
  SET_Color4bv(disp, (void *)glColor4bvWrapper);
  SET_Color4d(disp, (void *)glColor4dWrapper);
  SET_Color4dv(disp, (void *)glColor4dvWrapper);
  SET_Color4f(disp, (void *)glColor4fWrapper);
  SET_Color4fv(disp, (void *)glColor4fvWrapper);
  SET_Color4hNV(disp, (void *)glColor4hNVWrapper);
  SET_Color4hvNV(disp, (void *)glColor4hvNVWrapper);
  SET_Color4i(disp, (void *)glColor4iWrapper);
  SET_Color4iv(disp, (void *)glColor4ivWrapper);
  SET_Color4s(disp, (void *)glColor4sWrapper);
  SET_Color4sv(disp, (void *)glColor4svWrapper);
  SET_Color4ub(disp, (void *)glColor4ubWrapper);
  SET_Color4ubv(disp, (void *)glColor4ubvWrapper);
  SET_Color4ui(disp, (void *)glColor4uiWrapper);
  SET_Color4uiv(disp, (void *)glColor4uivWrapper);
  SET_Color4us(disp, (void *)glColor4usWrapper);
  SET_Color4usv(disp, (void *)glColor4usvWrapper);
  SET_ColorFragmentOp1ATI(disp, (void *)glColorFragmentOp1ATIWrapper);
  SET_ColorFragmentOp2ATI(disp, (void *)glColorFragmentOp2ATIWrapper);
  SET_ColorFragmentOp3ATI(disp, (void *)glColorFragmentOp3ATIWrapper);
  SET_ColorMask(disp, (void *)glColorMaskWrapper);
  SET_ColorMaski(disp, (void *)glColorMaskiWrapper);
  SET_ColorMaterial(disp, (void *)glColorMaterialWrapper);
  SET_ColorP3ui(disp, (void *)glColorP3uiWrapper);
  SET_ColorP3uiv(disp, (void *)glColorP3uivWrapper);
  SET_ColorP4ui(disp, (void *)glColorP4uiWrapper);
  SET_ColorP4uiv(disp, (void *)glColorP4uivWrapper);
  SET_ColorPointer(disp, (void *)glColorPointerWrapper);
  SET_ColorPointerEXT(disp, (void *)glColorPointerEXTWrapper);
  SET_ColorSubTable(disp, (void *)glColorSubTableWrapper);
  SET_ColorTable(disp, (void *)glColorTableWrapper);
  SET_ColorTableParameterfv(disp, (void *)glColorTableParameterfvWrapper);
  SET_ColorTableParameteriv(disp, (void *)glColorTableParameterivWrapper);
  SET_CompileShader(disp, (void *)glCompileShaderWrapper);
  SET_CompileShaderIncludeARB(disp, (void *)glCompileShaderIncludeARBWrapper);
  SET_CompressedMultiTexImage1DEXT(disp, (void *)glCompressedMultiTexImage1DEXTWrapper);
  SET_CompressedMultiTexImage2DEXT(disp, (void *)glCompressedMultiTexImage2DEXTWrapper);
  SET_CompressedMultiTexImage3DEXT(disp, (void *)glCompressedMultiTexImage3DEXTWrapper);
  SET_CompressedMultiTexSubImage1DEXT(disp, (void *)glCompressedMultiTexSubImage1DEXTWrapper);
  SET_CompressedMultiTexSubImage2DEXT(disp, (void *)glCompressedMultiTexSubImage2DEXTWrapper);
  SET_CompressedMultiTexSubImage3DEXT(disp, (void *)glCompressedMultiTexSubImage3DEXTWrapper);
  SET_CompressedTexImage1D(disp, (void *)glCompressedTexImage1DWrapper);
  SET_CompressedTexImage2D(disp, (void *)glCompressedTexImage2DWrapper);
  SET_CompressedTexImage3D(disp, (void *)glCompressedTexImage3DWrapper);
  SET_CompressedTexSubImage1D(disp, (void *)glCompressedTexSubImage1DWrapper);
  SET_CompressedTexSubImage2D(disp, (void *)glCompressedTexSubImage2DWrapper);
  SET_CompressedTexSubImage3D(disp, (void *)glCompressedTexSubImage3DWrapper);
  SET_CompressedTextureImage1DEXT(disp, (void *)glCompressedTextureImage1DEXTWrapper);
  SET_CompressedTextureImage2DEXT(disp, (void *)glCompressedTextureImage2DEXTWrapper);
  SET_CompressedTextureImage3DEXT(disp, (void *)glCompressedTextureImage3DEXTWrapper);
  SET_CompressedTextureSubImage1D(disp, (void *)glCompressedTextureSubImage1DWrapper);
  SET_CompressedTextureSubImage1DEXT(disp, (void *)glCompressedTextureSubImage1DEXTWrapper);
  SET_CompressedTextureSubImage2D(disp, (void *)glCompressedTextureSubImage2DWrapper);
  SET_CompressedTextureSubImage2DEXT(disp, (void *)glCompressedTextureSubImage2DEXTWrapper);
  SET_CompressedTextureSubImage3D(disp, (void *)glCompressedTextureSubImage3DWrapper);
  SET_CompressedTextureSubImage3DEXT(disp, (void *)glCompressedTextureSubImage3DEXTWrapper);
  SET_ConservativeRasterParameterfNV(disp, (void *)glConservativeRasterParameterfNVWrapper);
  SET_ConservativeRasterParameteriNV(disp, (void *)glConservativeRasterParameteriNVWrapper);
  SET_ConvolutionFilter1D(disp, (void *)glConvolutionFilter1DWrapper);
  SET_ConvolutionFilter2D(disp, (void *)glConvolutionFilter2DWrapper);
  SET_ConvolutionParameterf(disp, (void *)glConvolutionParameterfWrapper);
  SET_ConvolutionParameterfv(disp, (void *)glConvolutionParameterfvWrapper);
  SET_ConvolutionParameteri(disp, (void *)glConvolutionParameteriWrapper);
  SET_ConvolutionParameteriv(disp, (void *)glConvolutionParameterivWrapper);
  SET_CopyBufferSubData(disp, (void *)glCopyBufferSubDataWrapper);
  SET_CopyColorSubTable(disp, (void *)glCopyColorSubTableWrapper);
  SET_CopyColorTable(disp, (void *)glCopyColorTableWrapper);
  SET_CopyConvolutionFilter1D(disp, (void *)glCopyConvolutionFilter1DWrapper);
  SET_CopyConvolutionFilter2D(disp, (void *)glCopyConvolutionFilter2DWrapper);
  SET_CopyImageSubData(disp, (void *)glCopyImageSubDataWrapper);
  SET_CopyImageSubDataNV(disp, (void *)glCopyImageSubDataNVWrapper);
  SET_CopyMultiTexImage1DEXT(disp, (void *)glCopyMultiTexImage1DEXTWrapper);
  SET_CopyMultiTexImage2DEXT(disp, (void *)glCopyMultiTexImage2DEXTWrapper);
  SET_CopyMultiTexSubImage1DEXT(disp, (void *)glCopyMultiTexSubImage1DEXTWrapper);
  SET_CopyMultiTexSubImage2DEXT(disp, (void *)glCopyMultiTexSubImage2DEXTWrapper);
  SET_CopyMultiTexSubImage3DEXT(disp, (void *)glCopyMultiTexSubImage3DEXTWrapper);
  SET_CopyNamedBufferSubData(disp, (void *)glCopyNamedBufferSubDataWrapper);
  SET_CopyPixels(disp, (void *)glCopyPixelsWrapper);
  SET_CopyTexImage1D(disp, (void *)glCopyTexImage1DWrapper);
  SET_CopyTexImage2D(disp, (void *)glCopyTexImage2DWrapper);
  SET_CopyTexSubImage1D(disp, (void *)glCopyTexSubImage1DWrapper);
  SET_CopyTexSubImage2D(disp, (void *)glCopyTexSubImage2DWrapper);
  SET_CopyTexSubImage3D(disp, (void *)glCopyTexSubImage3DWrapper);
  SET_CopyTextureImage1DEXT(disp, (void *)glCopyTextureImage1DEXTWrapper);
  SET_CopyTextureImage2DEXT(disp, (void *)glCopyTextureImage2DEXTWrapper);
  SET_CopyTextureSubImage1D(disp, (void *)glCopyTextureSubImage1DWrapper);
  SET_CopyTextureSubImage1DEXT(disp, (void *)glCopyTextureSubImage1DEXTWrapper);
  SET_CopyTextureSubImage2D(disp, (void *)glCopyTextureSubImage2DWrapper);
  SET_CopyTextureSubImage2DEXT(disp, (void *)glCopyTextureSubImage2DEXTWrapper);
  SET_CopyTextureSubImage3D(disp, (void *)glCopyTextureSubImage3DWrapper);
  SET_CopyTextureSubImage3DEXT(disp, (void *)glCopyTextureSubImage3DEXTWrapper);
  SET_CreateBuffers(disp, (void *)glCreateBuffersWrapper);
  SET_CreateFramebuffers(disp, (void *)glCreateFramebuffersWrapper);
  SET_CreateMemoryObjectsEXT(disp, (void *)glCreateMemoryObjectsEXTWrapper);
  SET_CreatePerfQueryINTEL(disp, (void *)glCreatePerfQueryINTELWrapper);
  SET_CreateProgram(disp, (void *)glCreateProgramWrapper);
  SET_CreateProgramObjectARB(disp, (void *)glCreateProgramObjectARBWrapper);
  SET_CreateProgramPipelines(disp, (void *)glCreateProgramPipelinesWrapper);
  SET_CreateQueries(disp, (void *)glCreateQueriesWrapper);
  SET_CreateRenderbuffers(disp, (void *)glCreateRenderbuffersWrapper);
  SET_CreateSamplers(disp, (void *)glCreateSamplersWrapper);
  SET_CreateShader(disp, (void *)glCreateShaderWrapper);
  SET_CreateShaderObjectARB(disp, (void *)glCreateShaderObjectARBWrapper);
  SET_CreateShaderProgramEXT(disp, (void *)glCreateShaderProgramEXTWrapper);
  SET_CreateShaderProgramv(disp, (void *)glCreateShaderProgramvWrapper);
  SET_CreateTextures(disp, (void *)glCreateTexturesWrapper);
  SET_CreateTransformFeedbacks(disp, (void *)glCreateTransformFeedbacksWrapper);
  SET_CreateVertexArrays(disp, (void *)glCreateVertexArraysWrapper);
  SET_CullFace(disp, (void *)glCullFaceWrapper);
  SET_DebugMessageCallback(disp, (void *)glDebugMessageCallbackWrapper);
  SET_DebugMessageControl(disp, (void *)glDebugMessageControlWrapper);
  SET_DebugMessageInsert(disp, (void *)glDebugMessageInsertWrapper);
  SET_DeleteBuffers(disp, (void *)glDeleteBuffersWrapper);
  SET_DeleteFragmentShaderATI(disp, (void *)glDeleteFragmentShaderATIWrapper);
  SET_DeleteFramebuffers(disp, (void *)glDeleteFramebuffersWrapper);
  SET_DeleteLists(disp, (void *)glDeleteListsWrapper);
  SET_DeleteMemoryObjectsEXT(disp, (void *)glDeleteMemoryObjectsEXTWrapper);
  SET_DeleteNamedStringARB(disp, (void *)glDeleteNamedStringARBWrapper);
  SET_DeleteObjectARB(disp, (void *)glDeleteObjectARBWrapper);
  SET_DeletePerfMonitorsAMD(disp, (void *)glDeletePerfMonitorsAMDWrapper);
  SET_DeletePerfQueryINTEL(disp, (void *)glDeletePerfQueryINTELWrapper);
  SET_DeleteProgram(disp, (void *)glDeleteProgramWrapper);
  SET_DeleteProgramPipelines(disp, (void *)glDeleteProgramPipelinesWrapper);
  SET_DeleteProgramsARB(disp, (void *)glDeleteProgramsARBWrapper);
  SET_DeleteQueries(disp, (void *)glDeleteQueriesWrapper);
  SET_DeleteRenderbuffers(disp, (void *)glDeleteRenderbuffersWrapper);
  SET_DeleteSamplers(disp, (void *)glDeleteSamplersWrapper);
  SET_DeleteSemaphoresEXT(disp, (void *)glDeleteSemaphoresEXTWrapper);
  SET_DeleteShader(disp, (void *)glDeleteShaderWrapper);
  SET_DeleteSync(disp, (void *)glDeleteSyncWrapper);
  SET_DeleteTextures(disp, (void *)glDeleteTexturesWrapper);
  SET_DeleteTransformFeedbacks(disp, (void *)glDeleteTransformFeedbacksWrapper);
  SET_DeleteVertexArrays(disp, (void *)glDeleteVertexArraysWrapper);
  SET_DepthBoundsEXT(disp, (void *)glDepthBoundsEXTWrapper);
  SET_DepthFunc(disp, (void *)glDepthFuncWrapper);
  SET_DepthMask(disp, (void *)glDepthMaskWrapper);
  SET_DepthRange(disp, (void *)glDepthRangeWrapper);
  SET_DepthRangeArrayv(disp, (void *)glDepthRangeArrayvWrapper);
  SET_DepthRangeIndexed(disp, (void *)glDepthRangeIndexedWrapper);
  SET_DepthRangef(disp, (void *)glDepthRangefWrapper);
  SET_DetachObjectARB(disp, (void *)glDetachObjectARBWrapper);
  SET_DetachShader(disp, (void *)glDetachShaderWrapper);
  SET_Disable(disp, (void *)glDisableWrapper);
  SET_DisableClientState(disp, (void *)glDisableClientStateWrapper);
  SET_DisableClientStateiEXT(disp, (void *)glDisableClientStateiEXTWrapper);
  SET_DisableVertexArrayAttrib(disp, (void *)glDisableVertexArrayAttribWrapper);
  SET_DisableVertexArrayAttribEXT(disp, (void *)glDisableVertexArrayAttribEXTWrapper);
  SET_DisableVertexArrayEXT(disp, (void *)glDisableVertexArrayEXTWrapper);
  SET_DisableVertexAttribArray(disp, (void *)glDisableVertexAttribArrayWrapper);
  SET_Disablei(disp, (void *)glDisableiWrapper);
  SET_DispatchCompute(disp, (void *)glDispatchComputeWrapper);
  SET_DispatchComputeGroupSizeARB(disp, (void *)glDispatchComputeGroupSizeARBWrapper);
  SET_DispatchComputeIndirect(disp, (void *)glDispatchComputeIndirectWrapper);
  SET_DrawArrays(disp, (void *)glDrawArraysWrapper);
  SET_DrawArraysIndirect(disp, (void *)glDrawArraysIndirectWrapper);
  SET_DrawArraysInstanced(disp, (void *)glDrawArraysInstancedWrapper);
  SET_DrawArraysInstancedBaseInstance(disp, (void *)glDrawArraysInstancedBaseInstanceWrapper);
  SET_DrawBuffer(disp, (void *)glDrawBufferWrapper);
  SET_DrawBuffers(disp, (void *)glDrawBuffersWrapper);
  SET_DrawElements(disp, (void *)glDrawElementsWrapper);
  SET_DrawElementsBaseVertex(disp, (void *)glDrawElementsBaseVertexWrapper);
  SET_DrawElementsIndirect(disp, (void *)glDrawElementsIndirectWrapper);
  SET_DrawElementsInstanced(disp, (void *)glDrawElementsInstancedWrapper);
  SET_DrawElementsInstancedBaseInstance(disp, (void *)glDrawElementsInstancedBaseInstanceWrapper);
  SET_DrawElementsInstancedBaseVertex(disp, (void *)glDrawElementsInstancedBaseVertexWrapper);
  SET_DrawElementsInstancedBaseVertexBaseInstance(disp, (void *)glDrawElementsInstancedBaseVertexBaseInstanceWrapper);
  SET_DrawPixels(disp, (void *)glDrawPixelsWrapper);
  SET_DrawRangeElements(disp, (void *)glDrawRangeElementsWrapper);
  SET_DrawRangeElementsBaseVertex(disp, (void *)glDrawRangeElementsBaseVertexWrapper);
  SET_DrawTransformFeedback(disp, (void *)glDrawTransformFeedbackWrapper);
  SET_DrawTransformFeedbackInstanced(disp, (void *)glDrawTransformFeedbackInstancedWrapper);
  SET_DrawTransformFeedbackStream(disp, (void *)glDrawTransformFeedbackStreamWrapper);
  SET_DrawTransformFeedbackStreamInstanced(disp, (void *)glDrawTransformFeedbackStreamInstancedWrapper);
  SET_EGLImageTargetTexStorageEXT(disp, (void *)glEGLImageTargetTexStorageEXTWrapper);
  SET_EGLImageTargetTextureStorageEXT(disp, (void *)glEGLImageTargetTextureStorageEXTWrapper);
  SET_EdgeFlag(disp, (void *)glEdgeFlagWrapper);
  SET_EdgeFlagPointer(disp, (void *)glEdgeFlagPointerWrapper);
  SET_EdgeFlagPointerEXT(disp, (void *)glEdgeFlagPointerEXTWrapper);
  SET_EdgeFlagv(disp, (void *)glEdgeFlagvWrapper);
  SET_Enable(disp, (void *)glEnableWrapper);
  SET_EnableClientState(disp, (void *)glEnableClientStateWrapper);
  SET_EnableClientStateiEXT(disp, (void *)glEnableClientStateiEXTWrapper);
  SET_EnableVertexArrayAttrib(disp, (void *)glEnableVertexArrayAttribWrapper);
  SET_EnableVertexArrayAttribEXT(disp, (void *)glEnableVertexArrayAttribEXTWrapper);
  SET_EnableVertexArrayEXT(disp, (void *)glEnableVertexArrayEXTWrapper);
  SET_EnableVertexAttribArray(disp, (void *)glEnableVertexAttribArrayWrapper);
  SET_Enablei(disp, (void *)glEnableiWrapper);
  SET_End(disp, (void *)glEndWrapper);
  SET_EndConditionalRender(disp, (void *)glEndConditionalRenderWrapper);
  SET_EndFragmentShaderATI(disp, (void *)glEndFragmentShaderATIWrapper);
  SET_EndList(disp, (void *)glEndListWrapper);
  SET_EndPerfMonitorAMD(disp, (void *)glEndPerfMonitorAMDWrapper);
  SET_EndPerfQueryINTEL(disp, (void *)glEndPerfQueryINTELWrapper);
  SET_EndQuery(disp, (void *)glEndQueryWrapper);
  SET_EndQueryIndexed(disp, (void *)glEndQueryIndexedWrapper);
  SET_EndTransformFeedback(disp, (void *)glEndTransformFeedbackWrapper);
  SET_EvalCoord1d(disp, (void *)glEvalCoord1dWrapper);
  SET_EvalCoord1dv(disp, (void *)glEvalCoord1dvWrapper);
  SET_EvalCoord1f(disp, (void *)glEvalCoord1fWrapper);
  SET_EvalCoord1fv(disp, (void *)glEvalCoord1fvWrapper);
  SET_EvalCoord2d(disp, (void *)glEvalCoord2dWrapper);
  SET_EvalCoord2dv(disp, (void *)glEvalCoord2dvWrapper);
  SET_EvalCoord2f(disp, (void *)glEvalCoord2fWrapper);
  SET_EvalCoord2fv(disp, (void *)glEvalCoord2fvWrapper);
  SET_EvalMesh1(disp, (void *)glEvalMesh1Wrapper);
  SET_EvalMesh2(disp, (void *)glEvalMesh2Wrapper);
  SET_EvalPoint1(disp, (void *)glEvalPoint1Wrapper);
  SET_EvalPoint2(disp, (void *)glEvalPoint2Wrapper);
  SET_EvaluateDepthValuesARB(disp, (void *)glEvaluateDepthValuesARBWrapper);
  SET_ExecuteProgramNV(disp, (void *)glExecuteProgramNVWrapper);
  SET_FeedbackBuffer(disp, (void *)glFeedbackBufferWrapper);
  SET_FenceSync(disp, (void *)glFenceSyncWrapper);
  SET_Finish(disp, (void *)glFinishWrapper);
  SET_Flush(disp, (void *)glFlushWrapper);
  SET_FlushMappedBufferRange(disp, (void *)glFlushMappedBufferRangeWrapper);
  SET_FlushMappedBufferRangeAPPLE(disp, (void *)glFlushMappedBufferRangeAPPLEWrapper);
  SET_FlushMappedNamedBufferRange(disp, (void *)glFlushMappedNamedBufferRangeWrapper);
  SET_FlushMappedNamedBufferRangeEXT(disp, (void *)glFlushMappedNamedBufferRangeEXTWrapper);
  SET_FogCoordPointer(disp, (void *)glFogCoordPointerWrapper);
  SET_FogCoordd(disp, (void *)glFogCoorddWrapper);
  SET_FogCoorddv(disp, (void *)glFogCoorddvWrapper);
  SET_FogCoordfEXT(disp, (void *)glFogCoordfEXTWrapper);
  SET_FogCoordfvEXT(disp, (void *)glFogCoordfvEXTWrapper);
  SET_FogCoordhNV(disp, (void *)glFogCoordhNVWrapper);
  SET_FogCoordhvNV(disp, (void *)glFogCoordhvNVWrapper);
  SET_Fogf(disp, (void *)glFogfWrapper);
  SET_Fogfv(disp, (void *)glFogfvWrapper);
  SET_Fogi(disp, (void *)glFogiWrapper);
  SET_Fogiv(disp, (void *)glFogivWrapper);
  SET_FramebufferDrawBufferEXT(disp, (void *)glFramebufferDrawBufferEXTWrapper);
  SET_FramebufferDrawBuffersEXT(disp, (void *)glFramebufferDrawBuffersEXTWrapper);
  SET_FramebufferFetchBarrierEXT(disp, (void *)glFramebufferFetchBarrierEXTWrapper);
  SET_FramebufferParameteri(disp, (void *)glFramebufferParameteriWrapper);
  SET_FramebufferParameteriMESA(disp, (void *)glFramebufferParameteriMESAWrapper);
  SET_FramebufferReadBufferEXT(disp, (void *)glFramebufferReadBufferEXTWrapper);
  SET_FramebufferRenderbuffer(disp, (void *)glFramebufferRenderbufferWrapper);
  SET_FramebufferSampleLocationsfvARB(disp, (void *)glFramebufferSampleLocationsfvARBWrapper);
  SET_FramebufferTexture(disp, (void *)glFramebufferTextureWrapper);
  SET_FramebufferTexture1D(disp, (void *)glFramebufferTexture1DWrapper);
  SET_FramebufferTexture2D(disp, (void *)glFramebufferTexture2DWrapper);
  SET_FramebufferTexture3D(disp, (void *)glFramebufferTexture3DWrapper);
  SET_FramebufferTextureLayer(disp, (void *)glFramebufferTextureLayerWrapper);
  SET_FramebufferTextureMultiviewOVR(disp, (void *)glFramebufferTextureMultiviewOVRWrapper);
  SET_FrontFace(disp, (void *)glFrontFaceWrapper);
  SET_Frustum(disp, (void *)glFrustumWrapper);
  SET_GenBuffers(disp, (void *)glGenBuffersWrapper);
  SET_GenFragmentShadersATI(disp, (void *)glGenFragmentShadersATIWrapper);
  SET_GenFramebuffers(disp, (void *)glGenFramebuffersWrapper);
  SET_GenLists(disp, (void *)glGenListsWrapper);
  SET_GenPerfMonitorsAMD(disp, (void *)glGenPerfMonitorsAMDWrapper);
  SET_GenProgramPipelines(disp, (void *)glGenProgramPipelinesWrapper);
  SET_GenProgramsARB(disp, (void *)glGenProgramsARBWrapper);
  SET_GenQueries(disp, (void *)glGenQueriesWrapper);
  SET_GenRenderbuffers(disp, (void *)glGenRenderbuffersWrapper);
  SET_GenSamplers(disp, (void *)glGenSamplersWrapper);
  SET_GenSemaphoresEXT(disp, (void *)glGenSemaphoresEXTWrapper);
  SET_GenTextures(disp, (void *)glGenTexturesWrapper);
  SET_GenTransformFeedbacks(disp, (void *)glGenTransformFeedbacksWrapper);
  SET_GenVertexArrays(disp, (void *)glGenVertexArraysWrapper);
  SET_GenerateMipmap(disp, (void *)glGenerateMipmapWrapper);
  SET_GenerateMultiTexMipmapEXT(disp, (void *)glGenerateMultiTexMipmapEXTWrapper);
  SET_GenerateTextureMipmap(disp, (void *)glGenerateTextureMipmapWrapper);
  SET_GenerateTextureMipmapEXT(disp, (void *)glGenerateTextureMipmapEXTWrapper);
  SET_GetActiveAtomicCounterBufferiv(disp, (void *)glGetActiveAtomicCounterBufferivWrapper);
  SET_GetActiveAttrib(disp, (void *)glGetActiveAttribWrapper);
  SET_GetActiveSubroutineName(disp, (void *)glGetActiveSubroutineNameWrapper);
  SET_GetActiveSubroutineUniformName(disp, (void *)glGetActiveSubroutineUniformNameWrapper);
  SET_GetActiveSubroutineUniformiv(disp, (void *)glGetActiveSubroutineUniformivWrapper);
  SET_GetActiveUniform(disp, (void *)glGetActiveUniformWrapper);
  SET_GetActiveUniformBlockName(disp, (void *)glGetActiveUniformBlockNameWrapper);
  SET_GetActiveUniformBlockiv(disp, (void *)glGetActiveUniformBlockivWrapper);
  SET_GetActiveUniformName(disp, (void *)glGetActiveUniformNameWrapper);
  SET_GetActiveUniformsiv(disp, (void *)glGetActiveUniformsivWrapper);
  SET_GetAttachedObjectsARB(disp, (void *)glGetAttachedObjectsARBWrapper);
  SET_GetAttachedShaders(disp, (void *)glGetAttachedShadersWrapper);
  SET_GetAttribLocation(disp, (void *)glGetAttribLocationWrapper);
  SET_GetBooleani_v(disp, (void *)glGetBooleani_vWrapper);
  SET_GetBooleanv(disp, (void *)glGetBooleanvWrapper);
  SET_GetBufferParameteri64v(disp, (void *)glGetBufferParameteri64vWrapper);
  SET_GetBufferParameteriv(disp, (void *)glGetBufferParameterivWrapper);
  SET_GetBufferPointerv(disp, (void *)glGetBufferPointervWrapper);
  SET_GetBufferSubData(disp, (void *)glGetBufferSubDataWrapper);
  SET_GetClipPlane(disp, (void *)glGetClipPlaneWrapper);
  SET_GetColorTable(disp, (void *)glGetColorTableWrapper);
  SET_GetColorTableParameterfv(disp, (void *)glGetColorTableParameterfvWrapper);
  SET_GetColorTableParameteriv(disp, (void *)glGetColorTableParameterivWrapper);
  SET_GetCompressedMultiTexImageEXT(disp, (void *)glGetCompressedMultiTexImageEXTWrapper);
  SET_GetCompressedTexImage(disp, (void *)glGetCompressedTexImageWrapper);
  SET_GetCompressedTextureImage(disp, (void *)glGetCompressedTextureImageWrapper);
  SET_GetCompressedTextureImageEXT(disp, (void *)glGetCompressedTextureImageEXTWrapper);
  SET_GetCompressedTextureSubImage(disp, (void *)glGetCompressedTextureSubImageWrapper);
  SET_GetConvolutionFilter(disp, (void *)glGetConvolutionFilterWrapper);
  SET_GetConvolutionParameterfv(disp, (void *)glGetConvolutionParameterfvWrapper);
  SET_GetConvolutionParameteriv(disp, (void *)glGetConvolutionParameterivWrapper);
  SET_GetDebugMessageLog(disp, (void *)glGetDebugMessageLogWrapper);
  SET_GetDoublei_v(disp, (void *)glGetDoublei_vWrapper);
  SET_GetDoublev(disp, (void *)glGetDoublevWrapper);
  SET_GetError(disp, (void *)glGetErrorWrapper);
  SET_GetFirstPerfQueryIdINTEL(disp, (void *)glGetFirstPerfQueryIdINTELWrapper);
  SET_GetFloati_v(disp, (void *)glGetFloati_vWrapper);
  SET_GetFloatv(disp, (void *)glGetFloatvWrapper);
  SET_GetFragDataIndex(disp, (void *)glGetFragDataIndexWrapper);
  SET_GetFragDataLocation(disp, (void *)glGetFragDataLocationWrapper);
  SET_GetFramebufferAttachmentParameteriv(disp, (void *)glGetFramebufferAttachmentParameterivWrapper);
  SET_GetFramebufferParameteriv(disp, (void *)glGetFramebufferParameterivWrapper);
  SET_GetFramebufferParameterivEXT(disp, (void *)glGetFramebufferParameterivEXTWrapper);
  SET_GetFramebufferParameterivMESA(disp, (void *)glGetFramebufferParameterivMESAWrapper);
  SET_GetGraphicsResetStatusARB(disp, (void *)glGetGraphicsResetStatusARBWrapper);
  SET_GetHandleARB(disp, (void *)glGetHandleARBWrapper);
  SET_GetHistogram(disp, (void *)glGetHistogramWrapper);
  SET_GetHistogramParameterfv(disp, (void *)glGetHistogramParameterfvWrapper);
  SET_GetHistogramParameteriv(disp, (void *)glGetHistogramParameterivWrapper);
  SET_GetImageHandleARB(disp, (void *)glGetImageHandleARBWrapper);
  SET_GetInfoLogARB(disp, (void *)glGetInfoLogARBWrapper);
  SET_GetInteger64i_v(disp, (void *)glGetInteger64i_vWrapper);
  SET_GetInteger64v(disp, (void *)glGetInteger64vWrapper);
  SET_GetIntegeri_v(disp, (void *)glGetIntegeri_vWrapper);
  SET_GetIntegerv(disp, (void *)glGetIntegervWrapper);
  SET_GetInternalformati64v(disp, (void *)glGetInternalformati64vWrapper);
  SET_GetInternalformativ(disp, (void *)glGetInternalformativWrapper);
  SET_GetLightfv(disp, (void *)glGetLightfvWrapper);
  SET_GetLightiv(disp, (void *)glGetLightivWrapper);
  SET_GetMapdv(disp, (void *)glGetMapdvWrapper);
  SET_GetMapfv(disp, (void *)glGetMapfvWrapper);
  SET_GetMapiv(disp, (void *)glGetMapivWrapper);
  SET_GetMaterialfv(disp, (void *)glGetMaterialfvWrapper);
  SET_GetMaterialiv(disp, (void *)glGetMaterialivWrapper);
  SET_GetMemoryObjectParameterivEXT(disp, (void *)glGetMemoryObjectParameterivEXTWrapper);
  SET_GetMinmax(disp, (void *)glGetMinmaxWrapper);
  SET_GetMinmaxParameterfv(disp, (void *)glGetMinmaxParameterfvWrapper);
  SET_GetMinmaxParameteriv(disp, (void *)glGetMinmaxParameterivWrapper);
  SET_GetMultiTexEnvfvEXT(disp, (void *)glGetMultiTexEnvfvEXTWrapper);
  SET_GetMultiTexEnvivEXT(disp, (void *)glGetMultiTexEnvivEXTWrapper);
  SET_GetMultiTexGendvEXT(disp, (void *)glGetMultiTexGendvEXTWrapper);
  SET_GetMultiTexGenfvEXT(disp, (void *)glGetMultiTexGenfvEXTWrapper);
  SET_GetMultiTexGenivEXT(disp, (void *)glGetMultiTexGenivEXTWrapper);
  SET_GetMultiTexImageEXT(disp, (void *)glGetMultiTexImageEXTWrapper);
  SET_GetMultiTexLevelParameterfvEXT(disp, (void *)glGetMultiTexLevelParameterfvEXTWrapper);
  SET_GetMultiTexLevelParameterivEXT(disp, (void *)glGetMultiTexLevelParameterivEXTWrapper);
  SET_GetMultiTexParameterIivEXT(disp, (void *)glGetMultiTexParameterIivEXTWrapper);
  SET_GetMultiTexParameterIuivEXT(disp, (void *)glGetMultiTexParameterIuivEXTWrapper);
  SET_GetMultiTexParameterfvEXT(disp, (void *)glGetMultiTexParameterfvEXTWrapper);
  SET_GetMultiTexParameterivEXT(disp, (void *)glGetMultiTexParameterivEXTWrapper);
  SET_GetMultisamplefv(disp, (void *)glGetMultisamplefvWrapper);
  SET_GetNamedBufferParameteri64v(disp, (void *)glGetNamedBufferParameteri64vWrapper);
  SET_GetNamedBufferParameteriv(disp, (void *)glGetNamedBufferParameterivWrapper);
  SET_GetNamedBufferParameterivEXT(disp, (void *)glGetNamedBufferParameterivEXTWrapper);
  SET_GetNamedBufferPointerv(disp, (void *)glGetNamedBufferPointervWrapper);
  SET_GetNamedBufferPointervEXT(disp, (void *)glGetNamedBufferPointervEXTWrapper);
  SET_GetNamedBufferSubData(disp, (void *)glGetNamedBufferSubDataWrapper);
  SET_GetNamedBufferSubDataEXT(disp, (void *)glGetNamedBufferSubDataEXTWrapper);
  SET_GetNamedFramebufferAttachmentParameteriv(disp, (void *)glGetNamedFramebufferAttachmentParameterivWrapper);
  SET_GetNamedFramebufferAttachmentParameterivEXT(disp, (void *)glGetNamedFramebufferAttachmentParameterivEXTWrapper);
  SET_GetNamedFramebufferParameteriv(disp, (void *)glGetNamedFramebufferParameterivWrapper);
  SET_GetNamedFramebufferParameterivEXT(disp, (void *)glGetNamedFramebufferParameterivEXTWrapper);
  SET_GetNamedProgramLocalParameterdvEXT(disp, (void *)glGetNamedProgramLocalParameterdvEXTWrapper);
  SET_GetNamedProgramLocalParameterfvEXT(disp, (void *)glGetNamedProgramLocalParameterfvEXTWrapper);
  SET_GetNamedProgramStringEXT(disp, (void *)glGetNamedProgramStringEXTWrapper);
  SET_GetNamedProgramivEXT(disp, (void *)glGetNamedProgramivEXTWrapper);
  SET_GetNamedRenderbufferParameteriv(disp, (void *)glGetNamedRenderbufferParameterivWrapper);
  SET_GetNamedRenderbufferParameterivEXT(disp, (void *)glGetNamedRenderbufferParameterivEXTWrapper);
  SET_GetNamedStringARB(disp, (void *)glGetNamedStringARBWrapper);
  SET_GetNamedStringivARB(disp, (void *)glGetNamedStringivARBWrapper);
  SET_GetNextPerfQueryIdINTEL(disp, (void *)glGetNextPerfQueryIdINTELWrapper);
  SET_GetObjectLabel(disp, (void *)glGetObjectLabelWrapper);
  SET_GetObjectLabelEXT(disp, (void *)glGetObjectLabelEXTWrapper);
  SET_GetObjectParameterfvARB(disp, (void *)glGetObjectParameterfvARBWrapper);
  SET_GetObjectParameterivAPPLE(disp, (void *)glGetObjectParameterivAPPLEWrapper);
  SET_GetObjectParameterivARB(disp, (void *)glGetObjectParameterivARBWrapper);
  SET_GetObjectPtrLabel(disp, (void *)glGetObjectPtrLabelWrapper);
  SET_GetPerfCounterInfoINTEL(disp, (void *)glGetPerfCounterInfoINTELWrapper);
  SET_GetPerfMonitorCounterDataAMD(disp, (void *)glGetPerfMonitorCounterDataAMDWrapper);
  SET_GetPerfMonitorCounterInfoAMD(disp, (void *)glGetPerfMonitorCounterInfoAMDWrapper);
  SET_GetPerfMonitorCounterStringAMD(disp, (void *)glGetPerfMonitorCounterStringAMDWrapper);
  SET_GetPerfMonitorCountersAMD(disp, (void *)glGetPerfMonitorCountersAMDWrapper);
  SET_GetPerfMonitorGroupStringAMD(disp, (void *)glGetPerfMonitorGroupStringAMDWrapper);
  SET_GetPerfMonitorGroupsAMD(disp, (void *)glGetPerfMonitorGroupsAMDWrapper);
  SET_GetPerfQueryDataINTEL(disp, (void *)glGetPerfQueryDataINTELWrapper);
  SET_GetPerfQueryIdByNameINTEL(disp, (void *)glGetPerfQueryIdByNameINTELWrapper);
  SET_GetPerfQueryInfoINTEL(disp, (void *)glGetPerfQueryInfoINTELWrapper);
  SET_GetPixelMapfv(disp, (void *)glGetPixelMapfvWrapper);
  SET_GetPixelMapuiv(disp, (void *)glGetPixelMapuivWrapper);
  SET_GetPixelMapusv(disp, (void *)glGetPixelMapusvWrapper);
  SET_GetPointerIndexedvEXT(disp, (void *)glGetPointerIndexedvEXTWrapper);
  SET_GetPointerv(disp, (void *)glGetPointervWrapper);
  SET_GetPolygonStipple(disp, (void *)glGetPolygonStippleWrapper);
  SET_GetProgramBinary(disp, (void *)glGetProgramBinaryWrapper);
  SET_GetProgramEnvParameterdvARB(disp, (void *)glGetProgramEnvParameterdvARBWrapper);
  SET_GetProgramEnvParameterfvARB(disp, (void *)glGetProgramEnvParameterfvARBWrapper);
  SET_GetProgramInfoLog(disp, (void *)glGetProgramInfoLogWrapper);
  SET_GetProgramInterfaceiv(disp, (void *)glGetProgramInterfaceivWrapper);
  SET_GetProgramLocalParameterdvARB(disp, (void *)glGetProgramLocalParameterdvARBWrapper);
  SET_GetProgramLocalParameterfvARB(disp, (void *)glGetProgramLocalParameterfvARBWrapper);
  SET_GetProgramNamedParameterdvNV(disp, (void *)glGetProgramNamedParameterdvNVWrapper);
  SET_GetProgramNamedParameterfvNV(disp, (void *)glGetProgramNamedParameterfvNVWrapper);
  SET_GetProgramParameterdvNV(disp, (void *)glGetProgramParameterdvNVWrapper);
  SET_GetProgramParameterfvNV(disp, (void *)glGetProgramParameterfvNVWrapper);
  SET_GetProgramPipelineInfoLog(disp, (void *)glGetProgramPipelineInfoLogWrapper);
  SET_GetProgramPipelineiv(disp, (void *)glGetProgramPipelineivWrapper);
  SET_GetProgramResourceIndex(disp, (void *)glGetProgramResourceIndexWrapper);
  SET_GetProgramResourceLocation(disp, (void *)glGetProgramResourceLocationWrapper);
  SET_GetProgramResourceLocationIndex(disp, (void *)glGetProgramResourceLocationIndexWrapper);
  SET_GetProgramResourceName(disp, (void *)glGetProgramResourceNameWrapper);
  SET_GetProgramResourceiv(disp, (void *)glGetProgramResourceivWrapper);
  SET_GetProgramStageiv(disp, (void *)glGetProgramStageivWrapper);
  SET_GetProgramStringARB(disp, (void *)glGetProgramStringARBWrapper);
  SET_GetProgramStringNV(disp, (void *)glGetProgramStringNVWrapper);
  SET_GetProgramiv(disp, (void *)glGetProgramivWrapper);
  SET_GetProgramivARB(disp, (void *)glGetProgramivARBWrapper);
  SET_GetProgramivNV(disp, (void *)glGetProgramivNVWrapper);
  SET_GetQueryBufferObjecti64v(disp, (void *)glGetQueryBufferObjecti64vWrapper);
  SET_GetQueryBufferObjectiv(disp, (void *)glGetQueryBufferObjectivWrapper);
  SET_GetQueryBufferObjectui64v(disp, (void *)glGetQueryBufferObjectui64vWrapper);
  SET_GetQueryBufferObjectuiv(disp, (void *)glGetQueryBufferObjectuivWrapper);
  SET_GetQueryIndexediv(disp, (void *)glGetQueryIndexedivWrapper);
  SET_GetQueryObjecti64v(disp, (void *)glGetQueryObjecti64vWrapper);
  SET_GetQueryObjectiv(disp, (void *)glGetQueryObjectivWrapper);
  SET_GetQueryObjectui64v(disp, (void *)glGetQueryObjectui64vWrapper);
  SET_GetQueryObjectuiv(disp, (void *)glGetQueryObjectuivWrapper);
  SET_GetQueryiv(disp, (void *)glGetQueryivWrapper);
  SET_GetRenderbufferParameteriv(disp, (void *)glGetRenderbufferParameterivWrapper);
  SET_GetSamplerParameterIiv(disp, (void *)glGetSamplerParameterIivWrapper);
  SET_GetSamplerParameterIuiv(disp, (void *)glGetSamplerParameterIuivWrapper);
  SET_GetSamplerParameterfv(disp, (void *)glGetSamplerParameterfvWrapper);
  SET_GetSamplerParameteriv(disp, (void *)glGetSamplerParameterivWrapper);
  SET_GetSemaphoreParameterui64vEXT(disp, (void *)glGetSemaphoreParameterui64vEXTWrapper);
  SET_GetSeparableFilter(disp, (void *)glGetSeparableFilterWrapper);
  SET_GetShaderInfoLog(disp, (void *)glGetShaderInfoLogWrapper);
  SET_GetShaderPrecisionFormat(disp, (void *)glGetShaderPrecisionFormatWrapper);
  SET_GetShaderSource(disp, (void *)glGetShaderSourceWrapper);
  SET_GetShaderiv(disp, (void *)glGetShaderivWrapper);
  SET_GetString(disp, (void *)glGetStringWrapper);
  SET_GetStringi(disp, (void *)glGetStringiWrapper);
  SET_GetSubroutineIndex(disp, (void *)glGetSubroutineIndexWrapper);
  SET_GetSubroutineUniformLocation(disp, (void *)glGetSubroutineUniformLocationWrapper);
  SET_GetSynciv(disp, (void *)glGetSyncivWrapper);
  SET_GetTexBumpParameterfvATI(disp, (void *)glGetTexBumpParameterfvATIWrapper);
  SET_GetTexBumpParameterivATI(disp, (void *)glGetTexBumpParameterivATIWrapper);
  SET_GetTexEnvfv(disp, (void *)glGetTexEnvfvWrapper);
  SET_GetTexEnviv(disp, (void *)glGetTexEnvivWrapper);
  SET_GetTexGendv(disp, (void *)glGetTexGendvWrapper);
  SET_GetTexGenfv(disp, (void *)glGetTexGenfvWrapper);
  SET_GetTexGeniv(disp, (void *)glGetTexGenivWrapper);
  SET_GetTexGenxvOES(disp, (void *)glGetTexGenxvOESWrapper);
  SET_GetTexImage(disp, (void *)glGetTexImageWrapper);
  SET_GetTexLevelParameterfv(disp, (void *)glGetTexLevelParameterfvWrapper);
  SET_GetTexLevelParameteriv(disp, (void *)glGetTexLevelParameterivWrapper);
  SET_GetTexParameterIiv(disp, (void *)glGetTexParameterIivWrapper);
  SET_GetTexParameterIuiv(disp, (void *)glGetTexParameterIuivWrapper);
  SET_GetTexParameterfv(disp, (void *)glGetTexParameterfvWrapper);
  SET_GetTexParameteriv(disp, (void *)glGetTexParameterivWrapper);
  SET_GetTextureHandleARB(disp, (void *)glGetTextureHandleARBWrapper);
  SET_GetTextureImage(disp, (void *)glGetTextureImageWrapper);
  SET_GetTextureImageEXT(disp, (void *)glGetTextureImageEXTWrapper);
  SET_GetTextureLevelParameterfv(disp, (void *)glGetTextureLevelParameterfvWrapper);
  SET_GetTextureLevelParameterfvEXT(disp, (void *)glGetTextureLevelParameterfvEXTWrapper);
  SET_GetTextureLevelParameteriv(disp, (void *)glGetTextureLevelParameterivWrapper);
  SET_GetTextureLevelParameterivEXT(disp, (void *)glGetTextureLevelParameterivEXTWrapper);
  SET_GetTextureParameterIiv(disp, (void *)glGetTextureParameterIivWrapper);
  SET_GetTextureParameterIivEXT(disp, (void *)glGetTextureParameterIivEXTWrapper);
  SET_GetTextureParameterIuiv(disp, (void *)glGetTextureParameterIuivWrapper);
  SET_GetTextureParameterIuivEXT(disp, (void *)glGetTextureParameterIuivEXTWrapper);
  SET_GetTextureParameterfv(disp, (void *)glGetTextureParameterfvWrapper);
  SET_GetTextureParameterfvEXT(disp, (void *)glGetTextureParameterfvEXTWrapper);
  SET_GetTextureParameteriv(disp, (void *)glGetTextureParameterivWrapper);
  SET_GetTextureParameterivEXT(disp, (void *)glGetTextureParameterivEXTWrapper);
  SET_GetTextureSamplerHandleARB(disp, (void *)glGetTextureSamplerHandleARBWrapper);
  SET_GetTextureSubImage(disp, (void *)glGetTextureSubImageWrapper);
  SET_GetTrackMatrixivNV(disp, (void *)glGetTrackMatrixivNVWrapper);
  SET_GetTransformFeedbackVarying(disp, (void *)glGetTransformFeedbackVaryingWrapper);
  SET_GetTransformFeedbacki64_v(disp, (void *)glGetTransformFeedbacki64_vWrapper);
  SET_GetTransformFeedbacki_v(disp, (void *)glGetTransformFeedbacki_vWrapper);
  SET_GetTransformFeedbackiv(disp, (void *)glGetTransformFeedbackivWrapper);
  SET_GetUniformBlockIndex(disp, (void *)glGetUniformBlockIndexWrapper);
  SET_GetUniformIndices(disp, (void *)glGetUniformIndicesWrapper);
  SET_GetUniformLocation(disp, (void *)glGetUniformLocationWrapper);
  SET_GetUniformSubroutineuiv(disp, (void *)glGetUniformSubroutineuivWrapper);
  SET_GetUniformdv(disp, (void *)glGetUniformdvWrapper);
  SET_GetUniformfv(disp, (void *)glGetUniformfvWrapper);
  SET_GetUniformi64vARB(disp, (void *)glGetUniformi64vARBWrapper);
  SET_GetUniformiv(disp, (void *)glGetUniformivWrapper);
  SET_GetUniformui64vARB(disp, (void *)glGetUniformui64vARBWrapper);
  SET_GetUniformuiv(disp, (void *)glGetUniformuivWrapper);
  SET_GetUnsignedBytei_vEXT(disp, (void *)glGetUnsignedBytei_vEXTWrapper);
  SET_GetUnsignedBytevEXT(disp, (void *)glGetUnsignedBytevEXTWrapper);
  SET_GetVertexArrayIndexed64iv(disp, (void *)glGetVertexArrayIndexed64ivWrapper);
  SET_GetVertexArrayIndexediv(disp, (void *)glGetVertexArrayIndexedivWrapper);
  SET_GetVertexArrayIntegeri_vEXT(disp, (void *)glGetVertexArrayIntegeri_vEXTWrapper);
  SET_GetVertexArrayIntegervEXT(disp, (void *)glGetVertexArrayIntegervEXTWrapper);
  SET_GetVertexArrayPointeri_vEXT(disp, (void *)glGetVertexArrayPointeri_vEXTWrapper);
  SET_GetVertexArrayPointervEXT(disp, (void *)glGetVertexArrayPointervEXTWrapper);
  SET_GetVertexArrayiv(disp, (void *)glGetVertexArrayivWrapper);
  SET_GetVertexAttribIiv(disp, (void *)glGetVertexAttribIivWrapper);
  SET_GetVertexAttribIuiv(disp, (void *)glGetVertexAttribIuivWrapper);
  SET_GetVertexAttribLdv(disp, (void *)glGetVertexAttribLdvWrapper);
  SET_GetVertexAttribLui64vARB(disp, (void *)glGetVertexAttribLui64vARBWrapper);
  SET_GetVertexAttribPointerv(disp, (void *)glGetVertexAttribPointervWrapper);
  SET_GetVertexAttribdv(disp, (void *)glGetVertexAttribdvWrapper);
  SET_GetVertexAttribdvNV(disp, (void *)glGetVertexAttribdvNVWrapper);
  SET_GetVertexAttribfv(disp, (void *)glGetVertexAttribfvWrapper);
  SET_GetVertexAttribfvNV(disp, (void *)glGetVertexAttribfvNVWrapper);
  SET_GetVertexAttribiv(disp, (void *)glGetVertexAttribivWrapper);
  SET_GetVertexAttribivNV(disp, (void *)glGetVertexAttribivNVWrapper);
  SET_GetnColorTableARB(disp, (void *)glGetnColorTableARBWrapper);
  SET_GetnCompressedTexImageARB(disp, (void *)glGetnCompressedTexImageARBWrapper);
  SET_GetnConvolutionFilterARB(disp, (void *)glGetnConvolutionFilterARBWrapper);
  SET_GetnHistogramARB(disp, (void *)glGetnHistogramARBWrapper);
  SET_GetnMapdvARB(disp, (void *)glGetnMapdvARBWrapper);
  SET_GetnMapfvARB(disp, (void *)glGetnMapfvARBWrapper);
  SET_GetnMapivARB(disp, (void *)glGetnMapivARBWrapper);
  SET_GetnMinmaxARB(disp, (void *)glGetnMinmaxARBWrapper);
  SET_GetnPixelMapfvARB(disp, (void *)glGetnPixelMapfvARBWrapper);
  SET_GetnPixelMapuivARB(disp, (void *)glGetnPixelMapuivARBWrapper);
  SET_GetnPixelMapusvARB(disp, (void *)glGetnPixelMapusvARBWrapper);
  SET_GetnPolygonStippleARB(disp, (void *)glGetnPolygonStippleARBWrapper);
  SET_GetnSeparableFilterARB(disp, (void *)glGetnSeparableFilterARBWrapper);
  SET_GetnTexImageARB(disp, (void *)glGetnTexImageARBWrapper);
  SET_GetnUniformdvARB(disp, (void *)glGetnUniformdvARBWrapper);
  SET_GetnUniformfvARB(disp, (void *)glGetnUniformfvARBWrapper);
  SET_GetnUniformi64vARB(disp, (void *)glGetnUniformi64vARBWrapper);
  SET_GetnUniformivARB(disp, (void *)glGetnUniformivARBWrapper);
  SET_GetnUniformui64vARB(disp, (void *)glGetnUniformui64vARBWrapper);
  SET_GetnUniformuivARB(disp, (void *)glGetnUniformuivARBWrapper);
  SET_Hint(disp, (void *)glHintWrapper);
  SET_Histogram(disp, (void *)glHistogramWrapper);
  SET_ImportMemoryFdEXT(disp, (void *)glImportMemoryFdEXTWrapper);
  SET_ImportMemoryWin32HandleEXT(disp, (void *)glImportMemoryWin32HandleEXTWrapper);
  SET_ImportMemoryWin32NameEXT(disp, (void *)glImportMemoryWin32NameEXTWrapper);
  SET_ImportSemaphoreFdEXT(disp, (void *)glImportSemaphoreFdEXTWrapper);
  SET_ImportSemaphoreWin32HandleEXT(disp, (void *)glImportSemaphoreWin32HandleEXTWrapper);
  SET_ImportSemaphoreWin32NameEXT(disp, (void *)glImportSemaphoreWin32NameEXTWrapper);
  SET_IndexMask(disp, (void *)glIndexMaskWrapper);
  SET_IndexPointer(disp, (void *)glIndexPointerWrapper);
  SET_IndexPointerEXT(disp, (void *)glIndexPointerEXTWrapper);
  SET_Indexd(disp, (void *)glIndexdWrapper);
  SET_Indexdv(disp, (void *)glIndexdvWrapper);
  SET_Indexf(disp, (void *)glIndexfWrapper);
  SET_Indexfv(disp, (void *)glIndexfvWrapper);
  SET_Indexi(disp, (void *)glIndexiWrapper);
  SET_Indexiv(disp, (void *)glIndexivWrapper);
  SET_Indexs(disp, (void *)glIndexsWrapper);
  SET_Indexsv(disp, (void *)glIndexsvWrapper);
  SET_Indexub(disp, (void *)glIndexubWrapper);
  SET_Indexubv(disp, (void *)glIndexubvWrapper);
  SET_InitNames(disp, (void *)glInitNamesWrapper);
  SET_InterleavedArrays(disp, (void *)glInterleavedArraysWrapper);
  SET_InvalidateBufferData(disp, (void *)glInvalidateBufferDataWrapper);
  SET_InvalidateBufferSubData(disp, (void *)glInvalidateBufferSubDataWrapper);
  SET_InvalidateFramebuffer(disp, (void *)glInvalidateFramebufferWrapper);
  SET_InvalidateNamedFramebufferData(disp, (void *)glInvalidateNamedFramebufferDataWrapper);
  SET_InvalidateNamedFramebufferSubData(disp, (void *)glInvalidateNamedFramebufferSubDataWrapper);
  SET_InvalidateSubFramebuffer(disp, (void *)glInvalidateSubFramebufferWrapper);
  SET_InvalidateTexImage(disp, (void *)glInvalidateTexImageWrapper);
  SET_InvalidateTexSubImage(disp, (void *)glInvalidateTexSubImageWrapper);
  SET_IsBuffer(disp, (void *)glIsBufferWrapper);
  SET_IsEnabled(disp, (void *)glIsEnabledWrapper);
  SET_IsEnabledi(disp, (void *)glIsEnablediWrapper);
  SET_IsFramebuffer(disp, (void *)glIsFramebufferWrapper);
  SET_IsImageHandleResidentARB(disp, (void *)glIsImageHandleResidentARBWrapper);
  SET_IsList(disp, (void *)glIsListWrapper);
  SET_IsMemoryObjectEXT(disp, (void *)glIsMemoryObjectEXTWrapper);
  SET_IsNamedStringARB(disp, (void *)glIsNamedStringARBWrapper);
  SET_IsProgram(disp, (void *)glIsProgramWrapper);
  SET_IsProgramARB(disp, (void *)glIsProgramARBWrapper);
  SET_IsProgramPipeline(disp, (void *)glIsProgramPipelineWrapper);
  SET_IsQuery(disp, (void *)glIsQueryWrapper);
  SET_IsRenderbuffer(disp, (void *)glIsRenderbufferWrapper);
  SET_IsSampler(disp, (void *)glIsSamplerWrapper);
  SET_IsSemaphoreEXT(disp, (void *)glIsSemaphoreEXTWrapper);
  SET_IsShader(disp, (void *)glIsShaderWrapper);
  SET_IsSync(disp, (void *)glIsSyncWrapper);
  SET_IsTexture(disp, (void *)glIsTextureWrapper);
  SET_IsTextureHandleResidentARB(disp, (void *)glIsTextureHandleResidentARBWrapper);
  SET_IsTransformFeedback(disp, (void *)glIsTransformFeedbackWrapper);
  SET_IsVertexArray(disp, (void *)glIsVertexArrayWrapper);
  SET_LabelObjectEXT(disp, (void *)glLabelObjectEXTWrapper);
  SET_LightModelf(disp, (void *)glLightModelfWrapper);
  SET_LightModelfv(disp, (void *)glLightModelfvWrapper);
  SET_LightModeli(disp, (void *)glLightModeliWrapper);
  SET_LightModeliv(disp, (void *)glLightModelivWrapper);
  SET_Lightf(disp, (void *)glLightfWrapper);
  SET_Lightfv(disp, (void *)glLightfvWrapper);
  SET_Lighti(disp, (void *)glLightiWrapper);
  SET_Lightiv(disp, (void *)glLightivWrapper);
  SET_LineStipple(disp, (void *)glLineStippleWrapper);
  SET_LineWidth(disp, (void *)glLineWidthWrapper);
  SET_LinkProgram(disp, (void *)glLinkProgramWrapper);
  SET_ListBase(disp, (void *)glListBaseWrapper);
  SET_LoadIdentity(disp, (void *)glLoadIdentityWrapper);
  SET_LoadMatrixd(disp, (void *)glLoadMatrixdWrapper);
  SET_LoadMatrixf(disp, (void *)glLoadMatrixfWrapper);
  SET_LoadName(disp, (void *)glLoadNameWrapper);
  SET_LoadProgramNV(disp, (void *)glLoadProgramNVWrapper);
  SET_LoadTransposeMatrixd(disp, (void *)glLoadTransposeMatrixdWrapper);
  SET_LoadTransposeMatrixf(disp, (void *)glLoadTransposeMatrixfWrapper);
  SET_LockArraysEXT(disp, (void *)glLockArraysEXTWrapper);
  SET_LogicOp(disp, (void *)glLogicOpWrapper);
  SET_MakeImageHandleNonResidentARB(disp, (void *)glMakeImageHandleNonResidentARBWrapper);
  SET_MakeImageHandleResidentARB(disp, (void *)glMakeImageHandleResidentARBWrapper);
  SET_MakeTextureHandleNonResidentARB(disp, (void *)glMakeTextureHandleNonResidentARBWrapper);
  SET_MakeTextureHandleResidentARB(disp, (void *)glMakeTextureHandleResidentARBWrapper);
  SET_Map1d(disp, (void *)glMap1dWrapper);
  SET_Map1f(disp, (void *)glMap1fWrapper);
  SET_Map2d(disp, (void *)glMap2dWrapper);
  SET_Map2f(disp, (void *)glMap2fWrapper);
  SET_MapBuffer(disp, (void *)glMapBufferWrapper);
  SET_MapBufferRange(disp, (void *)glMapBufferRangeWrapper);
  SET_MapGrid1d(disp, (void *)glMapGrid1dWrapper);
  SET_MapGrid1f(disp, (void *)glMapGrid1fWrapper);
  SET_MapGrid2d(disp, (void *)glMapGrid2dWrapper);
  SET_MapGrid2f(disp, (void *)glMapGrid2fWrapper);
  SET_MapNamedBuffer(disp, (void *)glMapNamedBufferWrapper);
  SET_MapNamedBufferEXT(disp, (void *)glMapNamedBufferEXTWrapper);
  SET_MapNamedBufferRange(disp, (void *)glMapNamedBufferRangeWrapper);
  SET_MapNamedBufferRangeEXT(disp, (void *)glMapNamedBufferRangeEXTWrapper);
  SET_Materialf(disp, (void *)glMaterialfWrapper);
  SET_Materialfv(disp, (void *)glMaterialfvWrapper);
  SET_Materiali(disp, (void *)glMaterialiWrapper);
  SET_Materialiv(disp, (void *)glMaterialivWrapper);
  SET_MatrixFrustumEXT(disp, (void *)glMatrixFrustumEXTWrapper);
  SET_MatrixLoadIdentityEXT(disp, (void *)glMatrixLoadIdentityEXTWrapper);
  SET_MatrixLoadTransposedEXT(disp, (void *)glMatrixLoadTransposedEXTWrapper);
  SET_MatrixLoadTransposefEXT(disp, (void *)glMatrixLoadTransposefEXTWrapper);
  SET_MatrixLoaddEXT(disp, (void *)glMatrixLoaddEXTWrapper);
  SET_MatrixLoadfEXT(disp, (void *)glMatrixLoadfEXTWrapper);
  SET_MatrixMode(disp, (void *)glMatrixModeWrapper);
  SET_MatrixMultTransposedEXT(disp, (void *)glMatrixMultTransposedEXTWrapper);
  SET_MatrixMultTransposefEXT(disp, (void *)glMatrixMultTransposefEXTWrapper);
  SET_MatrixMultdEXT(disp, (void *)glMatrixMultdEXTWrapper);
  SET_MatrixMultfEXT(disp, (void *)glMatrixMultfEXTWrapper);
  SET_MatrixOrthoEXT(disp, (void *)glMatrixOrthoEXTWrapper);
  SET_MatrixPopEXT(disp, (void *)glMatrixPopEXTWrapper);
  SET_MatrixPushEXT(disp, (void *)glMatrixPushEXTWrapper);
  SET_MatrixRotatedEXT(disp, (void *)glMatrixRotatedEXTWrapper);
  SET_MatrixRotatefEXT(disp, (void *)glMatrixRotatefEXTWrapper);
  SET_MatrixScaledEXT(disp, (void *)glMatrixScaledEXTWrapper);
  SET_MatrixScalefEXT(disp, (void *)glMatrixScalefEXTWrapper);
  SET_MatrixTranslatedEXT(disp, (void *)glMatrixTranslatedEXTWrapper);
  SET_MatrixTranslatefEXT(disp, (void *)glMatrixTranslatefEXTWrapper);
  SET_MaxShaderCompilerThreadsKHR(disp, (void *)glMaxShaderCompilerThreadsKHRWrapper);
  SET_MemoryBarrier(disp, (void *)glMemoryBarrierWrapper);
  SET_MemoryBarrierByRegion(disp, (void *)glMemoryBarrierByRegionWrapper);
  SET_MemoryObjectParameterivEXT(disp, (void *)glMemoryObjectParameterivEXTWrapper);
  SET_MinSampleShading(disp, (void *)glMinSampleShadingWrapper);
  SET_Minmax(disp, (void *)glMinmaxWrapper);
  SET_MultMatrixd(disp, (void *)glMultMatrixdWrapper);
  SET_MultMatrixf(disp, (void *)glMultMatrixfWrapper);
  SET_MultTransposeMatrixd(disp, (void *)glMultTransposeMatrixdWrapper);
  SET_MultTransposeMatrixf(disp, (void *)glMultTransposeMatrixfWrapper);
  SET_MultiDrawArrays(disp, (void *)glMultiDrawArraysWrapper);
  SET_MultiDrawArraysIndirect(disp, (void *)glMultiDrawArraysIndirectWrapper);
  SET_MultiDrawArraysIndirectCountARB(disp, (void *)glMultiDrawArraysIndirectCountARBWrapper);
  SET_MultiDrawElements(disp, (void *)glMultiDrawElementsWrapper);
  SET_MultiDrawElementsBaseVertex(disp, (void *)glMultiDrawElementsBaseVertexWrapper);
  SET_MultiDrawElementsIndirect(disp, (void *)glMultiDrawElementsIndirectWrapper);
  SET_MultiDrawElementsIndirectCountARB(disp, (void *)glMultiDrawElementsIndirectCountARBWrapper);
  SET_MultiModeDrawArraysIBM(disp, (void *)glMultiModeDrawArraysIBMWrapper);
  SET_MultiModeDrawElementsIBM(disp, (void *)glMultiModeDrawElementsIBMWrapper);
  SET_MultiTexBufferEXT(disp, (void *)glMultiTexBufferEXTWrapper);
  SET_MultiTexCoord1d(disp, (void *)glMultiTexCoord1dWrapper);
  SET_MultiTexCoord1dv(disp, (void *)glMultiTexCoord1dvWrapper);
  SET_MultiTexCoord1fARB(disp, (void *)glMultiTexCoord1fARBWrapper);
  SET_MultiTexCoord1fvARB(disp, (void *)glMultiTexCoord1fvARBWrapper);
  SET_MultiTexCoord1hNV(disp, (void *)glMultiTexCoord1hNVWrapper);
  SET_MultiTexCoord1hvNV(disp, (void *)glMultiTexCoord1hvNVWrapper);
  SET_MultiTexCoord1i(disp, (void *)glMultiTexCoord1iWrapper);
  SET_MultiTexCoord1iv(disp, (void *)glMultiTexCoord1ivWrapper);
  SET_MultiTexCoord1s(disp, (void *)glMultiTexCoord1sWrapper);
  SET_MultiTexCoord1sv(disp, (void *)glMultiTexCoord1svWrapper);
  SET_MultiTexCoord2d(disp, (void *)glMultiTexCoord2dWrapper);
  SET_MultiTexCoord2dv(disp, (void *)glMultiTexCoord2dvWrapper);
  SET_MultiTexCoord2fARB(disp, (void *)glMultiTexCoord2fARBWrapper);
  SET_MultiTexCoord2fvARB(disp, (void *)glMultiTexCoord2fvARBWrapper);
  SET_MultiTexCoord2hNV(disp, (void *)glMultiTexCoord2hNVWrapper);
  SET_MultiTexCoord2hvNV(disp, (void *)glMultiTexCoord2hvNVWrapper);
  SET_MultiTexCoord2i(disp, (void *)glMultiTexCoord2iWrapper);
  SET_MultiTexCoord2iv(disp, (void *)glMultiTexCoord2ivWrapper);
  SET_MultiTexCoord2s(disp, (void *)glMultiTexCoord2sWrapper);
  SET_MultiTexCoord2sv(disp, (void *)glMultiTexCoord2svWrapper);
  SET_MultiTexCoord3d(disp, (void *)glMultiTexCoord3dWrapper);
  SET_MultiTexCoord3dv(disp, (void *)glMultiTexCoord3dvWrapper);
  SET_MultiTexCoord3fARB(disp, (void *)glMultiTexCoord3fARBWrapper);
  SET_MultiTexCoord3fvARB(disp, (void *)glMultiTexCoord3fvARBWrapper);
  SET_MultiTexCoord3hNV(disp, (void *)glMultiTexCoord3hNVWrapper);
  SET_MultiTexCoord3hvNV(disp, (void *)glMultiTexCoord3hvNVWrapper);
  SET_MultiTexCoord3i(disp, (void *)glMultiTexCoord3iWrapper);
  SET_MultiTexCoord3iv(disp, (void *)glMultiTexCoord3ivWrapper);
  SET_MultiTexCoord3s(disp, (void *)glMultiTexCoord3sWrapper);
  SET_MultiTexCoord3sv(disp, (void *)glMultiTexCoord3svWrapper);
  SET_MultiTexCoord4d(disp, (void *)glMultiTexCoord4dWrapper);
  SET_MultiTexCoord4dv(disp, (void *)glMultiTexCoord4dvWrapper);
  SET_MultiTexCoord4fARB(disp, (void *)glMultiTexCoord4fARBWrapper);
  SET_MultiTexCoord4fvARB(disp, (void *)glMultiTexCoord4fvARBWrapper);
  SET_MultiTexCoord4hNV(disp, (void *)glMultiTexCoord4hNVWrapper);
  SET_MultiTexCoord4hvNV(disp, (void *)glMultiTexCoord4hvNVWrapper);
  SET_MultiTexCoord4i(disp, (void *)glMultiTexCoord4iWrapper);
  SET_MultiTexCoord4iv(disp, (void *)glMultiTexCoord4ivWrapper);
  SET_MultiTexCoord4s(disp, (void *)glMultiTexCoord4sWrapper);
  SET_MultiTexCoord4sv(disp, (void *)glMultiTexCoord4svWrapper);
  SET_MultiTexCoordP1ui(disp, (void *)glMultiTexCoordP1uiWrapper);
  SET_MultiTexCoordP1uiv(disp, (void *)glMultiTexCoordP1uivWrapper);
  SET_MultiTexCoordP2ui(disp, (void *)glMultiTexCoordP2uiWrapper);
  SET_MultiTexCoordP2uiv(disp, (void *)glMultiTexCoordP2uivWrapper);
  SET_MultiTexCoordP3ui(disp, (void *)glMultiTexCoordP3uiWrapper);
  SET_MultiTexCoordP3uiv(disp, (void *)glMultiTexCoordP3uivWrapper);
  SET_MultiTexCoordP4ui(disp, (void *)glMultiTexCoordP4uiWrapper);
  SET_MultiTexCoordP4uiv(disp, (void *)glMultiTexCoordP4uivWrapper);
  SET_MultiTexCoordPointerEXT(disp, (void *)glMultiTexCoordPointerEXTWrapper);
  SET_MultiTexEnvfEXT(disp, (void *)glMultiTexEnvfEXTWrapper);
  SET_MultiTexEnvfvEXT(disp, (void *)glMultiTexEnvfvEXTWrapper);
  SET_MultiTexEnviEXT(disp, (void *)glMultiTexEnviEXTWrapper);
  SET_MultiTexEnvivEXT(disp, (void *)glMultiTexEnvivEXTWrapper);
  SET_MultiTexGendEXT(disp, (void *)glMultiTexGendEXTWrapper);
  SET_MultiTexGendvEXT(disp, (void *)glMultiTexGendvEXTWrapper);
  SET_MultiTexGenfEXT(disp, (void *)glMultiTexGenfEXTWrapper);
  SET_MultiTexGenfvEXT(disp, (void *)glMultiTexGenfvEXTWrapper);
  SET_MultiTexGeniEXT(disp, (void *)glMultiTexGeniEXTWrapper);
  SET_MultiTexGenivEXT(disp, (void *)glMultiTexGenivEXTWrapper);
  SET_MultiTexImage1DEXT(disp, (void *)glMultiTexImage1DEXTWrapper);
  SET_MultiTexImage2DEXT(disp, (void *)glMultiTexImage2DEXTWrapper);
  SET_MultiTexImage3DEXT(disp, (void *)glMultiTexImage3DEXTWrapper);
  SET_MultiTexParameterIivEXT(disp, (void *)glMultiTexParameterIivEXTWrapper);
  SET_MultiTexParameterIuivEXT(disp, (void *)glMultiTexParameterIuivEXTWrapper);
  SET_MultiTexParameterfEXT(disp, (void *)glMultiTexParameterfEXTWrapper);
  SET_MultiTexParameterfvEXT(disp, (void *)glMultiTexParameterfvEXTWrapper);
  SET_MultiTexParameteriEXT(disp, (void *)glMultiTexParameteriEXTWrapper);
  SET_MultiTexParameterivEXT(disp, (void *)glMultiTexParameterivEXTWrapper);
  SET_MultiTexSubImage1DEXT(disp, (void *)glMultiTexSubImage1DEXTWrapper);
  SET_MultiTexSubImage2DEXT(disp, (void *)glMultiTexSubImage2DEXTWrapper);
  SET_MultiTexSubImage3DEXT(disp, (void *)glMultiTexSubImage3DEXTWrapper);
  SET_NamedBufferData(disp, (void *)glNamedBufferDataWrapper);
  SET_NamedBufferDataEXT(disp, (void *)glNamedBufferDataEXTWrapper);
  SET_NamedBufferPageCommitmentARB(disp, (void *)glNamedBufferPageCommitmentARBWrapper);
  SET_NamedBufferPageCommitmentEXT(disp, (void *)glNamedBufferPageCommitmentEXTWrapper);
  SET_NamedBufferStorage(disp, (void *)glNamedBufferStorageWrapper);
  SET_NamedBufferStorageEXT(disp, (void *)glNamedBufferStorageEXTWrapper);
  SET_NamedBufferStorageMemEXT(disp, (void *)glNamedBufferStorageMemEXTWrapper);
  SET_NamedBufferSubData(disp, (void *)glNamedBufferSubDataWrapper);
  SET_NamedBufferSubDataEXT(disp, (void *)glNamedBufferSubDataEXTWrapper);
  SET_NamedCopyBufferSubDataEXT(disp, (void *)glNamedCopyBufferSubDataEXTWrapper);
  SET_NamedFramebufferDrawBuffer(disp, (void *)glNamedFramebufferDrawBufferWrapper);
  SET_NamedFramebufferDrawBuffers(disp, (void *)glNamedFramebufferDrawBuffersWrapper);
  SET_NamedFramebufferParameteri(disp, (void *)glNamedFramebufferParameteriWrapper);
  SET_NamedFramebufferParameteriEXT(disp, (void *)glNamedFramebufferParameteriEXTWrapper);
  SET_NamedFramebufferReadBuffer(disp, (void *)glNamedFramebufferReadBufferWrapper);
  SET_NamedFramebufferRenderbuffer(disp, (void *)glNamedFramebufferRenderbufferWrapper);
  SET_NamedFramebufferRenderbufferEXT(disp, (void *)glNamedFramebufferRenderbufferEXTWrapper);
  SET_NamedFramebufferSampleLocationsfvARB(disp, (void *)glNamedFramebufferSampleLocationsfvARBWrapper);
  SET_NamedFramebufferTexture(disp, (void *)glNamedFramebufferTextureWrapper);
  SET_NamedFramebufferTexture1DEXT(disp, (void *)glNamedFramebufferTexture1DEXTWrapper);
  SET_NamedFramebufferTexture2DEXT(disp, (void *)glNamedFramebufferTexture2DEXTWrapper);
  SET_NamedFramebufferTexture3DEXT(disp, (void *)glNamedFramebufferTexture3DEXTWrapper);
  SET_NamedFramebufferTextureLayer(disp, (void *)glNamedFramebufferTextureLayerWrapper);
  SET_NamedFramebufferTextureMultiviewOVR(disp, (void *)glNamedFramebufferTextureMultiviewOVRWrapper);
  SET_NamedProgramLocalParameter4dEXT(disp, (void *)glNamedProgramLocalParameter4dEXTWrapper);
  SET_NamedProgramLocalParameter4dvEXT(disp, (void *)glNamedProgramLocalParameter4dvEXTWrapper);
  SET_NamedProgramLocalParameter4fEXT(disp, (void *)glNamedProgramLocalParameter4fEXTWrapper);
  SET_NamedProgramLocalParameter4fvEXT(disp, (void *)glNamedProgramLocalParameter4fvEXTWrapper);
  SET_NamedProgramLocalParameters4fvEXT(disp, (void *)glNamedProgramLocalParameters4fvEXTWrapper);
  SET_NamedProgramStringEXT(disp, (void *)glNamedProgramStringEXTWrapper);
  SET_NamedRenderbufferStorage(disp, (void *)glNamedRenderbufferStorageWrapper);
  SET_NamedRenderbufferStorageEXT(disp, (void *)glNamedRenderbufferStorageEXTWrapper);
  SET_NamedRenderbufferStorageMultisample(disp, (void *)glNamedRenderbufferStorageMultisampleWrapper);
  SET_NamedRenderbufferStorageMultisampleAdvancedAMD(disp, (void *)glNamedRenderbufferStorageMultisampleAdvancedAMDWrapper);
  SET_NamedRenderbufferStorageMultisampleEXT(disp, (void *)glNamedRenderbufferStorageMultisampleEXTWrapper);
  SET_NamedStringARB(disp, (void *)glNamedStringARBWrapper);
  SET_NewList(disp, (void *)glNewListWrapper);
  SET_Normal3b(disp, (void *)glNormal3bWrapper);
  SET_Normal3bv(disp, (void *)glNormal3bvWrapper);
  SET_Normal3d(disp, (void *)glNormal3dWrapper);
  SET_Normal3dv(disp, (void *)glNormal3dvWrapper);
  SET_Normal3f(disp, (void *)glNormal3fWrapper);
  SET_Normal3fv(disp, (void *)glNormal3fvWrapper);
  SET_Normal3hNV(disp, (void *)glNormal3hNVWrapper);
  SET_Normal3hvNV(disp, (void *)glNormal3hvNVWrapper);
  SET_Normal3i(disp, (void *)glNormal3iWrapper);
  SET_Normal3iv(disp, (void *)glNormal3ivWrapper);
  SET_Normal3s(disp, (void *)glNormal3sWrapper);
  SET_Normal3sv(disp, (void *)glNormal3svWrapper);
  SET_NormalP3ui(disp, (void *)glNormalP3uiWrapper);
  SET_NormalP3uiv(disp, (void *)glNormalP3uivWrapper);
  SET_NormalPointer(disp, (void *)glNormalPointerWrapper);
  SET_NormalPointerEXT(disp, (void *)glNormalPointerEXTWrapper);
  SET_ObjectLabel(disp, (void *)glObjectLabelWrapper);
  SET_ObjectPtrLabel(disp, (void *)glObjectPtrLabelWrapper);
  SET_ObjectPurgeableAPPLE(disp, (void *)glObjectPurgeableAPPLEWrapper);
  SET_ObjectUnpurgeableAPPLE(disp, (void *)glObjectUnpurgeableAPPLEWrapper);
  SET_Ortho(disp, (void *)glOrthoWrapper);
  SET_PassTexCoordATI(disp, (void *)glPassTexCoordATIWrapper);
  SET_PassThrough(disp, (void *)glPassThroughWrapper);
  SET_PatchParameterfv(disp, (void *)glPatchParameterfvWrapper);
  SET_PatchParameteri(disp, (void *)glPatchParameteriWrapper);
  SET_PauseTransformFeedback(disp, (void *)glPauseTransformFeedbackWrapper);
  SET_PixelMapfv(disp, (void *)glPixelMapfvWrapper);
  SET_PixelMapuiv(disp, (void *)glPixelMapuivWrapper);
  SET_PixelMapusv(disp, (void *)glPixelMapusvWrapper);
  SET_PixelStoref(disp, (void *)glPixelStorefWrapper);
  SET_PixelStorei(disp, (void *)glPixelStoreiWrapper);
  SET_PixelTransferf(disp, (void *)glPixelTransferfWrapper);
  SET_PixelTransferi(disp, (void *)glPixelTransferiWrapper);
  SET_PixelZoom(disp, (void *)glPixelZoomWrapper);
  SET_PointParameterf(disp, (void *)glPointParameterfWrapper);
  SET_PointParameterfv(disp, (void *)glPointParameterfvWrapper);
  SET_PointParameteri(disp, (void *)glPointParameteriWrapper);
  SET_PointParameteriv(disp, (void *)glPointParameterivWrapper);
  SET_PointSize(disp, (void *)glPointSizeWrapper);
  SET_PolygonMode(disp, (void *)glPolygonModeWrapper);
  SET_PolygonOffset(disp, (void *)glPolygonOffsetWrapper);
  SET_PolygonOffsetClampEXT(disp, (void *)glPolygonOffsetClampEXTWrapper);
  SET_PolygonStipple(disp, (void *)glPolygonStippleWrapper);
  SET_PopAttrib(disp, (void *)glPopAttribWrapper);
  SET_PopClientAttrib(disp, (void *)glPopClientAttribWrapper);
  SET_PopDebugGroup(disp, (void *)glPopDebugGroupWrapper);
  SET_PopMatrix(disp, (void *)glPopMatrixWrapper);
  SET_PopName(disp, (void *)glPopNameWrapper);
  SET_PrimitiveRestartIndex(disp, (void *)glPrimitiveRestartIndexWrapper);
  SET_PrimitiveRestartNV(disp, (void *)glPrimitiveRestartNVWrapper);
  SET_PrioritizeTextures(disp, (void *)glPrioritizeTexturesWrapper);
  SET_ProgramBinary(disp, (void *)glProgramBinaryWrapper);
  SET_ProgramEnvParameter4dARB(disp, (void *)glProgramEnvParameter4dARBWrapper);
  SET_ProgramEnvParameter4dvARB(disp, (void *)glProgramEnvParameter4dvARBWrapper);
  SET_ProgramEnvParameter4fARB(disp, (void *)glProgramEnvParameter4fARBWrapper);
  SET_ProgramEnvParameter4fvARB(disp, (void *)glProgramEnvParameter4fvARBWrapper);
  SET_ProgramEnvParameters4fvEXT(disp, (void *)glProgramEnvParameters4fvEXTWrapper);
  SET_ProgramLocalParameter4dARB(disp, (void *)glProgramLocalParameter4dARBWrapper);
  SET_ProgramLocalParameter4dvARB(disp, (void *)glProgramLocalParameter4dvARBWrapper);
  SET_ProgramLocalParameter4fARB(disp, (void *)glProgramLocalParameter4fARBWrapper);
  SET_ProgramLocalParameter4fvARB(disp, (void *)glProgramLocalParameter4fvARBWrapper);
  SET_ProgramLocalParameters4fvEXT(disp, (void *)glProgramLocalParameters4fvEXTWrapper);
  SET_ProgramNamedParameter4dNV(disp, (void *)glProgramNamedParameter4dNVWrapper);
  SET_ProgramNamedParameter4dvNV(disp, (void *)glProgramNamedParameter4dvNVWrapper);
  SET_ProgramNamedParameter4fNV(disp, (void *)glProgramNamedParameter4fNVWrapper);
  SET_ProgramNamedParameter4fvNV(disp, (void *)glProgramNamedParameter4fvNVWrapper);
  SET_ProgramParameteri(disp, (void *)glProgramParameteriWrapper);
  SET_ProgramParameters4dvNV(disp, (void *)glProgramParameters4dvNVWrapper);
  SET_ProgramParameters4fvNV(disp, (void *)glProgramParameters4fvNVWrapper);
  SET_ProgramStringARB(disp, (void *)glProgramStringARBWrapper);
  SET_ProgramUniform1d(disp, (void *)glProgramUniform1dWrapper);
  SET_ProgramUniform1dv(disp, (void *)glProgramUniform1dvWrapper);
  SET_ProgramUniform1f(disp, (void *)glProgramUniform1fWrapper);
  SET_ProgramUniform1fv(disp, (void *)glProgramUniform1fvWrapper);
  SET_ProgramUniform1i(disp, (void *)glProgramUniform1iWrapper);
  SET_ProgramUniform1i64ARB(disp, (void *)glProgramUniform1i64ARBWrapper);
  SET_ProgramUniform1i64vARB(disp, (void *)glProgramUniform1i64vARBWrapper);
  SET_ProgramUniform1iv(disp, (void *)glProgramUniform1ivWrapper);
  SET_ProgramUniform1ui(disp, (void *)glProgramUniform1uiWrapper);
  SET_ProgramUniform1ui64ARB(disp, (void *)glProgramUniform1ui64ARBWrapper);
  SET_ProgramUniform1ui64vARB(disp, (void *)glProgramUniform1ui64vARBWrapper);
  SET_ProgramUniform1uiv(disp, (void *)glProgramUniform1uivWrapper);
  SET_ProgramUniform2d(disp, (void *)glProgramUniform2dWrapper);
  SET_ProgramUniform2dv(disp, (void *)glProgramUniform2dvWrapper);
  SET_ProgramUniform2f(disp, (void *)glProgramUniform2fWrapper);
  SET_ProgramUniform2fv(disp, (void *)glProgramUniform2fvWrapper);
  SET_ProgramUniform2i(disp, (void *)glProgramUniform2iWrapper);
  SET_ProgramUniform2i64ARB(disp, (void *)glProgramUniform2i64ARBWrapper);
  SET_ProgramUniform2i64vARB(disp, (void *)glProgramUniform2i64vARBWrapper);
  SET_ProgramUniform2iv(disp, (void *)glProgramUniform2ivWrapper);
  SET_ProgramUniform2ui(disp, (void *)glProgramUniform2uiWrapper);
  SET_ProgramUniform2ui64ARB(disp, (void *)glProgramUniform2ui64ARBWrapper);
  SET_ProgramUniform2ui64vARB(disp, (void *)glProgramUniform2ui64vARBWrapper);
  SET_ProgramUniform2uiv(disp, (void *)glProgramUniform2uivWrapper);
  SET_ProgramUniform3d(disp, (void *)glProgramUniform3dWrapper);
  SET_ProgramUniform3dv(disp, (void *)glProgramUniform3dvWrapper);
  SET_ProgramUniform3f(disp, (void *)glProgramUniform3fWrapper);
  SET_ProgramUniform3fv(disp, (void *)glProgramUniform3fvWrapper);
  SET_ProgramUniform3i(disp, (void *)glProgramUniform3iWrapper);
  SET_ProgramUniform3i64ARB(disp, (void *)glProgramUniform3i64ARBWrapper);
  SET_ProgramUniform3i64vARB(disp, (void *)glProgramUniform3i64vARBWrapper);
  SET_ProgramUniform3iv(disp, (void *)glProgramUniform3ivWrapper);
  SET_ProgramUniform3ui(disp, (void *)glProgramUniform3uiWrapper);
  SET_ProgramUniform3ui64ARB(disp, (void *)glProgramUniform3ui64ARBWrapper);
  SET_ProgramUniform3ui64vARB(disp, (void *)glProgramUniform3ui64vARBWrapper);
  SET_ProgramUniform3uiv(disp, (void *)glProgramUniform3uivWrapper);
  SET_ProgramUniform4d(disp, (void *)glProgramUniform4dWrapper);
  SET_ProgramUniform4dv(disp, (void *)glProgramUniform4dvWrapper);
  SET_ProgramUniform4f(disp, (void *)glProgramUniform4fWrapper);
  SET_ProgramUniform4fv(disp, (void *)glProgramUniform4fvWrapper);
  SET_ProgramUniform4i(disp, (void *)glProgramUniform4iWrapper);
  SET_ProgramUniform4i64ARB(disp, (void *)glProgramUniform4i64ARBWrapper);
  SET_ProgramUniform4i64vARB(disp, (void *)glProgramUniform4i64vARBWrapper);
  SET_ProgramUniform4iv(disp, (void *)glProgramUniform4ivWrapper);
  SET_ProgramUniform4ui(disp, (void *)glProgramUniform4uiWrapper);
  SET_ProgramUniform4ui64ARB(disp, (void *)glProgramUniform4ui64ARBWrapper);
  SET_ProgramUniform4ui64vARB(disp, (void *)glProgramUniform4ui64vARBWrapper);
  SET_ProgramUniform4uiv(disp, (void *)glProgramUniform4uivWrapper);
  SET_ProgramUniformHandleui64ARB(disp, (void *)glProgramUniformHandleui64ARBWrapper);
  SET_ProgramUniformHandleui64vARB(disp, (void *)glProgramUniformHandleui64vARBWrapper);
  SET_ProgramUniformMatrix2dv(disp, (void *)glProgramUniformMatrix2dvWrapper);
  SET_ProgramUniformMatrix2fv(disp, (void *)glProgramUniformMatrix2fvWrapper);
  SET_ProgramUniformMatrix2x3dv(disp, (void *)glProgramUniformMatrix2x3dvWrapper);
  SET_ProgramUniformMatrix2x3fv(disp, (void *)glProgramUniformMatrix2x3fvWrapper);
  SET_ProgramUniformMatrix2x4dv(disp, (void *)glProgramUniformMatrix2x4dvWrapper);
  SET_ProgramUniformMatrix2x4fv(disp, (void *)glProgramUniformMatrix2x4fvWrapper);
  SET_ProgramUniformMatrix3dv(disp, (void *)glProgramUniformMatrix3dvWrapper);
  SET_ProgramUniformMatrix3fv(disp, (void *)glProgramUniformMatrix3fvWrapper);
  SET_ProgramUniformMatrix3x2dv(disp, (void *)glProgramUniformMatrix3x2dvWrapper);
  SET_ProgramUniformMatrix3x2fv(disp, (void *)glProgramUniformMatrix3x2fvWrapper);
  SET_ProgramUniformMatrix3x4dv(disp, (void *)glProgramUniformMatrix3x4dvWrapper);
  SET_ProgramUniformMatrix3x4fv(disp, (void *)glProgramUniformMatrix3x4fvWrapper);
  SET_ProgramUniformMatrix4dv(disp, (void *)glProgramUniformMatrix4dvWrapper);
  SET_ProgramUniformMatrix4fv(disp, (void *)glProgramUniformMatrix4fvWrapper);
  SET_ProgramUniformMatrix4x2dv(disp, (void *)glProgramUniformMatrix4x2dvWrapper);
  SET_ProgramUniformMatrix4x2fv(disp, (void *)glProgramUniformMatrix4x2fvWrapper);
  SET_ProgramUniformMatrix4x3dv(disp, (void *)glProgramUniformMatrix4x3dvWrapper);
  SET_ProgramUniformMatrix4x3fv(disp, (void *)glProgramUniformMatrix4x3fvWrapper);
  SET_ProvokingVertex(disp, (void *)glProvokingVertexWrapper);
  SET_PushAttrib(disp, (void *)glPushAttribWrapper);
  SET_PushClientAttrib(disp, (void *)glPushClientAttribWrapper);
  SET_PushClientAttribDefaultEXT(disp, (void *)glPushClientAttribDefaultEXTWrapper);
  SET_PushDebugGroup(disp, (void *)glPushDebugGroupWrapper);
  SET_PushMatrix(disp, (void *)glPushMatrixWrapper);
  SET_PushName(disp, (void *)glPushNameWrapper);
  SET_QueryCounter(disp, (void *)glQueryCounterWrapper);
  SET_QueryMatrixxOES(disp, (void *)glQueryMatrixxOESWrapper);
  SET_RasterPos2d(disp, (void *)glRasterPos2dWrapper);
  SET_RasterPos2dv(disp, (void *)glRasterPos2dvWrapper);
  SET_RasterPos2f(disp, (void *)glRasterPos2fWrapper);
  SET_RasterPos2fv(disp, (void *)glRasterPos2fvWrapper);
  SET_RasterPos2i(disp, (void *)glRasterPos2iWrapper);
  SET_RasterPos2iv(disp, (void *)glRasterPos2ivWrapper);
  SET_RasterPos2s(disp, (void *)glRasterPos2sWrapper);
  SET_RasterPos2sv(disp, (void *)glRasterPos2svWrapper);
  SET_RasterPos3d(disp, (void *)glRasterPos3dWrapper);
  SET_RasterPos3dv(disp, (void *)glRasterPos3dvWrapper);
  SET_RasterPos3f(disp, (void *)glRasterPos3fWrapper);
  SET_RasterPos3fv(disp, (void *)glRasterPos3fvWrapper);
  SET_RasterPos3i(disp, (void *)glRasterPos3iWrapper);
  SET_RasterPos3iv(disp, (void *)glRasterPos3ivWrapper);
  SET_RasterPos3s(disp, (void *)glRasterPos3sWrapper);
  SET_RasterPos3sv(disp, (void *)glRasterPos3svWrapper);
  SET_RasterPos4d(disp, (void *)glRasterPos4dWrapper);
  SET_RasterPos4dv(disp, (void *)glRasterPos4dvWrapper);
  SET_RasterPos4f(disp, (void *)glRasterPos4fWrapper);
  SET_RasterPos4fv(disp, (void *)glRasterPos4fvWrapper);
  SET_RasterPos4i(disp, (void *)glRasterPos4iWrapper);
  SET_RasterPos4iv(disp, (void *)glRasterPos4ivWrapper);
  SET_RasterPos4s(disp, (void *)glRasterPos4sWrapper);
  SET_RasterPos4sv(disp, (void *)glRasterPos4svWrapper);
  SET_ReadBuffer(disp, (void *)glReadBufferWrapper);
  SET_ReadPixels(disp, (void *)glReadPixelsWrapper);
  SET_ReadnPixelsARB(disp, (void *)glReadnPixelsARBWrapper);
  SET_Rectd(disp, (void *)glRectdWrapper);
  SET_Rectdv(disp, (void *)glRectdvWrapper);
  SET_Rectf(disp, (void *)glRectfWrapper);
  SET_Rectfv(disp, (void *)glRectfvWrapper);
  SET_Recti(disp, (void *)glRectiWrapper);
  SET_Rectiv(disp, (void *)glRectivWrapper);
  SET_Rects(disp, (void *)glRectsWrapper);
  SET_Rectsv(disp, (void *)glRectsvWrapper);
  SET_ReleaseShaderCompiler(disp, (void *)glReleaseShaderCompilerWrapper);
  SET_RenderMode(disp, (void *)glRenderModeWrapper);
  SET_RenderbufferStorage(disp, (void *)glRenderbufferStorageWrapper);
  SET_RenderbufferStorageMultisample(disp, (void *)glRenderbufferStorageMultisampleWrapper);
  SET_RenderbufferStorageMultisampleAdvancedAMD(disp, (void *)glRenderbufferStorageMultisampleAdvancedAMDWrapper);
  SET_RequestResidentProgramsNV(disp, (void *)glRequestResidentProgramsNVWrapper);
  SET_ResetHistogram(disp, (void *)glResetHistogramWrapper);
  SET_ResetMinmax(disp, (void *)glResetMinmaxWrapper);
  SET_ResizeBuffersMESA(disp, (void *)glResizeBuffersMESAWrapper);
  SET_ResumeTransformFeedback(disp, (void *)glResumeTransformFeedbackWrapper);
  SET_Rotated(disp, (void *)glRotatedWrapper);
  SET_Rotatef(disp, (void *)glRotatefWrapper);
  SET_SampleCoverage(disp, (void *)glSampleCoverageWrapper);
  SET_SampleMapATI(disp, (void *)glSampleMapATIWrapper);
  SET_SampleMaskSGIS(disp, (void *)glSampleMaskSGISWrapper);
  SET_SampleMaski(disp, (void *)glSampleMaskiWrapper);
  SET_SamplePatternSGIS(disp, (void *)glSamplePatternSGISWrapper);
  SET_SamplerParameterIiv(disp, (void *)glSamplerParameterIivWrapper);
  SET_SamplerParameterIuiv(disp, (void *)glSamplerParameterIuivWrapper);
  SET_SamplerParameterf(disp, (void *)glSamplerParameterfWrapper);
  SET_SamplerParameterfv(disp, (void *)glSamplerParameterfvWrapper);
  SET_SamplerParameteri(disp, (void *)glSamplerParameteriWrapper);
  SET_SamplerParameteriv(disp, (void *)glSamplerParameterivWrapper);
  SET_Scaled(disp, (void *)glScaledWrapper);
  SET_Scalef(disp, (void *)glScalefWrapper);
  SET_Scissor(disp, (void *)glScissorWrapper);
  SET_ScissorArrayv(disp, (void *)glScissorArrayvWrapper);
  SET_ScissorIndexed(disp, (void *)glScissorIndexedWrapper);
  SET_ScissorIndexedv(disp, (void *)glScissorIndexedvWrapper);
  SET_SecondaryColor3b(disp, (void *)glSecondaryColor3bWrapper);
  SET_SecondaryColor3bv(disp, (void *)glSecondaryColor3bvWrapper);
  SET_SecondaryColor3d(disp, (void *)glSecondaryColor3dWrapper);
  SET_SecondaryColor3dv(disp, (void *)glSecondaryColor3dvWrapper);
  SET_SecondaryColor3fEXT(disp, (void *)glSecondaryColor3fEXTWrapper);
  SET_SecondaryColor3fvEXT(disp, (void *)glSecondaryColor3fvEXTWrapper);
  SET_SecondaryColor3hNV(disp, (void *)glSecondaryColor3hNVWrapper);
  SET_SecondaryColor3hvNV(disp, (void *)glSecondaryColor3hvNVWrapper);
  SET_SecondaryColor3i(disp, (void *)glSecondaryColor3iWrapper);
  SET_SecondaryColor3iv(disp, (void *)glSecondaryColor3ivWrapper);
  SET_SecondaryColor3s(disp, (void *)glSecondaryColor3sWrapper);
  SET_SecondaryColor3sv(disp, (void *)glSecondaryColor3svWrapper);
  SET_SecondaryColor3ub(disp, (void *)glSecondaryColor3ubWrapper);
  SET_SecondaryColor3ubv(disp, (void *)glSecondaryColor3ubvWrapper);
  SET_SecondaryColor3ui(disp, (void *)glSecondaryColor3uiWrapper);
  SET_SecondaryColor3uiv(disp, (void *)glSecondaryColor3uivWrapper);
  SET_SecondaryColor3us(disp, (void *)glSecondaryColor3usWrapper);
  SET_SecondaryColor3usv(disp, (void *)glSecondaryColor3usvWrapper);
  SET_SecondaryColorP3ui(disp, (void *)glSecondaryColorP3uiWrapper);
  SET_SecondaryColorP3uiv(disp, (void *)glSecondaryColorP3uivWrapper);
  SET_SecondaryColorPointer(disp, (void *)glSecondaryColorPointerWrapper);
  SET_SelectBuffer(disp, (void *)glSelectBufferWrapper);
  SET_SelectPerfMonitorCountersAMD(disp, (void *)glSelectPerfMonitorCountersAMDWrapper);
  SET_SemaphoreParameterui64vEXT(disp, (void *)glSemaphoreParameterui64vEXTWrapper);
  SET_SeparableFilter2D(disp, (void *)glSeparableFilter2DWrapper);
  SET_SetFragmentShaderConstantATI(disp, (void *)glSetFragmentShaderConstantATIWrapper);
  SET_ShadeModel(disp, (void *)glShadeModelWrapper);
  SET_ShaderBinary(disp, (void *)glShaderBinaryWrapper);
  SET_ShaderSource(disp, (void *)glShaderSourceWrapper);
  SET_ShaderStorageBlockBinding(disp, (void *)glShaderStorageBlockBindingWrapper);
  SET_SignalSemaphoreEXT(disp, (void *)glSignalSemaphoreEXTWrapper);
  SET_SpecializeShaderARB(disp, (void *)glSpecializeShaderARBWrapper);
  SET_StencilFunc(disp, (void *)glStencilFuncWrapper);
  SET_StencilFuncSeparate(disp, (void *)glStencilFuncSeparateWrapper);
  SET_StencilFuncSeparateATI(disp, (void *)glStencilFuncSeparateATIWrapper);
  SET_StencilMask(disp, (void *)glStencilMaskWrapper);
  SET_StencilMaskSeparate(disp, (void *)glStencilMaskSeparateWrapper);
  SET_StencilOp(disp, (void *)glStencilOpWrapper);
  SET_StencilOpSeparate(disp, (void *)glStencilOpSeparateWrapper);
  SET_StringMarkerGREMEDY(disp, (void *)glStringMarkerGREMEDYWrapper);
  SET_SubpixelPrecisionBiasNV(disp, (void *)glSubpixelPrecisionBiasNVWrapper);
  SET_TexBuffer(disp, (void *)glTexBufferWrapper);
  SET_TexBufferRange(disp, (void *)glTexBufferRangeWrapper);
  SET_TexBumpParameterfvATI(disp, (void *)glTexBumpParameterfvATIWrapper);
  SET_TexBumpParameterivATI(disp, (void *)glTexBumpParameterivATIWrapper);
  SET_TexCoord1d(disp, (void *)glTexCoord1dWrapper);
  SET_TexCoord1dv(disp, (void *)glTexCoord1dvWrapper);
  SET_TexCoord1f(disp, (void *)glTexCoord1fWrapper);
  SET_TexCoord1fv(disp, (void *)glTexCoord1fvWrapper);
  SET_TexCoord1hNV(disp, (void *)glTexCoord1hNVWrapper);
  SET_TexCoord1hvNV(disp, (void *)glTexCoord1hvNVWrapper);
  SET_TexCoord1i(disp, (void *)glTexCoord1iWrapper);
  SET_TexCoord1iv(disp, (void *)glTexCoord1ivWrapper);
  SET_TexCoord1s(disp, (void *)glTexCoord1sWrapper);
  SET_TexCoord1sv(disp, (void *)glTexCoord1svWrapper);
  SET_TexCoord2d(disp, (void *)glTexCoord2dWrapper);
  SET_TexCoord2dv(disp, (void *)glTexCoord2dvWrapper);
  SET_TexCoord2f(disp, (void *)glTexCoord2fWrapper);
  SET_TexCoord2fv(disp, (void *)glTexCoord2fvWrapper);
  SET_TexCoord2hNV(disp, (void *)glTexCoord2hNVWrapper);
  SET_TexCoord2hvNV(disp, (void *)glTexCoord2hvNVWrapper);
  SET_TexCoord2i(disp, (void *)glTexCoord2iWrapper);
  SET_TexCoord2iv(disp, (void *)glTexCoord2ivWrapper);
  SET_TexCoord2s(disp, (void *)glTexCoord2sWrapper);
  SET_TexCoord2sv(disp, (void *)glTexCoord2svWrapper);
  SET_TexCoord3d(disp, (void *)glTexCoord3dWrapper);
  SET_TexCoord3dv(disp, (void *)glTexCoord3dvWrapper);
  SET_TexCoord3f(disp, (void *)glTexCoord3fWrapper);
  SET_TexCoord3fv(disp, (void *)glTexCoord3fvWrapper);
  SET_TexCoord3hNV(disp, (void *)glTexCoord3hNVWrapper);
  SET_TexCoord3hvNV(disp, (void *)glTexCoord3hvNVWrapper);
  SET_TexCoord3i(disp, (void *)glTexCoord3iWrapper);
  SET_TexCoord3iv(disp, (void *)glTexCoord3ivWrapper);
  SET_TexCoord3s(disp, (void *)glTexCoord3sWrapper);
  SET_TexCoord3sv(disp, (void *)glTexCoord3svWrapper);
  SET_TexCoord4d(disp, (void *)glTexCoord4dWrapper);
  SET_TexCoord4dv(disp, (void *)glTexCoord4dvWrapper);
  SET_TexCoord4f(disp, (void *)glTexCoord4fWrapper);
  SET_TexCoord4fv(disp, (void *)glTexCoord4fvWrapper);
  SET_TexCoord4hNV(disp, (void *)glTexCoord4hNVWrapper);
  SET_TexCoord4hvNV(disp, (void *)glTexCoord4hvNVWrapper);
  SET_TexCoord4i(disp, (void *)glTexCoord4iWrapper);
  SET_TexCoord4iv(disp, (void *)glTexCoord4ivWrapper);
  SET_TexCoord4s(disp, (void *)glTexCoord4sWrapper);
  SET_TexCoord4sv(disp, (void *)glTexCoord4svWrapper);
  SET_TexCoordP1ui(disp, (void *)glTexCoordP1uiWrapper);
  SET_TexCoordP1uiv(disp, (void *)glTexCoordP1uivWrapper);
  SET_TexCoordP2ui(disp, (void *)glTexCoordP2uiWrapper);
  SET_TexCoordP2uiv(disp, (void *)glTexCoordP2uivWrapper);
  SET_TexCoordP3ui(disp, (void *)glTexCoordP3uiWrapper);
  SET_TexCoordP3uiv(disp, (void *)glTexCoordP3uivWrapper);
  SET_TexCoordP4ui(disp, (void *)glTexCoordP4uiWrapper);
  SET_TexCoordP4uiv(disp, (void *)glTexCoordP4uivWrapper);
  SET_TexCoordPointer(disp, (void *)glTexCoordPointerWrapper);
  SET_TexCoordPointerEXT(disp, (void *)glTexCoordPointerEXTWrapper);
  SET_TexEnvf(disp, (void *)glTexEnvfWrapper);
  SET_TexEnvfv(disp, (void *)glTexEnvfvWrapper);
  SET_TexEnvi(disp, (void *)glTexEnviWrapper);
  SET_TexEnviv(disp, (void *)glTexEnvivWrapper);
  SET_TexGend(disp, (void *)glTexGendWrapper);
  SET_TexGendv(disp, (void *)glTexGendvWrapper);
  SET_TexGenf(disp, (void *)glTexGenfWrapper);
  SET_TexGenfv(disp, (void *)glTexGenfvWrapper);
  SET_TexGeni(disp, (void *)glTexGeniWrapper);
  SET_TexGeniv(disp, (void *)glTexGenivWrapper);
  SET_TexGenxOES(disp, (void *)glTexGenxOESWrapper);
  SET_TexGenxvOES(disp, (void *)glTexGenxvOESWrapper);
  SET_TexImage1D(disp, (void *)glTexImage1DWrapper);
  SET_TexImage2D(disp, (void *)glTexImage2DWrapper);
  SET_TexImage2DMultisample(disp, (void *)glTexImage2DMultisampleWrapper);
  SET_TexImage3D(disp, (void *)glTexImage3DWrapper);
  SET_TexImage3DMultisample(disp, (void *)glTexImage3DMultisampleWrapper);
  SET_TexPageCommitmentARB(disp, (void *)glTexPageCommitmentARBWrapper);
  SET_TexParameterIiv(disp, (void *)glTexParameterIivWrapper);
  SET_TexParameterIuiv(disp, (void *)glTexParameterIuivWrapper);
  SET_TexParameterf(disp, (void *)glTexParameterfWrapper);
  SET_TexParameterfv(disp, (void *)glTexParameterfvWrapper);
  SET_TexParameteri(disp, (void *)glTexParameteriWrapper);
  SET_TexParameteriv(disp, (void *)glTexParameterivWrapper);
  SET_TexStorage1D(disp, (void *)glTexStorage1DWrapper);
  SET_TexStorage2D(disp, (void *)glTexStorage2DWrapper);
  SET_TexStorage2DMultisample(disp, (void *)glTexStorage2DMultisampleWrapper);
  SET_TexStorage3D(disp, (void *)glTexStorage3DWrapper);
  SET_TexStorage3DMultisample(disp, (void *)glTexStorage3DMultisampleWrapper);
  SET_TexStorageMem1DEXT(disp, (void *)glTexStorageMem1DEXTWrapper);
  SET_TexStorageMem2DEXT(disp, (void *)glTexStorageMem2DEXTWrapper);
  SET_TexStorageMem2DMultisampleEXT(disp, (void *)glTexStorageMem2DMultisampleEXTWrapper);
  SET_TexStorageMem3DEXT(disp, (void *)glTexStorageMem3DEXTWrapper);
  SET_TexStorageMem3DMultisampleEXT(disp, (void *)glTexStorageMem3DMultisampleEXTWrapper);
  SET_TexSubImage1D(disp, (void *)glTexSubImage1DWrapper);
  SET_TexSubImage2D(disp, (void *)glTexSubImage2DWrapper);
  SET_TexSubImage3D(disp, (void *)glTexSubImage3DWrapper);
  SET_TextureBarrierNV(disp, (void *)glTextureBarrierNVWrapper);
  SET_TextureBuffer(disp, (void *)glTextureBufferWrapper);
  SET_TextureBufferEXT(disp, (void *)glTextureBufferEXTWrapper);
  SET_TextureBufferRange(disp, (void *)glTextureBufferRangeWrapper);
  SET_TextureBufferRangeEXT(disp, (void *)glTextureBufferRangeEXTWrapper);
  SET_TextureImage1DEXT(disp, (void *)glTextureImage1DEXTWrapper);
  SET_TextureImage2DEXT(disp, (void *)glTextureImage2DEXTWrapper);
  SET_TextureImage3DEXT(disp, (void *)glTextureImage3DEXTWrapper);
  SET_TexturePageCommitmentEXT(disp, (void *)glTexturePageCommitmentEXTWrapper);
  SET_TextureParameterIiv(disp, (void *)glTextureParameterIivWrapper);
  SET_TextureParameterIivEXT(disp, (void *)glTextureParameterIivEXTWrapper);
  SET_TextureParameterIuiv(disp, (void *)glTextureParameterIuivWrapper);
  SET_TextureParameterIuivEXT(disp, (void *)glTextureParameterIuivEXTWrapper);
  SET_TextureParameterf(disp, (void *)glTextureParameterfWrapper);
  SET_TextureParameterfEXT(disp, (void *)glTextureParameterfEXTWrapper);
  SET_TextureParameterfv(disp, (void *)glTextureParameterfvWrapper);
  SET_TextureParameterfvEXT(disp, (void *)glTextureParameterfvEXTWrapper);
  SET_TextureParameteri(disp, (void *)glTextureParameteriWrapper);
  SET_TextureParameteriEXT(disp, (void *)glTextureParameteriEXTWrapper);
  SET_TextureParameteriv(disp, (void *)glTextureParameterivWrapper);
  SET_TextureParameterivEXT(disp, (void *)glTextureParameterivEXTWrapper);
  SET_TextureStorage1D(disp, (void *)glTextureStorage1DWrapper);
  SET_TextureStorage1DEXT(disp, (void *)glTextureStorage1DEXTWrapper);
  SET_TextureStorage2D(disp, (void *)glTextureStorage2DWrapper);
  SET_TextureStorage2DEXT(disp, (void *)glTextureStorage2DEXTWrapper);
  SET_TextureStorage2DMultisample(disp, (void *)glTextureStorage2DMultisampleWrapper);
  SET_TextureStorage2DMultisampleEXT(disp, (void *)glTextureStorage2DMultisampleEXTWrapper);
  SET_TextureStorage3D(disp, (void *)glTextureStorage3DWrapper);
  SET_TextureStorage3DEXT(disp, (void *)glTextureStorage3DEXTWrapper);
  SET_TextureStorage3DMultisample(disp, (void *)glTextureStorage3DMultisampleWrapper);
  SET_TextureStorage3DMultisampleEXT(disp, (void *)glTextureStorage3DMultisampleEXTWrapper);
  SET_TextureStorageMem1DEXT(disp, (void *)glTextureStorageMem1DEXTWrapper);
  SET_TextureStorageMem2DEXT(disp, (void *)glTextureStorageMem2DEXTWrapper);
  SET_TextureStorageMem2DMultisampleEXT(disp, (void *)glTextureStorageMem2DMultisampleEXTWrapper);
  SET_TextureStorageMem3DEXT(disp, (void *)glTextureStorageMem3DEXTWrapper);
  SET_TextureStorageMem3DMultisampleEXT(disp, (void *)glTextureStorageMem3DMultisampleEXTWrapper);
  SET_TextureSubImage1D(disp, (void *)glTextureSubImage1DWrapper);
  SET_TextureSubImage1DEXT(disp, (void *)glTextureSubImage1DEXTWrapper);
  SET_TextureSubImage2D(disp, (void *)glTextureSubImage2DWrapper);
  SET_TextureSubImage2DEXT(disp, (void *)glTextureSubImage2DEXTWrapper);
  SET_TextureSubImage3D(disp, (void *)glTextureSubImage3DWrapper);
  SET_TextureSubImage3DEXT(disp, (void *)glTextureSubImage3DEXTWrapper);
  SET_TextureView(disp, (void *)glTextureViewWrapper);
  SET_TrackMatrixNV(disp, (void *)glTrackMatrixNVWrapper);
  SET_TransformFeedbackBufferBase(disp, (void *)glTransformFeedbackBufferBaseWrapper);
  SET_TransformFeedbackBufferRange(disp, (void *)glTransformFeedbackBufferRangeWrapper);
  SET_TransformFeedbackVaryings(disp, (void *)glTransformFeedbackVaryingsWrapper);
  SET_Translated(disp, (void *)glTranslatedWrapper);
  SET_Translatef(disp, (void *)glTranslatefWrapper);
  SET_Uniform1d(disp, (void *)glUniform1dWrapper);
  SET_Uniform1dv(disp, (void *)glUniform1dvWrapper);
  SET_Uniform1f(disp, (void *)glUniform1fWrapper);
  SET_Uniform1fv(disp, (void *)glUniform1fvWrapper);
  SET_Uniform1i(disp, (void *)glUniform1iWrapper);
  SET_Uniform1i64ARB(disp, (void *)glUniform1i64ARBWrapper);
  SET_Uniform1i64vARB(disp, (void *)glUniform1i64vARBWrapper);
  SET_Uniform1iv(disp, (void *)glUniform1ivWrapper);
  SET_Uniform1ui(disp, (void *)glUniform1uiWrapper);
  SET_Uniform1ui64ARB(disp, (void *)glUniform1ui64ARBWrapper);
  SET_Uniform1ui64vARB(disp, (void *)glUniform1ui64vARBWrapper);
  SET_Uniform1uiv(disp, (void *)glUniform1uivWrapper);
  SET_Uniform2d(disp, (void *)glUniform2dWrapper);
  SET_Uniform2dv(disp, (void *)glUniform2dvWrapper);
  SET_Uniform2f(disp, (void *)glUniform2fWrapper);
  SET_Uniform2fv(disp, (void *)glUniform2fvWrapper);
  SET_Uniform2i(disp, (void *)glUniform2iWrapper);
  SET_Uniform2i64ARB(disp, (void *)glUniform2i64ARBWrapper);
  SET_Uniform2i64vARB(disp, (void *)glUniform2i64vARBWrapper);
  SET_Uniform2iv(disp, (void *)glUniform2ivWrapper);
  SET_Uniform2ui(disp, (void *)glUniform2uiWrapper);
  SET_Uniform2ui64ARB(disp, (void *)glUniform2ui64ARBWrapper);
  SET_Uniform2ui64vARB(disp, (void *)glUniform2ui64vARBWrapper);
  SET_Uniform2uiv(disp, (void *)glUniform2uivWrapper);
  SET_Uniform3d(disp, (void *)glUniform3dWrapper);
  SET_Uniform3dv(disp, (void *)glUniform3dvWrapper);
  SET_Uniform3f(disp, (void *)glUniform3fWrapper);
  SET_Uniform3fv(disp, (void *)glUniform3fvWrapper);
  SET_Uniform3i(disp, (void *)glUniform3iWrapper);
  SET_Uniform3i64ARB(disp, (void *)glUniform3i64ARBWrapper);
  SET_Uniform3i64vARB(disp, (void *)glUniform3i64vARBWrapper);
  SET_Uniform3iv(disp, (void *)glUniform3ivWrapper);
  SET_Uniform3ui(disp, (void *)glUniform3uiWrapper);
  SET_Uniform3ui64ARB(disp, (void *)glUniform3ui64ARBWrapper);
  SET_Uniform3ui64vARB(disp, (void *)glUniform3ui64vARBWrapper);
  SET_Uniform3uiv(disp, (void *)glUniform3uivWrapper);
  SET_Uniform4d(disp, (void *)glUniform4dWrapper);
  SET_Uniform4dv(disp, (void *)glUniform4dvWrapper);
  SET_Uniform4f(disp, (void *)glUniform4fWrapper);
  SET_Uniform4fv(disp, (void *)glUniform4fvWrapper);
  SET_Uniform4i(disp, (void *)glUniform4iWrapper);
  SET_Uniform4i64ARB(disp, (void *)glUniform4i64ARBWrapper);
  SET_Uniform4i64vARB(disp, (void *)glUniform4i64vARBWrapper);
  SET_Uniform4iv(disp, (void *)glUniform4ivWrapper);
  SET_Uniform4ui(disp, (void *)glUniform4uiWrapper);
  SET_Uniform4ui64ARB(disp, (void *)glUniform4ui64ARBWrapper);
  SET_Uniform4ui64vARB(disp, (void *)glUniform4ui64vARBWrapper);
  SET_Uniform4uiv(disp, (void *)glUniform4uivWrapper);
  SET_UniformBlockBinding(disp, (void *)glUniformBlockBindingWrapper);
  SET_UniformHandleui64ARB(disp, (void *)glUniformHandleui64ARBWrapper);
  SET_UniformHandleui64vARB(disp, (void *)glUniformHandleui64vARBWrapper);
  SET_UniformMatrix2dv(disp, (void *)glUniformMatrix2dvWrapper);
  SET_UniformMatrix2fv(disp, (void *)glUniformMatrix2fvWrapper);
  SET_UniformMatrix2x3dv(disp, (void *)glUniformMatrix2x3dvWrapper);
  SET_UniformMatrix2x3fv(disp, (void *)glUniformMatrix2x3fvWrapper);
  SET_UniformMatrix2x4dv(disp, (void *)glUniformMatrix2x4dvWrapper);
  SET_UniformMatrix2x4fv(disp, (void *)glUniformMatrix2x4fvWrapper);
  SET_UniformMatrix3dv(disp, (void *)glUniformMatrix3dvWrapper);
  SET_UniformMatrix3fv(disp, (void *)glUniformMatrix3fvWrapper);
  SET_UniformMatrix3x2dv(disp, (void *)glUniformMatrix3x2dvWrapper);
  SET_UniformMatrix3x2fv(disp, (void *)glUniformMatrix3x2fvWrapper);
  SET_UniformMatrix3x4dv(disp, (void *)glUniformMatrix3x4dvWrapper);
  SET_UniformMatrix3x4fv(disp, (void *)glUniformMatrix3x4fvWrapper);
  SET_UniformMatrix4dv(disp, (void *)glUniformMatrix4dvWrapper);
  SET_UniformMatrix4fv(disp, (void *)glUniformMatrix4fvWrapper);
  SET_UniformMatrix4x2dv(disp, (void *)glUniformMatrix4x2dvWrapper);
  SET_UniformMatrix4x2fv(disp, (void *)glUniformMatrix4x2fvWrapper);
  SET_UniformMatrix4x3dv(disp, (void *)glUniformMatrix4x3dvWrapper);
  SET_UniformMatrix4x3fv(disp, (void *)glUniformMatrix4x3fvWrapper);
  SET_UniformSubroutinesuiv(disp, (void *)glUniformSubroutinesuivWrapper);
  SET_UnlockArraysEXT(disp, (void *)glUnlockArraysEXTWrapper);
  SET_UnmapBuffer(disp, (void *)glUnmapBufferWrapper);
  SET_UnmapNamedBufferEXT(disp, (void *)glUnmapNamedBufferEXTWrapper);
  SET_UseProgram(disp, (void *)glUseProgramWrapper);
  SET_UseProgramStages(disp, (void *)glUseProgramStagesWrapper);
  SET_UseShaderProgramEXT(disp, (void *)glUseShaderProgramEXTWrapper);
  SET_VDPAUFiniNV(disp, (void *)glVDPAUFiniNVWrapper);
  SET_VDPAUGetSurfaceivNV(disp, (void *)glVDPAUGetSurfaceivNVWrapper);
  SET_VDPAUInitNV(disp, (void *)glVDPAUInitNVWrapper);
  SET_VDPAUIsSurfaceNV(disp, (void *)glVDPAUIsSurfaceNVWrapper);
  SET_VDPAUMapSurfacesNV(disp, (void *)glVDPAUMapSurfacesNVWrapper);
  SET_VDPAURegisterOutputSurfaceNV(disp, (void *)glVDPAURegisterOutputSurfaceNVWrapper);
  SET_VDPAURegisterVideoSurfaceNV(disp, (void *)glVDPAURegisterVideoSurfaceNVWrapper);
  SET_VDPAUSurfaceAccessNV(disp, (void *)glVDPAUSurfaceAccessNVWrapper);
  SET_VDPAUUnmapSurfacesNV(disp, (void *)glVDPAUUnmapSurfacesNVWrapper);
  SET_VDPAUUnregisterSurfaceNV(disp, (void *)glVDPAUUnregisterSurfaceNVWrapper);
  SET_ValidateProgram(disp, (void *)glValidateProgramWrapper);
  SET_ValidateProgramPipeline(disp, (void *)glValidateProgramPipelineWrapper);
  SET_Vertex2d(disp, (void *)glVertex2dWrapper);
  SET_Vertex2dv(disp, (void *)glVertex2dvWrapper);
  SET_Vertex2f(disp, (void *)glVertex2fWrapper);
  SET_Vertex2fv(disp, (void *)glVertex2fvWrapper);
  SET_Vertex2hNV(disp, (void *)glVertex2hNVWrapper);
  SET_Vertex2hvNV(disp, (void *)glVertex2hvNVWrapper);
  SET_Vertex2i(disp, (void *)glVertex2iWrapper);
  SET_Vertex2iv(disp, (void *)glVertex2ivWrapper);
  SET_Vertex2s(disp, (void *)glVertex2sWrapper);
  SET_Vertex2sv(disp, (void *)glVertex2svWrapper);
  SET_Vertex3d(disp, (void *)glVertex3dWrapper);
  SET_Vertex3dv(disp, (void *)glVertex3dvWrapper);
  SET_Vertex3f(disp, (void *)glVertex3fWrapper);
  SET_Vertex3fv(disp, (void *)glVertex3fvWrapper);
  SET_Vertex3hNV(disp, (void *)glVertex3hNVWrapper);
  SET_Vertex3hvNV(disp, (void *)glVertex3hvNVWrapper);
  SET_Vertex3i(disp, (void *)glVertex3iWrapper);
  SET_Vertex3iv(disp, (void *)glVertex3ivWrapper);
  SET_Vertex3s(disp, (void *)glVertex3sWrapper);
  SET_Vertex3sv(disp, (void *)glVertex3svWrapper);
  SET_Vertex4d(disp, (void *)glVertex4dWrapper);
  SET_Vertex4dv(disp, (void *)glVertex4dvWrapper);
  SET_Vertex4f(disp, (void *)glVertex4fWrapper);
  SET_Vertex4fv(disp, (void *)glVertex4fvWrapper);
  SET_Vertex4hNV(disp, (void *)glVertex4hNVWrapper);
  SET_Vertex4hvNV(disp, (void *)glVertex4hvNVWrapper);
  SET_Vertex4i(disp, (void *)glVertex4iWrapper);
  SET_Vertex4iv(disp, (void *)glVertex4ivWrapper);
  SET_Vertex4s(disp, (void *)glVertex4sWrapper);
  SET_Vertex4sv(disp, (void *)glVertex4svWrapper);
  SET_VertexArrayAttribBinding(disp, (void *)glVertexArrayAttribBindingWrapper);
  SET_VertexArrayAttribFormat(disp, (void *)glVertexArrayAttribFormatWrapper);
  SET_VertexArrayAttribIFormat(disp, (void *)glVertexArrayAttribIFormatWrapper);
  SET_VertexArrayAttribLFormat(disp, (void *)glVertexArrayAttribLFormatWrapper);
  SET_VertexArrayBindVertexBufferEXT(disp, (void *)glVertexArrayBindVertexBufferEXTWrapper);
  SET_VertexArrayBindingDivisor(disp, (void *)glVertexArrayBindingDivisorWrapper);
  SET_VertexArrayColorOffsetEXT(disp, (void *)glVertexArrayColorOffsetEXTWrapper);
  SET_VertexArrayEdgeFlagOffsetEXT(disp, (void *)glVertexArrayEdgeFlagOffsetEXTWrapper);
  SET_VertexArrayElementBuffer(disp, (void *)glVertexArrayElementBufferWrapper);
  SET_VertexArrayFogCoordOffsetEXT(disp, (void *)glVertexArrayFogCoordOffsetEXTWrapper);
  SET_VertexArrayIndexOffsetEXT(disp, (void *)glVertexArrayIndexOffsetEXTWrapper);
  SET_VertexArrayMultiTexCoordOffsetEXT(disp, (void *)glVertexArrayMultiTexCoordOffsetEXTWrapper);
  SET_VertexArrayNormalOffsetEXT(disp, (void *)glVertexArrayNormalOffsetEXTWrapper);
  SET_VertexArraySecondaryColorOffsetEXT(disp, (void *)glVertexArraySecondaryColorOffsetEXTWrapper);
  SET_VertexArrayTexCoordOffsetEXT(disp, (void *)glVertexArrayTexCoordOffsetEXTWrapper);
  SET_VertexArrayVertexAttribBindingEXT(disp, (void *)glVertexArrayVertexAttribBindingEXTWrapper);
  SET_VertexArrayVertexAttribDivisorEXT(disp, (void *)glVertexArrayVertexAttribDivisorEXTWrapper);
  SET_VertexArrayVertexAttribFormatEXT(disp, (void *)glVertexArrayVertexAttribFormatEXTWrapper);
  SET_VertexArrayVertexAttribIFormatEXT(disp, (void *)glVertexArrayVertexAttribIFormatEXTWrapper);
  SET_VertexArrayVertexAttribIOffsetEXT(disp, (void *)glVertexArrayVertexAttribIOffsetEXTWrapper);
  SET_VertexArrayVertexAttribLFormatEXT(disp, (void *)glVertexArrayVertexAttribLFormatEXTWrapper);
  SET_VertexArrayVertexAttribLOffsetEXT(disp, (void *)glVertexArrayVertexAttribLOffsetEXTWrapper);
  SET_VertexArrayVertexAttribOffsetEXT(disp, (void *)glVertexArrayVertexAttribOffsetEXTWrapper);
  SET_VertexArrayVertexBindingDivisorEXT(disp, (void *)glVertexArrayVertexBindingDivisorEXTWrapper);
  SET_VertexArrayVertexBuffer(disp, (void *)glVertexArrayVertexBufferWrapper);
  SET_VertexArrayVertexBuffers(disp, (void *)glVertexArrayVertexBuffersWrapper);
  SET_VertexArrayVertexOffsetEXT(disp, (void *)glVertexArrayVertexOffsetEXTWrapper);
  SET_VertexAttrib1d(disp, (void *)glVertexAttrib1dWrapper);
  SET_VertexAttrib1dNV(disp, (void *)glVertexAttrib1dNVWrapper);
  SET_VertexAttrib1dv(disp, (void *)glVertexAttrib1dvWrapper);
  SET_VertexAttrib1dvNV(disp, (void *)glVertexAttrib1dvNVWrapper);
  SET_VertexAttrib1fARB(disp, (void *)glVertexAttrib1fARBWrapper);
  SET_VertexAttrib1fNV(disp, (void *)glVertexAttrib1fNVWrapper);
  SET_VertexAttrib1fvARB(disp, (void *)glVertexAttrib1fvARBWrapper);
  SET_VertexAttrib1fvNV(disp, (void *)glVertexAttrib1fvNVWrapper);
  SET_VertexAttrib1hNV(disp, (void *)glVertexAttrib1hNVWrapper);
  SET_VertexAttrib1hvNV(disp, (void *)glVertexAttrib1hvNVWrapper);
  SET_VertexAttrib1s(disp, (void *)glVertexAttrib1sWrapper);
  SET_VertexAttrib1sNV(disp, (void *)glVertexAttrib1sNVWrapper);
  SET_VertexAttrib1sv(disp, (void *)glVertexAttrib1svWrapper);
  SET_VertexAttrib1svNV(disp, (void *)glVertexAttrib1svNVWrapper);
  SET_VertexAttrib2d(disp, (void *)glVertexAttrib2dWrapper);
  SET_VertexAttrib2dNV(disp, (void *)glVertexAttrib2dNVWrapper);
  SET_VertexAttrib2dv(disp, (void *)glVertexAttrib2dvWrapper);
  SET_VertexAttrib2dvNV(disp, (void *)glVertexAttrib2dvNVWrapper);
  SET_VertexAttrib2fARB(disp, (void *)glVertexAttrib2fARBWrapper);
  SET_VertexAttrib2fNV(disp, (void *)glVertexAttrib2fNVWrapper);
  SET_VertexAttrib2fvARB(disp, (void *)glVertexAttrib2fvARBWrapper);
  SET_VertexAttrib2fvNV(disp, (void *)glVertexAttrib2fvNVWrapper);
  SET_VertexAttrib2hNV(disp, (void *)glVertexAttrib2hNVWrapper);
  SET_VertexAttrib2hvNV(disp, (void *)glVertexAttrib2hvNVWrapper);
  SET_VertexAttrib2s(disp, (void *)glVertexAttrib2sWrapper);
  SET_VertexAttrib2sNV(disp, (void *)glVertexAttrib2sNVWrapper);
  SET_VertexAttrib2sv(disp, (void *)glVertexAttrib2svWrapper);
  SET_VertexAttrib2svNV(disp, (void *)glVertexAttrib2svNVWrapper);
  SET_VertexAttrib3d(disp, (void *)glVertexAttrib3dWrapper);
  SET_VertexAttrib3dNV(disp, (void *)glVertexAttrib3dNVWrapper);
  SET_VertexAttrib3dv(disp, (void *)glVertexAttrib3dvWrapper);
  SET_VertexAttrib3dvNV(disp, (void *)glVertexAttrib3dvNVWrapper);
  SET_VertexAttrib3fARB(disp, (void *)glVertexAttrib3fARBWrapper);
  SET_VertexAttrib3fNV(disp, (void *)glVertexAttrib3fNVWrapper);
  SET_VertexAttrib3fvARB(disp, (void *)glVertexAttrib3fvARBWrapper);
  SET_VertexAttrib3fvNV(disp, (void *)glVertexAttrib3fvNVWrapper);
  SET_VertexAttrib3hNV(disp, (void *)glVertexAttrib3hNVWrapper);
  SET_VertexAttrib3hvNV(disp, (void *)glVertexAttrib3hvNVWrapper);
  SET_VertexAttrib3s(disp, (void *)glVertexAttrib3sWrapper);
  SET_VertexAttrib3sNV(disp, (void *)glVertexAttrib3sNVWrapper);
  SET_VertexAttrib3sv(disp, (void *)glVertexAttrib3svWrapper);
  SET_VertexAttrib3svNV(disp, (void *)glVertexAttrib3svNVWrapper);
  SET_VertexAttrib4Nbv(disp, (void *)glVertexAttrib4NbvWrapper);
  SET_VertexAttrib4Niv(disp, (void *)glVertexAttrib4NivWrapper);
  SET_VertexAttrib4Nsv(disp, (void *)glVertexAttrib4NsvWrapper);
  SET_VertexAttrib4Nub(disp, (void *)glVertexAttrib4NubWrapper);
  SET_VertexAttrib4Nubv(disp, (void *)glVertexAttrib4NubvWrapper);
  SET_VertexAttrib4Nuiv(disp, (void *)glVertexAttrib4NuivWrapper);
  SET_VertexAttrib4Nusv(disp, (void *)glVertexAttrib4NusvWrapper);
  SET_VertexAttrib4bv(disp, (void *)glVertexAttrib4bvWrapper);
  SET_VertexAttrib4d(disp, (void *)glVertexAttrib4dWrapper);
  SET_VertexAttrib4dNV(disp, (void *)glVertexAttrib4dNVWrapper);
  SET_VertexAttrib4dv(disp, (void *)glVertexAttrib4dvWrapper);
  SET_VertexAttrib4dvNV(disp, (void *)glVertexAttrib4dvNVWrapper);
  SET_VertexAttrib4fARB(disp, (void *)glVertexAttrib4fARBWrapper);
  SET_VertexAttrib4fNV(disp, (void *)glVertexAttrib4fNVWrapper);
  SET_VertexAttrib4fvARB(disp, (void *)glVertexAttrib4fvARBWrapper);
  SET_VertexAttrib4fvNV(disp, (void *)glVertexAttrib4fvNVWrapper);
  SET_VertexAttrib4hNV(disp, (void *)glVertexAttrib4hNVWrapper);
  SET_VertexAttrib4hvNV(disp, (void *)glVertexAttrib4hvNVWrapper);
  SET_VertexAttrib4iv(disp, (void *)glVertexAttrib4ivWrapper);
  SET_VertexAttrib4s(disp, (void *)glVertexAttrib4sWrapper);
  SET_VertexAttrib4sNV(disp, (void *)glVertexAttrib4sNVWrapper);
  SET_VertexAttrib4sv(disp, (void *)glVertexAttrib4svWrapper);
  SET_VertexAttrib4svNV(disp, (void *)glVertexAttrib4svNVWrapper);
  SET_VertexAttrib4ubNV(disp, (void *)glVertexAttrib4ubNVWrapper);
  SET_VertexAttrib4ubv(disp, (void *)glVertexAttrib4ubvWrapper);
  SET_VertexAttrib4ubvNV(disp, (void *)glVertexAttrib4ubvNVWrapper);
  SET_VertexAttrib4uiv(disp, (void *)glVertexAttrib4uivWrapper);
  SET_VertexAttrib4usv(disp, (void *)glVertexAttrib4usvWrapper);
  SET_VertexAttribBinding(disp, (void *)glVertexAttribBindingWrapper);
  SET_VertexAttribDivisor(disp, (void *)glVertexAttribDivisorWrapper);
  SET_VertexAttribFormat(disp, (void *)glVertexAttribFormatWrapper);
  SET_VertexAttribI1iEXT(disp, (void *)glVertexAttribI1iEXTWrapper);
  SET_VertexAttribI1iv(disp, (void *)glVertexAttribI1ivWrapper);
  SET_VertexAttribI1uiEXT(disp, (void *)glVertexAttribI1uiEXTWrapper);
  SET_VertexAttribI1uiv(disp, (void *)glVertexAttribI1uivWrapper);
  SET_VertexAttribI2iEXT(disp, (void *)glVertexAttribI2iEXTWrapper);
  SET_VertexAttribI2ivEXT(disp, (void *)glVertexAttribI2ivEXTWrapper);
  SET_VertexAttribI2uiEXT(disp, (void *)glVertexAttribI2uiEXTWrapper);
  SET_VertexAttribI2uivEXT(disp, (void *)glVertexAttribI2uivEXTWrapper);
  SET_VertexAttribI3iEXT(disp, (void *)glVertexAttribI3iEXTWrapper);
  SET_VertexAttribI3ivEXT(disp, (void *)glVertexAttribI3ivEXTWrapper);
  SET_VertexAttribI3uiEXT(disp, (void *)glVertexAttribI3uiEXTWrapper);
  SET_VertexAttribI3uivEXT(disp, (void *)glVertexAttribI3uivEXTWrapper);
  SET_VertexAttribI4bv(disp, (void *)glVertexAttribI4bvWrapper);
  SET_VertexAttribI4iEXT(disp, (void *)glVertexAttribI4iEXTWrapper);
  SET_VertexAttribI4ivEXT(disp, (void *)glVertexAttribI4ivEXTWrapper);
  SET_VertexAttribI4sv(disp, (void *)glVertexAttribI4svWrapper);
  SET_VertexAttribI4ubv(disp, (void *)glVertexAttribI4ubvWrapper);
  SET_VertexAttribI4uiEXT(disp, (void *)glVertexAttribI4uiEXTWrapper);
  SET_VertexAttribI4uivEXT(disp, (void *)glVertexAttribI4uivEXTWrapper);
  SET_VertexAttribI4usv(disp, (void *)glVertexAttribI4usvWrapper);
  SET_VertexAttribIFormat(disp, (void *)glVertexAttribIFormatWrapper);
  SET_VertexAttribIPointer(disp, (void *)glVertexAttribIPointerWrapper);
  SET_VertexAttribL1d(disp, (void *)glVertexAttribL1dWrapper);
  SET_VertexAttribL1dv(disp, (void *)glVertexAttribL1dvWrapper);
  SET_VertexAttribL1ui64ARB(disp, (void *)glVertexAttribL1ui64ARBWrapper);
  SET_VertexAttribL1ui64vARB(disp, (void *)glVertexAttribL1ui64vARBWrapper);
  SET_VertexAttribL2d(disp, (void *)glVertexAttribL2dWrapper);
  SET_VertexAttribL2dv(disp, (void *)glVertexAttribL2dvWrapper);
  SET_VertexAttribL3d(disp, (void *)glVertexAttribL3dWrapper);
  SET_VertexAttribL3dv(disp, (void *)glVertexAttribL3dvWrapper);
  SET_VertexAttribL4d(disp, (void *)glVertexAttribL4dWrapper);
  SET_VertexAttribL4dv(disp, (void *)glVertexAttribL4dvWrapper);
  SET_VertexAttribLFormat(disp, (void *)glVertexAttribLFormatWrapper);
  SET_VertexAttribLPointer(disp, (void *)glVertexAttribLPointerWrapper);
  SET_VertexAttribP1ui(disp, (void *)glVertexAttribP1uiWrapper);
  SET_VertexAttribP1uiv(disp, (void *)glVertexAttribP1uivWrapper);
  SET_VertexAttribP2ui(disp, (void *)glVertexAttribP2uiWrapper);
  SET_VertexAttribP2uiv(disp, (void *)glVertexAttribP2uivWrapper);
  SET_VertexAttribP3ui(disp, (void *)glVertexAttribP3uiWrapper);
  SET_VertexAttribP3uiv(disp, (void *)glVertexAttribP3uivWrapper);
  SET_VertexAttribP4ui(disp, (void *)glVertexAttribP4uiWrapper);
  SET_VertexAttribP4uiv(disp, (void *)glVertexAttribP4uivWrapper);
  SET_VertexAttribPointer(disp, (void *)glVertexAttribPointerWrapper);
  SET_VertexAttribPointerNV(disp, (void *)glVertexAttribPointerNVWrapper);
  SET_VertexAttribs1dvNV(disp, (void *)glVertexAttribs1dvNVWrapper);
  SET_VertexAttribs1fvNV(disp, (void *)glVertexAttribs1fvNVWrapper);
  SET_VertexAttribs1hvNV(disp, (void *)glVertexAttribs1hvNVWrapper);
  SET_VertexAttribs1svNV(disp, (void *)glVertexAttribs1svNVWrapper);
  SET_VertexAttribs2dvNV(disp, (void *)glVertexAttribs2dvNVWrapper);
  SET_VertexAttribs2fvNV(disp, (void *)glVertexAttribs2fvNVWrapper);
  SET_VertexAttribs2hvNV(disp, (void *)glVertexAttribs2hvNVWrapper);
  SET_VertexAttribs2svNV(disp, (void *)glVertexAttribs2svNVWrapper);
  SET_VertexAttribs3dvNV(disp, (void *)glVertexAttribs3dvNVWrapper);
  SET_VertexAttribs3fvNV(disp, (void *)glVertexAttribs3fvNVWrapper);
  SET_VertexAttribs3hvNV(disp, (void *)glVertexAttribs3hvNVWrapper);
  SET_VertexAttribs3svNV(disp, (void *)glVertexAttribs3svNVWrapper);
  SET_VertexAttribs4dvNV(disp, (void *)glVertexAttribs4dvNVWrapper);
  SET_VertexAttribs4fvNV(disp, (void *)glVertexAttribs4fvNVWrapper);
  SET_VertexAttribs4hvNV(disp, (void *)glVertexAttribs4hvNVWrapper);
  SET_VertexAttribs4svNV(disp, (void *)glVertexAttribs4svNVWrapper);
  SET_VertexAttribs4ubvNV(disp, (void *)glVertexAttribs4ubvNVWrapper);
  SET_VertexBindingDivisor(disp, (void *)glVertexBindingDivisorWrapper);
  SET_VertexP2ui(disp, (void *)glVertexP2uiWrapper);
  SET_VertexP2uiv(disp, (void *)glVertexP2uivWrapper);
  SET_VertexP3ui(disp, (void *)glVertexP3uiWrapper);
  SET_VertexP3uiv(disp, (void *)glVertexP3uivWrapper);
  SET_VertexP4ui(disp, (void *)glVertexP4uiWrapper);
  SET_VertexP4uiv(disp, (void *)glVertexP4uivWrapper);
  SET_VertexPointer(disp, (void *)glVertexPointerWrapper);
  SET_VertexPointerEXT(disp, (void *)glVertexPointerEXTWrapper);
  SET_Viewport(disp, (void *)glViewportWrapper);
  SET_ViewportArrayv(disp, (void *)glViewportArrayvWrapper);
  SET_ViewportIndexedf(disp, (void *)glViewportIndexedfWrapper);
  SET_ViewportIndexedfv(disp, (void *)glViewportIndexedfvWrapper);
  SET_ViewportSwizzleNV(disp, (void *)glViewportSwizzleNVWrapper);
  SET_WaitSemaphoreEXT(disp, (void *)glWaitSemaphoreEXTWrapper);
  SET_WaitSync(disp, (void *)glWaitSyncWrapper);
  SET_WindowPos2d(disp, (void *)glWindowPos2dWrapper);
  SET_WindowPos2dv(disp, (void *)glWindowPos2dvWrapper);
  SET_WindowPos2f(disp, (void *)glWindowPos2fWrapper);
  SET_WindowPos2fv(disp, (void *)glWindowPos2fvWrapper);
  SET_WindowPos2i(disp, (void *)glWindowPos2iWrapper);
  SET_WindowPos2iv(disp, (void *)glWindowPos2ivWrapper);
  SET_WindowPos2s(disp, (void *)glWindowPos2sWrapper);
  SET_WindowPos2sv(disp, (void *)glWindowPos2svWrapper);
  SET_WindowPos3d(disp, (void *)glWindowPos3dWrapper);
  SET_WindowPos3dv(disp, (void *)glWindowPos3dvWrapper);
  SET_WindowPos3f(disp, (void *)glWindowPos3fWrapper);
  SET_WindowPos3fv(disp, (void *)glWindowPos3fvWrapper);
  SET_WindowPos3i(disp, (void *)glWindowPos3iWrapper);
  SET_WindowPos3iv(disp, (void *)glWindowPos3ivWrapper);
  SET_WindowPos3s(disp, (void *)glWindowPos3sWrapper);
  SET_WindowPos3sv(disp, (void *)glWindowPos3svWrapper);
  SET_WindowPos4dMESA(disp, (void *)glWindowPos4dMESAWrapper);
  SET_WindowPos4dvMESA(disp, (void *)glWindowPos4dvMESAWrapper);
  SET_WindowPos4fMESA(disp, (void *)glWindowPos4fMESAWrapper);
  SET_WindowPos4fvMESA(disp, (void *)glWindowPos4fvMESAWrapper);
  SET_WindowPos4iMESA(disp, (void *)glWindowPos4iMESAWrapper);
  SET_WindowPos4ivMESA(disp, (void *)glWindowPos4ivMESAWrapper);
  SET_WindowPos4sMESA(disp, (void *)glWindowPos4sMESAWrapper);
  SET_WindowPos4svMESA(disp, (void *)glWindowPos4svMESAWrapper);
  SET_WindowRectanglesEXT(disp, (void *)glWindowRectanglesEXTWrapper);
}
