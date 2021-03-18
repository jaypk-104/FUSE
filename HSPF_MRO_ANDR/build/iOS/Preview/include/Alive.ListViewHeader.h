// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/Docs/ListViewHeader.ux.uno.
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
namespace g{namespace Alive{struct ListViewHeader;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class ListViewHeader
// {
::g::Fuse::Controls::Shape_type* ListViewHeader_typeof();
void ListViewHeader__ctor_8_fn(ListViewHeader* __this);
void ListViewHeader__InitializeUX_fn(ListViewHeader* __this);
void ListViewHeader__New4_fn(ListViewHeader** __retval);
void ListViewHeader__SetText_fn(ListViewHeader* __this, uString* value, uObject* origin);
void ListViewHeader__get_Text_fn(ListViewHeader* __this, uString** __retval);
void ListViewHeader__set_Text_fn(ListViewHeader* __this, uString* value);

struct ListViewHeader : ::g::Fuse::Controls::Rectangle
{
    uStrong<uString*> _field_Text;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ListViewHeader_typeof()->Init(), __selector0_; }

    void ctor_8();
    void InitializeUX();
    void SetText(uString* value, uObject* origin);
    uString* Text();
    void Text(uString* value);
    static ListViewHeader* New4();
};
// }

}} // ::g::Alive
