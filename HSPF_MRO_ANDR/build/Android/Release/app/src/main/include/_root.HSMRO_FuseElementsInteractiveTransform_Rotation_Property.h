// This file was generated based on '.uno/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Elements{struct InteractiveTransform;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HSMRO_FuseElementsInteractiveTransform_Rotation_Property;}

namespace g{

// internal sealed class HSMRO_FuseElementsInteractiveTransform_Rotation_Property
// {
::g::Uno::UX::Property1_type* HSMRO_FuseElementsInteractiveTransform_Rotation_Property_typeof();
void HSMRO_FuseElementsInteractiveTransform_Rotation_Property__ctor_3_fn(HSMRO_FuseElementsInteractiveTransform_Rotation_Property* __this, ::g::Fuse::Elements::InteractiveTransform* obj, ::g::Uno::UX::Selector* name);
void HSMRO_FuseElementsInteractiveTransform_Rotation_Property__Get1_fn(HSMRO_FuseElementsInteractiveTransform_Rotation_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void HSMRO_FuseElementsInteractiveTransform_Rotation_Property__New1_fn(::g::Fuse::Elements::InteractiveTransform* obj, ::g::Uno::UX::Selector* name, HSMRO_FuseElementsInteractiveTransform_Rotation_Property** __retval);
void HSMRO_FuseElementsInteractiveTransform_Rotation_Property__get_Object_fn(HSMRO_FuseElementsInteractiveTransform_Rotation_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_FuseElementsInteractiveTransform_Rotation_Property__Set1_fn(HSMRO_FuseElementsInteractiveTransform_Rotation_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);
void HSMRO_FuseElementsInteractiveTransform_Rotation_Property__get_SupportsOriginSetter_fn(HSMRO_FuseElementsInteractiveTransform_Rotation_Property* __this, bool* __retval);

struct HSMRO_FuseElementsInteractiveTransform_Rotation_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Elements::InteractiveTransform*> _obj;

    void ctor_3(::g::Fuse::Elements::InteractiveTransform* obj, ::g::Uno::UX::Selector name);
    static HSMRO_FuseElementsInteractiveTransform_Rotation_Property* New1(::g::Fuse::Elements::InteractiveTransform* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
