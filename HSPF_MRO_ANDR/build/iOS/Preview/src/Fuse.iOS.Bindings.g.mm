// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Common.Blitter.h>
#include <Fuse.Controls.Native.iOS.FontCache.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Font.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.Internal.FontFaceDescriptor.h>
#include <Fuse.iOS.Bindings.CGColorSpaceRef.h>
#include <Fuse.iOS.Bindings.CGContextRef.h>
#include <Fuse.iOS.Bindings.iOSDeviceInterop.h>
#include <Fuse.iOS.Bindings.TextLayout.h>
#include <Fuse.iOS.Bindings.TextRenderer.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Visual.h>
#include <ObjC.Object.h>
#include <OpenGL.GL.h>
#include <OpenGL.GLPixelFormat.h>
#include <OpenGL.GLPixelStoreParameter.h>
#include <OpenGL.GLPixelType.h>
#include <OpenGL.GLTextureHandle.h>
#include <OpenGL.GLTextureTarget.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IntPtr.h>
#include <Uno.Math.h>
#include <Uno.Platform.CoreApp.h>
#include <Uno.Platform.iOS.Application.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[1];
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{

// /usr/local/share/uno/Packages/Fuse.iOS/1.12.0/iOSInterop.uno
// ------------------------------------------------------------

// internal static extern class iOSDeviceInterop
// {
static void iOSDeviceInterop_build(uType* type)
{
}

uClassType* iOSDeviceInterop_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Bindings.iOSDeviceInterop", options);
    type->fp_build_ = iOSDeviceInterop_build;
    return type;
}

// public static bool IsOrientationLandscape()
void iOSDeviceInterop__IsOrientationLandscape_fn(bool* __retval)
{
    *__retval = iOSDeviceInterop::IsOrientationLandscape();
}

// public static bool IsRootView(ObjC.Object uiView)
void iOSDeviceInterop__IsRootView_fn(::g::ObjC::Object* uiView, bool* __retval)
{
    *__retval = iOSDeviceInterop::IsRootView(uiView);
}

// public static extern void LaunchUriiOS(string uri)
void iOSDeviceInterop__LaunchUriiOS_fn(uString* uri)
{
    iOSDeviceInterop::LaunchUriiOS(uri);
}

// public static float2 Pre_iOS8_HandleDeviceOrientation(float2 size, ObjC.Object uiView)
void iOSDeviceInterop__Pre_iOS8_HandleDeviceOrientation_fn(::g::Uno::Float2* size, ::g::ObjC::Object* uiView, ::g::Uno::Float2* __retval)
{
    *__retval = iOSDeviceInterop::Pre_iOS8_HandleDeviceOrientation(*size, uiView);
}

// public static Uno.Rect Pre_iOS8_HandleDeviceOrientation(Uno.Rect rect, ObjC.Object uiView)
void iOSDeviceInterop__Pre_iOS8_HandleDeviceOrientation1_fn(::g::Uno::Rect* rect, ::g::ObjC::Object* uiView, ::g::Uno::Rect* __retval)
{
    *__retval = iOSDeviceInterop::Pre_iOS8_HandleDeviceOrientation1(*rect, uiView);
}

// public static bool get_PreV8()
void iOSDeviceInterop__get_PreV8_fn(bool* __retval)
{
    *__retval = iOSDeviceInterop::PreV8();
}

// public static bool IsOrientationLandscape() [static]
bool iOSDeviceInterop::IsOrientationLandscape()
{
    @autoreleasepool
    {
        UIInterfaceOrientation o = [UIApplication sharedApplication].statusBarOrientation;
        return o == UIInterfaceOrientationLandscapeLeft ||
        	o == UIInterfaceOrientationLandscapeRight;
    }
    
}

// public static bool IsRootView(ObjC.Object uiView) [static]
bool iOSDeviceInterop::IsRootView(::g::ObjC::Object* uiView)
{
    return uiView == ::g::Uno::Platform::iOS::Application::GetRootView();
}

// public static extern void LaunchUriiOS(string uri) [static]
void iOSDeviceInterop::LaunchUriiOS(uString* uri)
{
    @autoreleasepool
    {
        [] (::NSString* uri) -> void
        {
            [[UIApplication sharedApplication] openURL:[NSURL URLWithString:uri]];
        } (::uObjC::NativeString(uri));
        
    }
    
}

// public static float2 Pre_iOS8_HandleDeviceOrientation(float2 size, ObjC.Object uiView) [static]
::g::Uno::Float2 iOSDeviceInterop::Pre_iOS8_HandleDeviceOrientation(::g::Uno::Float2 size, ::g::ObjC::Object* uiView)
{
    if ((iOSDeviceInterop::PreV8() && iOSDeviceInterop::IsOrientationLandscape()) && ((uiView == NULL) || iOSDeviceInterop::IsRootView(uiView)))
        return ::g::Uno::Float2__New2(size.Y, size.X);

    return size;
}

// public static Uno.Rect Pre_iOS8_HandleDeviceOrientation(Uno.Rect rect, ObjC.Object uiView) [static]
::g::Uno::Rect iOSDeviceInterop::Pre_iOS8_HandleDeviceOrientation1(::g::Uno::Rect rect, ::g::ObjC::Object* uiView)
{
    if ((iOSDeviceInterop::PreV8() && iOSDeviceInterop::IsOrientationLandscape()) && ((uiView == NULL) || iOSDeviceInterop::IsRootView(uiView)))
    {
        ::g::Uno::Float2 pos = rect.Position();
        ::g::Uno::Float2 size = rect.Size();
        return ::g::Uno::Rect__New2(::g::Uno::Float2__New2(pos.Y, pos.X), ::g::Uno::Float2__New2(size.Y, size.X));
    }

    return rect;
}

// public static bool get_PreV8() [static]
bool iOSDeviceInterop::PreV8()
{
    return NSFoundationVersionNumber <= NSFoundationVersionNumber_iOS_7_1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.TextRenderer/1.12.0/TextRenderer.uno
// ---------------------------------------------------------------------------

// internal sealed extern class TextLayout
// {
static void TextLayout_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::ICommonViewport_typeof();
    type->SetDependencies(
        ::g::Fuse::Controls::Native::iOS::FontCache_typeof(),
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(TextLayout, _font), 0,
        ::g::Uno::Bool_typeof(), offsetof(TextLayout, _layoutValid), 0,
        ::g::Uno::Bool_typeof(), offsetof(TextLayout, _layoutMin), 0,
        ::g::ObjC::Object_typeof(), offsetof(TextLayout, _textStorage), 0,
        ::g::Uno::Float2_typeof(), offsetof(TextLayout, _layoutSize), 0,
        ::g::ObjC::Object_typeof(), offsetof(TextLayout, _textColor), 0,
        ::g::ObjC::Object_typeof(), offsetof(TextLayout, _style), 0,
        ::g::Uno::Float_typeof(), offsetof(TextLayout, TextOpacity), 0,
        ::g::ObjC::Object_typeof(), offsetof(TextLayout, LayoutManager), 0,
        ::g::ObjC::Object_typeof(), offsetof(TextLayout, TextContainer), 0,
        ::g::Uno::Rect_typeof(), offsetof(TextLayout, PixelBounds), 0);
}

uType* TextLayout_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(TextLayout);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.iOS.Bindings.TextLayout", options);
    type->fp_build_ = TextLayout_build;
    type->fp_ctor_ = (void*)TextLayout__New1_fn;
    return type;
}

// public TextLayout()
void TextLayout__ctor__fn(TextLayout* __this)
{
    __this->ctor_();
}

// public static void AddNSTextContainer(ObjC.Object layoutManager, ObjC.Object textContainer)
void TextLayout__AddNSTextContainer_fn(::g::ObjC::Object* layoutManager, ::g::ObjC::Object* textContainer)
{
    TextLayout::AddNSTextContainer(layoutManager, textContainer);
}

// public static void ClearTextContainers(ObjC.Object layoutManager)
void TextLayout__ClearTextContainers_fn(::g::ObjC::Object* layoutManager)
{
    TextLayout::ClearTextContainers(layoutManager);
}

// public static ObjC.Object CreateNSTextContainer(float width, float height)
void TextLayout__CreateNSTextContainer_fn(float* width, float* height, ::g::ObjC::Object** __retval)
{
    *__retval = TextLayout::CreateNSTextContainer(*width, *height);
}

// public static ObjC.Object CreateNSTextStorage(string value, ObjC.Object font, ObjC.Object color, ObjC.Object style)
void TextLayout__CreateNSTextStorage_fn(uString* value, ::g::ObjC::Object* font, ::g::ObjC::Object* color, ::g::ObjC::Object* style, ::g::ObjC::Object** __retval)
{
    *__retval = TextLayout::CreateNSTextStorage(value, font, color, style);
}

// private static Uno.Rect CreateRect(float2 pos, float2 size)
void TextLayout__CreateRect_fn(::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Rect* __retval)
{
    *__retval = TextLayout::CreateRect(*pos, *size);
}

// public void Invalidate()
void TextLayout__Invalidate_fn(TextLayout* __this)
{
    __this->Invalidate();
}

// public TextLayout New()
void TextLayout__New1_fn(TextLayout** __retval)
{
    *__retval = TextLayout::New1();
}

// public static void SetNSParagraphStyleProperties(ObjC.Object style, Fuse.Controls.TextAlignment alignment, Fuse.Controls.TextWrapping wrapping, float lineSpacing)
void TextLayout__SetNSParagraphStyleProperties_fn(::g::ObjC::Object* style, int32_t* alignment, int32_t* wrapping, float* lineSpacing)
{
    TextLayout::SetNSParagraphStyleProperties(style, *alignment, *wrapping, *lineSpacing);
}

// public static void SetNSTextStorage(ObjC.Object layoutManager, ObjC.Object textStorage)
void TextLayout__SetNSTextStorage_fn(::g::ObjC::Object* layoutManager, ::g::ObjC::Object* textStorage)
{
    TextLayout::SetNSTextStorage(layoutManager, textStorage);
}

// public static ObjC.Object ToUIColor(float4 color)
void TextLayout__ToUIColor_fn(::g::Uno::Float4* color, ::g::ObjC::Object** __retval)
{
    *__retval = TextLayout::ToUIColor(*color);
}

// public bool UpdateLayout(Fuse.Controls.TextControl control, float2 size, [bool useMin])
void TextLayout__UpdateLayout_fn(TextLayout* __this, ::g::Fuse::Controls::TextControl* control, ::g::Uno::Float2* size, bool* useMin, bool* __retval)
{
    *__retval = __this->UpdateLayout(control, *size, *useMin);
}

// public static Uno.Rect UsedRectForTextContainer(ObjC.Object layoutManager, ObjC.Object textContainer)
void TextLayout__UsedRectForTextContainer_fn(::g::ObjC::Object* layoutManager, ::g::ObjC::Object* textContainer, ::g::Uno::Rect* __retval)
{
    *__retval = TextLayout::UsedRectForTextContainer(layoutManager, textContainer);
}

// public TextLayout() [instance]
void TextLayout::ctor_()
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this) -> void
        {
            NSLayoutManager* lm = [[NSLayoutManager alloc] init];
            uCast<TextLayout*>((_this).unoObject, TextLayout_typeof())->LayoutManager = ::g::ObjC::Object::Create(lm);
            
            NSMutableParagraphStyle* ps = [[NSParagraphStyle defaultParagraphStyle] mutableCopy];
            uCast<TextLayout*>((_this).unoObject, TextLayout_typeof())->_style = ::g::ObjC::Object::Create(ps);
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]);
        
    }
    
}

// public void Invalidate() [instance]
void TextLayout::Invalidate()
{
    _layoutValid = false;
}

// public bool UpdateLayout(Fuse.Controls.TextControl control, float2 size, [bool useMin]) [instance]
bool TextLayout::UpdateLayout(::g::Fuse::Controls::TextControl* control, ::g::Uno::Float2 size, bool useMin)
{
    uStackFrame __("Fuse.iOS.Bindings.TextLayout", "UpdateLayout(Fuse.Controls.TextControl,float2,[bool])");
    ::g::Uno::Float4 ind1;
    ::g::Fuse::Internal::FontFaceDescriptor* ret3;
    size = ::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Multiply1(size, ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(control)->Viewport()), ::TYPES[0/*Fuse.ICommonViewport*/]))));
    bool valid = (_layoutValid && ::g::Uno::Float2__op_Equality(_layoutSize, size)) && (_layoutMin == useMin);

    if (valid)
        return false;

    _font = ::g::Fuse::Controls::Native::iOS::FontCache::Get((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(control->Font())->Descriptors), uCRef<int32_t>(0), &ret3), ret3), control->FontSize() * ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(control->Viewport()), ::TYPES[0/*Fuse.ICommonViewport*/])));
    _textColor = TextLayout::ToUIColor(::g::Uno::Float4__New8((ind1 = control->TextColor(), ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z)), 1.0f));
    TextOpacity = control->TextColor().W;
    TextLayout::ClearTextContainers(LayoutManager);
    float width = size.X;

    if ((control->TextTruncation() == 1) && (control->TextWrapping() == 0))
        width = 0.0f;

    TextContainer = TextLayout::CreateNSTextContainer(width, size.Y);
    TextLayout::AddNSTextContainer(LayoutManager, TextContainer);
    TextLayout::SetNSParagraphStyleProperties(_style, control->TextAlignment(), control->TextWrapping(), control->LineSpacing() * ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(control->Viewport()), ::TYPES[0/*Fuse.ICommonViewport*/])));
    _textStorage = TextLayout::CreateNSTextStorage(control->Value(), _font, _textColor, _style);
    TextLayout::SetNSTextStorage(LayoutManager, _textStorage);
    _layoutSize = size;
    _layoutValid = true;
    _layoutMin = useMin;
    PixelBounds = TextLayout::UsedRectForTextContainer(LayoutManager, TextContainer);
    return true;
}

// public static void AddNSTextContainer(ObjC.Object layoutManager, ObjC.Object textContainer) [static]
void TextLayout::AddNSTextContainer(::g::ObjC::Object* layoutManager, ::g::ObjC::Object* textContainer)
{
    @autoreleasepool
    {
        [] (::id layoutManager, ::id textContainer) -> void
        {
            [(NSLayoutManager*)layoutManager addTextContainer:(NSTextContainer*)textContainer];
        } (::g::ObjC::Object::GetHandle(layoutManager), ::g::ObjC::Object::GetHandle(textContainer));
        
    }
    
}

// public static void ClearTextContainers(ObjC.Object layoutManager) [static]
void TextLayout::ClearTextContainers(::g::ObjC::Object* layoutManager)
{
    @autoreleasepool
    {
        [] (::id layoutManager) -> void
        {
            NSLayoutManager* lm = (NSLayoutManager*)layoutManager;
            while (lm.textContainers.count > 0)
            	[lm removeTextContainerAtIndex:0];
        } (::g::ObjC::Object::GetHandle(layoutManager));
        
    }
    
}

// public static ObjC.Object CreateNSTextContainer(float width, float height) [static]
::g::ObjC::Object* TextLayout::CreateNSTextContainer(float width, float height)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (float width, float height) -> ::id
        {
            NSTextContainer* result = [[NSTextContainer alloc] initWithSize:CGSizeMake(width, height)];
            result.lineFragmentPadding = 0;
            return result;
        } (width, height));
        
    }
    
}

// public static ObjC.Object CreateNSTextStorage(string value, ObjC.Object font, ObjC.Object color, ObjC.Object style) [static]
::g::ObjC::Object* TextLayout::CreateNSTextStorage(uString* value, ::g::ObjC::Object* font, ::g::ObjC::Object* color, ::g::ObjC::Object* style)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::NSString* value, ::id font, ::id color, ::id style) -> ::id
        {
            return [[NSTextStorage alloc] initWithString:value
            	attributes: @{
            		NSFontAttributeName: font,
            		NSForegroundColorAttributeName: color,
            		NSParagraphStyleAttributeName: style
            	}];
        } (::uObjC::NativeString(value), ::g::ObjC::Object::GetHandle(font), ::g::ObjC::Object::GetHandle(color), ::g::ObjC::Object::GetHandle(style)));
        
    }
    
}

// private static Uno.Rect CreateRect(float2 pos, float2 size) [static]
::g::Uno::Rect TextLayout::CreateRect(::g::Uno::Float2 pos, ::g::Uno::Float2 size)
{
    return ::g::Uno::Rect__New2(pos, size);
}

// public TextLayout New() [static]
TextLayout* TextLayout::New1()
{
    TextLayout* obj2 = (TextLayout*)uNew(TextLayout_typeof());
    obj2->ctor_();
    return obj2;
}

// public static void SetNSParagraphStyleProperties(ObjC.Object style, Fuse.Controls.TextAlignment alignment, Fuse.Controls.TextWrapping wrapping, float lineSpacing) [static]
void TextLayout::SetNSParagraphStyleProperties(::g::ObjC::Object* style, int32_t alignment, int32_t wrapping, float lineSpacing)
{
    @autoreleasepool
    {
        [] (::id style, int32_t alignment, int32_t wrapping, float lineSpacing) -> void
        {
            NSMutableParagraphStyle* s = (NSMutableParagraphStyle*)style;
            switch (alignment)
            {
            	case 0:
            		s.alignment = NSTextAlignmentLeft;
            		break;
            	case 1:
            		s.alignment = NSTextAlignmentCenter;
            		break;
            	case 2:
            		s.alignment = NSTextAlignmentRight;
            		break;
            	default: break;
            }
            switch (wrapping)
            {
            	case 0:
            		s.lineBreakMode = NSLineBreakByTruncatingTail;
            		break;
            	case 1:
            		s.lineBreakMode = NSLineBreakByWordWrapping;
            	default: break;
            }
            s.lineSpacing = lineSpacing;
        } (::g::ObjC::Object::GetHandle(style), alignment, wrapping, lineSpacing);
        
    }
    
}

// public static void SetNSTextStorage(ObjC.Object layoutManager, ObjC.Object textStorage) [static]
void TextLayout::SetNSTextStorage(::g::ObjC::Object* layoutManager, ::g::ObjC::Object* textStorage)
{
    @autoreleasepool
    {
        [] (::id layoutManager, ::id textStorage) -> void
        {
            [(NSLayoutManager*)layoutManager setTextStorage:textStorage];
        } (::g::ObjC::Object::GetHandle(layoutManager), ::g::ObjC::Object::GetHandle(textStorage));
        
    }
    
}

// public static ObjC.Object ToUIColor(float4 color) [static]
::g::ObjC::Object* TextLayout::ToUIColor(::g::Uno::Float4 color)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::g::Uno::Float4 color) -> ::id
        {
            return [UIColor colorWithRed:(CGFloat)color.X
            	green:(CGFloat)color.Y
            	blue:(CGFloat)color.Z
            	alpha:(CGFloat)color.W];
        } (color));
        
    }
    
}

// public static Uno.Rect UsedRectForTextContainer(ObjC.Object layoutManager, ObjC.Object textContainer) [static]
::g::Uno::Rect TextLayout::UsedRectForTextContainer(::g::ObjC::Object* layoutManager, ::g::ObjC::Object* textContainer)
{
    @autoreleasepool
    {
        return [] (::id layoutManager, ::id textContainer) -> ::g::Uno::Rect
        {
            CGRect rect = [(NSLayoutManager*)layoutManager
            	usedRectForTextContainer:(NSTextContainer*)textContainer];
            ::g::Uno::Float2 pos = [&]() -> ::g::Uno::Float2 { ::uForeignPool __foreignPool; return ::g::Uno::Float2__New2((float)rect.origin.x, (float)-rect.origin.y); }(); // Apple's coordinate systems and/or APIs are crazy.
            ::g::Uno::Float2 size = [&]() -> ::g::Uno::Float2 { ::uForeignPool __foreignPool; return ::g::Uno::Float2__New2((float)rect.size.width, (float)rect.size.height); }();
            return [&]() -> ::g::Uno::Rect { ::uForeignPool __foreignPool; return TextLayout::CreateRect(pos, size); }();
        } (::g::ObjC::Object::GetHandle(layoutManager), ::g::ObjC::Object::GetHandle(textContainer));
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.TextRenderer/1.12.0/TextRenderer.uno
// ---------------------------------------------------------------------------

// internal sealed extern class TextRenderer
// {
// static generated TextRenderer()
static void TextRenderer__cctor__fn(uType* __type)
{
    TextRenderer::_colorSpace_ = TextRenderer::CGColorSpaceCreateDeviceRGB();
}

static void TextRenderer_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Failed to create CGBitmapContext");
    ::TYPES[0] = ::g::Fuse::ICommonViewport_typeof();
    type->SetDependencies(
        ::g::Fuse::Common::Blitter_typeof(),
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Fuse::Controls::ITextRenderer_typeof(), offsetof(TextRenderer_type, interface0));
    type->SetFields(0,
        ::g::Fuse::iOS::Bindings::TextLayout_typeof(), offsetof(TextRenderer, _textLayout), 0,
        ::g::Fuse::iOS::Bindings::TextLayout_typeof(), offsetof(TextRenderer, _measureLayout), 0,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(TextRenderer, _control), 0,
        ::g::Uno::Float2_typeof(), offsetof(TextRenderer, _arrangePosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(TextRenderer, _arrangeSize), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(TextRenderer, _texture), 0,
        ::g::Fuse::iOS::Bindings::CGColorSpaceRef_typeof(), (uintptr_t)&TextRenderer::_colorSpace_, uFieldFlagsStatic);
}

TextRenderer_type* TextRenderer_typeof()
{
    static uSStrong<TextRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(TextRenderer);
    options.TypeSize = sizeof(TextRenderer_type);
    type = (TextRenderer_type*)uClassType::New("Fuse.iOS.Bindings.TextRenderer", options);
    type->fp_build_ = TextRenderer_build;
    type->fp_cctor_ = TextRenderer__cctor__fn;
    type->interface0.fp_GetContentSize = (void(*)(uObject*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))TextRenderer__GetContentSize_fn;
    type->interface0.fp_Draw = (void(*)(uObject*, ::g::Fuse::DrawContext*, ::g::Fuse::Visual*))TextRenderer__Draw_fn;
    type->interface0.fp_Arrange = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Float2*))TextRenderer__Arrange_fn;
    type->interface0.fp_Invalidate = (void(*)(uObject*))TextRenderer__Invalidate_fn;
    type->interface0.fp_GetRenderBounds = (void(*)(uObject*, ::g::Uno::Rect*))TextRenderer__GetRenderBounds_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))TextRenderer__SoftDispose_fn;
    return type;
}

// public TextRenderer(Fuse.Controls.TextControl control)
void TextRenderer__ctor__fn(TextRenderer* __this, ::g::Fuse::Controls::TextControl* control)
{
    __this->ctor_(control);
}

// public void Arrange(float2 position, float2 size)
void TextRenderer__Arrange_fn(TextRenderer* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* size)
{
    __this->Arrange(*position, *size);
}

// private static Fuse.iOS.Bindings.CGContextRef CGBitmapContextCreate(Uno.IntPtr textureBuffer, int width, int height, Fuse.iOS.Bindings.CGColorSpaceRef colorSpace)
void TextRenderer__CGBitmapContextCreate_fn(void** textureBuffer, int32_t* width, int32_t* height, ::CGColorSpaceRef* colorSpace, ::CGContextRef* __retval)
{
    *__retval = TextRenderer::CGBitmapContextCreate(*textureBuffer, *width, *height, *colorSpace);
}

// private static Fuse.iOS.Bindings.CGColorSpaceRef CGColorSpaceCreateDeviceRGB()
void TextRenderer__CGColorSpaceCreateDeviceRGB_fn(::CGColorSpaceRef* __retval)
{
    *__retval = TextRenderer::CGColorSpaceCreateDeviceRGB();
}

// private static void CGContextRelease(Fuse.iOS.Bindings.CGContextRef context)
void TextRenderer__CGContextRelease_fn(::CGContextRef* context)
{
    TextRenderer::CGContextRelease(*context);
}

// internal static Fuse.Controls.ITextRenderer Create(Fuse.Controls.TextControl control)
void TextRenderer__Create_fn(::g::Fuse::Controls::TextControl* control, uObject** __retval)
{
    *__retval = TextRenderer::Create(control);
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual where)
void TextRenderer__Draw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where)
{
    __this->Draw(dc, where);
}

// private static void DrawGlyphs(Fuse.iOS.Bindings.CGContextRef context, float x, float y, int width, int height, ObjC.Object layoutManager, ObjC.Object textContainer)
void TextRenderer__DrawGlyphs_fn(::CGContextRef* context, float* x, float* y, int32_t* width, int32_t* height, ::g::ObjC::Object* layoutManager, ::g::ObjC::Object* textContainer)
{
    TextRenderer::DrawGlyphs(*context, *x, *y, *width, *height, layoutManager, textContainer);
}

// public float2 GetContentSize(Fuse.LayoutParams lp)
void TextRenderer__GetContentSize_fn(TextRenderer* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetContentSize(*lp);
}

// public Uno.Rect GetRenderBounds()
void TextRenderer__GetRenderBounds_fn(TextRenderer* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->GetRenderBounds();
}

// public void Invalidate()
void TextRenderer__Invalidate_fn(TextRenderer* __this)
{
    __this->Invalidate();
}

// private void InvalidateTexture()
void TextRenderer__InvalidateTexture_fn(TextRenderer* __this)
{
    __this->InvalidateTexture();
}

// public TextRenderer New(Fuse.Controls.TextControl control)
void TextRenderer__New1_fn(::g::Fuse::Controls::TextControl* control, TextRenderer** __retval)
{
    *__retval = TextRenderer::New1(control);
}

// public void SoftDispose()
void TextRenderer__SoftDispose_fn(TextRenderer* __this)
{
    __this->SoftDispose();
}

::CGColorSpaceRef TextRenderer::_colorSpace_;

// public TextRenderer(Fuse.Controls.TextControl control) [instance]
void TextRenderer::ctor_(::g::Fuse::Controls::TextControl* control)
{
    _textLayout = ::g::Fuse::iOS::Bindings::TextLayout::New1();
    _control = control;
}

// public void Arrange(float2 position, float2 size) [instance]
void TextRenderer::Arrange(::g::Uno::Float2 position, ::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.iOS.Bindings.TextRenderer", "Arrange(float2,float2)");
    _arrangePosition = position;
    _arrangeSize = ::g::Uno::Float2__op_Addition2(size, ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2(0.5f, 0.5f), ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[0/*Fuse.ICommonViewport*/]))));
    Invalidate();
    uPtr(_textLayout)->UpdateLayout(_control, _arrangeSize, false);
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual where) [instance]
void TextRenderer::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where)
{
    uStackFrame __("Fuse.iOS.Bindings.TextRenderer", "Draw(Fuse.DrawContext,Fuse.Visual)");

    if (uPtr(_textLayout)->UpdateLayout(_control, _arrangeSize, false))
        InvalidateTexture();

    ::g::Uno::Int2 pixelSize = ::g::Uno::Int2__op_Explicit1(::g::Uno::Math::Ceil2(uPtr(_textLayout)->PixelBounds.Size()));

    if ((((pixelSize.X < 1) || (pixelSize.Y < 1)) || (pixelSize.X > ::g::Uno::Graphics::Texture2D::MaxSize())) || (pixelSize.Y > ::g::Uno::Graphics::Texture2D::MaxSize()))
        return;

    ::g::Uno::Float2 pointSize = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(pixelSize), ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[0/*Fuse.ICommonViewport*/])));

    if (_texture == NULL)
    {
        void* textureBuffer = malloc(pixelSize.X * pixelSize.Y * 4);

        if (::g::Uno::IntPtr::op_Equality(textureBuffer, ::g::Uno::IntPtr::Zero_))
            return;

        ::CGContextRef imageContext = TextRenderer::CGBitmapContextCreate(textureBuffer, pixelSize.X, pixelSize.Y, TextRenderer::_colorSpace_);

        if (::g::Uno::IntPtr::op_Equality((void*)imageContext, ::g::Uno::IntPtr::Zero_))
            U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Failed to c...*/]));

        TextRenderer::DrawGlyphs(imageContext, -uPtr(_textLayout)->PixelBounds.Position().X, -uPtr(_textLayout)->PixelBounds.Position().Y, pixelSize.X, pixelSize.Y, uPtr(_textLayout)->LayoutManager, uPtr(_textLayout)->TextContainer);
        TextRenderer::CGContextRelease(imageContext);
        uint32_t textureHandle = ::g::OpenGL::GL::CreateTexture();
        ::g::OpenGL::GL::BindTexture(3553, textureHandle);
        ::g::OpenGL::GL::PixelStore(3317, 1);
        ::g::OpenGL::GL::TexImage2D2(3553, 0, 6408, pixelSize.X, pixelSize.Y, 0, 32993, 5121, textureBuffer);
        free(textureBuffer);
        textureBuffer = ::g::Uno::IntPtr::Zero_;
        ::g::OpenGL::GL::BindTexture(3553, ::g::OpenGL::GLTextureHandle::Zero_);
        _texture = ::g::Uno::Graphics::Texture2D::New2(textureHandle, pixelSize, 1, 3);
    }

    ::g::Uno::Float2 pointPosition = ::g::Uno::Float2__op_Division1(uPtr(_textLayout)->PixelBounds.Position(), ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[0/*Fuse.ICommonViewport*/])));
    uPtr(::g::Fuse::Common::Blitter::Singleton())->Blit1(_texture, ::g::Uno::Rect__New2(pointPosition, pointSize), uPtr(dc)->GetLocalToClipTransform(where), uPtr(_textLayout)->TextOpacity, true, 0);
}

// public float2 GetContentSize(Fuse.LayoutParams lp) [instance]
::g::Uno::Float2 TextRenderer::GetContentSize(::g::Fuse::LayoutParams lp)
{
    uStackFrame __("Fuse.iOS.Bindings.TextRenderer", "GetContentSize(Fuse.LayoutParams)");

    if (_measureLayout == NULL)
        _measureLayout = ::g::Fuse::iOS::Bindings::TextLayout::New1();

    ::g::Uno::Float2 size = ::g::Uno::Float2__New2(lp.HasX() ? lp.X() : FLT_INF, lp.HasY() ? lp.Y() : FLT_INF);

    if (lp.HasMaxX())
        size.X = ::g::Uno::Math::Min1(size.X, lp.MaxX());

    if (lp.HasMaxY())
        size.Y = ::g::Uno::Math::Min1(size.Y, lp.MaxY());

    uPtr(_measureLayout)->UpdateLayout(_control, size, true);
    return ::g::Uno::Float2__op_Division1(uPtr(_measureLayout)->PixelBounds.Size(), ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[0/*Fuse.ICommonViewport*/])));
}

// public Uno.Rect GetRenderBounds() [instance]
::g::Uno::Rect TextRenderer::GetRenderBounds()
{
    uStackFrame __("Fuse.iOS.Bindings.TextRenderer", "GetRenderBounds()");
    uPtr(_textLayout)->UpdateLayout(_control, _arrangeSize, false);
    return ::g::Uno::Rect__Translate(::g::Uno::Rect__New2(::g::Uno::Float2__op_Division1(uPtr(_textLayout)->PixelBounds.Position(), ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[0/*Fuse.ICommonViewport*/]))), ::g::Uno::Float2__op_Division1(uPtr(_textLayout)->PixelBounds.Size(), ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[0/*Fuse.ICommonViewport*/])))), _arrangePosition);
}

// public void Invalidate() [instance]
void TextRenderer::Invalidate()
{
    uStackFrame __("Fuse.iOS.Bindings.TextRenderer", "Invalidate()");
    uPtr(_textLayout)->Invalidate();

    if (_measureLayout != NULL)
        uPtr(_measureLayout)->Invalidate();

    InvalidateTexture();
}

// private void InvalidateTexture() [instance]
void TextRenderer::InvalidateTexture()
{
    uStackFrame __("Fuse.iOS.Bindings.TextRenderer", "InvalidateTexture()");

    if (_texture != NULL)
    {
        uPtr(_texture)->Dispose();
        _texture = NULL;
    }
}

// public void SoftDispose() [instance]
void TextRenderer::SoftDispose()
{
    uStackFrame __("Fuse.iOS.Bindings.TextRenderer", "SoftDispose()");
    InvalidateTexture();
}

// private static Fuse.iOS.Bindings.CGContextRef CGBitmapContextCreate(Uno.IntPtr textureBuffer, int width, int height, Fuse.iOS.Bindings.CGColorSpaceRef colorSpace) [static]
::CGContextRef TextRenderer::CGBitmapContextCreate(void* textureBuffer, int32_t width, int32_t height, ::CGColorSpaceRef colorSpace)
{
    TextRenderer_typeof()->Init();
    CGBitmapInfo flags = kCGBitmapByteOrder32Little | kCGImageAlphaPremultipliedFirst;
    return ::CGBitmapContextCreate(textureBuffer, width, height, 8, width * 4, colorSpace, flags);
}

// private static Fuse.iOS.Bindings.CGColorSpaceRef CGColorSpaceCreateDeviceRGB() [static]
::CGColorSpaceRef TextRenderer::CGColorSpaceCreateDeviceRGB()
{
    TextRenderer_typeof()->Init();
    return ::CGColorSpaceCreateDeviceRGB();
}

// private static void CGContextRelease(Fuse.iOS.Bindings.CGContextRef context) [static]
void TextRenderer::CGContextRelease(::CGContextRef context)
{
    TextRenderer_typeof()->Init();
    ::CGContextRelease(context);
}

// internal static Fuse.Controls.ITextRenderer Create(Fuse.Controls.TextControl control) [static]
uObject* TextRenderer::Create(::g::Fuse::Controls::TextControl* control)
{
    uStackFrame __("Fuse.iOS.Bindings.TextRenderer", "Create(Fuse.Controls.TextControl)");
    TextRenderer_typeof()->Init();
    return (uObject*)TextRenderer::New1(control);
}

// private static void DrawGlyphs(Fuse.iOS.Bindings.CGContextRef context, float x, float y, int width, int height, ObjC.Object layoutManager, ObjC.Object textContainer) [static]
void TextRenderer::DrawGlyphs(::CGContextRef context, float x, float y, int32_t width, int32_t height, ::g::ObjC::Object* layoutManager, ::g::ObjC::Object* textContainer)
{
    TextRenderer_typeof()->Init();
    @autoreleasepool
    {
        [] (::CGContextRef context, float x, float y, int32_t width, int32_t height, ::id layoutManager, ::id textContainer) -> void
        {
            NSLayoutManager* lm = (NSLayoutManager*)layoutManager;
            NSTextContainer* tc = (NSTextContainer*)textContainer;
            UIGraphicsPushContext(context);
            CGRect rect = CGRectMake(0, 0, width, height);
            CGContextClearRect(context, rect);
            NSRange glyphRange = [lm glyphRangeForTextContainer:tc];
            CGPoint point = CGPointMake(x, y);
            [lm drawGlyphsForGlyphRange:glyphRange atPoint:point];
            UIGraphicsPopContext();
        } (context, x, y, width, height, ::g::ObjC::Object::GetHandle(layoutManager), ::g::ObjC::Object::GetHandle(textContainer));
        
    }
    
}

// public TextRenderer New(Fuse.Controls.TextControl control) [static]
TextRenderer* TextRenderer::New1(::g::Fuse::Controls::TextControl* control)
{
    TextRenderer* obj1 = (TextRenderer*)uNew(TextRenderer_typeof());
    obj1->ctor_(control);
    return obj1;
}
// }

}}}} // ::g::Fuse::iOS::Bindings
