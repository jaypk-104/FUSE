// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Layouts{struct Column;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HSMRO_FuseLayoutsColumn_Width_Property;}

namespace g{

// internal sealed class HSMRO_FuseLayoutsColumn_Width_Property
// {
::g::Uno::UX::Property1_type* HSMRO_FuseLayoutsColumn_Width_Property_typeof();
void HSMRO_FuseLayoutsColumn_Width_Property__ctor_3_fn(HSMRO_FuseLayoutsColumn_Width_Property* __this, ::g::Fuse::Layouts::Column* obj, ::g::Uno::UX::Selector* name);
void HSMRO_FuseLayoutsColumn_Width_Property__Get1_fn(HSMRO_FuseLayoutsColumn_Width_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void HSMRO_FuseLayoutsColumn_Width_Property__New1_fn(::g::Fuse::Layouts::Column* obj, ::g::Uno::UX::Selector* name, HSMRO_FuseLayoutsColumn_Width_Property** __retval);
void HSMRO_FuseLayoutsColumn_Width_Property__get_Object_fn(HSMRO_FuseLayoutsColumn_Width_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_FuseLayoutsColumn_Width_Property__Set1_fn(HSMRO_FuseLayoutsColumn_Width_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);

struct HSMRO_FuseLayoutsColumn_Width_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Layouts::Column*> _obj;

    void ctor_3(::g::Fuse::Layouts::Column* obj, ::g::Uno::UX::Selector name);
    static HSMRO_FuseLayoutsColumn_Width_Property* New1(::g::Fuse::Layouts::Column* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
