// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Timeline.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.IPlayback.h>
#include <Fuse.Triggers.IProgress.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct Timeline;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public partial sealed class Timeline
// {
struct Timeline_type : ::g::Fuse::Triggers::Trigger_type
{
    ::g::Fuse::Triggers::IPlayback interface9;
    ::g::Fuse::Triggers::IPulseTrigger interface10;
    ::g::Fuse::Triggers::IProgress interface11;
};

Timeline_type* Timeline_typeof();
void Timeline__ctor_5_fn(Timeline* __this);
void Timeline__BypassOff_fn(Timeline* __this);
void Timeline__FuseTriggersIPlaybackget_CanPause_fn(Timeline* __this, bool* __retval);
void Timeline__FuseTriggersIPlaybackget_CanPlayTo_fn(Timeline* __this, bool* __retval);
void Timeline__FuseTriggersIPlaybackget_CanResume_fn(Timeline* __this, bool* __retval);
void Timeline__FuseTriggersIPlaybackget_CanStop_fn(Timeline* __this, bool* __retval);
void Timeline__FuseTriggersIPlaybackPause_fn(Timeline* __this);
void Timeline__FuseTriggersIPlaybackPlayTo_fn(Timeline* __this, double* progress);
void Timeline__FuseTriggersIPlaybackResume_fn(Timeline* __this);
void Timeline__FuseTriggersIPlaybackStop_fn(Timeline* __this);
void Timeline__get_InitialProgress_fn(Timeline* __this, double* __retval);
void Timeline__set_InitialProgress_fn(Timeline* __this, double* value);
void Timeline__New2_fn(Timeline** __retval);
void Timeline__get_OnAtZero_fn(Timeline* __this, bool* __retval);
void Timeline__set_OnAtZero_fn(Timeline* __this, bool* value);
void Timeline__OnProgressChanged_fn(Timeline* __this);
void Timeline__OnRooted_fn(Timeline* __this);
void Timeline__pause_fn(Timeline* n);
void Timeline__Pause_fn(Timeline* __this);
void Timeline__Play_fn(Timeline* __this, double* progress);
void Timeline__get_PlayMode_fn(Timeline* __this, int32_t* __retval);
void Timeline__set_PlayMode_fn(Timeline* __this, int32_t* value);
void Timeline__playTo_fn(Timeline* n, uArray* args);
void Timeline__PlayTo1_fn(Timeline* __this, double* progress);
void Timeline__get_Progress1_fn(Timeline* __this, double* __retval);
void Timeline__set_Progress_fn(Timeline* __this, double* value);
void Timeline__add_ProgressChanged_fn(Timeline* __this, uDelegate* value);
void Timeline__remove_ProgressChanged_fn(Timeline* __this, uDelegate* value);
void Timeline__pulse_fn(Timeline* n);
void Timeline__Pulse1_fn(Timeline* __this);
void Timeline__pulseBackward_fn(Timeline* n);
void Timeline__PulseBackward1_fn(Timeline* __this);
void Timeline__pulseForward_fn(Timeline* n);
void Timeline__PulseForward_fn(Timeline* __this);
void Timeline__resume_fn(Timeline* n);
void Timeline__Resume_fn(Timeline* __this);
void Timeline__seek_fn(Timeline* n, uArray* args);
void Timeline__SetProgress_fn(Timeline* __this, double* value, uObject* origin);
void Timeline__stop_fn(Timeline* n);
void Timeline__Stop1_fn(Timeline* __this);
void Timeline__get_TargetProgress_fn(Timeline* __this, double* __retval);
void Timeline__set_TargetProgress_fn(Timeline* __this, double* value);
void Timeline__TimelinePlayTo_fn(Timeline* __this, double* progress);

struct Timeline : ::g::Fuse::Triggers::Trigger
{
    int32_t _state;
    bool _hasInitialProgress;
    double _initialProgress;
    bool _hasTargetProgress;
    double _targetProgress;
    static ::g::Uno::UX::Selector _progressName_;
    static ::g::Uno::UX::Selector& _progressName() { return Timeline_typeof()->Init(), _progressName_; }
    int32_t _lastPlay;
    uStrong<uObject*> _progressOrigin;
    uStrong<uDelegate*> ProgressChanged1;

    void ctor_5();
    void BypassOff();
    double InitialProgress();
    void InitialProgress(double value);
    bool OnAtZero();
    void OnAtZero(bool value);
    void Pause();
    void Play(double progress);
    int32_t PlayMode();
    void PlayMode(int32_t value);
    void PlayTo1(double progress);
    double Progress1();
    void Progress1(double value);
    void add_ProgressChanged(uDelegate* value);
    void remove_ProgressChanged(uDelegate* value);
    void Pulse1();
    void PulseBackward1();
    void PulseForward();
    void Resume();
    void SetProgress(double value, uObject* origin);
    void Stop1();
    double TargetProgress();
    void TargetProgress(double value);
    void TimelinePlayTo(double progress);
    static Timeline* New2();
    static void pause(Timeline* n);
    static void playTo(Timeline* n, uArray* args);
    static void pulse(Timeline* n);
    static void pulseBackward(Timeline* n);
    static void pulseForward(Timeline* n);
    static void resume(Timeline* n);
    static void seek(Timeline* n, uArray* args);
    static void stop(Timeline* n);
};
// }

}}} // ::g::Fuse::Triggers
