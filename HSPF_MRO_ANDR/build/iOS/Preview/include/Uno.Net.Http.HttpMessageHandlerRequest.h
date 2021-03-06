// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/HttpMessageHandlerRequest.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandler;}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public sealed class HttpMessageHandlerRequest
// {
struct HttpMessageHandlerRequest_type : uType
{
    ::g::Uno::IDisposable interface0;
};

HttpMessageHandlerRequest_type* HttpMessageHandlerRequest_typeof();
void HttpMessageHandlerRequest__ctor__fn(HttpMessageHandlerRequest* __this, ::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher);
void HttpMessageHandlerRequest__Abort_fn(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__add_Aborted_fn(HttpMessageHandlerRequest* __this, uDelegate* value);
void HttpMessageHandlerRequest__remove_Aborted_fn(HttpMessageHandlerRequest* __this, uDelegate* value);
void HttpMessageHandlerRequest__CheckDisposed_fn(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__CompleteRequest_fn(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__Dispose_fn(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__add_Done_fn(HttpMessageHandlerRequest* __this, uDelegate* value);
void HttpMessageHandlerRequest__remove_Done_fn(HttpMessageHandlerRequest* __this, uDelegate* value);
void HttpMessageHandlerRequest__EnableCache_fn(HttpMessageHandlerRequest* __this, bool* enableCache);
void HttpMessageHandlerRequest__add_Error_fn(HttpMessageHandlerRequest* __this, uDelegate* value);
void HttpMessageHandlerRequest__remove_Error_fn(HttpMessageHandlerRequest* __this, uDelegate* value);
void HttpMessageHandlerRequest__GetResponseContentByteArray_fn(HttpMessageHandlerRequest* __this, uArray** __retval);
void HttpMessageHandlerRequest__GetResponseContentString_fn(HttpMessageHandlerRequest* __this, uString** __retval);
void HttpMessageHandlerRequest__GetResponseHeader_fn(HttpMessageHandlerRequest* __this, uString* name, uString** __retval);
void HttpMessageHandlerRequest__GetResponseHeaders_fn(HttpMessageHandlerRequest* __this, uString** __retval);
void HttpMessageHandlerRequest__GetResponseStatus_fn(HttpMessageHandlerRequest* __this, int32_t* __retval);
void HttpMessageHandlerRequest__get_HttpResponseType_fn(HttpMessageHandlerRequest* __this, int32_t* __retval);
void HttpMessageHandlerRequest__set_HttpResponseType_fn(HttpMessageHandlerRequest* __this, int32_t* value);
void HttpMessageHandlerRequest__IsComplete_fn(HttpMessageHandlerRequest* __this, bool* __retval);
void HttpMessageHandlerRequest__IsHeaderValid_fn(uString* name, uString* value, bool* __retval);
void HttpMessageHandlerRequest__get_Method_fn(HttpMessageHandlerRequest* __this, uString** __retval);
void HttpMessageHandlerRequest__New1_fn(::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher, HttpMessageHandlerRequest** __retval);
void HttpMessageHandlerRequest__OnAborted_fn(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__OnDone_fn(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__OnError_fn(HttpMessageHandlerRequest* __this, uString* platformspesificErrorMessage);
void HttpMessageHandlerRequest__OnStateChanged_fn(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__OnTimeout_fn(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__add_Progress_fn(HttpMessageHandlerRequest* __this, uDelegate* value);
void HttpMessageHandlerRequest__remove_Progress_fn(HttpMessageHandlerRequest* __this, uDelegate* value);
void HttpMessageHandlerRequest__SendAsync_fn(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__SendAsync1_fn(HttpMessageHandlerRequest* __this, uArray* data);
void HttpMessageHandlerRequest__SendAsync2_fn(HttpMessageHandlerRequest* __this, uString* data);
void HttpMessageHandlerRequest__SetHeader_fn(HttpMessageHandlerRequest* __this, uString* name, uString* value);
void HttpMessageHandlerRequest__SetResponseType_fn(HttpMessageHandlerRequest* __this, int32_t* responseType);
void HttpMessageHandlerRequest__SetTimeout_fn(HttpMessageHandlerRequest* __this, int32_t* timeoutInMilliseconds);
void HttpMessageHandlerRequest__get_State_fn(HttpMessageHandlerRequest* __this, int32_t* __retval);
void HttpMessageHandlerRequest__set_State_fn(HttpMessageHandlerRequest* __this, int32_t* value);
void HttpMessageHandlerRequest__add_StateChanged_fn(HttpMessageHandlerRequest* __this, uDelegate* value);
void HttpMessageHandlerRequest__remove_StateChanged_fn(HttpMessageHandlerRequest* __this, uDelegate* value);
void HttpMessageHandlerRequest__add_Timeout_fn(HttpMessageHandlerRequest* __this, uDelegate* value);
void HttpMessageHandlerRequest__remove_Timeout_fn(HttpMessageHandlerRequest* __this, uDelegate* value);

struct HttpMessageHandlerRequest : uObject
{
    uStrong< ::g::Uno::Net::Http::HttpMessageHandler*> _httpMessageHandler;
    uStrong<uObject*> _httpRequest;
    uStrong<uObject*> _dispatcher;
    uStrong<uString*> _method;
    uStrong<uString*> _url;
    int32_t _state;
    int32_t _responseType;
    uStrong<uArray*> _optionalPayloadCache;
    uStrong<uDelegate*> Aborted1;
    uStrong<uDelegate*> Done1;
    uStrong<uDelegate*> Error1;
    uStrong<uDelegate*> Progress1;
    uStrong<uDelegate*> StateChanged1;
    uStrong<uDelegate*> Timeout1;

    void ctor_(::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher);
    void Abort();
    void add_Aborted(uDelegate* value);
    void remove_Aborted(uDelegate* value);
    void CheckDisposed();
    void CompleteRequest();
    void Dispose();
    void add_Done(uDelegate* value);
    void remove_Done(uDelegate* value);
    void EnableCache(bool enableCache);
    void add_Error(uDelegate* value);
    void remove_Error(uDelegate* value);
    uArray* GetResponseContentByteArray();
    uString* GetResponseContentString();
    uString* GetResponseHeader(uString* name);
    uString* GetResponseHeaders();
    int32_t GetResponseStatus();
    int32_t HttpResponseType();
    void HttpResponseType(int32_t value);
    bool IsComplete();
    uString* Method();
    void OnAborted();
    void OnDone();
    void OnError(uString* platformspesificErrorMessage);
    void OnStateChanged();
    void OnTimeout();
    void add_Progress(uDelegate* value);
    void remove_Progress(uDelegate* value);
    void SendAsync();
    void SendAsync1(uArray* data);
    void SendAsync2(uString* data);
    void SetHeader(uString* name, uString* value);
    void SetResponseType(int32_t responseType);
    void SetTimeout(int32_t timeoutInMilliseconds);
    int32_t State();
    void State(int32_t value);
    void add_StateChanged(uDelegate* value);
    void remove_StateChanged(uDelegate* value);
    void add_Timeout(uDelegate* value);
    void remove_Timeout(uDelegate* value);
    static bool IsHeaderValid(uString* name, uString* value);
    static HttpMessageHandlerRequest* New1(::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher);
};
// }

}}}} // ::g::Uno::Net::Http
