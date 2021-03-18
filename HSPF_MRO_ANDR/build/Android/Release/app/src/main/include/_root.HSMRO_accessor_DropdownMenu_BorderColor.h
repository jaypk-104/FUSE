// This file was generated based on '.uno/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HSMRO_accessor_DropdownMenu_BorderColor;}

namespace g{

// internal sealed class HSMRO_accessor_DropdownMenu_BorderColor
// {
::g::Uno::UX::PropertyAccessor_type* HSMRO_accessor_DropdownMenu_BorderColor_typeof();
void HSMRO_accessor_DropdownMenu_BorderColor__ctor_1_fn(HSMRO_accessor_DropdownMenu_BorderColor* __this);
void HSMRO_accessor_DropdownMenu_BorderColor__GetAsObject_fn(HSMRO_accessor_DropdownMenu_BorderColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void HSMRO_accessor_DropdownMenu_BorderColor__get_Name_fn(HSMRO_accessor_DropdownMenu_BorderColor* __this, ::g::Uno::UX::Selector* __retval);
void HSMRO_accessor_DropdownMenu_BorderColor__New1_fn(HSMRO_accessor_DropdownMenu_BorderColor** __retval);
void HSMRO_accessor_DropdownMenu_BorderColor__get_PropertyType_fn(HSMRO_accessor_DropdownMenu_BorderColor* __this, uType** __retval);
void HSMRO_accessor_DropdownMenu_BorderColor__SetAsObject_fn(HSMRO_accessor_DropdownMenu_BorderColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void HSMRO_accessor_DropdownMenu_BorderColor__get_SupportsOriginSetter_fn(HSMRO_accessor_DropdownMenu_BorderColor* __this, bool* __retval);

struct HSMRO_accessor_DropdownMenu_BorderColor : ::g::Uno::UX::PropertyAccessor
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return HSMRO_accessor_DropdownMenu_BorderColor_typeof()->Init(), Singleton_; }
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return HSMRO_accessor_DropdownMenu_BorderColor_typeof()->Init(), _name_; }

    void ctor_1();
    static HSMRO_accessor_DropdownMenu_BorderColor* New1();
};
// }

} // ::g
