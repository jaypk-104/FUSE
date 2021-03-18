// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DashedSolidColor.h>
#include <_root.FuseDrawingPrimitives_bundle.h>
#include <Alive.ImageFill.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.ImageFill.DrawParams.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.Internal.Float2Buffer.h>
#include <Fuse.Drawing.Internal.FloatBuffer.h>
#include <Fuse.Drawing.Internal.TypedBuffer.h>
#include <Fuse.Drawing.Internal.UShortBuffer.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.Primitives.Circle.h>
#include <Fuse.Drawing.Primitives.ConcaveWedgeCoverage.h>
#include <Fuse.Drawing.Primitives.ConvexWedgeCoverage.h>
#include <Fuse.Drawing.Primitives.Coverage.h>
#include <Fuse.Drawing.Primitives.Falloff.h>
#include <Fuse.Drawing.Primitives.FillCoverage.h>
#include <Fuse.Drawing.Primitives.LimitCoverage.h>
#include <Fuse.Drawing.Primitives.OneLimitCoverage.h>
#include <Fuse.Drawing.Primitives.Rectangle.h>
#include <Fuse.Drawing.Primitives.ShadowFalloff.h>
#include <Fuse.Drawing.Primitives.StrokeCoverage.h>
#include <Fuse.Drawing.Primitives.Wedge.h>
#include <Fuse.Drawing.Primitives.WedgeCoverage.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.ByteArrayExtensions.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Math.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.UShort.h>
#include <Uno.Vector.h>
static uString* STRINGS[1];
static uType* TYPES[18];

namespace g{
namespace Fuse{
namespace Drawing{
namespace Primitives{

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.12.0/Circle.uno
// -----------------------------------------------------------------------

// public sealed class Circle
// {
// static generated Circle()
static void Circle__cctor__fn(uType* __type)
{
    Circle::Singleton_ = Circle::New1();
}

static void Circle_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Drawing::Primitives::StrokeCoverage_typeof();
    ::TYPES[1] = ::g::Alive::ImageFill_typeof();
    ::TYPES[2] = ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage_typeof();
    ::TYPES[3] = ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage_typeof();
    ::TYPES[4] = ::g::Fuse::Drawing::Primitives::OneLimitCoverage_typeof();
    ::TYPES[5] = ::g::DashedSolidColor_typeof();
    ::TYPES[6] = ::g::Fuse::Drawing::ImageFill_typeof();
    ::TYPES[7] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[8] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[9] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[10] = ::g::Fuse::Drawing::Primitives::FillCoverage_typeof();
    type->SetDependencies(
        ::g::FuseDrawingPrimitives_bundle_typeof(),
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Fuse::Drawing::Primitives::LimitCoverage_typeof(), offsetof(Circle, _oneLimitCoverage), 0,
        ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/], offsetof(Circle, _strokeCoverage), 0,
        ::TYPES[10/*Fuse.Drawing.Primitives.FillCoverage*/], offsetof(Circle, _fillCoverage), 0,
        ::g::Fuse::Drawing::Internal::Float2Buffer_typeof(), offsetof(Circle, _bufferVertex), 0,
        ::g::Fuse::Drawing::Internal::UShortBuffer_typeof(), offsetof(Circle, _bufferIndex), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_11ecc447), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_11ecc46a), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_11ecc489), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_11ece0a5), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_11ece106), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_11ece063), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_46b4edd5), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_46b4edf4), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_46b4ed0f), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_1a74461f), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_1a744642), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_1a744661), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_4eb3507d), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_4eb3509c), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_cf935b24), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_75feaa92), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_c3b78bcd), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_652aba88), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_f633e00e), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_97a70ec9), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_e55ff004), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_d48f543f), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_760282fa), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_c3bb6435), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_971c4890), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_6b0b4769), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_c99818ae), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_5a33a200), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_b8c07345), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_60ff1ce), 0,
        type, (uintptr_t)&Circle::Singleton_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Singleton", 35));
    type->Reflection.SetFunctions(3,
        new uFunction("Fill", NULL, (void*)Circle__Fill_fn, 0, false, uVoid_typeof(), 6, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Drawing::Brush_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Circle__New1_fn, 0, true, type, 0),
        new uFunction("Stroke", NULL, (void*)Circle__Stroke_fn, 0, false, uVoid_typeof(), 6, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Drawing::Stroke_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()));
}

uType* Circle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 36;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Circle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Circle", options);
    type->fp_build_ = Circle_build;
    type->fp_ctor_ = (void*)Circle__New1_fn;
    type->fp_cctor_ = Circle__cctor__fn;
    return type;
}

// public generated Circle()
void Circle__ctor__fn(Circle* __this)
{
    __this->ctor_();
}

// internal void Draw(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Brush brush, Fuse.Drawing.Primitives.Coverage cover, Fuse.Drawing.Primitives.LimitCoverage limit, float extend, float2 center, float smoothness)
void Circle__Draw_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float* radius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Fuse::Drawing::Primitives::LimitCoverage* limit, float* extend, ::g::Uno::Float2* center, float* smoothness)
{
    __this->Draw(dc, visual, *radius, brush, cover, limit, *extend, *center, *smoothness);
}

// public void Fill(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Brush brush, float2 center, float smoothness)
void Circle__Fill_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float* radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* center, float* smoothness)
{
    __this->Fill(dc, visual, *radius, brush, *center, *smoothness);
}

// private generated void init_DrawCalls()
void Circle__init_DrawCalls_fn(Circle* __this)
{
    __this->init_DrawCalls();
}

// private void InitBuffers()
void Circle__InitBuffers_fn(Circle* __this)
{
    __this->InitBuffers();
}

// public generated Circle New()
void Circle__New1_fn(Circle** __retval)
{
    *__retval = Circle::New1();
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Stroke stroke, float2 center, float smoothness)
void Circle__Stroke_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float* radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2* center, float* smoothness)
{
    __this->Stroke(dc, visual, *radius, stroke, *center, *smoothness);
}

uSStrong<Circle*> Circle::Singleton_;

// public generated Circle() [instance]
void Circle::ctor_()
{
    _oneLimitCoverage = ::g::Fuse::Drawing::Primitives::OneLimitCoverage::New1();
    _strokeCoverage = ::g::Fuse::Drawing::Primitives::StrokeCoverage::New1();
    _fillCoverage = ::g::Fuse::Drawing::Primitives::FillCoverage::New1();
    init_DrawCalls();
}

// internal void Draw(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Brush brush, Fuse.Drawing.Primitives.Coverage cover, Fuse.Drawing.Primitives.LimitCoverage limit, float extend, float2 center, float smoothness) [instance]
void Circle::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float radius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Fuse::Drawing::Primitives::LimitCoverage* limit, float extend, ::g::Uno::Float2 center, float smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Circle", "Draw(Fuse.DrawContext,Fuse.Elements.Element,float,Fuse.Drawing.Brush,Fuse.Drawing.Primitives.Coverage,Fuse.Drawing.Primitives.LimitCoverage,float,float2,float)");
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float4 ind5;
    ::g::Uno::Float4 ind6;
    ::g::Uno::Float4 ind7;
    ::g::Uno::Float4 ind8;
    ::g::Uno::Float4 ind9;
    ::g::Uno::Float2 ind10;
    ::g::Uno::Float2 ind11;
    ::g::Uno::Float2 ind12;
    ::g::Uno::Float4 ind13;
    ::g::Uno::Float4 ind14;
    ::g::Uno::Float4 ind15;
    ::g::Uno::Float4 ind16;
    ::g::Uno::Float4 ind17;
    ::g::Uno::Float4 ind18;
    ::g::Uno::Float4 ind19;
    ::g::Uno::Float4 ind20;
    ::g::Uno::Float4 ind21;
    ::g::Uno::Float4 ind22;
    ::g::Uno::Float4 ind23;
    ::g::Uno::Float4 ind24;
    ::g::Uno::Float4 ind25;
    ::g::Uno::Float4 ind26;
    ::g::Uno::Float4 ind27;
    ::g::Uno::Float4 ind28;
    ::g::Uno::Float4 ind29;
    ::g::Uno::Float4 ind30;
    ::g::Uno::Float4 ind31;
    ::g::Uno::Float4 ind32;
    ::g::Uno::Float4 ind33;
    ::g::Uno::Float4 ind34;
    ::g::Uno::Float4 ind35;
    ::g::Uno::Float4 ind36;
    ::g::Uno::Float2 ind37;
    ::g::Uno::Float2 ind38;
    ::g::Uno::Float2 ind39;
    ::g::Uno::Float4 ind40;
    ::g::Uno::Float4 ind41;
    ::g::Uno::Float4 ind42;
    ::g::Uno::Float4 ind43;
    ::g::Uno::Float4 ind44;
    ::g::Uno::Float4 ind45;
    ::g::Uno::Float4 ind46;
    ::g::Uno::Float4 ind47;
    ::g::Uno::Float4 ind48;
    ::g::Uno::Float4 ind49;
    ::g::Uno::Float4 ind50;
    ::g::Uno::Float4 ind51;
    ::g::Uno::Float4 ind52;
    ::g::Uno::Float4 ind53;
    ::g::Uno::Float4 ind54;

    if (radius <= 0.0f)
        return;

    if (_bufferVertex == NULL)
        InitBuffers();

    float radiusRcp = 1.0f / radius;

    if (uIs(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))
    {
        if (uIs(brush, ::TYPES[1/*Alive.ImageFill*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_11ecc447_14_8_4 = uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_11ecc447_21_2_17 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_11ecc447_21_3_18 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_11ecc447.BlendEnabled(true);
                _draw_11ecc447.DepthTestEnabled(false);
                _draw_11ecc447.CullFace(uPtr(dc)->CullFace());
                _draw_11ecc447.BlendSrcAlpha(7);
                _draw_11ecc447.BlendDstRgb(3);
                _draw_11ecc447.Const(0, DP_11ecc447_14_8_4.NeedFract);
                _draw_11ecc447.Const(1, DP_11ecc447_14_8_4.Texture == NULL);
                _draw_11ecc447.Use();
                _draw_11ecc447.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_11ecc447.Uniform(3, radius + (extend * 2.0f));
                _draw_11ecc447.Uniform2(4, center);
                _draw_11ecc447.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_11ecc447.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_11ecc447.Uniform2(7, DP_11ecc447_14_8_4.Origin);
                _draw_11ecc447.Uniform2(8, DP_11ecc447_14_8_4.Size);
                _draw_11ecc447.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind1 = DP_11ecc447_14_8_4.UVClip, ::g::Uno::Float2__New2(ind1.Z, ind1.W)), (ind2 = DP_11ecc447_14_8_4.UVClip, ::g::Uno::Float2__New2(ind2.X, ind2.Y))));
                _draw_11ecc447.Uniform2(10, (ind3 = DP_11ecc447_14_8_4.UVClip, ::g::Uno::Float2__New2(ind3.X, ind3.Y)));
                _draw_11ecc447.Uniform2(11, DP_11ecc447_14_8_4.TexCoordScale1);
                _draw_11ecc447.Uniform2(12, DP_11ecc447_14_8_4.TexCoordBias1);
                _draw_11ecc447.Uniform2(13, DP_11ecc447_14_8_4.TexCoordScale2);
                _draw_11ecc447.Uniform2(14, DP_11ecc447_14_8_4.TexCoordBias2);
                _draw_11ecc447.Uniform10(15, uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->Color());
                _draw_11ecc447.Uniform(16, radiusRcp);
                _draw_11ecc447.Uniform(17, radius);
                _draw_11ecc447.Uniform(18, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_11ecc447.Uniform(19, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_11ecc447.Uniform(20, dc->ViewportPixelsPerPoint());
                _draw_11ecc447.Uniform(21, 1.0f / smoothness);
                _draw_11ecc447.Uniform(22, uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->Opacity());
                _draw_11ecc447.Uniform2(23, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_11ecc447_21_2_17, EndVec_11ecc447_21_3_18)));
                _draw_11ecc447.Uniform2(24, StartVec_11ecc447_21_2_17);
                _draw_11ecc447.Uniform2(25, EndVec_11ecc447_21_3_18);
                _draw_11ecc447.Sampler3(26, DP_11ecc447_14_8_4.Texture, DP_11ecc447_14_8_4.SamplerState);
                _draw_11ecc447.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_11ecc46a_14_8_4 = uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_11ecc46a_21_2_17 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_11ecc46a_21_3_18 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_11ecc46a.BlendEnabled(true);
                _draw_11ecc46a.DepthTestEnabled(false);
                _draw_11ecc46a.CullFace(uPtr(dc)->CullFace());
                _draw_11ecc46a.BlendSrcAlpha(7);
                _draw_11ecc46a.BlendDstRgb(3);
                _draw_11ecc46a.Const(0, DP_11ecc46a_14_8_4.NeedFract);
                _draw_11ecc46a.Const(1, DP_11ecc46a_14_8_4.Texture == NULL);
                _draw_11ecc46a.Use();
                _draw_11ecc46a.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_11ecc46a.Uniform(3, radius + (extend * 2.0f));
                _draw_11ecc46a.Uniform2(4, center);
                _draw_11ecc46a.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_11ecc46a.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_11ecc46a.Uniform2(7, DP_11ecc46a_14_8_4.Origin);
                _draw_11ecc46a.Uniform2(8, DP_11ecc46a_14_8_4.Size);
                _draw_11ecc46a.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind4 = DP_11ecc46a_14_8_4.UVClip, ::g::Uno::Float2__New2(ind4.Z, ind4.W)), (ind5 = DP_11ecc46a_14_8_4.UVClip, ::g::Uno::Float2__New2(ind5.X, ind5.Y))));
                _draw_11ecc46a.Uniform2(10, (ind6 = DP_11ecc46a_14_8_4.UVClip, ::g::Uno::Float2__New2(ind6.X, ind6.Y)));
                _draw_11ecc46a.Uniform2(11, DP_11ecc46a_14_8_4.TexCoordScale1);
                _draw_11ecc46a.Uniform2(12, DP_11ecc46a_14_8_4.TexCoordBias1);
                _draw_11ecc46a.Uniform2(13, DP_11ecc46a_14_8_4.TexCoordScale2);
                _draw_11ecc46a.Uniform2(14, DP_11ecc46a_14_8_4.TexCoordBias2);
                _draw_11ecc46a.Uniform10(15, uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->Color());
                _draw_11ecc46a.Uniform(16, radiusRcp);
                _draw_11ecc46a.Uniform(17, radius);
                _draw_11ecc46a.Uniform(18, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_11ecc46a.Uniform(19, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_11ecc46a.Uniform(20, dc->ViewportPixelsPerPoint());
                _draw_11ecc46a.Uniform(21, 1.0f / smoothness);
                _draw_11ecc46a.Uniform(22, uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->Opacity());
                _draw_11ecc46a.Uniform2(23, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_11ecc46a_21_2_17, EndVec_11ecc46a_21_3_18)));
                _draw_11ecc46a.Uniform2(24, StartVec_11ecc46a_21_2_17);
                _draw_11ecc46a.Uniform2(25, EndVec_11ecc46a_21_3_18);
                _draw_11ecc46a.Sampler3(26, DP_11ecc46a_14_8_4.Texture, DP_11ecc46a_14_8_4.SamplerState);
                _draw_11ecc46a.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_11ecc489_14_8_4 = uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                _draw_11ecc489.BlendEnabled(true);
                _draw_11ecc489.DepthTestEnabled(false);
                _draw_11ecc489.CullFace(uPtr(dc)->CullFace());
                _draw_11ecc489.BlendSrcAlpha(7);
                _draw_11ecc489.BlendDstRgb(3);
                _draw_11ecc489.Const(0, DP_11ecc489_14_8_4.NeedFract);
                _draw_11ecc489.Const(1, DP_11ecc489_14_8_4.Texture == NULL);
                _draw_11ecc489.Use();
                _draw_11ecc489.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_11ecc489.Uniform(3, radius + (extend * 2.0f));
                _draw_11ecc489.Uniform2(4, center);
                _draw_11ecc489.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_11ecc489.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_11ecc489.Uniform2(7, DP_11ecc489_14_8_4.Origin);
                _draw_11ecc489.Uniform2(8, DP_11ecc489_14_8_4.Size);
                _draw_11ecc489.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind7 = DP_11ecc489_14_8_4.UVClip, ::g::Uno::Float2__New2(ind7.Z, ind7.W)), (ind8 = DP_11ecc489_14_8_4.UVClip, ::g::Uno::Float2__New2(ind8.X, ind8.Y))));
                _draw_11ecc489.Uniform2(10, (ind9 = DP_11ecc489_14_8_4.UVClip, ::g::Uno::Float2__New2(ind9.X, ind9.Y)));
                _draw_11ecc489.Uniform2(11, DP_11ecc489_14_8_4.TexCoordScale1);
                _draw_11ecc489.Uniform2(12, DP_11ecc489_14_8_4.TexCoordBias1);
                _draw_11ecc489.Uniform2(13, DP_11ecc489_14_8_4.TexCoordScale2);
                _draw_11ecc489.Uniform2(14, DP_11ecc489_14_8_4.TexCoordBias2);
                _draw_11ecc489.Uniform10(15, uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->Color());
                _draw_11ecc489.Uniform(16, radiusRcp);
                _draw_11ecc489.Uniform(17, radius);
                _draw_11ecc489.Uniform(18, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_11ecc489.Uniform(19, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_11ecc489.Uniform(20, dc->ViewportPixelsPerPoint());
                _draw_11ecc489.Uniform(21, 1.0f / smoothness);
                _draw_11ecc489.Uniform(22, uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->Opacity());
                _draw_11ecc489.Sampler3(23, DP_11ecc489_14_8_4.Texture, DP_11ecc489_14_8_4.SamplerState);
                _draw_11ecc489.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[5/*DashedSolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_11ece0a5_20_2_13 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_11ece0a5_20_3_14 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_11ece0a5.BlendEnabled(true);
                _draw_11ece0a5.DepthTestEnabled(false);
                _draw_11ece0a5.CullFace(uPtr(dc)->CullFace());
                _draw_11ece0a5.BlendSrcAlpha(7);
                _draw_11ece0a5.BlendDstRgb(3);
                _draw_11ece0a5.Use();
                _draw_11ece0a5.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_11ece0a5.Uniform(1, radius + (extend * 2.0f));
                _draw_11ece0a5.Uniform2(2, center);
                _draw_11ece0a5.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_11ece0a5.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_11ece0a5.Uniform2(5, (ind10 = visual->ActualSize(), ::g::Uno::Float2__New2(ind10.X, ind10.Y)));
                _draw_11ece0a5.Uniform(6, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->DashSize());
                _draw_11ece0a5.Uniform10(7, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->Color());
                _draw_11ece0a5.Uniform(8, radiusRcp);
                _draw_11ece0a5.Uniform(9, radius);
                _draw_11ece0a5.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_11ece0a5.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_11ece0a5.Uniform(12, dc->ViewportPixelsPerPoint());
                _draw_11ece0a5.Uniform(13, 1.0f / smoothness);
                _draw_11ece0a5.Uniform(14, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->Opacity());
                _draw_11ece0a5.Uniform2(15, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_11ece0a5_20_2_13, EndVec_11ece0a5_20_3_14)));
                _draw_11ece0a5.Uniform2(16, StartVec_11ece0a5_20_2_13);
                _draw_11ece0a5.Uniform2(17, EndVec_11ece0a5_20_3_14);
                _draw_11ece0a5.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_11ece106_20_2_13 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_11ece106_20_3_14 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_11ece106.BlendEnabled(true);
                _draw_11ece106.DepthTestEnabled(false);
                _draw_11ece106.CullFace(uPtr(dc)->CullFace());
                _draw_11ece106.BlendSrcAlpha(7);
                _draw_11ece106.BlendDstRgb(3);
                _draw_11ece106.Use();
                _draw_11ece106.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_11ece106.Uniform(1, radius + (extend * 2.0f));
                _draw_11ece106.Uniform2(2, center);
                _draw_11ece106.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_11ece106.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_11ece106.Uniform2(5, (ind11 = visual->ActualSize(), ::g::Uno::Float2__New2(ind11.X, ind11.Y)));
                _draw_11ece106.Uniform(6, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->DashSize());
                _draw_11ece106.Uniform10(7, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->Color());
                _draw_11ece106.Uniform(8, radiusRcp);
                _draw_11ece106.Uniform(9, radius);
                _draw_11ece106.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_11ece106.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_11ece106.Uniform(12, dc->ViewportPixelsPerPoint());
                _draw_11ece106.Uniform(13, 1.0f / smoothness);
                _draw_11ece106.Uniform(14, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->Opacity());
                _draw_11ece106.Uniform2(15, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_11ece106_20_2_13, EndVec_11ece106_20_3_14)));
                _draw_11ece106.Uniform2(16, StartVec_11ece106_20_2_13);
                _draw_11ece106.Uniform2(17, EndVec_11ece106_20_3_14);
                _draw_11ece106.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_11ece063.BlendEnabled(true);
                _draw_11ece063.DepthTestEnabled(false);
                _draw_11ece063.CullFace(uPtr(dc)->CullFace());
                _draw_11ece063.BlendSrcAlpha(7);
                _draw_11ece063.BlendDstRgb(3);
                _draw_11ece063.Use();
                _draw_11ece063.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_11ece063.Uniform(1, radius + (extend * 2.0f));
                _draw_11ece063.Uniform2(2, center);
                _draw_11ece063.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_11ece063.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_11ece063.Uniform2(5, (ind12 = visual->ActualSize(), ::g::Uno::Float2__New2(ind12.X, ind12.Y)));
                _draw_11ece063.Uniform(6, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->DashSize());
                _draw_11ece063.Uniform10(7, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->Color());
                _draw_11ece063.Uniform(8, radiusRcp);
                _draw_11ece063.Uniform(9, radius);
                _draw_11ece063.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_11ece063.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_11ece063.Uniform(12, dc->ViewportPixelsPerPoint());
                _draw_11ece063.Uniform(13, 1.0f / smoothness);
                _draw_11ece063.Uniform(14, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->Opacity());
                _draw_11ece063.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_11ecab87_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_11ecab87_20_2_17 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_11ecab87_20_3_18 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_11ecc447.BlendEnabled(true);
                _draw_11ecc447.DepthTestEnabled(false);
                _draw_11ecc447.CullFace(uPtr(dc)->CullFace());
                _draw_11ecc447.BlendSrcAlpha(7);
                _draw_11ecc447.BlendDstRgb(3);
                _draw_11ecc447.Const(0, DP_11ecab87_14_8_4.NeedFract);
                _draw_11ecc447.Const(1, DP_11ecab87_14_8_4.Texture == NULL);
                _draw_11ecc447.Use();
                _draw_11ecc447.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_11ecc447.Uniform(3, radius + (extend * 2.0f));
                _draw_11ecc447.Uniform2(4, center);
                _draw_11ecc447.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_11ecc447.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_11ecc447.Uniform2(7, DP_11ecab87_14_8_4.Origin);
                _draw_11ecc447.Uniform2(8, DP_11ecab87_14_8_4.Size);
                _draw_11ecc447.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind13 = DP_11ecab87_14_8_4.UVClip, ::g::Uno::Float2__New2(ind13.Z, ind13.W)), (ind14 = DP_11ecab87_14_8_4.UVClip, ::g::Uno::Float2__New2(ind14.X, ind14.Y))));
                _draw_11ecc447.Uniform2(10, (ind15 = DP_11ecab87_14_8_4.UVClip, ::g::Uno::Float2__New2(ind15.X, ind15.Y)));
                _draw_11ecc447.Uniform2(11, DP_11ecab87_14_8_4.TexCoordScale1);
                _draw_11ecc447.Uniform2(12, DP_11ecab87_14_8_4.TexCoordBias1);
                _draw_11ecc447.Uniform2(13, DP_11ecab87_14_8_4.TexCoordScale2);
                _draw_11ecc447.Uniform2(14, DP_11ecab87_14_8_4.TexCoordBias2);
                _draw_11ecc447.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_11ecc447.Uniform(16, radiusRcp);
                _draw_11ecc447.Uniform(17, radius);
                _draw_11ecc447.Uniform(18, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_11ecc447.Uniform(19, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_11ecc447.Uniform(20, dc->ViewportPixelsPerPoint());
                _draw_11ecc447.Uniform(21, 1.0f / smoothness);
                _draw_11ecc447.Uniform(22, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_11ecc447.Uniform2(23, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_11ecab87_20_2_17, EndVec_11ecab87_20_3_18)));
                _draw_11ecc447.Uniform2(24, StartVec_11ecab87_20_2_17);
                _draw_11ecc447.Uniform2(25, EndVec_11ecab87_20_3_18);
                _draw_11ecc447.Sampler3(26, DP_11ecab87_14_8_4.Texture, DP_11ecab87_14_8_4.SamplerState);
                _draw_11ecc447.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_f46279ef_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_f46279ef_20_2_17 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_f46279ef_20_3_18 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_11ecc46a.BlendEnabled(true);
                _draw_11ecc46a.DepthTestEnabled(false);
                _draw_11ecc46a.CullFace(uPtr(dc)->CullFace());
                _draw_11ecc46a.BlendSrcAlpha(7);
                _draw_11ecc46a.BlendDstRgb(3);
                _draw_11ecc46a.Const(0, DP_f46279ef_14_8_4.NeedFract);
                _draw_11ecc46a.Const(1, DP_f46279ef_14_8_4.Texture == NULL);
                _draw_11ecc46a.Use();
                _draw_11ecc46a.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_11ecc46a.Uniform(3, radius + (extend * 2.0f));
                _draw_11ecc46a.Uniform2(4, center);
                _draw_11ecc46a.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_11ecc46a.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_11ecc46a.Uniform2(7, DP_f46279ef_14_8_4.Origin);
                _draw_11ecc46a.Uniform2(8, DP_f46279ef_14_8_4.Size);
                _draw_11ecc46a.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind16 = DP_f46279ef_14_8_4.UVClip, ::g::Uno::Float2__New2(ind16.Z, ind16.W)), (ind17 = DP_f46279ef_14_8_4.UVClip, ::g::Uno::Float2__New2(ind17.X, ind17.Y))));
                _draw_11ecc46a.Uniform2(10, (ind18 = DP_f46279ef_14_8_4.UVClip, ::g::Uno::Float2__New2(ind18.X, ind18.Y)));
                _draw_11ecc46a.Uniform2(11, DP_f46279ef_14_8_4.TexCoordScale1);
                _draw_11ecc46a.Uniform2(12, DP_f46279ef_14_8_4.TexCoordBias1);
                _draw_11ecc46a.Uniform2(13, DP_f46279ef_14_8_4.TexCoordScale2);
                _draw_11ecc46a.Uniform2(14, DP_f46279ef_14_8_4.TexCoordBias2);
                _draw_11ecc46a.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_11ecc46a.Uniform(16, radiusRcp);
                _draw_11ecc46a.Uniform(17, radius);
                _draw_11ecc46a.Uniform(18, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_11ecc46a.Uniform(19, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_11ecc46a.Uniform(20, dc->ViewportPixelsPerPoint());
                _draw_11ecc46a.Uniform(21, 1.0f / smoothness);
                _draw_11ecc46a.Uniform(22, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_11ecc46a.Uniform2(23, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_f46279ef_20_2_17, EndVec_f46279ef_20_3_18)));
                _draw_11ecc46a.Uniform2(24, StartVec_f46279ef_20_2_17);
                _draw_11ecc46a.Uniform2(25, EndVec_f46279ef_20_3_18);
                _draw_11ecc46a.Sampler3(26, DP_f46279ef_14_8_4.Texture, DP_f46279ef_14_8_4.SamplerState);
                _draw_11ecc46a.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_95d5a8aa_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                _draw_11ecc489.BlendEnabled(true);
                _draw_11ecc489.DepthTestEnabled(false);
                _draw_11ecc489.CullFace(uPtr(dc)->CullFace());
                _draw_11ecc489.BlendSrcAlpha(7);
                _draw_11ecc489.BlendDstRgb(3);
                _draw_11ecc489.Const(0, DP_95d5a8aa_14_8_4.NeedFract);
                _draw_11ecc489.Const(1, DP_95d5a8aa_14_8_4.Texture == NULL);
                _draw_11ecc489.Use();
                _draw_11ecc489.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_11ecc489.Uniform(3, radius + (extend * 2.0f));
                _draw_11ecc489.Uniform2(4, center);
                _draw_11ecc489.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_11ecc489.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_11ecc489.Uniform2(7, DP_95d5a8aa_14_8_4.Origin);
                _draw_11ecc489.Uniform2(8, DP_95d5a8aa_14_8_4.Size);
                _draw_11ecc489.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind19 = DP_95d5a8aa_14_8_4.UVClip, ::g::Uno::Float2__New2(ind19.Z, ind19.W)), (ind20 = DP_95d5a8aa_14_8_4.UVClip, ::g::Uno::Float2__New2(ind20.X, ind20.Y))));
                _draw_11ecc489.Uniform2(10, (ind21 = DP_95d5a8aa_14_8_4.UVClip, ::g::Uno::Float2__New2(ind21.X, ind21.Y)));
                _draw_11ecc489.Uniform2(11, DP_95d5a8aa_14_8_4.TexCoordScale1);
                _draw_11ecc489.Uniform2(12, DP_95d5a8aa_14_8_4.TexCoordBias1);
                _draw_11ecc489.Uniform2(13, DP_95d5a8aa_14_8_4.TexCoordScale2);
                _draw_11ecc489.Uniform2(14, DP_95d5a8aa_14_8_4.TexCoordBias2);
                _draw_11ecc489.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_11ecc489.Uniform(16, radiusRcp);
                _draw_11ecc489.Uniform(17, radius);
                _draw_11ecc489.Uniform(18, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_11ecc489.Uniform(19, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_11ecc489.Uniform(20, dc->ViewportPixelsPerPoint());
                _draw_11ecc489.Uniform(21, 1.0f / smoothness);
                _draw_11ecc489.Uniform(22, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_11ecc489.Sampler3(23, DP_95d5a8aa_14_8_4.Texture, DP_95d5a8aa_14_8_4.SamplerState);
                _draw_11ecc489.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_46b4edd5_20_2_8 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_46b4edd5_20_3_9 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_46b4edd5.BlendEnabled(true);
                _draw_46b4edd5.DepthTestEnabled(false);
                _draw_46b4edd5.CullFace(uPtr(dc)->CullFace());
                _draw_46b4edd5.BlendSrcAlpha(7);
                _draw_46b4edd5.BlendDstRgb(3);
                _draw_46b4edd5.Use();
                _draw_46b4edd5.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_46b4edd5.Uniform(1, radius + (extend * 2.0f));
                _draw_46b4edd5.Uniform2(2, center);
                _draw_46b4edd5.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_46b4edd5.Uniform(4, radiusRcp);
                _draw_46b4edd5.Uniform(5, radius);
                _draw_46b4edd5.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_46b4edd5.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_46b4edd5.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_46b4edd5.Uniform(9, 1.0f / smoothness);
                _draw_46b4edd5.Uniform10(10, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind22 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind22.X, ind22.Y, ind22.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_46b4edd5.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_46b4edd5.Uniform2(12, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_46b4edd5_20_2_8, EndVec_46b4edd5_20_3_9)));
                _draw_46b4edd5.Uniform2(13, StartVec_46b4edd5_20_2_8);
                _draw_46b4edd5.Uniform2(14, EndVec_46b4edd5_20_3_9);
                _draw_46b4edd5.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_46b4edf4_20_2_8 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_46b4edf4_20_3_9 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_46b4edf4.BlendEnabled(true);
                _draw_46b4edf4.DepthTestEnabled(false);
                _draw_46b4edf4.CullFace(uPtr(dc)->CullFace());
                _draw_46b4edf4.BlendSrcAlpha(7);
                _draw_46b4edf4.BlendDstRgb(3);
                _draw_46b4edf4.Use();
                _draw_46b4edf4.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_46b4edf4.Uniform(1, radius + (extend * 2.0f));
                _draw_46b4edf4.Uniform2(2, center);
                _draw_46b4edf4.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_46b4edf4.Uniform(4, radiusRcp);
                _draw_46b4edf4.Uniform(5, radius);
                _draw_46b4edf4.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_46b4edf4.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_46b4edf4.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_46b4edf4.Uniform(9, 1.0f / smoothness);
                _draw_46b4edf4.Uniform10(10, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind23 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind23.X, ind23.Y, ind23.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_46b4edf4.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_46b4edf4.Uniform2(12, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_46b4edf4_20_2_8, EndVec_46b4edf4_20_3_9)));
                _draw_46b4edf4.Uniform2(13, StartVec_46b4edf4_20_2_8);
                _draw_46b4edf4.Uniform2(14, EndVec_46b4edf4_20_3_9);
                _draw_46b4edf4.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_46b4ed0f.BlendEnabled(true);
                _draw_46b4ed0f.DepthTestEnabled(false);
                _draw_46b4ed0f.CullFace(uPtr(dc)->CullFace());
                _draw_46b4ed0f.BlendSrcAlpha(7);
                _draw_46b4ed0f.BlendDstRgb(3);
                _draw_46b4ed0f.Use();
                _draw_46b4ed0f.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_46b4ed0f.Uniform(1, radius + (extend * 2.0f));
                _draw_46b4ed0f.Uniform2(2, center);
                _draw_46b4ed0f.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_46b4ed0f.Uniform(4, radiusRcp);
                _draw_46b4ed0f.Uniform(5, radius);
                _draw_46b4ed0f.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_46b4ed0f.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_46b4ed0f.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_46b4ed0f.Uniform(9, 1.0f / smoothness);
                _draw_46b4ed0f.Uniform10(10, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind24 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind24.X, ind24.Y, ind24.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_46b4ed0f.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_46b4ed0f.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_1a74461f_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_1a74461f_20_2_15 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_1a74461f_20_3_16 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_1a74461f.BlendEnabled(true);
                _draw_1a74461f.DepthTestEnabled(false);
                _draw_1a74461f.CullFace(uPtr(dc)->CullFace());
                _draw_1a74461f.BlendSrcAlpha(7);
                _draw_1a74461f.BlendDstRgb(3);
                _draw_1a74461f.Use();
                _draw_1a74461f.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_1a74461f.Uniform(1, radius + (extend * 2.0f));
                _draw_1a74461f.Uniform2(2, center);
                _draw_1a74461f.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_1a74461f.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_1a74461f.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_1a74461f.Uniform(6, radiusRcp);
                _draw_1a74461f.Uniform(7, radius);
                _draw_1a74461f.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_1a74461f.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_1a74461f.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_1a74461f.Uniform(11, 1.0f / smoothness);
                _draw_1a74461f.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_1a74461f.Uniform10(13, endPoints_1a74461f_14_17_6);
                _draw_1a74461f.Uniform2(14, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_1a74461f_14_17_6.Z, endPoints_1a74461f_14_17_6.W), ::g::Uno::Float2__New2(endPoints_1a74461f_14_17_6.X, endPoints_1a74461f_14_17_6.Y))));
                _draw_1a74461f.Uniform(15, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_1a74461f_14_17_6.Z, endPoints_1a74461f_14_17_6.W), ::g::Uno::Float2__New2(endPoints_1a74461f_14_17_6.X, endPoints_1a74461f_14_17_6.Y))));
                _draw_1a74461f.Uniform2(16, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_1a74461f_20_2_15, EndVec_1a74461f_20_3_16)));
                _draw_1a74461f.Uniform2(17, StartVec_1a74461f_20_2_15);
                _draw_1a74461f.Uniform2(18, EndVec_1a74461f_20_3_16);
                _draw_1a74461f.Sampler3(19, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_1a74461f.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_1a744642_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_1a744642_20_2_15 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_1a744642_20_3_16 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_1a744642.BlendEnabled(true);
                _draw_1a744642.DepthTestEnabled(false);
                _draw_1a744642.CullFace(uPtr(dc)->CullFace());
                _draw_1a744642.BlendSrcAlpha(7);
                _draw_1a744642.BlendDstRgb(3);
                _draw_1a744642.Use();
                _draw_1a744642.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_1a744642.Uniform(1, radius + (extend * 2.0f));
                _draw_1a744642.Uniform2(2, center);
                _draw_1a744642.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_1a744642.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_1a744642.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_1a744642.Uniform(6, radiusRcp);
                _draw_1a744642.Uniform(7, radius);
                _draw_1a744642.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_1a744642.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_1a744642.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_1a744642.Uniform(11, 1.0f / smoothness);
                _draw_1a744642.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_1a744642.Uniform10(13, endPoints_1a744642_14_17_6);
                _draw_1a744642.Uniform2(14, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_1a744642_14_17_6.Z, endPoints_1a744642_14_17_6.W), ::g::Uno::Float2__New2(endPoints_1a744642_14_17_6.X, endPoints_1a744642_14_17_6.Y))));
                _draw_1a744642.Uniform(15, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_1a744642_14_17_6.Z, endPoints_1a744642_14_17_6.W), ::g::Uno::Float2__New2(endPoints_1a744642_14_17_6.X, endPoints_1a744642_14_17_6.Y))));
                _draw_1a744642.Uniform2(16, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_1a744642_20_2_15, EndVec_1a744642_20_3_16)));
                _draw_1a744642.Uniform2(17, StartVec_1a744642_20_2_15);
                _draw_1a744642.Uniform2(18, EndVec_1a744642_20_3_16);
                _draw_1a744642.Sampler3(19, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_1a744642.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_1a744661_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                _draw_1a744661.BlendEnabled(true);
                _draw_1a744661.DepthTestEnabled(false);
                _draw_1a744661.CullFace(uPtr(dc)->CullFace());
                _draw_1a744661.BlendSrcAlpha(7);
                _draw_1a744661.BlendDstRgb(3);
                _draw_1a744661.Use();
                _draw_1a744661.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_1a744661.Uniform(1, radius + (extend * 2.0f));
                _draw_1a744661.Uniform2(2, center);
                _draw_1a744661.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_1a744661.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_1a744661.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_1a744661.Uniform(6, radiusRcp);
                _draw_1a744661.Uniform(7, radius);
                _draw_1a744661.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_1a744661.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_1a744661.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_1a744661.Uniform(11, 1.0f / smoothness);
                _draw_1a744661.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_1a744661.Uniform10(13, endPoints_1a744661_14_17_6);
                _draw_1a744661.Uniform2(14, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_1a744661_14_17_6.Z, endPoints_1a744661_14_17_6.W), ::g::Uno::Float2__New2(endPoints_1a744661_14_17_6.X, endPoints_1a744661_14_17_6.Y))));
                _draw_1a744661.Uniform(15, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_1a744661_14_17_6.Z, endPoints_1a744661_14_17_6.W), ::g::Uno::Float2__New2(endPoints_1a744661_14_17_6.X, endPoints_1a744661_14_17_6.Y))));
                _draw_1a744661.Sampler3(16, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_1a744661.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_4eb3507d_20_2_8 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_4eb3507d_20_3_9 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_4eb3507d.BlendEnabled(true);
                _draw_4eb3507d.DepthTestEnabled(false);
                _draw_4eb3507d.CullFace(uPtr(dc)->CullFace());
                _draw_4eb3507d.BlendSrcAlpha(7);
                _draw_4eb3507d.BlendDstRgb(3);
                _draw_4eb3507d.Use();
                _draw_4eb3507d.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_4eb3507d.Uniform(1, radius + (extend * 2.0f));
                _draw_4eb3507d.Uniform2(2, center);
                _draw_4eb3507d.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_4eb3507d.Uniform(4, radiusRcp);
                _draw_4eb3507d.Uniform(5, radius);
                _draw_4eb3507d.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_4eb3507d.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_4eb3507d.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_4eb3507d.Uniform(9, 1.0f / smoothness);
                _draw_4eb3507d.Uniform10(10, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind25 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind25.X, ind25.Y, ind25.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_4eb3507d.Uniform2(11, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_4eb3507d_20_2_8, EndVec_4eb3507d_20_3_9)));
                _draw_4eb3507d.Uniform2(12, StartVec_4eb3507d_20_2_8);
                _draw_4eb3507d.Uniform2(13, EndVec_4eb3507d_20_3_9);
                _draw_4eb3507d.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_4eb3509c_20_2_8 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_4eb3509c_20_3_9 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_4eb3509c.BlendEnabled(true);
                _draw_4eb3509c.DepthTestEnabled(false);
                _draw_4eb3509c.CullFace(uPtr(dc)->CullFace());
                _draw_4eb3509c.BlendSrcAlpha(7);
                _draw_4eb3509c.BlendDstRgb(3);
                _draw_4eb3509c.Use();
                _draw_4eb3509c.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_4eb3509c.Uniform(1, radius + (extend * 2.0f));
                _draw_4eb3509c.Uniform2(2, center);
                _draw_4eb3509c.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_4eb3509c.Uniform(4, radiusRcp);
                _draw_4eb3509c.Uniform(5, radius);
                _draw_4eb3509c.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_4eb3509c.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_4eb3509c.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_4eb3509c.Uniform(9, 1.0f / smoothness);
                _draw_4eb3509c.Uniform10(10, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind26 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind26.X, ind26.Y, ind26.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_4eb3509c.Uniform2(11, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_4eb3509c_20_2_8, EndVec_4eb3509c_20_3_9)));
                _draw_4eb3509c.Uniform2(12, StartVec_4eb3509c_20_2_8);
                _draw_4eb3509c.Uniform2(13, EndVec_4eb3509c_20_3_9);
                _draw_4eb3509c.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_cf935b24.BlendEnabled(true);
                _draw_cf935b24.DepthTestEnabled(false);
                _draw_cf935b24.CullFace(uPtr(dc)->CullFace());
                _draw_cf935b24.BlendSrcAlpha(7);
                _draw_cf935b24.BlendDstRgb(3);
                _draw_cf935b24.Use();
                _draw_cf935b24.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_cf935b24.Uniform(1, radius + (extend * 2.0f));
                _draw_cf935b24.Uniform2(2, center);
                _draw_cf935b24.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_cf935b24.Uniform(4, radiusRcp);
                _draw_cf935b24.Uniform(5, radius);
                _draw_cf935b24.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_cf935b24.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_cf935b24.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_cf935b24.Uniform(9, 1.0f / smoothness);
                _draw_cf935b24.Uniform10(10, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind27 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind27.X, ind27.Y, ind27.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_cf935b24.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
    }
    else if (uIs(cover, ::TYPES[10/*Fuse.Drawing.Primitives.FillCoverage*/]))
    {
        if (uIs(brush, ::TYPES[1/*Alive.ImageFill*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_75feaa92_14_8_4 = uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_75feaa92_21_2_16 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_75feaa92_21_3_17 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_75feaa92.BlendEnabled(true);
                _draw_75feaa92.DepthTestEnabled(false);
                _draw_75feaa92.CullFace(uPtr(dc)->CullFace());
                _draw_75feaa92.BlendSrcAlpha(7);
                _draw_75feaa92.BlendDstRgb(3);
                _draw_75feaa92.Const(0, DP_75feaa92_14_8_4.NeedFract);
                _draw_75feaa92.Const(1, DP_75feaa92_14_8_4.Texture == NULL);
                _draw_75feaa92.Use();
                _draw_75feaa92.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_75feaa92.Uniform(3, radius + (extend * 2.0f));
                _draw_75feaa92.Uniform2(4, center);
                _draw_75feaa92.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_75feaa92.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_75feaa92.Uniform2(7, DP_75feaa92_14_8_4.Origin);
                _draw_75feaa92.Uniform2(8, DP_75feaa92_14_8_4.Size);
                _draw_75feaa92.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind28 = DP_75feaa92_14_8_4.UVClip, ::g::Uno::Float2__New2(ind28.Z, ind28.W)), (ind29 = DP_75feaa92_14_8_4.UVClip, ::g::Uno::Float2__New2(ind29.X, ind29.Y))));
                _draw_75feaa92.Uniform2(10, (ind30 = DP_75feaa92_14_8_4.UVClip, ::g::Uno::Float2__New2(ind30.X, ind30.Y)));
                _draw_75feaa92.Uniform2(11, DP_75feaa92_14_8_4.TexCoordScale1);
                _draw_75feaa92.Uniform2(12, DP_75feaa92_14_8_4.TexCoordBias1);
                _draw_75feaa92.Uniform2(13, DP_75feaa92_14_8_4.TexCoordScale2);
                _draw_75feaa92.Uniform2(14, DP_75feaa92_14_8_4.TexCoordBias2);
                _draw_75feaa92.Uniform10(15, uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->Color());
                _draw_75feaa92.Uniform(16, radiusRcp);
                _draw_75feaa92.Uniform(17, radius);
                _draw_75feaa92.Uniform(18, dc->ViewportPixelsPerPoint());
                _draw_75feaa92.Uniform(19, 1.0f / smoothness);
                _draw_75feaa92.Uniform(20, uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->Opacity());
                _draw_75feaa92.Uniform2(21, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_75feaa92_21_2_16, EndVec_75feaa92_21_3_17)));
                _draw_75feaa92.Uniform2(22, StartVec_75feaa92_21_2_16);
                _draw_75feaa92.Uniform2(23, EndVec_75feaa92_21_3_17);
                _draw_75feaa92.Sampler3(24, DP_75feaa92_14_8_4.Texture, DP_75feaa92_14_8_4.SamplerState);
                _draw_75feaa92.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_c3b78bcd_14_8_4 = uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_c3b78bcd_21_2_16 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_c3b78bcd_21_3_17 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_c3b78bcd.BlendEnabled(true);
                _draw_c3b78bcd.DepthTestEnabled(false);
                _draw_c3b78bcd.CullFace(uPtr(dc)->CullFace());
                _draw_c3b78bcd.BlendSrcAlpha(7);
                _draw_c3b78bcd.BlendDstRgb(3);
                _draw_c3b78bcd.Const(0, DP_c3b78bcd_14_8_4.NeedFract);
                _draw_c3b78bcd.Const(1, DP_c3b78bcd_14_8_4.Texture == NULL);
                _draw_c3b78bcd.Use();
                _draw_c3b78bcd.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_c3b78bcd.Uniform(3, radius + (extend * 2.0f));
                _draw_c3b78bcd.Uniform2(4, center);
                _draw_c3b78bcd.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_c3b78bcd.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_c3b78bcd.Uniform2(7, DP_c3b78bcd_14_8_4.Origin);
                _draw_c3b78bcd.Uniform2(8, DP_c3b78bcd_14_8_4.Size);
                _draw_c3b78bcd.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind31 = DP_c3b78bcd_14_8_4.UVClip, ::g::Uno::Float2__New2(ind31.Z, ind31.W)), (ind32 = DP_c3b78bcd_14_8_4.UVClip, ::g::Uno::Float2__New2(ind32.X, ind32.Y))));
                _draw_c3b78bcd.Uniform2(10, (ind33 = DP_c3b78bcd_14_8_4.UVClip, ::g::Uno::Float2__New2(ind33.X, ind33.Y)));
                _draw_c3b78bcd.Uniform2(11, DP_c3b78bcd_14_8_4.TexCoordScale1);
                _draw_c3b78bcd.Uniform2(12, DP_c3b78bcd_14_8_4.TexCoordBias1);
                _draw_c3b78bcd.Uniform2(13, DP_c3b78bcd_14_8_4.TexCoordScale2);
                _draw_c3b78bcd.Uniform2(14, DP_c3b78bcd_14_8_4.TexCoordBias2);
                _draw_c3b78bcd.Uniform10(15, uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->Color());
                _draw_c3b78bcd.Uniform(16, radiusRcp);
                _draw_c3b78bcd.Uniform(17, radius);
                _draw_c3b78bcd.Uniform(18, dc->ViewportPixelsPerPoint());
                _draw_c3b78bcd.Uniform(19, 1.0f / smoothness);
                _draw_c3b78bcd.Uniform(20, uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->Opacity());
                _draw_c3b78bcd.Uniform2(21, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_c3b78bcd_21_2_16, EndVec_c3b78bcd_21_3_17)));
                _draw_c3b78bcd.Uniform2(22, StartVec_c3b78bcd_21_2_16);
                _draw_c3b78bcd.Uniform2(23, EndVec_c3b78bcd_21_3_17);
                _draw_c3b78bcd.Sampler3(24, DP_c3b78bcd_14_8_4.Texture, DP_c3b78bcd_14_8_4.SamplerState);
                _draw_c3b78bcd.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_652aba88_14_8_4 = uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                _draw_652aba88.BlendEnabled(true);
                _draw_652aba88.DepthTestEnabled(false);
                _draw_652aba88.CullFace(uPtr(dc)->CullFace());
                _draw_652aba88.BlendSrcAlpha(7);
                _draw_652aba88.BlendDstRgb(3);
                _draw_652aba88.Const(0, DP_652aba88_14_8_4.NeedFract);
                _draw_652aba88.Const(1, DP_652aba88_14_8_4.Texture == NULL);
                _draw_652aba88.Use();
                _draw_652aba88.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_652aba88.Uniform(3, radius + (extend * 2.0f));
                _draw_652aba88.Uniform2(4, center);
                _draw_652aba88.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_652aba88.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_652aba88.Uniform2(7, DP_652aba88_14_8_4.Origin);
                _draw_652aba88.Uniform2(8, DP_652aba88_14_8_4.Size);
                _draw_652aba88.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind34 = DP_652aba88_14_8_4.UVClip, ::g::Uno::Float2__New2(ind34.Z, ind34.W)), (ind35 = DP_652aba88_14_8_4.UVClip, ::g::Uno::Float2__New2(ind35.X, ind35.Y))));
                _draw_652aba88.Uniform2(10, (ind36 = DP_652aba88_14_8_4.UVClip, ::g::Uno::Float2__New2(ind36.X, ind36.Y)));
                _draw_652aba88.Uniform2(11, DP_652aba88_14_8_4.TexCoordScale1);
                _draw_652aba88.Uniform2(12, DP_652aba88_14_8_4.TexCoordBias1);
                _draw_652aba88.Uniform2(13, DP_652aba88_14_8_4.TexCoordScale2);
                _draw_652aba88.Uniform2(14, DP_652aba88_14_8_4.TexCoordBias2);
                _draw_652aba88.Uniform10(15, uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->Color());
                _draw_652aba88.Uniform(16, radiusRcp);
                _draw_652aba88.Uniform(17, radius);
                _draw_652aba88.Uniform(18, dc->ViewportPixelsPerPoint());
                _draw_652aba88.Uniform(19, 1.0f / smoothness);
                _draw_652aba88.Uniform(20, uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->Opacity());
                _draw_652aba88.Sampler3(21, DP_652aba88_14_8_4.Texture, DP_652aba88_14_8_4.SamplerState);
                _draw_652aba88.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[5/*DashedSolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_f633e00e_20_2_12 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_f633e00e_20_3_13 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_f633e00e.BlendEnabled(true);
                _draw_f633e00e.DepthTestEnabled(false);
                _draw_f633e00e.CullFace(uPtr(dc)->CullFace());
                _draw_f633e00e.BlendSrcAlpha(7);
                _draw_f633e00e.BlendDstRgb(3);
                _draw_f633e00e.Use();
                _draw_f633e00e.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_f633e00e.Uniform(1, radius + (extend * 2.0f));
                _draw_f633e00e.Uniform2(2, center);
                _draw_f633e00e.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_f633e00e.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_f633e00e.Uniform2(5, (ind37 = visual->ActualSize(), ::g::Uno::Float2__New2(ind37.X, ind37.Y)));
                _draw_f633e00e.Uniform(6, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->DashSize());
                _draw_f633e00e.Uniform10(7, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->Color());
                _draw_f633e00e.Uniform(8, radiusRcp);
                _draw_f633e00e.Uniform(9, radius);
                _draw_f633e00e.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_f633e00e.Uniform(11, 1.0f / smoothness);
                _draw_f633e00e.Uniform(12, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->Opacity());
                _draw_f633e00e.Uniform2(13, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_f633e00e_20_2_12, EndVec_f633e00e_20_3_13)));
                _draw_f633e00e.Uniform2(14, StartVec_f633e00e_20_2_12);
                _draw_f633e00e.Uniform2(15, EndVec_f633e00e_20_3_13);
                _draw_f633e00e.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_97a70ec9_20_2_12 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_97a70ec9_20_3_13 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_97a70ec9.BlendEnabled(true);
                _draw_97a70ec9.DepthTestEnabled(false);
                _draw_97a70ec9.CullFace(uPtr(dc)->CullFace());
                _draw_97a70ec9.BlendSrcAlpha(7);
                _draw_97a70ec9.BlendDstRgb(3);
                _draw_97a70ec9.Use();
                _draw_97a70ec9.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_97a70ec9.Uniform(1, radius + (extend * 2.0f));
                _draw_97a70ec9.Uniform2(2, center);
                _draw_97a70ec9.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_97a70ec9.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_97a70ec9.Uniform2(5, (ind38 = visual->ActualSize(), ::g::Uno::Float2__New2(ind38.X, ind38.Y)));
                _draw_97a70ec9.Uniform(6, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->DashSize());
                _draw_97a70ec9.Uniform10(7, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->Color());
                _draw_97a70ec9.Uniform(8, radiusRcp);
                _draw_97a70ec9.Uniform(9, radius);
                _draw_97a70ec9.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_97a70ec9.Uniform(11, 1.0f / smoothness);
                _draw_97a70ec9.Uniform(12, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->Opacity());
                _draw_97a70ec9.Uniform2(13, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_97a70ec9_20_2_12, EndVec_97a70ec9_20_3_13)));
                _draw_97a70ec9.Uniform2(14, StartVec_97a70ec9_20_2_12);
                _draw_97a70ec9.Uniform2(15, EndVec_97a70ec9_20_3_13);
                _draw_97a70ec9.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_e55ff004.BlendEnabled(true);
                _draw_e55ff004.DepthTestEnabled(false);
                _draw_e55ff004.CullFace(uPtr(dc)->CullFace());
                _draw_e55ff004.BlendSrcAlpha(7);
                _draw_e55ff004.BlendDstRgb(3);
                _draw_e55ff004.Use();
                _draw_e55ff004.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_e55ff004.Uniform(1, radius + (extend * 2.0f));
                _draw_e55ff004.Uniform2(2, center);
                _draw_e55ff004.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_e55ff004.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_e55ff004.Uniform2(5, (ind39 = visual->ActualSize(), ::g::Uno::Float2__New2(ind39.X, ind39.Y)));
                _draw_e55ff004.Uniform(6, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->DashSize());
                _draw_e55ff004.Uniform10(7, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->Color());
                _draw_e55ff004.Uniform(8, radiusRcp);
                _draw_e55ff004.Uniform(9, radius);
                _draw_e55ff004.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_e55ff004.Uniform(11, 1.0f / smoothness);
                _draw_e55ff004.Uniform(12, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->Opacity());
                _draw_e55ff004.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_86d170e2_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_86d170e2_20_2_16 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_86d170e2_20_3_17 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_75feaa92.BlendEnabled(true);
                _draw_75feaa92.DepthTestEnabled(false);
                _draw_75feaa92.CullFace(uPtr(dc)->CullFace());
                _draw_75feaa92.BlendSrcAlpha(7);
                _draw_75feaa92.BlendDstRgb(3);
                _draw_75feaa92.Const(0, DP_86d170e2_14_8_4.NeedFract);
                _draw_75feaa92.Const(1, DP_86d170e2_14_8_4.Texture == NULL);
                _draw_75feaa92.Use();
                _draw_75feaa92.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_75feaa92.Uniform(3, radius + (extend * 2.0f));
                _draw_75feaa92.Uniform2(4, center);
                _draw_75feaa92.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_75feaa92.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_75feaa92.Uniform2(7, DP_86d170e2_14_8_4.Origin);
                _draw_75feaa92.Uniform2(8, DP_86d170e2_14_8_4.Size);
                _draw_75feaa92.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind40 = DP_86d170e2_14_8_4.UVClip, ::g::Uno::Float2__New2(ind40.Z, ind40.W)), (ind41 = DP_86d170e2_14_8_4.UVClip, ::g::Uno::Float2__New2(ind41.X, ind41.Y))));
                _draw_75feaa92.Uniform2(10, (ind42 = DP_86d170e2_14_8_4.UVClip, ::g::Uno::Float2__New2(ind42.X, ind42.Y)));
                _draw_75feaa92.Uniform2(11, DP_86d170e2_14_8_4.TexCoordScale1);
                _draw_75feaa92.Uniform2(12, DP_86d170e2_14_8_4.TexCoordBias1);
                _draw_75feaa92.Uniform2(13, DP_86d170e2_14_8_4.TexCoordScale2);
                _draw_75feaa92.Uniform2(14, DP_86d170e2_14_8_4.TexCoordBias2);
                _draw_75feaa92.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_75feaa92.Uniform(16, radiusRcp);
                _draw_75feaa92.Uniform(17, radius);
                _draw_75feaa92.Uniform(18, dc->ViewportPixelsPerPoint());
                _draw_75feaa92.Uniform(19, 1.0f / smoothness);
                _draw_75feaa92.Uniform(20, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_75feaa92.Uniform2(21, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_86d170e2_20_2_16, EndVec_86d170e2_20_3_17)));
                _draw_75feaa92.Uniform2(22, StartVec_86d170e2_20_2_16);
                _draw_75feaa92.Uniform2(23, EndVec_86d170e2_20_3_17);
                _draw_75feaa92.Sampler3(24, DP_86d170e2_14_8_4.Texture, DP_86d170e2_14_8_4.SamplerState);
                _draw_75feaa92.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_913a91f5_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_913a91f5_20_2_16 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_913a91f5_20_3_17 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_c3b78bcd.BlendEnabled(true);
                _draw_c3b78bcd.DepthTestEnabled(false);
                _draw_c3b78bcd.CullFace(uPtr(dc)->CullFace());
                _draw_c3b78bcd.BlendSrcAlpha(7);
                _draw_c3b78bcd.BlendDstRgb(3);
                _draw_c3b78bcd.Const(0, DP_913a91f5_14_8_4.NeedFract);
                _draw_c3b78bcd.Const(1, DP_913a91f5_14_8_4.Texture == NULL);
                _draw_c3b78bcd.Use();
                _draw_c3b78bcd.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_c3b78bcd.Uniform(3, radius + (extend * 2.0f));
                _draw_c3b78bcd.Uniform2(4, center);
                _draw_c3b78bcd.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_c3b78bcd.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_c3b78bcd.Uniform2(7, DP_913a91f5_14_8_4.Origin);
                _draw_c3b78bcd.Uniform2(8, DP_913a91f5_14_8_4.Size);
                _draw_c3b78bcd.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind43 = DP_913a91f5_14_8_4.UVClip, ::g::Uno::Float2__New2(ind43.Z, ind43.W)), (ind44 = DP_913a91f5_14_8_4.UVClip, ::g::Uno::Float2__New2(ind44.X, ind44.Y))));
                _draw_c3b78bcd.Uniform2(10, (ind45 = DP_913a91f5_14_8_4.UVClip, ::g::Uno::Float2__New2(ind45.X, ind45.Y)));
                _draw_c3b78bcd.Uniform2(11, DP_913a91f5_14_8_4.TexCoordScale1);
                _draw_c3b78bcd.Uniform2(12, DP_913a91f5_14_8_4.TexCoordBias1);
                _draw_c3b78bcd.Uniform2(13, DP_913a91f5_14_8_4.TexCoordScale2);
                _draw_c3b78bcd.Uniform2(14, DP_913a91f5_14_8_4.TexCoordBias2);
                _draw_c3b78bcd.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_c3b78bcd.Uniform(16, radiusRcp);
                _draw_c3b78bcd.Uniform(17, radius);
                _draw_c3b78bcd.Uniform(18, dc->ViewportPixelsPerPoint());
                _draw_c3b78bcd.Uniform(19, 1.0f / smoothness);
                _draw_c3b78bcd.Uniform(20, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_c3b78bcd.Uniform2(21, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_913a91f5_20_2_16, EndVec_913a91f5_20_3_17)));
                _draw_c3b78bcd.Uniform2(22, StartVec_913a91f5_20_2_16);
                _draw_c3b78bcd.Uniform2(23, EndVec_913a91f5_20_3_17);
                _draw_c3b78bcd.Sampler3(24, DP_913a91f5_14_8_4.Texture, DP_913a91f5_14_8_4.SamplerState);
                _draw_c3b78bcd.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_32adc0b0_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                _draw_652aba88.BlendEnabled(true);
                _draw_652aba88.DepthTestEnabled(false);
                _draw_652aba88.CullFace(uPtr(dc)->CullFace());
                _draw_652aba88.BlendSrcAlpha(7);
                _draw_652aba88.BlendDstRgb(3);
                _draw_652aba88.Const(0, DP_32adc0b0_14_8_4.NeedFract);
                _draw_652aba88.Const(1, DP_32adc0b0_14_8_4.Texture == NULL);
                _draw_652aba88.Use();
                _draw_652aba88.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_652aba88.Uniform(3, radius + (extend * 2.0f));
                _draw_652aba88.Uniform2(4, center);
                _draw_652aba88.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_652aba88.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_652aba88.Uniform2(7, DP_32adc0b0_14_8_4.Origin);
                _draw_652aba88.Uniform2(8, DP_32adc0b0_14_8_4.Size);
                _draw_652aba88.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind46 = DP_32adc0b0_14_8_4.UVClip, ::g::Uno::Float2__New2(ind46.Z, ind46.W)), (ind47 = DP_32adc0b0_14_8_4.UVClip, ::g::Uno::Float2__New2(ind47.X, ind47.Y))));
                _draw_652aba88.Uniform2(10, (ind48 = DP_32adc0b0_14_8_4.UVClip, ::g::Uno::Float2__New2(ind48.X, ind48.Y)));
                _draw_652aba88.Uniform2(11, DP_32adc0b0_14_8_4.TexCoordScale1);
                _draw_652aba88.Uniform2(12, DP_32adc0b0_14_8_4.TexCoordBias1);
                _draw_652aba88.Uniform2(13, DP_32adc0b0_14_8_4.TexCoordScale2);
                _draw_652aba88.Uniform2(14, DP_32adc0b0_14_8_4.TexCoordBias2);
                _draw_652aba88.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_652aba88.Uniform(16, radiusRcp);
                _draw_652aba88.Uniform(17, radius);
                _draw_652aba88.Uniform(18, dc->ViewportPixelsPerPoint());
                _draw_652aba88.Uniform(19, 1.0f / smoothness);
                _draw_652aba88.Uniform(20, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_652aba88.Sampler3(21, DP_32adc0b0_14_8_4.Texture, DP_32adc0b0_14_8_4.SamplerState);
                _draw_652aba88.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_d48f543f_20_2_7 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_d48f543f_20_3_8 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_d48f543f.BlendEnabled(true);
                _draw_d48f543f.DepthTestEnabled(false);
                _draw_d48f543f.CullFace(uPtr(dc)->CullFace());
                _draw_d48f543f.BlendSrcAlpha(7);
                _draw_d48f543f.BlendDstRgb(3);
                _draw_d48f543f.Use();
                _draw_d48f543f.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_d48f543f.Uniform(1, radius + (extend * 2.0f));
                _draw_d48f543f.Uniform2(2, center);
                _draw_d48f543f.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_d48f543f.Uniform(4, radiusRcp);
                _draw_d48f543f.Uniform(5, radius);
                _draw_d48f543f.Uniform(6, dc->ViewportPixelsPerPoint());
                _draw_d48f543f.Uniform(7, 1.0f / smoothness);
                _draw_d48f543f.Uniform10(8, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind49 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind49.X, ind49.Y, ind49.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_d48f543f.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_d48f543f.Uniform2(10, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_d48f543f_20_2_7, EndVec_d48f543f_20_3_8)));
                _draw_d48f543f.Uniform2(11, StartVec_d48f543f_20_2_7);
                _draw_d48f543f.Uniform2(12, EndVec_d48f543f_20_3_8);
                _draw_d48f543f.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_760282fa_20_2_7 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_760282fa_20_3_8 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_760282fa.BlendEnabled(true);
                _draw_760282fa.DepthTestEnabled(false);
                _draw_760282fa.CullFace(uPtr(dc)->CullFace());
                _draw_760282fa.BlendSrcAlpha(7);
                _draw_760282fa.BlendDstRgb(3);
                _draw_760282fa.Use();
                _draw_760282fa.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_760282fa.Uniform(1, radius + (extend * 2.0f));
                _draw_760282fa.Uniform2(2, center);
                _draw_760282fa.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_760282fa.Uniform(4, radiusRcp);
                _draw_760282fa.Uniform(5, radius);
                _draw_760282fa.Uniform(6, dc->ViewportPixelsPerPoint());
                _draw_760282fa.Uniform(7, 1.0f / smoothness);
                _draw_760282fa.Uniform10(8, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind50 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind50.X, ind50.Y, ind50.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_760282fa.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_760282fa.Uniform2(10, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_760282fa_20_2_7, EndVec_760282fa_20_3_8)));
                _draw_760282fa.Uniform2(11, StartVec_760282fa_20_2_7);
                _draw_760282fa.Uniform2(12, EndVec_760282fa_20_3_8);
                _draw_760282fa.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_c3bb6435.BlendEnabled(true);
                _draw_c3bb6435.DepthTestEnabled(false);
                _draw_c3bb6435.CullFace(uPtr(dc)->CullFace());
                _draw_c3bb6435.BlendSrcAlpha(7);
                _draw_c3bb6435.BlendDstRgb(3);
                _draw_c3bb6435.Use();
                _draw_c3bb6435.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_c3bb6435.Uniform(1, radius + (extend * 2.0f));
                _draw_c3bb6435.Uniform2(2, center);
                _draw_c3bb6435.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_c3bb6435.Uniform(4, radiusRcp);
                _draw_c3bb6435.Uniform(5, radius);
                _draw_c3bb6435.Uniform(6, dc->ViewportPixelsPerPoint());
                _draw_c3bb6435.Uniform(7, 1.0f / smoothness);
                _draw_c3bb6435.Uniform10(8, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind51 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind51.X, ind51.Y, ind51.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_c3bb6435.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_c3bb6435.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_971c4890_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_971c4890_20_2_14 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_971c4890_20_3_15 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_971c4890.BlendEnabled(true);
                _draw_971c4890.DepthTestEnabled(false);
                _draw_971c4890.CullFace(uPtr(dc)->CullFace());
                _draw_971c4890.BlendSrcAlpha(7);
                _draw_971c4890.BlendDstRgb(3);
                _draw_971c4890.Use();
                _draw_971c4890.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_971c4890.Uniform(1, radius + (extend * 2.0f));
                _draw_971c4890.Uniform2(2, center);
                _draw_971c4890.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_971c4890.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_971c4890.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_971c4890.Uniform(6, radiusRcp);
                _draw_971c4890.Uniform(7, radius);
                _draw_971c4890.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_971c4890.Uniform(9, 1.0f / smoothness);
                _draw_971c4890.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_971c4890.Uniform10(11, endPoints_971c4890_14_17_6);
                _draw_971c4890.Uniform2(12, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_971c4890_14_17_6.Z, endPoints_971c4890_14_17_6.W), ::g::Uno::Float2__New2(endPoints_971c4890_14_17_6.X, endPoints_971c4890_14_17_6.Y))));
                _draw_971c4890.Uniform(13, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_971c4890_14_17_6.Z, endPoints_971c4890_14_17_6.W), ::g::Uno::Float2__New2(endPoints_971c4890_14_17_6.X, endPoints_971c4890_14_17_6.Y))));
                _draw_971c4890.Uniform2(14, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_971c4890_20_2_14, EndVec_971c4890_20_3_15)));
                _draw_971c4890.Uniform2(15, StartVec_971c4890_20_2_14);
                _draw_971c4890.Uniform2(16, EndVec_971c4890_20_3_15);
                _draw_971c4890.Sampler3(17, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_971c4890.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_6b0b4769_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_6b0b4769_20_2_14 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_6b0b4769_20_3_15 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_6b0b4769.BlendEnabled(true);
                _draw_6b0b4769.DepthTestEnabled(false);
                _draw_6b0b4769.CullFace(uPtr(dc)->CullFace());
                _draw_6b0b4769.BlendSrcAlpha(7);
                _draw_6b0b4769.BlendDstRgb(3);
                _draw_6b0b4769.Use();
                _draw_6b0b4769.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_6b0b4769.Uniform(1, radius + (extend * 2.0f));
                _draw_6b0b4769.Uniform2(2, center);
                _draw_6b0b4769.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_6b0b4769.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_6b0b4769.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_6b0b4769.Uniform(6, radiusRcp);
                _draw_6b0b4769.Uniform(7, radius);
                _draw_6b0b4769.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_6b0b4769.Uniform(9, 1.0f / smoothness);
                _draw_6b0b4769.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_6b0b4769.Uniform10(11, endPoints_6b0b4769_14_17_6);
                _draw_6b0b4769.Uniform2(12, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_6b0b4769_14_17_6.Z, endPoints_6b0b4769_14_17_6.W), ::g::Uno::Float2__New2(endPoints_6b0b4769_14_17_6.X, endPoints_6b0b4769_14_17_6.Y))));
                _draw_6b0b4769.Uniform(13, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_6b0b4769_14_17_6.Z, endPoints_6b0b4769_14_17_6.W), ::g::Uno::Float2__New2(endPoints_6b0b4769_14_17_6.X, endPoints_6b0b4769_14_17_6.Y))));
                _draw_6b0b4769.Uniform2(14, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_6b0b4769_20_2_14, EndVec_6b0b4769_20_3_15)));
                _draw_6b0b4769.Uniform2(15, StartVec_6b0b4769_20_2_14);
                _draw_6b0b4769.Uniform2(16, EndVec_6b0b4769_20_3_15);
                _draw_6b0b4769.Sampler3(17, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_6b0b4769.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_c99818ae_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                _draw_c99818ae.BlendEnabled(true);
                _draw_c99818ae.DepthTestEnabled(false);
                _draw_c99818ae.CullFace(uPtr(dc)->CullFace());
                _draw_c99818ae.BlendSrcAlpha(7);
                _draw_c99818ae.BlendDstRgb(3);
                _draw_c99818ae.Use();
                _draw_c99818ae.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_c99818ae.Uniform(1, radius + (extend * 2.0f));
                _draw_c99818ae.Uniform2(2, center);
                _draw_c99818ae.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_c99818ae.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_c99818ae.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_c99818ae.Uniform(6, radiusRcp);
                _draw_c99818ae.Uniform(7, radius);
                _draw_c99818ae.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_c99818ae.Uniform(9, 1.0f / smoothness);
                _draw_c99818ae.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_c99818ae.Uniform10(11, endPoints_c99818ae_14_17_6);
                _draw_c99818ae.Uniform2(12, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_c99818ae_14_17_6.Z, endPoints_c99818ae_14_17_6.W), ::g::Uno::Float2__New2(endPoints_c99818ae_14_17_6.X, endPoints_c99818ae_14_17_6.Y))));
                _draw_c99818ae.Uniform(13, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_c99818ae_14_17_6.Z, endPoints_c99818ae_14_17_6.W), ::g::Uno::Float2__New2(endPoints_c99818ae_14_17_6.X, endPoints_c99818ae_14_17_6.Y))));
                _draw_c99818ae.Sampler3(14, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_c99818ae.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_5a33a200_20_2_7 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_5a33a200_20_3_8 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_5a33a200.BlendEnabled(true);
                _draw_5a33a200.DepthTestEnabled(false);
                _draw_5a33a200.CullFace(uPtr(dc)->CullFace());
                _draw_5a33a200.BlendSrcAlpha(7);
                _draw_5a33a200.BlendDstRgb(3);
                _draw_5a33a200.Use();
                _draw_5a33a200.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_5a33a200.Uniform(1, radius + (extend * 2.0f));
                _draw_5a33a200.Uniform2(2, center);
                _draw_5a33a200.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_5a33a200.Uniform(4, radiusRcp);
                _draw_5a33a200.Uniform(5, radius);
                _draw_5a33a200.Uniform(6, dc->ViewportPixelsPerPoint());
                _draw_5a33a200.Uniform(7, 1.0f / smoothness);
                _draw_5a33a200.Uniform10(8, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind52 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind52.X, ind52.Y, ind52.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_5a33a200.Uniform2(9, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_5a33a200_20_2_7, EndVec_5a33a200_20_3_8)));
                _draw_5a33a200.Uniform2(10, StartVec_5a33a200_20_2_7);
                _draw_5a33a200.Uniform2(11, EndVec_5a33a200_20_3_8);
                _draw_5a33a200.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_b8c07345_20_2_7 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_b8c07345_20_3_8 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_b8c07345.BlendEnabled(true);
                _draw_b8c07345.DepthTestEnabled(false);
                _draw_b8c07345.CullFace(uPtr(dc)->CullFace());
                _draw_b8c07345.BlendSrcAlpha(7);
                _draw_b8c07345.BlendDstRgb(3);
                _draw_b8c07345.Use();
                _draw_b8c07345.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_b8c07345.Uniform(1, radius + (extend * 2.0f));
                _draw_b8c07345.Uniform2(2, center);
                _draw_b8c07345.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_b8c07345.Uniform(4, radiusRcp);
                _draw_b8c07345.Uniform(5, radius);
                _draw_b8c07345.Uniform(6, dc->ViewportPixelsPerPoint());
                _draw_b8c07345.Uniform(7, 1.0f / smoothness);
                _draw_b8c07345.Uniform10(8, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind53 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind53.X, ind53.Y, ind53.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_b8c07345.Uniform2(9, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_b8c07345_20_2_7, EndVec_b8c07345_20_3_8)));
                _draw_b8c07345.Uniform2(10, StartVec_b8c07345_20_2_7);
                _draw_b8c07345.Uniform2(11, EndVec_b8c07345_20_3_8);
                _draw_b8c07345.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_60ff1ce.BlendEnabled(true);
                _draw_60ff1ce.DepthTestEnabled(false);
                _draw_60ff1ce.CullFace(uPtr(dc)->CullFace());
                _draw_60ff1ce.BlendSrcAlpha(7);
                _draw_60ff1ce.BlendDstRgb(3);
                _draw_60ff1ce.Use();
                _draw_60ff1ce.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_60ff1ce.Uniform(1, radius + (extend * 2.0f));
                _draw_60ff1ce.Uniform2(2, center);
                _draw_60ff1ce.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_60ff1ce.Uniform(4, radiusRcp);
                _draw_60ff1ce.Uniform(5, radius);
                _draw_60ff1ce.Uniform(6, dc->ViewportPixelsPerPoint());
                _draw_60ff1ce.Uniform(7, 1.0f / smoothness);
                _draw_60ff1ce.Uniform10(8, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind54 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind54.X, ind54.Y, ind54.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_60ff1ce.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
    }
}

// public void Fill(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Brush brush, float2 center, float smoothness) [instance]
void Circle::Fill(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 center, float smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Circle", "Fill(Fuse.DrawContext,Fuse.Elements.Element,float,Fuse.Drawing.Brush,float2,float)");
    Draw(dc, visual, radius, brush, _fillCoverage, _oneLimitCoverage, smoothness, center, smoothness);
}

// private generated void init_DrawCalls() [instance]
void Circle::init_DrawCalls()
{
    uStackFrame __("Fuse.Drawing.Primitives.Circle", "init_DrawCalls()");
    _draw_11ecc447 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlef7ec1df8());
    _draw_11ecc46a = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlef7ec1dfb());
    _draw_11ecc489 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlef7ec1dfa());
    _draw_11ece0a5 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlef7ec1ed6());
    _draw_11ece106 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlef7ec1ed7());
    _draw_11ece063 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlef7ec1ed4());
    _draw_46b4edd5 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle0f9e740a());
    _draw_46b4edf4 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle0f9e7409());
    _draw_46b4ed0f = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle0f9e7404());
    _draw_1a74461f = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle39b04c1c());
    _draw_1a744642 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle39b04c1f());
    _draw_1a744661 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle39b04c1e());
    _draw_4eb3507d = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle421a442e());
    _draw_4eb3509c = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle421a442d());
    _draw_cf935b24 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlee4c1b8c1());
    _draw_75feaa92 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle383ea66b());
    _draw_c3b78bcd = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circledae61b06());
    _draw_652aba88 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle7d8d8fa1());
    _draw_f633e00e = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle0af95f83());
    _draw_97a70ec9 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circleada0d41e());
    _draw_e55ff004 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle504848b9());
    _draw_d48f543f = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle959732b8());
    _draw_760282fa = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle383ea753());
    _draw_c3bb6435 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circledae61bee());
    _draw_971c4890 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle0817acc5());
    _draw_6b0b4769 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circledad265be());
    _draw_c99818ae = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle382af123());
    _draw_5a33a200 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle20214e11());
    _draw_b8c07345 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle7d79d976());
    _draw_60ff1ce = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle7aabdc1f());
}

// private void InitBuffers() [instance]
void Circle::InitBuffers()
{
    uStackFrame __("Fuse.Drawing.Primitives.Circle", "InitBuffers()");
    _bufferVertex = ::g::Fuse::Drawing::Internal::Float2Buffer::New3();
    _bufferIndex = ::g::Fuse::Drawing::Internal::UShortBuffer::New3();
    int32_t numSegments = 16;
    float theta = 1.57079637f - (6.28318548f / (float)numSegments);
    float len = 1.0f / ::g::Uno::Math::Sin1(theta);
    uPtr(_bufferVertex)->Append(0.0, 0.0);

    for (int32_t i = 0; i < numSegments; ++i)
    {
        float r = (((float)i / (float)numSegments) * 3.14159274f) * 2.0f;
        uPtr(_bufferVertex)->Append((double)(::g::Uno::Math::Cos1(r) * len), (double)(::g::Uno::Math::Sin1(r) * len));
        uPtr(_bufferIndex)->Append(0);
        uPtr(_bufferIndex)->Append((i == (numSegments - 1)) ? 1 : i + 2);
        uPtr(_bufferIndex)->Append(i + 1);
    }

    uPtr(_bufferVertex)->InitDeviceVertex(0);
    uPtr(_bufferIndex)->InitDeviceIndex(0);
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Stroke stroke, float2 center, float smoothness) [instance]
void Circle::Stroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2 center, float smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Circle", "Stroke(Fuse.DrawContext,Fuse.Elements.Element,float,Fuse.Drawing.Stroke,float2,float)");
    ::g::Uno::Float2 r = uPtr(stroke)->GetDeviceAdjusted(uPtr(dc)->ViewportPixelsPerPoint());
    ::g::Fuse::Drawing::Primitives::StrokeCoverage* sc = _strokeCoverage;
    uPtr(sc)->Radius = (r.Item(0) / 2.0f);
    sc->Center = r.Item(1);
    float extend = ::g::Uno::Math::Max1(0.0f, r.Item(0) + r.Item(1)) + smoothness;
    Draw(dc, visual, radius, stroke->Brush(), sc, _oneLimitCoverage, extend, center, smoothness);
}

// public generated Circle New() [static]
Circle* Circle::New1()
{
    Circle* obj55 = (Circle*)uNew(Circle_typeof());
    obj55->ctor_();
    return obj55;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.12.0/Wedge.uno
// ----------------------------------------------------------------------

// internal sealed class ConcaveWedgeCoverage
// {
static void ConcaveWedgeCoverage_build(uType* type)
{
    type->SetFields(2);
}

uType* ConcaveWedgeCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::WedgeCoverage_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ConcaveWedgeCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.ConcaveWedgeCoverage", options);
    type->fp_build_ = ConcaveWedgeCoverage_build;
    type->fp_ctor_ = (void*)ConcaveWedgeCoverage__New1_fn;
    return type;
}

// public generated ConcaveWedgeCoverage()
void ConcaveWedgeCoverage__ctor_2_fn(ConcaveWedgeCoverage* __this)
{
    __this->ctor_2();
}

// public generated ConcaveWedgeCoverage New()
void ConcaveWedgeCoverage__New1_fn(ConcaveWedgeCoverage** __retval)
{
    *__retval = ConcaveWedgeCoverage::New1();
}

// public generated ConcaveWedgeCoverage() [instance]
void ConcaveWedgeCoverage::ctor_2()
{
    ctor_1();
}

// public generated ConcaveWedgeCoverage New() [static]
ConcaveWedgeCoverage* ConcaveWedgeCoverage::New1()
{
    ConcaveWedgeCoverage* obj1 = (ConcaveWedgeCoverage*)uNew(ConcaveWedgeCoverage_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.12.0/Wedge.uno
// ----------------------------------------------------------------------

// internal sealed class ConvexWedgeCoverage
// {
static void ConvexWedgeCoverage_build(uType* type)
{
    type->SetFields(2);
}

uType* ConvexWedgeCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::WedgeCoverage_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ConvexWedgeCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.ConvexWedgeCoverage", options);
    type->fp_build_ = ConvexWedgeCoverage_build;
    type->fp_ctor_ = (void*)ConvexWedgeCoverage__New1_fn;
    return type;
}

// public generated ConvexWedgeCoverage()
void ConvexWedgeCoverage__ctor_2_fn(ConvexWedgeCoverage* __this)
{
    __this->ctor_2();
}

// public generated ConvexWedgeCoverage New()
void ConvexWedgeCoverage__New1_fn(ConvexWedgeCoverage** __retval)
{
    *__retval = ConvexWedgeCoverage::New1();
}

// public generated ConvexWedgeCoverage() [instance]
void ConvexWedgeCoverage::ctor_2()
{
    ctor_1();
}

// public generated ConvexWedgeCoverage New() [static]
ConvexWedgeCoverage* ConvexWedgeCoverage::New1()
{
    ConvexWedgeCoverage* obj1 = (ConvexWedgeCoverage*)uNew(ConvexWedgeCoverage_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.12.0/Rectangle.uno
// --------------------------------------------------------------------------

// internal abstract class Coverage
// {
static void Coverage_build(uType* type)
{
}

uType* Coverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Coverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Coverage", options);
    type->fp_build_ = Coverage_build;
    return type;
}

// protected generated Coverage()
void Coverage__ctor__fn(Coverage* __this)
{
    __this->ctor_();
}

// protected generated Coverage() [instance]
void Coverage::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.12.0/Rectangle.uno
// --------------------------------------------------------------------------

// internal class Falloff
// {
static void Falloff_build(uType* type)
{
}

uType* Falloff_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Falloff);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Falloff", options);
    type->fp_build_ = Falloff_build;
    type->fp_ctor_ = (void*)Falloff__New1_fn;
    return type;
}

// public generated Falloff()
void Falloff__ctor__fn(Falloff* __this)
{
    __this->ctor_();
}

// public generated Falloff New()
void Falloff__New1_fn(Falloff** __retval)
{
    *__retval = Falloff::New1();
}

// public generated Falloff() [instance]
void Falloff::ctor_()
{
}

// public generated Falloff New() [static]
Falloff* Falloff::New1()
{
    Falloff* obj1 = (Falloff*)uNew(Falloff_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.12.0/Rectangle.uno
// --------------------------------------------------------------------------

// internal sealed class FillCoverage
// {
static void FillCoverage_build(uType* type)
{
}

uType* FillCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::Coverage_typeof();
    options.ObjectSize = sizeof(FillCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.FillCoverage", options);
    type->fp_build_ = FillCoverage_build;
    type->fp_ctor_ = (void*)FillCoverage__New1_fn;
    return type;
}

// public generated FillCoverage()
void FillCoverage__ctor_1_fn(FillCoverage* __this)
{
    __this->ctor_1();
}

// public generated FillCoverage New()
void FillCoverage__New1_fn(FillCoverage** __retval)
{
    *__retval = FillCoverage::New1();
}

// public generated FillCoverage() [instance]
void FillCoverage::ctor_1()
{
    ctor_();
}

// public generated FillCoverage New() [static]
FillCoverage* FillCoverage::New1()
{
    FillCoverage* obj1 = (FillCoverage*)uNew(FillCoverage_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.12.0/Circle.uno
// -----------------------------------------------------------------------

// internal abstract class LimitCoverage
// {
static void LimitCoverage_build(uType* type)
{
}

uType* LimitCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(LimitCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.LimitCoverage", options);
    type->fp_build_ = LimitCoverage_build;
    return type;
}

// protected generated LimitCoverage()
void LimitCoverage__ctor__fn(LimitCoverage* __this)
{
    __this->ctor_();
}

// protected generated LimitCoverage() [instance]
void LimitCoverage::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.12.0/Circle.uno
// -----------------------------------------------------------------------

// internal sealed class OneLimitCoverage
// {
static void OneLimitCoverage_build(uType* type)
{
}

uType* OneLimitCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::LimitCoverage_typeof();
    options.ObjectSize = sizeof(OneLimitCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.OneLimitCoverage", options);
    type->fp_build_ = OneLimitCoverage_build;
    type->fp_ctor_ = (void*)OneLimitCoverage__New1_fn;
    return type;
}

// public generated OneLimitCoverage()
void OneLimitCoverage__ctor_1_fn(OneLimitCoverage* __this)
{
    __this->ctor_1();
}

// public generated OneLimitCoverage New()
void OneLimitCoverage__New1_fn(OneLimitCoverage** __retval)
{
    *__retval = OneLimitCoverage::New1();
}

// public generated OneLimitCoverage() [instance]
void OneLimitCoverage::ctor_1()
{
    ctor_();
}

// public generated OneLimitCoverage New() [static]
OneLimitCoverage* OneLimitCoverage::New1()
{
    OneLimitCoverage* obj1 = (OneLimitCoverage*)uNew(OneLimitCoverage_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.12.0/Rectangle.uno
// --------------------------------------------------------------------------

// public sealed class Rectangle
// {
// static generated Rectangle()
static void Rectangle__cctor__fn(uType* __type)
{
    Rectangle::Singleton_ = Rectangle::New1();
}

static void Rectangle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("more than two non-zero values!");
    ::TYPES[11] = ::g::Uno::Float_typeof()->Array();
    ::TYPES[12] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[0] = ::g::Fuse::Drawing::Primitives::StrokeCoverage_typeof();
    ::TYPES[1] = ::g::Alive::ImageFill_typeof();
    ::TYPES[13] = ::g::Fuse::Drawing::Primitives::ShadowFalloff_typeof();
    ::TYPES[5] = ::g::DashedSolidColor_typeof();
    ::TYPES[6] = ::g::Fuse::Drawing::ImageFill_typeof();
    ::TYPES[7] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[8] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[9] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[10] = ::g::Fuse::Drawing::Primitives::FillCoverage_typeof();
    ::TYPES[14] = ::TYPES[11/*float[]*/]->Array();
    ::TYPES[15] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[16] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[17] = ::g::Uno::Byte_typeof()->Array();
    type->SetDependencies(
        ::g::FuseDrawingPrimitives_bundle_typeof(),
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/], offsetof(Rectangle, _strokeCoverage), 0,
        ::TYPES[10/*Fuse.Drawing.Primitives.FillCoverage*/], offsetof(Rectangle, _fillCoverage), 0,
        ::g::Fuse::Drawing::Primitives::Falloff_typeof(), offsetof(Rectangle, _shadowFalloff), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(Rectangle, _vertexInfo), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(Rectangle, _edgeInfo), 0,
        ::g::Fuse::Drawing::Internal::FloatBuffer_typeof(), offsetof(Rectangle, _bufferDistance), 0,
        ::TYPES[11/*float[]*/], offsetof(Rectangle, _uniforms), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_e1942474), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_e194259b), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_e1942cb4), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_e1942d57), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_e193fb34), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_8d31c878), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_2b82e760), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_2b82e77f), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_f3256f14), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_f3256f33), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_83d2daaf), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_2546096a), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_72fdd2e7), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_9b1081f2), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_6a13e7fb), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_c8a0b940), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_7ae6d043), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_9623e160), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_4869d66b), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_a6f6a7b0), 0,
        type, (uintptr_t)&Rectangle::Singleton_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Singleton", 27));
    type->Reflection.SetFunctions(4,
        new uFunction("Fill", NULL, (void*)Rectangle__Fill_fn, 0, false, uVoid_typeof(), 7, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Visual_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Brush_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Rectangle__New1_fn, 0, true, type, 0),
        new uFunction("Shadow", NULL, (void*)Rectangle__Shadow_fn, 0, false, uVoid_typeof(), 7, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Visual_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Brush_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Stroke", NULL, (void*)Rectangle__Stroke_fn, 0, false, uVoid_typeof(), 7, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Visual_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Stroke_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()));
}

uType* Rectangle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 28;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Rectangle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Rectangle", options);
    type->fp_build_ = Rectangle_build;
    type->fp_ctor_ = (void*)Rectangle__New1_fn;
    type->fp_cctor_ = Rectangle__cctor__fn;
    return type;
}

// public generated Rectangle()
void Rectangle__ctor__fn(Rectangle* __this)
{
    __this->ctor_();
}

// private float[] add(float[] a, float[] b)
void Rectangle__add_fn(Rectangle* __this, uArray* a, uArray* b, uArray** __retval)
{
    *__retval = __this->add(a, b);
}

// private void Draw(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, Fuse.Drawing.Primitives.Coverage cover, float2 extend, float2 position, float smoothness, [Fuse.Drawing.Primitives.Falloff falloff])
void Rectangle__Draw_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Uno::Float2* extend, ::g::Uno::Float2* position, float* smoothness, ::g::Fuse::Drawing::Primitives::Falloff* falloff)
{
    __this->Draw(dc, visual, *Size, *CornerRadius, brush, cover, *extend, *position, *smoothness, falloff);
}

// public void Fill(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, [float2 Position], [float Smoothness])
void Rectangle__Fill_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* Position, float* Smoothness)
{
    __this->Fill(dc, visual, *Size, *CornerRadius, brush, *Position, *Smoothness);
}

// private generated void init_DrawCalls()
void Rectangle__init_DrawCalls_fn(Rectangle* __this)
{
    __this->init_DrawCalls();
}

// private void InitBuffers()
void Rectangle__InitBuffers_fn(Rectangle* __this)
{
    __this->InitBuffers();
}

// private float[] neg(float[] a)
void Rectangle__neg_fn(Rectangle* __this, uArray* a, uArray** __retval)
{
    *__retval = __this->neg(a);
}

// public generated Rectangle New()
void Rectangle__New1_fn(Rectangle** __retval)
{
    *__retval = Rectangle::New1();
}

// public void Shadow(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, [float2 Position], [float Smoothness])
void Rectangle__Shadow_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* Position, float* Smoothness)
{
    __this->Shadow(dc, visual, *Size, *CornerRadius, brush, *Position, *Smoothness);
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Stroke stroke, [float2 Position], [float Smoothness])
void Rectangle__Stroke_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2* Position, float* Smoothness)
{
    __this->Stroke(dc, visual, *Size, *CornerRadius, stroke, *Position, *Smoothness);
}

// private float[] sub(float[] a, float[] b)
void Rectangle__sub_fn(Rectangle* __this, uArray* a, uArray* b, uArray** __retval)
{
    *__retval = __this->sub(a, b);
}

uSStrong<Rectangle*> Rectangle::Singleton_;

// public generated Rectangle() [instance]
void Rectangle::ctor_()
{
    _strokeCoverage = ::g::Fuse::Drawing::Primitives::StrokeCoverage::New1();
    _fillCoverage = ::g::Fuse::Drawing::Primitives::FillCoverage::New1();
    _shadowFalloff = ::g::Fuse::Drawing::Primitives::ShadowFalloff::New2();
    _uniforms = uArray::New(::TYPES[11/*float[]*/], 10);
    init_DrawCalls();
}

// private float[] add(float[] a, float[] b) [instance]
uArray* Rectangle::add(uArray* a, uArray* b)
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "add(float[],float[])");
    uArray* r = uArray::New(::TYPES[11/*float[]*/], uPtr(a)->Length());

    for (int32_t i = 0; i < a->Length(); i++)
        uPtr(r)->Item<float>(i) = uPtr(a)->Item<float>(i) + uPtr(b)->Item<float>(i);

    return r;
}

// private void Draw(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, Fuse.Drawing.Primitives.Coverage cover, float2 extend, float2 position, float smoothness, [Fuse.Drawing.Primitives.Falloff falloff]) [instance]
void Rectangle::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Uno::Float2 extend, ::g::Uno::Float2 position, float smoothness, ::g::Fuse::Drawing::Primitives::Falloff* falloff)
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "Draw(Fuse.DrawContext,Fuse.Visual,float2,float4,Fuse.Drawing.Brush,Fuse.Drawing.Primitives.Coverage,float2,float2,float,[Fuse.Drawing.Primitives.Falloff])");
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float4 ind5;
    ::g::Uno::Float4 ind6;
    ::g::Uno::Float4 ind7;
    ::g::Uno::Float4 ind8;
    ::g::Uno::Float4 ind9;
    ::g::Uno::Float4 ind10;
    ::g::Uno::Float4 ind11;
    ::g::Uno::Float4 ind12;
    ::g::Uno::Float4 ind13;
    ::g::Uno::Float4 ind14;
    ::g::Uno::Float4 ind15;
    ::g::Uno::Float4 ind16;
    ::g::Uno::Float4 ind17;
    ::g::Uno::Float4 ind18;
    ::g::Uno::Float4 ind19;
    ::g::Uno::Float4 ind20;
    ::g::Uno::Float4 ind21;
    ::g::Uno::Float4 ind22;
    ::g::Uno::Float4 ind23;
    ::g::Uno::Float4 ind24;
    ::g::Uno::Float4 ind25;
    ::g::Uno::Float4 ind26;
    ::g::Uno::Float4 ind27;
    ::g::Uno::Float4 ind28;
    ::g::Uno::Float4 ind29;
    ::g::Uno::Float4 ind30;
    ::g::Uno::Float4 ind31;
    ::g::Uno::Float4 ind32;

    if (_bufferDistance == NULL)
        InitBuffers();

    float mn = ::g::Uno::Math::Min1(Size.X / 2.0f, Size.Y / 2.0f);

    for (int32_t i = 0; i < 4; ++i)
        CornerRadius.Item(i, ::g::Uno::Math::Clamp1(CornerRadius.Item(i), 0.0f, mn));

    uPtr(_uniforms)->Item<float>(0) = 0.0f;
    uPtr(_uniforms)->Item<float>(1) = CornerRadius.Item(3);
    uPtr(_uniforms)->Item<float>(2) = CornerRadius.Item(2);
    uPtr(_uniforms)->Item<float>(3) = CornerRadius.Item(1);
    uPtr(_uniforms)->Item<float>(4) = CornerRadius.Item(0);
    uPtr(_uniforms)->Item<float>(5) = Size.X;
    uPtr(_uniforms)->Item<float>(6) = Size.Y;
    uPtr(_uniforms)->Item<float>(7) = extend.X;
    uPtr(_uniforms)->Item<float>(8) = extend.Y;
    uPtr(_uniforms)->Item<float>(9) = mn;
    float float16MaxValue = 65504.0f;
    float distanceScale = ::g::Uno::Math::Max1(1.0f, ::g::Uno::Math::Max1(Size.X + extend.X, Size.Y + extend.Y) / ::g::Uno::Math::Sqrt1(float16MaxValue * 0.5f));
    distanceScale = ::g::Uno::Math::Exp22(::g::Uno::Math::Ceil1(::g::Uno::Math::Log22(distanceScale)));
    float distanceScaleRcp = 1.0f / distanceScale;
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(visual, ::TYPES[12/*Fuse.Elements.Element*/]);
    ::g::Uno::Float2 csz = (elm == NULL) ? ::g::Uno::Float2__New1(1.0f) : uPtr(elm)->ActualSize();

    if (uIs(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))
    {
        if (uIs(brush, ::TYPES[1/*Alive.ImageFill*/]))
        {
            if (uIs(falloff, ::TYPES[13/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_e1942474_14_8_4 = uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->GetDrawParams(dc, csz);
                _draw_e1942474.BlendEnabled(true);
                _draw_e1942474.DepthTestEnabled(false);
                _draw_e1942474.CullFace(uPtr(dc)->CullFace());
                _draw_e1942474.BlendSrcAlpha(7);
                _draw_e1942474.BlendDstRgb(3);
                _draw_e1942474.Const1(0, uPtr(_uniforms)->Length());
                _draw_e1942474.Const(1, DP_e1942474_14_8_4.NeedFract);
                _draw_e1942474.Const(2, DP_e1942474_14_8_4.Texture == NULL);
                _draw_e1942474.Use();
                _draw_e1942474.Attrib1(3, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e1942474.Attrib1(4, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e1942474.Attrib1(5, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e1942474.Uniform1(6, _uniforms);
                _draw_e1942474.Uniform2(7, position);
                _draw_e1942474.Uniform12(8, dc->GetLocalToClipTransform(visual));
                _draw_e1942474.Uniform2(9, csz);
                _draw_e1942474.Uniform2(10, DP_e1942474_14_8_4.Origin);
                _draw_e1942474.Uniform2(11, DP_e1942474_14_8_4.Size);
                _draw_e1942474.Uniform2(12, ::g::Uno::Float2__op_Subtraction2((ind1 = DP_e1942474_14_8_4.UVClip, ::g::Uno::Float2__New2(ind1.Z, ind1.W)), (ind2 = DP_e1942474_14_8_4.UVClip, ::g::Uno::Float2__New2(ind2.X, ind2.Y))));
                _draw_e1942474.Uniform2(13, (ind3 = DP_e1942474_14_8_4.UVClip, ::g::Uno::Float2__New2(ind3.X, ind3.Y)));
                _draw_e1942474.Uniform2(14, DP_e1942474_14_8_4.TexCoordScale1);
                _draw_e1942474.Uniform2(15, DP_e1942474_14_8_4.TexCoordBias1);
                _draw_e1942474.Uniform2(16, DP_e1942474_14_8_4.TexCoordScale2);
                _draw_e1942474.Uniform2(17, DP_e1942474_14_8_4.TexCoordBias2);
                _draw_e1942474.Uniform10(18, uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->Color());
                _draw_e1942474.Uniform(19, distanceScaleRcp);
                _draw_e1942474.Uniform(20, distanceScale);
                _draw_e1942474.Uniform(21, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e1942474.Uniform(22, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e1942474.Uniform(23, dc->ViewportPixelsPerPoint());
                _draw_e1942474.Uniform(24, 1.0f / smoothness);
                _draw_e1942474.Uniform(25, uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->Opacity());
                _draw_e1942474.Sampler3(26, DP_e1942474_14_8_4.Texture, DP_e1942474_14_8_4.SamplerState);
                _draw_e1942474.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_e194259b_14_8_4 = uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->GetDrawParams(dc, csz);
                _draw_e194259b.BlendEnabled(true);
                _draw_e194259b.DepthTestEnabled(false);
                _draw_e194259b.CullFace(uPtr(dc)->CullFace());
                _draw_e194259b.BlendSrcAlpha(7);
                _draw_e194259b.BlendDstRgb(3);
                _draw_e194259b.Const1(0, uPtr(_uniforms)->Length());
                _draw_e194259b.Const(1, DP_e194259b_14_8_4.NeedFract);
                _draw_e194259b.Const(2, DP_e194259b_14_8_4.Texture == NULL);
                _draw_e194259b.Use();
                _draw_e194259b.Attrib1(3, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e194259b.Attrib1(4, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e194259b.Attrib1(5, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e194259b.Uniform1(6, _uniforms);
                _draw_e194259b.Uniform2(7, position);
                _draw_e194259b.Uniform12(8, dc->GetLocalToClipTransform(visual));
                _draw_e194259b.Uniform2(9, csz);
                _draw_e194259b.Uniform2(10, DP_e194259b_14_8_4.Origin);
                _draw_e194259b.Uniform2(11, DP_e194259b_14_8_4.Size);
                _draw_e194259b.Uniform2(12, ::g::Uno::Float2__op_Subtraction2((ind4 = DP_e194259b_14_8_4.UVClip, ::g::Uno::Float2__New2(ind4.Z, ind4.W)), (ind5 = DP_e194259b_14_8_4.UVClip, ::g::Uno::Float2__New2(ind5.X, ind5.Y))));
                _draw_e194259b.Uniform2(13, (ind6 = DP_e194259b_14_8_4.UVClip, ::g::Uno::Float2__New2(ind6.X, ind6.Y)));
                _draw_e194259b.Uniform2(14, DP_e194259b_14_8_4.TexCoordScale1);
                _draw_e194259b.Uniform2(15, DP_e194259b_14_8_4.TexCoordBias1);
                _draw_e194259b.Uniform2(16, DP_e194259b_14_8_4.TexCoordScale2);
                _draw_e194259b.Uniform2(17, DP_e194259b_14_8_4.TexCoordBias2);
                _draw_e194259b.Uniform10(18, uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->Color());
                _draw_e194259b.Uniform(19, distanceScaleRcp);
                _draw_e194259b.Uniform(20, distanceScale);
                _draw_e194259b.Uniform(21, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e194259b.Uniform(22, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e194259b.Uniform(23, dc->ViewportPixelsPerPoint());
                _draw_e194259b.Uniform(24, 1.0f / smoothness);
                _draw_e194259b.Uniform(25, uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->Opacity());
                _draw_e194259b.Sampler3(26, DP_e194259b_14_8_4.Texture, DP_e194259b_14_8_4.SamplerState);
                _draw_e194259b.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[5/*DashedSolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[13/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_e1942cb4.BlendEnabled(true);
                _draw_e1942cb4.DepthTestEnabled(false);
                _draw_e1942cb4.CullFace(uPtr(dc)->CullFace());
                _draw_e1942cb4.BlendSrcAlpha(7);
                _draw_e1942cb4.BlendDstRgb(3);
                _draw_e1942cb4.Const1(0, uPtr(_uniforms)->Length());
                _draw_e1942cb4.Use();
                _draw_e1942cb4.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e1942cb4.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e1942cb4.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e1942cb4.Uniform1(4, _uniforms);
                _draw_e1942cb4.Uniform2(5, position);
                _draw_e1942cb4.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_e1942cb4.Uniform2(7, csz);
                _draw_e1942cb4.Uniform2(8, ::g::Uno::Float2__New2(csz.X, csz.Y));
                _draw_e1942cb4.Uniform(9, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->DashSize());
                _draw_e1942cb4.Uniform10(10, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->Color());
                _draw_e1942cb4.Uniform(11, distanceScaleRcp);
                _draw_e1942cb4.Uniform(12, distanceScale);
                _draw_e1942cb4.Uniform(13, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e1942cb4.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e1942cb4.Uniform(15, dc->ViewportPixelsPerPoint());
                _draw_e1942cb4.Uniform(16, 1.0f / smoothness);
                _draw_e1942cb4.Uniform(17, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->Opacity());
                _draw_e1942cb4.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_e1942d57.BlendEnabled(true);
                _draw_e1942d57.DepthTestEnabled(false);
                _draw_e1942d57.CullFace(uPtr(dc)->CullFace());
                _draw_e1942d57.BlendSrcAlpha(7);
                _draw_e1942d57.BlendDstRgb(3);
                _draw_e1942d57.Const1(0, uPtr(_uniforms)->Length());
                _draw_e1942d57.Use();
                _draw_e1942d57.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e1942d57.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e1942d57.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e1942d57.Uniform1(4, _uniforms);
                _draw_e1942d57.Uniform2(5, position);
                _draw_e1942d57.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_e1942d57.Uniform2(7, csz);
                _draw_e1942d57.Uniform2(8, ::g::Uno::Float2__New2(csz.X, csz.Y));
                _draw_e1942d57.Uniform(9, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->DashSize());
                _draw_e1942d57.Uniform10(10, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->Color());
                _draw_e1942d57.Uniform(11, distanceScaleRcp);
                _draw_e1942d57.Uniform(12, distanceScale);
                _draw_e1942d57.Uniform(13, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e1942d57.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e1942d57.Uniform(15, dc->ViewportPixelsPerPoint());
                _draw_e1942d57.Uniform(16, 1.0f / smoothness);
                _draw_e1942d57.Uniform(17, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->Opacity());
                _draw_e1942d57.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))
        {
            if (uIs(falloff, ::TYPES[13/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_e19434f4_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, csz);
                _draw_e1942474.BlendEnabled(true);
                _draw_e1942474.DepthTestEnabled(false);
                _draw_e1942474.CullFace(uPtr(dc)->CullFace());
                _draw_e1942474.BlendSrcAlpha(7);
                _draw_e1942474.BlendDstRgb(3);
                _draw_e1942474.Const1(0, uPtr(_uniforms)->Length());
                _draw_e1942474.Const(1, DP_e19434f4_14_8_4.NeedFract);
                _draw_e1942474.Const(2, DP_e19434f4_14_8_4.Texture == NULL);
                _draw_e1942474.Use();
                _draw_e1942474.Attrib1(3, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e1942474.Attrib1(4, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e1942474.Attrib1(5, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e1942474.Uniform1(6, _uniforms);
                _draw_e1942474.Uniform2(7, position);
                _draw_e1942474.Uniform12(8, dc->GetLocalToClipTransform(visual));
                _draw_e1942474.Uniform2(9, csz);
                _draw_e1942474.Uniform2(10, DP_e19434f4_14_8_4.Origin);
                _draw_e1942474.Uniform2(11, DP_e19434f4_14_8_4.Size);
                _draw_e1942474.Uniform2(12, ::g::Uno::Float2__op_Subtraction2((ind7 = DP_e19434f4_14_8_4.UVClip, ::g::Uno::Float2__New2(ind7.Z, ind7.W)), (ind8 = DP_e19434f4_14_8_4.UVClip, ::g::Uno::Float2__New2(ind8.X, ind8.Y))));
                _draw_e1942474.Uniform2(13, (ind9 = DP_e19434f4_14_8_4.UVClip, ::g::Uno::Float2__New2(ind9.X, ind9.Y)));
                _draw_e1942474.Uniform2(14, DP_e19434f4_14_8_4.TexCoordScale1);
                _draw_e1942474.Uniform2(15, DP_e19434f4_14_8_4.TexCoordBias1);
                _draw_e1942474.Uniform2(16, DP_e19434f4_14_8_4.TexCoordScale2);
                _draw_e1942474.Uniform2(17, DP_e19434f4_14_8_4.TexCoordBias2);
                _draw_e1942474.Uniform10(18, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_e1942474.Uniform(19, distanceScaleRcp);
                _draw_e1942474.Uniform(20, distanceScale);
                _draw_e1942474.Uniform(21, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e1942474.Uniform(22, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e1942474.Uniform(23, dc->ViewportPixelsPerPoint());
                _draw_e1942474.Uniform(24, 1.0f / smoothness);
                _draw_e1942474.Uniform(25, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_e1942474.Sampler3(26, DP_e19434f4_14_8_4.Texture, DP_e19434f4_14_8_4.SamplerState);
                _draw_e1942474.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_e1943513_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, csz);
                _draw_e194259b.BlendEnabled(true);
                _draw_e194259b.DepthTestEnabled(false);
                _draw_e194259b.CullFace(uPtr(dc)->CullFace());
                _draw_e194259b.BlendSrcAlpha(7);
                _draw_e194259b.BlendDstRgb(3);
                _draw_e194259b.Const1(0, uPtr(_uniforms)->Length());
                _draw_e194259b.Const(1, DP_e1943513_14_8_4.NeedFract);
                _draw_e194259b.Const(2, DP_e1943513_14_8_4.Texture == NULL);
                _draw_e194259b.Use();
                _draw_e194259b.Attrib1(3, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e194259b.Attrib1(4, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e194259b.Attrib1(5, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e194259b.Uniform1(6, _uniforms);
                _draw_e194259b.Uniform2(7, position);
                _draw_e194259b.Uniform12(8, dc->GetLocalToClipTransform(visual));
                _draw_e194259b.Uniform2(9, csz);
                _draw_e194259b.Uniform2(10, DP_e1943513_14_8_4.Origin);
                _draw_e194259b.Uniform2(11, DP_e1943513_14_8_4.Size);
                _draw_e194259b.Uniform2(12, ::g::Uno::Float2__op_Subtraction2((ind10 = DP_e1943513_14_8_4.UVClip, ::g::Uno::Float2__New2(ind10.Z, ind10.W)), (ind11 = DP_e1943513_14_8_4.UVClip, ::g::Uno::Float2__New2(ind11.X, ind11.Y))));
                _draw_e194259b.Uniform2(13, (ind12 = DP_e1943513_14_8_4.UVClip, ::g::Uno::Float2__New2(ind12.X, ind12.Y)));
                _draw_e194259b.Uniform2(14, DP_e1943513_14_8_4.TexCoordScale1);
                _draw_e194259b.Uniform2(15, DP_e1943513_14_8_4.TexCoordBias1);
                _draw_e194259b.Uniform2(16, DP_e1943513_14_8_4.TexCoordScale2);
                _draw_e194259b.Uniform2(17, DP_e1943513_14_8_4.TexCoordBias2);
                _draw_e194259b.Uniform10(18, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_e194259b.Uniform(19, distanceScaleRcp);
                _draw_e194259b.Uniform(20, distanceScale);
                _draw_e194259b.Uniform(21, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e194259b.Uniform(22, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e194259b.Uniform(23, dc->ViewportPixelsPerPoint());
                _draw_e194259b.Uniform(24, 1.0f / smoothness);
                _draw_e194259b.Uniform(25, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_e194259b.Sampler3(26, DP_e1943513_14_8_4.Texture, DP_e1943513_14_8_4.SamplerState);
                _draw_e194259b.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[13/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_e193fb34.BlendEnabled(true);
                _draw_e193fb34.DepthTestEnabled(false);
                _draw_e193fb34.CullFace(uPtr(dc)->CullFace());
                _draw_e193fb34.BlendSrcAlpha(7);
                _draw_e193fb34.BlendDstRgb(3);
                _draw_e193fb34.Const1(0, uPtr(_uniforms)->Length());
                _draw_e193fb34.Use();
                _draw_e193fb34.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e193fb34.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e193fb34.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e193fb34.Uniform1(4, _uniforms);
                _draw_e193fb34.Uniform2(5, position);
                _draw_e193fb34.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_e193fb34.Uniform(7, distanceScaleRcp);
                _draw_e193fb34.Uniform(8, distanceScale);
                _draw_e193fb34.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e193fb34.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e193fb34.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_e193fb34.Uniform(12, 1.0f / smoothness);
                _draw_e193fb34.Uniform10(13, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind13 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind13.X, ind13.Y, ind13.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_e193fb34.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_e193fb34.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_8d31c878.BlendEnabled(true);
                _draw_8d31c878.DepthTestEnabled(false);
                _draw_8d31c878.CullFace(uPtr(dc)->CullFace());
                _draw_8d31c878.BlendSrcAlpha(7);
                _draw_8d31c878.BlendDstRgb(3);
                _draw_8d31c878.Const1(0, uPtr(_uniforms)->Length());
                _draw_8d31c878.Use();
                _draw_8d31c878.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_8d31c878.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_8d31c878.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_8d31c878.Uniform1(4, _uniforms);
                _draw_8d31c878.Uniform2(5, position);
                _draw_8d31c878.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_8d31c878.Uniform(7, distanceScaleRcp);
                _draw_8d31c878.Uniform(8, distanceScale);
                _draw_8d31c878.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_8d31c878.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_8d31c878.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_8d31c878.Uniform(12, 1.0f / smoothness);
                _draw_8d31c878.Uniform10(13, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind14 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind14.X, ind14.Y, ind14.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_8d31c878.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_8d31c878.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))
        {
            if (uIs(falloff, ::TYPES[13/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                ::g::Uno::Float4 endPoints_2b82e760_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(csz);
                _draw_2b82e760.BlendEnabled(true);
                _draw_2b82e760.DepthTestEnabled(false);
                _draw_2b82e760.CullFace(uPtr(dc)->CullFace());
                _draw_2b82e760.BlendSrcAlpha(7);
                _draw_2b82e760.BlendDstRgb(3);
                _draw_2b82e760.Const1(0, uPtr(_uniforms)->Length());
                _draw_2b82e760.Use();
                _draw_2b82e760.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_2b82e760.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_2b82e760.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_2b82e760.Uniform1(4, _uniforms);
                _draw_2b82e760.Uniform2(5, position);
                _draw_2b82e760.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_2b82e760.Uniform2(7, csz);
                _draw_2b82e760.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_2b82e760.Uniform(9, distanceScaleRcp);
                _draw_2b82e760.Uniform(10, distanceScale);
                _draw_2b82e760.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_2b82e760.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_2b82e760.Uniform(13, dc->ViewportPixelsPerPoint());
                _draw_2b82e760.Uniform(14, 1.0f / smoothness);
                _draw_2b82e760.Uniform(15, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_2b82e760.Uniform10(16, endPoints_2b82e760_14_17_6);
                _draw_2b82e760.Uniform2(17, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_2b82e760_14_17_6.Z, endPoints_2b82e760_14_17_6.W), ::g::Uno::Float2__New2(endPoints_2b82e760_14_17_6.X, endPoints_2b82e760_14_17_6.Y))));
                _draw_2b82e760.Uniform(18, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_2b82e760_14_17_6.Z, endPoints_2b82e760_14_17_6.W), ::g::Uno::Float2__New2(endPoints_2b82e760_14_17_6.X, endPoints_2b82e760_14_17_6.Y))));
                _draw_2b82e760.Sampler3(19, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_2b82e760.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                ::g::Uno::Float4 endPoints_2b82e77f_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(csz);
                _draw_2b82e77f.BlendEnabled(true);
                _draw_2b82e77f.DepthTestEnabled(false);
                _draw_2b82e77f.CullFace(uPtr(dc)->CullFace());
                _draw_2b82e77f.BlendSrcAlpha(7);
                _draw_2b82e77f.BlendDstRgb(3);
                _draw_2b82e77f.Const1(0, uPtr(_uniforms)->Length());
                _draw_2b82e77f.Use();
                _draw_2b82e77f.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_2b82e77f.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_2b82e77f.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_2b82e77f.Uniform1(4, _uniforms);
                _draw_2b82e77f.Uniform2(5, position);
                _draw_2b82e77f.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_2b82e77f.Uniform2(7, csz);
                _draw_2b82e77f.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_2b82e77f.Uniform(9, distanceScaleRcp);
                _draw_2b82e77f.Uniform(10, distanceScale);
                _draw_2b82e77f.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_2b82e77f.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_2b82e77f.Uniform(13, dc->ViewportPixelsPerPoint());
                _draw_2b82e77f.Uniform(14, 1.0f / smoothness);
                _draw_2b82e77f.Uniform(15, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_2b82e77f.Uniform10(16, endPoints_2b82e77f_14_17_6);
                _draw_2b82e77f.Uniform2(17, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_2b82e77f_14_17_6.Z, endPoints_2b82e77f_14_17_6.W), ::g::Uno::Float2__New2(endPoints_2b82e77f_14_17_6.X, endPoints_2b82e77f_14_17_6.Y))));
                _draw_2b82e77f.Uniform(18, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_2b82e77f_14_17_6.Z, endPoints_2b82e77f_14_17_6.W), ::g::Uno::Float2__New2(endPoints_2b82e77f_14_17_6.X, endPoints_2b82e77f_14_17_6.Y))));
                _draw_2b82e77f.Sampler3(19, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_2b82e77f.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[13/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_f3256f14.BlendEnabled(true);
                _draw_f3256f14.DepthTestEnabled(false);
                _draw_f3256f14.CullFace(uPtr(dc)->CullFace());
                _draw_f3256f14.BlendSrcAlpha(7);
                _draw_f3256f14.BlendDstRgb(3);
                _draw_f3256f14.Const1(0, uPtr(_uniforms)->Length());
                _draw_f3256f14.Use();
                _draw_f3256f14.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_f3256f14.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_f3256f14.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_f3256f14.Uniform1(4, _uniforms);
                _draw_f3256f14.Uniform2(5, position);
                _draw_f3256f14.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_f3256f14.Uniform(7, distanceScaleRcp);
                _draw_f3256f14.Uniform(8, distanceScale);
                _draw_f3256f14.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_f3256f14.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_f3256f14.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_f3256f14.Uniform(12, 1.0f / smoothness);
                _draw_f3256f14.Uniform10(13, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind15 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind15.X, ind15.Y, ind15.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_f3256f14.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_f3256f33.BlendEnabled(true);
                _draw_f3256f33.DepthTestEnabled(false);
                _draw_f3256f33.CullFace(uPtr(dc)->CullFace());
                _draw_f3256f33.BlendSrcAlpha(7);
                _draw_f3256f33.BlendDstRgb(3);
                _draw_f3256f33.Const1(0, uPtr(_uniforms)->Length());
                _draw_f3256f33.Use();
                _draw_f3256f33.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_f3256f33.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_f3256f33.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_f3256f33.Uniform1(4, _uniforms);
                _draw_f3256f33.Uniform2(5, position);
                _draw_f3256f33.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_f3256f33.Uniform(7, distanceScaleRcp);
                _draw_f3256f33.Uniform(8, distanceScale);
                _draw_f3256f33.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_f3256f33.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_f3256f33.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_f3256f33.Uniform(12, 1.0f / smoothness);
                _draw_f3256f33.Uniform10(13, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind16 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind16.X, ind16.Y, ind16.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_f3256f33.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
    }
    else if (uIs(cover, ::TYPES[10/*Fuse.Drawing.Primitives.FillCoverage*/]))
    {
        if (uIs(brush, ::TYPES[1/*Alive.ImageFill*/]))
        {
            if (uIs(falloff, ::TYPES[13/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_83d2daaf_14_8_4 = uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->GetDrawParams(dc, csz);
                _draw_83d2daaf.BlendEnabled(true);
                _draw_83d2daaf.DepthTestEnabled(false);
                _draw_83d2daaf.CullFace(uPtr(dc)->CullFace());
                _draw_83d2daaf.BlendSrcAlpha(7);
                _draw_83d2daaf.BlendDstRgb(3);
                _draw_83d2daaf.Const1(0, uPtr(_uniforms)->Length());
                _draw_83d2daaf.Const(1, DP_83d2daaf_14_8_4.NeedFract);
                _draw_83d2daaf.Const(2, DP_83d2daaf_14_8_4.Texture == NULL);
                _draw_83d2daaf.Use();
                _draw_83d2daaf.Attrib1(3, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_83d2daaf.Attrib1(4, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_83d2daaf.Attrib1(5, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_83d2daaf.Uniform1(6, _uniforms);
                _draw_83d2daaf.Uniform2(7, position);
                _draw_83d2daaf.Uniform12(8, dc->GetLocalToClipTransform(visual));
                _draw_83d2daaf.Uniform2(9, csz);
                _draw_83d2daaf.Uniform2(10, DP_83d2daaf_14_8_4.Origin);
                _draw_83d2daaf.Uniform2(11, DP_83d2daaf_14_8_4.Size);
                _draw_83d2daaf.Uniform2(12, ::g::Uno::Float2__op_Subtraction2((ind17 = DP_83d2daaf_14_8_4.UVClip, ::g::Uno::Float2__New2(ind17.Z, ind17.W)), (ind18 = DP_83d2daaf_14_8_4.UVClip, ::g::Uno::Float2__New2(ind18.X, ind18.Y))));
                _draw_83d2daaf.Uniform2(13, (ind19 = DP_83d2daaf_14_8_4.UVClip, ::g::Uno::Float2__New2(ind19.X, ind19.Y)));
                _draw_83d2daaf.Uniform2(14, DP_83d2daaf_14_8_4.TexCoordScale1);
                _draw_83d2daaf.Uniform2(15, DP_83d2daaf_14_8_4.TexCoordBias1);
                _draw_83d2daaf.Uniform2(16, DP_83d2daaf_14_8_4.TexCoordScale2);
                _draw_83d2daaf.Uniform2(17, DP_83d2daaf_14_8_4.TexCoordBias2);
                _draw_83d2daaf.Uniform10(18, uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->Color());
                _draw_83d2daaf.Uniform(19, distanceScaleRcp);
                _draw_83d2daaf.Uniform(20, distanceScale);
                _draw_83d2daaf.Uniform(21, dc->ViewportPixelsPerPoint());
                _draw_83d2daaf.Uniform(22, 1.0f / smoothness);
                _draw_83d2daaf.Uniform(23, uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->Opacity());
                _draw_83d2daaf.Sampler3(24, DP_83d2daaf_14_8_4.Texture, DP_83d2daaf_14_8_4.SamplerState);
                _draw_83d2daaf.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_2546096a_14_8_4 = uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->GetDrawParams(dc, csz);
                _draw_2546096a.BlendEnabled(true);
                _draw_2546096a.DepthTestEnabled(false);
                _draw_2546096a.CullFace(uPtr(dc)->CullFace());
                _draw_2546096a.BlendSrcAlpha(7);
                _draw_2546096a.BlendDstRgb(3);
                _draw_2546096a.Const1(0, uPtr(_uniforms)->Length());
                _draw_2546096a.Const(1, DP_2546096a_14_8_4.NeedFract);
                _draw_2546096a.Const(2, DP_2546096a_14_8_4.Texture == NULL);
                _draw_2546096a.Use();
                _draw_2546096a.Attrib1(3, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_2546096a.Attrib1(4, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_2546096a.Attrib1(5, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_2546096a.Uniform1(6, _uniforms);
                _draw_2546096a.Uniform2(7, position);
                _draw_2546096a.Uniform12(8, dc->GetLocalToClipTransform(visual));
                _draw_2546096a.Uniform2(9, csz);
                _draw_2546096a.Uniform2(10, DP_2546096a_14_8_4.Origin);
                _draw_2546096a.Uniform2(11, DP_2546096a_14_8_4.Size);
                _draw_2546096a.Uniform2(12, ::g::Uno::Float2__op_Subtraction2((ind20 = DP_2546096a_14_8_4.UVClip, ::g::Uno::Float2__New2(ind20.Z, ind20.W)), (ind21 = DP_2546096a_14_8_4.UVClip, ::g::Uno::Float2__New2(ind21.X, ind21.Y))));
                _draw_2546096a.Uniform2(13, (ind22 = DP_2546096a_14_8_4.UVClip, ::g::Uno::Float2__New2(ind22.X, ind22.Y)));
                _draw_2546096a.Uniform2(14, DP_2546096a_14_8_4.TexCoordScale1);
                _draw_2546096a.Uniform2(15, DP_2546096a_14_8_4.TexCoordBias1);
                _draw_2546096a.Uniform2(16, DP_2546096a_14_8_4.TexCoordScale2);
                _draw_2546096a.Uniform2(17, DP_2546096a_14_8_4.TexCoordBias2);
                _draw_2546096a.Uniform10(18, uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->Color());
                _draw_2546096a.Uniform(19, distanceScaleRcp);
                _draw_2546096a.Uniform(20, distanceScale);
                _draw_2546096a.Uniform(21, dc->ViewportPixelsPerPoint());
                _draw_2546096a.Uniform(22, 1.0f / smoothness);
                _draw_2546096a.Uniform(23, uPtr(uAs< ::g::Alive::ImageFill*>(brush, ::TYPES[1/*Alive.ImageFill*/]))->Opacity());
                _draw_2546096a.Sampler3(24, DP_2546096a_14_8_4.Texture, DP_2546096a_14_8_4.SamplerState);
                _draw_2546096a.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[5/*DashedSolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[13/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_72fdd2e7.BlendEnabled(true);
                _draw_72fdd2e7.DepthTestEnabled(false);
                _draw_72fdd2e7.CullFace(uPtr(dc)->CullFace());
                _draw_72fdd2e7.BlendSrcAlpha(7);
                _draw_72fdd2e7.BlendDstRgb(3);
                _draw_72fdd2e7.Const1(0, uPtr(_uniforms)->Length());
                _draw_72fdd2e7.Use();
                _draw_72fdd2e7.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_72fdd2e7.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_72fdd2e7.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_72fdd2e7.Uniform1(4, _uniforms);
                _draw_72fdd2e7.Uniform2(5, position);
                _draw_72fdd2e7.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_72fdd2e7.Uniform2(7, csz);
                _draw_72fdd2e7.Uniform2(8, ::g::Uno::Float2__New2(csz.X, csz.Y));
                _draw_72fdd2e7.Uniform(9, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->DashSize());
                _draw_72fdd2e7.Uniform10(10, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->Color());
                _draw_72fdd2e7.Uniform(11, distanceScaleRcp);
                _draw_72fdd2e7.Uniform(12, distanceScale);
                _draw_72fdd2e7.Uniform(13, dc->ViewportPixelsPerPoint());
                _draw_72fdd2e7.Uniform(14, 1.0f / smoothness);
                _draw_72fdd2e7.Uniform(15, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->Opacity());
                _draw_72fdd2e7.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_9b1081f2.BlendEnabled(true);
                _draw_9b1081f2.DepthTestEnabled(false);
                _draw_9b1081f2.CullFace(uPtr(dc)->CullFace());
                _draw_9b1081f2.BlendSrcAlpha(7);
                _draw_9b1081f2.BlendDstRgb(3);
                _draw_9b1081f2.Const1(0, uPtr(_uniforms)->Length());
                _draw_9b1081f2.Use();
                _draw_9b1081f2.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_9b1081f2.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_9b1081f2.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_9b1081f2.Uniform1(4, _uniforms);
                _draw_9b1081f2.Uniform2(5, position);
                _draw_9b1081f2.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_9b1081f2.Uniform2(7, csz);
                _draw_9b1081f2.Uniform2(8, ::g::Uno::Float2__New2(csz.X, csz.Y));
                _draw_9b1081f2.Uniform(9, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->DashSize());
                _draw_9b1081f2.Uniform10(10, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->Color());
                _draw_9b1081f2.Uniform(11, distanceScaleRcp);
                _draw_9b1081f2.Uniform(12, distanceScale);
                _draw_9b1081f2.Uniform(13, dc->ViewportPixelsPerPoint());
                _draw_9b1081f2.Uniform(14, 1.0f / smoothness);
                _draw_9b1081f2.Uniform(15, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[5/*DashedSolidColor*/]))->Opacity());
                _draw_9b1081f2.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))
        {
            if (uIs(falloff, ::TYPES[13/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_e8d10d6f_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, csz);
                _draw_83d2daaf.BlendEnabled(true);
                _draw_83d2daaf.DepthTestEnabled(false);
                _draw_83d2daaf.CullFace(uPtr(dc)->CullFace());
                _draw_83d2daaf.BlendSrcAlpha(7);
                _draw_83d2daaf.BlendDstRgb(3);
                _draw_83d2daaf.Const1(0, uPtr(_uniforms)->Length());
                _draw_83d2daaf.Const(1, DP_e8d10d6f_14_8_4.NeedFract);
                _draw_83d2daaf.Const(2, DP_e8d10d6f_14_8_4.Texture == NULL);
                _draw_83d2daaf.Use();
                _draw_83d2daaf.Attrib1(3, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_83d2daaf.Attrib1(4, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_83d2daaf.Attrib1(5, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_83d2daaf.Uniform1(6, _uniforms);
                _draw_83d2daaf.Uniform2(7, position);
                _draw_83d2daaf.Uniform12(8, dc->GetLocalToClipTransform(visual));
                _draw_83d2daaf.Uniform2(9, csz);
                _draw_83d2daaf.Uniform2(10, DP_e8d10d6f_14_8_4.Origin);
                _draw_83d2daaf.Uniform2(11, DP_e8d10d6f_14_8_4.Size);
                _draw_83d2daaf.Uniform2(12, ::g::Uno::Float2__op_Subtraction2((ind23 = DP_e8d10d6f_14_8_4.UVClip, ::g::Uno::Float2__New2(ind23.Z, ind23.W)), (ind24 = DP_e8d10d6f_14_8_4.UVClip, ::g::Uno::Float2__New2(ind24.X, ind24.Y))));
                _draw_83d2daaf.Uniform2(13, (ind25 = DP_e8d10d6f_14_8_4.UVClip, ::g::Uno::Float2__New2(ind25.X, ind25.Y)));
                _draw_83d2daaf.Uniform2(14, DP_e8d10d6f_14_8_4.TexCoordScale1);
                _draw_83d2daaf.Uniform2(15, DP_e8d10d6f_14_8_4.TexCoordBias1);
                _draw_83d2daaf.Uniform2(16, DP_e8d10d6f_14_8_4.TexCoordScale2);
                _draw_83d2daaf.Uniform2(17, DP_e8d10d6f_14_8_4.TexCoordBias2);
                _draw_83d2daaf.Uniform10(18, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_83d2daaf.Uniform(19, distanceScaleRcp);
                _draw_83d2daaf.Uniform(20, distanceScale);
                _draw_83d2daaf.Uniform(21, dc->ViewportPixelsPerPoint());
                _draw_83d2daaf.Uniform(22, 1.0f / smoothness);
                _draw_83d2daaf.Uniform(23, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_83d2daaf.Sampler3(24, DP_e8d10d6f_14_8_4.Texture, DP_e8d10d6f_14_8_4.SamplerState);
                _draw_83d2daaf.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_57c84f8d_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, csz);
                _draw_2546096a.BlendEnabled(true);
                _draw_2546096a.DepthTestEnabled(false);
                _draw_2546096a.CullFace(uPtr(dc)->CullFace());
                _draw_2546096a.BlendSrcAlpha(7);
                _draw_2546096a.BlendDstRgb(3);
                _draw_2546096a.Const1(0, uPtr(_uniforms)->Length());
                _draw_2546096a.Const(1, DP_57c84f8d_14_8_4.NeedFract);
                _draw_2546096a.Const(2, DP_57c84f8d_14_8_4.Texture == NULL);
                _draw_2546096a.Use();
                _draw_2546096a.Attrib1(3, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_2546096a.Attrib1(4, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_2546096a.Attrib1(5, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_2546096a.Uniform1(6, _uniforms);
                _draw_2546096a.Uniform2(7, position);
                _draw_2546096a.Uniform12(8, dc->GetLocalToClipTransform(visual));
                _draw_2546096a.Uniform2(9, csz);
                _draw_2546096a.Uniform2(10, DP_57c84f8d_14_8_4.Origin);
                _draw_2546096a.Uniform2(11, DP_57c84f8d_14_8_4.Size);
                _draw_2546096a.Uniform2(12, ::g::Uno::Float2__op_Subtraction2((ind26 = DP_57c84f8d_14_8_4.UVClip, ::g::Uno::Float2__New2(ind26.Z, ind26.W)), (ind27 = DP_57c84f8d_14_8_4.UVClip, ::g::Uno::Float2__New2(ind27.X, ind27.Y))));
                _draw_2546096a.Uniform2(13, (ind28 = DP_57c84f8d_14_8_4.UVClip, ::g::Uno::Float2__New2(ind28.X, ind28.Y)));
                _draw_2546096a.Uniform2(14, DP_57c84f8d_14_8_4.TexCoordScale1);
                _draw_2546096a.Uniform2(15, DP_57c84f8d_14_8_4.TexCoordBias1);
                _draw_2546096a.Uniform2(16, DP_57c84f8d_14_8_4.TexCoordScale2);
                _draw_2546096a.Uniform2(17, DP_57c84f8d_14_8_4.TexCoordBias2);
                _draw_2546096a.Uniform10(18, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_2546096a.Uniform(19, distanceScaleRcp);
                _draw_2546096a.Uniform(20, distanceScale);
                _draw_2546096a.Uniform(21, dc->ViewportPixelsPerPoint());
                _draw_2546096a.Uniform(22, 1.0f / smoothness);
                _draw_2546096a.Uniform(23, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[6/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_2546096a.Sampler3(24, DP_57c84f8d_14_8_4.Texture, DP_57c84f8d_14_8_4.SamplerState);
                _draw_2546096a.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[13/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_6a13e7fb.BlendEnabled(true);
                _draw_6a13e7fb.DepthTestEnabled(false);
                _draw_6a13e7fb.CullFace(uPtr(dc)->CullFace());
                _draw_6a13e7fb.BlendSrcAlpha(7);
                _draw_6a13e7fb.BlendDstRgb(3);
                _draw_6a13e7fb.Const1(0, uPtr(_uniforms)->Length());
                _draw_6a13e7fb.Use();
                _draw_6a13e7fb.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_6a13e7fb.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_6a13e7fb.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_6a13e7fb.Uniform1(4, _uniforms);
                _draw_6a13e7fb.Uniform2(5, position);
                _draw_6a13e7fb.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_6a13e7fb.Uniform(7, distanceScaleRcp);
                _draw_6a13e7fb.Uniform(8, distanceScale);
                _draw_6a13e7fb.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_6a13e7fb.Uniform(10, 1.0f / smoothness);
                _draw_6a13e7fb.Uniform10(11, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind29 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind29.X, ind29.Y, ind29.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_6a13e7fb.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_6a13e7fb.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_c8a0b940.BlendEnabled(true);
                _draw_c8a0b940.DepthTestEnabled(false);
                _draw_c8a0b940.CullFace(uPtr(dc)->CullFace());
                _draw_c8a0b940.BlendSrcAlpha(7);
                _draw_c8a0b940.BlendDstRgb(3);
                _draw_c8a0b940.Const1(0, uPtr(_uniforms)->Length());
                _draw_c8a0b940.Use();
                _draw_c8a0b940.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_c8a0b940.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_c8a0b940.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_c8a0b940.Uniform1(4, _uniforms);
                _draw_c8a0b940.Uniform2(5, position);
                _draw_c8a0b940.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_c8a0b940.Uniform(7, distanceScaleRcp);
                _draw_c8a0b940.Uniform(8, distanceScale);
                _draw_c8a0b940.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_c8a0b940.Uniform(10, 1.0f / smoothness);
                _draw_c8a0b940.Uniform10(11, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind30 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind30.X, ind30.Y, ind30.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_c8a0b940.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_c8a0b940.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))
        {
            if (uIs(falloff, ::TYPES[13/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                ::g::Uno::Float4 endPoints_7ae6d043_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(csz);
                _draw_7ae6d043.BlendEnabled(true);
                _draw_7ae6d043.DepthTestEnabled(false);
                _draw_7ae6d043.CullFace(uPtr(dc)->CullFace());
                _draw_7ae6d043.BlendSrcAlpha(7);
                _draw_7ae6d043.BlendDstRgb(3);
                _draw_7ae6d043.Const1(0, uPtr(_uniforms)->Length());
                _draw_7ae6d043.Use();
                _draw_7ae6d043.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_7ae6d043.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_7ae6d043.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_7ae6d043.Uniform1(4, _uniforms);
                _draw_7ae6d043.Uniform2(5, position);
                _draw_7ae6d043.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_7ae6d043.Uniform2(7, csz);
                _draw_7ae6d043.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_7ae6d043.Uniform(9, distanceScaleRcp);
                _draw_7ae6d043.Uniform(10, distanceScale);
                _draw_7ae6d043.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_7ae6d043.Uniform(12, 1.0f / smoothness);
                _draw_7ae6d043.Uniform(13, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_7ae6d043.Uniform10(14, endPoints_7ae6d043_14_17_6);
                _draw_7ae6d043.Uniform2(15, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_7ae6d043_14_17_6.Z, endPoints_7ae6d043_14_17_6.W), ::g::Uno::Float2__New2(endPoints_7ae6d043_14_17_6.X, endPoints_7ae6d043_14_17_6.Y))));
                _draw_7ae6d043.Uniform(16, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_7ae6d043_14_17_6.Z, endPoints_7ae6d043_14_17_6.W), ::g::Uno::Float2__New2(endPoints_7ae6d043_14_17_6.X, endPoints_7ae6d043_14_17_6.Y))));
                _draw_7ae6d043.Sampler3(17, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_7ae6d043.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                ::g::Uno::Float4 endPoints_9623e160_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(csz);
                _draw_9623e160.BlendEnabled(true);
                _draw_9623e160.DepthTestEnabled(false);
                _draw_9623e160.CullFace(uPtr(dc)->CullFace());
                _draw_9623e160.BlendSrcAlpha(7);
                _draw_9623e160.BlendDstRgb(3);
                _draw_9623e160.Const1(0, uPtr(_uniforms)->Length());
                _draw_9623e160.Use();
                _draw_9623e160.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_9623e160.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_9623e160.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_9623e160.Uniform1(4, _uniforms);
                _draw_9623e160.Uniform2(5, position);
                _draw_9623e160.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_9623e160.Uniform2(7, csz);
                _draw_9623e160.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_9623e160.Uniform(9, distanceScaleRcp);
                _draw_9623e160.Uniform(10, distanceScale);
                _draw_9623e160.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_9623e160.Uniform(12, 1.0f / smoothness);
                _draw_9623e160.Uniform(13, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_9623e160.Uniform10(14, endPoints_9623e160_14_17_6);
                _draw_9623e160.Uniform2(15, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_9623e160_14_17_6.Z, endPoints_9623e160_14_17_6.W), ::g::Uno::Float2__New2(endPoints_9623e160_14_17_6.X, endPoints_9623e160_14_17_6.Y))));
                _draw_9623e160.Uniform(16, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_9623e160_14_17_6.Z, endPoints_9623e160_14_17_6.W), ::g::Uno::Float2__New2(endPoints_9623e160_14_17_6.X, endPoints_9623e160_14_17_6.Y))));
                _draw_9623e160.Sampler3(17, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_9623e160.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[13/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_4869d66b.BlendEnabled(true);
                _draw_4869d66b.DepthTestEnabled(false);
                _draw_4869d66b.CullFace(uPtr(dc)->CullFace());
                _draw_4869d66b.BlendSrcAlpha(7);
                _draw_4869d66b.BlendDstRgb(3);
                _draw_4869d66b.Const1(0, uPtr(_uniforms)->Length());
                _draw_4869d66b.Use();
                _draw_4869d66b.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_4869d66b.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_4869d66b.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_4869d66b.Uniform1(4, _uniforms);
                _draw_4869d66b.Uniform2(5, position);
                _draw_4869d66b.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_4869d66b.Uniform(7, distanceScaleRcp);
                _draw_4869d66b.Uniform(8, distanceScale);
                _draw_4869d66b.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_4869d66b.Uniform(10, 1.0f / smoothness);
                _draw_4869d66b.Uniform10(11, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind31 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind31.X, ind31.Y, ind31.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_4869d66b.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_a6f6a7b0.BlendEnabled(true);
                _draw_a6f6a7b0.DepthTestEnabled(false);
                _draw_a6f6a7b0.CullFace(uPtr(dc)->CullFace());
                _draw_a6f6a7b0.BlendSrcAlpha(7);
                _draw_a6f6a7b0.BlendDstRgb(3);
                _draw_a6f6a7b0.Const1(0, uPtr(_uniforms)->Length());
                _draw_a6f6a7b0.Use();
                _draw_a6f6a7b0.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_a6f6a7b0.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_a6f6a7b0.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_a6f6a7b0.Uniform1(4, _uniforms);
                _draw_a6f6a7b0.Uniform2(5, position);
                _draw_a6f6a7b0.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_a6f6a7b0.Uniform(7, distanceScaleRcp);
                _draw_a6f6a7b0.Uniform(8, distanceScale);
                _draw_a6f6a7b0.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_a6f6a7b0.Uniform(10, 1.0f / smoothness);
                _draw_a6f6a7b0.Uniform10(11, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind32 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind32.X, ind32.Y, ind32.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_a6f6a7b0.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
    }
}

// public void Fill(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, [float2 Position], [float Smoothness]) [instance]
void Rectangle::Fill(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 Position, float Smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "Fill(Fuse.DrawContext,Fuse.Visual,float2,float4,Fuse.Drawing.Brush,[float2],[float])");
    Draw(dc, visual, Size, CornerRadius, brush, _fillCoverage, ::g::Uno::Float2__New1(Smoothness), Position, Smoothness, ::g::Fuse::Drawing::Primitives::Falloff::New1());
}

// private generated void init_DrawCalls() [instance]
void Rectangle::init_DrawCalls()
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "init_DrawCalls()");
    _draw_e1942474 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglea858f4fc());
    _draw_e194259b = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglea858f503());
    _draw_e1942cb4 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglea858f53c());
    _draw_e1942d57 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglea858f53f());
    _draw_e193fb34 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglea858f3bc());
    _draw_8d31c878 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle7fa93ce4());
    _draw_2b82e760 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle7c9a26dc());
    _draw_2b82e77f = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle7c9a26db());
    _draw_f3256f14 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle8d6e16e4());
    _draw_f3256f33 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle8d6e16e3());
    _draw_83d2daaf = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle824ba83f());
    _draw_2546096a = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle24f31cda());
    _draw_72fdd2e7 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglec79a9133());
    _draw_9b1081f2 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle3fcabc1e());
    _draw_6a13e7fb = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle8be2046f());
    _draw_c8a0b940 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglee93a8fd4());
    _draw_7ae6d043 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle46931afb());
    _draw_9623e160 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangleb9274b38());
    _draw_4869d66b = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle167fd657());
    _draw_a6f6a7b0 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle73d861bc());
}

// private void InitBuffers() [instance]
void Rectangle::InitBuffers()
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "InitBuffers()");
    _bufferDistance = ::g::Fuse::Drawing::Internal::FloatBuffer::New3();
    uArray* CornerRadius0 = uArray::Init<double>(::TYPES[11/*float[]*/], 9, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* CornerRadius1 = uArray::Init<double>(::TYPES[11/*float[]*/], 9, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* CornerRadius2 = uArray::Init<double>(::TYPES[11/*float[]*/], 9, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* CornerRadius3 = uArray::Init<double>(::TYPES[11/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* SizeX = uArray::Init<double>(::TYPES[11/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* SizeY = uArray::Init<double>(::TYPES[11/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f);
    uArray* ExtendX = uArray::Init<double>(::TYPES[11/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f);
    uArray* ExtendY = uArray::Init<double>(::TYPES[11/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    uArray* Mn = uArray::Init<double>(::TYPES[11/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f);
    uArray* vr = uArray::Init<uArray*>(::TYPES[14/*float[][]*/], 56, CornerRadius0, (uArray*)add(SizeY, ExtendY), (uArray*)sub(SizeX, CornerRadius1), (uArray*)add(SizeY, ExtendY), (uArray*)neg(ExtendX), (uArray*)sub(SizeY, CornerRadius0), CornerRadius0, (uArray*)sub(SizeY, CornerRadius0), (uArray*)sub(SizeX, CornerRadius1), (uArray*)sub(SizeY, CornerRadius1), (uArray*)add(SizeX, ExtendX), (uArray*)sub(SizeY, CornerRadius1), Mn, (uArray*)sub(SizeY, Mn), (uArray*)sub(SizeX, Mn), (uArray*)sub(SizeY, Mn), Mn, Mn, (uArray*)sub(SizeX, Mn), Mn, (uArray*)neg(ExtendX), CornerRadius3, CornerRadius3, CornerRadius3, (uArray*)sub(SizeX, CornerRadius2), CornerRadius2, (uArray*)add(SizeX, ExtendX), CornerRadius2, CornerRadius3, (uArray*)neg(ExtendY), (uArray*)sub(SizeX, CornerRadius2), (uArray*)neg(ExtendY), (uArray*)neg(ExtendX), (uArray*)add(SizeY, ExtendY), (uArray*)add(SizeX, ExtendX), (uArray*)add(SizeY, ExtendY), (uArray*)neg(ExtendX), (uArray*)neg(ExtendY), (uArray*)add(SizeX, ExtendX), (uArray*)neg(ExtendY), Mn, (uArray*)sub(SizeY, CornerRadius0), (uArray*)sub(SizeX, Mn), (uArray*)sub(SizeY, CornerRadius1), Mn, CornerRadius3, (uArray*)sub(SizeX, Mn), CornerRadius2, CornerRadius0, (uArray*)sub(SizeY, Mn), (uArray*)sub(SizeX, CornerRadius1), (uArray*)sub(SizeY, Mn), CornerRadius3, Mn, (uArray*)sub(SizeX, CornerRadius2), Mn);
    uArray* offsets = uArray::New(::TYPES[15/*float2[]*/], vr->Length());

    for (int32_t i = 0; i < vr->Length(); ++i)
    {
        ::g::Uno::Int2 offset = ::g::Uno::Int2__New2(0, 0);
        uArray* v = uPtr(vr)->Strong<uArray*>(i);

        for (int32_t j = 0; j < uPtr(v)->Length(); ++j)
        {
            float f = uPtr(v)->Item<float>(j);

            if (f != 0.0f)
            {
                if (offset.Y != 0)
                    U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"more than t...*/]));

                int32_t o = 1 + j;
                offset = ::g::Uno::Int2__New2((f < 0.0f) ? -o : o, offset.X);
            }
        }

        uPtr(offsets)->Item< ::g::Uno::Float2>(i) = ::g::Uno::Float2__op_Implicit1(offset);
    }

    uArray* vsr = uArray::Init<int32_t>(::TYPES[16/*int[]*/], 72, 10, 8, 11, 10, 6, 8, 10, 2, 6, 2, 3, 6, 14, 11, 8, 14, 8, 15, 8, 9, 15, 9, 12, 15, 3, 0, 6, 0, 1, 6, 6, 1, 4, 6, 4, 7, 7, 4, 5, 7, 5, 9, 9, 5, 13, 9, 13, 12, 2, 16, 3, 3, 16, 0, 1, 17, 4, 4, 17, 5, 15, 12, 19, 12, 
        13, 19, 11, 18, 10, 14, 18, 11);
    uArray* ptr = uArray::Init<int32_t>(::TYPES[16/*int[]*/], 72, 22, 8, 22, 22, 6, 8, 22, 20, 6, 20, 20, 6, 26, 26, 8, 26, 8, 27, 8, 9, 27, 9, 27, 27, 24, 24, 6, 24, 25, 6, 6, 25, 25, 6, 25, 7, 7, 21, 21, 7, 21, 9, 9, 21, 23, 9, 23, 23, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 12, 12, 12, 12, 
        12, 12, 11, 11, 11, 11, 11, 11);
    uArray* bufferVertex = uArray::New(::TYPES[17/*byte[]*/], vsr->Length() * 16);
    uArray* bufferEdge = uArray::New(::TYPES[17/*byte[]*/], vsr->Length() * 16);
    _vertexInfo = uDefault< ::g::Uno::Graphics::VertexAttributeInfo>();
    _vertexInfo.BufferOffset = 0;
    _vertexInfo.BufferStride = 16;
    _vertexInfo.Type = 4;
    _vertexInfo.Buffer = ::g::Uno::Graphics::VertexBuffer::New8(0);
    _edgeInfo = uDefault< ::g::Uno::Graphics::VertexAttributeInfo>();
    _edgeInfo.BufferOffset = 0;
    _edgeInfo.BufferStride = 16;
    _edgeInfo.Type = 4;
    _edgeInfo.Buffer = ::g::Uno::Graphics::VertexBuffer::New8(0);

    for (int32_t i1 = 0; i1 < vsr->Length(); ++i1)
    {
        ::g::Uno::ByteArrayExtensions::Set8(bufferVertex, i1 * _vertexInfo.BufferStride, ::g::Uno::Float4__New7(uPtr(offsets)->Item< ::g::Uno::Float2>(uPtr(vsr)->Item<int32_t>(i1) * 2), uPtr(offsets)->Item< ::g::Uno::Float2>((uPtr(vsr)->Item<int32_t>(i1) * 2) + 1)), true);
        ::g::Uno::ByteArrayExtensions::Set8(bufferEdge, i1 * _edgeInfo.BufferStride, ::g::Uno::Float4__New7(offsets->Item< ::g::Uno::Float2>(uPtr(ptr)->Item<int32_t>(i1) * 2), offsets->Item< ::g::Uno::Float2>((uPtr(ptr)->Item<int32_t>(i1) * 2) + 1)), true);
        uPtr(_bufferDistance)->Append1((float)(uint16_t)(1 + ((i1 < 48) ? 8 : (i1 < 54) ? 0 : (i1 < 60) ? 1 : (i1 < 66) ? 2 : 3)));
    }

    uPtr(_vertexInfo.Buffer)->Update(bufferVertex);
    uPtr(_edgeInfo.Buffer)->Update(bufferEdge);
    uPtr(_bufferDistance)->InitDeviceVertex(0);
}

// private float[] neg(float[] a) [instance]
uArray* Rectangle::neg(uArray* a)
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "neg(float[])");
    uArray* r = uArray::New(::TYPES[11/*float[]*/], uPtr(a)->Length());

    for (int32_t i = 0; i < a->Length(); i++)
        uPtr(r)->Item<float>(i) = -uPtr(a)->Item<float>(i);

    return r;
}

// public void Shadow(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, [float2 Position], [float Smoothness]) [instance]
void Rectangle::Shadow(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 Position, float Smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "Shadow(Fuse.DrawContext,Fuse.Visual,float2,float4,Fuse.Drawing.Brush,[float2],[float])");
    Draw(dc, visual, Size, CornerRadius, brush, _fillCoverage, ::g::Uno::Float2__New1(Smoothness), Position, Smoothness, _shadowFalloff);
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Stroke stroke, [float2 Position], [float Smoothness]) [instance]
void Rectangle::Stroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2 Position, float Smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "Stroke(Fuse.DrawContext,Fuse.Visual,float2,float4,Fuse.Drawing.Stroke,[float2],[float])");
    ::g::Uno::Float2 r = uPtr(stroke)->GetDeviceAdjusted(uPtr(dc)->ViewportPixelsPerPoint());
    ::g::Fuse::Drawing::Primitives::StrokeCoverage* sc = _strokeCoverage;
    uPtr(sc)->Radius = (r.Item(0) / 2.0f);
    sc->Center = r.Item(1);
    float extend = ::g::Uno::Math::Max1(0.0f, r.Item(0) + r.Item(1)) + Smoothness;
    Draw(dc, visual, Size, CornerRadius, stroke->Brush(), sc, ::g::Uno::Float2__New1(extend), Position, Smoothness, ::g::Fuse::Drawing::Primitives::Falloff::New1());
}

// private float[] sub(float[] a, float[] b) [instance]
uArray* Rectangle::sub(uArray* a, uArray* b)
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "sub(float[],float[])");
    uArray* r = uArray::New(::TYPES[11/*float[]*/], uPtr(a)->Length());

    for (int32_t i = 0; i < a->Length(); i++)
        uPtr(r)->Item<float>(i) = uPtr(a)->Item<float>(i) - uPtr(b)->Item<float>(i);

    return r;
}

// public generated Rectangle New() [static]
Rectangle* Rectangle::New1()
{
    Rectangle* obj33 = (Rectangle*)uNew(Rectangle_typeof());
    obj33->ctor_();
    return obj33;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.12.0/Rectangle.uno
// --------------------------------------------------------------------------

// internal sealed class ShadowFalloff
// {
static void ShadowFalloff_build(uType* type)
{
}

uType* ShadowFalloff_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::Falloff_typeof();
    options.ObjectSize = sizeof(ShadowFalloff);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.ShadowFalloff", options);
    type->fp_build_ = ShadowFalloff_build;
    type->fp_ctor_ = (void*)ShadowFalloff__New2_fn;
    return type;
}

// public generated ShadowFalloff()
void ShadowFalloff__ctor_1_fn(ShadowFalloff* __this)
{
    __this->ctor_1();
}

// public generated ShadowFalloff New()
void ShadowFalloff__New2_fn(ShadowFalloff** __retval)
{
    *__retval = ShadowFalloff::New2();
}

// public generated ShadowFalloff() [instance]
void ShadowFalloff::ctor_1()
{
    ctor_();
}

// public generated ShadowFalloff New() [static]
ShadowFalloff* ShadowFalloff::New2()
{
    ShadowFalloff* obj1 = (ShadowFalloff*)uNew(ShadowFalloff_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.12.0/Rectangle.uno
// --------------------------------------------------------------------------

// internal sealed class StrokeCoverage
// {
static void StrokeCoverage_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(StrokeCoverage, Radius), 0,
        ::g::Uno::Float_typeof(), offsetof(StrokeCoverage, Center), 0);
}

uType* StrokeCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::Coverage_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(StrokeCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.StrokeCoverage", options);
    type->fp_build_ = StrokeCoverage_build;
    type->fp_ctor_ = (void*)StrokeCoverage__New1_fn;
    return type;
}

// public generated StrokeCoverage()
void StrokeCoverage__ctor_1_fn(StrokeCoverage* __this)
{
    __this->ctor_1();
}

// public generated StrokeCoverage New()
void StrokeCoverage__New1_fn(StrokeCoverage** __retval)
{
    *__retval = StrokeCoverage::New1();
}

// public generated StrokeCoverage() [instance]
void StrokeCoverage::ctor_1()
{
    Radius = 1.0f;
    Center = 0.0f;
    ctor_();
}

// public generated StrokeCoverage New() [static]
StrokeCoverage* StrokeCoverage::New1()
{
    StrokeCoverage* obj1 = (StrokeCoverage*)uNew(StrokeCoverage_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.12.0/Wedge.uno
// ----------------------------------------------------------------------

// public sealed class Wedge
// {
// static generated Wedge()
static void Wedge__cctor__fn(uType* __type)
{
    Wedge::Singleton_ = Wedge::New1();
}

static void Wedge_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Drawing::Primitives::Circle_typeof(),
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage_typeof(), offsetof(Wedge, _convexWedgeCoverage), 0,
        ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage_typeof(), offsetof(Wedge, _concaveWedgeCoverage), 0,
        ::g::Fuse::Drawing::Primitives::StrokeCoverage_typeof(), offsetof(Wedge, _strokeCoverage), 0,
        ::g::Fuse::Drawing::Primitives::FillCoverage_typeof(), offsetof(Wedge, _fillCoverage), 0,
        type, (uintptr_t)&Wedge::Singleton_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Singleton", 4));
    type->Reflection.SetFunctions(3,
        new uFunction("Fill", NULL, (void*)Wedge__Fill_fn, 0, false, uVoid_typeof(), 8, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Drawing::Brush_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Wedge__New1_fn, 0, true, type, 0),
        new uFunction("Stroke", NULL, (void*)Wedge__Stroke_fn, 0, false, uVoid_typeof(), 8, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Drawing::Stroke_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()));
}

uType* Wedge_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Wedge);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Wedge", options);
    type->fp_build_ = Wedge_build;
    type->fp_ctor_ = (void*)Wedge__New1_fn;
    type->fp_cctor_ = Wedge__cctor__fn;
    return type;
}

// public generated Wedge()
void Wedge__ctor__fn(Wedge* __this)
{
    __this->ctor_();
}

// public void Fill(Fuse.DrawContext dc, Fuse.Elements.Element node, float radius, Fuse.Drawing.Brush brush, float2 center, float startAngle, float endAngle, float smoothness)
void Wedge__Fill_fn(Wedge* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float* radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* center, float* startAngle, float* endAngle, float* smoothness)
{
    __this->Fill(dc, node, *radius, brush, *center, *startAngle, *endAngle, *smoothness);
}

// public generated Wedge New()
void Wedge__New1_fn(Wedge** __retval)
{
    *__retval = Wedge::New1();
}

// private Fuse.Drawing.Primitives.WedgeCoverage SetupWedgeCoverage(float startAngle, float endAngle)
void Wedge__SetupWedgeCoverage_fn(Wedge* __this, float* startAngle, float* endAngle, ::g::Fuse::Drawing::Primitives::WedgeCoverage** __retval)
{
    *__retval = __this->SetupWedgeCoverage(*startAngle, *endAngle);
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Elements.Element node, float radius, Fuse.Drawing.Stroke stroke, float2 center, float startAngle, float endAngle, float smoothness)
void Wedge__Stroke_fn(Wedge* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float* radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2* center, float* startAngle, float* endAngle, float* smoothness)
{
    __this->Stroke(dc, node, *radius, stroke, *center, *startAngle, *endAngle, *smoothness);
}

uSStrong<Wedge*> Wedge::Singleton_;

// public generated Wedge() [instance]
void Wedge::ctor_()
{
    _convexWedgeCoverage = ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage::New1();
    _concaveWedgeCoverage = ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage::New1();
    _strokeCoverage = ::g::Fuse::Drawing::Primitives::StrokeCoverage::New1();
    _fillCoverage = ::g::Fuse::Drawing::Primitives::FillCoverage::New1();
}

// public void Fill(Fuse.DrawContext dc, Fuse.Elements.Element node, float radius, Fuse.Drawing.Brush brush, float2 center, float startAngle, float endAngle, float smoothness) [instance]
void Wedge::Fill(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 center, float startAngle, float endAngle, float smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Wedge", "Fill(Fuse.DrawContext,Fuse.Elements.Element,float,Fuse.Drawing.Brush,float2,float,float,float)");
    ::g::Fuse::Drawing::Primitives::WedgeCoverage* wc = SetupWedgeCoverage(startAngle, endAngle);
    uPtr(::g::Fuse::Drawing::Primitives::Circle::Singleton())->Draw(dc, node, radius, brush, _fillCoverage, wc, smoothness, center, smoothness);
}

// private Fuse.Drawing.Primitives.WedgeCoverage SetupWedgeCoverage(float startAngle, float endAngle) [instance]
::g::Fuse::Drawing::Primitives::WedgeCoverage* Wedge::SetupWedgeCoverage(float startAngle, float endAngle)
{
    uStackFrame __("Fuse.Drawing.Primitives.Wedge", "SetupWedgeCoverage(float,float)");
    float pStartAngle = ::g::Uno::Math::Mod1(startAngle, 6.28318548f);
    float pEndAngle = ::g::Uno::Math::Mod1(endAngle, 6.28318548f);

    if (pEndAngle < pStartAngle)
        pEndAngle = pEndAngle + 6.28318548f;

    ::g::Fuse::Drawing::Primitives::WedgeCoverage* wc = _concaveWedgeCoverage;

    if ((pEndAngle - pStartAngle) < 3.14159274f)
        wc = _convexWedgeCoverage;

    uPtr(wc)->StartAngle = pStartAngle;
    wc->EndAngle = pEndAngle;
    return wc;
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Elements.Element node, float radius, Fuse.Drawing.Stroke stroke, float2 center, float startAngle, float endAngle, float smoothness) [instance]
void Wedge::Stroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2 center, float startAngle, float endAngle, float smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Wedge", "Stroke(Fuse.DrawContext,Fuse.Elements.Element,float,Fuse.Drawing.Stroke,float2,float,float,float)");
    ::g::Uno::Float2 r = uPtr(stroke)->GetDeviceAdjusted(uPtr(dc)->ViewportPixelsPerPoint());
    ::g::Fuse::Drawing::Primitives::StrokeCoverage* sc = _strokeCoverage;
    uPtr(sc)->Radius = (r.Item(0) / 2.0f);
    sc->Center = r.Item(1);
    float extend = ::g::Uno::Math::Max1(0.0f, r.Item(0) + r.Item(1)) + smoothness;
    ::g::Fuse::Drawing::Primitives::WedgeCoverage* wc = SetupWedgeCoverage(startAngle, endAngle);
    uPtr(::g::Fuse::Drawing::Primitives::Circle::Singleton())->Draw(dc, node, radius, stroke->Brush(), sc, wc, extend, center, smoothness);
}

// public generated Wedge New() [static]
Wedge* Wedge::New1()
{
    Wedge* obj1 = (Wedge*)uNew(Wedge_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.12.0/Wedge.uno
// ----------------------------------------------------------------------

// internal abstract class WedgeCoverage
// {
static void WedgeCoverage_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(WedgeCoverage, StartAngle), 0,
        ::g::Uno::Float_typeof(), offsetof(WedgeCoverage, EndAngle), 0);
}

uType* WedgeCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::LimitCoverage_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(WedgeCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.WedgeCoverage", options);
    type->fp_build_ = WedgeCoverage_build;
    return type;
}

// protected generated WedgeCoverage()
void WedgeCoverage__ctor_1_fn(WedgeCoverage* __this)
{
    __this->ctor_1();
}

// protected generated WedgeCoverage() [instance]
void WedgeCoverage::ctor_1()
{
    StartAngle = 0.0f;
    EndAngle = 6.28318548f;
    ctor_();
}
// }

}}}} // ::g::Fuse::Drawing::Primitives
