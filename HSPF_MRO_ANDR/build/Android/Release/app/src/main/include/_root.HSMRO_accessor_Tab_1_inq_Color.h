// This file was generated based on '.uno/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HSMRO_accessor_Tab_1_inq_Color;}

namespace g{

// internal sealed class HSMRO_accessor_Tab_1_inq_Color
// {
::g::Uno::UX::PropertyAccessor_type* HSMRO_accessor_Tab_1_inq_Color_typeof();
void HSMRO_accessor_Tab_1_inq_Color__ctor_1_fn(HSMRO_accessor_Tab_1_inq_Color* __this);
void HSMRO_accessor_Tab_1_inq_Color__GetAsObject_fn(HSMRO_accessor_Tab_1_inq_Color* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void HSMRO_accessor_Tab_1_inq_Color__get_Name_fn(HSMRO_accessor_Tab_1_inq_Color* __this, ::g::Uno::UX::Selector* __retval);
void HSMRO_accessor_Tab_1_inq_Color__New1_fn(HSMRO_accessor_Tab_1_inq_Color** __retval);
void HSMRO_accessor_Tab_1_inq_Color__get_PropertyType_fn(HSMRO_accessor_Tab_1_inq_Color* __this, uType** __retval);
void HSMRO_accessor_Tab_1_inq_Color__SetAsObject_fn(HSMRO_accessor_Tab_1_inq_Color* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void HSMRO_accessor_Tab_1_inq_Color__get_SupportsOriginSetter_fn(HSMRO_accessor_Tab_1_inq_Color* __this, bool* __retval);

struct HSMRO_accessor_Tab_1_inq_Color : ::g::Uno::UX::PropertyAccessor
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return HSMRO_accessor_Tab_1_inq_Color_typeof()->Init(), Singleton_; }
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return HSMRO_accessor_Tab_1_inq_Color_typeof()->Init(), _name_; }

    void ctor_1();
    static HSMRO_accessor_Tab_1_inq_Color* New1();
};
// }

} // ::g
