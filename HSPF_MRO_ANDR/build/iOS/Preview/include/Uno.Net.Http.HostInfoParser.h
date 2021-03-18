// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/UriParsers/HostInfoParser.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HostInfo;}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HostInfoParser;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// internal sealed class HostInfoParser
// {
uType* HostInfoParser_typeof();
void HostInfoParser__ExtractPort_fn(uString* portString, int32_t* defaultPort, int32_t* __retval);
void HostInfoParser__GetDafaultPort_fn(uString* scheme, int32_t* __retval);
void HostInfoParser__IsHostValid_fn(uString* userInfo, bool* __retval);
void HostInfoParser__Parse_fn(uString* uriString, uString* scheme, int32_t* endIdx, int32_t* idx, ::g::Uno::Net::Http::HostInfo** __retval);

struct HostInfoParser : uObject
{
    static uSStrong< ::g::Uno::Collections::List*> _invalidChars_;
    static uSStrong< ::g::Uno::Collections::List*>& _invalidChars() { return HostInfoParser_typeof()->Init(), _invalidChars_; }

    static int32_t ExtractPort(uString* portString, int32_t defaultPort);
    static int32_t GetDafaultPort(uString* scheme);
    static bool IsHostValid(uString* userInfo);
    static ::g::Uno::Net::Http::HostInfo* Parse(uString* uriString, uString* scheme, int32_t endIdx, int32_t* idx);
};
// }

}}}} // ::g::Uno::Net::Http
