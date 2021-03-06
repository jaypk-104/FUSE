// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.12.0/TextControls/FuseTextRenderer/FuseTextRenderer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.ITextRenderer.h>
#include <Fuse.Internal.CacheItem-2.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct CacheState;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct TextControlData;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct TextRenderer;}}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Fuse{namespace Internal{struct Cache;}}}
namespace g{namespace Fuse{namespace Internal{struct FontFaceDescriptor;}}}
namespace g{namespace Fuse{namespace Text{struct Font;}}}
namespace g{namespace Fuse{namespace Text{struct FontFace;}}}
namespace g{namespace Fuse{namespace Triggers{struct BusyTask;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FuseTextRenderer{

// internal sealed class TextRenderer
// {
struct TextRenderer_type : uType
{
    ::g::Fuse::Controls::ITextRenderer interface0;
};

TextRenderer_type* TextRenderer_typeof();
void TextRenderer__ctor__fn(TextRenderer* __this, ::g::Fuse::Controls::TextControl* control, bool* loadAsync);
void TextRenderer__Arrange_fn(TextRenderer* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* size);
void TextRenderer__AsyncMeasurementsDone_fn(TextRenderer* __this, ::g::Fuse::Controls::FuseTextRenderer::CacheState* state);
void TextRenderer__CreateTextControlData_fn(TextRenderer* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* __retval);
void TextRenderer__CreateTextControlData1_fn(TextRenderer* __this, float* pointWidth, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* __retval);
void TextRenderer__Draw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where);
void TextRenderer__get_Font_fn(TextRenderer* __this, ::g::Fuse::Internal::CacheItem* __retval);
void TextRenderer__set_Font_fn(TextRenderer* __this, ::g::Fuse::Internal::CacheItem* value);
void TextRenderer__get_FontFace_fn(TextRenderer* __this, ::g::Fuse::Internal::CacheItem* __retval);
void TextRenderer__set_FontFace_fn(TextRenderer* __this, ::g::Fuse::Internal::CacheItem* value);
void TextRenderer__GetContentSize_fn(TextRenderer* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void TextRenderer__GetFallbackFontFace_fn(::g::Uno::Collections::List* descriptors, ::g::Fuse::Text::FontFace** __retval);
void TextRenderer__GetFontFace_fn(::g::Fuse::Internal::FontFaceDescriptor* descriptor, ::g::Fuse::Text::FontFace** __retval);
void TextRenderer__GetRenderBounds_fn(TextRenderer* __this, ::g::Uno::Rect* __retval);
void TextRenderer__Invalidate_fn(TextRenderer* __this);
void TextRenderer__New1_fn(::g::Fuse::Controls::TextControl* control, bool* loadAsync, TextRenderer** __retval);
void TextRenderer__SoftDispose_fn(TextRenderer* __this);
void TextRenderer__UpdateFont_fn(TextRenderer* __this);

struct TextRenderer : uObject
{
    static uSStrong< ::g::Fuse::Internal::Cache*> _fallbackFontCache_;
    static uSStrong< ::g::Fuse::Internal::Cache*>& _fallbackFontCache() { return TextRenderer_typeof()->Init(), _fallbackFontCache_; }
    static uSStrong< ::g::Fuse::Internal::Cache*> _fontCache_;
    static uSStrong< ::g::Fuse::Internal::Cache*>& _fontCache() { return TextRenderer_typeof()->Init(), _fontCache_; }
    uStrong< ::g::Fuse::Controls::TextControl*> _control;
    uStrong< ::g::Fuse::Font*> _fuseFont;
    ::g::Fuse::Internal::CacheItem _fontFace;
    ::g::Fuse::Internal::CacheItem _font;
    int32_t _fontSize;
    float _ascender;
    ::g::Uno::Float2 _arrangePosition;
    ::g::Uno::Float2 _arrangeSize;
    uStrong< ::g::Fuse::Controls::FuseTextRenderer::CacheState*> _cacheState;
    bool _loadAsync;
    uStrong< ::g::Fuse::Triggers::BusyTask*> _busyTask;

    void ctor_(::g::Fuse::Controls::TextControl* control, bool loadAsync);
    void Arrange(::g::Uno::Float2 position, ::g::Uno::Float2 size);
    void AsyncMeasurementsDone(::g::Fuse::Controls::FuseTextRenderer::CacheState* state);
    ::g::Fuse::Controls::FuseTextRenderer::TextControlData CreateTextControlData();
    ::g::Fuse::Controls::FuseTextRenderer::TextControlData CreateTextControlData1(float pointWidth);
    void Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where);
    ::g::Fuse::Internal::CacheItem Font();
    void Font(::g::Fuse::Internal::CacheItem value);
    ::g::Fuse::Internal::CacheItem FontFace();
    void FontFace(::g::Fuse::Internal::CacheItem value);
    ::g::Uno::Float2 GetContentSize(::g::Fuse::LayoutParams lp);
    ::g::Uno::Rect GetRenderBounds();
    void Invalidate();
    void SoftDispose();
    void UpdateFont();
    static ::g::Fuse::Text::FontFace* GetFallbackFontFace(::g::Uno::Collections::List* descriptors);
    static ::g::Fuse::Text::FontFace* GetFontFace(::g::Fuse::Internal::FontFaceDescriptor* descriptor);
    static TextRenderer* New1(::g::Fuse::Controls::TextControl* control, bool loadAsync);
};
// }

}}}} // ::g::Fuse::Controls::FuseTextRenderer
