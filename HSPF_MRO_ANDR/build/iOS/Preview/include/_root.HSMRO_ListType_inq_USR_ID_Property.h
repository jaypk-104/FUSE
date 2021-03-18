// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HSMRO_ListType_inq_USR_ID_Property;}
namespace g{struct ListType_inq;}

namespace g{

// internal sealed class HSMRO_ListType_inq_USR_ID_Property
// {
::g::Uno::UX::Property1_type* HSMRO_ListType_inq_USR_ID_Property_typeof();
void HSMRO_ListType_inq_USR_ID_Property__ctor_3_fn(HSMRO_ListType_inq_USR_ID_Property* __this, ::g::ListType_inq* obj, ::g::Uno::UX::Selector* name);
void HSMRO_ListType_inq_USR_ID_Property__Get1_fn(HSMRO_ListType_inq_USR_ID_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void HSMRO_ListType_inq_USR_ID_Property__New1_fn(::g::ListType_inq* obj, ::g::Uno::UX::Selector* name, HSMRO_ListType_inq_USR_ID_Property** __retval);
void HSMRO_ListType_inq_USR_ID_Property__get_Object_fn(HSMRO_ListType_inq_USR_ID_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_ListType_inq_USR_ID_Property__Set1_fn(HSMRO_ListType_inq_USR_ID_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void HSMRO_ListType_inq_USR_ID_Property__get_SupportsOriginSetter_fn(HSMRO_ListType_inq_USR_ID_Property* __this, bool* __retval);

struct HSMRO_ListType_inq_USR_ID_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::ListType_inq*> _obj;

    void ctor_3(::g::ListType_inq* obj, ::g::Uno::UX::Selector name);
    static HSMRO_ListType_inq_USR_ID_Property* New1(::g::ListType_inq* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
