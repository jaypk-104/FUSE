// This file was generated based on Projects/InterApp/JS.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeEventEmitterModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace BackgroundDownload{struct BackgroundDownloadModule;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace BackgroundDownload{

// public sealed class BackgroundDownloadModule
// {
::g::Fuse::Scripting::NativeModule_type* BackgroundDownloadModule_typeof();
void BackgroundDownloadModule__ctor_3_fn(BackgroundDownloadModule* __this);
void BackgroundDownloadModule__New3_fn(BackgroundDownloadModule** __retval);
void BackgroundDownloadModule__OnFailed_fn(BackgroundDownloadModule* __this, uint64_t* taskIdentifier, uString* errorMsg);
void BackgroundDownloadModule__OnPaused_fn(BackgroundDownloadModule* __this, uint64_t* taskIdentifier);
void BackgroundDownloadModule__OnProgress_fn(BackgroundDownloadModule* __this, uint64_t* taskIdentifier, uint64_t* totalBytesWritten, uint64_t* totalBytesExpectedToWrite);
void BackgroundDownloadModule__OnSucceeded_fn(BackgroundDownloadModule* __this, uint64_t* taskIdentifier, uString* finalPath);
void BackgroundDownloadModule__Pause_fn(BackgroundDownloadModule* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void BackgroundDownloadModule__Resume_fn(BackgroundDownloadModule* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void BackgroundDownloadModule__Start_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void BackgroundDownloadModule__Stop_fn(BackgroundDownloadModule* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);

struct BackgroundDownloadModule : ::g::Fuse::Scripting::NativeEventEmitterModule
{
    static uSStrong<BackgroundDownloadModule*> _instance_;
    static uSStrong<BackgroundDownloadModule*>& _instance() { return _instance_; }

    void ctor_3();
    void OnFailed(uint64_t taskIdentifier, uString* errorMsg);
    void OnPaused(uint64_t taskIdentifier);
    void OnProgress(uint64_t taskIdentifier, uint64_t totalBytesWritten, uint64_t totalBytesExpectedToWrite);
    void OnSucceeded(uint64_t taskIdentifier, uString* finalPath);
    uObject* Pause(::g::Fuse::Scripting::Context* c, uArray* args);
    uObject* Resume(::g::Fuse::Scripting::Context* c, uArray* args);
    uObject* Stop(::g::Fuse::Scripting::Context* c, uArray* args);
    static BackgroundDownloadModule* New3();
    static uObject* Start(::g::Fuse::Scripting::Context* c, uArray* args);
};
// }

}}} // ::g::Fuse::BackgroundDownload
