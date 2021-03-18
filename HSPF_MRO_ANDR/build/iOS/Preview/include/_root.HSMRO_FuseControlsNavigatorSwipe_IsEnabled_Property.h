// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Controls{struct NavigatorSwipe;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HSMRO_FuseControlsNavigatorSwipe_IsEnabled_Property;}

namespace g{

// internal sealed class HSMRO_FuseControlsNavigatorSwipe_IsEnabled_Property
// {
::g::Uno::UX::Property1_type* HSMRO_FuseControlsNavigatorSwipe_IsEnabled_Property_typeof();
void HSMRO_FuseControlsNavigatorSwipe_IsEnabled_Property__ctor_3_fn(HSMRO_FuseControlsNavigatorSwipe_IsEnabled_Property* __this, ::g::Fuse::Controls::NavigatorSwipe* obj, ::g::Uno::UX::Selector* name);
void HSMRO_FuseControlsNavigatorSwipe_IsEnabled_Property__Get1_fn(HSMRO_FuseControlsNavigatorSwipe_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval);
void HSMRO_FuseControlsNavigatorSwipe_IsEnabled_Property__New1_fn(::g::Fuse::Controls::NavigatorSwipe* obj, ::g::Uno::UX::Selector* name, HSMRO_FuseControlsNavigatorSwipe_IsEnabled_Property** __retval);
void HSMRO_FuseControlsNavigatorSwipe_IsEnabled_Property__get_Object_fn(HSMRO_FuseControlsNavigatorSwipe_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_FuseControlsNavigatorSwipe_IsEnabled_Property__Set1_fn(HSMRO_FuseControlsNavigatorSwipe_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin);

struct HSMRO_FuseControlsNavigatorSwipe_IsEnabled_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::NavigatorSwipe*> _obj;

    void ctor_3(::g::Fuse::Controls::NavigatorSwipe* obj, ::g::Uno::UX::Selector name);
    static HSMRO_FuseControlsNavigatorSwipe_IsEnabled_Property* New1(::g::Fuse::Controls::NavigatorSwipe* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
