// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/UriHelper.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct UriHelper;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// internal sealed class UriHelper
// {
uType* UriHelper_typeof();
void UriHelper__GetHexFromNumber_fn(int32_t* value, char16_t* __retval);

struct UriHelper : uObject
{
    static char16_t GetHexFromNumber(int32_t value);
};
// }

}}}} // ::g::Uno::Net::Http
