// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/UriParsers/FragmentParser.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct FragmentParser;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// internal sealed class FragmentParser
// {
uType* FragmentParser_typeof();
void FragmentParser__Parse_fn(uString* uriString, int32_t* idx, int32_t* startPartIdx, uString** __retval);

struct FragmentParser : uObject
{
    static uString* Parse(uString* uriString, int32_t idx, int32_t* startPartIdx);
};
// }

}}}} // ::g::Uno::Net::Http
