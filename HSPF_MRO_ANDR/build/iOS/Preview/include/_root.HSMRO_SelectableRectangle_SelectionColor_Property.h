// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HSMRO_SelectableRectangle_SelectionColor_Property;}
namespace g{struct SelectableRectangle;}

namespace g{

// internal sealed class HSMRO_SelectableRectangle_SelectionColor_Property
// {
::g::Uno::UX::Property1_type* HSMRO_SelectableRectangle_SelectionColor_Property_typeof();
void HSMRO_SelectableRectangle_SelectionColor_Property__ctor_3_fn(HSMRO_SelectableRectangle_SelectionColor_Property* __this, ::g::SelectableRectangle* obj, ::g::Uno::UX::Selector* name);
void HSMRO_SelectableRectangle_SelectionColor_Property__Get1_fn(HSMRO_SelectableRectangle_SelectionColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval);
void HSMRO_SelectableRectangle_SelectionColor_Property__New1_fn(::g::SelectableRectangle* obj, ::g::Uno::UX::Selector* name, HSMRO_SelectableRectangle_SelectionColor_Property** __retval);
void HSMRO_SelectableRectangle_SelectionColor_Property__get_Object_fn(HSMRO_SelectableRectangle_SelectionColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_SelectableRectangle_SelectionColor_Property__Set1_fn(HSMRO_SelectableRectangle_SelectionColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin);
void HSMRO_SelectableRectangle_SelectionColor_Property__get_SupportsOriginSetter_fn(HSMRO_SelectableRectangle_SelectionColor_Property* __this, bool* __retval);

struct HSMRO_SelectableRectangle_SelectionColor_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::SelectableRectangle*> _obj;

    void ctor_3(::g::SelectableRectangle* obj, ::g::Uno::UX::Selector name);
    static HSMRO_SelectableRectangle_SelectionColor_Property* New1(::g::SelectableRectangle* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
