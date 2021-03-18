// This file was generated based on '.uno/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Triggers{struct Busy;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HSMRO_FuseTriggersBusy_IsActive_Property;}

namespace g{

// internal sealed class HSMRO_FuseTriggersBusy_IsActive_Property
// {
::g::Uno::UX::Property1_type* HSMRO_FuseTriggersBusy_IsActive_Property_typeof();
void HSMRO_FuseTriggersBusy_IsActive_Property__ctor_3_fn(HSMRO_FuseTriggersBusy_IsActive_Property* __this, ::g::Fuse::Triggers::Busy* obj, ::g::Uno::UX::Selector* name);
void HSMRO_FuseTriggersBusy_IsActive_Property__Get1_fn(HSMRO_FuseTriggersBusy_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval);
void HSMRO_FuseTriggersBusy_IsActive_Property__New1_fn(::g::Fuse::Triggers::Busy* obj, ::g::Uno::UX::Selector* name, HSMRO_FuseTriggersBusy_IsActive_Property** __retval);
void HSMRO_FuseTriggersBusy_IsActive_Property__get_Object_fn(HSMRO_FuseTriggersBusy_IsActive_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_FuseTriggersBusy_IsActive_Property__Set1_fn(HSMRO_FuseTriggersBusy_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin);

struct HSMRO_FuseTriggersBusy_IsActive_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Triggers::Busy*> _obj;

    void ctor_3(::g::Fuse::Triggers::Busy* obj, ::g::Uno::UX::Selector name);
    static HSMRO_FuseTriggersBusy_IsActive_Property* New1(::g::Fuse::Triggers::Busy* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
