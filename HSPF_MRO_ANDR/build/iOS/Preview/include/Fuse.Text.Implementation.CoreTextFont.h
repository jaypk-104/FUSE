// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.12.0/Implementation/CoreTextFontFace.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Text.Implementation.HarfbuzzFont.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct CoreTextFont;}}}}
namespace g{namespace Fuse{namespace Text{struct Glyph;}}}
namespace g{namespace Fuse{namespace Text{struct RenderedGlyph;}}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// internal sealed extern class CoreTextFont
// {
::g::Fuse::Text::Implementation::HarfbuzzFont_type* CoreTextFont_typeof();
void CoreTextFont__ctor_2_fn(CoreTextFont* __this, void** hbFace, void** cgFont, ::g::ObjC::Object* uiFont, int32_t* pixelSize);
void CoreTextFont__get_Ascender_fn(CoreTextFont* __this, float* __retval);
void CoreTextFont__CGFontRelease_fn(CoreTextFont* __this, void** cgFont);
void CoreTextFont__get_Descender_fn(CoreTextFont* __this, float* __retval);
void CoreTextFont__Dispose_fn(CoreTextFont* __this);
void CoreTextFont__GetAscender_fn(CoreTextFont* __this, ::g::ObjC::Object* uiFont, float* __retval);
void CoreTextFont__GetCTFont_fn(::g::ObjC::Object* font, void** __retval);
void CoreTextFont__GetDescender_fn(CoreTextFont* __this, ::g::ObjC::Object* uiFont, float* __retval);
void CoreTextFont__GetLineHeight_fn(CoreTextFont* __this, ::g::ObjC::Object* uiFont, float* __retval);
void CoreTextFont__GetNumGlyphs_fn(CoreTextFont* __this, void** cgFont, int32_t* __retval);
void CoreTextFont__get_LineHeight_fn(CoreTextFont* __this, float* __retval);
void CoreTextFont__New1_fn(void** hbFace, void** cgFont, ::g::ObjC::Object* uiFont, int32_t* pixelSize, CoreTextFont** __retval);
void CoreTextFont__get_NumGlyphs_fn(CoreTextFont* __this, int32_t* __retval);
void CoreTextFont__get_PixelSize_fn(CoreTextFont* __this, int32_t* __retval);
void CoreTextFont__Render_fn(CoreTextFont* __this, ::g::Fuse::Text::Glyph* glyph, ::g::Fuse::Text::RenderedGlyph* __retval);
void CoreTextFont__Render1_fn(CoreTextFont* __this, void** rawFont, uint32_t* index, ::g::Uno::Int2* size, ::g::Uno::Float2* offset, uArray** __retval);
void CoreTextFont__get_Scale_fn(CoreTextFont* __this, float* __retval);
void CoreTextFont__TryConvertRGBAToL8_fn(uArray* buffer, uArray** __retval);

struct CoreTextFont : ::g::Fuse::Text::Implementation::HarfbuzzFont
{
    uStrong< ::g::ObjC::Object*> _uiFont;
    void* _cgFont;
    void* _hbFace;
    int32_t _pixelSize;

    void ctor_2(void* hbFace, void* cgFont, ::g::ObjC::Object* uiFont, int32_t pixelSize);
    void CGFontRelease(void* cgFont);
    float GetAscender(::g::ObjC::Object* uiFont);
    float GetDescender(::g::ObjC::Object* uiFont);
    float GetLineHeight(::g::ObjC::Object* uiFont);
    int32_t GetNumGlyphs(void* cgFont);
    uArray* Render1(void* rawFont, uint32_t index, ::g::Uno::Int2* size, ::g::Uno::Float2* offset);
    static void* GetCTFont(::g::ObjC::Object* font);
    static CoreTextFont* New1(void* hbFace, void* cgFont, ::g::ObjC::Object* uiFont, int32_t pixelSize);
    static uArray* TryConvertRGBAToL8(uArray* buffer);
};
// }

}}}} // ::g::Fuse::Text::Implementation
