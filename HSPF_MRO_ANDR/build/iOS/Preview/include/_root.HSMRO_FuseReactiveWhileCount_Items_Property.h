// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Reactive{struct WhileCount;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HSMRO_FuseReactiveWhileCount_Items_Property;}

namespace g{

// internal sealed class HSMRO_FuseReactiveWhileCount_Items_Property
// {
::g::Uno::UX::Property1_type* HSMRO_FuseReactiveWhileCount_Items_Property_typeof();
void HSMRO_FuseReactiveWhileCount_Items_Property__ctor_3_fn(HSMRO_FuseReactiveWhileCount_Items_Property* __this, ::g::Fuse::Reactive::WhileCount* obj, ::g::Uno::UX::Selector* name);
void HSMRO_FuseReactiveWhileCount_Items_Property__Get1_fn(HSMRO_FuseReactiveWhileCount_Items_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void HSMRO_FuseReactiveWhileCount_Items_Property__New1_fn(::g::Fuse::Reactive::WhileCount* obj, ::g::Uno::UX::Selector* name, HSMRO_FuseReactiveWhileCount_Items_Property** __retval);
void HSMRO_FuseReactiveWhileCount_Items_Property__get_Object_fn(HSMRO_FuseReactiveWhileCount_Items_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_FuseReactiveWhileCount_Items_Property__Set1_fn(HSMRO_FuseReactiveWhileCount_Items_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);

struct HSMRO_FuseReactiveWhileCount_Items_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Reactive::WhileCount*> _obj;

    void ctor_3(::g::Fuse::Reactive::WhileCount* obj, ::g::Uno::UX::Selector name);
    static HSMRO_FuseReactiveWhileCount_Items_Property* New1(::g::Fuse::Reactive::WhileCount* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
