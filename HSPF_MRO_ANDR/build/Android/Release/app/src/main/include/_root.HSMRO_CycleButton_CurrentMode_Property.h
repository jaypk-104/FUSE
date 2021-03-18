// This file was generated based on '.uno/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Int.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct CycleButton;}
namespace g{struct HSMRO_CycleButton_CurrentMode_Property;}

namespace g{

// internal sealed class HSMRO_CycleButton_CurrentMode_Property
// {
::g::Uno::UX::Property1_type* HSMRO_CycleButton_CurrentMode_Property_typeof();
void HSMRO_CycleButton_CurrentMode_Property__ctor_3_fn(HSMRO_CycleButton_CurrentMode_Property* __this, ::g::CycleButton* obj, ::g::Uno::UX::Selector* name);
void HSMRO_CycleButton_CurrentMode_Property__Get1_fn(HSMRO_CycleButton_CurrentMode_Property* __this, ::g::Uno::UX::PropertyObject* obj, int32_t* __retval);
void HSMRO_CycleButton_CurrentMode_Property__New1_fn(::g::CycleButton* obj, ::g::Uno::UX::Selector* name, HSMRO_CycleButton_CurrentMode_Property** __retval);
void HSMRO_CycleButton_CurrentMode_Property__get_Object_fn(HSMRO_CycleButton_CurrentMode_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_CycleButton_CurrentMode_Property__Set1_fn(HSMRO_CycleButton_CurrentMode_Property* __this, ::g::Uno::UX::PropertyObject* obj, int32_t* v, uObject* origin);
void HSMRO_CycleButton_CurrentMode_Property__get_SupportsOriginSetter_fn(HSMRO_CycleButton_CurrentMode_Property* __this, bool* __retval);

struct HSMRO_CycleButton_CurrentMode_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::CycleButton*> _obj;

    void ctor_3(::g::CycleButton* obj, ::g::Uno::UX::Selector name);
    static HSMRO_CycleButton_CurrentMode_Property* New1(::g::CycleButton* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
