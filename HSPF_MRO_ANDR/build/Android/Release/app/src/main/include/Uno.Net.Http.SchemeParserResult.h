// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/UriParsers/SchemeParser.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct SchemeParserResult;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// internal struct SchemeParserResult
// {
uStructType* SchemeParserResult_typeof();

struct SchemeParserResult
{
    int32_t Type;
    uStrong<uString*> Scheme;
};
// }

}}}} // ::g::Uno::Net::Http
