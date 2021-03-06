// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Action2-2.h>
#include <Uno.Action4-4.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IDictionary-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Exception.h>
#include <Uno.GC.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Net.Http.FragmentParser.h>
#include <Uno.Net.Http.HostInfo.h>
#include <Uno.Net.Http.HostInfoParser.h>
#include <Uno.Net.Http.HttpDefaultDispatcher.h>
#include <Uno.Net.Http.HttpMessageCache.h>
#include <Uno.Net.Http.HttpMessageHandler.h>
#include <Uno.Net.Http.HttpMessageHandler.StaticData.h>
#include <Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure.h>
#include <Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure1-1.h>
#include <Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <Uno.Net.Http.HttpRequestState.h>
#include <Uno.Net.Http.HttpResponseType.h>
#include <Uno.Net.Http.HttpStatusReasonPhrase.h>
#include <Uno.Net.Http.Implementation.IHttpRequest.h>
#include <Uno.Net.Http.Implementation.iOSHttpRequest.h>
#include <Uno.Net.Http.Implementation.iOSHttpSharedCache.h>
#include <Uno.Net.Http.InvalidResponseTypeException.h>
#include <Uno.Net.Http.InvalidStateException.h>
#include <Uno.Net.Http.QueryParser.h>
#include <Uno.Net.Http.SchemeParser.h>
#include <Uno.Net.Http.SchemeParserResult.h>
#include <Uno.Net.Http.SegmentsParser.h>
#include <Uno.Net.Http.Uri.h>
#include <Uno.Net.Http.UriFormatException.h>
#include <Uno.Net.Http.UriHelper.h>
#include <Uno.Net.Http.UriScheme.h>
#include <Uno.Net.Http.UriSchemeType.h>
#include <Uno.Net.Http.UserInfoParser.h>
#include <Uno.Object.h>
#include <Uno.ObjectDisposedException.h>
#include <Uno.Platform.ApplicationState.h>
#include <Uno.Platform.ApplicationStateTransitionHandler.h>
#include <Uno.Platform.CoreApp.h>
#include <Uno.String.h>
#include <Uno.Text.Utf8.h>
#include <Uno.Threading.IDispatcher.h>
static uString* STRINGS[93];
static uType* TYPES[9];

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/HttpMessageHandlerRequest.uno
// -------------------------------------------------------------------------------

// private sealed class HttpMessageHandlerRequest.DispatchClosure
// {
static void HttpMessageHandlerRequest__DispatchClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL), offsetof(HttpMessageHandlerRequest__DispatchClosure, _action), 0,
        ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), offsetof(HttpMessageHandlerRequest__DispatchClosure, _arg), 0,
        ::g::Uno::Net::Http::HttpRequestState_typeof(), offsetof(HttpMessageHandlerRequest__DispatchClosure, _state), 0);
}

uType* HttpMessageHandlerRequest__DispatchClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(HttpMessageHandlerRequest__DispatchClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure", options);
    type->fp_build_ = HttpMessageHandlerRequest__DispatchClosure_build;
    return type;
}

// public DispatchClosure(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> action, Uno.Net.Http.HttpMessageHandlerRequest arg)
void HttpMessageHandlerRequest__DispatchClosure__ctor__fn(HttpMessageHandlerRequest__DispatchClosure* __this, int32_t* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg)
{
    __this->ctor_(*state, action, arg);
}

// public DispatchClosure New(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> action, Uno.Net.Http.HttpMessageHandlerRequest arg)
void HttpMessageHandlerRequest__DispatchClosure__New1_fn(int32_t* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg, HttpMessageHandlerRequest__DispatchClosure** __retval)
{
    *__retval = HttpMessageHandlerRequest__DispatchClosure::New1(*state, action, arg);
}

// public void Run()
void HttpMessageHandlerRequest__DispatchClosure__Run_fn(HttpMessageHandlerRequest__DispatchClosure* __this)
{
    __this->Run();
}

// public DispatchClosure(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> action, Uno.Net.Http.HttpMessageHandlerRequest arg) [instance]
void HttpMessageHandlerRequest__DispatchClosure::ctor_(int32_t state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg)
{
    _action = action;
    _arg = arg;
    _state = state;
}

// public void Run() [instance]
void HttpMessageHandlerRequest__DispatchClosure::Run()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure", "Run()");

    if (uPtr(_arg)->IsComplete())
        return;

    uPtr(_arg)->State(_state);
    uPtr(_action)->InvokeVoid(_arg);
    uPtr(_arg)->CompleteRequest();
}

// public DispatchClosure New(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> action, Uno.Net.Http.HttpMessageHandlerRequest arg) [static]
HttpMessageHandlerRequest__DispatchClosure* HttpMessageHandlerRequest__DispatchClosure::New1(int32_t state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg)
{
    HttpMessageHandlerRequest__DispatchClosure* obj1 = (HttpMessageHandlerRequest__DispatchClosure*)uNew(HttpMessageHandlerRequest__DispatchClosure_typeof());
    obj1->ctor_(state, action, arg);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/HttpMessageHandlerRequest.uno
// -------------------------------------------------------------------------------

// private sealed class HttpMessageHandlerRequest.DispatchClosure<TArg1>
// {
static void HttpMessageHandlerRequest__DispatchClosure1_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), type->T(0), NULL), offsetof(HttpMessageHandlerRequest__DispatchClosure1, _action), 0,
        ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), offsetof(HttpMessageHandlerRequest__DispatchClosure1, _arg0), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Net::Http::HttpRequestState_typeof(), offsetof(HttpMessageHandlerRequest__DispatchClosure1, _state), 0);
}

uType* HttpMessageHandlerRequest__DispatchClosure1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(HttpMessageHandlerRequest__DispatchClosure1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure`1", options);
    type->fp_build_ = HttpMessageHandlerRequest__DispatchClosure1_build;
    return type;
}

// public DispatchClosure(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, TArg1> action, Uno.Net.Http.HttpMessageHandlerRequest arg0, TArg1 arg1)
void HttpMessageHandlerRequest__DispatchClosure1__ctor__fn(HttpMessageHandlerRequest__DispatchClosure1* __this, int32_t* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg0, void* arg1)
{
    int32_t state_ = *state;
    __this->_action = action;
    __this->_arg0 = arg0;
    __this->_arg1() = arg1;
    __this->_state = state_;
}

// public DispatchClosure New(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, TArg1> action, Uno.Net.Http.HttpMessageHandlerRequest arg0, TArg1 arg1)
void HttpMessageHandlerRequest__DispatchClosure1__New1_fn(uType* __type, int32_t* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg0, void* arg1, HttpMessageHandlerRequest__DispatchClosure1** __retval)
{
    int32_t state_ = *state;
    HttpMessageHandlerRequest__DispatchClosure1* obj1 = (HttpMessageHandlerRequest__DispatchClosure1*)uNew(__type);
    HttpMessageHandlerRequest__DispatchClosure1__ctor__fn(obj1, uCRef<int32_t>(state_), action, arg0, arg1);
    return *__retval = obj1, void();
}

// public void Run()
void HttpMessageHandlerRequest__DispatchClosure1__Run_fn(HttpMessageHandlerRequest__DispatchClosure1* __this)
{
    __this->Run();
}

// public void Run() [instance]
void HttpMessageHandlerRequest__DispatchClosure1::Run()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure`1", "Run()");

    if (uPtr(_arg0)->IsComplete())
        return;

    uPtr(_arg0)->State(_state);
    uPtr(_action)->Invoke(2, (::g::Uno::Net::Http::HttpMessageHandlerRequest*)_arg0, (void*)_arg1());
    uPtr(_arg0)->CompleteRequest();
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/UriParsers/FragmentParser.uno
// -------------------------------------------------------------------------------

// internal sealed class FragmentParser
// {
static void FragmentParser_build(uType* type)
{
}

uType* FragmentParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(FragmentParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.FragmentParser", options);
    type->fp_build_ = FragmentParser_build;
    return type;
}

// public static string Parse(string uriString, int idx, int& startPartIdx)
void FragmentParser__Parse_fn(uString* uriString, int32_t* idx, int32_t* startPartIdx, uString** __retval)
{
    *__retval = FragmentParser::Parse(uriString, *idx, startPartIdx);
}

// public static string Parse(string uriString, int idx, int& startPartIdx) [static]
uString* FragmentParser::Parse(uString* uriString, int32_t idx, int32_t* startPartIdx)
{
    uStackFrame __("Uno.Net.Http.FragmentParser", "Parse(string,int,int&)");

    if (idx >= uPtr(uriString)->Length())
        return ::g::Uno::String::Empty();

    int32_t start = ::g::Uno::String::IndexOf1(uPtr(uriString), '#', idx);

    if (start >= 0)
    {
        *startPartIdx = start;
        return ::g::Uno::String::Substring(uPtr(uriString), *startPartIdx);
    }

    return ::g::Uno::String::Empty();
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/UriParsers/HostInfoParser.uno
// -------------------------------------------------------------------------------

// internal sealed class HostInfo
// {
static void HostInfo_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(HostInfo, _Authority), 0,
        ::g::Uno::String_typeof(), offsetof(HostInfo, _Host), 0,
        ::g::Uno::Int_typeof(), offsetof(HostInfo, _Port), 0);
}

uType* HostInfo_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(HostInfo);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.HostInfo", options);
    type->fp_build_ = HostInfo_build;
    type->fp_ctor_ = (void*)HostInfo__New1_fn;
    return type;
}

// public generated HostInfo()
void HostInfo__ctor__fn(HostInfo* __this)
{
    __this->ctor_();
}

// public generated string get_Authority()
void HostInfo__get_Authority_fn(HostInfo* __this, uString** __retval)
{
    *__retval = __this->Authority();
}

// public generated void set_Authority(string value)
void HostInfo__set_Authority_fn(HostInfo* __this, uString* value)
{
    __this->Authority(value);
}

// public generated string get_Host()
void HostInfo__get_Host_fn(HostInfo* __this, uString** __retval)
{
    *__retval = __this->Host();
}

// public generated void set_Host(string value)
void HostInfo__set_Host_fn(HostInfo* __this, uString* value)
{
    __this->Host(value);
}

// public generated HostInfo New()
void HostInfo__New1_fn(HostInfo** __retval)
{
    *__retval = HostInfo::New1();
}

// public generated int get_Port()
void HostInfo__get_Port_fn(HostInfo* __this, int32_t* __retval)
{
    *__retval = __this->Port();
}

// public generated void set_Port(int value)
void HostInfo__set_Port_fn(HostInfo* __this, int32_t* value)
{
    __this->Port(*value);
}

// public generated HostInfo() [instance]
void HostInfo::ctor_()
{
}

// public generated string get_Authority() [instance]
uString* HostInfo::Authority()
{
    return _Authority;
}

// public generated void set_Authority(string value) [instance]
void HostInfo::Authority(uString* value)
{
    _Authority = value;
}

// public generated string get_Host() [instance]
uString* HostInfo::Host()
{
    return _Host;
}

// public generated void set_Host(string value) [instance]
void HostInfo::Host(uString* value)
{
    _Host = value;
}

// public generated int get_Port() [instance]
int32_t HostInfo::Port()
{
    return _Port;
}

// public generated void set_Port(int value) [instance]
void HostInfo::Port(int32_t value)
{
    _Port = value;
}

// public generated HostInfo New() [static]
HostInfo* HostInfo::New1()
{
    HostInfo* obj1 = (HostInfo*)uNew(HostInfo_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/UriParsers/HostInfoParser.uno
// -------------------------------------------------------------------------------

// internal sealed class HostInfoParser
// {
// static generated HostInfoParser()
static void HostInfoParser__cctor__fn(uType* __type)
{
    ::g::Uno::Collections::List* collection1;
    HostInfoParser::_invalidChars_ = (collection1 = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<string>*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[0/*".."*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[1/*","*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[2/*"\\"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[3/*"|"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[4/*"<"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[5/*">"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[6/*"'"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[7/*";"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[8/*":"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[9/*"["*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[10/*"]"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[11/*"{"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[12/*"}"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[13/*"("*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[14/*")"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[15/*"="*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[16/*"+"*/]), collection1);
}

static void HostInfoParser_build(uType* type)
{
    ::STRINGS[0] = uString::Const("..");
    ::STRINGS[1] = uString::Const(",");
    ::STRINGS[2] = uString::Const("\\");
    ::STRINGS[3] = uString::Const("|");
    ::STRINGS[4] = uString::Const("<");
    ::STRINGS[5] = uString::Const(">");
    ::STRINGS[6] = uString::Const("'");
    ::STRINGS[7] = uString::Const(";");
    ::STRINGS[8] = uString::Const(":");
    ::STRINGS[9] = uString::Const("[");
    ::STRINGS[10] = uString::Const("]");
    ::STRINGS[11] = uString::Const("{");
    ::STRINGS[12] = uString::Const("}");
    ::STRINGS[13] = uString::Const("(");
    ::STRINGS[14] = uString::Const(")");
    ::STRINGS[15] = uString::Const("=");
    ::STRINGS[16] = uString::Const("+");
    ::STRINGS[17] = uString::Const("The port number specified in uriString is not valid or cannot be parsed.");
    ::STRINGS[18] = uString::Const(".");
    ::STRINGS[19] = uString::Const("There is an invalid character sequence in uriString.");
    ::STRINGS[20] = uString::Const("/");
    ::STRINGS[21] = uString::Const("The host specified in uriString is not valid or cannot be parsed.");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Net::Http::UriScheme_typeof());
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.List<string>*/], (uintptr_t)&HostInfoParser::_invalidChars_, uFieldFlagsStatic);
}

uType* HostInfoParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(HostInfoParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.HostInfoParser", options);
    type->fp_build_ = HostInfoParser_build;
    type->fp_cctor_ = HostInfoParser__cctor__fn;
    return type;
}

// private static int ExtractPort(string portString, int defaultPort)
void HostInfoParser__ExtractPort_fn(uString* portString, int32_t* defaultPort, int32_t* __retval)
{
    *__retval = HostInfoParser::ExtractPort(portString, *defaultPort);
}

// private static int GetDafaultPort(string scheme)
void HostInfoParser__GetDafaultPort_fn(uString* scheme, int32_t* __retval)
{
    *__retval = HostInfoParser::GetDafaultPort(scheme);
}

// private static bool IsHostValid(string userInfo)
void HostInfoParser__IsHostValid_fn(uString* userInfo, bool* __retval)
{
    *__retval = HostInfoParser::IsHostValid(userInfo);
}

// public static Uno.Net.Http.HostInfo Parse(string uriString, string scheme, int endIdx, int& idx)
void HostInfoParser__Parse_fn(uString* uriString, uString* scheme, int32_t* endIdx, int32_t* idx, ::g::Uno::Net::Http::HostInfo** __retval)
{
    *__retval = HostInfoParser::Parse(uriString, scheme, *endIdx, idx);
}

uSStrong< ::g::Uno::Collections::List*> HostInfoParser::_invalidChars_;

// private static int ExtractPort(string portString, int defaultPort) [static]
int32_t HostInfoParser::ExtractPort(uString* portString, int32_t defaultPort)
{
    uStackFrame __("Uno.Net.Http.HostInfoParser", "ExtractPort(string,int)");
    HostInfoParser_typeof()->Init();
    int32_t port = 0;

    if (::g::Uno::String::IsNullOrEmpty(portString))
        port = defaultPort;
    else
    {
        if (!::g::Uno::Int::TryParse(portString, &port))
            U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[17/*"The port nu...*/]));
    }

    return port;
}

// private static int GetDafaultPort(string scheme) [static]
int32_t HostInfoParser::GetDafaultPort(uString* scheme)
{
    uStackFrame __("Uno.Net.Http.HostInfoParser", "GetDafaultPort(string)");
    HostInfoParser_typeof()->Init();
    int32_t ret5;
    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(::g::Uno::Net::Http::UriScheme::DefaultPorts()), ::g::Uno::String::ToLower(uPtr(scheme)), &ret5), ret5);
}

// private static bool IsHostValid(string userInfo) [static]
bool HostInfoParser::IsHostValid(uString* userInfo)
{
    uStackFrame __("Uno.Net.Http.HostInfoParser", "IsHostValid(string)");
    HostInfoParser_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > ret6;
    ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > enum3 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(HostInfoParser::_invalidChars_), &ret6), ret6);

    {
        try
        {
            {
                while (enum3.MoveNext(::TYPES[1/*Uno.Collections.List<string>.Enumerator*/]))
                {
                    uString* chars = enum3.Current(::TYPES[1/*Uno.Collections.List<string>.Enumerator*/]);

                    if (::g::Uno::String::IndexOf3(uPtr(userInfo), chars, 0) >= 0)
                    {
                        bool __uno_retval = false;
                        enum3.Dispose(::TYPES[1/*Uno.Collections.List<string>.Enumerator*/]);
                        return __uno_retval;
                    }
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum3.Dispose(::TYPES[1/*Uno.Collections.List<string>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            enum3.Dispose(::TYPES[1/*Uno.Collections.List<string>.Enumerator*/]);
        }
        __after_finally_0:;
    }

    return !::g::Uno::String::StartsWith(uPtr(userInfo), ::STRINGS[18/*"."*/]);
}

// public static Uno.Net.Http.HostInfo Parse(string uriString, string scheme, int endIdx, int& idx) [static]
::g::Uno::Net::Http::HostInfo* HostInfoParser::Parse(uString* uriString, uString* scheme, int32_t endIdx, int32_t* idx)
{
    uStackFrame __("Uno.Net.Http.HostInfoParser", "Parse(string,string,int,int&)");
    HostInfoParser_typeof()->Init();
    ::g::Uno::Net::Http::HostInfo* collection2;

    if (*idx >= endIdx)
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[19/*"There is an...*/]));

    int32_t end = ::g::Uno::String::IndexOf3(uPtr(uriString), ::STRINGS[20/*"/"*/], *idx);

    if ((end < 0) || (end >= endIdx))
        end = endIdx;

    uString* hostInfoString = ::g::Uno::String::Substring1(uriString, *idx, end - *idx);
    *idx = end;

    if (::g::Uno::String::IsNullOrEmpty(hostInfoString))
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[21/*"The host sp...*/]));

    int32_t delim = ::g::Uno::String::IndexOf3(uPtr(hostInfoString), ::STRINGS[8/*":"*/], 0);
    collection2 = ::g::Uno::Net::Http::HostInfo::New1();
    uPtr(collection2)->Authority(hostInfoString);
    hostInfoString;
    ::g::Uno::Net::Http::HostInfo* hostInfo = collection2;

    if (delim > 0)
    {
        uString* portString = ::g::Uno::String::Substring(uPtr(hostInfoString), delim + 1);
        uPtr(hostInfo)->Host(::g::Uno::String::Substring1(hostInfoString, 0, delim));
        hostInfo->Port(HostInfoParser::ExtractPort(portString, HostInfoParser::GetDafaultPort(scheme)));
    }
    else
    {
        uPtr(hostInfo)->Host(hostInfoString);
        hostInfo->Port(HostInfoParser::GetDafaultPort(scheme));
    }

    if (!HostInfoParser::IsHostValid(uPtr(hostInfo)->Host()))
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[21/*"The host sp...*/]));

    return hostInfo;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/HttpDefaultDispatcher.uno
// ---------------------------------------------------------------------------

// internal sealed class HttpDefaultDispatcher
// {
static void HttpDefaultDispatcher_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(HttpDefaultDispatcher_type, interface0));
}

HttpDefaultDispatcher_type* HttpDefaultDispatcher_typeof()
{
    static uSStrong<HttpDefaultDispatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(HttpDefaultDispatcher);
    options.TypeSize = sizeof(HttpDefaultDispatcher_type);
    type = (HttpDefaultDispatcher_type*)uClassType::New("Uno.Net.Http.HttpDefaultDispatcher", options);
    type->fp_build_ = HttpDefaultDispatcher_build;
    type->fp_ctor_ = (void*)HttpDefaultDispatcher__New1_fn;
    type->interface0.fp_Invoke = (void(*)(uObject*, uDelegate*))HttpDefaultDispatcher__Invoke_fn;
    return type;
}

// public HttpDefaultDispatcher()
void HttpDefaultDispatcher__ctor__fn(HttpDefaultDispatcher* __this)
{
    __this->ctor_();
}

// public void Invoke(Uno.Action action)
void HttpDefaultDispatcher__Invoke_fn(HttpDefaultDispatcher* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public HttpDefaultDispatcher New()
void HttpDefaultDispatcher__New1_fn(HttpDefaultDispatcher** __retval)
{
    *__retval = HttpDefaultDispatcher::New1();
}

// public HttpDefaultDispatcher() [instance]
void HttpDefaultDispatcher::ctor_()
{
}

// public void Invoke(Uno.Action action) [instance]
void HttpDefaultDispatcher::Invoke(uDelegate* action)
{
    uStackFrame __("Uno.Net.Http.HttpDefaultDispatcher", "Invoke(Uno.Action)");
    uPtr(action)->InvokeVoid();
}

// public HttpDefaultDispatcher New() [static]
HttpDefaultDispatcher* HttpDefaultDispatcher::New1()
{
    HttpDefaultDispatcher* obj1 = (HttpDefaultDispatcher*)uNew(HttpDefaultDispatcher_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/HttpMessageCache.uno
// ----------------------------------------------------------------------

// public static class HttpMessageCache
// {
// static HttpMessageCache()
static void HttpMessageCache__cctor__fn(uType* __type)
{
    ::g::Uno::Platform::CoreApp_typeof()->Init();
    ::g::Uno::Platform::CoreApp::add_Started(uDelegate::New(::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)HttpMessageCache__OnApplicationStarted_fn));
}

static void HttpMessageCache_build(uType* type)
{
    ::STRINGS[22] = uString::Const("Uno.Net.Http.HttpMessageCache: Changes to IsCacheEnabled are ignored after initialization.");
    ::STRINGS[23] = uString::Const("/usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/HttpMessageCache.uno");
    ::STRINGS[24] = uString::Const("Uno.Net.Http.HttpMessageCache: Changes to MaxCacheSizeInBytes are ignored after initialization.");
    ::TYPES[2] = ::g::Uno::Platform::ApplicationStateTransitionHandler_typeof();
    type->SetDependencies(
        ::g::Uno::Platform::CoreApp_typeof(),
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&HttpMessageCache::_isInitialized_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&HttpMessageCache::_isCacheDisabled_, uFieldFlagsStatic,
        ::g::Uno::Long_typeof(), (uintptr_t)&HttpMessageCache::_maxCacheSizeInBytes_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(5,
        new uFunction("Init", NULL, (void*)HttpMessageCache__Init_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("get_IsCacheEnabled", NULL, (void*)HttpMessageCache__get_IsCacheEnabled_fn, 0, true, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsCacheEnabled", NULL, (void*)HttpMessageCache__set_IsCacheEnabled_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_MaxCacheSizeInBytes", NULL, (void*)HttpMessageCache__get_MaxCacheSizeInBytes_fn, 0, true, ::g::Uno::Long_typeof(), 0),
        new uFunction("set_MaxCacheSizeInBytes", NULL, (void*)HttpMessageCache__set_MaxCacheSizeInBytes_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Long_typeof()));
}

uClassType* HttpMessageCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.DependencyCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Net.Http.HttpMessageCache", options);
    type->fp_build_ = HttpMessageCache_build;
    type->fp_cctor_ = HttpMessageCache__cctor__fn;
    return type;
}

// public static void Init()
void HttpMessageCache__Init_fn()
{
    HttpMessageCache::Init();
}

// public static bool get_IsCacheEnabled()
void HttpMessageCache__get_IsCacheEnabled_fn(bool* __retval)
{
    *__retval = HttpMessageCache::IsCacheEnabled();
}

// public static void set_IsCacheEnabled(bool value)
void HttpMessageCache__set_IsCacheEnabled_fn(bool* value)
{
    HttpMessageCache::IsCacheEnabled(*value);
}

// public static long get_MaxCacheSizeInBytes()
void HttpMessageCache__get_MaxCacheSizeInBytes_fn(int64_t* __retval)
{
    *__retval = HttpMessageCache::MaxCacheSizeInBytes();
}

// public static void set_MaxCacheSizeInBytes(long value)
void HttpMessageCache__set_MaxCacheSizeInBytes_fn(int64_t* value)
{
    HttpMessageCache::MaxCacheSizeInBytes(*value);
}

// private static void OnApplicationStarted(Uno.Platform.ApplicationState state)
void HttpMessageCache__OnApplicationStarted_fn(int32_t* state)
{
    HttpMessageCache::OnApplicationStarted(*state);
}

bool HttpMessageCache::_isInitialized_;
bool HttpMessageCache::_isCacheDisabled_;
int64_t HttpMessageCache::_maxCacheSizeInBytes_;

// public static void Init() [static]
void HttpMessageCache::Init()
{
    uStackFrame __("Uno.Net.Http.HttpMessageCache", "Init()");
    HttpMessageCache_typeof()->Init();

    if (HttpMessageCache::_isInitialized_)
        return;

    HttpMessageCache::_isInitialized_ = true;
    ::g::Uno::Platform::CoreApp::remove_Started(uDelegate::New(::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)HttpMessageCache__OnApplicationStarted_fn));
    ::g::Uno::Net::Http::Implementation::iOSHttpSharedCache::SetupSharedCache(HttpMessageCache::IsCacheEnabled(), HttpMessageCache::MaxCacheSizeInBytes());
}

// private static void OnApplicationStarted(Uno.Platform.ApplicationState state) [static]
void HttpMessageCache::OnApplicationStarted(int32_t state)
{
    uStackFrame __("Uno.Net.Http.HttpMessageCache", "OnApplicationStarted(Uno.Platform.ApplicationState)");
    HttpMessageCache_typeof()->Init();
    HttpMessageCache::Init();
}

// public static bool get_IsCacheEnabled() [static]
bool HttpMessageCache::IsCacheEnabled()
{
    HttpMessageCache_typeof()->Init();
    return !HttpMessageCache::_isCacheDisabled_;
}

// public static void set_IsCacheEnabled(bool value) [static]
void HttpMessageCache::IsCacheEnabled(bool value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageCache", "set_IsCacheEnabled(bool)");
    HttpMessageCache_typeof()->Init();

    if (HttpMessageCache::_isInitialized_)
        ::g::Uno::Diagnostics::Debug::Log3(::STRINGS[22/*"Uno.Net.Htt...*/], 0, ::STRINGS[23/*"/usr/local/...*/], 15);
    else
        HttpMessageCache::_isCacheDisabled_ = !value;
}

// public static long get_MaxCacheSizeInBytes() [static]
int64_t HttpMessageCache::MaxCacheSizeInBytes()
{
    HttpMessageCache_typeof()->Init();
    return HttpMessageCache::_maxCacheSizeInBytes_;
}

// public static void set_MaxCacheSizeInBytes(long value) [static]
void HttpMessageCache::MaxCacheSizeInBytes(int64_t value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageCache", "set_MaxCacheSizeInBytes(long)");
    HttpMessageCache_typeof()->Init();

    if (HttpMessageCache::_isInitialized_)
        ::g::Uno::Diagnostics::Debug::Log3(::STRINGS[24/*"Uno.Net.Htt...*/], 0, ::STRINGS[23/*"/usr/local/...*/], 28);
    else
        HttpMessageCache::_maxCacheSizeInBytes_ = value;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/HttpMessageHandler.uno
// ------------------------------------------------------------------------

// public sealed class HttpMessageHandler
// {
static void HttpMessageHandler_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Net::Http::HttpMessageCache_typeof(),
        HttpMessageHandler__StaticData_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(HttpMessageHandler_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL), offsetof(HttpMessageHandler, _pendingRequests), 0,
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(HttpMessageHandler, _defaultDispatcher), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("AbortPendingRequests", NULL, (void*)HttpMessageHandler__AbortPendingRequests_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("CreateRequest", NULL, (void*)HttpMessageHandler__CreateRequest_fn, 0, false, ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("CreateRequest", NULL, (void*)HttpMessageHandler__CreateRequest1_fn, 0, false, ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), 3, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Threading::IDispatcher_typeof()),
        new uFunction("Dispose", NULL, (void*)HttpMessageHandler__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)HttpMessageHandler__New1_fn, 0, true, type, 0));
}

HttpMessageHandler_type* HttpMessageHandler_typeof()
{
    static uSStrong<HttpMessageHandler_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(HttpMessageHandler);
    options.TypeSize = sizeof(HttpMessageHandler_type);
    type = (HttpMessageHandler_type*)uClassType::New("Uno.Net.Http.HttpMessageHandler", options);
    type->fp_build_ = HttpMessageHandler_build;
    type->fp_ctor_ = (void*)HttpMessageHandler__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))HttpMessageHandler__Dispose_fn;
    return type;
}

// public HttpMessageHandler()
void HttpMessageHandler__ctor__fn(HttpMessageHandler* __this)
{
    __this->ctor_();
}

// public void AbortPendingRequests()
void HttpMessageHandler__AbortPendingRequests_fn(HttpMessageHandler* __this)
{
    __this->AbortPendingRequests();
}

// internal void CompleteRequest(Uno.Net.Http.HttpMessageHandlerRequest request)
void HttpMessageHandler__CompleteRequest_fn(HttpMessageHandler* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request)
{
    __this->CompleteRequest(request);
}

// public Uno.Net.Http.HttpMessageHandlerRequest CreateRequest(string method, string url)
void HttpMessageHandler__CreateRequest_fn(HttpMessageHandler* __this, uString* method, uString* url, ::g::Uno::Net::Http::HttpMessageHandlerRequest** __retval)
{
    *__retval = __this->CreateRequest(method, url);
}

// public Uno.Net.Http.HttpMessageHandlerRequest CreateRequest(string method, string url, Uno.Threading.IDispatcher dispatcher)
void HttpMessageHandler__CreateRequest1_fn(HttpMessageHandler* __this, uString* method, uString* url, uObject* dispatcher, ::g::Uno::Net::Http::HttpMessageHandlerRequest** __retval)
{
    *__retval = __this->CreateRequest1(method, url, dispatcher);
}

// public void Dispose()
void HttpMessageHandler__Dispose_fn(HttpMessageHandler* __this)
{
    __this->Dispose();
}

// public HttpMessageHandler New()
void HttpMessageHandler__New1_fn(HttpMessageHandler** __retval)
{
    *__retval = HttpMessageHandler::New1();
}

// public HttpMessageHandler() [instance]
void HttpMessageHandler::ctor_()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandler", ".ctor()");
    ::g::Uno::Net::Http::HttpMessageCache::Init();
    _pendingRequests = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL)));
    _defaultDispatcher = (uObject*)::g::Uno::Net::Http::HttpDefaultDispatcher::New1();
}

// public void AbortPendingRequests() [instance]
void HttpMessageHandler::AbortPendingRequests()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandler", "AbortPendingRequests()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Net::Http::HttpMessageHandlerRequest*> > ret4;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Net::Http::HttpMessageHandlerRequest*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_pendingRequests), &ret4), ret4);

    {
        try
        {
            {
                while (enum2.MoveNext(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL)))
                {
                    ::g::Uno::Net::Http::HttpMessageHandlerRequest* request = enum2.Current(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL));

                    if (request != NULL)
                        uPtr(request)->Abort();
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum2.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL));
            }
                        throw __t;
            goto __after_finally_1;
        }

        {
            enum2.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL));
        }
        __after_finally_1:;
    }
}

// internal void CompleteRequest(Uno.Net.Http.HttpMessageHandlerRequest request) [instance]
void HttpMessageHandler::CompleteRequest(::g::Uno::Net::Http::HttpMessageHandlerRequest* request)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandler", "CompleteRequest(Uno.Net.Http.HttpMessageHandlerRequest)");
    ::g::Uno::Net::Http::HttpMessageHandlerRequest* ret5;

    for (int32_t i = 0; i < uPtr(_pendingRequests)->Count(); ++i)
        if ((::g::Uno::Collections::List__get_Item_fn(uPtr(_pendingRequests), uCRef<int32_t>(i), &ret5), ret5) == request)
        {
            ::g::Uno::Collections::List__set_Item_fn(uPtr(_pendingRequests), uCRef<int32_t>(i), NULL);
            HttpMessageHandler__StaticData::DecrementPendingRequests();
            break;
        }
}

// public Uno.Net.Http.HttpMessageHandlerRequest CreateRequest(string method, string url) [instance]
::g::Uno::Net::Http::HttpMessageHandlerRequest* HttpMessageHandler::CreateRequest(uString* method, uString* url)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandler", "CreateRequest(string,string)");
    return CreateRequest1(method, url, _defaultDispatcher);
}

// public Uno.Net.Http.HttpMessageHandlerRequest CreateRequest(string method, string url, Uno.Threading.IDispatcher dispatcher) [instance]
::g::Uno::Net::Http::HttpMessageHandlerRequest* HttpMessageHandler::CreateRequest1(uString* method, uString* url, uObject* dispatcher)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandler", "CreateRequest(string,string,Uno.Threading.IDispatcher)");
    ::g::Uno::Net::Http::HttpMessageHandlerRequest* ret6;
    HttpMessageHandler__StaticData::IncrementPendingRequests();
    ::g::Uno::Net::Http::HttpMessageHandlerRequest* request = ::g::Uno::Net::Http::HttpMessageHandlerRequest::New1(this, method, url, dispatcher);

    for (int32_t i = 0; i < uPtr(_pendingRequests)->Count(); ++i)
        if ((::g::Uno::Collections::List__get_Item_fn(uPtr(_pendingRequests), uCRef<int32_t>(i), &ret6), ret6) == NULL)
        {
            ::g::Uno::Collections::List__set_Item_fn(uPtr(_pendingRequests), uCRef<int32_t>(i), request);
            return request;
        }

    ::g::Uno::Collections::List__Add_fn(uPtr(_pendingRequests), request);
    return request;
}

// public void Dispose() [instance]
void HttpMessageHandler::Dispose()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandler", "Dispose()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Net::Http::HttpMessageHandlerRequest*> > ret7;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Net::Http::HttpMessageHandlerRequest*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_pendingRequests), &ret7), ret7);

    {
        try
        {
            {
                while (enum1.MoveNext(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL)))
                {
                    ::g::Uno::Net::Http::HttpMessageHandlerRequest* request = enum1.Current(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL));

                    if (request != NULL)
                        uPtr(request)->Dispose();
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum1.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL));
            }
                        throw __t;
            goto __after_finally_2;
        }

        {
            enum1.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL));
        }
        __after_finally_2:;
    }

    _pendingRequests = NULL;
}

// public HttpMessageHandler New() [static]
HttpMessageHandler* HttpMessageHandler::New1()
{
    HttpMessageHandler* obj3 = (HttpMessageHandler*)uNew(HttpMessageHandler_typeof());
    obj3->ctor_();
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/HttpMessageHandlerRequest.uno
// -------------------------------------------------------------------------------

// public sealed class HttpMessageHandlerRequest
// {
// ~HttpMessageHandlerRequest()
static void HttpMessageHandlerRequest__Finalize_fn(HttpMessageHandlerRequest* __this)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "Finalize()");

    if (__this->_httpRequest == NULL)
        return;

    __this->Dispose();
}

static void HttpMessageHandlerRequest_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(HttpMessageHandlerRequest_type, interface0));
    type->SetFields(0,
        ::g::Uno::Net::Http::HttpMessageHandler_typeof(), offsetof(HttpMessageHandlerRequest, _httpMessageHandler), 0,
        ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof(), offsetof(HttpMessageHandlerRequest, _httpRequest), 0,
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(HttpMessageHandlerRequest, _dispatcher), 0,
        ::g::Uno::String_typeof(), offsetof(HttpMessageHandlerRequest, _method), 0,
        ::g::Uno::String_typeof(), offsetof(HttpMessageHandlerRequest, _url), 0,
        ::g::Uno::Net::Http::HttpRequestState_typeof(), offsetof(HttpMessageHandlerRequest, _state), 0,
        ::g::Uno::Net::Http::HttpResponseType_typeof(), offsetof(HttpMessageHandlerRequest, _responseType), 0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(HttpMessageHandlerRequest, _optionalPayloadCache), 0,
        ::g::Uno::Action1_typeof()->MakeType(type, NULL), offsetof(HttpMessageHandlerRequest, Aborted1), 0,
        ::g::Uno::Action1_typeof()->MakeType(type, NULL), offsetof(HttpMessageHandlerRequest, Done1), 0,
        ::g::Uno::Action2_typeof()->MakeType(type, ::g::Uno::String_typeof(), NULL), offsetof(HttpMessageHandlerRequest, Error1), 0,
        ::g::Uno::Action4_typeof()->MakeType(type, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), NULL), offsetof(HttpMessageHandlerRequest, Progress1), 0,
        ::g::Uno::Action1_typeof()->MakeType(type, NULL), offsetof(HttpMessageHandlerRequest, StateChanged1), 0,
        ::g::Uno::Action1_typeof()->MakeType(type, NULL), offsetof(HttpMessageHandlerRequest, Timeout1), 0);
    type->Reflection.SetFunctions(30,
        new uFunction("Abort", NULL, (void*)HttpMessageHandlerRequest__Abort_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("add_Aborted", NULL, (void*)HttpMessageHandlerRequest__add_Aborted_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(type, NULL)),
        new uFunction("remove_Aborted", NULL, (void*)HttpMessageHandlerRequest__remove_Aborted_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(type, NULL)),
        new uFunction("Dispose", NULL, (void*)HttpMessageHandlerRequest__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("add_Done", NULL, (void*)HttpMessageHandlerRequest__add_Done_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(type, NULL)),
        new uFunction("remove_Done", NULL, (void*)HttpMessageHandlerRequest__remove_Done_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(type, NULL)),
        new uFunction("EnableCache", NULL, (void*)HttpMessageHandlerRequest__EnableCache_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("add_Error", NULL, (void*)HttpMessageHandlerRequest__add_Error_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action2_typeof()->MakeType(type, ::g::Uno::String_typeof(), NULL)),
        new uFunction("remove_Error", NULL, (void*)HttpMessageHandlerRequest__remove_Error_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action2_typeof()->MakeType(type, ::g::Uno::String_typeof(), NULL)),
        new uFunction("GetResponseContentByteArray", NULL, (void*)HttpMessageHandlerRequest__GetResponseContentByteArray_fn, 0, false, ::g::Uno::Byte_typeof()->Array(), 0),
        new uFunction("GetResponseContentString", NULL, (void*)HttpMessageHandlerRequest__GetResponseContentString_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("GetResponseHeader", NULL, (void*)HttpMessageHandlerRequest__GetResponseHeader_fn, 0, false, ::g::Uno::String_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("GetResponseHeaders", NULL, (void*)HttpMessageHandlerRequest__GetResponseHeaders_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("GetResponseStatus", NULL, (void*)HttpMessageHandlerRequest__GetResponseStatus_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_HttpResponseType", NULL, (void*)HttpMessageHandlerRequest__get_HttpResponseType_fn, 0, false, ::g::Uno::Net::Http::HttpResponseType_typeof(), 0),
        new uFunction("set_HttpResponseType", NULL, (void*)HttpMessageHandlerRequest__set_HttpResponseType_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Net::Http::HttpResponseType_typeof()),
        new uFunction("get_Method", NULL, (void*)HttpMessageHandlerRequest__get_Method_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("add_Progress", NULL, (void*)HttpMessageHandlerRequest__add_Progress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action4_typeof()->MakeType(type, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), NULL)),
        new uFunction("remove_Progress", NULL, (void*)HttpMessageHandlerRequest__remove_Progress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action4_typeof()->MakeType(type, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), NULL)),
        new uFunction("SendAsync", NULL, (void*)HttpMessageHandlerRequest__SendAsync_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("SendAsync", NULL, (void*)HttpMessageHandlerRequest__SendAsync1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Byte_typeof()->Array()),
        new uFunction("SendAsync", NULL, (void*)HttpMessageHandlerRequest__SendAsync2_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("SetHeader", NULL, (void*)HttpMessageHandlerRequest__SetHeader_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("SetResponseType", NULL, (void*)HttpMessageHandlerRequest__SetResponseType_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Net::Http::HttpResponseType_typeof()),
        new uFunction("SetTimeout", NULL, (void*)HttpMessageHandlerRequest__SetTimeout_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_State", NULL, (void*)HttpMessageHandlerRequest__get_State_fn, 0, false, ::g::Uno::Net::Http::HttpRequestState_typeof(), 0),
        new uFunction("add_StateChanged", NULL, (void*)HttpMessageHandlerRequest__add_StateChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(type, NULL)),
        new uFunction("remove_StateChanged", NULL, (void*)HttpMessageHandlerRequest__remove_StateChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(type, NULL)),
        new uFunction("add_Timeout", NULL, (void*)HttpMessageHandlerRequest__add_Timeout_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(type, NULL)),
        new uFunction("remove_Timeout", NULL, (void*)HttpMessageHandlerRequest__remove_Timeout_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(type, NULL)));
}

HttpMessageHandlerRequest_type* HttpMessageHandlerRequest_typeof()
{
    static uSStrong<HttpMessageHandlerRequest_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(HttpMessageHandlerRequest);
    options.TypeSize = sizeof(HttpMessageHandlerRequest_type);
    type = (HttpMessageHandlerRequest_type*)uClassType::New("Uno.Net.Http.HttpMessageHandlerRequest", options);
    type->fp_build_ = HttpMessageHandlerRequest_build;
    type->fp_Finalize = (void(*)(uObject*))HttpMessageHandlerRequest__Finalize_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))HttpMessageHandlerRequest__Dispose_fn;
    return type;
}

// internal HttpMessageHandlerRequest(Uno.Net.Http.HttpMessageHandler handler, string method, string url, Uno.Threading.IDispatcher dispatcher)
void HttpMessageHandlerRequest__ctor__fn(HttpMessageHandlerRequest* __this, ::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher)
{
    __this->ctor_(handler, method, url, dispatcher);
}

// public void Abort()
void HttpMessageHandlerRequest__Abort_fn(HttpMessageHandlerRequest* __this)
{
    __this->Abort();
}

// public generated void add_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value)
void HttpMessageHandlerRequest__add_Aborted_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Aborted(value);
}

// public generated void remove_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value)
void HttpMessageHandlerRequest__remove_Aborted_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Aborted(value);
}

// private void CheckDisposed()
void HttpMessageHandlerRequest__CheckDisposed_fn(HttpMessageHandlerRequest* __this)
{
    __this->CheckDisposed();
}

// internal void CompleteRequest()
void HttpMessageHandlerRequest__CompleteRequest_fn(HttpMessageHandlerRequest* __this)
{
    __this->CompleteRequest();
}

// public void Dispose()
void HttpMessageHandlerRequest__Dispose_fn(HttpMessageHandlerRequest* __this)
{
    __this->Dispose();
}

// public generated void add_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value)
void HttpMessageHandlerRequest__add_Done_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Done(value);
}

// public generated void remove_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value)
void HttpMessageHandlerRequest__remove_Done_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Done(value);
}

// public void EnableCache(bool enableCache)
void HttpMessageHandlerRequest__EnableCache_fn(HttpMessageHandlerRequest* __this, bool* enableCache)
{
    __this->EnableCache(*enableCache);
}

// public generated void add_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string> value)
void HttpMessageHandlerRequest__add_Error_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Error(value);
}

// public generated void remove_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string> value)
void HttpMessageHandlerRequest__remove_Error_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Error(value);
}

// public byte[] GetResponseContentByteArray()
void HttpMessageHandlerRequest__GetResponseContentByteArray_fn(HttpMessageHandlerRequest* __this, uArray** __retval)
{
    *__retval = __this->GetResponseContentByteArray();
}

// public string GetResponseContentString()
void HttpMessageHandlerRequest__GetResponseContentString_fn(HttpMessageHandlerRequest* __this, uString** __retval)
{
    *__retval = __this->GetResponseContentString();
}

// public string GetResponseHeader(string name)
void HttpMessageHandlerRequest__GetResponseHeader_fn(HttpMessageHandlerRequest* __this, uString* name, uString** __retval)
{
    *__retval = __this->GetResponseHeader(name);
}

// public string GetResponseHeaders()
void HttpMessageHandlerRequest__GetResponseHeaders_fn(HttpMessageHandlerRequest* __this, uString** __retval)
{
    *__retval = __this->GetResponseHeaders();
}

// public int GetResponseStatus()
void HttpMessageHandlerRequest__GetResponseStatus_fn(HttpMessageHandlerRequest* __this, int32_t* __retval)
{
    *__retval = __this->GetResponseStatus();
}

// public Uno.Net.Http.HttpResponseType get_HttpResponseType()
void HttpMessageHandlerRequest__get_HttpResponseType_fn(HttpMessageHandlerRequest* __this, int32_t* __retval)
{
    *__retval = __this->HttpResponseType();
}

// public void set_HttpResponseType(Uno.Net.Http.HttpResponseType value)
void HttpMessageHandlerRequest__set_HttpResponseType_fn(HttpMessageHandlerRequest* __this, int32_t* value)
{
    __this->HttpResponseType(*value);
}

// private bool IsComplete()
void HttpMessageHandlerRequest__IsComplete_fn(HttpMessageHandlerRequest* __this, bool* __retval)
{
    *__retval = __this->IsComplete();
}

// private static bool IsHeaderValid(string name, string value)
void HttpMessageHandlerRequest__IsHeaderValid_fn(uString* name, uString* value, bool* __retval)
{
    *__retval = HttpMessageHandlerRequest::IsHeaderValid(name, value);
}

// public string get_Method()
void HttpMessageHandlerRequest__get_Method_fn(HttpMessageHandlerRequest* __this, uString** __retval)
{
    *__retval = __this->Method();
}

// internal HttpMessageHandlerRequest New(Uno.Net.Http.HttpMessageHandler handler, string method, string url, Uno.Threading.IDispatcher dispatcher)
void HttpMessageHandlerRequest__New1_fn(::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher, HttpMessageHandlerRequest** __retval)
{
    *__retval = HttpMessageHandlerRequest::New1(handler, method, url, dispatcher);
}

// internal void OnAborted()
void HttpMessageHandlerRequest__OnAborted_fn(HttpMessageHandlerRequest* __this)
{
    __this->OnAborted();
}

// internal void OnDone()
void HttpMessageHandlerRequest__OnDone_fn(HttpMessageHandlerRequest* __this)
{
    __this->OnDone();
}

// internal void OnError(string platformspesificErrorMessage)
void HttpMessageHandlerRequest__OnError_fn(HttpMessageHandlerRequest* __this, uString* platformspesificErrorMessage)
{
    __this->OnError(platformspesificErrorMessage);
}

// internal void OnStateChanged()
void HttpMessageHandlerRequest__OnStateChanged_fn(HttpMessageHandlerRequest* __this)
{
    __this->OnStateChanged();
}

// internal void OnTimeout()
void HttpMessageHandlerRequest__OnTimeout_fn(HttpMessageHandlerRequest* __this)
{
    __this->OnTimeout();
}

// public generated void add_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> value)
void HttpMessageHandlerRequest__add_Progress_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Progress(value);
}

// public generated void remove_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> value)
void HttpMessageHandlerRequest__remove_Progress_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Progress(value);
}

// public void SendAsync()
void HttpMessageHandlerRequest__SendAsync_fn(HttpMessageHandlerRequest* __this)
{
    __this->SendAsync();
}

// public void SendAsync(byte[] data)
void HttpMessageHandlerRequest__SendAsync1_fn(HttpMessageHandlerRequest* __this, uArray* data)
{
    __this->SendAsync1(data);
}

// public void SendAsync(string data)
void HttpMessageHandlerRequest__SendAsync2_fn(HttpMessageHandlerRequest* __this, uString* data)
{
    __this->SendAsync2(data);
}

// public void SetHeader(string name, string value)
void HttpMessageHandlerRequest__SetHeader_fn(HttpMessageHandlerRequest* __this, uString* name, uString* value)
{
    __this->SetHeader(name, value);
}

// public void SetResponseType(Uno.Net.Http.HttpResponseType responseType)
void HttpMessageHandlerRequest__SetResponseType_fn(HttpMessageHandlerRequest* __this, int32_t* responseType)
{
    __this->SetResponseType(*responseType);
}

// public void SetTimeout(int timeoutInMilliseconds)
void HttpMessageHandlerRequest__SetTimeout_fn(HttpMessageHandlerRequest* __this, int32_t* timeoutInMilliseconds)
{
    __this->SetTimeout(*timeoutInMilliseconds);
}

// public Uno.Net.Http.HttpRequestState get_State()
void HttpMessageHandlerRequest__get_State_fn(HttpMessageHandlerRequest* __this, int32_t* __retval)
{
    *__retval = __this->State();
}

// private void set_State(Uno.Net.Http.HttpRequestState value)
void HttpMessageHandlerRequest__set_State_fn(HttpMessageHandlerRequest* __this, int32_t* value)
{
    __this->State(*value);
}

// public generated void add_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value)
void HttpMessageHandlerRequest__add_StateChanged_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_StateChanged(value);
}

// public generated void remove_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value)
void HttpMessageHandlerRequest__remove_StateChanged_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_StateChanged(value);
}

// public generated void add_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value)
void HttpMessageHandlerRequest__add_Timeout_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Timeout(value);
}

// public generated void remove_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value)
void HttpMessageHandlerRequest__remove_Timeout_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Timeout(value);
}

// internal HttpMessageHandlerRequest(Uno.Net.Http.HttpMessageHandler handler, string method, string url, Uno.Threading.IDispatcher dispatcher) [instance]
void HttpMessageHandlerRequest::ctor_(::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", ".ctor(Uno.Net.Http.HttpMessageHandler,string,string,Uno.Threading.IDispatcher)");

    if (handler == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("handler")));

    if (::g::Uno::String::op_Equality(method, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("method")));

    if (::g::Uno::String::op_Equality(url, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("url")));

    if (dispatcher == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("dispatcher")));

    method = ::g::Uno::String::ToUpper(uPtr(method));
    _httpRequest = (uObject*)::g::Uno::Net::Http::Implementation::iOSHttpRequest::New1(this, method, url);
    _httpMessageHandler = handler;
    _method = method;
    _url = url;
    _dispatcher = dispatcher;
    State(1);
}

// public void Abort() [instance]
void HttpMessageHandlerRequest::Abort()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "Abort()");
    CheckDisposed();

    if (State() >= 5)
        return;

    ::g::Uno::Net::Http::Implementation::IHttpRequest::Abort(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()));
    OnAborted();
}

// public generated void add_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance]
void HttpMessageHandlerRequest::add_Aborted(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "add_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>)");
    Aborted1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Aborted1, value), ::g::Uno::Action1_typeof()->MakeType(__type, NULL));
}

// public generated void remove_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance]
void HttpMessageHandlerRequest::remove_Aborted(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "remove_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>)");
    Aborted1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Aborted1, value), ::g::Uno::Action1_typeof()->MakeType(__type, NULL));
}

// private void CheckDisposed() [instance]
void HttpMessageHandlerRequest::CheckDisposed()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "CheckDisposed()");

    if (_httpRequest == NULL)
        U_THROW(::g::Uno::ObjectDisposedException::New4(uString::Const("HttpMessageHandlerRequest")));
}

// internal void CompleteRequest() [instance]
void HttpMessageHandlerRequest::CompleteRequest()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "CompleteRequest()");
    uPtr(_httpMessageHandler)->CompleteRequest(this);
    _httpMessageHandler = NULL;
}

// public void Dispose() [instance]
void HttpMessageHandlerRequest::Dispose()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "Dispose()");
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_httpRequest), ::g::Uno::IDisposable_typeof()));
    _httpRequest = NULL;
    _optionalPayloadCache = NULL;
    ::g::Uno::GC::SuppressFinalize(this);
}

// public generated void add_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance]
void HttpMessageHandlerRequest::add_Done(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "add_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>)");
    Done1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Done1, value), ::g::Uno::Action1_typeof()->MakeType(__type, NULL));
}

// public generated void remove_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance]
void HttpMessageHandlerRequest::remove_Done(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "remove_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>)");
    Done1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Done1, value), ::g::Uno::Action1_typeof()->MakeType(__type, NULL));
}

// public void EnableCache(bool enableCache) [instance]
void HttpMessageHandlerRequest::EnableCache(bool enableCache)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "EnableCache(bool)");
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    ::g::Uno::Net::Http::Implementation::IHttpRequest::EnableCache(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()), enableCache);
}

// public generated void add_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string> value) [instance]
void HttpMessageHandlerRequest::add_Error(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "add_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string>)");
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Error1, value), ::g::Uno::Action2_typeof()->MakeType(__type, ::g::Uno::String_typeof(), NULL));
}

// public generated void remove_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string> value) [instance]
void HttpMessageHandlerRequest::remove_Error(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "remove_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string>)");
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Error1, value), ::g::Uno::Action2_typeof()->MakeType(__type, ::g::Uno::String_typeof(), NULL));
}

// public byte[] GetResponseContentByteArray() [instance]
uArray* HttpMessageHandlerRequest::GetResponseContentByteArray()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "GetResponseContentByteArray()");
    uArray* ind2;
    CheckDisposed();

    if (HttpResponseType() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidResponseTypeException::New4());

    if ((State() < 4) || (State() > 5))
        return uArray::New(::g::Uno::Byte_typeof()->Array(), 0);

    ind2 = ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseContentByteArray(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()));
    return (ind2 != NULL) ? ind2 : uArray::New(::g::Uno::Byte_typeof()->Array(), 0);
}

// public string GetResponseContentString() [instance]
uString* HttpMessageHandlerRequest::GetResponseContentString()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "GetResponseContentString()");
    uString* ind1;
    CheckDisposed();

    if (HttpResponseType() != 0)
        U_THROW(::g::Uno::Net::Http::InvalidResponseTypeException::New4());

    if ((State() < 4) || (State() > 5))
        return uString::Const("");

    ind1 = ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseContentString(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()));
    return (ind1 != NULL) ? ind1 : uString::Const("");
}

// public string GetResponseHeader(string name) [instance]
uString* HttpMessageHandlerRequest::GetResponseHeader(uString* name)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "GetResponseHeader(string)");
    CheckDisposed();

    if ((State() < 3) || (State() > 5))
        return uString::Const("");

    return ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseHeader(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()), name);
}

// public string GetResponseHeaders() [instance]
uString* HttpMessageHandlerRequest::GetResponseHeaders()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "GetResponseHeaders()");
    CheckDisposed();

    if ((State() < 3) || (State() > 5))
        return uString::Const("");

    return ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseHeaders(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()));
}

// public int GetResponseStatus() [instance]
int32_t HttpMessageHandlerRequest::GetResponseStatus()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "GetResponseStatus()");
    CheckDisposed();

    if ((State() < 3) || (State() > 5))
        return 0;

    return ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseStatus(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()));
}

// public Uno.Net.Http.HttpResponseType get_HttpResponseType() [instance]
int32_t HttpMessageHandlerRequest::HttpResponseType()
{
    return _responseType;
}

// public void set_HttpResponseType(Uno.Net.Http.HttpResponseType value) [instance]
void HttpMessageHandlerRequest::HttpResponseType(int32_t value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "set_HttpResponseType(Uno.Net.Http.HttpResponseType)");
    SetResponseType(value);
}

// private bool IsComplete() [instance]
bool HttpMessageHandlerRequest::IsComplete()
{
    return State() >= 5;
}

// public string get_Method() [instance]
uString* HttpMessageHandlerRequest::Method()
{
    return _method;
}

// internal void OnAborted() [instance]
void HttpMessageHandlerRequest::OnAborted()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "OnAborted()");
    uDelegate* handler = Aborted1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::g::Uno::Threading::IDispatcher_typeof()), uDelegate::New(::g::Uno::Action_typeof(), (void*)HttpMessageHandlerRequest__DispatchClosure__Run_fn, HttpMessageHandlerRequest__DispatchClosure::New1(6, handler, this)));
}

// internal void OnDone() [instance]
void HttpMessageHandlerRequest::OnDone()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "OnDone()");
    uDelegate* handler = Done1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::g::Uno::Threading::IDispatcher_typeof()), uDelegate::New(::g::Uno::Action_typeof(), (void*)HttpMessageHandlerRequest__DispatchClosure__Run_fn, HttpMessageHandlerRequest__DispatchClosure::New1(5, handler, this)));
}

// internal void OnError(string platformspesificErrorMessage) [instance]
void HttpMessageHandlerRequest::OnError(uString* platformspesificErrorMessage)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "OnError(string)");
    HttpMessageHandlerRequest__DispatchClosure1* ret4;
    uDelegate* handler = Error1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::g::Uno::Threading::IDispatcher_typeof()), uDelegate::New(::g::Uno::Action_typeof(), (void*)HttpMessageHandlerRequest__DispatchClosure1__Run_fn, (HttpMessageHandlerRequest__DispatchClosure1__New1_fn(HttpMessageHandlerRequest__DispatchClosure1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), uCRef<int32_t>(7), handler, this, platformspesificErrorMessage, &ret4), ret4)));
}

// internal void OnStateChanged() [instance]
void HttpMessageHandlerRequest::OnStateChanged()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "OnStateChanged()");

    if (State() > 5)
        return;

    uDelegate* handler = StateChanged1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(this);
}

// internal void OnTimeout() [instance]
void HttpMessageHandlerRequest::OnTimeout()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "OnTimeout()");
    uDelegate* handler = Timeout1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::g::Uno::Threading::IDispatcher_typeof()), uDelegate::New(::g::Uno::Action_typeof(), (void*)HttpMessageHandlerRequest__DispatchClosure__Run_fn, HttpMessageHandlerRequest__DispatchClosure::New1(8, handler, this)));
}

// public generated void add_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> value) [instance]
void HttpMessageHandlerRequest::add_Progress(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "add_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool>)");
    Progress1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Progress1, value), ::g::Uno::Action4_typeof()->MakeType(__type, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), NULL));
}

// public generated void remove_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> value) [instance]
void HttpMessageHandlerRequest::remove_Progress(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "remove_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool>)");
    Progress1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Progress1, value), ::g::Uno::Action4_typeof()->MakeType(__type, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), NULL));
}

// public void SendAsync() [instance]
void HttpMessageHandlerRequest::SendAsync()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "SendAsync()");
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    _state = 2;
    ::g::Uno::Net::Http::Implementation::IHttpRequest::SendAsync(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()));
    OnStateChanged();
}

// public void SendAsync(byte[] data) [instance]
void HttpMessageHandlerRequest::SendAsync1(uArray* data)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "SendAsync(byte[])");
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    _state = 2;

    if (((::g::Uno::String::op_Equality(Method(), uString::Const("GET")) || ::g::Uno::String::op_Equality(Method(), uString::Const("HEAD"))) || (data == NULL)) || (uPtr(data)->Length() == 0))
        ::g::Uno::Net::Http::Implementation::IHttpRequest::SendAsync(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()));
    else
    {
        _optionalPayloadCache = data;
        ::g::Uno::Net::Http::Implementation::IHttpRequest::SendAsync1(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()), data);
    }

    OnStateChanged();
}

// public void SendAsync(string data) [instance]
void HttpMessageHandlerRequest::SendAsync2(uString* data)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "SendAsync(string)");
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    _state = 2;

    if (((::g::Uno::String::op_Equality(Method(), uString::Const("GET")) || ::g::Uno::String::op_Equality(Method(), uString::Const("HEAD"))) || ::g::Uno::String::op_Equality(data, NULL)) || ::g::Uno::String::op_Equality(data, uString::Const("")))
        ::g::Uno::Net::Http::Implementation::IHttpRequest::SendAsync(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()));
    else
        ::g::Uno::Net::Http::Implementation::IHttpRequest::SendAsync2(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()), data);

    OnStateChanged();
}

// public void SetHeader(string name, string value) [instance]
void HttpMessageHandlerRequest::SetHeader(uString* name, uString* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "SetHeader(string,string)");
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    if (!HttpMessageHandlerRequest::IsHeaderValid(name, value))
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("Not allowed to set header \""), name), uString::Const("\" on this target."))));

    ::g::Uno::Net::Http::Implementation::IHttpRequest::SetHeader(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()), name, value);
}

// public void SetResponseType(Uno.Net.Http.HttpResponseType responseType) [instance]
void HttpMessageHandlerRequest::SetResponseType(int32_t responseType)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "SetResponseType(Uno.Net.Http.HttpResponseType)");
    CheckDisposed();

    if (State() >= 4)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    _responseType = responseType;
}

// public void SetTimeout(int timeoutInMilliseconds) [instance]
void HttpMessageHandlerRequest::SetTimeout(int32_t timeoutInMilliseconds)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "SetTimeout(int)");
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    ::g::Uno::Net::Http::Implementation::IHttpRequest::SetTimeout(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()), timeoutInMilliseconds);
}

// public Uno.Net.Http.HttpRequestState get_State() [instance]
int32_t HttpMessageHandlerRequest::State()
{
    return _state;
}

// private void set_State(Uno.Net.Http.HttpRequestState value) [instance]
void HttpMessageHandlerRequest::State(int32_t value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "set_State(Uno.Net.Http.HttpRequestState)");

    if (_state == value)
        return;

    _state = value;
    OnStateChanged();
}

// public generated void add_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance]
void HttpMessageHandlerRequest::add_StateChanged(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "add_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>)");
    StateChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(StateChanged1, value), ::g::Uno::Action1_typeof()->MakeType(__type, NULL));
}

// public generated void remove_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance]
void HttpMessageHandlerRequest::remove_StateChanged(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "remove_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>)");
    StateChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(StateChanged1, value), ::g::Uno::Action1_typeof()->MakeType(__type, NULL));
}

// public generated void add_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance]
void HttpMessageHandlerRequest::add_Timeout(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "add_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>)");
    Timeout1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Timeout1, value), ::g::Uno::Action1_typeof()->MakeType(__type, NULL));
}

// public generated void remove_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance]
void HttpMessageHandlerRequest::remove_Timeout(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "remove_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>)");
    Timeout1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Timeout1, value), ::g::Uno::Action1_typeof()->MakeType(__type, NULL));
}

// private static bool IsHeaderValid(string name, string value) [static]
bool HttpMessageHandlerRequest::IsHeaderValid(uString* name, uString* value)
{
    return true;
}

// internal HttpMessageHandlerRequest New(Uno.Net.Http.HttpMessageHandler handler, string method, string url, Uno.Threading.IDispatcher dispatcher) [static]
HttpMessageHandlerRequest* HttpMessageHandlerRequest::New1(::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher)
{
    HttpMessageHandlerRequest* obj3 = (HttpMessageHandlerRequest*)uNew(HttpMessageHandlerRequest_typeof());
    obj3->ctor_(handler, method, url, dispatcher);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/HttpRequestState.uno
// ----------------------------------------------------------------------

// public enum HttpRequestState
uEnumType* HttpRequestState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Http.HttpRequestState", ::g::Uno::Int_typeof(), 10);
    type->SetLiterals(
        "Uninitialized", 0LL,
        "Opened", 1LL,
        "Sent", 2LL,
        "HeadersReceived", 3LL,
        "Loading", 4LL,
        "Done", 5LL,
        "Aborted", 6LL,
        "Errored", 7LL,
        "TimedOut", 8LL,
        "Unsent", 0LL);
    return type;
}

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/HttpResponseType.uno
// ----------------------------------------------------------------------

// public enum HttpResponseType
uEnumType* HttpResponseType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Http.HttpResponseType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", -1LL,
        "String", 0LL,
        "ByteArray", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/HttpStatusReasonPhrase.uno
// ----------------------------------------------------------------------------

// public static class HttpStatusReasonPhrase
// {
// static generated HttpStatusReasonPhrase()
static void HttpStatusReasonPhrase__cctor__fn(uType* __type)
{
    ::g::Uno::Collections::Dictionary* collection5;
    ::g::Uno::Collections::Dictionary* collection4;
    ::g::Uno::Collections::Dictionary* collection3;
    ::g::Uno::Collections::Dictionary* collection2;
    ::g::Uno::Collections::Dictionary* collection1;
    HttpStatusReasonPhrase::Informational_ = (uObject*)(collection5 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[3/*Uno.Collections.Dictionary<int, string>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection5), uCRef<int32_t>(100), ::STRINGS[25/*"Continue"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection5), uCRef<int32_t>(101), ::STRINGS[26/*"Switching P...*/]), collection5);
    HttpStatusReasonPhrase::Success_ = (uObject*)(collection4 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[3/*Uno.Collections.Dictionary<int, string>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int32_t>(200), ::STRINGS[27/*"OK"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int32_t>(201), ::STRINGS[28/*"Created"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int32_t>(202), ::STRINGS[29/*"Accepted"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int32_t>(203), ::STRINGS[30/*"Non-Authori...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int32_t>(204), ::STRINGS[31/*"No Content"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int32_t>(205), ::STRINGS[32/*"Reset Content"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int32_t>(206), ::STRINGS[33/*"Partial Con...*/]), collection4);
    HttpStatusReasonPhrase::Redirection_ = (uObject*)(collection3 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[3/*Uno.Collections.Dictionary<int, string>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int32_t>(300), ::STRINGS[34/*"Multiple Ch...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int32_t>(301), ::STRINGS[35/*"Moved Perma...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int32_t>(302), ::STRINGS[36/*"Found"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int32_t>(303), ::STRINGS[37/*"See Other"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int32_t>(304), ::STRINGS[38/*"Not Modified"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int32_t>(305), ::STRINGS[39/*"Use Proxy"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int32_t>(307), ::STRINGS[40/*"Temporary R...*/]), collection3);
    HttpStatusReasonPhrase::ClientErrors_ = (uObject*)(collection2 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[3/*Uno.Collections.Dictionary<int, string>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(400), ::STRINGS[41/*"Bad Request"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(401), ::STRINGS[42/*"Unauthorized"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(402), ::STRINGS[43/*"Payment Req...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(403), ::STRINGS[44/*"Forbidden"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(404), ::STRINGS[45/*"Not Found"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(405), ::STRINGS[46/*"Method Not ...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(406), ::STRINGS[47/*"Not Accepta...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(407), ::STRINGS[48/*"Proxy Authe...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(408), ::STRINGS[49/*"Request Tim...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(409), ::STRINGS[50/*"Conflict"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(410), ::STRINGS[51/*"Gone"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(411), ::STRINGS[52/*"Length Requ...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(412), ::STRINGS[53/*"Preconditio...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(413), ::STRINGS[54/*"Request Ent...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(414), ::STRINGS[55/*"Request-URI...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(415), ::STRINGS[56/*"Unsupported...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(416), ::STRINGS[57/*"Requested r...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(417), ::STRINGS[58/*"Expectation...*/]), collection2);
    HttpStatusReasonPhrase::ServerErrors_ = (uObject*)(collection1 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[3/*Uno.Collections.Dictionary<int, string>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int32_t>(500), ::STRINGS[59/*"Internal Se...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int32_t>(501), ::STRINGS[60/*"Not Impleme...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int32_t>(502), ::STRINGS[61/*"Bad Gateway"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int32_t>(503), ::STRINGS[62/*"Service Una...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int32_t>(504), ::STRINGS[63/*"Gateway Tim...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int32_t>(505), ::STRINGS[64/*"HTTP Versio...*/]), collection1);
}

static void HttpStatusReasonPhrase_build(uType* type)
{
    ::STRINGS[25] = uString::Const("Continue");
    ::STRINGS[26] = uString::Const("Switching Protocols");
    ::STRINGS[27] = uString::Const("OK");
    ::STRINGS[28] = uString::Const("Created");
    ::STRINGS[29] = uString::Const("Accepted");
    ::STRINGS[30] = uString::Const("Non-Authoritative Information");
    ::STRINGS[31] = uString::Const("No Content");
    ::STRINGS[32] = uString::Const("Reset Content");
    ::STRINGS[33] = uString::Const("Partial Content");
    ::STRINGS[34] = uString::Const("Multiple Choices");
    ::STRINGS[35] = uString::Const("Moved Permanently");
    ::STRINGS[36] = uString::Const("Found");
    ::STRINGS[37] = uString::Const("See Other");
    ::STRINGS[38] = uString::Const("Not Modified");
    ::STRINGS[39] = uString::Const("Use Proxy");
    ::STRINGS[40] = uString::Const("Temporary Redirect");
    ::STRINGS[41] = uString::Const("Bad Request");
    ::STRINGS[42] = uString::Const("Unauthorized");
    ::STRINGS[43] = uString::Const("Payment Required");
    ::STRINGS[44] = uString::Const("Forbidden");
    ::STRINGS[45] = uString::Const("Not Found");
    ::STRINGS[46] = uString::Const("Method Not Allowed");
    ::STRINGS[47] = uString::Const("Not Acceptable");
    ::STRINGS[48] = uString::Const("Proxy Authentication Required");
    ::STRINGS[49] = uString::Const("Request Time-out");
    ::STRINGS[50] = uString::Const("Conflict");
    ::STRINGS[51] = uString::Const("Gone");
    ::STRINGS[52] = uString::Const("Length Required");
    ::STRINGS[53] = uString::Const("Precondition Failed");
    ::STRINGS[54] = uString::Const("Request Entity Too Large");
    ::STRINGS[55] = uString::Const("Request-URI Too Large");
    ::STRINGS[56] = uString::Const("Unsupported Media Type");
    ::STRINGS[57] = uString::Const("Requested range not satisfiable");
    ::STRINGS[58] = uString::Const("Expectation Failed");
    ::STRINGS[59] = uString::Const("Internal Server Error");
    ::STRINGS[60] = uString::Const("Not Implemented");
    ::STRINGS[61] = uString::Const("Bad Gateway");
    ::STRINGS[62] = uString::Const("Service Unavailable");
    ::STRINGS[63] = uString::Const("Gateway Time-out");
    ::STRINGS[64] = uString::Const("HTTP Version not supported");
    ::TYPES[3] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::IDictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[4/*Uno.Collections.IDictionary<int, string>*/], (uintptr_t)&HttpStatusReasonPhrase::Informational_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Collections.IDictionary<int, string>*/], (uintptr_t)&HttpStatusReasonPhrase::Success_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Collections.IDictionary<int, string>*/], (uintptr_t)&HttpStatusReasonPhrase::Redirection_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Collections.IDictionary<int, string>*/], (uintptr_t)&HttpStatusReasonPhrase::ClientErrors_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Collections.IDictionary<int, string>*/], (uintptr_t)&HttpStatusReasonPhrase::ServerErrors_, uFieldFlagsStatic);
    type->Reflection.SetFields(5,
        new uField("ClientErrors", 3),
        new uField("Informational", 0),
        new uField("Redirection", 2),
        new uField("ServerErrors", 4),
        new uField("Success", 1));
    type->Reflection.SetFunctions(1,
        new uFunction("GetFromStatusCode", NULL, (void*)HttpStatusReasonPhrase__GetFromStatusCode_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Uno::Int_typeof()));
}

uClassType* HttpStatusReasonPhrase_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Net.Http.HttpStatusReasonPhrase", options);
    type->fp_build_ = HttpStatusReasonPhrase_build;
    type->fp_cctor_ = HttpStatusReasonPhrase__cctor__fn;
    return type;
}

// public static string GetFromStatusCode(int statusCode)
void HttpStatusReasonPhrase__GetFromStatusCode_fn(int32_t* statusCode, uString** __retval)
{
    *__retval = HttpStatusReasonPhrase::GetFromStatusCode(*statusCode);
}

uSStrong<uObject*> HttpStatusReasonPhrase::Informational_;
uSStrong<uObject*> HttpStatusReasonPhrase::Success_;
uSStrong<uObject*> HttpStatusReasonPhrase::Redirection_;
uSStrong<uObject*> HttpStatusReasonPhrase::ClientErrors_;
uSStrong<uObject*> HttpStatusReasonPhrase::ServerErrors_;

// public static string GetFromStatusCode(int statusCode) [static]
uString* HttpStatusReasonPhrase::GetFromStatusCode(int32_t statusCode)
{
    uStackFrame __("Uno.Net.Http.HttpStatusReasonPhrase", "GetFromStatusCode(int)");
    HttpStatusReasonPhrase_typeof()->Init();
    bool ret6;
    bool ret7;
    bool ret8;
    bool ret9;
    bool ret10;
    uString* description;

    if ((::g::Uno::Collections::IDictionary::TryGetValue_ex(uInterface(uPtr(HttpStatusReasonPhrase::Informational_), ::TYPES[4/*Uno.Collections.IDictionary<int, string>*/]), uCRef<int32_t>(statusCode), (void**)(&description), &ret6), ret6))
        return description;

    if ((::g::Uno::Collections::IDictionary::TryGetValue_ex(uInterface(uPtr(HttpStatusReasonPhrase::Success_), ::TYPES[4/*Uno.Collections.IDictionary<int, string>*/]), uCRef<int32_t>(statusCode), (void**)(&description), &ret7), ret7))
        return description;

    if ((::g::Uno::Collections::IDictionary::TryGetValue_ex(uInterface(uPtr(HttpStatusReasonPhrase::Redirection_), ::TYPES[4/*Uno.Collections.IDictionary<int, string>*/]), uCRef<int32_t>(statusCode), (void**)(&description), &ret8), ret8))
        return description;

    if ((::g::Uno::Collections::IDictionary::TryGetValue_ex(uInterface(uPtr(HttpStatusReasonPhrase::ClientErrors_), ::TYPES[4/*Uno.Collections.IDictionary<int, string>*/]), uCRef<int32_t>(statusCode), (void**)(&description), &ret9), ret9))
        return description;

    if ((::g::Uno::Collections::IDictionary::TryGetValue_ex(uInterface(uPtr(HttpStatusReasonPhrase::ServerErrors_), ::TYPES[4/*Uno.Collections.IDictionary<int, string>*/]), uCRef<int32_t>(statusCode), (void**)(&description), &ret10), ret10))
        return description;

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/HttpMessageHandlerRequest.uno
// -------------------------------------------------------------------------------

// public sealed class InvalidResponseTypeException
// {
static void InvalidResponseTypeException_build(uType* type)
{
    ::STRINGS[65] = uString::Const("Response type is invalid.");
    type->SetFields(4);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)InvalidResponseTypeException__New4_fn, 0, true, type, 0));
}

::g::Uno::Exception_type* InvalidResponseTypeException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(InvalidResponseTypeException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.Net.Http.InvalidResponseTypeException", options);
    type->fp_build_ = InvalidResponseTypeException_build;
    type->fp_ctor_ = (void*)InvalidResponseTypeException__New4_fn;
    return type;
}

// public InvalidResponseTypeException()
void InvalidResponseTypeException__ctor_3_fn(InvalidResponseTypeException* __this)
{
    __this->ctor_3();
}

// public InvalidResponseTypeException New()
void InvalidResponseTypeException__New4_fn(InvalidResponseTypeException** __retval)
{
    *__retval = InvalidResponseTypeException::New4();
}

// public InvalidResponseTypeException() [instance]
void InvalidResponseTypeException::ctor_3()
{
    ctor_1(::STRINGS[65/*"Response ty...*/]);
}

// public InvalidResponseTypeException New() [static]
InvalidResponseTypeException* InvalidResponseTypeException::New4()
{
    InvalidResponseTypeException* obj1 = (InvalidResponseTypeException*)uNew(InvalidResponseTypeException_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/HttpMessageHandlerRequest.uno
// -------------------------------------------------------------------------------

// public sealed class InvalidStateException
// {
static void InvalidStateException_build(uType* type)
{
    ::STRINGS[66] = uString::Const("The object is in an invalid state.");
    type->SetFields(4);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)InvalidStateException__New4_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)InvalidStateException__New5_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* InvalidStateException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(InvalidStateException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.Net.Http.InvalidStateException", options);
    type->fp_build_ = InvalidStateException_build;
    type->fp_ctor_ = (void*)InvalidStateException__New4_fn;
    return type;
}

// public InvalidStateException()
void InvalidStateException__ctor_3_fn(InvalidStateException* __this)
{
    __this->ctor_3();
}

// public InvalidStateException(string message)
void InvalidStateException__ctor_4_fn(InvalidStateException* __this, uString* message)
{
    __this->ctor_4(message);
}

// public InvalidStateException New()
void InvalidStateException__New4_fn(InvalidStateException** __retval)
{
    *__retval = InvalidStateException::New4();
}

// public InvalidStateException New(string message)
void InvalidStateException__New5_fn(uString* message, InvalidStateException** __retval)
{
    *__retval = InvalidStateException::New5(message);
}

// public InvalidStateException() [instance]
void InvalidStateException::ctor_3()
{
    ctor_1(::STRINGS[66/*"The object ...*/]);
}

// public InvalidStateException(string message) [instance]
void InvalidStateException::ctor_4(uString* message)
{
    ctor_1(message);
}

// public InvalidStateException New() [static]
InvalidStateException* InvalidStateException::New4()
{
    InvalidStateException* obj1 = (InvalidStateException*)uNew(InvalidStateException_typeof());
    obj1->ctor_3();
    return obj1;
}

// public InvalidStateException New(string message) [static]
InvalidStateException* InvalidStateException::New5(uString* message)
{
    InvalidStateException* obj2 = (InvalidStateException*)uNew(InvalidStateException_typeof());
    obj2->ctor_4(message);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/UriParsers/QueryParser.uno
// ----------------------------------------------------------------------------

// internal sealed class QueryParser
// {
static void QueryParser_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Net::Http::UriScheme_typeof());
}

uType* QueryParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(QueryParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.QueryParser", options);
    type->fp_build_ = QueryParser_build;
    return type;
}

// public static string Parse(string uriString, string scheme, int idx, int& startPartIdx)
void QueryParser__Parse_fn(uString* uriString, uString* scheme, int32_t* idx, int32_t* startPartIdx, uString** __retval)
{
    *__retval = QueryParser::Parse(uriString, scheme, *idx, startPartIdx);
}

// public static string Parse(string uriString, string scheme, int idx, int& startPartIdx) [static]
uString* QueryParser::Parse(uString* uriString, uString* scheme, int32_t idx, int32_t* startPartIdx)
{
    uStackFrame __("Uno.Net.Http.QueryParser", "Parse(string,string,int,int&)");

    if ((idx >= uPtr(uriString)->Length()) || !::g::Uno::Net::Http::UriScheme::IsHttpScheme(scheme))
        return ::g::Uno::String::Empty();

    int32_t startQuery = ::g::Uno::String::IndexOf1(uPtr(uriString), '?', idx);
    int32_t startHash = ::g::Uno::String::IndexOf1(uriString, '#', idx);

    if (startHash < 0)
        startHash = uPtr(uriString)->Length();

    if ((startQuery >= 0) && (startQuery < startHash))
    {
        *startPartIdx = startQuery;
        return ::g::Uno::String::Substring1(uPtr(uriString), *startPartIdx, startHash - *startPartIdx);
    }

    return ::g::Uno::String::Empty();
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/UriParsers/SchemeParser.uno
// -----------------------------------------------------------------------------

// internal sealed class SchemeParser
// {
static void SchemeParser_build(uType* type)
{
    ::STRINGS[8] = uString::Const(":");
    ::STRINGS[67] = uString::Const("The scheme isn't specified in uriString.");
    ::STRINGS[68] = uString::Const("The scheme specified in uriString is not correctly formed.");
    ::STRINGS[69] = uString::Const("The length of the scheme specified in uriString exceeds 1023 characters.");
    ::STRINGS[19] = uString::Const("There is an invalid character sequence in uriString.");
    type->SetDependencies(
        ::g::Uno::Net::Http::UriScheme_typeof());
}

uType* SchemeParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SchemeParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.SchemeParser", options);
    type->fp_build_ = SchemeParser_build;
    return type;
}

// public static Uno.Net.Http.SchemeParserResult Parse(string uriString, int& idx, bool& hasDoubleSlash)
void SchemeParser__Parse_fn(uString* uriString, int32_t* idx, bool* hasDoubleSlash, ::g::Uno::Net::Http::SchemeParserResult* __retval)
{
    *__retval = SchemeParser::Parse(uriString, idx, hasDoubleSlash);
}

// public static Uno.Net.Http.SchemeParserResult Parse(string uriString, int& idx, bool& hasDoubleSlash) [static]
::g::Uno::Net::Http::SchemeParserResult SchemeParser::Parse(uString* uriString, int32_t* idx, bool* hasDoubleSlash)
{
    uStackFrame __("Uno.Net.Http.SchemeParser", "Parse(string,int&,bool&)");
    ::g::Uno::Net::Http::SchemeParserResult result;
    int32_t end = ::g::Uno::String::IndexOf3(uPtr(uriString), ::STRINGS[8/*":"*/], *idx);

    if (end < 0)
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[67/*"The scheme ...*/]));

    if (((*idx + 2) >= uriString->Length()) || (end == *idx))
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[68/*"The scheme ...*/]));

    if ((end - *idx) > 1023)
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[69/*"The length ...*/]));

    result.Scheme = ::g::Uno::String::ToLower(uPtr(::g::Uno::String::Substring1(uriString, *idx, end - *idx)));
    result.Type = ::g::Uno::Net::Http::UriScheme::GetSchemeType(result.Scheme);
    *idx = end + 1;

    if (result.Type == 2)
        return result;

    *hasDoubleSlash = false;

    if ((((*idx + 1) < uriString->Length()) && (uriString->Item(*idx) == '/')) && (uriString->Item(*idx + 1) == '/'))
    {
        *hasDoubleSlash = true;
        *idx = *idx + 2;
    }

    if ((result.Type == 0) && !(*hasDoubleSlash))
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[19/*"There is an...*/]));

    return result;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/UriParsers/SchemeParser.uno
// -----------------------------------------------------------------------------

// internal struct SchemeParserResult
// {
static void SchemeParserResult_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Net::Http::UriSchemeType_typeof(), offsetof(SchemeParserResult, Type), 0,
        ::g::Uno::String_typeof(), offsetof(SchemeParserResult, Scheme), 0);
}

uStructType* SchemeParserResult_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 2;
    options.Alignment = alignof(SchemeParserResult);
    options.ValueSize = sizeof(SchemeParserResult);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Net.Http.SchemeParserResult", options);
    type->fp_build_ = SchemeParserResult_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/UriParsers/SegmentsParser.uno
// -------------------------------------------------------------------------------

// internal sealed class SegmentsParser
// {
static void SegmentsParser_build(uType* type)
{
    ::STRINGS[20] = uString::Const("/");
    ::TYPES[5] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
}

uType* SegmentsParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(SegmentsParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.SegmentsParser", options);
    type->fp_build_ = SegmentsParser_build;
    return type;
}

// private static string EscapeSegment(string stringToEscape)
void SegmentsParser__EscapeSegment_fn(uString* stringToEscape, uString** __retval)
{
    *__retval = SegmentsParser::EscapeSegment(stringToEscape);
}

// private static bool EscapeSegmentSymbol(byte symbol)
void SegmentsParser__EscapeSegmentSymbol_fn(uint8_t* symbol, bool* __retval)
{
    *__retval = SegmentsParser::EscapeSegmentSymbol(*symbol);
}

// public static string[] Parse(string uriString, int idx, int endIdx, int& startPartIdx)
void SegmentsParser__Parse_fn(uString* uriString, int32_t* idx, int32_t* endIdx, int32_t* startPartIdx, uArray** __retval)
{
    *__retval = SegmentsParser::Parse(uriString, *idx, *endIdx, startPartIdx);
}

// private static string ParseAbsolutePath(string uriString, int idx, int endIdx, int& startPartIdx)
void SegmentsParser__ParseAbsolutePath_fn(uString* uriString, int32_t* idx, int32_t* endIdx, int32_t* startPartIdx, uString** __retval)
{
    *__retval = SegmentsParser::ParseAbsolutePath(uriString, *idx, *endIdx, startPartIdx);
}

// public static string[] SplitSegments(string absolutePath)
void SegmentsParser__SplitSegments_fn(uString* absolutePath, uArray** __retval)
{
    *__retval = SegmentsParser::SplitSegments(absolutePath);
}

// private static string EscapeSegment(string stringToEscape) [static]
uString* SegmentsParser::EscapeSegment(uString* stringToEscape)
{
    uStackFrame __("Uno.Net.Http.SegmentsParser", "EscapeSegment(string)");
    uArray* bytes = ::g::Uno::Text::Utf8::GetBytes(stringToEscape);
    int32_t count = 0;

    for (int32_t i = 0; i < uPtr(bytes)->Length(); i++)
    {
        count++;

        if (SegmentsParser::EscapeSegmentSymbol(uPtr(bytes)->Item<uint8_t>(i)))
            count = count + 2;
    }

    uArray* result = uArray::New(::TYPES[5/*char[]*/], count);
    int32_t index = 0;

    for (int32_t i1 = 0; i1 < uPtr(bytes)->Length(); i1++)
    {
        uint8_t symbol = uPtr(bytes)->Item<uint8_t>(i1);

        if (SegmentsParser::EscapeSegmentSymbol(symbol))
        {
            uPtr(result)->Item<char16_t>(index++) = '%';
            result->Item<char16_t>(index++) = ::g::Uno::Net::Http::UriHelper::GetHexFromNumber((symbol >> 4) & 15);
            result->Item<char16_t>(index++) = ::g::Uno::Net::Http::UriHelper::GetHexFromNumber((int32_t)(symbol & 15));
        }
        else
            uPtr(result)->Item<char16_t>(index++) = (char16_t)symbol;
    }

    return uString::CharArray(result);
}

// private static bool EscapeSegmentSymbol(byte symbol) [static]
bool SegmentsParser::EscapeSegmentSymbol(uint8_t symbol)
{
    if (symbol >= 128)
        return true;

    char16_t ch = (char16_t)symbol;

    if (::g::Uno::Char::IsLetterOrDigit(ch))
        return false;

    if (::g::Uno::Char::IsControl(ch))
        return true;

    switch (ch)
    {
        case ' ':
        case '?':
        case '`':
            return true;
    }

    return false;
}

// public static string[] Parse(string uriString, int idx, int endIdx, int& startPartIdx) [static]
uArray* SegmentsParser::Parse(uString* uriString, int32_t idx, int32_t endIdx, int32_t* startPartIdx)
{
    uStackFrame __("Uno.Net.Http.SegmentsParser", "Parse(string,int,int,int&)");
    return SegmentsParser::SplitSegments(SegmentsParser::ParseAbsolutePath(uriString, idx, endIdx, startPartIdx));
}

// private static string ParseAbsolutePath(string uriString, int idx, int endIdx, int& startPartIdx) [static]
uString* SegmentsParser::ParseAbsolutePath(uString* uriString, int32_t idx, int32_t endIdx, int32_t* startPartIdx)
{
    uStackFrame __("Uno.Net.Http.SegmentsParser", "ParseAbsolutePath(string,int,int,int&)");
    int32_t start = ::g::Uno::String::IndexOf3(uPtr(uriString), ::STRINGS[20/*"/"*/], idx);

    if ((start < 0) || (start >= endIdx))
    {
        *startPartIdx = endIdx;
        return ::g::Uno::String::Empty();
    }

    *startPartIdx = start;
    return ::g::Uno::String::Substring1(uriString, start, endIdx - start);
}

// public static string[] SplitSegments(string absolutePath) [static]
uArray* SegmentsParser::SplitSegments(uString* absolutePath)
{
    uStackFrame __("Uno.Net.Http.SegmentsParser", "SplitSegments(string)");
    ::g::Uno::Collections::List* segments = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<string>*/]);
    int32_t segmentStart = 0;

    for (int32_t i = 0; i < uPtr(absolutePath)->Length(); ++i)
        if (uPtr(absolutePath)->Item(i) == '/')
        {
            ::g::Uno::Collections::List__Add_fn(uPtr(segments), ::g::Uno::String::op_Addition2(SegmentsParser::EscapeSegment(::g::Uno::String::Substring1(uPtr(absolutePath), segmentStart, i - segmentStart)), ::STRINGS[20/*"/"*/]));
            segmentStart = i + 1;
        }

    if (segmentStart < uPtr(absolutePath)->Length())
        ::g::Uno::Collections::List__Add_fn(uPtr(segments), SegmentsParser::EscapeSegment(::g::Uno::String::Substring1(uPtr(absolutePath), segmentStart, uPtr(absolutePath)->Length() - segmentStart)));

    return (uArray*)segments->ToArray();
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/HttpMessageHandler.uno
// ------------------------------------------------------------------------

// internal static class HttpMessageHandler.StaticData
// {
// static generated StaticData()
static void HttpMessageHandler__StaticData__cctor__fn(uType* __type)
{
    HttpMessageHandler__StaticData::_syncLock_ = ::g::Uno::Object::New();
}

static void HttpMessageHandler__StaticData_build(uType* type)
{
    type->SetFields(0,
        uObject_typeof(), (uintptr_t)&HttpMessageHandler__StaticData::_syncLock_, uFieldFlagsStatic);
}

uClassType* HttpMessageHandler__StaticData_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Net.Http.HttpMessageHandler.StaticData", options);
    type->fp_build_ = HttpMessageHandler__StaticData_build;
    type->fp_cctor_ = HttpMessageHandler__StaticData__cctor__fn;
    return type;
}

// internal static void DecrementPendingRequests()
void HttpMessageHandler__StaticData__DecrementPendingRequests_fn()
{
    HttpMessageHandler__StaticData::DecrementPendingRequests();
}

// internal static void IncrementPendingRequests()
void HttpMessageHandler__StaticData__IncrementPendingRequests_fn()
{
    HttpMessageHandler__StaticData::IncrementPendingRequests();
}

uSStrong<uObject*> HttpMessageHandler__StaticData::_syncLock_;

// internal static void DecrementPendingRequests() [static]
void HttpMessageHandler__StaticData::DecrementPendingRequests()
{
    HttpMessageHandler__StaticData_typeof()->Init();
}

// internal static void IncrementPendingRequests() [static]
void HttpMessageHandler__StaticData::IncrementPendingRequests()
{
    HttpMessageHandler__StaticData_typeof()->Init();
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/Uri.uno
// ---------------------------------------------------------

// public sealed class Uri
// {
static void Uri_build(uType* type)
{
    ::STRINGS[70] = uString::Const("uriString");
    ::STRINGS[71] = uString::Const("The URI is empty");
    ::STRINGS[72] = uString::Const("The length of uriString exceeds 65519 characters.");
    ::STRINGS[20] = uString::Const("/");
    ::STRINGS[73] = uString::Const("file");
    ::STRINGS[74] = uString::Const("Hostname part required in uriString for scheme ");
    ::STRINGS[75] = uString::Const("{0}:{1}");
    ::STRINGS[76] = uString::Const("//");
    ::STRINGS[77] = uString::Const("{0}{1}@");
    ::STRINGS[78] = uString::Const("{0}{1}{2}{3}");
    ::TYPES[6] = ::g::Uno::String_typeof()->Array();
    ::TYPES[7] = uObject_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::Net::Http::HostInfoParser_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(Uri, _hasDoubleSlash), 0,
        ::g::Uno::String_typeof(), offsetof(Uri, _Authority), 0,
        ::g::Uno::String_typeof(), offsetof(Uri, _Fragment), 0,
        ::g::Uno::String_typeof(), offsetof(Uri, _Host), 0,
        ::g::Uno::String_typeof(), offsetof(Uri, _OriginalString), 0,
        ::g::Uno::Int_typeof(), offsetof(Uri, _Port), 0,
        ::g::Uno::String_typeof(), offsetof(Uri, _Query), 0,
        ::g::Uno::String_typeof(), offsetof(Uri, _Scheme), 0,
        ::TYPES[6/*string[]*/], offsetof(Uri, _Segments), 0,
        ::g::Uno::String_typeof(), offsetof(Uri, _UserInfo), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("get_AbsolutePath", NULL, (void*)Uri__get_AbsolutePath_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_AbsoluteUri", NULL, (void*)Uri__get_AbsoluteUri_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Authority", NULL, (void*)Uri__get_Authority_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Fragment", NULL, (void*)Uri__get_Fragment_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Host", NULL, (void*)Uri__get_Host_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Uri__New1_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction("get_OriginalString", NULL, (void*)Uri__get_OriginalString_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_PathAndQuery", NULL, (void*)Uri__get_PathAndQuery_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Port", NULL, (void*)Uri__get_Port_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Query", NULL, (void*)Uri__get_Query_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Scheme", NULL, (void*)Uri__get_Scheme_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Segments", NULL, (void*)Uri__get_Segments_fn, 0, false, ::TYPES[6/*string[]*/], 0),
        new uFunction("get_UserInfo", NULL, (void*)Uri__get_UserInfo_fn, 0, false, ::g::Uno::String_typeof(), 0));
}

uType* Uri_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Uri);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.Uri", options);
    type->fp_build_ = Uri_build;
    return type;
}

// public Uri(string uriString)
void Uri__ctor__fn(Uri* __this, uString* uriString)
{
    __this->ctor_(uriString);
}

// public string get_AbsolutePath()
void Uri__get_AbsolutePath_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->AbsolutePath();
}

// public string get_AbsoluteUri()
void Uri__get_AbsoluteUri_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->AbsoluteUri();
}

// public generated string get_Authority()
void Uri__get_Authority_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->Authority();
}

// private generated void set_Authority(string value)
void Uri__set_Authority_fn(Uri* __this, uString* value)
{
    __this->Authority(value);
}

// private void CreateThis(string uriString)
void Uri__CreateThis_fn(Uri* __this, uString* uriString)
{
    __this->CreateThis(uriString);
}

// public generated string get_Fragment()
void Uri__get_Fragment_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->Fragment();
}

// private generated void set_Fragment(string value)
void Uri__set_Fragment_fn(Uri* __this, uString* value)
{
    __this->Fragment(value);
}

// public generated string get_Host()
void Uri__get_Host_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->Host();
}

// private generated void set_Host(string value)
void Uri__set_Host_fn(Uri* __this, uString* value)
{
    __this->Host(value);
}

// public Uri New(string uriString)
void Uri__New1_fn(uString* uriString, Uri** __retval)
{
    *__retval = Uri::New1(uriString);
}

// public generated string get_OriginalString()
void Uri__get_OriginalString_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->OriginalString();
}

// private generated void set_OriginalString(string value)
void Uri__set_OriginalString_fn(Uri* __this, uString* value)
{
    __this->OriginalString(value);
}

// public string get_PathAndQuery()
void Uri__get_PathAndQuery_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->PathAndQuery();
}

// public generated int get_Port()
void Uri__get_Port_fn(Uri* __this, int32_t* __retval)
{
    *__retval = __this->Port();
}

// private generated void set_Port(int value)
void Uri__set_Port_fn(Uri* __this, int32_t* value)
{
    __this->Port(*value);
}

// public generated string get_Query()
void Uri__get_Query_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->Query();
}

// private generated void set_Query(string value)
void Uri__set_Query_fn(Uri* __this, uString* value)
{
    __this->Query(value);
}

// public generated string get_Scheme()
void Uri__get_Scheme_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->Scheme();
}

// private generated void set_Scheme(string value)
void Uri__set_Scheme_fn(Uri* __this, uString* value)
{
    __this->Scheme(value);
}

// public generated string[] get_Segments()
void Uri__get_Segments_fn(Uri* __this, uArray** __retval)
{
    *__retval = __this->Segments();
}

// private generated void set_Segments(string[] value)
void Uri__set_Segments_fn(Uri* __this, uArray* value)
{
    __this->Segments(value);
}

// public generated string get_UserInfo()
void Uri__get_UserInfo_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->UserInfo();
}

// private generated void set_UserInfo(string value)
void Uri__set_UserInfo_fn(Uri* __this, uString* value)
{
    __this->UserInfo(value);
}

// public Uri(string uriString) [instance]
void Uri::ctor_(uString* uriString)
{
    uStackFrame __("Uno.Net.Http.Uri", ".ctor(string)");

    if (::g::Uno::String::op_Equality(uriString, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[70/*"uriString"*/]));

    if (::g::Uno::String::op_Equality(uriString, ::g::Uno::String::Empty()))
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[71/*"The URI is ...*/]));

    if (uPtr(uriString)->Length() > 65519)
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[72/*"The length ...*/]));

    CreateThis(uriString);
}

// public string get_AbsolutePath() [instance]
uString* Uri::AbsolutePath()
{
    uStackFrame __("Uno.Net.Http.Uri", "get_AbsolutePath()");
    return ::g::Uno::String::Join1(::g::Uno::String::Empty(), Segments());
}

// public string get_AbsoluteUri() [instance]
uString* Uri::AbsoluteUri()
{
    uStackFrame __("Uno.Net.Http.Uri", "get_AbsoluteUri()");
    uString* ind4;
    uString* ind5;
    uString* schemePrefix = ::g::Uno::String::Format(::STRINGS[75/*"{0}:{1}"*/], uArray::Init<uObject*>(::TYPES[7/*object[]*/], 2, (uString*)Scheme(), _hasDoubleSlash ? ::STRINGS[76/*"//"*/] : (uString*)::g::Uno::String::Empty()));

    if (!::g::Uno::String::IsNullOrEmpty(UserInfo()))
        schemePrefix = ::g::Uno::String::Format(::STRINGS[77/*"{0}{1}@"*/], uArray::Init<uObject*>(::TYPES[7/*object[]*/], 2, schemePrefix, (uString*)UserInfo()));

    return ::g::Uno::String::Format(::STRINGS[78/*"{0}{1}{2}{3}"*/], uArray::Init<uObject*>(::TYPES[7/*object[]*/], 4, schemePrefix, (ind4 = Authority(), (ind4 != NULL) ? ind4 : (uString*)::g::Uno::String::Empty()), (uString*)PathAndQuery(), (ind5 = Fragment(), (ind5 != NULL) ? ind5 : (uString*)::g::Uno::String::Empty())));
}

// public generated string get_Authority() [instance]
uString* Uri::Authority()
{
    return _Authority;
}

// private generated void set_Authority(string value) [instance]
void Uri::Authority(uString* value)
{
    _Authority = value;
}

// private void CreateThis(string uriString) [instance]
void Uri::CreateThis(uString* uriString)
{
    uStackFrame __("Uno.Net.Http.Uri", "CreateThis(string)");
    int32_t idx = 0;
    OriginalString(uriString);
    uriString = ::g::Uno::String::Trim(uPtr(uriString));
    ::g::Uno::Net::Http::SchemeParserResult schemeResult = ::g::Uno::Net::Http::SchemeParser::Parse(uriString, &idx, &_hasDoubleSlash);
    Scheme(schemeResult.Scheme);
    int32_t queryOrHashPartIdx = uriString->Length();
    int32_t partStartIdx = uriString->Length();
    int32_t absolutePathPartIdx = 0;

    if (schemeResult.Type == 2)
    {
        Segments(uArray::Init<uString*>(::TYPES[6/*string[]*/], 1, (uString*)::g::Uno::String::Substring1(uPtr(uriString), idx, uPtr(uriString)->Length() - idx)));
        return;
    }

    Query(::g::Uno::Net::Http::QueryParser::Parse(uriString, Scheme(), idx, &partStartIdx));
    queryOrHashPartIdx = (partStartIdx < queryOrHashPartIdx) ? partStartIdx : queryOrHashPartIdx;
    Fragment(::g::Uno::Net::Http::FragmentParser::Parse(uriString, idx, &partStartIdx));
    queryOrHashPartIdx = (partStartIdx < queryOrHashPartIdx) ? partStartIdx : queryOrHashPartIdx;
    Segments(::g::Uno::Net::Http::SegmentsParser::Parse(uriString, idx, queryOrHashPartIdx, &absolutePathPartIdx));

    if ((schemeResult.Type == 0) && (uPtr(Segments())->Length() == 0))
        Segments(uArray::Init<uString*>(::TYPES[6/*string[]*/], 1, ::STRINGS[20/*"/"*/]));

    if (absolutePathPartIdx > idx)
    {
        UserInfo(::g::Uno::Net::Http::UserInfoParser::Parse(uriString, absolutePathPartIdx, &idx));
        ::g::Uno::Net::Http::HostInfo* hostInfo = ::g::Uno::Net::Http::HostInfoParser::Parse(uriString, Scheme(), absolutePathPartIdx, &idx);
        Host(uPtr(hostInfo)->Host());
        Port(hostInfo->Port());
        Authority(hostInfo->Authority());
    }
    else
    {
        if (::g::Uno::String::op_Inequality(Scheme(), ::STRINGS[73/*"file"*/]))
            U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::g::Uno::String::op_Addition2(::STRINGS[74/*"Hostname pa...*/], Scheme())));
    }
}

// public generated string get_Fragment() [instance]
uString* Uri::Fragment()
{
    return _Fragment;
}

// private generated void set_Fragment(string value) [instance]
void Uri::Fragment(uString* value)
{
    _Fragment = value;
}

// public generated string get_Host() [instance]
uString* Uri::Host()
{
    return _Host;
}

// private generated void set_Host(string value) [instance]
void Uri::Host(uString* value)
{
    _Host = value;
}

// public generated string get_OriginalString() [instance]
uString* Uri::OriginalString()
{
    return _OriginalString;
}

// private generated void set_OriginalString(string value) [instance]
void Uri::OriginalString(uString* value)
{
    _OriginalString = value;
}

// public string get_PathAndQuery() [instance]
uString* Uri::PathAndQuery()
{
    uStackFrame __("Uno.Net.Http.Uri", "get_PathAndQuery()");
    return ::g::Uno::String::op_Addition2(AbsolutePath(), Query());
}

// public generated int get_Port() [instance]
int32_t Uri::Port()
{
    return _Port;
}

// private generated void set_Port(int value) [instance]
void Uri::Port(int32_t value)
{
    _Port = value;
}

// public generated string get_Query() [instance]
uString* Uri::Query()
{
    return _Query;
}

// private generated void set_Query(string value) [instance]
void Uri::Query(uString* value)
{
    _Query = value;
}

// public generated string get_Scheme() [instance]
uString* Uri::Scheme()
{
    return _Scheme;
}

// private generated void set_Scheme(string value) [instance]
void Uri::Scheme(uString* value)
{
    _Scheme = value;
}

// public generated string[] get_Segments() [instance]
uArray* Uri::Segments()
{
    return _Segments;
}

// private generated void set_Segments(string[] value) [instance]
void Uri::Segments(uArray* value)
{
    _Segments = value;
}

// public generated string get_UserInfo() [instance]
uString* Uri::UserInfo()
{
    return _UserInfo;
}

// private generated void set_UserInfo(string value) [instance]
void Uri::UserInfo(uString* value)
{
    _UserInfo = value;
}

// public Uri New(string uriString) [static]
Uri* Uri::New1(uString* uriString)
{
    Uri* obj6 = (Uri*)uNew(Uri_typeof());
    obj6->ctor_(uriString);
    return obj6;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/UriFormatException.uno
// ------------------------------------------------------------------------

// public sealed class UriFormatException
// {
static void UriFormatException_build(uType* type)
{
    type->SetFields(4);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UriFormatException__New4_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* UriFormatException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(UriFormatException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.Net.Http.UriFormatException", options);
    type->fp_build_ = UriFormatException_build;
    return type;
}

// public UriFormatException(string message)
void UriFormatException__ctor_3_fn(UriFormatException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public UriFormatException New(string message)
void UriFormatException__New4_fn(uString* message, UriFormatException** __retval)
{
    *__retval = UriFormatException::New4(message);
}

// public UriFormatException(string message) [instance]
void UriFormatException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public UriFormatException New(string message) [static]
UriFormatException* UriFormatException::New4(uString* message)
{
    UriFormatException* obj1 = (UriFormatException*)uNew(UriFormatException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/UriHelper.uno
// ---------------------------------------------------------------

// internal sealed class UriHelper
// {
static void UriHelper_build(uType* type)
{
}

uType* UriHelper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UriHelper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.UriHelper", options);
    type->fp_build_ = UriHelper_build;
    return type;
}

// public static char GetHexFromNumber(int value)
void UriHelper__GetHexFromNumber_fn(int32_t* value, char16_t* __retval)
{
    *__retval = UriHelper::GetHexFromNumber(*value);
}

// public static char GetHexFromNumber(int value) [static]
char16_t UriHelper::GetHexFromNumber(int32_t value)
{
    if (value > 9)
        return (char16_t)((65 + value) - 10);

    return (char16_t)(48 + value);
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/UriScheme.uno
// ---------------------------------------------------------------

// internal sealed class UriScheme
// {
// static generated UriScheme()
static void UriScheme__cctor__fn(uType* __type)
{
    ::g::Uno::Collections::List* collection2;
    ::g::Uno::Collections::List* collection1;
    UriScheme::KnownInternetSchemes_ = (collection2 = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<string>*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[79/*"http"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[80/*"https"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[81/*"ftp"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[82/*"gopher"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[83/*"nntp"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[84/*"telnet"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[85/*"wais"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[73/*"file"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[86/*"prospero"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[87/*"ws"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[88/*"wss"*/]), collection2);
    UriScheme::KnownNonInternetSchemes_ = (collection1 = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<string>*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[89/*"mailto"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[90/*"news"*/]), collection1);
}

static void UriScheme_build(uType* type)
{
    ::STRINGS[79] = uString::Const("http");
    ::STRINGS[80] = uString::Const("https");
    ::STRINGS[81] = uString::Const("ftp");
    ::STRINGS[82] = uString::Const("gopher");
    ::STRINGS[83] = uString::Const("nntp");
    ::STRINGS[84] = uString::Const("telnet");
    ::STRINGS[85] = uString::Const("wais");
    ::STRINGS[73] = uString::Const("file");
    ::STRINGS[86] = uString::Const("prospero");
    ::STRINGS[87] = uString::Const("ws");
    ::STRINGS[88] = uString::Const("wss");
    ::STRINGS[89] = uString::Const("mailto");
    ::STRINGS[90] = uString::Const("news");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[8/*Uno.Collections.Dictionary<string, int>*/], (uintptr_t)&UriScheme::_defaultPorts_, uFieldFlagsStatic,
        ::TYPES[0/*Uno.Collections.List<string>*/], (uintptr_t)&UriScheme::KnownInternetSchemes_, uFieldFlagsStatic,
        ::TYPES[0/*Uno.Collections.List<string>*/], (uintptr_t)&UriScheme::KnownNonInternetSchemes_, uFieldFlagsStatic);
}

uType* UriScheme_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(UriScheme);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.UriScheme", options);
    type->fp_build_ = UriScheme_build;
    type->fp_cctor_ = UriScheme__cctor__fn;
    return type;
}

// public static Uno.Collections.Dictionary<string, int> get_DefaultPorts()
void UriScheme__get_DefaultPorts_fn(::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = UriScheme::DefaultPorts();
}

// public static Uno.Net.Http.UriSchemeType GetSchemeType(string scheme)
void UriScheme__GetSchemeType_fn(uString* scheme, int32_t* __retval)
{
    *__retval = UriScheme::GetSchemeType(scheme);
}

// public static bool IsHttpScheme(string scheme)
void UriScheme__IsHttpScheme_fn(uString* scheme, bool* __retval)
{
    *__retval = UriScheme::IsHttpScheme(scheme);
}

uSStrong< ::g::Uno::Collections::Dictionary*> UriScheme::_defaultPorts_;
uSStrong< ::g::Uno::Collections::List*> UriScheme::KnownInternetSchemes_;
uSStrong< ::g::Uno::Collections::List*> UriScheme::KnownNonInternetSchemes_;

// public static Uno.Net.Http.UriSchemeType GetSchemeType(string scheme) [static]
int32_t UriScheme::GetSchemeType(uString* scheme)
{
    uStackFrame __("Uno.Net.Http.UriScheme", "GetSchemeType(string)");
    UriScheme_typeof()->Init();
    bool ret4;
    bool ret5;
    uString* s = ::g::Uno::String::ToLower(uPtr(scheme));

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(UriScheme::KnownInternetSchemes_), s, &ret4), ret4))
        return 0;

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(UriScheme::KnownNonInternetSchemes_), s, &ret5), ret5))
        return 1;

    return 2;
}

// public static bool IsHttpScheme(string scheme) [static]
bool UriScheme::IsHttpScheme(uString* scheme)
{
    uStackFrame __("Uno.Net.Http.UriScheme", "IsHttpScheme(string)");
    UriScheme_typeof()->Init();
    uString* s = ::g::Uno::String::ToLower(uPtr(scheme));
    return ::g::Uno::String::op_Equality(s, ::STRINGS[79/*"http"*/]) || ::g::Uno::String::op_Equality(s, ::STRINGS[80/*"https"*/]);
}

// public static Uno.Collections.Dictionary<string, int> get_DefaultPorts() [static]
::g::Uno::Collections::Dictionary* UriScheme::DefaultPorts()
{
    uStackFrame __("Uno.Net.Http.UriScheme", "get_DefaultPorts()");
    UriScheme_typeof()->Init();

    if (UriScheme::_defaultPorts_ == NULL)
    {
        UriScheme::_defaultPorts_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[8/*Uno.Collections.Dictionary<string, int>*/]));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts_), ::STRINGS[79/*"http"*/], uCRef<int32_t>(80));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts_), ::STRINGS[80/*"https"*/], uCRef<int32_t>(443));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts_), ::STRINGS[81/*"ftp"*/], uCRef<int32_t>(21));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts_), ::STRINGS[82/*"gopher"*/], uCRef<int32_t>(70));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts_), ::STRINGS[84/*"telnet"*/], uCRef<int32_t>(119));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts_), ::STRINGS[85/*"wais"*/], uCRef<int32_t>(-1));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts_), ::STRINGS[73/*"file"*/], uCRef<int32_t>(-1));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts_), ::STRINGS[86/*"prospero"*/], uCRef<int32_t>(-1));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts_), ::STRINGS[89/*"mailto"*/], uCRef<int32_t>(25));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts_), ::STRINGS[90/*"news"*/], uCRef<int32_t>(-1));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts_), ::STRINGS[87/*"ws"*/], uCRef<int32_t>(80));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts_), ::STRINGS[88/*"wss"*/], uCRef<int32_t>(443));
    }

    return UriScheme::_defaultPorts_;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/UriScheme.uno
// ---------------------------------------------------------------

// internal enum UriSchemeType
uEnumType* UriSchemeType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Http.UriSchemeType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Internet", 0LL,
        "NonInternet", 1LL,
        "Unknown", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/UriParsers/UserInfoParser.uno
// -------------------------------------------------------------------------------

// internal sealed class UserInfoParser
// {
static void UserInfoParser_build(uType* type)
{
    ::STRINGS[2] = uString::Const("\\");
    ::STRINGS[19] = uString::Const("There is an invalid character sequence in uriString.");
    ::STRINGS[91] = uString::Const("@");
    ::STRINGS[92] = uString::Const("The user name or password specified in uriString is not valid.");
}

uType* UserInfoParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UserInfoParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.UserInfoParser", options);
    type->fp_build_ = UserInfoParser_build;
    return type;
}

// private static bool IsValid(string userInfo)
void UserInfoParser__IsValid_fn(uString* userInfo, bool* __retval)
{
    *__retval = UserInfoParser::IsValid(userInfo);
}

// public static string Parse(string uriString, int endIdx, int& idx)
void UserInfoParser__Parse_fn(uString* uriString, int32_t* endIdx, int32_t* idx, uString** __retval)
{
    *__retval = UserInfoParser::Parse(uriString, *endIdx, idx);
}

// private static bool IsValid(string userInfo) [static]
bool UserInfoParser::IsValid(uString* userInfo)
{
    uStackFrame __("Uno.Net.Http.UserInfoParser", "IsValid(string)");
    return ::g::Uno::String::IndexOf3(uPtr(userInfo), ::STRINGS[2/*"\\"*/], 0) < 0;
}

// public static string Parse(string uriString, int endIdx, int& idx) [static]
uString* UserInfoParser::Parse(uString* uriString, int32_t endIdx, int32_t* idx)
{
    uStackFrame __("Uno.Net.Http.UserInfoParser", "Parse(string,int,int&)");

    if (*idx >= endIdx)
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[19/*"There is an...*/]));

    int32_t end = ::g::Uno::String::IndexOf3(uPtr(uriString), ::STRINGS[91/*"@"*/], *idx);

    if ((end < 0) || (end >= endIdx))
        return ::g::Uno::String::Empty();

    uString* userInfo = ::g::Uno::String::Substring1(uriString, *idx, end - *idx);

    if (!UserInfoParser::IsValid(userInfo))
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[92/*"The user na...*/]));

    *idx = end + 1;
    return userInfo;
}
// }

}}}} // ::g::Uno::Net::Http
