// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Controls{struct Navigator;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HSMRO_FuseControlsNavigator_DefaultPath_Property;}

namespace g{

// internal sealed class HSMRO_FuseControlsNavigator_DefaultPath_Property
// {
::g::Uno::UX::Property1_type* HSMRO_FuseControlsNavigator_DefaultPath_Property_typeof();
void HSMRO_FuseControlsNavigator_DefaultPath_Property__ctor_3_fn(HSMRO_FuseControlsNavigator_DefaultPath_Property* __this, ::g::Fuse::Controls::Navigator* obj, ::g::Uno::UX::Selector* name);
void HSMRO_FuseControlsNavigator_DefaultPath_Property__Get1_fn(HSMRO_FuseControlsNavigator_DefaultPath_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void HSMRO_FuseControlsNavigator_DefaultPath_Property__New1_fn(::g::Fuse::Controls::Navigator* obj, ::g::Uno::UX::Selector* name, HSMRO_FuseControlsNavigator_DefaultPath_Property** __retval);
void HSMRO_FuseControlsNavigator_DefaultPath_Property__get_Object_fn(HSMRO_FuseControlsNavigator_DefaultPath_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_FuseControlsNavigator_DefaultPath_Property__Set1_fn(HSMRO_FuseControlsNavigator_DefaultPath_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);

struct HSMRO_FuseControlsNavigator_DefaultPath_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Navigator*> _obj;

    void ctor_3(::g::Fuse::Controls::Navigator* obj, ::g::Uno::UX::Selector name);
    static HSMRO_FuseControlsNavigator_DefaultPath_Property* New1(::g::Fuse::Controls::Navigator* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g