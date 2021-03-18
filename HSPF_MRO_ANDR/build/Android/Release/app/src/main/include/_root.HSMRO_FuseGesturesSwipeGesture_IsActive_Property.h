// This file was generated based on '.uno/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Gestures{struct SwipeGesture;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HSMRO_FuseGesturesSwipeGesture_IsActive_Property;}

namespace g{

// internal sealed class HSMRO_FuseGesturesSwipeGesture_IsActive_Property
// {
::g::Uno::UX::Property1_type* HSMRO_FuseGesturesSwipeGesture_IsActive_Property_typeof();
void HSMRO_FuseGesturesSwipeGesture_IsActive_Property__ctor_3_fn(HSMRO_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector* name);
void HSMRO_FuseGesturesSwipeGesture_IsActive_Property__Get1_fn(HSMRO_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval);
void HSMRO_FuseGesturesSwipeGesture_IsActive_Property__New1_fn(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector* name, HSMRO_FuseGesturesSwipeGesture_IsActive_Property** __retval);
void HSMRO_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn(HSMRO_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_FuseGesturesSwipeGesture_IsActive_Property__Set1_fn(HSMRO_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin);
void HSMRO_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn(HSMRO_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* __retval);

struct HSMRO_FuseGesturesSwipeGesture_IsActive_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Gestures::SwipeGesture*> _obj;

    void ctor_3(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector name);
    static HSMRO_FuseGesturesSwipeGesture_IsActive_Property* New1(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
