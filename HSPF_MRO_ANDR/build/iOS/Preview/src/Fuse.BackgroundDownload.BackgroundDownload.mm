// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/InterApp/iOS/iOSImpl.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <DownloadDelegate.h>
#include <Fuse.BackgroundDownload.BackgroundDownload.h>
#include <ObjC.Object.h>
#include <Uno.Action1-1.h>
#include <Uno.Action2-2.h>
#include <Uno.Action3-3.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Delegate.h>
#include <Uno.String.h>
#include <Uno.ULong.h>
#include <uObjC.Foreign.h>
static uType* TYPES[4];

namespace g{
namespace Fuse{
namespace BackgroundDownload{

// internal static extern class BackgroundDownload
// {
// static generated BackgroundDownload()
static void BackgroundDownload__cctor__fn(uType* __type)
{
    BackgroundDownload::_ongoingDownloads_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<ulong, ObjC.Object>*/]));
    BackgroundDownload::_pausedDownloads_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<ulong, ObjC.Object>*/]));
    BackgroundDownload::UNKNOWN_SIZE_ = (uint64_t)NSURLSessionTransferSizeUnknown;
}

static void BackgroundDownload_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::ULong_typeof(), ::g::ObjC::Object_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::ULong_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::ULong_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Action3_typeof()->MakeType(::g::Uno::ULong_typeof(), ::g::Uno::ULong_typeof(), ::g::Uno::ULong_typeof(), NULL);
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), (uintptr_t)&BackgroundDownload::_downloadDelegate_, uFieldFlagsStatic,
        ::TYPES[0/*Uno.Collections.Dictionary<ulong, ObjC.Object>*/], (uintptr_t)&BackgroundDownload::_ongoingDownloads_, uFieldFlagsStatic,
        ::TYPES[0/*Uno.Collections.Dictionary<ulong, ObjC.Object>*/], (uintptr_t)&BackgroundDownload::_pausedDownloads_, uFieldFlagsStatic,
        ::g::Uno::ULong_typeof(), (uintptr_t)&BackgroundDownload::UNKNOWN_SIZE_, uFieldFlagsStatic,
        ::TYPES[1/*Uno.Action<ulong, string>*/], (uintptr_t)&BackgroundDownload::OnFailed1_, uFieldFlagsStatic,
        ::TYPES[2/*Uno.Action<ulong>*/], (uintptr_t)&BackgroundDownload::OnPaused1_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.Action<ulong, ulong, ulong>*/], (uintptr_t)&BackgroundDownload::OnProgress1_, uFieldFlagsStatic,
        ::TYPES[1/*Uno.Action<ulong, string>*/], (uintptr_t)&BackgroundDownload::OnSucceeded1_, uFieldFlagsStatic);
}

uClassType* BackgroundDownload_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.BackgroundDownload.BackgroundDownload", options);
    type->fp_build_ = BackgroundDownload_build;
    type->fp_cctor_ = BackgroundDownload__cctor__fn;
    return type;
}

// private static ObjC.Object IDToOngoing(ulong id)
void BackgroundDownload__IDToOngoing_fn(uint64_t* id, ::g::ObjC::Object** __retval)
{
    *__retval = BackgroundDownload::IDToOngoing(*id);
}

// private static ObjC.Object IDToPaused(ulong id)
void BackgroundDownload__IDToPaused_fn(uint64_t* id, ::g::ObjC::Object** __retval)
{
    *__retval = BackgroundDownload::IDToPaused(*id);
}

// internal static void Initialize()
void BackgroundDownload__Initialize_fn()
{
    BackgroundDownload::Initialize();
}

// public static generated void add_OnFailed(Uno.Action<ulong, string> value)
void BackgroundDownload__add_OnFailed_fn(uDelegate* value)
{
    BackgroundDownload::add_OnFailed(value);
}

// public static generated void remove_OnFailed(Uno.Action<ulong, string> value)
void BackgroundDownload__remove_OnFailed_fn(uDelegate* value)
{
    BackgroundDownload::remove_OnFailed(value);
}

// public static generated void add_OnPaused(Uno.Action<ulong> value)
void BackgroundDownload__add_OnPaused_fn(uDelegate* value)
{
    BackgroundDownload::add_OnPaused(value);
}

// public static generated void remove_OnPaused(Uno.Action<ulong> value)
void BackgroundDownload__remove_OnPaused_fn(uDelegate* value)
{
    BackgroundDownload::remove_OnPaused(value);
}

// public static generated void add_OnProgress(Uno.Action<ulong, ulong, ulong> value)
void BackgroundDownload__add_OnProgress_fn(uDelegate* value)
{
    BackgroundDownload::add_OnProgress(value);
}

// public static generated void remove_OnProgress(Uno.Action<ulong, ulong, ulong> value)
void BackgroundDownload__remove_OnProgress_fn(uDelegate* value)
{
    BackgroundDownload::remove_OnProgress(value);
}

// public static generated void add_OnSucceeded(Uno.Action<ulong, string> value)
void BackgroundDownload__add_OnSucceeded_fn(uDelegate* value)
{
    BackgroundDownload::add_OnSucceeded(value);
}

// public static generated void remove_OnSucceeded(Uno.Action<ulong, string> value)
void BackgroundDownload__remove_OnSucceeded_fn(uDelegate* value)
{
    BackgroundDownload::remove_OnSucceeded(value);
}

// internal static void PauseDownload(ulong downloadID)
void BackgroundDownload__PauseDownload_fn(uint64_t* downloadID)
{
    BackgroundDownload::PauseDownload(*downloadID);
}

// private static void RecieveDownloadPaused(ulong taskIdentifier, ObjC.Object pauseData)
void BackgroundDownload__RecieveDownloadPaused_fn(uint64_t* taskIdentifier, ::g::ObjC::Object* pauseData)
{
    BackgroundDownload::RecieveDownloadPaused(*taskIdentifier, pauseData);
}

// private static void RecieveErroredCompletion(ulong taskIdentifier, string errorMessage)
void BackgroundDownload__RecieveErroredCompletion_fn(uint64_t* taskIdentifier, uString* errorMessage)
{
    BackgroundDownload::RecieveErroredCompletion(*taskIdentifier, errorMessage);
}

// private static void RecieveProgress(ulong taskIdentifier, ulong totalBytesWritten, ulong totalBytesExpectedToWrite)
void BackgroundDownload__RecieveProgress_fn(uint64_t* taskIdentifier, uint64_t* totalBytesWritten, uint64_t* totalBytesExpectedToWrite)
{
    BackgroundDownload::RecieveProgress(*taskIdentifier, *totalBytesWritten, *totalBytesExpectedToWrite);
}

// private static void RecieveSuccessfulCompletion(ulong taskIdentifier, string finalPath)
void BackgroundDownload__RecieveSuccessfulCompletion_fn(uint64_t* taskIdentifier, uString* finalPath)
{
    BackgroundDownload::RecieveSuccessfulCompletion(*taskIdentifier, finalPath);
}

// private static void RegisterDownload(ulong taskIdentifier, ObjC.Object task)
void BackgroundDownload__RegisterDownload_fn(uint64_t* taskIdentifier, ::g::ObjC::Object* task)
{
    BackgroundDownload::RegisterDownload(*taskIdentifier, task);
}

// internal static ulong ResumeDownload(ulong downloadID)
void BackgroundDownload__ResumeDownload_fn(uint64_t* downloadID, uint64_t* __retval)
{
    *__retval = BackgroundDownload::ResumeDownload(*downloadID);
}

// internal static ulong StartDownload(string urlStr)
void BackgroundDownload__StartDownload_fn(uString* urlStr, uint64_t* __retval)
{
    *__retval = BackgroundDownload::StartDownload(urlStr);
}

// internal static void StopDownload(ulong downloadID)
void BackgroundDownload__StopDownload_fn(uint64_t* downloadID)
{
    BackgroundDownload::StopDownload(*downloadID);
}

uSStrong< ::g::ObjC::Object*> BackgroundDownload::_downloadDelegate_;
uSStrong< ::g::Uno::Collections::Dictionary*> BackgroundDownload::_ongoingDownloads_;
uSStrong< ::g::Uno::Collections::Dictionary*> BackgroundDownload::_pausedDownloads_;
uint64_t BackgroundDownload::UNKNOWN_SIZE_;
uSStrong<uDelegate*> BackgroundDownload::OnFailed1_;
uSStrong<uDelegate*> BackgroundDownload::OnPaused1_;
uSStrong<uDelegate*> BackgroundDownload::OnProgress1_;
uSStrong<uDelegate*> BackgroundDownload::OnSucceeded1_;

// private static ObjC.Object IDToOngoing(ulong id) [static]
::g::ObjC::Object* BackgroundDownload::IDToOngoing(uint64_t id)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownload", "IDToOngoing(ulong)");
    BackgroundDownload_typeof()->Init();
    ::g::ObjC::Object* ret1;
    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(BackgroundDownload::_ongoingDownloads_), uCRef<uint64_t>(id), &ret1), ret1);
}

// private static ObjC.Object IDToPaused(ulong id) [static]
::g::ObjC::Object* BackgroundDownload::IDToPaused(uint64_t id)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownload", "IDToPaused(ulong)");
    BackgroundDownload_typeof()->Init();
    ::g::ObjC::Object* ret2;
    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(BackgroundDownload::_pausedDownloads_), uCRef<uint64_t>(id), &ret2), ret2);
}

// internal static void Initialize() [static]
void BackgroundDownload::Initialize()
{
    BackgroundDownload_typeof()->Init();
    @autoreleasepool
    {
        DownloadDelegate* dd = [[DownloadDelegate alloc] init];
        BackgroundDownload::_downloadDelegate_ = ::g::ObjC::Object::Create(dd);
        [[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(BackgroundDownload::_downloadDelegate_); }() setup];
    }
    
}

// internal static void PauseDownload(ulong downloadID) [static]
void BackgroundDownload::PauseDownload(uint64_t downloadID)
{
    BackgroundDownload_typeof()->Init();
    @autoreleasepool
    {
        [[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(BackgroundDownload::_downloadDelegate_); }() pauseDownload:[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(BackgroundDownload::IDToOngoing(downloadID)); }()];
    }
    
}

// private static void RecieveDownloadPaused(ulong taskIdentifier, ObjC.Object pauseData) [static]
void BackgroundDownload::RecieveDownloadPaused(uint64_t taskIdentifier, ::g::ObjC::Object* pauseData)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownload", "RecieveDownloadPaused(ulong,ObjC.Object)");
    BackgroundDownload_typeof()->Init();
    bool ret3;
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(BackgroundDownload::_pausedDownloads_), uCRef<uint64_t>(taskIdentifier), pauseData);
    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(BackgroundDownload::_ongoingDownloads_), uCRef<uint64_t>(taskIdentifier), &ret3);
    uDelegate* handler = BackgroundDownload::OnPaused1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<uint64_t>(taskIdentifier));
}

// private static void RecieveErroredCompletion(ulong taskIdentifier, string errorMessage) [static]
void BackgroundDownload::RecieveErroredCompletion(uint64_t taskIdentifier, uString* errorMessage)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownload", "RecieveErroredCompletion(ulong,string)");
    BackgroundDownload_typeof()->Init();
    bool ret4;
    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(BackgroundDownload::_ongoingDownloads_), uCRef<uint64_t>(taskIdentifier), &ret4);
    uDelegate* handler = BackgroundDownload::OnFailed1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, uCRef<uint64_t>(taskIdentifier), errorMessage);
}

// private static void RecieveProgress(ulong taskIdentifier, ulong totalBytesWritten, ulong totalBytesExpectedToWrite) [static]
void BackgroundDownload::RecieveProgress(uint64_t taskIdentifier, uint64_t totalBytesWritten, uint64_t totalBytesExpectedToWrite)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownload", "RecieveProgress(ulong,ulong,ulong)");
    BackgroundDownload_typeof()->Init();
    uDelegate* handler = BackgroundDownload::OnProgress1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
    {
        if (totalBytesExpectedToWrite == BackgroundDownload::UNKNOWN_SIZE_)
            uPtr(handler)->Invoke(3, uCRef<uint64_t>(taskIdentifier), uCRef<uint64_t>(totalBytesWritten), uCRef<uint64_t>(totalBytesExpectedToWrite));
        else
            uPtr(handler)->Invoke(3, uCRef<uint64_t>(taskIdentifier), uCRef<uint64_t>(18446744073709551615ULL), uCRef<uint64_t>(18446744073709551615ULL));
    }
}

// private static void RecieveSuccessfulCompletion(ulong taskIdentifier, string finalPath) [static]
void BackgroundDownload::RecieveSuccessfulCompletion(uint64_t taskIdentifier, uString* finalPath)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownload", "RecieveSuccessfulCompletion(ulong,string)");
    BackgroundDownload_typeof()->Init();
    bool ret5;
    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(BackgroundDownload::_ongoingDownloads_), uCRef<uint64_t>(taskIdentifier), &ret5);
    uDelegate* handler = BackgroundDownload::OnSucceeded1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, uCRef<uint64_t>(taskIdentifier), finalPath);
}

// private static void RegisterDownload(ulong taskIdentifier, ObjC.Object task) [static]
void BackgroundDownload::RegisterDownload(uint64_t taskIdentifier, ::g::ObjC::Object* task)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownload", "RegisterDownload(ulong,ObjC.Object)");
    BackgroundDownload_typeof()->Init();
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(BackgroundDownload::_ongoingDownloads_), uCRef<uint64_t>(taskIdentifier), task);
}

// internal static ulong ResumeDownload(ulong downloadID) [static]
uint64_t BackgroundDownload::ResumeDownload(uint64_t downloadID)
{
    BackgroundDownload_typeof()->Init();
    @autoreleasepool
    {
        return (uint64_t)[[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(BackgroundDownload::_downloadDelegate_); }() resumeDownload:[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(BackgroundDownload::IDToPaused(downloadID)); }()];
    }
    
}

// internal static ulong StartDownload(string urlStr) [static]
uint64_t BackgroundDownload::StartDownload(uString* urlStr)
{
    BackgroundDownload_typeof()->Init();
    @autoreleasepool
    {
        return [] (::NSString* urlStr) -> uint64_t
        {
            return (uint64_t)[[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(BackgroundDownload::_downloadDelegate_); }() startDownload:urlStr];
        } (::uObjC::NativeString(urlStr));
        
    }
    
}

// internal static void StopDownload(ulong downloadID) [static]
void BackgroundDownload::StopDownload(uint64_t downloadID)
{
    BackgroundDownload_typeof()->Init();
    @autoreleasepool
    {
        [[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(BackgroundDownload::_downloadDelegate_); }() stopDownload:[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(BackgroundDownload::IDToOngoing(downloadID)); }()];
    }
    
}

// public static generated void add_OnFailed(Uno.Action<ulong, string> value) [static]
void BackgroundDownload::add_OnFailed(uDelegate* value)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownload", "add_OnFailed(Uno.Action<ulong, string>)");
    BackgroundDownload_typeof()->Init();
    BackgroundDownload::OnFailed1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(BackgroundDownload::OnFailed1_, value), ::TYPES[1/*Uno.Action<ulong, string>*/]);
}

// public static generated void remove_OnFailed(Uno.Action<ulong, string> value) [static]
void BackgroundDownload::remove_OnFailed(uDelegate* value)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownload", "remove_OnFailed(Uno.Action<ulong, string>)");
    BackgroundDownload_typeof()->Init();
    BackgroundDownload::OnFailed1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(BackgroundDownload::OnFailed1_, value), ::TYPES[1/*Uno.Action<ulong, string>*/]);
}

// public static generated void add_OnPaused(Uno.Action<ulong> value) [static]
void BackgroundDownload::add_OnPaused(uDelegate* value)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownload", "add_OnPaused(Uno.Action<ulong>)");
    BackgroundDownload_typeof()->Init();
    BackgroundDownload::OnPaused1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(BackgroundDownload::OnPaused1_, value), ::TYPES[2/*Uno.Action<ulong>*/]);
}

// public static generated void remove_OnPaused(Uno.Action<ulong> value) [static]
void BackgroundDownload::remove_OnPaused(uDelegate* value)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownload", "remove_OnPaused(Uno.Action<ulong>)");
    BackgroundDownload_typeof()->Init();
    BackgroundDownload::OnPaused1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(BackgroundDownload::OnPaused1_, value), ::TYPES[2/*Uno.Action<ulong>*/]);
}

// public static generated void add_OnProgress(Uno.Action<ulong, ulong, ulong> value) [static]
void BackgroundDownload::add_OnProgress(uDelegate* value)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownload", "add_OnProgress(Uno.Action<ulong, ulong, ulong>)");
    BackgroundDownload_typeof()->Init();
    BackgroundDownload::OnProgress1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(BackgroundDownload::OnProgress1_, value), ::TYPES[3/*Uno.Action<ulong, ulong, ulong>*/]);
}

// public static generated void remove_OnProgress(Uno.Action<ulong, ulong, ulong> value) [static]
void BackgroundDownload::remove_OnProgress(uDelegate* value)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownload", "remove_OnProgress(Uno.Action<ulong, ulong, ulong>)");
    BackgroundDownload_typeof()->Init();
    BackgroundDownload::OnProgress1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(BackgroundDownload::OnProgress1_, value), ::TYPES[3/*Uno.Action<ulong, ulong, ulong>*/]);
}

// public static generated void add_OnSucceeded(Uno.Action<ulong, string> value) [static]
void BackgroundDownload::add_OnSucceeded(uDelegate* value)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownload", "add_OnSucceeded(Uno.Action<ulong, string>)");
    BackgroundDownload_typeof()->Init();
    BackgroundDownload::OnSucceeded1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(BackgroundDownload::OnSucceeded1_, value), ::TYPES[1/*Uno.Action<ulong, string>*/]);
}

// public static generated void remove_OnSucceeded(Uno.Action<ulong, string> value) [static]
void BackgroundDownload::remove_OnSucceeded(uDelegate* value)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownload", "remove_OnSucceeded(Uno.Action<ulong, string>)");
    BackgroundDownload_typeof()->Init();
    BackgroundDownload::OnSucceeded1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(BackgroundDownload::OnSucceeded1_, value), ::TYPES[1/*Uno.Action<ulong, string>*/]);
}
// }

}}} // ::g::Fuse::BackgroundDownload
