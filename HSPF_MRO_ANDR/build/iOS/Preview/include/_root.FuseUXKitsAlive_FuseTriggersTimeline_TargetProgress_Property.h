// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/.uno/ux15/Fuse.UXKits.Alive.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Double.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Triggers{struct Timeline;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseUXKitsAlive_FuseTriggersTimeline_TargetProgress_Property;}

namespace g{

// internal sealed class FuseUXKitsAlive_FuseTriggersTimeline_TargetProgress_Property
// {
::g::Uno::UX::Property1_type* FuseUXKitsAlive_FuseTriggersTimeline_TargetProgress_Property_typeof();
void FuseUXKitsAlive_FuseTriggersTimeline_TargetProgress_Property__ctor_3_fn(FuseUXKitsAlive_FuseTriggersTimeline_TargetProgress_Property* __this, ::g::Fuse::Triggers::Timeline* obj, ::g::Uno::UX::Selector* name);
void FuseUXKitsAlive_FuseTriggersTimeline_TargetProgress_Property__Get1_fn(FuseUXKitsAlive_FuseTriggersTimeline_TargetProgress_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* __retval);
void FuseUXKitsAlive_FuseTriggersTimeline_TargetProgress_Property__New1_fn(::g::Fuse::Triggers::Timeline* obj, ::g::Uno::UX::Selector* name, FuseUXKitsAlive_FuseTriggersTimeline_TargetProgress_Property** __retval);
void FuseUXKitsAlive_FuseTriggersTimeline_TargetProgress_Property__get_Object_fn(FuseUXKitsAlive_FuseTriggersTimeline_TargetProgress_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseUXKitsAlive_FuseTriggersTimeline_TargetProgress_Property__Set1_fn(FuseUXKitsAlive_FuseTriggersTimeline_TargetProgress_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* v, uObject* origin);

struct FuseUXKitsAlive_FuseTriggersTimeline_TargetProgress_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Triggers::Timeline*> _obj;

    void ctor_3(::g::Fuse::Triggers::Timeline* obj, ::g::Uno::UX::Selector name);
    static FuseUXKitsAlive_FuseTriggersTimeline_TargetProgress_Property* New1(::g::Fuse::Triggers::Timeline* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
