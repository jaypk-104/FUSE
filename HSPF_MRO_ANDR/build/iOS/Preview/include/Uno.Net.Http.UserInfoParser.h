// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/UriParsers/UserInfoParser.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct UserInfoParser;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// internal sealed class UserInfoParser
// {
uType* UserInfoParser_typeof();
void UserInfoParser__IsValid_fn(uString* userInfo, bool* __retval);
void UserInfoParser__Parse_fn(uString* uriString, int32_t* endIdx, int32_t* idx, uString** __retval);

struct UserInfoParser : uObject
{
    static bool IsValid(uString* userInfo);
    static uString* Parse(uString* uriString, int32_t endIdx, int32_t* idx);
};
// }

}}}} // ::g::Uno::Net::Http
