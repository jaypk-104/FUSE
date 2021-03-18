// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/.uno/ux15/Fuse.UXKits.Alive.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseUXKitsAlive_accessor_Alive_CallToActionButton_Glow;}

namespace g{

// internal sealed class FuseUXKitsAlive_accessor_Alive_CallToActionButton_Glow
// {
::g::Uno::UX::PropertyAccessor_type* FuseUXKitsAlive_accessor_Alive_CallToActionButton_Glow_typeof();
void FuseUXKitsAlive_accessor_Alive_CallToActionButton_Glow__ctor_1_fn(FuseUXKitsAlive_accessor_Alive_CallToActionButton_Glow* __this);
void FuseUXKitsAlive_accessor_Alive_CallToActionButton_Glow__GetAsObject_fn(FuseUXKitsAlive_accessor_Alive_CallToActionButton_Glow* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void FuseUXKitsAlive_accessor_Alive_CallToActionButton_Glow__get_Name_fn(FuseUXKitsAlive_accessor_Alive_CallToActionButton_Glow* __this, ::g::Uno::UX::Selector* __retval);
void FuseUXKitsAlive_accessor_Alive_CallToActionButton_Glow__New1_fn(FuseUXKitsAlive_accessor_Alive_CallToActionButton_Glow** __retval);
void FuseUXKitsAlive_accessor_Alive_CallToActionButton_Glow__get_PropertyType_fn(FuseUXKitsAlive_accessor_Alive_CallToActionButton_Glow* __this, uType** __retval);
void FuseUXKitsAlive_accessor_Alive_CallToActionButton_Glow__SetAsObject_fn(FuseUXKitsAlive_accessor_Alive_CallToActionButton_Glow* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void FuseUXKitsAlive_accessor_Alive_CallToActionButton_Glow__get_SupportsOriginSetter_fn(FuseUXKitsAlive_accessor_Alive_CallToActionButton_Glow* __this, bool* __retval);

struct FuseUXKitsAlive_accessor_Alive_CallToActionButton_Glow : ::g::Uno::UX::PropertyAccessor
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return FuseUXKitsAlive_accessor_Alive_CallToActionButton_Glow_typeof()->Init(), Singleton_; }
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return FuseUXKitsAlive_accessor_Alive_CallToActionButton_Glow_typeof()->Init(), _name_; }

    void ctor_1();
    static FuseUXKitsAlive_accessor_Alive_CallToActionButton_Glow* New1();
};
// }

} // ::g
