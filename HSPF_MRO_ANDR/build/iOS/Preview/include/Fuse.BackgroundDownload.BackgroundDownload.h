// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/InterApp/iOS/iOSImpl.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace BackgroundDownload{struct BackgroundDownload;}}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace BackgroundDownload{

// internal static extern class BackgroundDownload
// {
uClassType* BackgroundDownload_typeof();
void BackgroundDownload__IDToOngoing_fn(uint64_t* id, ::g::ObjC::Object** __retval);
void BackgroundDownload__IDToPaused_fn(uint64_t* id, ::g::ObjC::Object** __retval);
void BackgroundDownload__Initialize_fn();
void BackgroundDownload__add_OnFailed_fn(uDelegate* value);
void BackgroundDownload__remove_OnFailed_fn(uDelegate* value);
void BackgroundDownload__add_OnPaused_fn(uDelegate* value);
void BackgroundDownload__remove_OnPaused_fn(uDelegate* value);
void BackgroundDownload__add_OnProgress_fn(uDelegate* value);
void BackgroundDownload__remove_OnProgress_fn(uDelegate* value);
void BackgroundDownload__add_OnSucceeded_fn(uDelegate* value);
void BackgroundDownload__remove_OnSucceeded_fn(uDelegate* value);
void BackgroundDownload__PauseDownload_fn(uint64_t* downloadID);
void BackgroundDownload__RecieveDownloadPaused_fn(uint64_t* taskIdentifier, ::g::ObjC::Object* pauseData);
void BackgroundDownload__RecieveErroredCompletion_fn(uint64_t* taskIdentifier, uString* errorMessage);
void BackgroundDownload__RecieveProgress_fn(uint64_t* taskIdentifier, uint64_t* totalBytesWritten, uint64_t* totalBytesExpectedToWrite);
void BackgroundDownload__RecieveSuccessfulCompletion_fn(uint64_t* taskIdentifier, uString* finalPath);
void BackgroundDownload__RegisterDownload_fn(uint64_t* taskIdentifier, ::g::ObjC::Object* task);
void BackgroundDownload__ResumeDownload_fn(uint64_t* downloadID, uint64_t* __retval);
void BackgroundDownload__StartDownload_fn(uString* urlStr, uint64_t* __retval);
void BackgroundDownload__StopDownload_fn(uint64_t* downloadID);

struct BackgroundDownload : uObject
{
    static uSStrong< ::g::ObjC::Object*> _downloadDelegate_;
    static uSStrong< ::g::ObjC::Object*>& _downloadDelegate() { return BackgroundDownload_typeof()->Init(), _downloadDelegate_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _ongoingDownloads_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _ongoingDownloads() { return BackgroundDownload_typeof()->Init(), _ongoingDownloads_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _pausedDownloads_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _pausedDownloads() { return BackgroundDownload_typeof()->Init(), _pausedDownloads_; }
    static uint64_t UNKNOWN_SIZE_;
    static uint64_t& UNKNOWN_SIZE() { return BackgroundDownload_typeof()->Init(), UNKNOWN_SIZE_; }
    static uSStrong<uDelegate*> OnFailed1_;
    static uSStrong<uDelegate*>& OnFailed1() { return BackgroundDownload_typeof()->Init(), OnFailed1_; }
    static uSStrong<uDelegate*> OnPaused1_;
    static uSStrong<uDelegate*>& OnPaused1() { return BackgroundDownload_typeof()->Init(), OnPaused1_; }
    static uSStrong<uDelegate*> OnProgress1_;
    static uSStrong<uDelegate*>& OnProgress1() { return BackgroundDownload_typeof()->Init(), OnProgress1_; }
    static uSStrong<uDelegate*> OnSucceeded1_;
    static uSStrong<uDelegate*>& OnSucceeded1() { return BackgroundDownload_typeof()->Init(), OnSucceeded1_; }

    static ::g::ObjC::Object* IDToOngoing(uint64_t id);
    static ::g::ObjC::Object* IDToPaused(uint64_t id);
    static void Initialize();
    static void PauseDownload(uint64_t downloadID);
    static void RecieveDownloadPaused(uint64_t taskIdentifier, ::g::ObjC::Object* pauseData);
    static void RecieveErroredCompletion(uint64_t taskIdentifier, uString* errorMessage);
    static void RecieveProgress(uint64_t taskIdentifier, uint64_t totalBytesWritten, uint64_t totalBytesExpectedToWrite);
    static void RecieveSuccessfulCompletion(uint64_t taskIdentifier, uString* finalPath);
    static void RegisterDownload(uint64_t taskIdentifier, ::g::ObjC::Object* task);
    static uint64_t ResumeDownload(uint64_t downloadID);
    static uint64_t StartDownload(uString* urlStr);
    static void StopDownload(uint64_t downloadID);
    static void add_OnFailed(uDelegate* value);
    static void remove_OnFailed(uDelegate* value);
    static void add_OnPaused(uDelegate* value);
    static void remove_OnPaused(uDelegate* value);
    static void add_OnProgress(uDelegate* value);
    static void remove_OnProgress(uDelegate* value);
    static void add_OnSucceeded(uDelegate* value);
    static void remove_OnSucceeded(uDelegate* value);
};
// }

}}} // ::g::Fuse::BackgroundDownload
