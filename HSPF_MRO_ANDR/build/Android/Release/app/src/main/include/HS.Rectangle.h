// This file was generated based on '.uno/ux15/HS.Rectangle.g.uno'.
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
namespace g{namespace HS{struct Rectangle;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace HS{

// public partial sealed class Rectangle
// {
::g::Fuse::Controls::Panel_type* Rectangle_typeof();
void Rectangle__SetText_fn(Rectangle* __this, uString* value, uObject* origin);
void Rectangle__get_Text_fn(Rectangle* __this, uString** __retval);
void Rectangle__set_Text_fn(Rectangle* __this, uString* value);

struct Rectangle : ::g::Fuse::Controls::Panel
{
    uStrong<uString*> _field_Text;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Rectangle_typeof()->Init(), __selector0_; }

    void SetText(uString* value, uObject* origin);
    uString* Text();
    void Text(uString* value);
};
// }

}} // ::g::HS
