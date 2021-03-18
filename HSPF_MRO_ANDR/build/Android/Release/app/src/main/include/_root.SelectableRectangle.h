// This file was generated based on '.uno/ux15/SelectableRectangle.g.uno'.
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
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Selection{struct Selectable;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct SelectableRectangle;}

namespace g{

// public partial sealed class SelectableRectangle
// {
::g::Fuse::Controls::Shape_type* SelectableRectangle_typeof();
void SelectableRectangle__ctor_8_fn(SelectableRectangle* __this);
void SelectableRectangle__get_ID_fn(SelectableRectangle* __this, uString** __retval);
void SelectableRectangle__set_ID_fn(SelectableRectangle* __this, uString* value);
void SelectableRectangle__InitializeUX_fn(SelectableRectangle* __this);
void SelectableRectangle__New4_fn(SelectableRectangle** __retval);
void SelectableRectangle__get_SelectionColor_fn(SelectableRectangle* __this, ::g::Uno::Float4* __retval);
void SelectableRectangle__set_SelectionColor_fn(SelectableRectangle* __this, ::g::Uno::Float4* value);
void SelectableRectangle__SetID_fn(SelectableRectangle* __this, uString* value, uObject* origin);
void SelectableRectangle__SetSelectionColor_fn(SelectableRectangle* __this, ::g::Uno::Float4* value, uObject* origin);

struct SelectableRectangle : ::g::Fuse::Controls::Rectangle
{
    uStrong<uString*> _field_ID;
    ::g::Uno::Float4 _field_SelectionColor;
    uStrong< ::g::Uno::UX::Property1*> add1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> this_ID_inst;
    uStrong< ::g::Uno::UX::Property1*> this_SelectionColor_inst;
    uStrong< ::g::Fuse::Selection::Selectable*> add1;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return SelectableRectangle_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return SelectableRectangle_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return SelectableRectangle_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return SelectableRectangle_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return SelectableRectangle_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return SelectableRectangle_typeof()->Init(), __selector4_; }

    void ctor_8();
    uString* ID();
    void ID(uString* value);
    void InitializeUX();
    ::g::Uno::Float4 SelectionColor();
    void SelectionColor(::g::Uno::Float4 value);
    void SetID(uString* value, uObject* origin);
    void SetSelectionColor(::g::Uno::Float4 value, uObject* origin);
    static SelectableRectangle* New4();
};
// }

} // ::g
