#include "glcorearb.h"

#ifndef GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT
	#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT 0x8C4D
#endif
#ifndef GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT
	#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT 0x8C4E
#endif
#ifndef GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT
	#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT 0x8C4F
#endif

typedef const GLubyte* (APIENTRY* PFNGLGETSTRINGIPROC) (GLenum name, GLuint index);


FFR_GL_IMPORT(PFNGLACTIVETEXTUREPROC, glActiveTexture);
FFR_GL_IMPORT(PFNGLATTACHSHADERPROC, glAttachShader);
FFR_GL_IMPORT(PFNGLBINDBUFFERPROC, glBindBuffer);
FFR_GL_IMPORT(PFNGLBINDBUFFERRANGEPROC, glBindBufferRange);
FFR_GL_IMPORT(PFNGLBINDBUFFERBASEPROC, glBindBufferBase);
FFR_GL_IMPORT(PFNGLBINDFRAMEBUFFERPROC, glBindFramebuffer);
FFR_GL_IMPORT(PFNGLBINDTEXTUREUNITPROC, glBindTextureUnit);
FFR_GL_IMPORT(PFNGLBINDVERTEXARRAYPROC, glBindVertexArray);
FFR_GL_IMPORT(PFNGLBLENDFUNCSEPARATEPROC, glBlendFuncSeparate);
FFR_GL_IMPORT(PFNGLBUFFERDATAPROC, glBufferData);
FFR_GL_IMPORT(PFNGLBUFFERSUBDATAPROC, glBufferSubData);
FFR_GL_IMPORT(PFNGLCHECKFRAMEBUFFERSTATUSPROC, glCheckFramebufferStatus);
FFR_GL_IMPORT(PFNGLCLIPCONTROLPROC, glClipControl);
FFR_GL_IMPORT(PFNGLCOMPILESHADERPROC, glCompileShader);
FFR_GL_IMPORT(PFNGLCOMPRESSEDTEXIMAGE2DPROC, glCompressedTexImage2D);
FFR_GL_IMPORT(PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC, glCompressedTexSubImage2D);
FFR_GL_IMPORT(PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC, glCompressedTextureSubImage2D);
FFR_GL_IMPORT(PFNGLCOMPRESSEDTEXIMAGE3DPROC, glCompressedTexImage3D);
FFR_GL_IMPORT(PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC, glCompressedTexSubImage3D);
FFR_GL_IMPORT(PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC, glCompressedTextureSubImage3D);
FFR_GL_IMPORT(PFNGLCREATEBUFFERSPROC, glCreateBuffers);
FFR_GL_IMPORT(PFNGLCREATEFRAMEBUFFERSPROC, glCreateFramebuffers);
FFR_GL_IMPORT(PFNGLCREATEPROGRAMPROC, glCreateProgram);
FFR_GL_IMPORT(PFNGLCREATESHADERPROC, glCreateShader);
FFR_GL_IMPORT(PFNGLCREATETEXTURESPROC, glCreateTextures);
FFR_GL_IMPORT(PFNGLDEBUGMESSAGECALLBACKPROC, glDebugMessageCallback);
FFR_GL_IMPORT(PFNGLDEBUGMESSAGECONTROLPROC, glDebugMessageControl);
FFR_GL_IMPORT(PFNGLDELETEBUFFERSPROC, glDeleteBuffers);
FFR_GL_IMPORT(PFNGLDELETEFRAMEBUFFERSPROC, glDeleteFramebuffers);
FFR_GL_IMPORT(PFNGLDELETEPROGRAMPROC, glDeleteProgram);
FFR_GL_IMPORT(PFNGLDELETEQUERIESPROC, glDeleteQueries);
FFR_GL_IMPORT(PFNGLDELETESHADERPROC, glDeleteShader);
FFR_GL_IMPORT(PFNGLDISABLEVERTEXATTRIBARRAYPROC, glDisableVertexAttribArray);
FFR_GL_IMPORT(PFNGLDRAWARRAYSINSTANCEDARBPROC, glDrawArraysInstanced);
FFR_GL_IMPORT(PFNGLDRAWBUFFERSPROC, glDrawBuffers);
FFR_GL_IMPORT(PFNGLDRAWELEMENTSINSTANCEDPROC, glDrawElementsInstanced);
FFR_GL_IMPORT(PFNGLENABLEVERTEXATTRIBARRAYPROC, glEnableVertexAttribArray);
FFR_GL_IMPORT(PFNGLFRAMEBUFFERTEXTURE2DPROC, glFramebufferTexture2D);
FFR_GL_IMPORT(PFNGLGENFRAMEBUFFERSPROC, glGenFramebuffers);
FFR_GL_IMPORT(PFNGLGENERATEMIPMAPPROC, glGenerateMipmap);
FFR_GL_IMPORT(PFNGLGENERATETEXTUREMIPMAPPROC, glGenerateTextureMipmap);
FFR_GL_IMPORT(PFNGLGENQUERIESPROC, glGenQueries);
FFR_GL_IMPORT(PFNGLGENRENDERBUFFERSPROC, glGenRenderbuffers);
FFR_GL_IMPORT(PFNGLGENVERTEXARRAYSPROC, glGenVertexArrays);
FFR_GL_IMPORT(PFNGLGETACTIVEUNIFORMPROC, glGetActiveUniform);
FFR_GL_IMPORT(PFNGLGETATTRIBLOCATIONPROC, glGetAttribLocation);
FFR_GL_IMPORT(PFNGLGETDEBUGMESSAGELOGPROC, glGetDebugMessageLog);
FFR_GL_IMPORT(PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC, glGetFramebufferAttachmentParameteriv);
FFR_GL_IMPORT(PFNGLGETPROGRAMINFOLOGPROC, glGetProgramInfoLog);
FFR_GL_IMPORT(PFNGLGETPROGRAMIVPROC, glGetProgramiv);
FFR_GL_IMPORT(PFNGLGETQUERYOBJECTUI64VPROC, glGetQueryObjectui64v);
FFR_GL_IMPORT(PFNGLGETSHADERINFOLOGPROC, glGetShaderInfoLog);
FFR_GL_IMPORT(PFNGLGETSHADERIVPROC, glGetShaderiv);
FFR_GL_IMPORT(PFNGLGETSTRINGIPROC, glGetStringi);
FFR_GL_IMPORT(PFNGLGETTEXTUREIMAGEPROC, glGetTextureImage);
FFR_GL_IMPORT(PFNGLGETTEXTURELEVELPARAMETERIVPROC, glGetTextureLevelParameteriv);
FFR_GL_IMPORT(PFNGLGETUNIFORMBLOCKINDEXPROC, glGetUniformBlockIndex);
FFR_GL_IMPORT(PFNGLGETUNIFORMLOCATIONPROC, glGetUniformLocation);
FFR_GL_IMPORT(PFNGLLINKPROGRAMPROC, glLinkProgram);
FFR_GL_IMPORT(PFNGLMAPNAMEDBUFFERRANGEPROC, glMapNamedBufferRange);
FFR_GL_IMPORT(PFNGLNAMEDBUFFERSTORAGEPROC, glNamedBufferStorage);
FFR_GL_IMPORT(PFNGLNAMEDBUFFERSUBDATAPROC, glNamedBufferSubData);
FFR_GL_IMPORT(PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC, glNamedFramebufferRenderbuffer);
FFR_GL_IMPORT(PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC, glNamedFramebufferTextureLayer);
FFR_GL_IMPORT(PFNGLNAMEDFRAMEBUFFERTEXTUREPROC, glNamedFramebufferTexture);
FFR_GL_IMPORT(PFNGLOBJECTLABELPROC, glObjectLabel);
FFR_GL_IMPORT(PFNGLPOPDEBUGGROUPPROC, glPopDebugGroup);
FFR_GL_IMPORT(PFNGLPUSHDEBUGGROUPPROC, glPushDebugGroup);
FFR_GL_IMPORT(PFNGLQUERYCOUNTERPROC, glQueryCounter);
FFR_GL_IMPORT(PFNGLSHADERSOURCEPROC, glShaderSource);
FFR_GL_IMPORT(PFNGLTEXBUFFERPROC, glTexBuffer);
FFR_GL_IMPORT(PFNGLTEXIMAGE3DPROC, glTexImage3D);
FFR_GL_IMPORT(PFNGLTEXSUBIMAGE3DPROC, glTexSubImage3D);
FFR_GL_IMPORT(PFNGLTEXTURESUBIMAGE2DPROC, glTextureSubImage2D);
FFR_GL_IMPORT(PFNGLTEXTURESUBIMAGE3DPROC, glTextureSubImage3D);
FFR_GL_IMPORT(PFNGLTEXTUREPARAMETERIPROC, glTextureParameteri);
FFR_GL_IMPORT(PFNGLTEXTURESTORAGE2DPROC, glTextureStorage2D);
FFR_GL_IMPORT(PFNGLTEXTURESTORAGE3DPROC, glTextureStorage3D);
FFR_GL_IMPORT(PFNGLUNIFORM1IPROC, glUniform1i);
FFR_GL_IMPORT(PFNGLUNIFORM2IVPROC, glUniform2iv);
FFR_GL_IMPORT(PFNGLUNIFORM4IVPROC, glUniform4iv);
FFR_GL_IMPORT(PFNGLUNIFORM1FVPROC, glUniform1fv);
FFR_GL_IMPORT(PFNGLUNIFORM2FVPROC, glUniform2fv);
FFR_GL_IMPORT(PFNGLUNIFORM3FVPROC, glUniform3fv);
FFR_GL_IMPORT(PFNGLUNIFORM4FVPROC, glUniform4fv);
FFR_GL_IMPORT(PFNGLUNIFORMMATRIX3X4FVPROC, glUniformMatrix3x4fv);
FFR_GL_IMPORT(PFNGLUNIFORMMATRIX4FVPROC, glUniformMatrix4fv);
FFR_GL_IMPORT(PFNGLUNIFORMMATRIX4X3FVPROC, glUniformMatrix4x3fv);
FFR_GL_IMPORT(PFNGLUNIFORMBLOCKBINDINGPROC, glUniformBlockBinding);
FFR_GL_IMPORT(PFNGLUNMAPBUFFERPROC, glUnmapBuffer);
FFR_GL_IMPORT(PFNGLUNMAPNAMEDBUFFERPROC, glUnmapNamedBuffer);
FFR_GL_IMPORT(PFNGLUSEPROGRAMPROC, glUseProgram);
FFR_GL_IMPORT(PFNGLVERTEXATTRIBDIVISORARBPROC, glVertexAttribDivisor);
FFR_GL_IMPORT(PFNGLVERTEXATTRIBPOINTERPROC, glVertexAttribPointer);
