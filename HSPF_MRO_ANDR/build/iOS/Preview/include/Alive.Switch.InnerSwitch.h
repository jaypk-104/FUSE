// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/.uno/ux15/Alive.Switch.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Rectangle.h>
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
namespace g{namespace Alive{struct Switch;}}
namespace g{namespace Alive{struct Switch__InnerSwitch;}}
namespace g{namespace Fuse{namespace Controls{struct Circle;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class Switch.InnerSwitch
// {
::g::Fuse::Controls::Shape_type* Switch__InnerSwitch_typeof();
void Switch__InnerSwitch__ctor_8_fn(Switch__InnerSwitch* __this, ::g::Alive::Switch* parent);
void Switch__InnerSwitch__InitializeUX_fn(Switch__InnerSwitch* __this);
void Switch__InnerSwitch__New4_fn(::g::Alive::Switch* parent, Switch__InnerSwitch** __retval);
void Switch__InnerSwitch__get_Progress_fn(Switch__InnerSwitch* __this, float* __retval);
void Switch__InnerSwitch__set_Progress_fn(Switch__InnerSwitch* __this, float* value);
void Switch__InnerSwitch__SetProgress_fn(Switch__InnerSwitch* __this, float* value, uObject* origin);

struct Switch__InnerSwitch : ::g::Fuse::Controls::Rectangle
{
    float _field_Progress;
    uStrong< ::g::Uno::UX::Property1*> this_Progress_inst;
    uStrong< ::g::Uno::UX::Property1*> thumb_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> bg_Color_inst;
    uStrong< ::g::Fuse::Controls::Circle*> thumb;
    uStrong< ::g::Fuse::Controls::Rectangle*> bg;
    uStrong< ::g::Fuse::Drawing::Stroke*> bgStroke;
    uWeak< ::g::Alive::Switch*> __parent1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Switch__InnerSwitch_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Switch__InnerSwitch_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return Switch__InnerSwitch_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return Switch__InnerSwitch_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return Switch__InnerSwitch_typeof()->Init(), __selector4_; }

    void ctor_8(::g::Alive::Switch* parent);
    void InitializeUX();
    float Progress();
    void Progress(float value);
    void SetProgress(float value, uObject* origin);
    static Switch__InnerSwitch* New4(::g::Alive::Switch* parent);
};
// }

}} // ::g::Alive
