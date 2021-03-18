// This file was generated based on '.uno/ux15/MyToggle.g.uno'.
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
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipeGesture;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MyToggle;}

namespace g{

// public partial sealed class MyToggle
// {
::g::Fuse::Controls::Panel_type* MyToggle_typeof();
void MyToggle__ctor_7_fn(MyToggle* __this);
void MyToggle__InitializeUX_fn(MyToggle* __this);
void MyToggle__get_IsActive_fn(MyToggle* __this, bool* __retval);
void MyToggle__set_IsActive_fn(MyToggle* __this, bool* value);
void MyToggle__New4_fn(MyToggle** __retval);
void MyToggle__get_PrimaryColor_fn(MyToggle* __this, ::g::Uno::Float4* __retval);
void MyToggle__set_PrimaryColor_fn(MyToggle* __this, ::g::Uno::Float4* value);
void MyToggle__get_SecondaryColor_fn(MyToggle* __this, ::g::Uno::Float4* __retval);
void MyToggle__set_SecondaryColor_fn(MyToggle* __this, ::g::Uno::Float4* value);
void MyToggle__SetIsActive_fn(MyToggle* __this, bool* value, uObject* origin);
void MyToggle__SetPrimaryColor_fn(MyToggle* __this, ::g::Uno::Float4* value, uObject* origin);
void MyToggle__SetSecondaryColor_fn(MyToggle* __this, ::g::Uno::Float4* value, uObject* origin);

struct MyToggle : ::g::Fuse::Controls::Panel
{
    ::g::Uno::Float4 _field_PrimaryColor;
    ::g::Uno::Float4 _field_SecondaryColor;
    bool _field_IsActive;
    uStrong< ::g::Uno::UX::Property1*> swipe_IsActive_inst;
    uStrong< ::g::Uno::UX::Property1*> handle_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> background_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Fuse::Gestures::SwipeGesture*> swipe;
    uStrong< ::g::Fuse::Controls::Rectangle*> handle;
    uStrong< ::g::Fuse::Controls::Rectangle*> background;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MyToggle_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return MyToggle_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return MyToggle_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return MyToggle_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return MyToggle_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return MyToggle_typeof()->Init(), __selector5_; }

    void ctor_7();
    void InitializeUX();
    bool IsActive();
    void IsActive(bool value);
    ::g::Uno::Float4 PrimaryColor();
    void PrimaryColor(::g::Uno::Float4 value);
    ::g::Uno::Float4 SecondaryColor();
    void SecondaryColor(::g::Uno::Float4 value);
    void SetIsActive(bool value, uObject* origin);
    void SetPrimaryColor(::g::Uno::Float4 value, uObject* origin);
    void SetSecondaryColor(::g::Uno::Float4 value, uObject* origin);
    static MyToggle* New4();
};
// }

} // ::g
