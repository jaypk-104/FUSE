// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.c_appr.h>
#include <_root.c_gr.h>
#include <_root.c_inq.h>
#include <_root.c_menu.h>
#include <_root.c_po.h>
#include <_root.HomeScreen.h>
#include <_root.HomeScreenType.h>
#include <_root.HSMRO_accessor_MyToggle_IsActive.h>
#include <_root.HSMRO_bundle.h>
#include <_root.HSMRO_FuseAnimationsChangebool_Value_Property.h>
#include <_root.HSMRO_FuseControlsEllipticalShape_LengthAngleDegrees_Property.h>
#include <_root.HSMRO_FuseControlsNavigator_DefaultPath_Property.h>
#include <_root.HSMRO_FuseControlsShape_Color_Property.h>
#include <_root.HSMRO_FuseControlsTextControl_Value_Property.h>
#include <_root.HSMRO_FuseControlsTextInputControl_Value_Property.h>
#include <_root.HSMRO_FuseElementsElement_Opacity_Property.h>
#include <_root.HSMRO_FuseElementsElement_Width_Property.h>
#include <_root.HSMRO_FuseTriggersWhileBool_Value_Property.h>
#include <_root.HSMRO_MyToggle_IsActive_Property.h>
#include <_root.LoginPage.h>
#include <_root.LoginPage.Template.h>
#include <_root.LoginPage.Template1.h>
#include <_root.LoginPage.Template2.h>
#include <_root.LoginPage.Template3.h>
#include <_root.LoginPage.Template4.h>
#include <_root.LoginPage.Template5.h>
#include <_root.LoginPage.Template6.h>
#include <_root.MainView.h>
#include <_root.MyToggle.h>
#include <_root.s_inq01.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Cycle-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.Spin.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Controls.AutoCapitalizationHint.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.EllipticalShape.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Navigator.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.GradientStop.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.BoxSizingMode.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Elements.TranslationModes.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Node.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.ConstantExpression.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Scaling.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Actions.IToggleable.h>
#include <Fuse.Triggers.Actions.Toggle.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.KeyPressHandler.h>
#include <Fuse.Triggers.OnBackButton.h>
#include <Fuse.Triggers.OnKeyPress.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.TriggerBypassMode.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileKeyboardVisible.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[8];

namespace g{

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/.uno/ux15/LoginPage.g.uno
// -----------------------------------------------------------

// public partial sealed class LoginPage
// {
// static LoginPage()
static void LoginPage__cctor_4_fn(uType* __type)
{
    ::g::HSMRO_bundle_typeof()->Init();
    ::g::Uno::UX::Resource_typeof()->Init();
    LoginPage::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 24, uString::Const("router"), uString::Const("PAGENAME"), uString::Const("transitionScaleGuide"), uString::Const("loading"), uString::Const("changeWidth"), uString::Const("loadCircle"), uString::Const("scaleAndFade"), uString::Const("showLoggedIn"), uString::Const("router1"), uString::Const("loggedOutView"), uString::Const("signin"), uString::Const("text"), uString::Const("loadingCirclePanel"), uString::Const("loadingCircle"), uString::Const("temp_eb6"), uString::Const("rectNormalScale"), uString::Const("loadingButton"), uString::Const("mark"), uString::Const("loginArea"), uString::Const("autologin"), uString::Const("toggle"), uString::Const("background"), uString::Const("auto_login"), uString::Const("temp_eb7"));
    LoginPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Value"));
    LoginPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Width"));
    LoginPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Opacity"));
    LoginPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Color"));
    LoginPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("LengthAngleDegrees"));
    LoginPage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("DefaultPath"));
    LoginPage::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("IsActive"));
    LoginPage::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("PAGENAME"));
    LoginPage::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("transitionScaleGuide"));
    LoginPage::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("loading"));
    LoginPage::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("changeWidth"));
    LoginPage::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("loadCircle"));
    LoginPage::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("scaleAndFade"));
    LoginPage::__selector13_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("showLoggedIn"));
    LoginPage::__selector14_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("router1"));
    LoginPage::__selector15_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("loggedOutView"));
    LoginPage::__selector16_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("signin"));
    LoginPage::__selector17_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("text"));
    LoginPage::__selector18_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("loadingCirclePanel"));
    LoginPage::__selector19_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("loadingCircle"));
    LoginPage::__selector20_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("rectNormalScale"));
    LoginPage::__selector21_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("loadingButton"));
    LoginPage::__selector22_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("mark"));
    LoginPage::__selector23_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("loginArea"));
    LoginPage::__selector24_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("autologin"));
    LoginPage::__selector25_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("toggle"));
    LoginPage::__selector26_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("background"));
    LoginPage::__selector27_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("auto_login"));
    LoginPage::RobotoMedium_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::RobotoMediume39fdaed()));
    ::g::Uno::UX::Resource::SetGlobalKey(LoginPage::RobotoMedium_, uString::Const("RobotoMedium"));
}

static void LoginPage_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof(),
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::HSMRO_accessor_MyToggle_IsActive_typeof(),
        ::g::HSMRO_bundle_typeof(),
        ::g::MainView_typeof(),
        ::g::Fuse::Elements::TranslationModes_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(122,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(LoginPage, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(LoginPage, PAGENAME_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(LoginPage, changeWidth_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(LoginPage, loadCircle_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(LoginPage, scaleAndFade_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(LoginPage, showLoggedIn_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(LoginPage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(LoginPage, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(LoginPage, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(LoginPage, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL), offsetof(LoginPage, rectNormalScale_Width_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(LoginPage, text_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(LoginPage, loadingCircle_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(LoginPage, loadingButton_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(LoginPage, loadingCircle_LengthAngleDegrees_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(LoginPage, loadingCirclePanel_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(LoginPage, loadingButton_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(LoginPage, rectNormalScale_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(LoginPage, temp4_DefaultPath_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(LoginPage, temp5_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(LoginPage, temp6_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(LoginPage, temp7_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(LoginPage, toggle_IsActive_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(LoginPage, background_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(LoginPage, temp8_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(LoginPage, auto_login_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(LoginPage, temp9_Value_inst), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(LoginPage, PAGENAME), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(LoginPage, transitionScaleGuide), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(LoginPage, loading), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(LoginPage, changeWidth), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(LoginPage, loadCircle), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(LoginPage, scaleAndFade), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(LoginPage, showLoggedIn), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(LoginPage, router1), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(LoginPage, loggedOutView), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(LoginPage, signin), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(LoginPage, text), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(LoginPage, loadingCirclePanel), 0,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(LoginPage, loadingCircle), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(LoginPage, temp_eb6), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(LoginPage, rectNormalScale), 0,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(LoginPage, loadingButton), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(LoginPage, mark), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(LoginPage, loginArea), 0,
        ::g::Fuse::Controls::DockPanel_typeof(), offsetof(LoginPage, autologin), 0,
        ::g::MyToggle_typeof(), offsetof(LoginPage, toggle), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(LoginPage, background), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(LoginPage, auto_login), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(LoginPage, temp_eb7), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(LoginPage, __g_nametable1), 0,
        ::g::Fuse::Font_typeof(), (uintptr_t)&LoginPage::RobotoMedium_, uFieldFlagsStatic,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&LoginPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage::__selector9_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage::__selector14_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage::__selector15_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage::__selector16_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage::__selector17_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage::__selector18_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage::__selector19_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage::__selector20_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage::__selector21_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage::__selector22_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage::__selector23_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage::__selector24_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage::__selector25_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage::__selector26_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage::__selector27_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* LoginPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 203;
    options.InterfaceCount = 19;
    options.DependencyCount = 6;
    options.ObjectSize = sizeof(LoginPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("LoginPage", options);
    type->fp_build_ = LoginPage_build;
    type->fp_cctor_ = LoginPage__cctor_4_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface16.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface9.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface11.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface11.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public LoginPage(Fuse.Navigation.Router router)
void LoginPage__ctor_8_fn(LoginPage* __this, ::g::Fuse::Navigation::Router* router2)
{
    __this->ctor_8(router2);
}

// private void InitializeUX()
void LoginPage__InitializeUX_fn(LoginPage* __this)
{
    __this->InitializeUX();
}

// public LoginPage New(Fuse.Navigation.Router router)
void LoginPage__New5_fn(::g::Fuse::Navigation::Router* router2, LoginPage** __retval)
{
    *__retval = LoginPage::New5(router2);
}

uSStrong< ::g::Fuse::Font*> LoginPage::RobotoMedium_;
uSStrong<uArray*> LoginPage::__g_static_nametable1_;
::g::Uno::UX::Selector LoginPage::__selector0_;
::g::Uno::UX::Selector LoginPage::__selector1_;
::g::Uno::UX::Selector LoginPage::__selector2_;
::g::Uno::UX::Selector LoginPage::__selector3_;
::g::Uno::UX::Selector LoginPage::__selector4_;
::g::Uno::UX::Selector LoginPage::__selector5_;
::g::Uno::UX::Selector LoginPage::__selector6_;
::g::Uno::UX::Selector LoginPage::__selector7_;
::g::Uno::UX::Selector LoginPage::__selector8_;
::g::Uno::UX::Selector LoginPage::__selector9_;
::g::Uno::UX::Selector LoginPage::__selector10_;
::g::Uno::UX::Selector LoginPage::__selector11_;
::g::Uno::UX::Selector LoginPage::__selector12_;
::g::Uno::UX::Selector LoginPage::__selector13_;
::g::Uno::UX::Selector LoginPage::__selector14_;
::g::Uno::UX::Selector LoginPage::__selector15_;
::g::Uno::UX::Selector LoginPage::__selector16_;
::g::Uno::UX::Selector LoginPage::__selector17_;
::g::Uno::UX::Selector LoginPage::__selector18_;
::g::Uno::UX::Selector LoginPage::__selector19_;
::g::Uno::UX::Selector LoginPage::__selector20_;
::g::Uno::UX::Selector LoginPage::__selector21_;
::g::Uno::UX::Selector LoginPage::__selector22_;
::g::Uno::UX::Selector LoginPage::__selector23_;
::g::Uno::UX::Selector LoginPage::__selector24_;
::g::Uno::UX::Selector LoginPage::__selector25_;
::g::Uno::UX::Selector LoginPage::__selector26_;
::g::Uno::UX::Selector LoginPage::__selector27_;

// public LoginPage(Fuse.Navigation.Router router) [instance]
void LoginPage::ctor_8(::g::Fuse::Navigation::Router* router2)
{
    ctor_7();
    router = router2;
    InitializeUX();
}

// private void InitializeUX() [instance]
void LoginPage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, LoginPage::__g_static_nametable1_);
    PAGENAME = ::g::Fuse::Controls::Text::New3();
    PAGENAME_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(PAGENAME, LoginPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(uString::Const("page_name"));
    changeWidth = ::g::Fuse::Triggers::WhileTrue::New2();
    changeWidth_Value_inst = ::g::HSMRO_FuseTriggersWhileBool_Value_Property::New1(changeWidth, LoginPage::__selector0_);
    loadCircle = ::g::Fuse::Triggers::WhileTrue::New2();
    loadCircle_Value_inst = ::g::HSMRO_FuseTriggersWhileBool_Value_Property::New1(loadCircle, LoginPage::__selector0_);
    scaleAndFade = ::g::Fuse::Triggers::WhileTrue::New2();
    scaleAndFade_Value_inst = ::g::HSMRO_FuseTriggersWhileBool_Value_Property::New1(scaleAndFade, LoginPage::__selector0_);
    showLoggedIn = ::g::Fuse::Triggers::WhileTrue::New2();
    showLoggedIn_Value_inst = ::g::HSMRO_FuseTriggersWhileBool_Value_Property::New1(showLoggedIn, LoginPage::__selector0_);
    ::g::Fuse::Animations::Change* temp = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), changeWidth_Value_inst);
    temp_Value_inst = ::g::HSMRO_FuseAnimationsChangebool_Value_Property::New1(temp, LoginPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(uString::Const("login_flag1"));
    ::g::Fuse::Animations::Change* temp1 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), loadCircle_Value_inst);
    temp1_Value_inst = ::g::HSMRO_FuseAnimationsChangebool_Value_Property::New1(temp1, LoginPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(uString::Const("login_flag1"));
    ::g::Fuse::Animations::Change* temp2 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), scaleAndFade_Value_inst);
    temp2_Value_inst = ::g::HSMRO_FuseAnimationsChangebool_Value_Property::New1(temp2, LoginPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(uString::Const("login_flag2"));
    ::g::Fuse::Animations::Change* temp3 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), showLoggedIn_Value_inst);
    temp3_Value_inst = ::g::HSMRO_FuseAnimationsChangebool_Value_Property::New1(temp3, LoginPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp14 = ::g::Fuse::Reactive::Data::New1(uString::Const("login_flag2"));
    rectNormalScale = ::g::Fuse::Controls::Rectangle::New3();
    rectNormalScale_Width_inst = ::g::HSMRO_FuseElementsElement_Width_Property::New1(rectNormalScale, LoginPage::__selector1_);
    text = ::g::Fuse::Controls::Text::New3();
    text_Opacity_inst = ::g::HSMRO_FuseElementsElement_Opacity_Property::New1(text, LoginPage::__selector2_);
    loadingCircle = ::g::Fuse::Controls::Circle::New3();
    loadingCircle_Opacity_inst = ::g::HSMRO_FuseElementsElement_Opacity_Property::New1(loadingCircle, LoginPage::__selector2_);
    loadingButton = ::g::Fuse::Controls::Circle::New3();
    loadingButton_Color_inst = ::g::HSMRO_FuseControlsShape_Color_Property::New1(loadingButton, LoginPage::__selector3_);
    loadingCircle_LengthAngleDegrees_inst = ::g::HSMRO_FuseControlsEllipticalShape_LengthAngleDegrees_Property::New1(loadingCircle, LoginPage::__selector4_);
    loadingCirclePanel = ::g::Fuse::Controls::Panel::New3();
    loadingCirclePanel_Opacity_inst = ::g::HSMRO_FuseElementsElement_Opacity_Property::New1(loadingCirclePanel, LoginPage::__selector2_);
    loadingButton_Opacity_inst = ::g::HSMRO_FuseElementsElement_Opacity_Property::New1(loadingButton, LoginPage::__selector2_);
    rectNormalScale_Opacity_inst = ::g::HSMRO_FuseElementsElement_Opacity_Property::New1(rectNormalScale, LoginPage::__selector2_);
    ::g::Fuse::Controls::Navigator* temp4 = ::g::Fuse::Controls::Navigator::New4();
    temp4_DefaultPath_inst = ::g::HSMRO_FuseControlsNavigator_DefaultPath_Property::New1(temp4, LoginPage::__selector5_);
    ::g::Fuse::Reactive::Data* temp15 = ::g::Fuse::Reactive::Data::New1(uString::Const("menu_id"));
    ::g::Fuse::Reactive::Data* temp16 = ::g::Fuse::Reactive::Data::New1(uString::Const("loginClick"));
    ::g::Fuse::Controls::Text* temp5 = ::g::Fuse::Controls::Text::New3();
    temp5_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp5, LoginPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp17 = ::g::Fuse::Reactive::Data::New1(uString::Const("main_yn"));
    ::g::Fuse::Controls::TextInput* temp6 = ::g::Fuse::Controls::TextInput::New3();
    temp6_Value_inst = ::g::HSMRO_FuseControlsTextInputControl_Value_Property::New1(temp6, LoginPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp18 = ::g::Fuse::Reactive::Data::New1(uString::Const("login_id"));
    ::g::Fuse::Controls::TextInput* temp7 = ::g::Fuse::Controls::TextInput::New3();
    temp7_Value_inst = ::g::HSMRO_FuseControlsTextInputControl_Value_Property::New1(temp7, LoginPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp19 = ::g::Fuse::Reactive::Data::New1(uString::Const("login_pw"));
    toggle = ::g::MyToggle::New4();
    toggle_IsActive_inst = ::g::HSMRO_MyToggle_IsActive_Property::New1(toggle, LoginPage::__selector6_);
    ::g::Fuse::Reactive::Data* temp20 = ::g::Fuse::Reactive::Data::New1(uString::Const("auto_login"));
    background = ::g::Fuse::Controls::Rectangle::New3();
    background_Color_inst = ::g::HSMRO_FuseControlsShape_Color_Property::New1(background, LoginPage::__selector3_);
    ::g::Fuse::Reactive::Constant* temp21 = ::g::Fuse::Reactive::Constant::New1(toggle);
    ::g::Fuse::Triggers::WhileTrue* temp8 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp8_Value_inst = ::g::HSMRO_FuseTriggersWhileBool_Value_Property::New1(temp8, LoginPage::__selector0_);
    ::g::Fuse::Reactive::Property* temp22 = ::g::Fuse::Reactive::Property::New1(temp21, ::g::HSMRO_accessor_MyToggle_IsActive::Singleton());
    auto_login = ::g::Fuse::Controls::Text::New3();
    auto_login_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(auto_login, LoginPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(uString::Const("auto_login"));
    ::g::Fuse::Reactive::Data* temp24 = ::g::Fuse::Reactive::Data::New1(uString::Const("backBtn_main"));
    ::g::Fuse::Triggers::WhileTrue* temp9 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp9_Value_inst = ::g::HSMRO_FuseTriggersWhileBool_Value_Property::New1(temp9, LoginPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(uString::Const("exit"));
    ::g::Fuse::Reactive::JavaScript* temp26 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Panel* temp27 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp28 = ::g::Fuse::Reactive::DataBinding::New1(PAGENAME_Value_inst, (uObject*)temp10, 3);
    transitionScaleGuide = ::g::Fuse::Controls::Panel::New3();
    loading = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Reactive::DataBinding* temp29 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp11, 3);
    ::g::Fuse::Reactive::DataBinding* temp30 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp12, 3);
    ::g::Fuse::Reactive::DataBinding* temp31 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp13, 3);
    ::g::Fuse::Reactive::DataBinding* temp32 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp14, 3);
    ::g::Fuse::Animations::Change* temp33 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL), rectNormalScale_Width_inst);
    ::g::Fuse::Animations::Change* temp34 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), text_Opacity_inst);
    ::g::Fuse::Animations::Change* temp35 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), loadingCircle_Opacity_inst);
    ::g::Fuse::Animations::Change* temp36 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), loadingButton_Color_inst);
    ::g::Fuse::Animations::Spin* temp37 = ::g::Fuse::Animations::Spin::New2();
    ::g::Fuse::Animations::Cycle* temp38 = (::g::Fuse::Animations::Cycle*)::g::Fuse::Animations::Cycle::New2(::g::Fuse::Animations::Cycle_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), loadingCircle_LengthAngleDegrees_inst);
    ::g::Fuse::Animations::Change* temp39 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), loadingCirclePanel_Opacity_inst);
    ::g::Fuse::Animations::Change* temp40 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), loadingButton_Opacity_inst);
    ::g::Fuse::Animations::Change* temp41 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), rectNormalScale_Opacity_inst);
    ::g::Fuse::Animations::Scale* temp42 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Controls::DockPanel* temp43 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::DockPanel* temp44 = ::g::Fuse::Controls::DockPanel::New4();
    router1 = ::g::Fuse::Navigation::Router::New2();
    LoginPage__Template* login = LoginPage__Template::New2(this, this);
    LoginPage__Template1* s_inq01 = LoginPage__Template1::New2(this, this);
    LoginPage__Template2* c_menu = LoginPage__Template2::New2(this, this);
    LoginPage__Template3* c_gr = LoginPage__Template3::New2(this, this);
    LoginPage__Template4* c_appr = LoginPage__Template4::New2(this, this);
    LoginPage__Template5* c_inq = LoginPage__Template5::New2(this, this);
    LoginPage__Template6* c_po = LoginPage__Template6::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp45 = ::g::Fuse::Reactive::DataBinding::New1(temp4_DefaultPath_inst, (uObject*)temp15, 3);
    loggedOutView = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Triggers::WhileKeyboardVisible* temp46 = ::g::Fuse::Triggers::WhileKeyboardVisible::New2();
    ::g::Fuse::Animations::Move* temp47 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp48 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp49 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp50 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::Rectangle* temp51 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::LinearGradient* temp52 = ::g::Fuse::Drawing::LinearGradient::New2();
    ::g::Fuse::Drawing::GradientStop* temp53 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Drawing::GradientStop* temp54 = ::g::Fuse::Drawing::GradientStop::New2();
    signin = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Drawing::Stroke* temp55 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp56 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Gestures::Clicked* temp57 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp58 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    temp_eb6 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp16);
    ::g::Fuse::Scaling* temp59 = ::g::Fuse::Scaling::New2();
    mark = ::g::Fuse::Controls::Image::New3();
    loginArea = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp60 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Value_inst, (uObject*)temp17, 3);
    ::g::Fuse::Controls::Image* temp61 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp62 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Value_inst, (uObject*)temp18, 3);
    ::g::Fuse::Controls::Rectangle* temp63 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Image* temp64 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp65 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Value_inst, (uObject*)temp19, 3);
    ::g::Fuse::Controls::Rectangle* temp66 = ::g::Fuse::Controls::Rectangle::New3();
    autologin = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp67 = ::g::Fuse::Reactive::DataBinding::New1(toggle_IsActive_inst, (uObject*)temp20, 3);
    ::g::Fuse::Animations::Change* temp68 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), background_Color_inst);
    ::g::Fuse::Reactive::DataBinding* temp69 = ::g::Fuse::Reactive::DataBinding::New1(temp8_Value_inst, (uObject*)temp22, 1);
    ::g::Fuse::Controls::Text* temp70 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp71 = ::g::Fuse::Reactive::DataBinding::New1(auto_login_Value_inst, (uObject*)temp23, 3);
    ::g::Fuse::Navigation::WhileActive* temp72 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::OnBackButton* temp73 = ::g::Fuse::Triggers::OnBackButton::New3();
    temp_eb7 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp24);
    ::g::HomeScreen* temp74 = ::g::HomeScreen::New2();
    ::g::Fuse::Reactive::DataBinding* temp75 = ::g::Fuse::Reactive::DataBinding::New1(temp9_Value_inst, (uObject*)temp25, 3);
    SourceLineNumber(1);
    SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    temp26->LineNumber(2);
    temp26->FileName(::STRINGS[1/*"Pages/Login...*/]);
    temp26->SourceLineNumber(2);
    temp26->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    temp26->File(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::LoginPage86f89c18()));
    temp27->SourceLineNumber(6);
    temp27->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), PAGENAME);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), transitionScaleGuide);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), loading);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), changeWidth);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), loadCircle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), scaleAndFade);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), showLoggedIn);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), loggedOutView);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp72);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp9);
    uPtr(PAGENAME)->Alignment(10);
    uPtr(PAGENAME)->Visibility(2);
    uPtr(PAGENAME)->Name(LoginPage::__selector7_);
    uPtr(PAGENAME)->SourceLineNumber(8);
    uPtr(PAGENAME)->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(PAGENAME)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp28);
    temp10->SourceLineNumber(8);
    temp10->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    uPtr(transitionScaleGuide)->Aspect(1.0f);
    uPtr(transitionScaleGuide)->HitTestMode(0);
    uPtr(transitionScaleGuide)->Width(::g::Uno::UX::Size__New1(500.0f, 4));
    uPtr(transitionScaleGuide)->Height(::g::Uno::UX::Size__New1(500.0f, 4));
    uPtr(transitionScaleGuide)->Alignment(10);
    uPtr(transitionScaleGuide)->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(transitionScaleGuide)->BoxSizing(4);
    uPtr(transitionScaleGuide)->Name(LoginPage::__selector8_);
    uPtr(transitionScaleGuide)->SourceLineNumber(9);
    uPtr(transitionScaleGuide)->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    uPtr(loading)->Name(LoginPage::__selector9_);
    uPtr(loading)->SourceLineNumber(11);
    uPtr(loading)->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loading)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loading)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loading)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loading)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loading)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loading)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loading)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loading)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp32);
    temp->DelayBack(0.0);
    temp11->SourceLineNumber(12);
    temp11->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    temp1->DelayBack(0.0);
    temp12->SourceLineNumber(13);
    temp12->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    temp2->DelayBack(0.0);
    temp2->Delay(2.5);
    temp13->SourceLineNumber(15);
    temp13->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    temp3->Delay(2.9);
    temp14->SourceLineNumber(16);
    temp14->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    uPtr(changeWidth)->Name(LoginPage::__selector10_);
    uPtr(changeWidth)->SourceLineNumber(20);
    uPtr(changeWidth)->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(changeWidth)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp33);
    ::g::Fuse::Animations::Change__set_Value_fn(temp33, uCRef(::g::Uno::UX::Size__New1(60.0f, 1)));
    temp33->Duration(0.5);
    temp33->DurationBack(0.0);
    temp33->Easing(::g::Fuse::Animations::Easing::CircularInOut());
    uPtr(loadCircle)->Name(LoginPage::__selector11_);
    uPtr(loadCircle)->SourceLineNumber(23);
    uPtr(loadCircle)->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loadCircle)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loadCircle)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loadCircle)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loadCircle)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loadCircle)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp38);
    ::g::Fuse::Animations::Change__set_Value_fn(temp34, uCRef(0.0f));
    temp34->Duration(0.2);
    temp34->DurationBack(0.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp35, uCRef(1.0f));
    temp35->Duration(0.3);
    temp35->DurationBack(0.0);
    temp35->DelayBack(0.0);
    temp35->Delay(0.2);
    ::g::Fuse::Animations::Change__set_Value_fn(temp36, uCRef(::g::Fuse::Drawing::Colors::White()));
    temp36->Duration(1.0);
    temp36->Easing(::g::Fuse::Animations::Easing::QuadraticInOut());
    temp37->Frequency(2.0);
    temp37->Target(loadingCircle);
    temp38->Low(30.0f);
    temp38->High(300.0f);
    temp38->Frequency(0.7);
    uPtr(scaleAndFade)->Name(LoginPage::__selector12_);
    uPtr(scaleAndFade)->SourceLineNumber(30);
    uPtr(scaleAndFade)->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(scaleAndFade)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(scaleAndFade)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(scaleAndFade)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(scaleAndFade)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp42);
    ::g::Fuse::Animations::Change__set_Value_fn(temp39, uCRef(0.0f));
    temp39->Duration(0.1);
    ::g::Fuse::Animations::Change__set_Value_fn(temp40, uCRef(1.0f));
    temp40->Duration(0.01);
    ::g::Fuse::Animations::Change__set_Value_fn(temp41, uCRef(0.0f));
    temp41->Duration(0.01);
    temp42->Factor(3.0f);
    temp42->Duration(0.7);
    temp42->DurationBack(0.0);
    temp42->Delay(0.01);
    temp42->RelativeTo(::g::Fuse::Elements::TranslationModes::SizeFactor());
    temp42->RelativeNode(transitionScaleGuide);
    temp42->Target(loadingButton);
    temp42->Easing(::g::Fuse::Animations::Easing::ExponentialInOut());
    uPtr(showLoggedIn)->Name(LoginPage::__selector13_);
    uPtr(showLoggedIn)->SourceLineNumber(40);
    uPtr(showLoggedIn)->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showLoggedIn)->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp43);
    temp43->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp43->Alignment(0);
    temp43->SourceLineNumber(41);
    temp43->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp44);
    temp44->Alignment(0);
    temp44->SourceLineNumber(42);
    temp44->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp44, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), router1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp4);
    uPtr(router1)->IsMasterRouter(false);
    uPtr(router1)->Name(LoginPage::__selector14_);
    uPtr(router1)->SourceLineNumber(43);
    uPtr(router1)->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    temp4->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp4->Alignment(0);
    temp4->SourceLineNumber(44);
    temp4->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp4, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), login);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), s_inq01);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), c_menu);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), c_gr);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), c_appr);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), c_inq);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), c_po);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp45);
    temp15->SourceLineNumber(44);
    temp15->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    uPtr(loggedOutView)->Rows(uString::Const("1.5*,auto,auto, 1*"));
    uPtr(loggedOutView)->Visibility(0);
    uPtr(loggedOutView)->Padding(::g::Uno::Float4__New2(40.0f, 0.0f, 40.0f, 0.0f));
    uPtr(loggedOutView)->Name(LoginPage::__selector15_);
    uPtr(loggedOutView)->SourceLineNumber(57);
    uPtr(loggedOutView)->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loggedOutView)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loggedOutView)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loggedOutView)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), signin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loggedOutView)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), mark);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loggedOutView)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), loginArea);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loggedOutView)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), autologin);
    temp46->SourceLineNumber(58);
    temp46->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp50);
    temp47->Y(-200.0f);
    temp47->Duration(0.6);
    temp47->Target(mark);
    temp47->Easing(::g::Fuse::Animations::Easing::ExponentialInOut());
    temp48->Y(-200.0f);
    temp48->Duration(0.6);
    temp48->Target(loginArea);
    temp48->Easing(::g::Fuse::Animations::Easing::ExponentialInOut());
    temp49->Y(-200.0f);
    temp49->Duration(0.6);
    temp49->Target(autologin);
    temp49->Easing(::g::Fuse::Animations::Easing::ExponentialInOut());
    temp50->Y(-200.0f);
    temp50->Duration(0.6);
    temp50->Target(signin);
    temp50->Easing(::g::Fuse::Animations::Easing::ExponentialInOut());
    temp51->Color(::g::Uno::Float4__New2(0.9882353f, 0.9882353f, 0.9882353f, 0.1764706f));
    temp51->Alignment(0);
    temp51->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp51->Layer(1);
    temp51->SourceLineNumber(65);
    temp51->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Fills()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL)), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Stops()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof(), NULL)), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Stops()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof(), NULL)), temp54);
    temp53->Offset(0.0f);
    temp53->Color(::g::Uno::Float4__New2(0.5176471f, 0.345098f, 0.8196079f, 1.0f));
    temp54->Offset(1.0f);
    temp54->Color(::g::Uno::Float4__New2(0.4039216f, 0.5686275f, 0.8980392f, 1.0f));
    uPtr(signin)->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    uPtr(signin)->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    uPtr(signin)->Name(LoginPage::__selector16_);
    uPtr(signin)->SourceLineNumber(73);
    uPtr(signin)->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Fuse::Controls::Grid::SetRow(signin, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(signin)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), text);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(signin)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), loadingCirclePanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(signin)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(signin)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), rectNormalScale);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(signin)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), loadingButton);
    uPtr(text)->Value(uString::Const("\353\241\234\352\267\270\354\235\270"));
    uPtr(text)->FontSize(18.0f);
    uPtr(text)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(text)->Alignment(10);
    uPtr(text)->Name(LoginPage::__selector17_);
    uPtr(text)->SourceLineNumber(74);
    uPtr(text)->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    uPtr(text)->Font(::g::MainView::AGOTHIC14());
    uPtr(loadingCirclePanel)->Name(LoginPage::__selector18_);
    uPtr(loadingCirclePanel)->SourceLineNumber(75);
    uPtr(loadingCirclePanel)->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loadingCirclePanel)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), loadingCircle);
    uPtr(loadingCircle)->StartAngleDegrees(0.0f);
    uPtr(loadingCircle)->LengthAngleDegrees(90.0f);
    uPtr(loadingCircle)->Width(::g::Uno::UX::Size__New1(70.0f, 4));
    uPtr(loadingCircle)->Height(::g::Uno::UX::Size__New1(70.0f, 4));
    uPtr(loadingCircle)->Opacity(0.0f);
    uPtr(loadingCircle)->Name(LoginPage::__selector19_);
    uPtr(loadingCircle)->SourceLineNumber(76);
    uPtr(loadingCircle)->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loadingCircle)->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp55);
    temp55->Width(1.0f);
    temp55->Brush(temp56);
    temp57->SourceLineNumber(80);
    temp57->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    temp57->add_Handler(uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb6)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb6);
    temp58->SourceLineNumber(81);
    temp58->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    temp58->Target((uObject*)loading);
    temp16->SourceLineNumber(80);
    temp16->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    uPtr(rectNormalScale)->CornerRadius(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f));
    uPtr(rectNormalScale)->Color(::g::Uno::Float4__New2(0.2784314f, 0.2509804f, 0.7058824f, 1.0f));
    uPtr(rectNormalScale)->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    uPtr(rectNormalScale)->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    uPtr(rectNormalScale)->Name(LoginPage::__selector20_);
    uPtr(rectNormalScale)->SourceLineNumber(83);
    uPtr(rectNormalScale)->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    uPtr(loadingButton)->Color(::g::Uno::Float4__New2(0.2784314f, 0.2509804f, 0.7058824f, 1.0f));
    uPtr(loadingButton)->Width(::g::Uno::UX::Size__New1(240.0f, 1));
    uPtr(loadingButton)->Height(::g::Uno::UX::Size__New1(240.0f, 1));
    uPtr(loadingButton)->Alignment(4);
    uPtr(loadingButton)->Opacity(0.0f);
    uPtr(loadingButton)->Layer(3);
    uPtr(loadingButton)->Name(LoginPage::__selector21_);
    uPtr(loadingButton)->SourceLineNumber(84);
    uPtr(loadingButton)->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loadingButton)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp59);
    temp59->Factor(0.5f);
    temp59->SourceLineNumber(85);
    temp59->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    uPtr(mark)->Margin(::g::Uno::Float4__New2(40.0f, 40.0f, 40.0f, 40.0f));
    uPtr(mark)->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(mark)->Name(LoginPage::__selector22_);
    uPtr(mark)->SourceLineNumber(91);
    uPtr(mark)->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Fuse::Controls::Grid::SetRow(mark, 0);
    uPtr(mark)->File(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::networks_logo35f8c6cab()));
    uPtr(loginArea)->RowCount(2);
    uPtr(loginArea)->Columns(uString::Const("auto,1*"));
    uPtr(loginArea)->Height(::g::Uno::UX::Size__New1(140.0f, 1));
    uPtr(loginArea)->MaxWidth(::g::Uno::UX::Size__New1(400.0f, 1));
    uPtr(loginArea)->Padding(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 10.0f));
    uPtr(loginArea)->Name(LoginPage::__selector23_);
    uPtr(loginArea)->SourceLineNumber(93);
    uPtr(loginArea)->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Fuse::Controls::Grid::SetRow(loginArea, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp63);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp66);
    temp5->FontSize(13.0f);
    temp5->TextColor(::g::Uno::Float4__New2(0.8470588f, 0.8431373f, 0.9137255f, 1.0f));
    temp5->Alignment(8);
    temp5->Visibility(2);
    temp5->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 5.0f, 0.0f));
    temp5->SourceLineNumber(94);
    temp5->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp5, 1);
    temp5->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp60);
    temp17->SourceLineNumber(94);
    temp17->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    temp61->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp61->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp61->Alignment(1);
    temp61->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 30.0f, 0.0f));
    temp61->SourceLineNumber(95);
    temp61->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp61, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp61, 0);
    temp61->File(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::user_iconb39fb376()));
    temp6->PlaceholderText(uString::Const("ID"));
    temp6->PlaceholderColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp6->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp6->CaretColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp6->AutoCapitalizationHint(1);
    temp6->SourceLineNumber(98);
    temp6->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp6, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp6, 1);
    temp6->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp62);
    temp18->SourceLineNumber(98);
    temp18->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    temp63->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp63->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp63->Alignment(12);
    temp63->SourceLineNumber(99);
    temp63->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp63, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp63, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp63, 2);
    temp64->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp64->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp64->Alignment(1);
    temp64->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 30.0f, 0.0f));
    temp64->SourceLineNumber(101);
    temp64->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp64, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp64, 0);
    temp64->File(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::password_icon1959b014()));
    temp7->IsPassword(true);
    temp7->PlaceholderText(uString::Const("PASSWORD"));
    temp7->PlaceholderColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp7->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp7->CaretColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp7->SourceLineNumber(102);
    temp7->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp7, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp7, 1);
    temp7->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp65);
    temp19->SourceLineNumber(102);
    temp19->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    temp66->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp66->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp66->Alignment(12);
    temp66->SourceLineNumber(103);
    temp66->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp66, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp66, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp66, 2);
    uPtr(autologin)->Name(LoginPage::__selector24_);
    uPtr(autologin)->SourceLineNumber(106);
    uPtr(autologin)->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(autologin)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), toggle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(autologin)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(autologin)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), background);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(autologin)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp70);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(autologin)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), auto_login);
    uPtr(toggle)->Name(LoginPage::__selector25_);
    uPtr(toggle)->SourceLineNumber(132);
    uPtr(toggle)->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(toggle)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp67);
    temp20->SourceLineNumber(132);
    temp20->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    temp8->SourceLineNumber(134);
    temp8->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp68);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp69);
    ::g::Fuse::Animations::Change__set_Value_fn(temp68, uCRef(::g::Uno::Float4__New2(0.4039216f, 0.5686275f, 0.8980392f, 1.0f)));
    temp68->Duration(0.2);
    temp22->SourceLineNumber(134);
    temp22->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    temp21->SourceLineNumber(134);
    temp21->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    uPtr(background)->Color(::g::Uno::Float4__New2(0.5176471f, 0.345098f, 0.8196079f, 1.0f));
    uPtr(background)->Visibility(2);
    uPtr(background)->Name(LoginPage::__selector26_);
    uPtr(background)->SourceLineNumber(138);
    uPtr(background)->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    temp70->Value(uString::Const("ID/PW \354\240\200\354\236\245"));
    temp70->FontSize(13.0f);
    temp70->TextColor(::g::Uno::Float4__New2(0.8470588f, 0.8431373f, 0.9137255f, 1.0f));
    temp70->Alignment(8);
    temp70->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 5.0f, 0.0f));
    temp70->SourceLineNumber(139);
    temp70->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp70, 1);
    temp70->Font(::g::MainView::AGOTHIC14());
    uPtr(auto_login)->FontSize(13.0f);
    uPtr(auto_login)->TextColor(::g::Uno::Float4__New2(0.8470588f, 0.8431373f, 0.9137255f, 1.0f));
    uPtr(auto_login)->Alignment(8);
    uPtr(auto_login)->Visibility(2);
    uPtr(auto_login)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 5.0f, 0.0f));
    uPtr(auto_login)->Name(LoginPage::__selector27_);
    uPtr(auto_login)->SourceLineNumber(140);
    uPtr(auto_login)->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(auto_login, 1);
    uPtr(auto_login)->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(auto_login)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp71);
    temp23->SourceLineNumber(140);
    temp23->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    temp72->SourceLineNumber(144);
    temp72->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp72->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp73);
    temp73->SourceLineNumber(145);
    temp73->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    temp73->add_Handler(uDelegate::New(::g::Fuse::Triggers::KeyPressHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb7)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp73->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb7);
    temp24->SourceLineNumber(145);
    temp24->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    temp9->Bypass(1);
    temp9->SourceLineNumber(147);
    temp9->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp74);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp75);
    temp74->Type(0);
    temp74->SourceLineNumber(148);
    temp74->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    temp25->SourceLineNumber(147);
    temp25->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), PAGENAME);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), transitionScaleGuide);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), loading);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), changeWidth);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), loadCircle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), scaleAndFade);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), showLoggedIn);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), router1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), loggedOutView);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), signin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), text);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), loadingCirclePanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), loadingCircle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), rectNormalScale);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), loadingButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), mark);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), loginArea);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), autologin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), toggle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), background);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), auto_login);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp27);
}

// public LoginPage New(Fuse.Navigation.Router router) [static]
LoginPage* LoginPage::New5(::g::Fuse::Navigation::Router* router2)
{
    LoginPage* obj1 = (LoginPage*)uNew(LoginPage_typeof());
    obj1->ctor_8(router2);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/.uno/ux15/LoginPage.g.uno
// -----------------------------------------------------------

// public partial sealed class LoginPage.Template
// {
// static Template()
static void LoginPage__Template__cctor__fn(uType* __type)
{
    LoginPage__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"login"*/]);
}

static void LoginPage__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("login");
    ::STRINGS[1] = uString::Const("Pages/LoginPage.ux");
    type->SetFields(2,
        ::g::LoginPage_typeof(), offsetof(LoginPage__Template, __parent1), uFieldFlagsWeak,
        ::g::LoginPage_typeof(), offsetof(LoginPage__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage__Template::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* LoginPage__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(LoginPage__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("LoginPage.Template", options);
    type->fp_build_ = LoginPage__Template_build;
    type->fp_cctor_ = LoginPage__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))LoginPage__Template__New1_fn;
    return type;
}

// public Template(LoginPage parent, LoginPage parentInstance)
void LoginPage__Template__ctor_1_fn(LoginPage__Template* __this, ::g::LoginPage* parent, ::g::LoginPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void LoginPage__Template__New1_fn(LoginPage__Template* __this, uObject** __retval)
{
    ::g::LoginPage* __self1 = ::g::LoginPage::New5(uPtr(__this->__parent1)->router);
    __self1->Name(LoginPage__Template::__selector0_);
    __self1->SourceLineNumber(45);
    __self1->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    return *__retval = __self1, void();
}

// public Template New(LoginPage parent, LoginPage parentInstance)
void LoginPage__Template__New2_fn(::g::LoginPage* parent, ::g::LoginPage* parentInstance, LoginPage__Template** __retval)
{
    *__retval = LoginPage__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector LoginPage__Template::__selector0_;

// public Template(LoginPage parent, LoginPage parentInstance) [instance]
void LoginPage__Template::ctor_1(::g::LoginPage* parent, ::g::LoginPage* parentInstance)
{
    ctor_(::STRINGS[0/*"login"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(LoginPage parent, LoginPage parentInstance) [static]
LoginPage__Template* LoginPage__Template::New2(::g::LoginPage* parent, ::g::LoginPage* parentInstance)
{
    LoginPage__Template* obj1 = (LoginPage__Template*)uNew(LoginPage__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/.uno/ux15/LoginPage.g.uno
// -----------------------------------------------------------

// public partial sealed class LoginPage.Template1
// {
// static Template1()
static void LoginPage__Template1__cctor__fn(uType* __type)
{
    LoginPage__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"s_inq01"*/]);
}

static void LoginPage__Template1_build(uType* type)
{
    ::STRINGS[2] = uString::Const("s_inq01");
    ::STRINGS[1] = uString::Const("Pages/LoginPage.ux");
    type->SetFields(2,
        ::g::LoginPage_typeof(), offsetof(LoginPage__Template1, __parent1), uFieldFlagsWeak,
        ::g::LoginPage_typeof(), offsetof(LoginPage__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage__Template1::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* LoginPage__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(LoginPage__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("LoginPage.Template1", options);
    type->fp_build_ = LoginPage__Template1_build;
    type->fp_cctor_ = LoginPage__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))LoginPage__Template1__New1_fn;
    return type;
}

// public Template1(LoginPage parent, LoginPage parentInstance)
void LoginPage__Template1__ctor_1_fn(LoginPage__Template1* __this, ::g::LoginPage* parent, ::g::LoginPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void LoginPage__Template1__New1_fn(LoginPage__Template1* __this, uObject** __retval)
{
    ::g::s_inq01* __self1 = ::g::s_inq01::New5(uPtr(__this->__parent1)->router1);
    __self1->Name(LoginPage__Template1::__selector0_);
    __self1->SourceLineNumber(46);
    __self1->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    return *__retval = __self1, void();
}

// public Template1 New(LoginPage parent, LoginPage parentInstance)
void LoginPage__Template1__New2_fn(::g::LoginPage* parent, ::g::LoginPage* parentInstance, LoginPage__Template1** __retval)
{
    *__retval = LoginPage__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector LoginPage__Template1::__selector0_;

// public Template1(LoginPage parent, LoginPage parentInstance) [instance]
void LoginPage__Template1::ctor_1(::g::LoginPage* parent, ::g::LoginPage* parentInstance)
{
    ctor_(::STRINGS[2/*"s_inq01"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(LoginPage parent, LoginPage parentInstance) [static]
LoginPage__Template1* LoginPage__Template1::New2(::g::LoginPage* parent, ::g::LoginPage* parentInstance)
{
    LoginPage__Template1* obj1 = (LoginPage__Template1*)uNew(LoginPage__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/.uno/ux15/LoginPage.g.uno
// -----------------------------------------------------------

// public partial sealed class LoginPage.Template2
// {
// static Template2()
static void LoginPage__Template2__cctor__fn(uType* __type)
{
    LoginPage__Template2::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"c_menu"*/]);
}

static void LoginPage__Template2_build(uType* type)
{
    ::STRINGS[3] = uString::Const("c_menu");
    ::STRINGS[1] = uString::Const("Pages/LoginPage.ux");
    type->SetFields(2,
        ::g::LoginPage_typeof(), offsetof(LoginPage__Template2, __parent1), uFieldFlagsWeak,
        ::g::LoginPage_typeof(), offsetof(LoginPage__Template2, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage__Template2::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* LoginPage__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(LoginPage__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("LoginPage.Template2", options);
    type->fp_build_ = LoginPage__Template2_build;
    type->fp_cctor_ = LoginPage__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))LoginPage__Template2__New1_fn;
    return type;
}

// public Template2(LoginPage parent, LoginPage parentInstance)
void LoginPage__Template2__ctor_1_fn(LoginPage__Template2* __this, ::g::LoginPage* parent, ::g::LoginPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void LoginPage__Template2__New1_fn(LoginPage__Template2* __this, uObject** __retval)
{
    ::g::c_menu* __self1 = ::g::c_menu::New5(uPtr(__this->__parent1)->router1);
    __self1->Name(LoginPage__Template2::__selector0_);
    __self1->SourceLineNumber(47);
    __self1->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    return *__retval = __self1, void();
}

// public Template2 New(LoginPage parent, LoginPage parentInstance)
void LoginPage__Template2__New2_fn(::g::LoginPage* parent, ::g::LoginPage* parentInstance, LoginPage__Template2** __retval)
{
    *__retval = LoginPage__Template2::New2(parent, parentInstance);
}

::g::Uno::UX::Selector LoginPage__Template2::__selector0_;

// public Template2(LoginPage parent, LoginPage parentInstance) [instance]
void LoginPage__Template2::ctor_1(::g::LoginPage* parent, ::g::LoginPage* parentInstance)
{
    ctor_(::STRINGS[3/*"c_menu"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template2 New(LoginPage parent, LoginPage parentInstance) [static]
LoginPage__Template2* LoginPage__Template2::New2(::g::LoginPage* parent, ::g::LoginPage* parentInstance)
{
    LoginPage__Template2* obj1 = (LoginPage__Template2*)uNew(LoginPage__Template2_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/.uno/ux15/LoginPage.g.uno
// -----------------------------------------------------------

// public partial sealed class LoginPage.Template3
// {
// static Template3()
static void LoginPage__Template3__cctor__fn(uType* __type)
{
    LoginPage__Template3::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"c_gr"*/]);
}

static void LoginPage__Template3_build(uType* type)
{
    ::STRINGS[4] = uString::Const("c_gr");
    ::STRINGS[1] = uString::Const("Pages/LoginPage.ux");
    type->SetFields(2,
        ::g::LoginPage_typeof(), offsetof(LoginPage__Template3, __parent1), uFieldFlagsWeak,
        ::g::LoginPage_typeof(), offsetof(LoginPage__Template3, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage__Template3::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* LoginPage__Template3_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(LoginPage__Template3);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("LoginPage.Template3", options);
    type->fp_build_ = LoginPage__Template3_build;
    type->fp_cctor_ = LoginPage__Template3__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))LoginPage__Template3__New1_fn;
    return type;
}

// public Template3(LoginPage parent, LoginPage parentInstance)
void LoginPage__Template3__ctor_1_fn(LoginPage__Template3* __this, ::g::LoginPage* parent, ::g::LoginPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void LoginPage__Template3__New1_fn(LoginPage__Template3* __this, uObject** __retval)
{
    ::g::c_gr* __self1 = ::g::c_gr::New5(uPtr(__this->__parent1)->router1);
    __self1->Name(LoginPage__Template3::__selector0_);
    __self1->SourceLineNumber(48);
    __self1->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    return *__retval = __self1, void();
}

// public Template3 New(LoginPage parent, LoginPage parentInstance)
void LoginPage__Template3__New2_fn(::g::LoginPage* parent, ::g::LoginPage* parentInstance, LoginPage__Template3** __retval)
{
    *__retval = LoginPage__Template3::New2(parent, parentInstance);
}

::g::Uno::UX::Selector LoginPage__Template3::__selector0_;

// public Template3(LoginPage parent, LoginPage parentInstance) [instance]
void LoginPage__Template3::ctor_1(::g::LoginPage* parent, ::g::LoginPage* parentInstance)
{
    ctor_(::STRINGS[4/*"c_gr"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template3 New(LoginPage parent, LoginPage parentInstance) [static]
LoginPage__Template3* LoginPage__Template3::New2(::g::LoginPage* parent, ::g::LoginPage* parentInstance)
{
    LoginPage__Template3* obj1 = (LoginPage__Template3*)uNew(LoginPage__Template3_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/.uno/ux15/LoginPage.g.uno
// -----------------------------------------------------------

// public partial sealed class LoginPage.Template4
// {
// static Template4()
static void LoginPage__Template4__cctor__fn(uType* __type)
{
    LoginPage__Template4::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"c_appr"*/]);
}

static void LoginPage__Template4_build(uType* type)
{
    ::STRINGS[5] = uString::Const("c_appr");
    ::STRINGS[1] = uString::Const("Pages/LoginPage.ux");
    type->SetFields(2,
        ::g::LoginPage_typeof(), offsetof(LoginPage__Template4, __parent1), uFieldFlagsWeak,
        ::g::LoginPage_typeof(), offsetof(LoginPage__Template4, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage__Template4::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* LoginPage__Template4_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(LoginPage__Template4);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("LoginPage.Template4", options);
    type->fp_build_ = LoginPage__Template4_build;
    type->fp_cctor_ = LoginPage__Template4__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))LoginPage__Template4__New1_fn;
    return type;
}

// public Template4(LoginPage parent, LoginPage parentInstance)
void LoginPage__Template4__ctor_1_fn(LoginPage__Template4* __this, ::g::LoginPage* parent, ::g::LoginPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void LoginPage__Template4__New1_fn(LoginPage__Template4* __this, uObject** __retval)
{
    ::g::c_appr* __self1 = ::g::c_appr::New5(uPtr(__this->__parent1)->router1);
    __self1->Name(LoginPage__Template4::__selector0_);
    __self1->SourceLineNumber(49);
    __self1->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    return *__retval = __self1, void();
}

// public Template4 New(LoginPage parent, LoginPage parentInstance)
void LoginPage__Template4__New2_fn(::g::LoginPage* parent, ::g::LoginPage* parentInstance, LoginPage__Template4** __retval)
{
    *__retval = LoginPage__Template4::New2(parent, parentInstance);
}

::g::Uno::UX::Selector LoginPage__Template4::__selector0_;

// public Template4(LoginPage parent, LoginPage parentInstance) [instance]
void LoginPage__Template4::ctor_1(::g::LoginPage* parent, ::g::LoginPage* parentInstance)
{
    ctor_(::STRINGS[5/*"c_appr"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template4 New(LoginPage parent, LoginPage parentInstance) [static]
LoginPage__Template4* LoginPage__Template4::New2(::g::LoginPage* parent, ::g::LoginPage* parentInstance)
{
    LoginPage__Template4* obj1 = (LoginPage__Template4*)uNew(LoginPage__Template4_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/.uno/ux15/LoginPage.g.uno
// -----------------------------------------------------------

// public partial sealed class LoginPage.Template5
// {
// static Template5()
static void LoginPage__Template5__cctor__fn(uType* __type)
{
    LoginPage__Template5::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"c_inq"*/]);
}

static void LoginPage__Template5_build(uType* type)
{
    ::STRINGS[6] = uString::Const("c_inq");
    ::STRINGS[1] = uString::Const("Pages/LoginPage.ux");
    type->SetFields(2,
        ::g::LoginPage_typeof(), offsetof(LoginPage__Template5, __parent1), uFieldFlagsWeak,
        ::g::LoginPage_typeof(), offsetof(LoginPage__Template5, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage__Template5::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* LoginPage__Template5_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(LoginPage__Template5);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("LoginPage.Template5", options);
    type->fp_build_ = LoginPage__Template5_build;
    type->fp_cctor_ = LoginPage__Template5__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))LoginPage__Template5__New1_fn;
    return type;
}

// public Template5(LoginPage parent, LoginPage parentInstance)
void LoginPage__Template5__ctor_1_fn(LoginPage__Template5* __this, ::g::LoginPage* parent, ::g::LoginPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void LoginPage__Template5__New1_fn(LoginPage__Template5* __this, uObject** __retval)
{
    ::g::c_inq* __self1 = ::g::c_inq::New5(uPtr(__this->__parent1)->router1);
    __self1->Name(LoginPage__Template5::__selector0_);
    __self1->SourceLineNumber(50);
    __self1->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    return *__retval = __self1, void();
}

// public Template5 New(LoginPage parent, LoginPage parentInstance)
void LoginPage__Template5__New2_fn(::g::LoginPage* parent, ::g::LoginPage* parentInstance, LoginPage__Template5** __retval)
{
    *__retval = LoginPage__Template5::New2(parent, parentInstance);
}

::g::Uno::UX::Selector LoginPage__Template5::__selector0_;

// public Template5(LoginPage parent, LoginPage parentInstance) [instance]
void LoginPage__Template5::ctor_1(::g::LoginPage* parent, ::g::LoginPage* parentInstance)
{
    ctor_(::STRINGS[6/*"c_inq"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template5 New(LoginPage parent, LoginPage parentInstance) [static]
LoginPage__Template5* LoginPage__Template5::New2(::g::LoginPage* parent, ::g::LoginPage* parentInstance)
{
    LoginPage__Template5* obj1 = (LoginPage__Template5*)uNew(LoginPage__Template5_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/.uno/ux15/LoginPage.g.uno
// -----------------------------------------------------------

// public partial sealed class LoginPage.Template6
// {
// static Template6()
static void LoginPage__Template6__cctor__fn(uType* __type)
{
    LoginPage__Template6::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"c_po"*/]);
}

static void LoginPage__Template6_build(uType* type)
{
    ::STRINGS[7] = uString::Const("c_po");
    ::STRINGS[1] = uString::Const("Pages/LoginPage.ux");
    type->SetFields(2,
        ::g::LoginPage_typeof(), offsetof(LoginPage__Template6, __parent1), uFieldFlagsWeak,
        ::g::LoginPage_typeof(), offsetof(LoginPage__Template6, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LoginPage__Template6::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* LoginPage__Template6_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(LoginPage__Template6);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("LoginPage.Template6", options);
    type->fp_build_ = LoginPage__Template6_build;
    type->fp_cctor_ = LoginPage__Template6__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))LoginPage__Template6__New1_fn;
    return type;
}

// public Template6(LoginPage parent, LoginPage parentInstance)
void LoginPage__Template6__ctor_1_fn(LoginPage__Template6* __this, ::g::LoginPage* parent, ::g::LoginPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void LoginPage__Template6__New1_fn(LoginPage__Template6* __this, uObject** __retval)
{
    ::g::c_po* __self1 = ::g::c_po::New5(uPtr(__this->__parent1)->router1);
    __self1->Name(LoginPage__Template6::__selector0_);
    __self1->SourceLineNumber(51);
    __self1->SourceFileName(::STRINGS[1/*"Pages/Login...*/]);
    return *__retval = __self1, void();
}

// public Template6 New(LoginPage parent, LoginPage parentInstance)
void LoginPage__Template6__New2_fn(::g::LoginPage* parent, ::g::LoginPage* parentInstance, LoginPage__Template6** __retval)
{
    *__retval = LoginPage__Template6::New2(parent, parentInstance);
}

::g::Uno::UX::Selector LoginPage__Template6::__selector0_;

// public Template6(LoginPage parent, LoginPage parentInstance) [instance]
void LoginPage__Template6::ctor_1(::g::LoginPage* parent, ::g::LoginPage* parentInstance)
{
    ctor_(::STRINGS[7/*"c_po"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template6 New(LoginPage parent, LoginPage parentInstance) [static]
LoginPage__Template6* LoginPage__Template6::New2(::g::LoginPage* parent, ::g::LoginPage* parentInstance)
{
    LoginPage__Template6* obj1 = (LoginPage__Template6*)uNew(LoginPage__Template6_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
