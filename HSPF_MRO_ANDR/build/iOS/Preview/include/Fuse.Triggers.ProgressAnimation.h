// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/ProgressAnimation.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct ProgressAnimation;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class ProgressAnimation
// {
::g::Fuse::Triggers::Trigger_type* ProgressAnimation_typeof();
void ProgressAnimation__ctor_5_fn(ProgressAnimation* __this);
void ProgressAnimation__DeinitProgress_fn(ProgressAnimation* __this);
void ProgressAnimation__FindIProgress_fn(ProgressAnimation* __this, uObject** __retval);
void ProgressAnimation__InitProgress_fn(ProgressAnimation* __this);
void ProgressAnimation__New2_fn(ProgressAnimation** __retval);
void ProgressAnimation__OnChanged_fn(ProgressAnimation* __this, uObject* s, uObject* a);
void ProgressAnimation__OnRooted_fn(ProgressAnimation* __this);
void ProgressAnimation__OnUnrooted_fn(ProgressAnimation* __this);
void ProgressAnimation__get_Source_fn(ProgressAnimation* __this, uObject** __retval);
void ProgressAnimation__set_Source_fn(ProgressAnimation* __this, uObject* value);

struct ProgressAnimation : ::g::Fuse::Triggers::Trigger
{
    uStrong<uObject*> _source;
    uStrong<uObject*> _progress;
    double _prevValue;

    void ctor_5();
    void DeinitProgress();
    uObject* FindIProgress();
    void InitProgress();
    void OnChanged(uObject* s, uObject* a);
    uObject* Source();
    void Source(uObject* value);
    static ProgressAnimation* New2();
};
// }

}}} // ::g::Fuse::Triggers
