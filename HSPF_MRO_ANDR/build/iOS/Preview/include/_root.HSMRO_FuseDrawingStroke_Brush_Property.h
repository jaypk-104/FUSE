// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Brush.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HSMRO_FuseDrawingStroke_Brush_Property;}

namespace g{

// internal sealed class HSMRO_FuseDrawingStroke_Brush_Property
// {
::g::Uno::UX::Property1_type* HSMRO_FuseDrawingStroke_Brush_Property_typeof();
void HSMRO_FuseDrawingStroke_Brush_Property__ctor_3_fn(HSMRO_FuseDrawingStroke_Brush_Property* __this, ::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name);
void HSMRO_FuseDrawingStroke_Brush_Property__Get1_fn(HSMRO_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush** __retval);
void HSMRO_FuseDrawingStroke_Brush_Property__New1_fn(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name, HSMRO_FuseDrawingStroke_Brush_Property** __retval);
void HSMRO_FuseDrawingStroke_Brush_Property__get_Object_fn(HSMRO_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_FuseDrawingStroke_Brush_Property__Set1_fn(HSMRO_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush* v, uObject* origin);

struct HSMRO_FuseDrawingStroke_Brush_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Drawing::Stroke*> _obj;

    void ctor_3(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name);
    static HSMRO_FuseDrawingStroke_Brush_Property* New1(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
