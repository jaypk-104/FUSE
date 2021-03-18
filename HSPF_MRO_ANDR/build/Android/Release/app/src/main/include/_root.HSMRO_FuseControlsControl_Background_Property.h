// This file was generated based on '.uno/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Brush.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Controls{struct Control;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HSMRO_FuseControlsControl_Background_Property;}

namespace g{

// internal sealed class HSMRO_FuseControlsControl_Background_Property
// {
::g::Uno::UX::Property1_type* HSMRO_FuseControlsControl_Background_Property_typeof();
void HSMRO_FuseControlsControl_Background_Property__ctor_3_fn(HSMRO_FuseControlsControl_Background_Property* __this, ::g::Fuse::Controls::Control* obj, ::g::Uno::UX::Selector* name);
void HSMRO_FuseControlsControl_Background_Property__Get1_fn(HSMRO_FuseControlsControl_Background_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush** __retval);
void HSMRO_FuseControlsControl_Background_Property__New1_fn(::g::Fuse::Controls::Control* obj, ::g::Uno::UX::Selector* name, HSMRO_FuseControlsControl_Background_Property** __retval);
void HSMRO_FuseControlsControl_Background_Property__get_Object_fn(HSMRO_FuseControlsControl_Background_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_FuseControlsControl_Background_Property__Set1_fn(HSMRO_FuseControlsControl_Background_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush* v, uObject* origin);

struct HSMRO_FuseControlsControl_Background_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Control*> _obj;

    void ctor_3(::g::Fuse::Controls::Control* obj, ::g::Uno::UX::Selector name);
    static HSMRO_FuseControlsControl_Background_Property* New1(::g::Fuse::Controls::Control* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
