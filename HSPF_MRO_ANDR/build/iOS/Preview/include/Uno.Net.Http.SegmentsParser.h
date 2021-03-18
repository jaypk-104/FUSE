// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/UriParsers/SegmentsParser.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct SegmentsParser;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// internal sealed class SegmentsParser
// {
uType* SegmentsParser_typeof();
void SegmentsParser__EscapeSegment_fn(uString* stringToEscape, uString** __retval);
void SegmentsParser__EscapeSegmentSymbol_fn(uint8_t* symbol, bool* __retval);
void SegmentsParser__Parse_fn(uString* uriString, int32_t* idx, int32_t* endIdx, int32_t* startPartIdx, uArray** __retval);
void SegmentsParser__ParseAbsolutePath_fn(uString* uriString, int32_t* idx, int32_t* endIdx, int32_t* startPartIdx, uString** __retval);
void SegmentsParser__SplitSegments_fn(uString* absolutePath, uArray** __retval);

struct SegmentsParser : uObject
{
    static uString* EscapeSegment(uString* stringToEscape);
    static bool EscapeSegmentSymbol(uint8_t symbol);
    static uArray* Parse(uString* uriString, int32_t idx, int32_t endIdx, int32_t* startPartIdx);
    static uString* ParseAbsolutePath(uString* uriString, int32_t idx, int32_t endIdx, int32_t* startPartIdx);
    static uArray* SplitSegments(uString* absolutePath);
};
// }

}}}} // ::g::Uno::Net::Http
