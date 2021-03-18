// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HSMRO_FuseTranslation_Y_Property;}

namespace g{

// internal sealed class HSMRO_FuseTranslation_Y_Property
// {
::g::Uno::UX::Property1_type* HSMRO_FuseTranslation_Y_Property_typeof();
void HSMRO_FuseTranslation_Y_Property__ctor_3_fn(HSMRO_FuseTranslation_Y_Property* __this, ::g::Fuse::Translation* obj, ::g::Uno::UX::Selector* name);
void HSMRO_FuseTranslation_Y_Property__Get1_fn(HSMRO_FuseTranslation_Y_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void HSMRO_FuseTranslation_Y_Property__New1_fn(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector* name, HSMRO_FuseTranslation_Y_Property** __retval);
void HSMRO_FuseTranslation_Y_Property__get_Object_fn(HSMRO_FuseTranslation_Y_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_FuseTranslation_Y_Property__Set1_fn(HSMRO_FuseTranslation_Y_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);

struct HSMRO_FuseTranslation_Y_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Translation*> _obj;

    void ctor_3(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector name);
    static HSMRO_FuseTranslation_Y_Property* New1(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
