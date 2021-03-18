// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/.uno/ux15/Fuse.UXKits.Alive.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Alive{struct ListView;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseUXKitsAlive_AliveListView_Items_Property;}

namespace g{

// internal sealed class FuseUXKitsAlive_AliveListView_Items_Property
// {
::g::Uno::UX::Property1_type* FuseUXKitsAlive_AliveListView_Items_Property_typeof();
void FuseUXKitsAlive_AliveListView_Items_Property__ctor_3_fn(FuseUXKitsAlive_AliveListView_Items_Property* __this, ::g::Alive::ListView* obj, ::g::Uno::UX::Selector* name);
void FuseUXKitsAlive_AliveListView_Items_Property__Get1_fn(FuseUXKitsAlive_AliveListView_Items_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void FuseUXKitsAlive_AliveListView_Items_Property__New1_fn(::g::Alive::ListView* obj, ::g::Uno::UX::Selector* name, FuseUXKitsAlive_AliveListView_Items_Property** __retval);
void FuseUXKitsAlive_AliveListView_Items_Property__get_Object_fn(FuseUXKitsAlive_AliveListView_Items_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseUXKitsAlive_AliveListView_Items_Property__Set1_fn(FuseUXKitsAlive_AliveListView_Items_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void FuseUXKitsAlive_AliveListView_Items_Property__get_SupportsOriginSetter_fn(FuseUXKitsAlive_AliveListView_Items_Property* __this, bool* __retval);

struct FuseUXKitsAlive_AliveListView_Items_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Alive::ListView*> _obj;

    void ctor_3(::g::Alive::ListView* obj, ::g::Uno::UX::Selector name);
    static FuseUXKitsAlive_AliveListView_Items_Property* New1(::g::Alive::ListView* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
