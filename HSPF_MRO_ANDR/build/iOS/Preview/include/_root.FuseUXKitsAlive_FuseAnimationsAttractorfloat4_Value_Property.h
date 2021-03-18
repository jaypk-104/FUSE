// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/.uno/ux15/Fuse.UXKits.Alive.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Animations{struct Attractor;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseUXKitsAlive_FuseAnimationsAttractorfloat4_Value_Property;}

namespace g{

// internal sealed class FuseUXKitsAlive_FuseAnimationsAttractorfloat4_Value_Property
// {
::g::Uno::UX::Property1_type* FuseUXKitsAlive_FuseAnimationsAttractorfloat4_Value_Property_typeof();
void FuseUXKitsAlive_FuseAnimationsAttractorfloat4_Value_Property__ctor_3_fn(FuseUXKitsAlive_FuseAnimationsAttractorfloat4_Value_Property* __this, ::g::Fuse::Animations::Attractor* obj, ::g::Uno::UX::Selector* name);
void FuseUXKitsAlive_FuseAnimationsAttractorfloat4_Value_Property__Get1_fn(FuseUXKitsAlive_FuseAnimationsAttractorfloat4_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval);
void FuseUXKitsAlive_FuseAnimationsAttractorfloat4_Value_Property__New1_fn(::g::Fuse::Animations::Attractor* obj, ::g::Uno::UX::Selector* name, FuseUXKitsAlive_FuseAnimationsAttractorfloat4_Value_Property** __retval);
void FuseUXKitsAlive_FuseAnimationsAttractorfloat4_Value_Property__get_Object_fn(FuseUXKitsAlive_FuseAnimationsAttractorfloat4_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseUXKitsAlive_FuseAnimationsAttractorfloat4_Value_Property__Set1_fn(FuseUXKitsAlive_FuseAnimationsAttractorfloat4_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin);

struct FuseUXKitsAlive_FuseAnimationsAttractorfloat4_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Animations::Attractor*> _obj;

    void ctor_3(::g::Fuse::Animations::Attractor* obj, ::g::Uno::UX::Selector name);
    static FuseUXKitsAlive_FuseAnimationsAttractorfloat4_Value_Property* New1(::g::Fuse::Animations::Attractor* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
