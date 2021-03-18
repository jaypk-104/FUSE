// This file was generated based on '.uno/ux15/Confirm_inq.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
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
#include <Uno.UX.Size2.h>
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Controls{struct StackPanel;}}}
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileTrue;}}}
namespace g{namespace Fuse{struct UserEvent;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Confirm_inq;}

namespace g{

// public partial sealed class Confirm_inq
// {
::g::Fuse::Controls::Panel_type* Confirm_inq_typeof();
void Confirm_inq__ctor_7_fn(Confirm_inq* __this);
void Confirm_inq__InitializeUX_fn(Confirm_inq* __this);
void Confirm_inq__New4_fn(Confirm_inq** __retval);
void Confirm_inq__SetShow_fn(Confirm_inq* __this, bool* value, uObject* origin);
void Confirm_inq__SetText_fn(Confirm_inq* __this, uString* value, uObject* origin);
void Confirm_inq__get_Show_fn(Confirm_inq* __this, bool* __retval);
void Confirm_inq__set_Show_fn(Confirm_inq* __this, bool* value);
void Confirm_inq__get_Text_fn(Confirm_inq* __this, uString** __retval);
void Confirm_inq__set_Text_fn(Confirm_inq* __this, uString* value);

struct Confirm_inq : ::g::Fuse::Controls::Panel
{
    bool _field_Show;
    uStrong<uString*> _field_Text;
    uStrong< ::g::Uno::UX::Property1*> this_Show_inst;
    uStrong< ::g::Uno::UX::Property1*> text_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> text_Offset_inst;
    uStrong< ::g::Uno::UX::Property1*> addTaskButtons_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> ButtonsPanel_Offset_inst;
    uStrong< ::g::Uno::UX::Property1*> AddToBasketPanel_HitTestMode_inst;
    uStrong< ::g::Uno::UX::Property1*> AddToBasketPanel_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> show_Value_inst;
    uStrong< ::g::Fuse::Controls::Panel*> AddToBasketPanel;
    uStrong< ::g::Fuse::Controls::Rectangle*> addTaskButtons;
    uStrong< ::g::Fuse::Controls::Text*> text;
    uStrong< ::g::Fuse::Controls::StackPanel*> ButtonsPanel;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> show;
    uStrong< ::g::Fuse::UserEvent*> Event_Handler;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Confirm_inq_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Confirm_inq_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return Confirm_inq_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return Confirm_inq_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return Confirm_inq_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return Confirm_inq_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return Confirm_inq_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return Confirm_inq_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return Confirm_inq_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return Confirm_inq_typeof()->Init(), __selector9_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return Confirm_inq_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return Confirm_inq_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector12_;
    static ::g::Uno::UX::Selector& __selector12() { return Confirm_inq_typeof()->Init(), __selector12_; }

    void ctor_7();
    void InitializeUX();
    void SetShow(bool value, uObject* origin);
    void SetText(uString* value, uObject* origin);
    bool Show();
    void Show(bool value);
    uString* Text();
    void Text(uString* value);
    static Confirm_inq* New4();
};
// }

} // ::g
