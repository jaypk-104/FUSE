// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/Docs/UnderlineTitle.ux.uno.
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
namespace g{namespace Alive{struct UnderlineTitle;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class UnderlineTitle
// {
::g::Fuse::Controls::Panel_type* UnderlineTitle_typeof();
void UnderlineTitle__SetText_fn(UnderlineTitle* __this, uString* value, uObject* origin);
void UnderlineTitle__get_Text_fn(UnderlineTitle* __this, uString** __retval);
void UnderlineTitle__set_Text_fn(UnderlineTitle* __this, uString* value);

struct UnderlineTitle : ::g::Fuse::Controls::Panel
{
    uStrong<uString*> _field_Text;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return UnderlineTitle_typeof()->Init(), __selector0_; }

    void SetText(uString* value, uObject* origin);
    uString* Text();
    void Text(uString* value);
};
// }

}} // ::g::Alive
