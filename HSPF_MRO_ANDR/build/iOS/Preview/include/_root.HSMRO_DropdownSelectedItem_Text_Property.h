// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct DropdownSelectedItem;}
namespace g{struct HSMRO_DropdownSelectedItem_Text_Property;}

namespace g{

// internal sealed class HSMRO_DropdownSelectedItem_Text_Property
// {
::g::Uno::UX::Property1_type* HSMRO_DropdownSelectedItem_Text_Property_typeof();
void HSMRO_DropdownSelectedItem_Text_Property__ctor_3_fn(HSMRO_DropdownSelectedItem_Text_Property* __this, ::g::DropdownSelectedItem* obj, ::g::Uno::UX::Selector* name);
void HSMRO_DropdownSelectedItem_Text_Property__Get1_fn(HSMRO_DropdownSelectedItem_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void HSMRO_DropdownSelectedItem_Text_Property__New1_fn(::g::DropdownSelectedItem* obj, ::g::Uno::UX::Selector* name, HSMRO_DropdownSelectedItem_Text_Property** __retval);
void HSMRO_DropdownSelectedItem_Text_Property__get_Object_fn(HSMRO_DropdownSelectedItem_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_DropdownSelectedItem_Text_Property__Set1_fn(HSMRO_DropdownSelectedItem_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void HSMRO_DropdownSelectedItem_Text_Property__get_SupportsOriginSetter_fn(HSMRO_DropdownSelectedItem_Text_Property* __this, bool* __retval);

struct HSMRO_DropdownSelectedItem_Text_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::DropdownSelectedItem*> _obj;

    void ctor_3(::g::DropdownSelectedItem* obj, ::g::Uno::UX::Selector name);
    static HSMRO_DropdownSelectedItem_Text_Property* New1(::g::DropdownSelectedItem* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
