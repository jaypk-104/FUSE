// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <iOS/SocketRocket/WebSocketClientObjc.h>
#include <ObjC.Object.h>
#include <SocketRocket.WebSocketClient.h>
#include <SRWebSocket.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Action2-2.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[3];
static uType* TYPES[1];

namespace g{
namespace SocketRocket{

// /usr/local/share/uno/Packages/Fuse.WebSockets/1.12.0/iOS/SocketRocket/WebSocketClient.uno
// -----------------------------------------------------------------------------------------

// public sealed extern class WebSocketClient
// {
static void WebSocketClient_build(uType* type)
{
    ::STRINGS[0] = uString::Const("open");
    ::STRINGS[1] = uString::Const("close");
    ::STRINGS[2] = uString::Const("error");
    ::TYPES[0] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::WebSocket::IWebSocketClient_typeof(), offsetof(WebSocketClient_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(WebSocketClient_type, interface1));
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(WebSocketClient, _webSocket), 0,
        ::g::Uno::Action_typeof(), offsetof(WebSocketClient, _open), 0,
        ::g::Uno::Action_typeof(), offsetof(WebSocketClient, _close), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(WebSocketClient, _error), 0);
    type->Reflection.SetFunctions(8,
        new uFunction("Close", NULL, (void*)WebSocketClient__Close_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Connect", NULL, (void*)WebSocketClient__Connect_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Create", NULL, (void*)WebSocketClient__Create_fn, 0, false, uVoid_typeof(), 7, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()->Array(), ::g::Uno::Action_typeof(), ::g::Uno::Action_typeof(), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Byte_typeof()->Array(), NULL)),
        new uFunction("Dispose", NULL, (void*)WebSocketClient__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)WebSocketClient__New1_fn, 0, true, type, 0),
        new uFunction("Send", NULL, (void*)WebSocketClient__Send_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Byte_typeof()->Array()),
        new uFunction("Send", NULL, (void*)WebSocketClient__Send1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("SetHeader", NULL, (void*)WebSocketClient__SetHeader_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
}

WebSocketClient_type* WebSocketClient_typeof()
{
    static uSStrong<WebSocketClient_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WebSocketClient);
    options.TypeSize = sizeof(WebSocketClient_type);
    type = (WebSocketClient_type*)uClassType::New("SocketRocket.WebSocketClient", options);
    type->fp_build_ = WebSocketClient_build;
    type->fp_ctor_ = (void*)WebSocketClient__New1_fn;
    type->interface0.fp_Create = (void(*)(uObject*, uString*, uArray*, uDelegate*, uDelegate*, uDelegate*, uDelegate*, uDelegate*))WebSocketClient__Create_fn;
    type->interface0.fp_Send1 = (void(*)(uObject*, uString*))WebSocketClient__Send1_fn;
    type->interface0.fp_Send = (void(*)(uObject*, uArray*))WebSocketClient__Send_fn;
    type->interface0.fp_Connect = (void(*)(uObject*))WebSocketClient__Connect_fn;
    type->interface0.fp_Close = (void(*)(uObject*))WebSocketClient__Close_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))WebSocketClient__Dispose_fn;
    return type;
}

// public generated WebSocketClient()
void WebSocketClient__ctor__fn(WebSocketClient* __this)
{
    __this->ctor_();
}

// public void Close()
void WebSocketClient__Close_fn(WebSocketClient* __this)
{
    __this->Close();
}

// public void Connect()
void WebSocketClient__Connect_fn(WebSocketClient* __this)
{
    __this->Connect();
}

// public void Create(string uri, string[] protocols, Uno.Action open, Uno.Action close, Uno.Action<string> error, Uno.Action<string> receiveMessage, Uno.Action<byte[]> receiveData)
void WebSocketClient__Create_fn(WebSocketClient* __this, uString* uri, uArray* protocols, uDelegate* open, uDelegate* close, uDelegate* error, uDelegate* receiveMessage, uDelegate* receiveData)
{
    __this->Create(uri, protocols, open, close, error, receiveMessage, receiveData);
}

// private ObjC.Object Create(string url, string[] protocols, Uno.Action<string, string> eventHandler, Uno.Action<string> receiveMessageHandler, Uno.Action<byte[]> receiveDataHandler)
void WebSocketClient__Create1_fn(WebSocketClient* __this, uString* url, uArray* protocols, uDelegate* eventHandler, uDelegate* receiveMessageHandler, uDelegate* receiveDataHandler, ::g::ObjC::Object** __retval)
{
    *__retval = __this->Create1(url, protocols, eventHandler, receiveMessageHandler, receiveDataHandler);
}

// public void Dispose()
void WebSocketClient__Dispose_fn(WebSocketClient* __this)
{
    __this->Dispose();
}

// private void HandleEvent(string type, string message)
void WebSocketClient__HandleEvent_fn(WebSocketClient* __this, uString* type, uString* message)
{
    __this->HandleEvent(type, message);
}

// public generated WebSocketClient New()
void WebSocketClient__New1_fn(WebSocketClient** __retval)
{
    *__retval = WebSocketClient::New1();
}

// public void Send(byte[] data)
void WebSocketClient__Send_fn(WebSocketClient* __this, uArray* data)
{
    __this->Send(data);
}

// public void Send(string data)
void WebSocketClient__Send1_fn(WebSocketClient* __this, uString* data)
{
    __this->Send1(data);
}

// public void SetHeader(string key, string value)
void WebSocketClient__SetHeader_fn(WebSocketClient* __this, uString* key, uString* value)
{
    __this->SetHeader(key, value);
}

// public generated WebSocketClient() [instance]
void WebSocketClient::ctor_()
{
}

// public void Close() [instance]
void WebSocketClient::Close()
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this) -> void
        {
            [[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<WebSocketClient*>((_this).unoObject, WebSocketClient_typeof())->_webSocket); }() disconnect];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]);
        
    }
    
}

// public void Connect() [instance]
void WebSocketClient::Connect()
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this) -> void
        {
            [[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<WebSocketClient*>((_this).unoObject, WebSocketClient_typeof())->_webSocket); }() connect];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]);
        
    }
    
}

// public void Create(string uri, string[] protocols, Uno.Action open, Uno.Action close, Uno.Action<string> error, Uno.Action<string> receiveMessage, Uno.Action<byte[]> receiveData) [instance]
void WebSocketClient::Create(uString* uri, uArray* protocols, uDelegate* open, uDelegate* close, uDelegate* error, uDelegate* receiveMessage, uDelegate* receiveData)
{
    _open = open;
    _close = close;
    _error = error;
    _webSocket = Create1(uri, protocols, uDelegate::New(::TYPES[0/*Uno.Action<string, string>*/], (void*)WebSocketClient__HandleEvent_fn, this), receiveMessage, receiveData);
}

// private ObjC.Object Create(string url, string[] protocols, Uno.Action<string, string> eventHandler, Uno.Action<string> receiveMessageHandler, Uno.Action<byte[]> receiveDataHandler) [instance]
::g::ObjC::Object* WebSocketClient::Create1(uString* url, uArray* protocols, uDelegate* eventHandler, uDelegate* receiveMessageHandler, uDelegate* receiveDataHandler)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::NSString* url, id<UnoArray> protocols, ::uObjC::Function<void, ::NSString*, ::NSString*> eventHandler, ::uObjC::Function<void, ::NSString*> receiveMessageHandler, ::uObjC::Function<void, id<UnoArray>> receiveDataHandler) -> ::id
        {
            return [[WebSocketClientObjc alloc] 
            				initWithUrl:url
            				protocols:[protocols copyArray]
            				eventHandler:eventHandler
            				onReceivedMessage:receiveMessageHandler
            				onReceivedData:^(uint8_t * data, NSUInteger length) {
            					id<UnoArray> arr = [&]() -> id<UnoArray> { ::uForeignPool __foreignPool; return [::StrongUnoArray strongUnoArrayWithUnoArray: uArray::New(::g::Uno::Byte_typeof()->Array(), (int)length) getAt: ^ id (::uArray* arr, int i) { return ::uObjC::Box<uint8_t>(arr->Item<uint8_t>(i)); } setAt: ^ (::uArray* arr, int i, id obj) { arr->Item<uint8_t>(i) = ::uObjC::Unbox<uint8_t>(obj); }]; }();
            					memcpy(arr.unoArray->Ptr(), data, length);
            					receiveDataHandler(arr);
            				}];
        } (::uObjC::NativeString(url), [::StrongUnoArray strongUnoArrayWithUnoArray: protocols getAt: ^ id (::uArray* arr, int i) { return (::id)::uObjC::NativeString(arr->Strong<uString*>(i)); } setAt: ^ (::uArray* arr, int i, id obj) { arr->Strong<uString*>(i) = ::uObjC::UnoString((::NSString*)obj); }], [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*, ::NSString*>)nil : (^ void (::NSString* arg1, ::NSString* arg2)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->Invoke(2, ::uObjC::UnoString(arg1), ::uObjC::UnoString(arg2));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: eventHandler]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*>)nil : (^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: receiveMessageHandler]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, id<UnoArray>>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, id<UnoArray>>)nil : (^ void (id<UnoArray> arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(uCast<uArray*>((arg).unoArray, ::g::Uno::Byte_typeof()->Array()));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: receiveDataHandler])));
        
    }
    
}

// public void Dispose() [instance]
void WebSocketClient::Dispose()
{
    _webSocket = NULL;
}

// private void HandleEvent(string type, string message) [instance]
void WebSocketClient::HandleEvent(uString* type, uString* message)
{
    uStackFrame __("SocketRocket.WebSocketClient", "HandleEvent(string,string)");

    if (::g::Uno::String::op_Equality(type, ::STRINGS[0/*"open"*/]))
        uPtr(_open)->InvokeVoid();

    if (::g::Uno::String::op_Equality(type, ::STRINGS[1/*"close"*/]))
        uPtr(_close)->InvokeVoid();

    if (::g::Uno::String::op_Equality(type, ::STRINGS[2/*"error"*/]))
        uPtr(_error)->InvokeVoid(message);
}

// public void Send(byte[] data) [instance]
void WebSocketClient::Send(uArray* data)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, id<UnoArray> data) -> void
        {
            const uint8_t *arrPtr = (const uint8_t *)[data unoArray]->Ptr();
            [[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<WebSocketClient*>((_this).unoObject, WebSocketClient_typeof())->_webSocket); }() sendData:arrPtr length:[data count]];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], [::StrongUnoArray strongUnoArrayWithUnoArray: data getAt: ^ id (::uArray* arr, int i) { return ::uObjC::Box<uint8_t>(arr->Item<uint8_t>(i)); } setAt: ^ (::uArray* arr, int i, id obj) { arr->Item<uint8_t>(i) = ::uObjC::Unbox<uint8_t>(obj); }]);
        
    }
    
}

// public void Send(string data) [instance]
void WebSocketClient::Send1(uString* data)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, ::NSString* data) -> void
        {
            [[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<WebSocketClient*>((_this).unoObject, WebSocketClient_typeof())->_webSocket); }() sendString:data];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], ::uObjC::NativeString(data));
        
    }
    
}

// public void SetHeader(string key, string value) [instance]
void WebSocketClient::SetHeader(uString* key, uString* value)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, ::NSString* key, ::NSString* value) -> void
        {
            [[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<WebSocketClient*>((_this).unoObject, WebSocketClient_typeof())->_webSocket); }() setHeaderKey:key withValue:value];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], ::uObjC::NativeString(key), ::uObjC::NativeString(value));
        
    }
    
}

// public generated WebSocketClient New() [static]
WebSocketClient* WebSocketClient::New1()
{
    WebSocketClient* obj1 = (WebSocketClient*)uNew(WebSocketClient_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}} // ::g::SocketRocket
