// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HSMRO_accessor_DropdownMenu_ListItems;}

namespace g{

// internal sealed class HSMRO_accessor_DropdownMenu_ListItems
// {
::g::Uno::UX::PropertyAccessor_type* HSMRO_accessor_DropdownMenu_ListItems_typeof();
void HSMRO_accessor_DropdownMenu_ListItems__ctor_1_fn(HSMRO_accessor_DropdownMenu_ListItems* __this);
void HSMRO_accessor_DropdownMenu_ListItems__GetAsObject_fn(HSMRO_accessor_DropdownMenu_ListItems* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void HSMRO_accessor_DropdownMenu_ListItems__get_Name_fn(HSMRO_accessor_DropdownMenu_ListItems* __this, ::g::Uno::UX::Selector* __retval);
void HSMRO_accessor_DropdownMenu_ListItems__New1_fn(HSMRO_accessor_DropdownMenu_ListItems** __retval);
void HSMRO_accessor_DropdownMenu_ListItems__get_PropertyType_fn(HSMRO_accessor_DropdownMenu_ListItems* __this, uType** __retval);
void HSMRO_accessor_DropdownMenu_ListItems__SetAsObject_fn(HSMRO_accessor_DropdownMenu_ListItems* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void HSMRO_accessor_DropdownMenu_ListItems__get_SupportsOriginSetter_fn(HSMRO_accessor_DropdownMenu_ListItems* __this, bool* __retval);

struct HSMRO_accessor_DropdownMenu_ListItems : ::g::Uno::UX::PropertyAccessor
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return HSMRO_accessor_DropdownMenu_ListItems_typeof()->Init(), Singleton_; }
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return HSMRO_accessor_DropdownMenu_ListItems_typeof()->Init(), _name_; }

    void ctor_1();
    static HSMRO_accessor_DropdownMenu_ListItems* New1();
};
// }

} // ::g
