// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/Docs/SwipeActionPanel.ux.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Container.h>
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
namespace g{namespace Alive{struct SwipeActionPanel;}}
namespace g{namespace Alive{struct Title;}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipeGesture;}}}
namespace g{namespace Fuse{namespace Triggers{struct Timeline;}}}
namespace g{namespace Fuse{struct Scaling;}}
namespace g{namespace Fuse{struct UserEvent;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class SwipeActionPanel
// {
::g::Fuse::Controls::Panel_type* SwipeActionPanel_typeof();
void SwipeActionPanel__ctor_8_fn(SwipeActionPanel* __this);
void SwipeActionPanel__get_ButtonText_fn(SwipeActionPanel* __this, uString** __retval);
void SwipeActionPanel__set_ButtonText_fn(SwipeActionPanel* __this, uString* value);
void SwipeActionPanel__get_ConfirmationText_fn(SwipeActionPanel* __this, uString** __retval);
void SwipeActionPanel__set_ConfirmationText_fn(SwipeActionPanel* __this, uString* value);
void SwipeActionPanel__get_GradientEndColor_fn(SwipeActionPanel* __this, ::g::Uno::Float4* __retval);
void SwipeActionPanel__set_GradientEndColor_fn(SwipeActionPanel* __this, ::g::Uno::Float4* value);
void SwipeActionPanel__get_GradientStartColor_fn(SwipeActionPanel* __this, ::g::Uno::Float4* __retval);
void SwipeActionPanel__set_GradientStartColor_fn(SwipeActionPanel* __this, ::g::Uno::Float4* value);
void SwipeActionPanel__InitializeUX_fn(SwipeActionPanel* __this);
void SwipeActionPanel__New5_fn(SwipeActionPanel** __retval);
void SwipeActionPanel__SetButtonText_fn(SwipeActionPanel* __this, uString* value, uObject* origin);
void SwipeActionPanel__SetConfirmationText_fn(SwipeActionPanel* __this, uString* value, uObject* origin);
void SwipeActionPanel__SetGradientEndColor_fn(SwipeActionPanel* __this, ::g::Uno::Float4* value, uObject* origin);
void SwipeActionPanel__SetGradientStartColor_fn(SwipeActionPanel* __this, ::g::Uno::Float4* value, uObject* origin);
void SwipeActionPanel__SetStayOpen_fn(SwipeActionPanel* __this, bool* value, uObject* origin);
void SwipeActionPanel__get_StayOpen_fn(SwipeActionPanel* __this, bool* __retval);
void SwipeActionPanel__set_StayOpen_fn(SwipeActionPanel* __this, bool* value);

struct SwipeActionPanel : ::g::Fuse::Controls::Container
{
    uStrong<uString*> _field_ButtonText;
    uStrong<uString*> _field_ConfirmationText;
    ::g::Uno::Float4 _field_GradientStartColor;
    ::g::Uno::Float4 _field_GradientEndColor;
    bool _field_StayOpen;
    uStrong< ::g::Uno::UX::Property1*> confirmationText_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> confirmAnimation_TargetProgress_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> button_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> confirmationTextScaling_Factor_inst;
    uStrong< ::g::Uno::UX::Property1*> confirmationText_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Value_inst;
    uStrong< ::g::Fuse::Controls::Panel*> rootPanel;
    uStrong< ::g::Fuse::UserEvent*> AliveSwipeActionConfirmed;
    uStrong< ::g::Fuse::Gestures::SwipeGesture*> swipe;
    uStrong< ::g::Fuse::Controls::Panel*> confirmation;
    uStrong< ::g::Alive::Title*> confirmationText;
    uStrong< ::g::Fuse::Scaling*> confirmationTextScaling;
    uStrong< ::g::Fuse::Controls::Rectangle*> bg;
    uStrong< ::g::Fuse::Controls::Rectangle*> button;
    uStrong< ::g::Fuse::Triggers::Timeline*> confirmAnimation;
    uStrong< ::g::Fuse::Controls::Panel*> inner;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return SwipeActionPanel_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return SwipeActionPanel_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return SwipeActionPanel_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return SwipeActionPanel_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return SwipeActionPanel_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return SwipeActionPanel_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return SwipeActionPanel_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return SwipeActionPanel_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return SwipeActionPanel_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return SwipeActionPanel_typeof()->Init(), __selector9_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return SwipeActionPanel_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return SwipeActionPanel_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector12_;
    static ::g::Uno::UX::Selector& __selector12() { return SwipeActionPanel_typeof()->Init(), __selector12_; }
    static ::g::Uno::UX::Selector __selector13_;
    static ::g::Uno::UX::Selector& __selector13() { return SwipeActionPanel_typeof()->Init(), __selector13_; }
    static ::g::Uno::UX::Selector __selector14_;
    static ::g::Uno::UX::Selector& __selector14() { return SwipeActionPanel_typeof()->Init(), __selector14_; }

    void ctor_8();
    uString* ButtonText();
    void ButtonText(uString* value);
    uString* ConfirmationText();
    void ConfirmationText(uString* value);
    ::g::Uno::Float4 GradientEndColor();
    void GradientEndColor(::g::Uno::Float4 value);
    ::g::Uno::Float4 GradientStartColor();
    void GradientStartColor(::g::Uno::Float4 value);
    void InitializeUX();
    void SetButtonText(uString* value, uObject* origin);
    void SetConfirmationText(uString* value, uObject* origin);
    void SetGradientEndColor(::g::Uno::Float4 value, uObject* origin);
    void SetGradientStartColor(::g::Uno::Float4 value, uObject* origin);
    void SetStayOpen(bool value, uObject* origin);
    bool StayOpen();
    void StayOpen(bool value);
    static SwipeActionPanel* New5();
};
// }

}} // ::g::Alive
