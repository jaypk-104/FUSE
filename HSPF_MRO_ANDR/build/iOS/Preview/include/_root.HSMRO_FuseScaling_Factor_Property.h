// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{struct Scaling;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HSMRO_FuseScaling_Factor_Property;}

namespace g{

// internal sealed class HSMRO_FuseScaling_Factor_Property
// {
::g::Uno::UX::Property1_type* HSMRO_FuseScaling_Factor_Property_typeof();
void HSMRO_FuseScaling_Factor_Property__ctor_3_fn(HSMRO_FuseScaling_Factor_Property* __this, ::g::Fuse::Scaling* obj, ::g::Uno::UX::Selector* name);
void HSMRO_FuseScaling_Factor_Property__Get1_fn(HSMRO_FuseScaling_Factor_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void HSMRO_FuseScaling_Factor_Property__New1_fn(::g::Fuse::Scaling* obj, ::g::Uno::UX::Selector* name, HSMRO_FuseScaling_Factor_Property** __retval);
void HSMRO_FuseScaling_Factor_Property__get_Object_fn(HSMRO_FuseScaling_Factor_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_FuseScaling_Factor_Property__Set1_fn(HSMRO_FuseScaling_Factor_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);

struct HSMRO_FuseScaling_Factor_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Scaling*> _obj;

    void ctor_3(::g::Fuse::Scaling* obj, ::g::Uno::UX::Selector name);
    static HSMRO_FuseScaling_Factor_Property* New1(::g::Fuse::Scaling* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
