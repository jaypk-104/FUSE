// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/.uno/ux15/Fuse.UXKits.Alive.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Triggers{struct ScrollingAnimation;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseUXKitsAlive_FuseTriggersScrollingAnimation_From_Property;}

namespace g{

// internal sealed class FuseUXKitsAlive_FuseTriggersScrollingAnimation_From_Property
// {
::g::Uno::UX::Property1_type* FuseUXKitsAlive_FuseTriggersScrollingAnimation_From_Property_typeof();
void FuseUXKitsAlive_FuseTriggersScrollingAnimation_From_Property__ctor_3_fn(FuseUXKitsAlive_FuseTriggersScrollingAnimation_From_Property* __this, ::g::Fuse::Triggers::ScrollingAnimation* obj, ::g::Uno::UX::Selector* name);
void FuseUXKitsAlive_FuseTriggersScrollingAnimation_From_Property__Get1_fn(FuseUXKitsAlive_FuseTriggersScrollingAnimation_From_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void FuseUXKitsAlive_FuseTriggersScrollingAnimation_From_Property__New1_fn(::g::Fuse::Triggers::ScrollingAnimation* obj, ::g::Uno::UX::Selector* name, FuseUXKitsAlive_FuseTriggersScrollingAnimation_From_Property** __retval);
void FuseUXKitsAlive_FuseTriggersScrollingAnimation_From_Property__get_Object_fn(FuseUXKitsAlive_FuseTriggersScrollingAnimation_From_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseUXKitsAlive_FuseTriggersScrollingAnimation_From_Property__Set1_fn(FuseUXKitsAlive_FuseTriggersScrollingAnimation_From_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);

struct FuseUXKitsAlive_FuseTriggersScrollingAnimation_From_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Triggers::ScrollingAnimation*> _obj;

    void ctor_3(::g::Fuse::Triggers::ScrollingAnimation* obj, ::g::Uno::UX::Selector name);
    static FuseUXKitsAlive_FuseTriggersScrollingAnimation_From_Property* New1(::g::Fuse::Triggers::ScrollingAnimation* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
