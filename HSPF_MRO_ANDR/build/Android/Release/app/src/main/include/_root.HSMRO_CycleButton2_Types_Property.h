// This file was generated based on '.uno/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct CycleButton2;}
namespace g{struct HSMRO_CycleButton2_Types_Property;}

namespace g{

// internal sealed class HSMRO_CycleButton2_Types_Property
// {
::g::Uno::UX::Property1_type* HSMRO_CycleButton2_Types_Property_typeof();
void HSMRO_CycleButton2_Types_Property__ctor_3_fn(HSMRO_CycleButton2_Types_Property* __this, ::g::CycleButton2* obj, ::g::Uno::UX::Selector* name);
void HSMRO_CycleButton2_Types_Property__Get1_fn(HSMRO_CycleButton2_Types_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void HSMRO_CycleButton2_Types_Property__New1_fn(::g::CycleButton2* obj, ::g::Uno::UX::Selector* name, HSMRO_CycleButton2_Types_Property** __retval);
void HSMRO_CycleButton2_Types_Property__get_Object_fn(HSMRO_CycleButton2_Types_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_CycleButton2_Types_Property__Set1_fn(HSMRO_CycleButton2_Types_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void HSMRO_CycleButton2_Types_Property__get_SupportsOriginSetter_fn(HSMRO_CycleButton2_Types_Property* __this, bool* __retval);

struct HSMRO_CycleButton2_Types_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::CycleButton2*> _obj;

    void ctor_3(::g::CycleButton2* obj, ::g::Uno::UX::Selector name);
    static HSMRO_CycleButton2_Types_Property* New1(::g::CycleButton2* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
