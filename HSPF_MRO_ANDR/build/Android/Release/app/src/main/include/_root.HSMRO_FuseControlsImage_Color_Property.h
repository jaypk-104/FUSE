// This file was generated based on '.uno/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Controls{struct Image;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HSMRO_FuseControlsImage_Color_Property;}

namespace g{

// internal sealed class HSMRO_FuseControlsImage_Color_Property
// {
::g::Uno::UX::Property1_type* HSMRO_FuseControlsImage_Color_Property_typeof();
void HSMRO_FuseControlsImage_Color_Property__ctor_3_fn(HSMRO_FuseControlsImage_Color_Property* __this, ::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name);
void HSMRO_FuseControlsImage_Color_Property__Get1_fn(HSMRO_FuseControlsImage_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval);
void HSMRO_FuseControlsImage_Color_Property__New1_fn(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name, HSMRO_FuseControlsImage_Color_Property** __retval);
void HSMRO_FuseControlsImage_Color_Property__get_Object_fn(HSMRO_FuseControlsImage_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_FuseControlsImage_Color_Property__Set1_fn(HSMRO_FuseControlsImage_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin);

struct HSMRO_FuseControlsImage_Color_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Image*> _obj;

    void ctor_3(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name);
    static HSMRO_FuseControlsImage_Color_Property* New1(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
