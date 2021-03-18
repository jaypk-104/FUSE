// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/Docs/Slider.ux.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Native.IRangeViewHost.h>
#include <Fuse.Controls.RangeControl.h>
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
#include <Fuse.Triggers.IProgress.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Size.h>
namespace g{namespace Alive{struct Slider;}}
namespace g{namespace Fuse{namespace Controls{struct Circle;}}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Controls{struct Shadow;}}}
namespace g{namespace Fuse{struct Scaling;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class Slider
// {
::g::Fuse::Controls::RangeControl_type* Slider_typeof();
void Slider__ctor_8_fn(Slider* __this);
void Slider__InitializeUX_fn(Slider* __this);
void Slider__New5_fn(Slider** __retval);

struct Slider : ::g::Fuse::Controls::RangeControl
{
    uStrong< ::g::Uno::UX::Property1*> activeTrack_Width_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_X_inst;
    uStrong< ::g::Uno::UX::Property1*> thumbFocusCircle_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> thumbShadow_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> thumbIdleCircle_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> thumbSmallCircle_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> thumbFocusCircleScaling_Factor_inst;
    uStrong< ::g::Uno::UX::Property1*> thumbFocusCircle_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> activeTrack_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> inactiveTrack_Color_inst;
    uStrong< ::g::Fuse::Controls::Circle*> thumb;
    uStrong< ::g::Fuse::Controls::Circle*> thumbIdleCircle;
    uStrong< ::g::Fuse::Controls::Shadow*> thumbShadow;
    uStrong< ::g::Fuse::Controls::Circle*> thumbSmallCircle;
    uStrong< ::g::Fuse::Controls::Circle*> thumbFocusCircle;
    uStrong< ::g::Fuse::Scaling*> thumbFocusCircleScaling;
    uStrong< ::g::Fuse::Controls::Rectangle*> background;
    uStrong< ::g::Fuse::Controls::Rectangle*> activeTrack;
    uStrong< ::g::Fuse::Controls::Rectangle*> inactiveTrack;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Slider_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Slider_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return Slider_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return Slider_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return Slider_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return Slider_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return Slider_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return Slider_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return Slider_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return Slider_typeof()->Init(), __selector9_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return Slider_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return Slider_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector12_;
    static ::g::Uno::UX::Selector& __selector12() { return Slider_typeof()->Init(), __selector12_; }
    static ::g::Uno::UX::Selector __selector13_;
    static ::g::Uno::UX::Selector& __selector13() { return Slider_typeof()->Init(), __selector13_; }

    void ctor_8();
    void InitializeUX();
    static Slider* New5();
};
// }

}} // ::g::Alive
