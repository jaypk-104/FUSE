// This file was generated based on '.uno/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HSMRO_ListType_USR_NM_Property;}
namespace g{struct ListType;}

namespace g{

// internal sealed class HSMRO_ListType_USR_NM_Property
// {
::g::Uno::UX::Property1_type* HSMRO_ListType_USR_NM_Property_typeof();
void HSMRO_ListType_USR_NM_Property__ctor_3_fn(HSMRO_ListType_USR_NM_Property* __this, ::g::ListType* obj, ::g::Uno::UX::Selector* name);
void HSMRO_ListType_USR_NM_Property__Get1_fn(HSMRO_ListType_USR_NM_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void HSMRO_ListType_USR_NM_Property__New1_fn(::g::ListType* obj, ::g::Uno::UX::Selector* name, HSMRO_ListType_USR_NM_Property** __retval);
void HSMRO_ListType_USR_NM_Property__get_Object_fn(HSMRO_ListType_USR_NM_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_ListType_USR_NM_Property__Set1_fn(HSMRO_ListType_USR_NM_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void HSMRO_ListType_USR_NM_Property__get_SupportsOriginSetter_fn(HSMRO_ListType_USR_NM_Property* __this, bool* __retval);

struct HSMRO_ListType_USR_NM_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::ListType*> _obj;

    void ctor_3(::g::ListType* obj, ::g::Uno::UX::Selector name);
    static HSMRO_ListType_USR_NM_Property* New1(::g::ListType* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
