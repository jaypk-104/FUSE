// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.12.0/Implementation/CoreTextFontFace.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Text.FontFace.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct CoreTextFontFace;}}}}
namespace g{namespace Fuse{namespace Text{struct Font;}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// internal sealed extern class CoreTextFontFace
// {
::g::Fuse::Text::FontFace_type* CoreTextFontFace_typeof();
void CoreTextFontFace__ctor_1_fn(CoreTextFontFace* __this, uString* fileName, int32_t* index, uDelegate* stylePredicate);
void CoreTextFontFace__CreateCGFont_fn(::g::ObjC::Object* uiFont, void** __retval);
void CoreTextFontFace__CreateFont_fn(::g::ObjC::Object* descriptor, int32_t* pixelSize, ::g::ObjC::Object** __retval);
void CoreTextFontFace__Dispose_fn(CoreTextFontFace* __this);
void CoreTextFontFace__GetOfPixelSizeInternal_fn(CoreTextFontFace* __this, int32_t* pixelSize, ::g::Fuse::Text::Font** __retval);
void CoreTextFontFace__New1_fn(uString* fileName, int32_t* index, uDelegate* stylePredicate, CoreTextFontFace** __retval);

struct CoreTextFontFace : ::g::Fuse::Text::FontFace
{
    uStrong< ::g::ObjC::Object*> _descriptor;

    void ctor_1(uString* fileName, int32_t index, uDelegate* stylePredicate);
    static void* CreateCGFont(::g::ObjC::Object* uiFont);
    static ::g::ObjC::Object* CreateFont(::g::ObjC::Object* descriptor, int32_t pixelSize);
    static CoreTextFontFace* New1(uString* fileName, int32_t index, uDelegate* stylePredicate);
};
// }

}}}} // ::g::Fuse::Text::Implementation
