// This file was generated based on Projects/InterApp/Android/AndroidImpl.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace BackgroundDownload{struct BackgroundDownload;}}}

namespace g{
namespace Fuse{
namespace BackgroundDownload{

// internal static extern class BackgroundDownload
// {
uClassType* BackgroundDownload_typeof();
void BackgroundDownload__Initialize_fn();
void BackgroundDownload__InitInner_fn(uDelegate* onProgress, uDelegate* onSucceeded, uDelegate* onFailed, uDelegate* onPaused);
void BackgroundDownload__add_OnFailed_fn(uDelegate* value);
void BackgroundDownload__remove_OnFailed_fn(uDelegate* value);
void BackgroundDownload__add_OnPaused_fn(uDelegate* value);
void BackgroundDownload__remove_OnPaused_fn(uDelegate* value);
void BackgroundDownload__add_OnProgress_fn(uDelegate* value);
void BackgroundDownload__remove_OnProgress_fn(uDelegate* value);
void BackgroundDownload__add_OnSucceeded_fn(uDelegate* value);
void BackgroundDownload__remove_OnSucceeded_fn(uDelegate* value);
void BackgroundDownload__PauseDownload_fn(uint64_t* downloadID);
void BackgroundDownload__PauseDownloadInner_fn(int32_t* downloadID);
void BackgroundDownload__RecieveDownloadPaused_fn(int32_t* taskIdentifier);
void BackgroundDownload__RecieveErroredCompletion_fn(int32_t* taskIdentifier, uString* errorMessage);
void BackgroundDownload__RecieveProgress_fn(int32_t* taskIdentifier, int32_t* totalBytesWritten, int32_t* totalBytesExpectedToWrite);
void BackgroundDownload__RecieveSuccessfulCompletion_fn(int32_t* taskIdentifier, uString* finalPath);
void BackgroundDownload__ResumeDownload_fn(uint64_t* downloadID, uint64_t* __retval);
void BackgroundDownload__ResumeDownloadInner_fn(int32_t* downloadID, int32_t* __retval);
void BackgroundDownload__StartDownload_fn(uString* urlStr, uint64_t* __retval);
void BackgroundDownload__StartDownloadInner_fn(uString* urlStr, int32_t* __retval);
void BackgroundDownload__StopDownload_fn(uint64_t* downloadID);
void BackgroundDownload__StopDownloadInner_fn(int32_t* downloadID);

struct BackgroundDownload : uObject
{
    static uSStrong<uDelegate*> OnFailed1_;
    static uSStrong<uDelegate*>& OnFailed1() { return OnFailed1_; }
    static uSStrong<uDelegate*> OnPaused1_;
    static uSStrong<uDelegate*>& OnPaused1() { return OnPaused1_; }
    static uSStrong<uDelegate*> OnProgress1_;
    static uSStrong<uDelegate*>& OnProgress1() { return OnProgress1_; }
    static uSStrong<uDelegate*> OnSucceeded1_;
    static uSStrong<uDelegate*>& OnSucceeded1() { return OnSucceeded1_; }

    static void Initialize();
    static void InitInner(uDelegate* onProgress, uDelegate* onSucceeded, uDelegate* onFailed, uDelegate* onPaused);
    static void PauseDownload(uint64_t downloadID);
    static void PauseDownloadInner(int32_t downloadID);
    static void RecieveDownloadPaused(int32_t taskIdentifier);
    static void RecieveErroredCompletion(int32_t taskIdentifier, uString* errorMessage);
    static void RecieveProgress(int32_t taskIdentifier, int32_t totalBytesWritten, int32_t totalBytesExpectedToWrite);
    static void RecieveSuccessfulCompletion(int32_t taskIdentifier, uString* finalPath);
    static uint64_t ResumeDownload(uint64_t downloadID);
    static int32_t ResumeDownloadInner(int32_t downloadID);
    static uint64_t StartDownload(uString* urlStr);
    static int32_t StartDownloadInner(uString* urlStr);
    static void StopDownload(uint64_t downloadID);
    static void StopDownloadInner(int32_t downloadID);
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
