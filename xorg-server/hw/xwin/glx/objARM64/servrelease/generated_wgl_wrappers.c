RESOLVE_DECL(PFNWGLGETEXTENSIONSSTRINGARBPROC);
RESOLVE_DECL(PFNWGLMAKECONTEXTCURRENTARBPROC);
RESOLVE_DECL(PFNWGLCREATEPBUFFERARBPROC);
RESOLVE_DECL(PFNWGLGETPBUFFERDCARBPROC);
RESOLVE_DECL(PFNWGLRELEASEPBUFFERDCARBPROC);
RESOLVE_DECL(PFNWGLDESTROYPBUFFERARBPROC);
RESOLVE_DECL(PFNWGLGETPIXELFORMATATTRIBIVARBPROC);
RESOLVE_DECL(PFNWGLCHOOSEPIXELFORMATARBPROC);
RESOLVE_DECL(PFNWGLSWAPINTERVALEXTPROC);

void wglResolveExtensionProcs(void)
{
  PRERESOLVE(PFNWGLGETEXTENSIONSSTRINGARBPROC, "wglGetExtensionsStringARB");
  PRERESOLVE(PFNWGLMAKECONTEXTCURRENTARBPROC, "wglMakeContextCurrentARB");
  PRERESOLVE(PFNWGLCREATEPBUFFERARBPROC, "wglCreatePbufferARB");
  PRERESOLVE(PFNWGLGETPBUFFERDCARBPROC, "wglGetPbufferDCARB");
  PRERESOLVE(PFNWGLRELEASEPBUFFERDCARBPROC, "wglReleasePbufferDCARB");
  PRERESOLVE(PFNWGLDESTROYPBUFFERARBPROC, "wglDestroyPbufferARB");
  PRERESOLVE(PFNWGLGETPIXELFORMATATTRIBIVARBPROC, "wglGetPixelFormatAttribivARB");
  PRERESOLVE(PFNWGLCHOOSEPIXELFORMATARBPROC, "wglChoosePixelFormatARB");
  PRERESOLVE(PFNWGLSWAPINTERVALEXTPROC, "wglSwapIntervalEXT");
}

const char * __stdcall wglGetExtensionsStringARBWrapper(HDC hdc_)
{
  RESOLVE_RET(PFNWGLGETEXTENSIONSSTRINGARBPROC, "wglGetExtensionsStringARB", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableWGLcallTrace) ErrorF("wglGetExtensionsStringARB\n");
#endif
  return RESOLVED_PROC(PFNWGLGETEXTENSIONSSTRINGARBPROC)( hdc_ );
}

BOOL __stdcall wglMakeContextCurrentARBWrapper(HDC hDrawDC_, HDC hReadDC_, HGLRC hglrc_)
{
  RESOLVE_RET(PFNWGLMAKECONTEXTCURRENTARBPROC, "wglMakeContextCurrentARB", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableWGLcallTrace) ErrorF("wglMakeContextCurrentARB\n");
#endif
  return RESOLVED_PROC(PFNWGLMAKECONTEXTCURRENTARBPROC)( hDrawDC_, hReadDC_, hglrc_ );
}

HPBUFFERARB __stdcall wglCreatePbufferARBWrapper(HDC hDC_, int  iPixelFormat_, int  iWidth_, int  iHeight_, const int * piAttribList_)
{
  RESOLVE_RET(PFNWGLCREATEPBUFFERARBPROC, "wglCreatePbufferARB", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableWGLcallTrace) ErrorF("wglCreatePbufferARB\n");
#endif
  return RESOLVED_PROC(PFNWGLCREATEPBUFFERARBPROC)( hDC_, iPixelFormat_, iWidth_, iHeight_, piAttribList_ );
}

HDC __stdcall wglGetPbufferDCARBWrapper(HPBUFFERARB hPbuffer_)
{
  RESOLVE_RET(PFNWGLGETPBUFFERDCARBPROC, "wglGetPbufferDCARB", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableWGLcallTrace) ErrorF("wglGetPbufferDCARB\n");
#endif
  return RESOLVED_PROC(PFNWGLGETPBUFFERDCARBPROC)( hPbuffer_ );
}

int __stdcall wglReleasePbufferDCARBWrapper(HPBUFFERARB hPbuffer_, HDC hDC_)
{
  RESOLVE_RET(PFNWGLRELEASEPBUFFERDCARBPROC, "wglReleasePbufferDCARB", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableWGLcallTrace) ErrorF("wglReleasePbufferDCARB\n");
#endif
  return RESOLVED_PROC(PFNWGLRELEASEPBUFFERDCARBPROC)( hPbuffer_, hDC_ );
}

BOOL __stdcall wglDestroyPbufferARBWrapper(HPBUFFERARB hPbuffer_)
{
  RESOLVE_RET(PFNWGLDESTROYPBUFFERARBPROC, "wglDestroyPbufferARB", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableWGLcallTrace) ErrorF("wglDestroyPbufferARB\n");
#endif
  return RESOLVED_PROC(PFNWGLDESTROYPBUFFERARBPROC)( hPbuffer_ );
}

BOOL __stdcall wglGetPixelFormatAttribivARBWrapper(HDC hdc_, int  iPixelFormat_, int  iLayerPlane_, UINT nAttributes_, const int * piAttributes_, int * piValues_)
{
  RESOLVE_RET(PFNWGLGETPIXELFORMATATTRIBIVARBPROC, "wglGetPixelFormatAttribivARB", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableWGLcallTrace) ErrorF("wglGetPixelFormatAttribivARB\n");
#endif
  return RESOLVED_PROC(PFNWGLGETPIXELFORMATATTRIBIVARBPROC)( hdc_, iPixelFormat_, iLayerPlane_, nAttributes_, piAttributes_, piValues_ );
}

BOOL __stdcall wglChoosePixelFormatARBWrapper(HDC hdc_, const int * piAttribIList_, const FLOAT* pfAttribFList_, UINT nMaxFormats_, int * piFormats_, UINT* nNumFormats_)
{
  RESOLVE_RET(PFNWGLCHOOSEPIXELFORMATARBPROC, "wglChoosePixelFormatARB", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableWGLcallTrace) ErrorF("wglChoosePixelFormatARB\n");
#endif
  return RESOLVED_PROC(PFNWGLCHOOSEPIXELFORMATARBPROC)( hdc_, piAttribIList_, pfAttribFList_, nMaxFormats_, piFormats_, nNumFormats_ );
}

BOOL __stdcall wglSwapIntervalEXTWrapper(int  interval_)
{
  RESOLVE_RET(PFNWGLSWAPINTERVALEXTPROC, "wglSwapIntervalEXT", FALSE);
#ifdef _DEBUG
  if (glxWinDebugSettings.enableWGLcallTrace) ErrorF("wglSwapIntervalEXT\n");
#endif
  return RESOLVED_PROC(PFNWGLSWAPINTERVALEXTPROC)( interval_ );
}

