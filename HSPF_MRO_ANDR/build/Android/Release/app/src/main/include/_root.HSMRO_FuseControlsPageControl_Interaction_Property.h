// This file was generated based on '.uno/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.NavigationControlInteraction.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Controls{struct PageControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HSMRO_FuseControlsPageControl_Interaction_Property;}

namespace g{

// internal sealed class HSMRO_FuseControlsPageControl_Interaction_Property
// {
::g::Uno::UX::Property1_type* HSMRO_FuseControlsPageControl_Interaction_Property_typeof();
void HSMRO_FuseControlsPageControl_Interaction_Property__ctor_3_fn(HSMRO_FuseControlsPageControl_Interaction_Property* __this, ::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector* name);
void HSMRO_FuseControlsPageControl_Interaction_Property__Get1_fn(HSMRO_FuseControlsPageControl_Interaction_Property* __this, ::g::Uno::UX::PropertyObject* obj, int32_t* __retval);
void HSMRO_FuseControlsPageControl_Interaction_Property__New1_fn(::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector* name, HSMRO_FuseControlsPageControl_Interaction_Property** __retval);
void HSMRO_FuseControlsPageControl_Interaction_Property__get_Object_fn(HSMRO_FuseControlsPageControl_Interaction_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_FuseControlsPageControl_Interaction_Property__Set1_fn(HSMRO_FuseControlsPageControl_Interaction_Property* __this, ::g::Uno::UX::PropertyObject* obj, int32_t* v, uObject* origin);

struct HSMRO_FuseControlsPageControl_Interaction_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::PageControl*> _obj;

    void ctor_3(::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector name);
    static HSMRO_FuseControlsPageControl_Interaction_Property* New1(::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
