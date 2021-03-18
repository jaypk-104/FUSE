// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <CoreText/CoreText.h>
#include <Fuse.Internal.iOSSystemFont.h>
#include <Fuse.Text.Font.h>
#include <Fuse.Text.Glyph.h>
#include <Fuse.Text.Implementation.CoreTextFont.h>
#include <Fuse.Text.Implementation.CoreTextFontFace.h>
#include <Fuse.Text.Implementation.Harfbuzz.h>
#include <Fuse.Text.RenderedGlyph.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Content.Images.Bitmap.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IntPtr.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.UInt.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[2];
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// /usr/local/share/uno/Packages/Fuse.Text/1.12.0/Implementation/CoreTextFontFace.uno
// ----------------------------------------------------------------------------------

// internal sealed extern class CoreTextFont
// {
static void CoreTextFont_build(uType* type)
{
    ::STRINGS[0] = uString::Const("(buffer.Length % stride) == 0");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Text/1.12.0/Implementation/CoreTextFontFace.uno");
    ::TYPES[0] = uObject_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Byte_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Text::Implementation::HarfbuzzFont_type, interface0));
    type->SetFields(5,
        ::g::ObjC::Object_typeof(), offsetof(CoreTextFont, _uiFont), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(CoreTextFont, _cgFont), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(CoreTextFont, _hbFace), 0,
        ::g::Uno::Int_typeof(), offsetof(CoreTextFont, _pixelSize), 0);
}

::g::Fuse::Text::Implementation::HarfbuzzFont_type* CoreTextFont_typeof()
{
    static uSStrong< ::g::Fuse::Text::Implementation::HarfbuzzFont_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Text::Implementation::HarfbuzzFont_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(CoreTextFont);
    options.TypeSize = sizeof(::g::Fuse::Text::Implementation::HarfbuzzFont_type);
    type = (::g::Fuse::Text::Implementation::HarfbuzzFont_type*)uClassType::New("Fuse.Text.Implementation.CoreTextFont", options);
    type->fp_build_ = CoreTextFont_build;
    type->fp_get_Ascender = (void(*)(::g::Fuse::Text::Font*, float*))CoreTextFont__get_Ascender_fn;
    type->fp_get_Descender = (void(*)(::g::Fuse::Text::Font*, float*))CoreTextFont__get_Descender_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Text::Font*))CoreTextFont__Dispose_fn;
    type->fp_get_LineHeight = (void(*)(::g::Fuse::Text::Font*, float*))CoreTextFont__get_LineHeight_fn;
    type->fp_get_NumGlyphs = (void(*)(::g::Fuse::Text::Font*, int32_t*))CoreTextFont__get_NumGlyphs_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Text::Font*, int32_t*))CoreTextFont__get_PixelSize_fn;
    type->fp_Render = (void(*)(::g::Fuse::Text::Font*, ::g::Fuse::Text::Glyph*, ::g::Fuse::Text::RenderedGlyph*))CoreTextFont__Render_fn;
    type->fp_get_Scale = (void(*)(::g::Fuse::Text::Implementation::HarfbuzzFont*, float*))CoreTextFont__get_Scale_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))CoreTextFont__Dispose_fn;
    return type;
}

// internal CoreTextFont(Uno.IntPtr hbFace, Uno.IntPtr cgFont, ObjC.Object uiFont, int pixelSize)
void CoreTextFont__ctor_2_fn(CoreTextFont* __this, void** hbFace, void** cgFont, ::g::ObjC::Object* uiFont, int32_t* pixelSize)
{
    __this->ctor_2(*hbFace, *cgFont, uiFont, *pixelSize);
}

// public override sealed float get_Ascender()
void CoreTextFont__get_Ascender_fn(CoreTextFont* __this, float* __retval)
{
    return *__retval = __this->GetAscender(__this->_uiFont), void();
}

// private void CGFontRelease(Uno.IntPtr cgFont)
void CoreTextFont__CGFontRelease_fn(CoreTextFont* __this, void** cgFont)
{
    __this->CGFontRelease(*cgFont);
}

// public override sealed float get_Descender()
void CoreTextFont__get_Descender_fn(CoreTextFont* __this, float* __retval)
{
    return *__retval = __this->GetDescender(__this->_uiFont), void();
}

// public override sealed void Dispose()
void CoreTextFont__Dispose_fn(CoreTextFont* __this)
{
    ::g::Fuse::Text::Implementation::HarfbuzzFont__Dispose_fn(__this);

    if (::g::Uno::IntPtr::op_Inequality(__this->_hbFace, ::g::Uno::IntPtr::Zero_))
    {
        ::g::Fuse::Text::Implementation::Harfbuzz::face_destroy(__this->_hbFace);
        __this->_hbFace = ::g::Uno::IntPtr::Zero_;
    }

    if (::g::Uno::IntPtr::op_Inequality(__this->_cgFont, ::g::Uno::IntPtr::Zero_))
    {
        __this->CGFontRelease(__this->_cgFont);
        __this->_cgFont = ::g::Uno::IntPtr::Zero_;
    }
}

// private float GetAscender(ObjC.Object uiFont)
void CoreTextFont__GetAscender_fn(CoreTextFont* __this, ::g::ObjC::Object* uiFont, float* __retval)
{
    *__retval = __this->GetAscender(uiFont);
}

// private static Uno.IntPtr GetCTFont(ObjC.Object font)
void CoreTextFont__GetCTFont_fn(::g::ObjC::Object* font, void** __retval)
{
    *__retval = CoreTextFont::GetCTFont(font);
}

// private float GetDescender(ObjC.Object uiFont)
void CoreTextFont__GetDescender_fn(CoreTextFont* __this, ::g::ObjC::Object* uiFont, float* __retval)
{
    *__retval = __this->GetDescender(uiFont);
}

// private float GetLineHeight(ObjC.Object uiFont)
void CoreTextFont__GetLineHeight_fn(CoreTextFont* __this, ::g::ObjC::Object* uiFont, float* __retval)
{
    *__retval = __this->GetLineHeight(uiFont);
}

// private int GetNumGlyphs(Uno.IntPtr cgFont)
void CoreTextFont__GetNumGlyphs_fn(CoreTextFont* __this, void** cgFont, int32_t* __retval)
{
    *__retval = __this->GetNumGlyphs(*cgFont);
}

// public override sealed float get_LineHeight()
void CoreTextFont__get_LineHeight_fn(CoreTextFont* __this, float* __retval)
{
    return *__retval = __this->GetLineHeight(__this->_uiFont), void();
}

// internal CoreTextFont New(Uno.IntPtr hbFace, Uno.IntPtr cgFont, ObjC.Object uiFont, int pixelSize)
void CoreTextFont__New1_fn(void** hbFace, void** cgFont, ::g::ObjC::Object* uiFont, int32_t* pixelSize, CoreTextFont** __retval)
{
    *__retval = CoreTextFont::New1(*hbFace, *cgFont, uiFont, *pixelSize);
}

// public override sealed int get_NumGlyphs()
void CoreTextFont__get_NumGlyphs_fn(CoreTextFont* __this, int32_t* __retval)
{
    return *__retval = __this->GetNumGlyphs(__this->_cgFont), void();
}

// public override sealed int get_PixelSize()
void CoreTextFont__get_PixelSize_fn(CoreTextFont* __this, int32_t* __retval)
{
    return *__retval = __this->_pixelSize, void();
}

// public override sealed Fuse.Text.RenderedGlyph Render(Fuse.Text.Glyph glyph)
void CoreTextFont__Render_fn(CoreTextFont* __this, ::g::Fuse::Text::Glyph* glyph, ::g::Fuse::Text::RenderedGlyph* __retval)
{
    uStackFrame __("Fuse.Text.Implementation.CoreTextFont", "Render(Fuse.Text.Glyph)");
    ::g::Fuse::Text::Glyph glyph_ = *glyph;
    ::g::Uno::Int2 size;
    ::g::Uno::Float2 offset;
    uArray* data = __this->Render1(CoreTextFont::GetCTFont(__this->_uiFont), glyph_.Index, &size, &offset);
    uArray* grayscale = CoreTextFont::TryConvertRGBAToL8(data);
    ::g::Uno::Content::Images::Bitmap* bitmap = (grayscale == NULL) ? (::g::Uno::Content::Images::Bitmap*)::g::Uno::Content::Images::Bitmap::New1(size, 3, ::g::Uno::Buffer::New1(data)) : (::g::Uno::Content::Images::Bitmap*)::g::Uno::Content::Images::Bitmap::New1(size, 1, ::g::Uno::Buffer::New1(grayscale));
    return *__retval = ::g::Fuse::Text::RenderedGlyph__New1(bitmap, ::g::Uno::Float2__New2(offset.X, (((__this->LineHeight() - __this->Ascender()) - __this->Descender()) - offset.Y) - (float)size.Y), 1.0f), void();
}

// private byte[] Render(Uno.IntPtr rawFont, uint index, int2& size, float2& offset)
void CoreTextFont__Render1_fn(CoreTextFont* __this, void** rawFont, uint32_t* index, ::g::Uno::Int2* size, ::g::Uno::Float2* offset, uArray** __retval)
{
    *__retval = __this->Render1(*rawFont, *index, size, offset);
}

// protected override sealed float get_Scale()
void CoreTextFont__get_Scale_fn(CoreTextFont* __this, float* __retval)
{
    return *__retval = 64.0f, void();
}

// private static byte[] TryConvertRGBAToL8(byte[] buffer)
void CoreTextFont__TryConvertRGBAToL8_fn(uArray* buffer, uArray** __retval)
{
    *__retval = CoreTextFont::TryConvertRGBAToL8(buffer);
}

// internal CoreTextFont(Uno.IntPtr hbFace, Uno.IntPtr cgFont, ObjC.Object uiFont, int pixelSize) [instance]
void CoreTextFont::ctor_2(void* hbFace, void* cgFont, ::g::ObjC::Object* uiFont, int32_t pixelSize)
{
    ctor_1(::g::Fuse::Text::Implementation::Harfbuzz::font_create(hbFace));
    _hbFace = hbFace;
    _cgFont = cgFont;
    _uiFont = uiFont;
    _pixelSize = pixelSize;
    ::g::Fuse::Text::Implementation::Harfbuzz::font_set_scale(_hbFont, pixelSize, pixelSize);
}

// private void CGFontRelease(Uno.IntPtr cgFont) [instance]
void CoreTextFont::CGFontRelease(void* cgFont)
{
    @autoreleasepool
    {
        ::CGFontRelease((CGFontRef)cgFont);
    }
    
}

// private float GetAscender(ObjC.Object uiFont) [instance]
float CoreTextFont::GetAscender(::g::ObjC::Object* uiFont)
{
    @autoreleasepool
    {
        return [] (::id uiFont) -> float
        {
            return ((UIFont*)uiFont).ascender;
        } (::g::ObjC::Object::GetHandle(uiFont));
        
    }
    
}

// private float GetDescender(ObjC.Object uiFont) [instance]
float CoreTextFont::GetDescender(::g::ObjC::Object* uiFont)
{
    @autoreleasepool
    {
        return [] (::id uiFont) -> float
        {
            return - ((UIFont*)uiFont).descender;
        } (::g::ObjC::Object::GetHandle(uiFont));
        
    }
    
}

// private float GetLineHeight(ObjC.Object uiFont) [instance]
float CoreTextFont::GetLineHeight(::g::ObjC::Object* uiFont)
{
    @autoreleasepool
    {
        return [] (::id uiFont) -> float
        {
            return ((UIFont*)uiFont).lineHeight;
        } (::g::ObjC::Object::GetHandle(uiFont));
        
    }
    
}

// private int GetNumGlyphs(Uno.IntPtr cgFont) [instance]
int32_t CoreTextFont::GetNumGlyphs(void* cgFont)
{
    return (int32_t)CGFontGetNumberOfGlyphs((CGFontRef)cgFont);
}

// private byte[] Render(Uno.IntPtr rawFont, uint index, int2& size, float2& offset) [instance]
uArray* CoreTextFont::Render1(void* rawFont, uint32_t index, ::g::Uno::Int2* size, ::g::Uno::Float2* offset)
{
    CTFontRef font = (CTFontRef)rawFont;
    CGGlyph glyph = (CGGlyph)index;
    CGRect boundingRect;
    
    CTFontGetBoundingRectsForGlyphs(font, kCTFontDefaultOrientation, &glyph, &boundingRect, 1);
    
    int width = (int)::g::Uno::Math::Ceil1(boundingRect.size.width) + 2;
    int height = (int)::g::Uno::Math::Ceil1(boundingRect.size.height) + 2;
    CGPoint originFloor = CGPointMake(
    	::g::Uno::Math::Floor1(boundingRect.origin.x) - 1.0f,
    	::g::Uno::Math::Floor1(boundingRect.origin.y) - 1.0f);
    
    *size = ::g::Uno::Int2__New2(width, height);
    *offset = ::g::Uno::Float2__New2(originFloor.x, originFloor.y);
    
    int bytesPerRow = width * 4;
    int byteSize = bytesPerRow * height;
    uArray* data = uArray::New(::g::Uno::Byte_typeof()->Array(), byteSize);
    
    if (width * height > 4)
    {
    	CGColorSpaceRef colorSpace = CGColorSpaceCreateDeviceRGB();
    
    	CGContextRef context = CGBitmapContextCreate(
    		data->Ptr(),
    		width,
    		height,
    		8,
    		bytesPerRow,
    		colorSpace,
    		kCGImageAlphaPremultipliedLast);
    
    	CGPoint position = CGPointMake(-originFloor.x, -originFloor.y);
    	CTFontDrawGlyphs(font, &glyph, &position, 1, context);
    
    	CGColorSpaceRelease(colorSpace);
    	CGContextRelease(context);
    }
    
    return data;
}

// private static Uno.IntPtr GetCTFont(ObjC.Object font) [static]
void* CoreTextFont::GetCTFont(::g::ObjC::Object* font)
{
    @autoreleasepool
    {
        return [] (::id font) -> void*
        {
            return (void*)(__bridge CTFontRef)(UIFont*)font;
        } (::g::ObjC::Object::GetHandle(font));
        
    }
    
}

// internal CoreTextFont New(Uno.IntPtr hbFace, Uno.IntPtr cgFont, ObjC.Object uiFont, int pixelSize) [static]
CoreTextFont* CoreTextFont::New1(void* hbFace, void* cgFont, ::g::ObjC::Object* uiFont, int32_t pixelSize)
{
    CoreTextFont* obj2 = (CoreTextFont*)uNew(CoreTextFont_typeof());
    obj2->ctor_2(hbFace, cgFont, uiFont, pixelSize);
    return obj2;
}

// private static byte[] TryConvertRGBAToL8(byte[] buffer) [static]
uArray* CoreTextFont::TryConvertRGBAToL8(uArray* buffer)
{
    uStackFrame __("Fuse.Text.Implementation.CoreTextFont", "TryConvertRGBAToL8(byte[])");
    int32_t assert1;
    int32_t stride = 4;
    assert1 = uPtr(buffer)->Length() % stride;
    ::g::Uno::Diagnostics::Debug::Assert(assert1 == 0, ::STRINGS[0/*"(buffer.Len...*/], ::STRINGS[1/*"/usr/local/...*/], 171, uArray::Init<uObject*>(::TYPES[0/*object[]*/], 2, uBox<int32_t>(::g::Uno::Int_typeof(), assert1), uBox<int32_t>(::g::Uno::Int_typeof(), 0)));
    int32_t len = buffer->Length() / 4;
    uArray* result = uArray::New(::TYPES[1/*byte[]*/], len);

    for (int32_t i = 0; i < len; ++i)
    {
        int32_t pos = i * stride;
        uint8_t r = uPtr(buffer)->Item<uint8_t>(pos);
        uint8_t g = buffer->Item<uint8_t>(pos + 1);
        uint8_t b = buffer->Item<uint8_t>(pos + 2);
        uint8_t a = buffer->Item<uint8_t>(pos + 3);

        if (((r != 0) || (g != 0)) || (b != 0))
            return NULL;

        uPtr(result)->Item<uint8_t>(i) = a;
    }

    return result;
}
// }

// /usr/local/share/uno/Packages/Fuse.Text/1.12.0/Implementation/CoreTextFontFace.uno
// ----------------------------------------------------------------------------------

// internal sealed extern class CoreTextFontFace
// {
static void CoreTextFontFace_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Internal::iOSSystemFont_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Text::FontFace_type, interface0));
    type->SetFields(1,
        ::g::ObjC::Object_typeof(), offsetof(CoreTextFontFace, _descriptor), 0);
}

::g::Fuse::Text::FontFace_type* CoreTextFontFace_typeof()
{
    static uSStrong< ::g::Fuse::Text::FontFace_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Text::FontFace_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(CoreTextFontFace);
    options.TypeSize = sizeof(::g::Fuse::Text::FontFace_type);
    type = (::g::Fuse::Text::FontFace_type*)uClassType::New("Fuse.Text.Implementation.CoreTextFontFace", options);
    type->fp_build_ = CoreTextFontFace_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Text::FontFace*))CoreTextFontFace__Dispose_fn;
    type->fp_GetOfPixelSizeInternal = (void(*)(::g::Fuse::Text::FontFace*, int32_t*, ::g::Fuse::Text::Font**))CoreTextFontFace__GetOfPixelSizeInternal_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))CoreTextFontFace__Dispose_fn;
    return type;
}

// public CoreTextFontFace(string fileName, int index, Uno.Predicate<string> stylePredicate)
void CoreTextFontFace__ctor_1_fn(CoreTextFontFace* __this, uString* fileName, int32_t* index, uDelegate* stylePredicate)
{
    __this->ctor_1(fileName, *index, stylePredicate);
}

// private static Uno.IntPtr CreateCGFont(ObjC.Object uiFont)
void CoreTextFontFace__CreateCGFont_fn(::g::ObjC::Object* uiFont, void** __retval)
{
    *__retval = CoreTextFontFace::CreateCGFont(uiFont);
}

// private static ObjC.Object CreateFont(ObjC.Object descriptor, int pixelSize)
void CoreTextFontFace__CreateFont_fn(::g::ObjC::Object* descriptor, int32_t* pixelSize, ::g::ObjC::Object** __retval)
{
    *__retval = CoreTextFontFace::CreateFont(descriptor, *pixelSize);
}

// public override sealed void Dispose()
void CoreTextFontFace__Dispose_fn(CoreTextFontFace* __this)
{
    uStackFrame __("Fuse.Text.Implementation.CoreTextFontFace", "Dispose()");
    ::g::Fuse::Text::FontFace__Dispose_fn(__this);
    __this->_descriptor = NULL;
}

// private override sealed Fuse.Text.Font GetOfPixelSizeInternal(int pixelSize)
void CoreTextFontFace__GetOfPixelSizeInternal_fn(CoreTextFontFace* __this, int32_t* pixelSize, ::g::Fuse::Text::Font** __retval)
{
    int32_t pixelSize_ = *pixelSize;
    ::g::ObjC::Object* uiFont = CoreTextFontFace::CreateFont(__this->_descriptor, pixelSize_);
    void* cgFont = CoreTextFontFace::CreateCGFont(uiFont);
    void* hbFace = ::g::Fuse::Text::Implementation::Harfbuzz::ct_face_create(cgFont);
    return *__retval = ::g::Fuse::Text::Implementation::CoreTextFont::New1(hbFace, cgFont, uiFont, pixelSize_), void();
}

// public CoreTextFontFace New(string fileName, int index, Uno.Predicate<string> stylePredicate)
void CoreTextFontFace__New1_fn(uString* fileName, int32_t* index, uDelegate* stylePredicate, CoreTextFontFace** __retval)
{
    *__retval = CoreTextFontFace::New1(fileName, *index, stylePredicate);
}

// public CoreTextFontFace(string fileName, int index, Uno.Predicate<string> stylePredicate) [instance]
void CoreTextFontFace::ctor_1(uString* fileName, int32_t index, uDelegate* stylePredicate)
{
    uStackFrame __("Fuse.Text.Implementation.CoreTextFontFace", ".ctor(string,int,Uno.Predicate<string>)");
    ctor_();
    _descriptor = ::g::Fuse::Internal::iOSSystemFont::GetMatchingUIFontDescriptor(fileName, index, stylePredicate);
}

// private static Uno.IntPtr CreateCGFont(ObjC.Object uiFont) [static]
void* CoreTextFontFace::CreateCGFont(::g::ObjC::Object* uiFont)
{
    @autoreleasepool
    {
        return [] (::id uiFont) -> void*
        {
            return CTFontCopyGraphicsFont((__bridge CTFontRef)(UIFont*)uiFont, NULL);
        } (::g::ObjC::Object::GetHandle(uiFont));
        
    }
    
}

// private static ObjC.Object CreateFont(ObjC.Object descriptor, int pixelSize) [static]
::g::ObjC::Object* CoreTextFontFace::CreateFont(::g::ObjC::Object* descriptor, int32_t pixelSize)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id descriptor, int32_t pixelSize) -> ::id
        {
            // float pointSize = (float)pixelSize * 0.75f;
            return [UIFont fontWithDescriptor:(UIFontDescriptor*)descriptor size:pixelSize];
        } (::g::ObjC::Object::GetHandle(descriptor), pixelSize));
        
    }
    
}

// public CoreTextFontFace New(string fileName, int index, Uno.Predicate<string> stylePredicate) [static]
CoreTextFontFace* CoreTextFontFace::New1(uString* fileName, int32_t index, uDelegate* stylePredicate)
{
    CoreTextFontFace* obj1 = (CoreTextFontFace*)uNew(CoreTextFontFace_typeof());
    obj1->ctor_1(fileName, index, stylePredicate);
    return obj1;
}
// }

}}}} // ::g::Fuse::Text::Implementation
