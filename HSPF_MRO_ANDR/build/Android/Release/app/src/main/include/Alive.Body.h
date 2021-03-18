// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/.uno/ux15/Alive.Body.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Text.h>
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
#include <Fuse.Triggers.IValue-1.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Alive{struct Body;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class Body
// {
::g::Fuse::Controls::TextControl_type* Body_typeof();
void Body__ctor_8_fn(Body* __this);
void Body__InitializeUX1_fn(Body* __this);
void Body__New4_fn(Body** __retval);

struct Body : ::g::Fuse::Controls::Text
{
    uStrong< ::g::Uno::UX::Property1*> this_Color_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Body_typeof()->Init(), __selector0_; }

    void ctor_8();
    void InitializeUX1();
    static Body* New4();
};
// }

}} // ::g::Alive
