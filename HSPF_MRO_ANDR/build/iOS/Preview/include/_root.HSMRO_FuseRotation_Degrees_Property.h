// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{struct Rotation;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HSMRO_FuseRotation_Degrees_Property;}

namespace g{

// internal sealed class HSMRO_FuseRotation_Degrees_Property
// {
::g::Uno::UX::Property1_type* HSMRO_FuseRotation_Degrees_Property_typeof();
void HSMRO_FuseRotation_Degrees_Property__ctor_3_fn(HSMRO_FuseRotation_Degrees_Property* __this, ::g::Fuse::Rotation* obj, ::g::Uno::UX::Selector* name);
void HSMRO_FuseRotation_Degrees_Property__Get1_fn(HSMRO_FuseRotation_Degrees_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void HSMRO_FuseRotation_Degrees_Property__New1_fn(::g::Fuse::Rotation* obj, ::g::Uno::UX::Selector* name, HSMRO_FuseRotation_Degrees_Property** __retval);
void HSMRO_FuseRotation_Degrees_Property__get_Object_fn(HSMRO_FuseRotation_Degrees_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_FuseRotation_Degrees_Property__Set1_fn(HSMRO_FuseRotation_Degrees_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);

struct HSMRO_FuseRotation_Degrees_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Rotation*> _obj;

    void ctor_3(::g::Fuse::Rotation* obj, ::g::Uno::UX::Selector name);
    static HSMRO_FuseRotation_Degrees_Property* New1(::g::Fuse::Rotation* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
