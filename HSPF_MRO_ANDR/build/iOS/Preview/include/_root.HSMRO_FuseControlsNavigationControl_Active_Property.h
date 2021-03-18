// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Visual.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Controls{struct NavigationControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HSMRO_FuseControlsNavigationControl_Active_Property;}

namespace g{

// internal sealed class HSMRO_FuseControlsNavigationControl_Active_Property
// {
::g::Uno::UX::Property1_type* HSMRO_FuseControlsNavigationControl_Active_Property_typeof();
void HSMRO_FuseControlsNavigationControl_Active_Property__ctor_3_fn(HSMRO_FuseControlsNavigationControl_Active_Property* __this, ::g::Fuse::Controls::NavigationControl* obj, ::g::Uno::UX::Selector* name);
void HSMRO_FuseControlsNavigationControl_Active_Property__Get1_fn(HSMRO_FuseControlsNavigationControl_Active_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Visual** __retval);
void HSMRO_FuseControlsNavigationControl_Active_Property__New1_fn(::g::Fuse::Controls::NavigationControl* obj, ::g::Uno::UX::Selector* name, HSMRO_FuseControlsNavigationControl_Active_Property** __retval);
void HSMRO_FuseControlsNavigationControl_Active_Property__get_Object_fn(HSMRO_FuseControlsNavigationControl_Active_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_FuseControlsNavigationControl_Active_Property__Set1_fn(HSMRO_FuseControlsNavigationControl_Active_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Visual* v, uObject* origin);

struct HSMRO_FuseControlsNavigationControl_Active_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::NavigationControl*> _obj;

    void ctor_3(::g::Fuse::Controls::NavigationControl* obj, ::g::Uno::UX::Selector name);
    static HSMRO_FuseControlsNavigationControl_Active_Property* New1(::g::Fuse::Controls::NavigationControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
