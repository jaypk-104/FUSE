// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.12.0/Truncate.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{struct Font;}}}
namespace g{namespace Fuse{namespace Text{struct ShapedRun;}}}
namespace g{namespace Fuse{namespace Text{struct Truncate;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Text{

// public static class Truncate
// {
uClassType* Truncate_typeof();
void Truncate__Line_fn(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* lineRuns, float* maxPixelWidth, float* minTolerance, float* maxTolerance, ::g::Uno::Collections::List** __retval);
void Truncate__Lines_fn(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* lines, float* maxPixelWidth, float* minTolerance, float* maxTolerance, ::g::Uno::Collections::List** __retval);
void Truncate__TruncatedLine_fn(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* lineRuns, float* maxPixelWidth, float* minTolerance, float* maxTolerance, ::g::Uno::Float2* pos, int32_t* runIndex, int32_t* i, ::g::Uno::Collections::List** __retval);

struct Truncate : uObject
{
    static ::g::Uno::Collections::List* Line(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* lineRuns, float maxPixelWidth, float* minTolerance, float* maxTolerance);
    static ::g::Uno::Collections::List* Lines(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* lines, float maxPixelWidth, float* minTolerance, float* maxTolerance);
    static ::g::Uno::Collections::List* TruncatedLine(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* lineRuns, float maxPixelWidth, float* minTolerance, float* maxTolerance, ::g::Uno::Float2 pos, int32_t runIndex, int32_t i);
};
// }

}}} // ::g::Fuse::Text
