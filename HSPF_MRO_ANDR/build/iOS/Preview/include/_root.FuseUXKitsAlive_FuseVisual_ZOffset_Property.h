// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/.uno/ux15/Fuse.UXKits.Alive.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseUXKitsAlive_FuseVisual_ZOffset_Property;}

namespace g{

// internal sealed class FuseUXKitsAlive_FuseVisual_ZOffset_Property
// {
::g::Uno::UX::Property1_type* FuseUXKitsAlive_FuseVisual_ZOffset_Property_typeof();
void FuseUXKitsAlive_FuseVisual_ZOffset_Property__ctor_3_fn(FuseUXKitsAlive_FuseVisual_ZOffset_Property* __this, ::g::Fuse::Visual* obj, ::g::Uno::UX::Selector* name);
void FuseUXKitsAlive_FuseVisual_ZOffset_Property__Get1_fn(FuseUXKitsAlive_FuseVisual_ZOffset_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void FuseUXKitsAlive_FuseVisual_ZOffset_Property__New1_fn(::g::Fuse::Visual* obj, ::g::Uno::UX::Selector* name, FuseUXKitsAlive_FuseVisual_ZOffset_Property** __retval);
void FuseUXKitsAlive_FuseVisual_ZOffset_Property__get_Object_fn(FuseUXKitsAlive_FuseVisual_ZOffset_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseUXKitsAlive_FuseVisual_ZOffset_Property__Set1_fn(FuseUXKitsAlive_FuseVisual_ZOffset_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);

struct FuseUXKitsAlive_FuseVisual_ZOffset_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Visual*> _obj;

    void ctor_3(::g::Fuse::Visual* obj, ::g::Uno::UX::Selector name);
    static FuseUXKitsAlive_FuseVisual_ZOffset_Property* New1(::g::Fuse::Visual* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
