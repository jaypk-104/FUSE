// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/.uno/ux15/Fuse.UXKits.Alive.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Visual.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigateTo;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseUXKitsAlive_FuseNavigationNavigateTo_Target_Property;}

namespace g{

// internal sealed class FuseUXKitsAlive_FuseNavigationNavigateTo_Target_Property
// {
::g::Uno::UX::Property1_type* FuseUXKitsAlive_FuseNavigationNavigateTo_Target_Property_typeof();
void FuseUXKitsAlive_FuseNavigationNavigateTo_Target_Property__ctor_3_fn(FuseUXKitsAlive_FuseNavigationNavigateTo_Target_Property* __this, ::g::Fuse::Navigation::NavigateTo* obj, ::g::Uno::UX::Selector* name);
void FuseUXKitsAlive_FuseNavigationNavigateTo_Target_Property__Get1_fn(FuseUXKitsAlive_FuseNavigationNavigateTo_Target_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Visual** __retval);
void FuseUXKitsAlive_FuseNavigationNavigateTo_Target_Property__New1_fn(::g::Fuse::Navigation::NavigateTo* obj, ::g::Uno::UX::Selector* name, FuseUXKitsAlive_FuseNavigationNavigateTo_Target_Property** __retval);
void FuseUXKitsAlive_FuseNavigationNavigateTo_Target_Property__get_Object_fn(FuseUXKitsAlive_FuseNavigationNavigateTo_Target_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseUXKitsAlive_FuseNavigationNavigateTo_Target_Property__Set1_fn(FuseUXKitsAlive_FuseNavigationNavigateTo_Target_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Visual* v, uObject* origin);

struct FuseUXKitsAlive_FuseNavigationNavigateTo_Target_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Navigation::NavigateTo*> _obj;

    void ctor_3(::g::Fuse::Navigation::NavigateTo* obj, ::g::Uno::UX::Selector name);
    static FuseUXKitsAlive_FuseNavigationNavigateTo_Target_Property* New1(::g::Fuse::Navigation::NavigateTo* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
