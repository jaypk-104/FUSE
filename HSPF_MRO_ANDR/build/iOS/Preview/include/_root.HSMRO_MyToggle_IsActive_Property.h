// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HSMRO_MyToggle_IsActive_Property;}
namespace g{struct MyToggle;}

namespace g{

// internal sealed class HSMRO_MyToggle_IsActive_Property
// {
::g::Uno::UX::Property1_type* HSMRO_MyToggle_IsActive_Property_typeof();
void HSMRO_MyToggle_IsActive_Property__ctor_3_fn(HSMRO_MyToggle_IsActive_Property* __this, ::g::MyToggle* obj, ::g::Uno::UX::Selector* name);
void HSMRO_MyToggle_IsActive_Property__Get1_fn(HSMRO_MyToggle_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval);
void HSMRO_MyToggle_IsActive_Property__New1_fn(::g::MyToggle* obj, ::g::Uno::UX::Selector* name, HSMRO_MyToggle_IsActive_Property** __retval);
void HSMRO_MyToggle_IsActive_Property__get_Object_fn(HSMRO_MyToggle_IsActive_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_MyToggle_IsActive_Property__Set1_fn(HSMRO_MyToggle_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin);
void HSMRO_MyToggle_IsActive_Property__get_SupportsOriginSetter_fn(HSMRO_MyToggle_IsActive_Property* __this, bool* __retval);

struct HSMRO_MyToggle_IsActive_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::MyToggle*> _obj;

    void ctor_3(::g::MyToggle* obj, ::g::Uno::UX::Selector name);
    static HSMRO_MyToggle_IsActive_Property* New1(::g::MyToggle* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
