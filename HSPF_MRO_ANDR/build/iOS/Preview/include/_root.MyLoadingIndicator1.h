// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/MyLoadingIndicator1.g.uno.
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
namespace g{namespace Fuse{namespace Controls{struct Circle;}}}
namespace g{namespace Fuse{namespace Triggers{struct Timeline;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MyLoadingIndicator1;}

namespace g{

// public partial sealed class MyLoadingIndicator1
// {
::g::Fuse::Controls::Panel_type* MyLoadingIndicator1_typeof();
void MyLoadingIndicator1__ctor_7_fn(MyLoadingIndicator1* __this);
void MyLoadingIndicator1__InitializeUX_fn(MyLoadingIndicator1* __this);
void MyLoadingIndicator1__New4_fn(MyLoadingIndicator1** __retval);
void MyLoadingIndicator1__SetThemeColor_fn(MyLoadingIndicator1* __this, ::g::Uno::Float4* value, uObject* origin);
void MyLoadingIndicator1__get_ThemeColor_fn(MyLoadingIndicator1* __this, ::g::Uno::Float4* __retval);
void MyLoadingIndicator1__set_ThemeColor_fn(MyLoadingIndicator1* __this, ::g::Uno::Float4* value);

struct MyLoadingIndicator1 : ::g::Fuse::Controls::Panel
{
    ::g::Uno::Float4 _field_ThemeColor;
    uStrong< ::g::Uno::UX::Property1*> temp_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> myTimeline_TargetProgress_inst;
    uStrong< ::g::Fuse::Controls::Circle*> rotatingStroke;
    uStrong< ::g::Fuse::Triggers::Timeline*> myTimeline;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MyLoadingIndicator1_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return MyLoadingIndicator1_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return MyLoadingIndicator1_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return MyLoadingIndicator1_typeof()->Init(), __selector3_; }

    void ctor_7();
    void InitializeUX();
    void SetThemeColor(::g::Uno::Float4 value, uObject* origin);
    ::g::Uno::Float4 ThemeColor();
    void ThemeColor(::g::Uno::Float4 value);
    static MyLoadingIndicator1* New4();
};
// }

} // ::g
