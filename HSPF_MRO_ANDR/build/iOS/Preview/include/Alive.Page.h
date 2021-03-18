// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/Docs/Page.ux.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Page.h>
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
namespace g{namespace Alive{struct Page;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial class Page
// {
::g::Fuse::Controls::Panel_type* Page_typeof();
void Page__ctor_8_fn(Page* __this);
void Page__InitializeUX_fn(Page* __this);
void Page__New5_fn(Page** __retval);

struct Page : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Uno::UX::Property1*> this_Color_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Page_typeof()->Init(), __selector0_; }

    void ctor_8();
    void InitializeUX();
    static Page* New5();
};
// }

}} // ::g::Alive
