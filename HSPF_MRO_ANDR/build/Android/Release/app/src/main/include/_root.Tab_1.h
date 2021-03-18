// This file was generated based on '.uno/ux15/Tab_1.g.uno'.
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
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Tab_1;}

namespace g{

// public partial sealed class Tab_1
// {
::g::Fuse::Controls::Panel_type* Tab_1_typeof();
void Tab_1__get_Color1_fn(Tab_1* __this, uString** __retval);
void Tab_1__set_Color1_fn(Tab_1* __this, uString* value);
void Tab_1__SetColor1_fn(Tab_1* __this, uString* value, uObject* origin);
void Tab_1__SetText_fn(Tab_1* __this, uString* value, uObject* origin);
void Tab_1__get_Text_fn(Tab_1* __this, uString** __retval);
void Tab_1__set_Text_fn(Tab_1* __this, uString* value);

struct Tab_1 : ::g::Fuse::Controls::Panel
{
    uStrong<uString*> _field_Text;
    uStrong<uString*> _field_Color;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Tab_1_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Tab_1_typeof()->Init(), __selector1_; }

    uString* Color1();
    void Color1(uString* value);
    void SetColor1(uString* value, uObject* origin);
    void SetText(uString* value, uObject* origin);
    uString* Text();
    void Text(uString* value);
};
// }

} // ::g
