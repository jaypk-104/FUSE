// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/Docs/Icon.ux.uno.
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
namespace g{namespace Alive{struct Icon;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class Icon
// {
::g::Fuse::Controls::TextControl_type* Icon_typeof();
void Icon__ctor_8_fn(Icon* __this);
void Icon__InitializeUX1_fn(Icon* __this);
void Icon__New4_fn(Icon** __retval);
void Icon__SetSize_fn(Icon* __this, float* value, uObject* origin);
void Icon__get_Size1_fn(Icon* __this, float* __retval);
void Icon__set_Size1_fn(Icon* __this, float* value);

struct Icon : ::g::Fuse::Controls::Text
{
    float _field_Size;
    uStrong< ::g::Uno::UX::Property1*> this_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> this_FontSize_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Icon_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Icon_typeof()->Init(), __selector1_; }

    void ctor_8();
    void InitializeUX1();
    void SetSize(float value, uObject* origin);
    float Size1();
    void Size1(float value);
    static Icon* New4();
};
// }

}} // ::g::Alive
