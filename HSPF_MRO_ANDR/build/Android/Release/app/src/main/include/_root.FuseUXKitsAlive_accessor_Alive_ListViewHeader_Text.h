// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/.uno/ux15/Fuse.UXKits.Alive.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseUXKitsAlive_accessor_Alive_ListViewHeader_Text;}

namespace g{

// internal sealed class FuseUXKitsAlive_accessor_Alive_ListViewHeader_Text
// {
::g::Uno::UX::PropertyAccessor_type* FuseUXKitsAlive_accessor_Alive_ListViewHeader_Text_typeof();
void FuseUXKitsAlive_accessor_Alive_ListViewHeader_Text__ctor_1_fn(FuseUXKitsAlive_accessor_Alive_ListViewHeader_Text* __this);
void FuseUXKitsAlive_accessor_Alive_ListViewHeader_Text__GetAsObject_fn(FuseUXKitsAlive_accessor_Alive_ListViewHeader_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void FuseUXKitsAlive_accessor_Alive_ListViewHeader_Text__get_Name_fn(FuseUXKitsAlive_accessor_Alive_ListViewHeader_Text* __this, ::g::Uno::UX::Selector* __retval);
void FuseUXKitsAlive_accessor_Alive_ListViewHeader_Text__New1_fn(FuseUXKitsAlive_accessor_Alive_ListViewHeader_Text** __retval);
void FuseUXKitsAlive_accessor_Alive_ListViewHeader_Text__get_PropertyType_fn(FuseUXKitsAlive_accessor_Alive_ListViewHeader_Text* __this, uType** __retval);
void FuseUXKitsAlive_accessor_Alive_ListViewHeader_Text__SetAsObject_fn(FuseUXKitsAlive_accessor_Alive_ListViewHeader_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void FuseUXKitsAlive_accessor_Alive_ListViewHeader_Text__get_SupportsOriginSetter_fn(FuseUXKitsAlive_accessor_Alive_ListViewHeader_Text* __this, bool* __retval);

struct FuseUXKitsAlive_accessor_Alive_ListViewHeader_Text : ::g::Uno::UX::PropertyAccessor
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return FuseUXKitsAlive_accessor_Alive_ListViewHeader_Text_typeof()->Init(), Singleton_; }
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return FuseUXKitsAlive_accessor_Alive_ListViewHeader_Text_typeof()->Init(), _name_; }

    void ctor_1();
    static FuseUXKitsAlive_accessor_Alive_ListViewHeader_Text* New1();
};
// }

} // ::g
