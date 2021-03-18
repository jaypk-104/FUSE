// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.Visibility.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HSMRO_FuseElementsElement_Visibility_Property;}

namespace g{

// internal sealed class HSMRO_FuseElementsElement_Visibility_Property
// {
::g::Uno::UX::Property1_type* HSMRO_FuseElementsElement_Visibility_Property_typeof();
void HSMRO_FuseElementsElement_Visibility_Property__ctor_3_fn(HSMRO_FuseElementsElement_Visibility_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name);
void HSMRO_FuseElementsElement_Visibility_Property__Get1_fn(HSMRO_FuseElementsElement_Visibility_Property* __this, ::g::Uno::UX::PropertyObject* obj, int32_t* __retval);
void HSMRO_FuseElementsElement_Visibility_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, HSMRO_FuseElementsElement_Visibility_Property** __retval);
void HSMRO_FuseElementsElement_Visibility_Property__get_Object_fn(HSMRO_FuseElementsElement_Visibility_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_FuseElementsElement_Visibility_Property__Set1_fn(HSMRO_FuseElementsElement_Visibility_Property* __this, ::g::Uno::UX::PropertyObject* obj, int32_t* v, uObject* origin);
void HSMRO_FuseElementsElement_Visibility_Property__get_SupportsOriginSetter_fn(HSMRO_FuseElementsElement_Visibility_Property* __this, bool* __retval);

struct HSMRO_FuseElementsElement_Visibility_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Elements::Element*> _obj;

    void ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
    static HSMRO_FuseElementsElement_Visibility_Property* New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
