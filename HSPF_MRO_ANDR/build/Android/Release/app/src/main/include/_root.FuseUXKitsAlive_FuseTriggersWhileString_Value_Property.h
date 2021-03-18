// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/.uno/ux15/Fuse.UXKits.Alive.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileString;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseUXKitsAlive_FuseTriggersWhileString_Value_Property;}

namespace g{

// internal sealed class FuseUXKitsAlive_FuseTriggersWhileString_Value_Property
// {
::g::Uno::UX::Property1_type* FuseUXKitsAlive_FuseTriggersWhileString_Value_Property_typeof();
void FuseUXKitsAlive_FuseTriggersWhileString_Value_Property__ctor_3_fn(FuseUXKitsAlive_FuseTriggersWhileString_Value_Property* __this, ::g::Fuse::Triggers::WhileString* obj, ::g::Uno::UX::Selector* name);
void FuseUXKitsAlive_FuseTriggersWhileString_Value_Property__Get1_fn(FuseUXKitsAlive_FuseTriggersWhileString_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void FuseUXKitsAlive_FuseTriggersWhileString_Value_Property__New1_fn(::g::Fuse::Triggers::WhileString* obj, ::g::Uno::UX::Selector* name, FuseUXKitsAlive_FuseTriggersWhileString_Value_Property** __retval);
void FuseUXKitsAlive_FuseTriggersWhileString_Value_Property__get_Object_fn(FuseUXKitsAlive_FuseTriggersWhileString_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseUXKitsAlive_FuseTriggersWhileString_Value_Property__Set1_fn(FuseUXKitsAlive_FuseTriggersWhileString_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);

struct FuseUXKitsAlive_FuseTriggersWhileString_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Triggers::WhileString*> _obj;

    void ctor_3(::g::Fuse::Triggers::WhileString* obj, ::g::Uno::UX::Selector name);
    static FuseUXKitsAlive_FuseTriggersWhileString_Value_Property* New1(::g::Fuse::Triggers::WhileString* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
