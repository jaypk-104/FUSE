// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/InterApp/JS.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.BackgroundDownload.BackgroundDownload.h>
#include <Fuse.BackgroundDownload.BackgroundDownloadModule.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeEvent.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.Action1-1.h>
#include <Uno.Action2-2.h>
#include <Uno.Action3-3.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.ULong.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[13];
static uType* TYPES[7];

namespace g{
namespace Fuse{
namespace BackgroundDownload{

// public sealed class BackgroundDownloadModule
// {
static void BackgroundDownloadModule_build(uType* type)
{
    ::STRINGS[0] = uString::Const("paused");
    ::STRINGS[1] = uString::Const("succeeded");
    ::STRINGS[2] = uString::Const("failed");
    ::STRINGS[3] = uString::Const("progress");
    ::STRINGS[4] = uString::Const("FuseJS/BackgroundDownload");
    ::STRINGS[5] = uString::Const("onProgress");
    ::STRINGS[6] = uString::Const("onPaused");
    ::STRINGS[7] = uString::Const("onSucceeded");
    ::STRINGS[8] = uString::Const("onFailed");
    ::STRINGS[9] = uString::Const("start");
    ::STRINGS[10] = uString::Const("stop");
    ::STRINGS[11] = uString::Const("pause");
    ::STRINGS[12] = uString::Const("resume");
    ::TYPES[0] = uObject_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Action3_typeof()->MakeType(::g::Uno::ULong_typeof(), ::g::Uno::ULong_typeof(), ::g::Uno::ULong_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::ULong_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::ULong_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[5] = ::g::Uno::ULong_typeof();
    ::TYPES[6] = ::g::Uno::String_typeof();
    type->SetDependencies(
        ::g::Fuse::BackgroundDownload::BackgroundDownload_typeof(),
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(12,
        type, (uintptr_t)&BackgroundDownloadModule::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)BackgroundDownloadModule__New3_fn, 0, true, type, 0));
}

::g::Fuse::Scripting::NativeModule_type* BackgroundDownloadModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeEventEmitterModule_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 2;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(BackgroundDownloadModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.BackgroundDownload.BackgroundDownloadModule", options);
    type->fp_build_ = BackgroundDownloadModule_build;
    type->fp_ctor_ = (void*)BackgroundDownloadModule__New3_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public BackgroundDownloadModule()
void BackgroundDownloadModule__ctor_3_fn(BackgroundDownloadModule* __this)
{
    __this->ctor_3();
}

// public BackgroundDownloadModule New()
void BackgroundDownloadModule__New3_fn(BackgroundDownloadModule** __retval)
{
    *__retval = BackgroundDownloadModule::New3();
}

// private void OnFailed(ulong taskIdentifier, string errorMsg)
void BackgroundDownloadModule__OnFailed_fn(BackgroundDownloadModule* __this, uint64_t* taskIdentifier, uString* errorMsg)
{
    __this->OnFailed(*taskIdentifier, errorMsg);
}

// private void OnPaused(ulong taskIdentifier)
void BackgroundDownloadModule__OnPaused_fn(BackgroundDownloadModule* __this, uint64_t* taskIdentifier)
{
    __this->OnPaused(*taskIdentifier);
}

// private void OnProgress(ulong taskIdentifier, ulong totalBytesWritten, ulong totalBytesExpectedToWrite)
void BackgroundDownloadModule__OnProgress_fn(BackgroundDownloadModule* __this, uint64_t* taskIdentifier, uint64_t* totalBytesWritten, uint64_t* totalBytesExpectedToWrite)
{
    __this->OnProgress(*taskIdentifier, *totalBytesWritten, *totalBytesExpectedToWrite);
}

// private void OnSucceeded(ulong taskIdentifier, string finalPath)
void BackgroundDownloadModule__OnSucceeded_fn(BackgroundDownloadModule* __this, uint64_t* taskIdentifier, uString* finalPath)
{
    __this->OnSucceeded(*taskIdentifier, finalPath);
}

// private object Pause(Fuse.Scripting.Context c, object[] args)
void BackgroundDownloadModule__Pause_fn(BackgroundDownloadModule* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->Pause(c, args);
}

// private object Resume(Fuse.Scripting.Context c, object[] args)
void BackgroundDownloadModule__Resume_fn(BackgroundDownloadModule* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->Resume(c, args);
}

// private static object Start(Fuse.Scripting.Context c, object[] args)
void BackgroundDownloadModule__Start_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = BackgroundDownloadModule::Start(c, args);
}

// private object Stop(Fuse.Scripting.Context c, object[] args)
void BackgroundDownloadModule__Stop_fn(BackgroundDownloadModule* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->Stop(c, args);
}

uSStrong<BackgroundDownloadModule*> BackgroundDownloadModule::_instance_;

// public BackgroundDownloadModule() [instance]
void BackgroundDownloadModule::ctor_3()
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownloadModule", ".ctor()");
    ctor_2(false, uArray::Init<uObject*>(::TYPES[0/*object[]*/], 4, ::STRINGS[0/*"paused"*/], ::STRINGS[1/*"succeeded"*/], ::STRINGS[2/*"failed"*/], ::STRINGS[3/*"progress"*/]));

    if (BackgroundDownloadModule::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(BackgroundDownloadModule::_instance_ = this, ::STRINGS[4/*"FuseJS/Back...*/]);
    ::g::Fuse::BackgroundDownload::BackgroundDownload::Initialize();
    ::g::Fuse::BackgroundDownload::BackgroundDownload::add_OnProgress(uDelegate::New(::TYPES[1/*Uno.Action<ulong, ulong, ulong>*/], (void*)BackgroundDownloadModule__OnProgress_fn, this));
    ::g::Fuse::BackgroundDownload::BackgroundDownload::add_OnPaused(uDelegate::New(::TYPES[2/*Uno.Action<ulong>*/], (void*)BackgroundDownloadModule__OnPaused_fn, this));
    ::g::Fuse::BackgroundDownload::BackgroundDownload::add_OnSucceeded(uDelegate::New(::TYPES[3/*Uno.Action<ulong, string>*/], (void*)BackgroundDownloadModule__OnSucceeded_fn, this));
    ::g::Fuse::BackgroundDownload::BackgroundDownload::add_OnFailed(uDelegate::New(::TYPES[3/*Uno.Action<ulong, string>*/], (void*)BackgroundDownloadModule__OnFailed_fn, this));
    ::g::Fuse::Scripting::NativeEvent* onProgressEvent = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[5/*"onProgress"*/], true);
    On1(::STRINGS[3/*"progress"*/], onProgressEvent);
    AddMember(onProgressEvent);
    ::g::Fuse::Scripting::NativeEvent* onPausedEvent = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[6/*"onPaused"*/], true);
    On1(::STRINGS[0/*"paused"*/], onPausedEvent);
    AddMember(onPausedEvent);
    ::g::Fuse::Scripting::NativeEvent* onSucceededEvent = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[7/*"onSucceeded"*/], true);
    On1(::STRINGS[1/*"succeeded"*/], onSucceededEvent);
    AddMember(onSucceededEvent);
    ::g::Fuse::Scripting::NativeEvent* onFailedEvent = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[8/*"onFailed"*/], true);
    On1(::STRINGS[2/*"failed"*/], onFailedEvent);
    AddMember(onFailedEvent);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[9/*"start"*/], uDelegate::New(::TYPES[4/*Fuse.Scripting.NativeCallback*/], (void*)BackgroundDownloadModule__Start_fn)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[10/*"stop"*/], uDelegate::New(::TYPES[4/*Fuse.Scripting.NativeCallback*/], (void*)BackgroundDownloadModule__Stop_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[11/*"pause"*/], uDelegate::New(::TYPES[4/*Fuse.Scripting.NativeCallback*/], (void*)BackgroundDownloadModule__Pause_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[12/*"resume"*/], uDelegate::New(::TYPES[4/*Fuse.Scripting.NativeCallback*/], (void*)BackgroundDownloadModule__Resume_fn, this)));
}

// private void OnFailed(ulong taskIdentifier, string errorMsg) [instance]
void BackgroundDownloadModule::OnFailed(uint64_t taskIdentifier, uString* errorMsg)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownloadModule", "OnFailed(ulong,string)");
    Emit(uArray::Init<uObject*>(::TYPES[0/*object[]*/], 3, ::STRINGS[2/*"failed"*/], (uString*)::g::Uno::ULong::ToString(taskIdentifier, ::TYPES[5/*ulong*/]), errorMsg));
}

// private void OnPaused(ulong taskIdentifier) [instance]
void BackgroundDownloadModule::OnPaused(uint64_t taskIdentifier)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownloadModule", "OnPaused(ulong)");
    Emit(uArray::Init<uObject*>(::TYPES[0/*object[]*/], 2, ::STRINGS[0/*"paused"*/], (uString*)::g::Uno::ULong::ToString(taskIdentifier, ::TYPES[5/*ulong*/])));
}

// private void OnProgress(ulong taskIdentifier, ulong totalBytesWritten, ulong totalBytesExpectedToWrite) [instance]
void BackgroundDownloadModule::OnProgress(uint64_t taskIdentifier, uint64_t totalBytesWritten, uint64_t totalBytesExpectedToWrite)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownloadModule", "OnProgress(ulong,ulong,ulong)");
    Emit(uArray::Init<uObject*>(::TYPES[0/*object[]*/], 4, ::STRINGS[3/*"progress"*/], (uString*)::g::Uno::ULong::ToString(taskIdentifier, ::TYPES[5/*ulong*/]), uBox(::g::Uno::Double_typeof(), (double)totalBytesWritten), uBox(::g::Uno::Double_typeof(), (double)totalBytesExpectedToWrite)));
}

// private void OnSucceeded(ulong taskIdentifier, string finalPath) [instance]
void BackgroundDownloadModule::OnSucceeded(uint64_t taskIdentifier, uString* finalPath)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownloadModule", "OnSucceeded(ulong,string)");
    Emit(uArray::Init<uObject*>(::TYPES[0/*object[]*/], 3, ::STRINGS[1/*"succeeded"*/], (uString*)::g::Uno::ULong::ToString(taskIdentifier, ::TYPES[5/*ulong*/]), finalPath));
}

// private object Pause(Fuse.Scripting.Context c, object[] args) [instance]
uObject* BackgroundDownloadModule::Pause(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownloadModule", "Pause(Fuse.Scripting.Context,object[])");
    uint64_t id = 0ULL;

    if (::g::Uno::ULong::TryParse(uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[6/*string*/]), &id))
        ::g::Fuse::BackgroundDownload::BackgroundDownload::PauseDownload(id);

    return NULL;
}

// private object Resume(Fuse.Scripting.Context c, object[] args) [instance]
uObject* BackgroundDownloadModule::Resume(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownloadModule", "Resume(Fuse.Scripting.Context,object[])");
    uint64_t id = 0ULL;

    if (::g::Uno::ULong::TryParse(uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[6/*string*/]), &id))
        return ::g::Uno::ULong::ToString(::g::Fuse::BackgroundDownload::BackgroundDownload::ResumeDownload(id), ::TYPES[5/*ulong*/]);

    return NULL;
}

// private object Stop(Fuse.Scripting.Context c, object[] args) [instance]
uObject* BackgroundDownloadModule::Stop(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownloadModule", "Stop(Fuse.Scripting.Context,object[])");
    uint64_t id = 0ULL;

    if (::g::Uno::ULong::TryParse(uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[6/*string*/]), &id))
        ::g::Fuse::BackgroundDownload::BackgroundDownload::StopDownload(id);

    return NULL;
}

// public BackgroundDownloadModule New() [static]
BackgroundDownloadModule* BackgroundDownloadModule::New3()
{
    BackgroundDownloadModule* obj1 = (BackgroundDownloadModule*)uNew(BackgroundDownloadModule_typeof());
    obj1->ctor_3();
    return obj1;
}

// private static object Start(Fuse.Scripting.Context c, object[] args) [static]
uObject* BackgroundDownloadModule::Start(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownloadModule", "Start(Fuse.Scripting.Context,object[])");
    return ::g::Uno::ULong::ToString(::g::Fuse::BackgroundDownload::BackgroundDownload::StartDownload(uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[6/*string*/])), ::TYPES[5/*ulong*/]);
}
// }

}}} // ::g::Fuse::BackgroundDownload
