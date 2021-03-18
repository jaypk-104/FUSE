// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/Tab_1_po.g.uno.
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
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Tab_1_po;}

namespace g{

// public partial sealed class Tab_1_po
// {
::g::Fuse::Controls::Panel_type* Tab_1_po_typeof();
void Tab_1_po__ctor_7_fn(Tab_1_po* __this);
void Tab_1_po__get_Color1_fn(Tab_1_po* __this, uString** __retval);
void Tab_1_po__set_Color1_fn(Tab_1_po* __this, uString* value);
void Tab_1_po__InitializeUX_fn(Tab_1_po* __this);
void Tab_1_po__New4_fn(Tab_1_po** __retval);
void Tab_1_po__SetColor1_fn(Tab_1_po* __this, uString* value, uObject* origin);
void Tab_1_po__SetText_fn(Tab_1_po* __this, uString* value, uObject* origin);
void Tab_1_po__get_Text_fn(Tab_1_po* __this, uString** __retval);
void Tab_1_po__set_Text_fn(Tab_1_po* __this, uString* value);

struct Tab_1_po : ::g::Fuse::Controls::Panel
{
    uStrong<uString*> _field_Text;
    uStrong<uString*> _field_Color;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Color_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Tab_1_po_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Tab_1_po_typeof()->Init(), __selector1_; }

    void ctor_7();
    uString* Color1();
    void Color1(uString* value);
    void InitializeUX();
    void SetColor1(uString* value, uObject* origin);
    void SetText(uString* value, uObject* origin);
    uString* Text();
    void Text(uString* value);
    static Tab_1_po* New4();
};
// }

} // ::g
