// This file was generated based on '.uno/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct c_po;}
namespace g{struct HSMRO_c_po_Selected_Property;}

namespace g{

// internal sealed class HSMRO_c_po_Selected_Property
// {
::g::Uno::UX::Property1_type* HSMRO_c_po_Selected_Property_typeof();
void HSMRO_c_po_Selected_Property__ctor_3_fn(HSMRO_c_po_Selected_Property* __this, ::g::c_po* obj, ::g::Uno::UX::Selector* name);
void HSMRO_c_po_Selected_Property__Get1_fn(HSMRO_c_po_Selected_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void HSMRO_c_po_Selected_Property__New1_fn(::g::c_po* obj, ::g::Uno::UX::Selector* name, HSMRO_c_po_Selected_Property** __retval);
void HSMRO_c_po_Selected_Property__get_Object_fn(HSMRO_c_po_Selected_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_c_po_Selected_Property__Set1_fn(HSMRO_c_po_Selected_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void HSMRO_c_po_Selected_Property__get_SupportsOriginSetter_fn(HSMRO_c_po_Selected_Property* __this, bool* __retval);

struct HSMRO_c_po_Selected_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::c_po*> _obj;

    void ctor_3(::g::c_po* obj, ::g::Uno::UX::Selector name);
    static HSMRO_c_po_Selected_Property* New1(::g::c_po* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
