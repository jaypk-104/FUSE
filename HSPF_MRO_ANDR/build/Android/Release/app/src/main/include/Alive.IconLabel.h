// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/Docs/IconLabel.ux.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
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
namespace g{namespace Alive{struct IconLabel;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class IconLabel
// {
::g::Fuse::Controls::Panel_type* IconLabel_typeof();
void IconLabel__get_Icon_fn(IconLabel* __this, uString** __retval);
void IconLabel__set_Icon_fn(IconLabel* __this, uString* value);
void IconLabel__get_IconSize_fn(IconLabel* __this, int32_t* __retval);
void IconLabel__set_IconSize_fn(IconLabel* __this, int32_t* value);
void IconLabel__SetIcon_fn(IconLabel* __this, uString* value, uObject* origin);
void IconLabel__SetIconSize_fn(IconLabel* __this, int32_t* value, uObject* origin);
void IconLabel__SetText_fn(IconLabel* __this, uString* value, uObject* origin);
void IconLabel__get_Text_fn(IconLabel* __this, uString** __retval);
void IconLabel__set_Text_fn(IconLabel* __this, uString* value);

struct IconLabel : ::g::Fuse::Controls::DockPanel
{
    uStrong<uString*> _field_Text;
    int32_t _field_IconSize;
    uStrong<uString*> _field_Icon;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return IconLabel_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return IconLabel_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return IconLabel_typeof()->Init(), __selector2_; }

    uString* Icon();
    void Icon(uString* value);
    int32_t IconSize();
    void IconSize(int32_t value);
    void SetIcon(uString* value, uObject* origin);
    void SetIconSize(int32_t value, uObject* origin);
    void SetText(uString* value, uObject* origin);
    uString* Text();
    void Text(uString* value);
};
// }

}} // ::g::Alive
