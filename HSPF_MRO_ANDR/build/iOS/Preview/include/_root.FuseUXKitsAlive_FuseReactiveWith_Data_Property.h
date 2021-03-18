// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/.uno/ux15/Fuse.UXKits.Alive.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Reactive{struct With;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseUXKitsAlive_FuseReactiveWith_Data_Property;}

namespace g{

// internal sealed class FuseUXKitsAlive_FuseReactiveWith_Data_Property
// {
::g::Uno::UX::Property1_type* FuseUXKitsAlive_FuseReactiveWith_Data_Property_typeof();
void FuseUXKitsAlive_FuseReactiveWith_Data_Property__ctor_3_fn(FuseUXKitsAlive_FuseReactiveWith_Data_Property* __this, ::g::Fuse::Reactive::With* obj, ::g::Uno::UX::Selector* name);
void FuseUXKitsAlive_FuseReactiveWith_Data_Property__Get1_fn(FuseUXKitsAlive_FuseReactiveWith_Data_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void FuseUXKitsAlive_FuseReactiveWith_Data_Property__New1_fn(::g::Fuse::Reactive::With* obj, ::g::Uno::UX::Selector* name, FuseUXKitsAlive_FuseReactiveWith_Data_Property** __retval);
void FuseUXKitsAlive_FuseReactiveWith_Data_Property__get_Object_fn(FuseUXKitsAlive_FuseReactiveWith_Data_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseUXKitsAlive_FuseReactiveWith_Data_Property__Set1_fn(FuseUXKitsAlive_FuseReactiveWith_Data_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);

struct FuseUXKitsAlive_FuseReactiveWith_Data_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Reactive::With*> _obj;

    void ctor_3(::g::Fuse::Reactive::With* obj, ::g::Uno::UX::Selector name);
    static FuseUXKitsAlive_FuseReactiveWith_Data_Property* New1(::g::Fuse::Reactive::With* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
