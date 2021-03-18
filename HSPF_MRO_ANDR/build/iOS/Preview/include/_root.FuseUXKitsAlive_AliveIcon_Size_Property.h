// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/.uno/ux15/Fuse.UXKits.Alive.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Alive{struct Icon;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseUXKitsAlive_AliveIcon_Size_Property;}

namespace g{

// internal sealed class FuseUXKitsAlive_AliveIcon_Size_Property
// {
::g::Uno::UX::Property1_type* FuseUXKitsAlive_AliveIcon_Size_Property_typeof();
void FuseUXKitsAlive_AliveIcon_Size_Property__ctor_3_fn(FuseUXKitsAlive_AliveIcon_Size_Property* __this, ::g::Alive::Icon* obj, ::g::Uno::UX::Selector* name);
void FuseUXKitsAlive_AliveIcon_Size_Property__Get1_fn(FuseUXKitsAlive_AliveIcon_Size_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void FuseUXKitsAlive_AliveIcon_Size_Property__New1_fn(::g::Alive::Icon* obj, ::g::Uno::UX::Selector* name, FuseUXKitsAlive_AliveIcon_Size_Property** __retval);
void FuseUXKitsAlive_AliveIcon_Size_Property__get_Object_fn(FuseUXKitsAlive_AliveIcon_Size_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseUXKitsAlive_AliveIcon_Size_Property__Set1_fn(FuseUXKitsAlive_AliveIcon_Size_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);
void FuseUXKitsAlive_AliveIcon_Size_Property__get_SupportsOriginSetter_fn(FuseUXKitsAlive_AliveIcon_Size_Property* __this, bool* __retval);

struct FuseUXKitsAlive_AliveIcon_Size_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Alive::Icon*> _obj;

    void ctor_3(::g::Alive::Icon* obj, ::g::Uno::UX::Selector name);
    static FuseUXKitsAlive_AliveIcon_Size_Property* New1(::g::Alive::Icon* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
