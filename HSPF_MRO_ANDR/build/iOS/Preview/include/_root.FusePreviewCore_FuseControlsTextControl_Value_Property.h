// This file was generated based on /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/.uno/ux15/Fuse.Preview.Core.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FusePreviewCore_FuseControlsTextControl_Value_Property;}

namespace g{

// internal sealed class FusePreviewCore_FuseControlsTextControl_Value_Property
// {
::g::Uno::UX::Property1_type* FusePreviewCore_FuseControlsTextControl_Value_Property_typeof();
void FusePreviewCore_FuseControlsTextControl_Value_Property__ctor_3_fn(FusePreviewCore_FuseControlsTextControl_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name);
void FusePreviewCore_FuseControlsTextControl_Value_Property__Get1_fn(FusePreviewCore_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void FusePreviewCore_FuseControlsTextControl_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, FusePreviewCore_FuseControlsTextControl_Value_Property** __retval);
void FusePreviewCore_FuseControlsTextControl_Value_Property__get_Object_fn(FusePreviewCore_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FusePreviewCore_FuseControlsTextControl_Value_Property__Set1_fn(FusePreviewCore_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void FusePreviewCore_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(FusePreviewCore_FuseControlsTextControl_Value_Property* __this, bool* __retval);

struct FusePreviewCore_FuseControlsTextControl_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::TextControl*> _obj;

    void ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
    static FusePreviewCore_FuseControlsTextControl_Value_Property* New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
