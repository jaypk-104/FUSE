// This file was generated based on '.uno/ux15/TypeIndicator.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Drawing.IDrawObjectWatcherFeedback.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct TypeIndicator;}

namespace g{

// public partial sealed class TypeIndicator
// {
::g::Fuse::Controls::Shape_type* TypeIndicator_typeof();
void TypeIndicator__ctor_9_fn(TypeIndicator* __this);
void TypeIndicator__InitializeUX_fn(TypeIndicator* __this);
void TypeIndicator__get_IsActive_fn(TypeIndicator* __this, bool* __retval);
void TypeIndicator__set_IsActive_fn(TypeIndicator* __this, bool* value);
void TypeIndicator__New4_fn(TypeIndicator** __retval);
void TypeIndicator__SetIsActive_fn(TypeIndicator* __this, bool* value, uObject* origin);

struct TypeIndicator : ::g::Fuse::Controls::Circle
{
    bool _field_IsActive;
    uStrong< ::g::Uno::UX::Property1*> this_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return TypeIndicator_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return TypeIndicator_typeof()->Init(), __selector1_; }

    void ctor_9();
    void InitializeUX();
    bool IsActive();
    void IsActive(bool value);
    void SetIsActive(bool value, uObject* origin);
    static TypeIndicator* New4();
};
// }

} // ::g
