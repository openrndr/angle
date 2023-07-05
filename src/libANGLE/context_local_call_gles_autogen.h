// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml and gl_angle_ext.xml.
//
// Copyright 2023 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// context_local_call_gles_autogen.h:
//   Helpers that set/get state that is entirely locally accessed by the context.

#ifndef LIBANGLE_CONTEXT_LOCAL_CALL_gles_AUTOGEN_H_
#define LIBANGLE_CONTEXT_LOCAL_CALL_gles_AUTOGEN_H_

#include "libANGLE/Context.h"

namespace gl
{
void ContextLocalActiveTexture(Context *context, GLenum texture);
void ContextLocalBlendColor(Context *context,
                            GLfloat red,
                            GLfloat green,
                            GLfloat blue,
                            GLfloat alpha);
void ContextLocalBlendEquation(Context *context, GLenum mode);
void ContextLocalBlendEquationSeparate(Context *context, GLenum modeRGB, GLenum modeAlpha);
void ContextLocalBlendFunc(Context *context, GLenum sfactor, GLenum dfactor);
void ContextLocalBlendFuncSeparate(Context *context,
                                   GLenum sfactorRGB,
                                   GLenum dfactorRGB,
                                   GLenum sfactorAlpha,
                                   GLenum dfactorAlpha);
void ContextLocalClearColor(Context *context,
                            GLfloat red,
                            GLfloat green,
                            GLfloat blue,
                            GLfloat alpha);
void ContextLocalClearDepthf(Context *context, GLfloat d);
void ContextLocalClearStencil(Context *context, GLint s);
void ContextLocalColorMask(Context *context,
                           GLboolean red,
                           GLboolean green,
                           GLboolean blue,
                           GLboolean alpha);
void ContextLocalCullFace(Context *context, CullFaceMode modePacked);
void ContextLocalDepthFunc(Context *context, GLenum func);
void ContextLocalDepthMask(Context *context, GLboolean flag);
void ContextLocalDepthRangef(Context *context, GLfloat n, GLfloat f);
void ContextLocalDisable(Context *context, GLenum cap);
void ContextLocalEnable(Context *context, GLenum cap);
void ContextLocalFrontFace(Context *context, GLenum mode);
void ContextLocalHint(Context *context, GLenum target, GLenum mode);
void ContextLocalLineWidth(Context *context, GLfloat width);
void ContextLocalPixelStorei(Context *context, GLenum pname, GLint param);
void ContextLocalPolygonOffset(Context *context, GLfloat factor, GLfloat units);
void ContextLocalSampleCoverage(Context *context, GLfloat value, GLboolean invert);
void ContextLocalScissor(Context *context, GLint x, GLint y, GLsizei width, GLsizei height);
void ContextLocalStencilFunc(Context *context, GLenum func, GLint ref, GLuint mask);
void ContextLocalStencilFuncSeparate(Context *context,
                                     GLenum face,
                                     GLenum func,
                                     GLint ref,
                                     GLuint mask);
void ContextLocalStencilMask(Context *context, GLuint mask);
void ContextLocalStencilMaskSeparate(Context *context, GLenum face, GLuint mask);
void ContextLocalStencilOp(Context *context, GLenum fail, GLenum zfail, GLenum zpass);
void ContextLocalStencilOpSeparate(Context *context,
                                   GLenum face,
                                   GLenum sfail,
                                   GLenum dpfail,
                                   GLenum dppass);
void ContextLocalVertexAttrib1f(Context *context, GLuint index, GLfloat x);
void ContextLocalVertexAttrib1fv(Context *context, GLuint index, const GLfloat *v);
void ContextLocalVertexAttrib2f(Context *context, GLuint index, GLfloat x, GLfloat y);
void ContextLocalVertexAttrib2fv(Context *context, GLuint index, const GLfloat *v);
void ContextLocalVertexAttrib3f(Context *context, GLuint index, GLfloat x, GLfloat y, GLfloat z);
void ContextLocalVertexAttrib3fv(Context *context, GLuint index, const GLfloat *v);
void ContextLocalVertexAttrib4f(Context *context,
                                GLuint index,
                                GLfloat x,
                                GLfloat y,
                                GLfloat z,
                                GLfloat w);
void ContextLocalVertexAttrib4fv(Context *context, GLuint index, const GLfloat *v);
void ContextLocalViewport(Context *context, GLint x, GLint y, GLsizei width, GLsizei height);
void ContextLocalVertexAttribI4i(Context *context,
                                 GLuint index,
                                 GLint x,
                                 GLint y,
                                 GLint z,
                                 GLint w);
void ContextLocalVertexAttribI4iv(Context *context, GLuint index, const GLint *v);
void ContextLocalVertexAttribI4ui(Context *context,
                                  GLuint index,
                                  GLuint x,
                                  GLuint y,
                                  GLuint z,
                                  GLuint w);
void ContextLocalVertexAttribI4uiv(Context *context, GLuint index, const GLuint *v);
void ContextLocalSampleMaski(Context *context, GLuint maskNumber, GLbitfield mask);
void ContextLocalBlendEquationSeparatei(Context *context,
                                        GLuint buf,
                                        GLenum modeRGB,
                                        GLenum modeAlpha);
void ContextLocalBlendEquationi(Context *context, GLuint buf, GLenum mode);
void ContextLocalBlendFuncSeparatei(Context *context,
                                    GLuint buf,
                                    GLenum srcRGB,
                                    GLenum dstRGB,
                                    GLenum srcAlpha,
                                    GLenum dstAlpha);
void ContextLocalBlendFunci(Context *context, GLuint buf, GLenum src, GLenum dst);
void ContextLocalColorMaski(Context *context,
                            GLuint index,
                            GLboolean r,
                            GLboolean g,
                            GLboolean b,
                            GLboolean a);
void ContextLocalDisablei(Context *context, GLenum target, GLuint index);
void ContextLocalEnablei(Context *context, GLenum target, GLuint index);
void ContextLocalMinSampleShading(Context *context, GLfloat value);
void ContextLocalPrimitiveBoundingBox(Context *context,
                                      GLfloat minX,
                                      GLfloat minY,
                                      GLfloat minZ,
                                      GLfloat minW,
                                      GLfloat maxX,
                                      GLfloat maxY,
                                      GLfloat maxZ,
                                      GLfloat maxW);
void ContextLocalClearColorx(Context *context,
                             GLfixed red,
                             GLfixed green,
                             GLfixed blue,
                             GLfixed alpha);
void ContextLocalClearDepthx(Context *context, GLfixed depth);
void ContextLocalDepthRangex(Context *context, GLfixed n, GLfixed f);
void ContextLocalLineWidthx(Context *context, GLfixed width);
void ContextLocalLogicOp(Context *context, LogicalOperation opcodePacked);
void ContextLocalPolygonOffsetx(Context *context, GLfixed factor, GLfixed units);
void ContextLocalSampleCoveragex(Context *context, GLclampx value, GLboolean invert);
void ContextLocalLogicOpANGLE(Context *context, LogicalOperation opcodePacked);
void ContextLocalPolygonMode(Context *context, GLenum face, PolygonMode modePacked);
void ContextLocalProvokingVertex(Context *context, ProvokingVertexConvention provokeModePacked);
void ContextLocalCoverageModulation(Context *context, GLenum components);
void ContextLocalClipControl(Context *context, ClipOrigin originPacked, ClipDepthMode depthPacked);
void ContextLocalPolygonOffsetClamp(Context *context, GLfloat factor, GLfloat units, GLfloat clamp);
void ContextLocalPolygonModeNV(Context *context, GLenum face, PolygonMode modePacked);
void ContextLocalShadingRate(Context *context, GLenum rate);
}  // namespace gl

#endif  // LIBANGLE_CONTEXT_LOCAL_CALL_gles_AUTOGEN_H_
