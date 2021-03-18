// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/.uno/ux15/Alive.StickingAnimation.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.ScrollingAnimation.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Alive{struct StickingAnimation;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class StickingAnimation
// {
::g::Fuse::Triggers::ScrollingAnimation_type* StickingAnimation_typeof();
void StickingAnimation__ctor_6_fn(StickingAnimation* __this);
void StickingAnimation__get_Distance_fn(StickingAnimation* __this, float* __retval);
void StickingAnimation__set_Distance_fn(StickingAnimation* __this, float* value);
void StickingAnimation__InitializeUX_fn(StickingAnimation* __this);
void StickingAnimation__New3_fn(StickingAnimation** __retval);
void StickingAnimation__SetDistance_fn(StickingAnimation* __this, float* value, uObject* origin);

struct StickingAnimation : ::g::Fuse::Triggers::ScrollingAnimation
{
    float _field_Distance;
    uStrong< ::g::Uno::UX::Property1*> this_From_inst;
    uStrong< ::g::Uno::UX::Property1*> this_To_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return StickingAnimation_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return StickingAnimation_typeof()->Init(), __selector1_; }

    void ctor_6();
    float Distance();
    void Distance(float value);
    void InitializeUX();
    void SetDistance(float value, uObject* origin);
    static StickingAnimation* New3();
};
// }

}} // ::g::Alive
