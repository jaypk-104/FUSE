// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/Docs/CallToActionButton.ux.uno.
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
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Alive{struct CallToActionButton;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class CallToActionButton
// {
::g::Fuse::Controls::Shape_type* CallToActionButton_typeof();
void CallToActionButton__get_Glow_fn(CallToActionButton* __this, bool* __retval);
void CallToActionButton__set_Glow_fn(CallToActionButton* __this, bool* value);
void CallToActionButton__SetGlow_fn(CallToActionButton* __this, bool* value, uObject* origin);
void CallToActionButton__SetText_fn(CallToActionButton* __this, uString* value, uObject* origin);
void CallToActionButton__get_Text_fn(CallToActionButton* __this, uString** __retval);
void CallToActionButton__set_Text_fn(CallToActionButton* __this, uString* value);

struct CallToActionButton : ::g::Fuse::Controls::Rectangle
{
    uStrong<uString*> _field_Text;
    bool _field_Glow;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return CallToActionButton_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return CallToActionButton_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return CallToActionButton_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return CallToActionButton_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return CallToActionButton_typeof()->Init(), __selector4_; }

    bool Glow();
    void Glow(bool value);
    void SetGlow(bool value, uObject* origin);
    void SetText(uString* value, uObject* origin);
    uString* Text();
    void Text(uString* value);
};
// }

}} // ::g::Alive
