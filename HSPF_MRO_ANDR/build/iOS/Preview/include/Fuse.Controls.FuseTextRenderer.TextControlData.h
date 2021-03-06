// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.12.0/TextControls/FuseTextRenderer/CacheState.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct TextControlData;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct Tolerances;}}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Fuse{namespace Text{struct Font;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FuseTextRenderer{

// internal struct TextControlData
// {
uStructType* TextControlData_typeof();
void TextControlData__ctor_1_fn(TextControlData* __this, ::g::Fuse::Text::Font* font, ::g::Fuse::Controls::TextControl* control, float* pixelWidth);
void TextControlData__New1_fn(::g::Fuse::Text::Font* font, ::g::Fuse::Controls::TextControl* control, float* pixelWidth, TextControlData* __retval);
void TextControlData__Subsumes_fn(TextControlData* __this, TextControlData* other, ::g::Fuse::Controls::FuseTextRenderer::Tolerances* tolerances, bool* measureOnly, bool* __retval);

struct TextControlData
{
    uStrong< ::g::Fuse::Text::Font*> Font;
    uStrong<uString*> RenderValue;
    int32_t TextWrapping;
    int32_t TextTruncation;
    int32_t TextAlignment;
    float LineSpacing;
    float PixelWidth;

    void ctor_1(::g::Fuse::Text::Font* font, ::g::Fuse::Controls::TextControl* control, float pixelWidth);
    bool Subsumes(TextControlData other, ::g::Fuse::Controls::FuseTextRenderer::Tolerances tolerances, bool measureOnly);
};

TextControlData TextControlData__New1(::g::Fuse::Text::Font* font, ::g::Fuse::Controls::TextControl* control, float pixelWidth);
// }

}}}} // ::g::Fuse::Controls::FuseTextRenderer
