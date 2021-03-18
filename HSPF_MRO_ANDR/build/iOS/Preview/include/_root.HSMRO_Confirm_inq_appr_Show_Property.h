// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Confirm_inq_appr;}
namespace g{struct HSMRO_Confirm_inq_appr_Show_Property;}

namespace g{

// internal sealed class HSMRO_Confirm_inq_appr_Show_Property
// {
::g::Uno::UX::Property1_type* HSMRO_Confirm_inq_appr_Show_Property_typeof();
void HSMRO_Confirm_inq_appr_Show_Property__ctor_3_fn(HSMRO_Confirm_inq_appr_Show_Property* __this, ::g::Confirm_inq_appr* obj, ::g::Uno::UX::Selector* name);
void HSMRO_Confirm_inq_appr_Show_Property__Get1_fn(HSMRO_Confirm_inq_appr_Show_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval);
void HSMRO_Confirm_inq_appr_Show_Property__New1_fn(::g::Confirm_inq_appr* obj, ::g::Uno::UX::Selector* name, HSMRO_Confirm_inq_appr_Show_Property** __retval);
void HSMRO_Confirm_inq_appr_Show_Property__get_Object_fn(HSMRO_Confirm_inq_appr_Show_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_Confirm_inq_appr_Show_Property__Set1_fn(HSMRO_Confirm_inq_appr_Show_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin);
void HSMRO_Confirm_inq_appr_Show_Property__get_SupportsOriginSetter_fn(HSMRO_Confirm_inq_appr_Show_Property* __this, bool* __retval);

struct HSMRO_Confirm_inq_appr_Show_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Confirm_inq_appr*> _obj;

    void ctor_3(::g::Confirm_inq_appr* obj, ::g::Uno::UX::Selector name);
    static HSMRO_Confirm_inq_appr_Show_Property* New1(::g::Confirm_inq_appr* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
