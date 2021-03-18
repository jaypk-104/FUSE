// This file was generated based on /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Swipe.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct SwipeRegion;}}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipeGesture;}}}
namespace g{namespace Fuse{namespace Gestures{struct WhileSwipeActive;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class WhileSwipeActive
// {
struct WhileSwipeActive_type : ::g::Fuse::Triggers::Trigger_type
{
    ::g::Uno::UX::IPropertyListener interface9;
};

WhileSwipeActive_type* WhileSwipeActive_typeof();
void WhileSwipeActive__ctor_6_fn(WhileSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* source);
void WhileSwipeActive__New2_fn(::g::Fuse::Gestures::SwipeGesture* source, WhileSwipeActive** __retval);
void WhileSwipeActive__OnProgressChanged1_fn(WhileSwipeActive* __this, double* progress);
void WhileSwipeActive__OnRooted_fn(WhileSwipeActive* __this);
void WhileSwipeActive__OnUnrooted_fn(WhileSwipeActive* __this);
void WhileSwipeActive__get_Source_fn(WhileSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval);
void WhileSwipeActive__set_Source_fn(WhileSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value);
void WhileSwipeActive__get_Threshold_fn(WhileSwipeActive* __this, float* __retval);
void WhileSwipeActive__set_Threshold_fn(WhileSwipeActive* __this, float* value);
void WhileSwipeActive__UnoUXIPropertyListenerOnPropertyChanged_fn(WhileSwipeActive* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* prop);

struct WhileSwipeActive : ::g::Fuse::Triggers::WhileTrigger
{
    uStrong< ::g::Fuse::Gestures::Internal::SwipeRegion*> _region;
    float _threshold;
    uStrong< ::g::Fuse::Gestures::SwipeGesture*> _Source;

    void ctor_6(::g::Fuse::Gestures::SwipeGesture* source);
    void OnProgressChanged1(double progress);
    ::g::Fuse::Gestures::SwipeGesture* Source();
    void Source(::g::Fuse::Gestures::SwipeGesture* value);
    float Threshold();
    void Threshold(float value);
    static WhileSwipeActive* New2(::g::Fuse::Gestures::SwipeGesture* source);
};
// }

}}} // ::g::Fuse::Gestures
