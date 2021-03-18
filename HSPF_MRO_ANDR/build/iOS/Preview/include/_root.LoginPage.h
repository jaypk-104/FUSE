// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/LoginPage.g.uno.
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
#include <Uno.UX.Size.h>
namespace g{namespace Fuse{namespace Controls{struct Circle;}}}
namespace g{namespace Fuse{namespace Controls{struct DockPanel;}}}
namespace g{namespace Fuse{namespace Controls{struct Grid;}}}
namespace g{namespace Fuse{namespace Controls{struct Image;}}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileTrue;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct LoginPage;}
namespace g{struct MyToggle;}

namespace g{

// public partial sealed class LoginPage
// {
::g::Fuse::Controls::Panel_type* LoginPage_typeof();
void LoginPage__ctor_8_fn(LoginPage* __this, ::g::Fuse::Navigation::Router* router2);
void LoginPage__InitializeUX_fn(LoginPage* __this);
void LoginPage__New5_fn(::g::Fuse::Navigation::Router* router2, LoginPage** __retval);

struct LoginPage : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Uno::UX::Property1*> PAGENAME_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> changeWidth_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> loadCircle_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> scaleAndFade_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> showLoggedIn_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> rectNormalScale_Width_inst;
    uStrong< ::g::Uno::UX::Property1*> text_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> loadingCircle_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> loadingButton_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> loadingCircle_LengthAngleDegrees_inst;
    uStrong< ::g::Uno::UX::Property1*> loadingCirclePanel_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> loadingButton_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> rectNormalScale_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_DefaultPath_inst;
    uStrong< ::g::Uno::UX::Property1*> temp5_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp6_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp7_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> toggle_IsActive_inst;
    uStrong< ::g::Uno::UX::Property1*> background_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp8_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> auto_login_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp9_Value_inst;
    static uSStrong< ::g::Fuse::Font*> RobotoMedium_;
    static uSStrong< ::g::Fuse::Font*>& RobotoMedium() { return LoginPage_typeof()->Init(), RobotoMedium_; }
    uStrong< ::g::Fuse::Controls::Text*> PAGENAME;
    uStrong< ::g::Fuse::Controls::Panel*> transitionScaleGuide;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> loading;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> changeWidth;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> loadCircle;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> scaleAndFade;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> showLoggedIn;
    uStrong< ::g::Fuse::Navigation::Router*> router1;
    uStrong< ::g::Fuse::Controls::Grid*> loggedOutView;
    uStrong< ::g::Fuse::Controls::Panel*> signin;
    uStrong< ::g::Fuse::Controls::Text*> text;
    uStrong< ::g::Fuse::Controls::Panel*> loadingCirclePanel;
    uStrong< ::g::Fuse::Controls::Circle*> loadingCircle;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb6;
    uStrong< ::g::Fuse::Controls::Rectangle*> rectNormalScale;
    uStrong< ::g::Fuse::Controls::Circle*> loadingButton;
    uStrong< ::g::Fuse::Controls::Image*> mark;
    uStrong< ::g::Fuse::Controls::Grid*> loginArea;
    uStrong< ::g::Fuse::Controls::DockPanel*> autologin;
    uStrong< ::g::MyToggle*> toggle;
    uStrong< ::g::Fuse::Controls::Rectangle*> background;
    uStrong< ::g::Fuse::Controls::Text*> auto_login;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb7;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return LoginPage_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return LoginPage_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return LoginPage_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return LoginPage_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return LoginPage_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return LoginPage_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return LoginPage_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return LoginPage_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return LoginPage_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return LoginPage_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return LoginPage_typeof()->Init(), __selector9_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return LoginPage_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return LoginPage_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector12_;
    static ::g::Uno::UX::Selector& __selector12() { return LoginPage_typeof()->Init(), __selector12_; }
    static ::g::Uno::UX::Selector __selector13_;
    static ::g::Uno::UX::Selector& __selector13() { return LoginPage_typeof()->Init(), __selector13_; }
    static ::g::Uno::UX::Selector __selector14_;
    static ::g::Uno::UX::Selector& __selector14() { return LoginPage_typeof()->Init(), __selector14_; }
    static ::g::Uno::UX::Selector __selector15_;
    static ::g::Uno::UX::Selector& __selector15() { return LoginPage_typeof()->Init(), __selector15_; }
    static ::g::Uno::UX::Selector __selector16_;
    static ::g::Uno::UX::Selector& __selector16() { return LoginPage_typeof()->Init(), __selector16_; }
    static ::g::Uno::UX::Selector __selector17_;
    static ::g::Uno::UX::Selector& __selector17() { return LoginPage_typeof()->Init(), __selector17_; }
    static ::g::Uno::UX::Selector __selector18_;
    static ::g::Uno::UX::Selector& __selector18() { return LoginPage_typeof()->Init(), __selector18_; }
    static ::g::Uno::UX::Selector __selector19_;
    static ::g::Uno::UX::Selector& __selector19() { return LoginPage_typeof()->Init(), __selector19_; }
    static ::g::Uno::UX::Selector __selector20_;
    static ::g::Uno::UX::Selector& __selector20() { return LoginPage_typeof()->Init(), __selector20_; }
    static ::g::Uno::UX::Selector __selector21_;
    static ::g::Uno::UX::Selector& __selector21() { return LoginPage_typeof()->Init(), __selector21_; }
    static ::g::Uno::UX::Selector __selector22_;
    static ::g::Uno::UX::Selector& __selector22() { return LoginPage_typeof()->Init(), __selector22_; }
    static ::g::Uno::UX::Selector __selector23_;
    static ::g::Uno::UX::Selector& __selector23() { return LoginPage_typeof()->Init(), __selector23_; }
    static ::g::Uno::UX::Selector __selector24_;
    static ::g::Uno::UX::Selector& __selector24() { return LoginPage_typeof()->Init(), __selector24_; }
    static ::g::Uno::UX::Selector __selector25_;
    static ::g::Uno::UX::Selector& __selector25() { return LoginPage_typeof()->Init(), __selector25_; }
    static ::g::Uno::UX::Selector __selector26_;
    static ::g::Uno::UX::Selector& __selector26() { return LoginPage_typeof()->Init(), __selector26_; }
    static ::g::Uno::UX::Selector __selector27_;
    static ::g::Uno::UX::Selector& __selector27() { return LoginPage_typeof()->Init(), __selector27_; }

    void ctor_8(::g::Fuse::Navigation::Router* router2);
    void InitializeUX();
    static LoginPage* New5(::g::Fuse::Navigation::Router* router2);
};
// }

} // ::g
