// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <HttpRequest.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <Uno.Net.Http.Implementation.IHttpRequest.h>
#include <Uno.Net.Http.Implementation.iOSHttpRequest.h>
#include <Uno.Net.Http.Implementation.iOSHttpRequestHandle.h>
#include <Uno.Net.Http.Implementation.iOSHttpSharedCache.h>
#include <Uno.String.h>

namespace g{
namespace Uno{
namespace Net{
namespace Http{
namespace Implementation{

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/Implementation/IHttpRequest.uno
// ---------------------------------------------------------------------------------

// public abstract interface IHttpRequest
// {
uInterfaceType* IHttpRequest_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Net.Http.Implementation.IHttpRequest", 0, 0);
    type->Reflection.SetFunctions(12,
        new uFunction("Abort", NULL, NULL, offsetof(IHttpRequest, fp_Abort), false, uVoid_typeof(), 0),
        new uFunction("EnableCache", NULL, NULL, offsetof(IHttpRequest, fp_EnableCache), false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("GetResponseContentByteArray", NULL, NULL, offsetof(IHttpRequest, fp_GetResponseContentByteArray), false, ::g::Uno::Byte_typeof()->Array(), 0),
        new uFunction("GetResponseContentString", NULL, NULL, offsetof(IHttpRequest, fp_GetResponseContentString), false, ::g::Uno::String_typeof(), 0),
        new uFunction("GetResponseHeader", NULL, NULL, offsetof(IHttpRequest, fp_GetResponseHeader), false, ::g::Uno::String_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("GetResponseHeaders", NULL, NULL, offsetof(IHttpRequest, fp_GetResponseHeaders), false, ::g::Uno::String_typeof(), 0),
        new uFunction("GetResponseStatus", NULL, NULL, offsetof(IHttpRequest, fp_GetResponseStatus), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("SendAsync", NULL, NULL, offsetof(IHttpRequest, fp_SendAsync), false, uVoid_typeof(), 0),
        new uFunction("SendAsync", NULL, NULL, offsetof(IHttpRequest, fp_SendAsync1), false, uVoid_typeof(), 1, ::g::Uno::Byte_typeof()->Array()),
        new uFunction("SendAsync", NULL, NULL, offsetof(IHttpRequest, fp_SendAsync2), false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("SetHeader", NULL, NULL, offsetof(IHttpRequest, fp_SetHeader), false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("SetTimeout", NULL, NULL, offsetof(IHttpRequest, fp_SetTimeout), false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/Implementation/iOS/iOSHttpRequest.uno
// ---------------------------------------------------------------------------------------

// internal sealed extern class iOSHttpRequest
// {
static void iOSHttpRequest_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof(), offsetof(iOSHttpRequest_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(iOSHttpRequest_type, interface1));
    type->SetFields(0,
        ::g::Uno::Net::Http::Implementation::iOSHttpRequestHandle_typeof(), offsetof(iOSHttpRequest, _requestHandle), 0);
}

iOSHttpRequest_type* iOSHttpRequest_typeof()
{
    static uSStrong<iOSHttpRequest_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(iOSHttpRequest);
    options.TypeSize = sizeof(iOSHttpRequest_type);
    type = (iOSHttpRequest_type*)uClassType::New("Uno.Net.Http.Implementation.iOSHttpRequest", options);
    type->fp_build_ = iOSHttpRequest_build;
    type->interface0.fp_EnableCache = (void(*)(uObject*, bool*))iOSHttpRequest__EnableCache_fn;
    type->interface0.fp_SetHeader = (void(*)(uObject*, uString*, uString*))iOSHttpRequest__SetHeader_fn;
    type->interface0.fp_SetTimeout = (void(*)(uObject*, int32_t*))iOSHttpRequest__SetTimeout_fn;
    type->interface0.fp_SendAsync1 = (void(*)(uObject*, uArray*))iOSHttpRequest__SendAsync1_fn;
    type->interface0.fp_SendAsync2 = (void(*)(uObject*, uString*))iOSHttpRequest__SendAsync2_fn;
    type->interface0.fp_SendAsync = (void(*)(uObject*))iOSHttpRequest__SendAsync_fn;
    type->interface0.fp_Abort = (void(*)(uObject*))iOSHttpRequest__Abort_fn;
    type->interface0.fp_GetResponseStatus = (void(*)(uObject*, int32_t*))iOSHttpRequest__GetResponseStatus_fn;
    type->interface0.fp_GetResponseHeader = (void(*)(uObject*, uString*, uString**))iOSHttpRequest__GetResponseHeader_fn;
    type->interface0.fp_GetResponseHeaders = (void(*)(uObject*, uString**))iOSHttpRequest__GetResponseHeaders_fn;
    type->interface0.fp_GetResponseContentString = (void(*)(uObject*, uString**))iOSHttpRequest__GetResponseContentString_fn;
    type->interface0.fp_GetResponseContentByteArray = (void(*)(uObject*, uArray**))iOSHttpRequest__GetResponseContentByteArray_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))iOSHttpRequest__Dispose_fn;
    return type;
}

// internal iOSHttpRequest(Uno.Net.Http.HttpMessageHandlerRequest request, string method, string url)
void iOSHttpRequest__ctor__fn(iOSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, uString* method, uString* url)
{
    __this->ctor_(request, method, url);
}

// public void Abort()
void iOSHttpRequest__Abort_fn(iOSHttpRequest* __this)
{
    __this->Abort();
}

// public void Dispose()
void iOSHttpRequest__Dispose_fn(iOSHttpRequest* __this)
{
    __this->Dispose();
}

// public void EnableCache(bool enableCache)
void iOSHttpRequest__EnableCache_fn(iOSHttpRequest* __this, bool* enableCache)
{
    __this->EnableCache(*enableCache);
}

// public byte[] GetResponseContentByteArray()
void iOSHttpRequest__GetResponseContentByteArray_fn(iOSHttpRequest* __this, uArray** __retval)
{
    *__retval = __this->GetResponseContentByteArray();
}

// public string GetResponseContentString()
void iOSHttpRequest__GetResponseContentString_fn(iOSHttpRequest* __this, uString** __retval)
{
    *__retval = __this->GetResponseContentString();
}

// public string GetResponseHeader(string name)
void iOSHttpRequest__GetResponseHeader_fn(iOSHttpRequest* __this, uString* name, uString** __retval)
{
    *__retval = __this->GetResponseHeader(name);
}

// public string GetResponseHeaders()
void iOSHttpRequest__GetResponseHeaders_fn(iOSHttpRequest* __this, uString** __retval)
{
    *__retval = __this->GetResponseHeaders();
}

// public int GetResponseStatus()
void iOSHttpRequest__GetResponseStatus_fn(iOSHttpRequest* __this, int32_t* __retval)
{
    *__retval = __this->GetResponseStatus();
}

// internal iOSHttpRequest New(Uno.Net.Http.HttpMessageHandlerRequest request, string method, string url)
void iOSHttpRequest__New1_fn(::g::Uno::Net::Http::HttpMessageHandlerRequest* request, uString* method, uString* url, iOSHttpRequest** __retval)
{
    *__retval = iOSHttpRequest::New1(request, method, url);
}

// public void SendAsync()
void iOSHttpRequest__SendAsync_fn(iOSHttpRequest* __this)
{
    __this->SendAsync();
}

// public void SendAsync(byte[] data)
void iOSHttpRequest__SendAsync1_fn(iOSHttpRequest* __this, uArray* data)
{
    __this->SendAsync1(data);
}

// public void SendAsync(string data)
void iOSHttpRequest__SendAsync2_fn(iOSHttpRequest* __this, uString* data)
{
    __this->SendAsync2(data);
}

// public void SetHeader(string name, string value)
void iOSHttpRequest__SetHeader_fn(iOSHttpRequest* __this, uString* name, uString* value)
{
    __this->SetHeader(name, value);
}

// public void SetTimeout(int timeoutInMilliseconds)
void iOSHttpRequest__SetTimeout_fn(iOSHttpRequest* __this, int32_t* timeoutInMilliseconds)
{
    __this->SetTimeout(*timeoutInMilliseconds);
}

// internal iOSHttpRequest(Uno.Net.Http.HttpMessageHandlerRequest request, string method, string url) [instance]
void iOSHttpRequest::ctor_(::g::Uno::Net::Http::HttpMessageHandlerRequest* request, uString* method, uString* url)
{
    _requestHandle = new ::Uno::Net::Http::iOS::HttpRequest(request, method, url);
}

// public void Abort() [instance]
void iOSHttpRequest::Abort()
{
    _requestHandle->Abort();
}

// public void Dispose() [instance]
void iOSHttpRequest::Dispose()
{
    delete _requestHandle;
    _requestHandle = NULL;
}

// public void EnableCache(bool enableCache) [instance]
void iOSHttpRequest::EnableCache(bool enableCache)
{
    _requestHandle->SetCacheEnabled(enableCache);
}

// public byte[] GetResponseContentByteArray() [instance]
uArray* iOSHttpRequest::GetResponseContentByteArray()
{
    return _requestHandle->GetResponseContentByteArray();
}

// public string GetResponseContentString() [instance]
uString* iOSHttpRequest::GetResponseContentString()
{
    return _requestHandle->GetResponseContentString();
}

// public string GetResponseHeader(string name) [instance]
uString* iOSHttpRequest::GetResponseHeader(uString* name)
{
    return _requestHandle->GetResponseHeader(name);
}

// public string GetResponseHeaders() [instance]
uString* iOSHttpRequest::GetResponseHeaders()
{
    return _requestHandle->GetResponseHeaders();
}

// public int GetResponseStatus() [instance]
int32_t iOSHttpRequest::GetResponseStatus()
{
    return _requestHandle->GetResponseStatus();
}

// public void SendAsync() [instance]
void iOSHttpRequest::SendAsync()
{
    _requestHandle->SendAsync(NULL, 0);
}

// public void SendAsync(byte[] data) [instance]
void iOSHttpRequest::SendAsync1(uArray* data)
{
    _requestHandle->SendAsync(data->Ptr(), data->Length());
}

// public void SendAsync(string data) [instance]
void iOSHttpRequest::SendAsync2(uString* data)
{
    _requestHandle->SendAsync(data);
}

// public void SetHeader(string name, string value) [instance]
void iOSHttpRequest::SetHeader(uString* name, uString* value)
{
    _requestHandle->SetHeader(name, value);
}

// public void SetTimeout(int timeoutInMilliseconds) [instance]
void iOSHttpRequest::SetTimeout(int32_t timeoutInMilliseconds)
{
    _requestHandle->SetTimeout(timeoutInMilliseconds);
}

// internal iOSHttpRequest New(Uno.Net.Http.HttpMessageHandlerRequest request, string method, string url) [static]
iOSHttpRequest* iOSHttpRequest::New1(::g::Uno::Net::Http::HttpMessageHandlerRequest* request, uString* method, uString* url)
{
    iOSHttpRequest* obj1 = (iOSHttpRequest*)uNew(iOSHttpRequest_typeof());
    obj1->ctor_(request, method, url);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/Implementation/iOS/iOSHttpRequest.uno
// ---------------------------------------------------------------------------------------

// internal extern struct iOSHttpRequestHandle
// {
static void iOSHttpRequestHandle_build(uType* type)
{
}

uStructType* iOSHttpRequestHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(::Uno::Net::Http::iOS::HttpRequest*);
    options.ValueSize = sizeof(::Uno::Net::Http::iOS::HttpRequest*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Net.Http.Implementation.iOSHttpRequestHandle", options);
    type->fp_build_ = iOSHttpRequestHandle_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/Implementation/iOS/iOSHttpSharedCache.uno
// -------------------------------------------------------------------------------------------

// internal static extern class iOSHttpSharedCache
// {
static void iOSHttpSharedCache_build(uType* type)
{
}

uClassType* iOSHttpSharedCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Net.Http.Implementation.iOSHttpSharedCache", options);
    type->fp_build_ = iOSHttpSharedCache_build;
    return type;
}

// public static extern void SetupSharedCache([bool isCacheEnabled], [long sizeInBytes])
void iOSHttpSharedCache__SetupSharedCache_fn(bool* isCacheEnabled_, int64_t* sizeInBytes_)
{
    iOSHttpSharedCache::SetupSharedCache(*isCacheEnabled_, *sizeInBytes_);
}

// public static extern void SetupSharedCache([bool isCacheEnabled], [long sizeInBytes]) [static]
void iOSHttpSharedCache::SetupSharedCache(bool isCacheEnabled_, int64_t sizeInBytes_)
{
    ::Uno::Net::Http::iOS::SetupSharedCache(isCacheEnabled_, size_t(sizeInBytes_));
}
// }

}}}}} // ::g::Uno::Net::Http::Implementation
