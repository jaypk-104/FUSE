// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/HttpMessageHandler.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandler__StaticData;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// internal static class HttpMessageHandler.StaticData
// {
uClassType* HttpMessageHandler__StaticData_typeof();
void HttpMessageHandler__StaticData__DecrementPendingRequests_fn();
void HttpMessageHandler__StaticData__IncrementPendingRequests_fn();

struct HttpMessageHandler__StaticData : uObject
{
    static uSStrong<uObject*> _syncLock_;
    static uSStrong<uObject*>& _syncLock() { return HttpMessageHandler__StaticData_typeof()->Init(), _syncLock_; }

    static void DecrementPendingRequests();
    static void IncrementPendingRequests();
};
// }

}}}} // ::g::Uno::Net::Http
