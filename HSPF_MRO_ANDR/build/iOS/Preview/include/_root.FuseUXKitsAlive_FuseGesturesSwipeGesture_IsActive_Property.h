// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/.uno/ux15/Fuse.UXKits.Alive.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Gestures{struct SwipeGesture;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseUXKitsAlive_FuseGesturesSwipeGesture_IsActive_Property;}

namespace g{

// internal sealed class FuseUXKitsAlive_FuseGesturesSwipeGesture_IsActive_Property
// {
::g::Uno::UX::Property1_type* FuseUXKitsAlive_FuseGesturesSwipeGesture_IsActive_Property_typeof();
void FuseUXKitsAlive_FuseGesturesSwipeGesture_IsActive_Property__ctor_3_fn(FuseUXKitsAlive_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector* name);
void FuseUXKitsAlive_FuseGesturesSwipeGesture_IsActive_Property__Get1_fn(FuseUXKitsAlive_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval);
void FuseUXKitsAlive_FuseGesturesSwipeGesture_IsActive_Property__New1_fn(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector* name, FuseUXKitsAlive_FuseGesturesSwipeGesture_IsActive_Property** __retval);
void FuseUXKitsAlive_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn(FuseUXKitsAlive_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseUXKitsAlive_FuseGesturesSwipeGesture_IsActive_Property__Set1_fn(FuseUXKitsAlive_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin);
void FuseUXKitsAlive_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn(FuseUXKitsAlive_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* __retval);

struct FuseUXKitsAlive_FuseGesturesSwipeGesture_IsActive_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Gestures::SwipeGesture*> _obj;

    void ctor_3(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector name);
    static FuseUXKitsAlive_FuseGesturesSwipeGesture_IsActive_Property* New1(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
