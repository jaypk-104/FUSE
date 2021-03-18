// This file was generated based on '.uno/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Animations{struct Change;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HSMRO_FuseAnimationsChangefloat4_Value_Property;}

namespace g{

// internal sealed class HSMRO_FuseAnimationsChangefloat4_Value_Property
// {
::g::Uno::UX::Property1_type* HSMRO_FuseAnimationsChangefloat4_Value_Property_typeof();
void HSMRO_FuseAnimationsChangefloat4_Value_Property__ctor_3_fn(HSMRO_FuseAnimationsChangefloat4_Value_Property* __this, ::g::Fuse::Animations::Change* obj, ::g::Uno::UX::Selector* name);
void HSMRO_FuseAnimationsChangefloat4_Value_Property__Get1_fn(HSMRO_FuseAnimationsChangefloat4_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval);
void HSMRO_FuseAnimationsChangefloat4_Value_Property__New1_fn(::g::Fuse::Animations::Change* obj, ::g::Uno::UX::Selector* name, HSMRO_FuseAnimationsChangefloat4_Value_Property** __retval);
void HSMRO_FuseAnimationsChangefloat4_Value_Property__get_Object_fn(HSMRO_FuseAnimationsChangefloat4_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_FuseAnimationsChangefloat4_Value_Property__Set1_fn(HSMRO_FuseAnimationsChangefloat4_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin);

struct HSMRO_FuseAnimationsChangefloat4_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Animations::Change*> _obj;

    void ctor_3(::g::Fuse::Animations::Change* obj, ::g::Uno::UX::Selector name);
    static HSMRO_FuseAnimationsChangefloat4_Value_Property* New1(::g::Fuse::Animations::Change* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
