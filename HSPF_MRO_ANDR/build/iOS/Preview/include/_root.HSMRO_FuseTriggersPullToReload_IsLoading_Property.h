// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Triggers{struct PullToReload;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HSMRO_FuseTriggersPullToReload_IsLoading_Property;}

namespace g{

// internal sealed class HSMRO_FuseTriggersPullToReload_IsLoading_Property
// {
::g::Uno::UX::Property1_type* HSMRO_FuseTriggersPullToReload_IsLoading_Property_typeof();
void HSMRO_FuseTriggersPullToReload_IsLoading_Property__ctor_3_fn(HSMRO_FuseTriggersPullToReload_IsLoading_Property* __this, ::g::Fuse::Triggers::PullToReload* obj, ::g::Uno::UX::Selector* name);
void HSMRO_FuseTriggersPullToReload_IsLoading_Property__Get1_fn(HSMRO_FuseTriggersPullToReload_IsLoading_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval);
void HSMRO_FuseTriggersPullToReload_IsLoading_Property__New1_fn(::g::Fuse::Triggers::PullToReload* obj, ::g::Uno::UX::Selector* name, HSMRO_FuseTriggersPullToReload_IsLoading_Property** __retval);
void HSMRO_FuseTriggersPullToReload_IsLoading_Property__get_Object_fn(HSMRO_FuseTriggersPullToReload_IsLoading_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_FuseTriggersPullToReload_IsLoading_Property__Set1_fn(HSMRO_FuseTriggersPullToReload_IsLoading_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin);

struct HSMRO_FuseTriggersPullToReload_IsLoading_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Triggers::PullToReload*> _obj;

    void ctor_3(::g::Fuse::Triggers::PullToReload* obj, ::g::Uno::UX::Selector name);
    static HSMRO_FuseTriggersPullToReload_IsLoading_Property* New1(::g::Fuse::Triggers::PullToReload* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
