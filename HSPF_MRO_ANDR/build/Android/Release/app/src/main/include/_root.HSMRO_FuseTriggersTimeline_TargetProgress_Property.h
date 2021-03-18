// This file was generated based on '.uno/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Double.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Triggers{struct Timeline;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HSMRO_FuseTriggersTimeline_TargetProgress_Property;}

namespace g{

// internal sealed class HSMRO_FuseTriggersTimeline_TargetProgress_Property
// {
::g::Uno::UX::Property1_type* HSMRO_FuseTriggersTimeline_TargetProgress_Property_typeof();
void HSMRO_FuseTriggersTimeline_TargetProgress_Property__ctor_3_fn(HSMRO_FuseTriggersTimeline_TargetProgress_Property* __this, ::g::Fuse::Triggers::Timeline* obj, ::g::Uno::UX::Selector* name);
void HSMRO_FuseTriggersTimeline_TargetProgress_Property__Get1_fn(HSMRO_FuseTriggersTimeline_TargetProgress_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* __retval);
void HSMRO_FuseTriggersTimeline_TargetProgress_Property__New1_fn(::g::Fuse::Triggers::Timeline* obj, ::g::Uno::UX::Selector* name, HSMRO_FuseTriggersTimeline_TargetProgress_Property** __retval);
void HSMRO_FuseTriggersTimeline_TargetProgress_Property__get_Object_fn(HSMRO_FuseTriggersTimeline_TargetProgress_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_FuseTriggersTimeline_TargetProgress_Property__Set1_fn(HSMRO_FuseTriggersTimeline_TargetProgress_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* v, uObject* origin);

struct HSMRO_FuseTriggersTimeline_TargetProgress_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Triggers::Timeline*> _obj;

    void ctor_3(::g::Fuse::Triggers::Timeline* obj, ::g::Uno::UX::Selector name);
    static HSMRO_FuseTriggersTimeline_TargetProgress_Property* New1(::g::Fuse::Triggers::Timeline* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
