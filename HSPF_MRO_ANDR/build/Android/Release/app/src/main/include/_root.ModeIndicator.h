// This file was generated based on '.uno/ux15/ModeIndicator.g.uno'.
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
namespace g{struct ModeIndicator;}

namespace g{

// public partial sealed class ModeIndicator
// {
::g::Fuse::Controls::Shape_type* ModeIndicator_typeof();
void ModeIndicator__ctor_9_fn(ModeIndicator* __this);
void ModeIndicator__InitializeUX_fn(ModeIndicator* __this);
void ModeIndicator__get_IsActive_fn(ModeIndicator* __this, bool* __retval);
void ModeIndicator__set_IsActive_fn(ModeIndicator* __this, bool* value);
void ModeIndicator__New4_fn(ModeIndicator** __retval);
void ModeIndicator__SetIsActive_fn(ModeIndicator* __this, bool* value, uObject* origin);

struct ModeIndicator : ::g::Fuse::Controls::Circle
{
    bool _field_IsActive;
    uStrong< ::g::Uno::UX::Property1*> this_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ModeIndicator_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ModeIndicator_typeof()->Init(), __selector1_; }

    void ctor_9();
    void InitializeUX();
    bool IsActive();
    void IsActive(bool value);
    void SetIsActive(bool value, uObject* origin);
    static ModeIndicator* New4();
};
// }

} // ::g
