// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.DateTime.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Controls{struct DatePickerBase;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HSMRO_FuseControlsDatePickerBase_MaxValue_Property;}

namespace g{

// internal sealed class HSMRO_FuseControlsDatePickerBase_MaxValue_Property
// {
::g::Uno::UX::Property1_type* HSMRO_FuseControlsDatePickerBase_MaxValue_Property_typeof();
void HSMRO_FuseControlsDatePickerBase_MaxValue_Property__ctor_3_fn(HSMRO_FuseControlsDatePickerBase_MaxValue_Property* __this, ::g::Fuse::Controls::DatePickerBase* obj, ::g::Uno::UX::Selector* name);
void HSMRO_FuseControlsDatePickerBase_MaxValue_Property__Get1_fn(HSMRO_FuseControlsDatePickerBase_MaxValue_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::DateTime* __retval);
void HSMRO_FuseControlsDatePickerBase_MaxValue_Property__New1_fn(::g::Fuse::Controls::DatePickerBase* obj, ::g::Uno::UX::Selector* name, HSMRO_FuseControlsDatePickerBase_MaxValue_Property** __retval);
void HSMRO_FuseControlsDatePickerBase_MaxValue_Property__get_Object_fn(HSMRO_FuseControlsDatePickerBase_MaxValue_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_FuseControlsDatePickerBase_MaxValue_Property__Set1_fn(HSMRO_FuseControlsDatePickerBase_MaxValue_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::DateTime* v, uObject* origin);
void HSMRO_FuseControlsDatePickerBase_MaxValue_Property__get_SupportsOriginSetter_fn(HSMRO_FuseControlsDatePickerBase_MaxValue_Property* __this, bool* __retval);

struct HSMRO_FuseControlsDatePickerBase_MaxValue_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::DatePickerBase*> _obj;

    void ctor_3(::g::Fuse::Controls::DatePickerBase* obj, ::g::Uno::UX::Selector name);
    static HSMRO_FuseControlsDatePickerBase_MaxValue_Property* New1(::g::Fuse::Controls::DatePickerBase* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
