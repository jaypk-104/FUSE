// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.c_appr.h>
#include <_root.c_gr.h>
#include <_root.c_inq.h>
#include <_root.c_menu.h>
#include <_root.c_po.h>
#include <_root.ColorPalette.h>
#include <_root.deviceToast.h>
#include <_root.FuseUXKitsAlive_ColorPalette_res.h>
#include <_root.FuseUXKitsAlive_ColorThemes_res.h>
#include <_root.FuseUXKitsAlive_IconFont_res.h>
#include <_root.HSMRO_bundle.h>
#include <_root.LoginPage.h>
#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <_root.MainView.Template1.h>
#include <_root.MainView.Template2.h>
#include <_root.MainView.Template3.h>
#include <_root.MainView.Template4.h>
#include <_root.MainView.Template5.h>
#include <_root.MainView.Template6.h>
#include <_root.Qreader.h>
#include <_root.s_inq01.h>
#include <Alive.RadarPlot.h>
#include <Alive.TextStyles.h>
#include <Fuse.Alerts.NativeAlerts.h>
#include <Fuse.Android.StatusBarConfig.h>
#include <Fuse.Animations.AttractorConfig.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.AppBase.h>
#include <Fuse.BackgroundDownload.BackgroundDownloadModule.h>
#include <Fuse.Camera.Camera.h>
#include <Fuse.CameraRoll.CameraRoll.h>
#include <Fuse.Controls.BottomFrameBackground.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Navigator.h>
#include <Fuse.Controls.TopFrameBackground.h>
#include <Fuse.Drawing.BrushConverter.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.ITransformOrigin.h>
#include <Fuse.Elements.TransformOrigins.h>
#include <Fuse.Elements.TranslationModes.h>
#include <Fuse.FileSystem.FileSystemModule.h>
#include <Fuse.Font.h>
#include <Fuse.ImageTools.ImageTools.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.BackButtonAction.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DeviceCaps.h>
#include <Fuse.Reactive.FuseJS.DiagnosticsImplModule.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.FuseJS.InterApp.h>
#include <Fuse.Reactive.FuseJS.TimerModule.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.SystemFont.h>
#include <Fuse.Testing.UnoTestingHelper.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.GiveFocus.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Triggers.IScrolledLength.h>
#include <Fuse.Triggers.IScrolledLengths.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.WhileKeyboardVisible.h>
#include <Fuse.Vibration.VibrationModule.h>
#include <Fuse.Visual.h>
#include <Fuse.WebSocket.WebSocketClientModule.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Template.h>
static uString* STRINGS[8];

namespace g{

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/MainView.g.uno
// -----------------------------------------------------------------------------

// public partial sealed class MainView
// {
// static MainView()
static void MainView__cctor_1_fn(uType* __type)
{
    ::g::Uno::UX::Resource_typeof()->Init();
    ::g::Fuse::Reactive::DeviceCaps_typeof()->Init();
    ::g::Fuse::Animations::Easing_typeof()->Init();
    ::g::Fuse::Drawing::Colors_typeof()->Init();
    ::g::Fuse::Drawing::Brushes_typeof()->Init();
    ::g::Fuse::Elements::TransformOrigins_typeof()->Init();
    ::g::Fuse::Elements::TranslationModes_typeof()->Init();
    ::g::Fuse::TranslationModes_typeof()->Init();
    ::g::Fuse::Triggers::Actions::GiveFocus_typeof()->Init();
    ::g::Fuse::Triggers::LayoutTransition_typeof()->Init();
    ::g::Fuse::Triggers::WhileKeyboardVisible_typeof()->Init();
    ::g::Fuse::Triggers::IScrolledLengths_typeof()->Init();
    ::g::Fuse::Resources::MemoryPolicy_typeof()->Init();
    ::g::Fuse::Font_typeof()->Init();
    ::g::Fuse::ScalingModes_typeof()->Init();
    ::g::Alive::RadarPlot_typeof()->Init();
    ::g::Alive::TextStyles_typeof()->Init();
    ::g::LoginPage_typeof()->Init();
    ::g::ColorPalette_typeof()->Init();
    ::g::FuseUXKitsAlive_IconFont_res_typeof()->Init();
    ::g::FuseUXKitsAlive_ColorPalette_res_typeof()->Init();
    ::g::FuseUXKitsAlive_ColorThemes_res_typeof()->Init();
    ::g::HSMRO_bundle_typeof()->Init();
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 1, uString::Const("router"));
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("router"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Reactive::DeviceCaps::Device(), uString::Const("Device"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::Linear(), uString::Const("Linear"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticIn(), uString::Const("QuadraticIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticOut(), uString::Const("QuadraticOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticInOut(), uString::Const("QuadraticInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicIn(), uString::Const("CubicIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicOut(), uString::Const("CubicOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicInOut(), uString::Const("CubicInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticIn(), uString::Const("QuarticIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticOut(), uString::Const("QuarticOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticInOut(), uString::Const("QuarticInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticIn(), uString::Const("QuinticIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticOut(), uString::Const("QuinticOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticInOut(), uString::Const("QuinticInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalIn(), uString::Const("SinusoidalIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalOut(), uString::Const("SinusoidalOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalInOut(), uString::Const("SinusoidalInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialIn(), uString::Const("ExponentialIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialOut(), uString::Const("ExponentialOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialInOut(), uString::Const("ExponentialInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularIn(), uString::Const("CircularIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularOut(), uString::Const("CircularOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularInOut(), uString::Const("CircularInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticIn(), uString::Const("ElasticIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticOut(), uString::Const("ElasticOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticInOut(), uString::Const("ElasticInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackIn(), uString::Const("BackIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackOut(), uString::Const("BackOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackInOut(), uString::Const("BackInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceIn(), uString::Const("BounceIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceOut(), uString::Const("BounceOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceInOut(), uString::Const("BounceInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Transparent()), uString::Const("Transparent"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Transparent(), uString::Const("Transparent"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Black()), uString::Const("Black"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Black(), uString::Const("Black"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Silver()), uString::Const("Silver"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Silver(), uString::Const("Silver"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Gray()), uString::Const("Gray"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Gray(), uString::Const("Gray"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::White()), uString::Const("White"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::White(), uString::Const("White"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Maroon()), uString::Const("Maroon"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Maroon(), uString::Const("Maroon"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Red()), uString::Const("Red"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Red(), uString::Const("Red"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Purple()), uString::Const("Purple"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Purple(), uString::Const("Purple"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Fuchsia()), uString::Const("Fuchsia"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Fuchsia(), uString::Const("Fuchsia"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Green()), uString::Const("Green"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Green(), uString::Const("Green"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Lime()), uString::Const("Lime"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Lime(), uString::Const("Lime"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Olive()), uString::Const("Olive"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Olive(), uString::Const("Olive"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Yellow()), uString::Const("Yellow"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Yellow(), uString::Const("Yellow"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Navy()), uString::Const("Navy"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Navy(), uString::Const("Navy"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Blue()), uString::Const("Blue"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Blue(), uString::Const("Blue"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Teal()), uString::Const("Teal"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Teal(), uString::Const("Teal"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Aqua()), uString::Const("Aqua"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Aqua(), uString::Const("Aqua"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::TopLeft(), uString::Const("TopLeft"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Center(), uString::Const("Center"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Anchor(), uString::Const("Anchor"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::HorizontalBoxCenter(), uString::Const("HorizontalBoxCenter"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter(), uString::Const("VerticalBoxCenter"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::TransformOriginOffset(), uString::Const("TransformOriginOffset"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::PositionOffset(), uString::Const("PositionOffset"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::SizeFactor(), uString::Const("SizeFactor"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::Size(), uString::Const("Size"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Size(), uString::Const("Size"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::Actions::GiveFocus::Singleton(), uString::Const("GiveFocus"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange(), uString::Const("LayoutChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange(), uString::Const("LayoutChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange(), uString::Const("WorldPositionChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionChange(), uString::Const("PositionChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange(), uString::Const("SizeChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange(), uString::Const("SizeChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard(), uString::Const("Keyboard"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Points(), uString::Const("Points"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Pixels(), uString::Const("Pixels"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ContentSize(), uString::Const("ContentSize"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ScrollViewSize(), uString::Const("ScrollViewSize"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::PreloadRetain(), uString::Const("PreloadRetain"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadUnused(), uString::Const("UnloadUnused"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::QuickUnload(), uString::Const("QuickUnload"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadInBackgroundPolicy(), uString::Const("UnloadInBackground"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Thin(), uString::Const("Thin"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Light(), uString::Const("Light"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Regular(), uString::Const("Regular"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Medium(), uString::Const("Medium"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Bold(), uString::Const("Bold"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::ThinItalic(), uString::Const("ThinItalic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::LightItalic(), uString::Const("LightItalic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Italic(), uString::Const("Italic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::MediumItalic(), uString::Const("MediumItalic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::BoldItalic(), uString::Const("BoldItalic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::PlatformDefault(), uString::Const("PlatformDefault"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::ScalingModes::Identity(), uString::Const("Identity"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Local(), uString::Const("Local"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::ParentSize(), uString::Const("ParentSize"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Width(), uString::Const("Width"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Height(), uString::Const("Height"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Alive::RadarPlot::AliveElasticAttractor(), uString::Const("Alive.ElasticAttractor"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Alive::TextStyles::AliveRegularFont(), uString::Const("Alive.RegularFont"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Alive::TextStyles::AliveBoldFont(), uString::Const("Alive.BoldFont"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Alive::TextStyles::AliveMediumFont(), uString::Const("Alive.MediumFont"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::AGOTHIC14_, uString::Const("AGOTHIC14"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::JEJU_, uString::Const("JEJU"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::ZhongF_, uString::Const("ZhongF"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::SEOUL_, uString::Const("SEOUL"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::NOTO_M_, uString::Const("NOTO_M"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::NOTO_R_, uString::Const("NOTO_R"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::NOTO_KR_L_, uString::Const("NOTO_KR_L"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::NOTO_KR_B_, uString::Const("NOTO_KR_B"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::NOTO_KR_R_, uString::Const("NOTO_KR_R"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::NOTO_KR_T_, uString::Const("NOTO_KR_T"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::NOTO_KR_BK_, uString::Const("NOTO_KR_BK"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::FontAwesome_, uString::Const("FontAwesome"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::LoginPage::RobotoMedium(), uString::Const("RobotoMedium"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::ColorPalette::color0()), uString::Const("color0"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::ColorPalette::color1()), uString::Const("color1"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::ColorPalette::color2()), uString::Const("color2"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::ColorPalette::color3()), uString::Const("color3"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::ColorPalette::color4()), uString::Const("color4"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::FuseUXKitsAlive_IconFont_res::AliveIconFont(), uString::Const("Alive.IconFont"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveGray100()), uString::Const("Alive.Gray100"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveGray200()), uString::Const("Alive.Gray200"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveGray300()), uString::Const("Alive.Gray300"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveGray400()), uString::Const("Alive.Gray400"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveGray500()), uString::Const("Alive.Gray500"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveGray600()), uString::Const("Alive.Gray600"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveGradient1StartColor()), uString::Const("Alive.Gradient1.StartColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveGradient1EndColor()), uString::Const("Alive.Gradient1.EndColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveGradient2StartColor()), uString::Const("Alive.Gradient2.StartColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveGradient2EndColor()), uString::Const("Alive.Gradient2.EndColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveGradient3StartColor()), uString::Const("Alive.Gradient3.StartColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveGradient3EndColor()), uString::Const("Alive.Gradient3.EndColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveLightBlue()), uString::Const("Alive.Light.Blue"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveLightOrange()), uString::Const("Alive.Light.Orange"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveLightGreen()), uString::Const("Alive.Light.Green"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveLightPurple()), uString::Const("Alive.Light.Purple"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveLightYellow()), uString::Const("Alive.Light.Yellow"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveLightRed()), uString::Const("Alive.Light.Red"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveLightAccentColor()), uString::Const("Alive.Light.AccentColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveLightBodyTextColor()), uString::Const("Alive.Light.BodyTextColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveLightTitleTextColor()), uString::Const("Alive.Light.TitleTextColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveLightCardBackgroundColor()), uString::Const("Alive.Light.CardBackgroundColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveLightCardShadowColor()), uString::Const("Alive.Light.CardShadowColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveLightPrimaryBackgroundColor()), uString::Const("Alive.Light.PrimaryBackgroundColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveLightSecondaryBackgroundColor()), uString::Const("Alive.Light.SecondaryBackgroundColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveLightPageIndicatorDotColor()), uString::Const("Alive.Light.PageIndicatorDotColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveLightDrawerBackgroundColor()), uString::Const("Alive.Light.DrawerBackgroundColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveLightInactiveSwitchBackgroundColor()), uString::Const("Alive.Light.InactiveSwitchBackgroundColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveLightBubbleStrokeColor()), uString::Const("Alive.Light.BubbleStrokeColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveLightListViewItemColor()), uString::Const("Alive.Light.ListViewItemColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveLightListViewItemAlternateColor()), uString::Const("Alive.Light.ListViewItemAlternateColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveDarkRed()), uString::Const("Alive.Dark.Red"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveDarkBlue()), uString::Const("Alive.Dark.Blue"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveDarkOrange()), uString::Const("Alive.Dark.Orange"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveDarkGreen()), uString::Const("Alive.Dark.Green"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveDarkPurple()), uString::Const("Alive.Dark.Purple"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveDarkYellow()), uString::Const("Alive.Dark.Yellow"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveDarkAccentColor()), uString::Const("Alive.Dark.AccentColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveDarkBodyTextColor()), uString::Const("Alive.Dark.BodyTextColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveDarkTitleTextColor()), uString::Const("Alive.Dark.TitleTextColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveDarkCardBackgroundColor()), uString::Const("Alive.Dark.CardBackgroundColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveDarkCardShadowColor()), uString::Const("Alive.Dark.CardShadowColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveDarkPrimaryBackgroundColor()), uString::Const("Alive.Dark.PrimaryBackgroundColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveDarkSecondaryBackgroundColor()), uString::Const("Alive.Dark.SecondaryBackgroundColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveDarkPageIndicatorDotColor()), uString::Const("Alive.Dark.PageIndicatorDotColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveDarkDrawerBackgroundColor()), uString::Const("Alive.Dark.DrawerBackgroundColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveDarkInactiveSwitchBackgroundColor()), uString::Const("Alive.Dark.InactiveSwitchBackgroundColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveDarkBubbleStrokeColor()), uString::Const("Alive.Dark.BubbleStrokeColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveDarkListViewItemColor()), uString::Const("Alive.Dark.ListViewItemColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorPalette_res::AliveDarkListViewItemAlternateColor()), uString::Const("Alive.Dark.ListViewItemAlternateColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorThemes_res::AliveBlue()), uString::Const("Alive.Blue"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorThemes_res::AliveOrange()), uString::Const("Alive.Orange"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorThemes_res::AliveGreen()), uString::Const("Alive.Green"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorThemes_res::AlivePurple()), uString::Const("Alive.Purple"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorThemes_res::AliveYellow()), uString::Const("Alive.Yellow"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorThemes_res::AliveRed()), uString::Const("Alive.Red"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorThemes_res::AliveAccentColor()), uString::Const("Alive.AccentColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorThemes_res::AliveTitleTextColor()), uString::Const("Alive.TitleTextColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorThemes_res::AliveBodyTextColor()), uString::Const("Alive.BodyTextColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorThemes_res::AlivePrimaryBackgroundColor()), uString::Const("Alive.PrimaryBackgroundColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorThemes_res::AliveSecondaryBackgroundColor()), uString::Const("Alive.SecondaryBackgroundColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorThemes_res::AliveCardBackgroundColor()), uString::Const("Alive.CardBackgroundColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorThemes_res::AliveCardShadowColor()), uString::Const("Alive.CardShadowColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorThemes_res::AlivePageIndicatorDotColor()), uString::Const("Alive.PageIndicatorDotColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorThemes_res::AliveDrawerBackgroundColor()), uString::Const("Alive.DrawerBackgroundColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorThemes_res::AliveSliderThumbColor()), uString::Const("Alive.SliderThumbColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorThemes_res::AliveSliderThumbShadowColor()), uString::Const("Alive.SliderThumbShadowColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorThemes_res::AliveInactiveSwitchThumbColor()), uString::Const("Alive.InactiveSwitchThumbColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorThemes_res::AliveInactiveSwitchBackgroundColor()), uString::Const("Alive.InactiveSwitchBackgroundColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorThemes_res::AliveActiveSwitchThumbColor()), uString::Const("Alive.ActiveSwitchThumbColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorThemes_res::AliveActiveSwitchBackgroundColor()), uString::Const("Alive.ActiveSwitchBackgroundColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorThemes_res::AliveBubbleStrokeColor()), uString::Const("Alive.BubbleStrokeColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorThemes_res::AliveListViewItemColor()), uString::Const("Alive.ListViewItemColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::FuseUXKitsAlive_ColorThemes_res::AliveListViewItemAlternateColor()), uString::Const("Alive.ListViewItemAlternateColor"));
    MainView::AGOTHIC14_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::AGOTHIC140aeefaa8()));
    MainView::JEJU_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::JejuGothic11b3500e()));
    MainView::ZhongF_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::ZhongFd8dd876a()));
    MainView::SEOUL_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::SeoulNamsanMb6e7a2cd()));
    MainView::NOTO_M_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::NotoSansMedium47781653()));
    MainView::NOTO_R_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::NotoSansRegularef1fa204()));
    MainView::NOTO_KR_L_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::NotoSansKRLight82e02040()));
    MainView::NOTO_KR_B_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::NotoSansKRMedium7891a971()));
    MainView::NOTO_KR_R_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::NotoSansKRRegular0990e8a4()));
    MainView::NOTO_KR_T_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::NotoSansKRThin33c3a98b()));
    MainView::NOTO_KR_BK_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::NotoSansKRBlack0755504f()));
    MainView::FontAwesome_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::FontAwesomee6217ca5()));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::AGOTHIC14_, uString::Const("AGOTHIC14"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::JEJU_, uString::Const("JEJU"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::ZhongF_, uString::Const("ZhongF"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::SEOUL_, uString::Const("SEOUL"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::NOTO_M_, uString::Const("NOTO_M"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::NOTO_R_, uString::Const("NOTO_R"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::NOTO_KR_L_, uString::Const("NOTO_KR_L"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::NOTO_KR_B_, uString::Const("NOTO_KR_B"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::NOTO_KR_R_, uString::Const("NOTO_KR_R"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::NOTO_KR_T_, uString::Const("NOTO_KR_T"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::NOTO_KR_BK_, uString::Const("NOTO_KR_BK"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::FontAwesome_, uString::Const("FontAwesome"));
}

static void MainView_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof());
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::AppBase_type, interface0),
        ::g::Fuse::IRootVisualProvider_typeof(), offsetof(::g::Fuse::AppBase_type, interface1));
    type->SetFields(9,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(MainView, router), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(MainView, __g_nametable1), 0,
        ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule_typeof(), offsetof(MainView, FuseReactiveFuseJSDiagnosticsImplModule), 0,
        ::g::Fuse::Reactive::FuseJS::Http_typeof(), offsetof(MainView, FuseReactiveFuseJSHttp), 0,
        ::g::Fuse::Reactive::FuseJS::TimerModule_typeof(), offsetof(MainView, FuseReactiveFuseJSTimerModule), 0,
        ::g::Fuse::Reactive::FuseJS::InterApp_typeof(), offsetof(MainView, FuseReactiveFuseJSInterApp), 0,
        ::g::Fuse::Drawing::BrushConverter_typeof(), offsetof(MainView, FuseDrawingBrushConverter), 0,
        ::g::Fuse::Triggers::BusyTaskModule_typeof(), offsetof(MainView, FuseTriggersBusyTaskModule), 0,
        ::g::Fuse::Vibration::VibrationModule_typeof(), offsetof(MainView, FuseVibrationVibrationModule), 0,
        ::g::Fuse::Testing::UnoTestingHelper_typeof(), offsetof(MainView, FuseTestingUnoTestingHelper), 0,
        ::g::Fuse::FileSystem::FileSystemModule_typeof(), offsetof(MainView, FuseFileSystemFileSystemModule), 0,
        ::g::Fuse::Storage::StorageModule_typeof(), offsetof(MainView, FuseStorageStorageModule), 0,
        ::g::Fuse::WebSocket::WebSocketClientModule_typeof(), offsetof(MainView, FuseWebSocketWebSocketClientModule), 0,
        ::g::Fuse::ImageTools::ImageTools_typeof(), offsetof(MainView, FuseImageToolsImageTools), 0,
        ::g::Fuse::Camera::Camera_typeof(), offsetof(MainView, FuseCameraCamera), 0,
        ::g::Fuse::CameraRoll::CameraRoll_typeof(), offsetof(MainView, FuseCameraRollCameraRoll), 0,
        ::g::Fuse::Alerts::NativeAlerts_typeof(), offsetof(MainView, FuseAlertsNativeAlerts), 0,
        ::g::Fuse::BackgroundDownload::BackgroundDownloadModule_typeof(), offsetof(MainView, FuseBackgroundDownloadBackgroundDownloadModule), 0,
        ::g::Polyfills::Window::WindowModule_typeof(), offsetof(MainView, PolyfillsWindowWindowModule), 0,
        ::g::FuseJS::Globals_typeof(), offsetof(MainView, FuseJSGlobals), 0,
        ::g::FuseJS::Lifecycle_typeof(), offsetof(MainView, FuseJSLifecycle), 0,
        ::g::FuseJS::Environment_typeof(), offsetof(MainView, FuseJSEnvironment), 0,
        ::g::FuseJS::Base64_typeof(), offsetof(MainView, FuseJSBase64), 0,
        ::g::FuseJS::Bundle_typeof(), offsetof(MainView, FuseJSBundle), 0,
        ::g::FuseJS::FileReaderImpl_typeof(), offsetof(MainView, FuseJSFileReaderImpl), 0,
        ::g::FuseJS::UserEvents_typeof(), offsetof(MainView, FuseJSUserEvents), 0,
        ::g::Qreader_typeof(), offsetof(MainView, Qreader), 0,
        ::g::deviceToast_typeof(), offsetof(MainView, deviceToast), 0,
        ::g::Fuse::Font_typeof(), (uintptr_t)&MainView::AGOTHIC14_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&MainView::JEJU_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&MainView::ZhongF_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&MainView::SEOUL_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&MainView::NOTO_M_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&MainView::NOTO_R_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&MainView::NOTO_KR_L_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&MainView::NOTO_KR_B_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&MainView::NOTO_KR_R_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&MainView::NOTO_KR_T_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&MainView::NOTO_KR_BK_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&MainView::FontAwesome_, uFieldFlagsStatic,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&MainView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFields(12,
        new uField("AGOTHIC14", 37),
        new uField("FontAwesome", 48),
        new uField("JEJU", 38),
        new uField("NOTO_KR_B", 44),
        new uField("NOTO_KR_BK", 47),
        new uField("NOTO_KR_L", 43),
        new uField("NOTO_KR_R", 45),
        new uField("NOTO_KR_T", 46),
        new uField("NOTO_M", 41),
        new uField("NOTO_R", 42),
        new uField("SEOUL", 40),
        new uField("ZhongF", 39));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New2_fn, 0, true, type, 0));
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 51;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New2_fn;
    type->fp_cctor_ = MainView__cctor_1_fn;
    type->interface1.fp_get_Root = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::AppBase__FuseIRootVisualProviderget_Root_fn;
    type->interface0.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::AppBase__get_Properties_fn;
    return type;
}

// public MainView()
void MainView__ctor_4_fn(MainView* __this)
{
    __this->ctor_4();
}

// private void InitializeUX()
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New()
void MainView__New2_fn(MainView** __retval)
{
    *__retval = MainView::New2();
}

uSStrong< ::g::Fuse::Font*> MainView::AGOTHIC14_;
uSStrong< ::g::Fuse::Font*> MainView::JEJU_;
uSStrong< ::g::Fuse::Font*> MainView::ZhongF_;
uSStrong< ::g::Fuse::Font*> MainView::SEOUL_;
uSStrong< ::g::Fuse::Font*> MainView::NOTO_M_;
uSStrong< ::g::Fuse::Font*> MainView::NOTO_R_;
uSStrong< ::g::Fuse::Font*> MainView::NOTO_KR_L_;
uSStrong< ::g::Fuse::Font*> MainView::NOTO_KR_B_;
uSStrong< ::g::Fuse::Font*> MainView::NOTO_KR_R_;
uSStrong< ::g::Fuse::Font*> MainView::NOTO_KR_T_;
uSStrong< ::g::Fuse::Font*> MainView::NOTO_KR_BK_;
uSStrong< ::g::Fuse::Font*> MainView::FontAwesome_;
uSStrong<uArray*> MainView::__g_static_nametable1_;
::g::Uno::UX::Selector MainView::__selector0_;

// public MainView() [instance]
void MainView::ctor_4()
{
    uStackFrame __("MainView", ".ctor()");
    ctor_3();
    InitializeUX();
}

// private void InitializeUX() [instance]
void MainView::InitializeUX()
{
    uStackFrame __("MainView", "InitializeUX()");
    FuseReactiveFuseJSDiagnosticsImplModule = ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule::New2();
    FuseReactiveFuseJSHttp = ::g::Fuse::Reactive::FuseJS::Http::New2();
    FuseReactiveFuseJSTimerModule = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    FuseReactiveFuseJSInterApp = ::g::Fuse::Reactive::FuseJS::InterApp::New3();
    FuseDrawingBrushConverter = ::g::Fuse::Drawing::BrushConverter::New1();
    FuseTriggersBusyTaskModule = ::g::Fuse::Triggers::BusyTaskModule::New2();
    FuseVibrationVibrationModule = ::g::Fuse::Vibration::VibrationModule::New2();
    FuseTestingUnoTestingHelper = ::g::Fuse::Testing::UnoTestingHelper::New2();
    FuseFileSystemFileSystemModule = ::g::Fuse::FileSystem::FileSystemModule::New2();
    FuseStorageStorageModule = ::g::Fuse::Storage::StorageModule::New2();
    FuseWebSocketWebSocketClientModule = ::g::Fuse::WebSocket::WebSocketClientModule::New2();
    FuseImageToolsImageTools = ::g::Fuse::ImageTools::ImageTools::New2();
    FuseCameraCamera = ::g::Fuse::Camera::Camera::New2();
    FuseCameraRollCameraRoll = ::g::Fuse::CameraRoll::CameraRoll::New2();
    FuseAlertsNativeAlerts = ::g::Fuse::Alerts::NativeAlerts::New2();
    FuseBackgroundDownloadBackgroundDownloadModule = ::g::Fuse::BackgroundDownload::BackgroundDownloadModule::New3();
    PolyfillsWindowWindowModule = ::g::Polyfills::Window::WindowModule::New3();
    FuseJSGlobals = ::g::FuseJS::Globals::New2();
    FuseJSLifecycle = ::g::FuseJS::Lifecycle::New3();
    FuseJSEnvironment = ::g::FuseJS::Environment::New2();
    FuseJSBase64 = ::g::FuseJS::Base64::New2();
    FuseJSBundle = ::g::FuseJS::Bundle::New2();
    FuseJSFileReaderImpl = ::g::FuseJS::FileReaderImpl::New2();
    FuseJSUserEvents = ::g::FuseJS::UserEvents::New2();
    Qreader = ::g::Qreader::New2();
    deviceToast = ::g::deviceToast::New2();
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1_);
    router = ::g::Fuse::Navigation::Router::New2();
    ::g::Fuse::Android::StatusBarConfig* temp = ::g::Fuse::Android::StatusBarConfig::New2();
    ::g::Fuse::Reactive::JavaScript* temp1 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::TopFrameBackground* temp2 = ::g::Fuse::Controls::TopFrameBackground::New2();
    ::g::Fuse::Controls::BottomFrameBackground* temp3 = ::g::Fuse::Controls::BottomFrameBackground::New2();
    ::g::Fuse::Controls::Navigator* temp4 = ::g::Fuse::Controls::Navigator::New4();
    MainView__Template* login = MainView__Template::New2(this, this);
    MainView__Template1* s_inq1 = MainView__Template1::New2(this, this);
    MainView__Template2* c_menu = MainView__Template2::New2(this, this);
    MainView__Template3* c_gr = MainView__Template3::New2(this, this);
    MainView__Template4* c_appr = MainView__Template4::New2(this, this);
    MainView__Template5* c_inq = MainView__Template5::New2(this, this);
    MainView__Template6* c_po = MainView__Template6::New2(this, this);
    Background(::g::Fuse::Drawing::Colors::White());
    uPtr(router)->BackButtonAction(1);
    uPtr(router)->Name(MainView::__selector0_);
    uPtr(router)->SourceLineNumber(3);
    uPtr(router)->SourceFileName(::STRINGS[1/*"MainView.ux"*/]);
    temp->IsVisible(true);
    temp->SourceLineNumber(18);
    temp->SourceFileName(::STRINGS[1/*"MainView.ux"*/]);
    temp1->Code(uString::Const("\n"
        "\t\tvar Observable = require(\"FuseJS/Observable\");\n"
        "\t\tvar G_USR_ID = '';\n"
        "\t\tvar G_BP_CD = '';\n"
        "\t\tvar g_BP_NM = '';\n"
        "\t\tvar g_USR_NM = '';\n"
        "\t\tvar cancel_type = '';\n"
        "\t\tvar device = '';\n"
        "\t\tvar main_yn = 'Y';\n"
        "\t\tvar temp_ios_date = 'default';\n"
        "\t\tvar page_name = 'login';\n"
        "\n"
        "\t\tvar Environment = require('FuseJS/Environment');\n"
        "\n"
        "    \tif(Environment.ios)        {console.log(\"It's iOS!\"); }\n"
        "\t\tif(Environment.android)    {console.log(\"It's Android\");}\n"
        "\t\tif(Environment.preview)    {console.log(\"It's Preview!\");}\n"
        "\t\tif(Environment.mobile)    {console.log(\"It's on mobile!\");}\n"
        "\t\t\n"
        "\n"
        "\t\tmodule.exports = {\n"
        "\t\t\tG_USR_ID: G_USR_ID,\n"
        "\t\t\tG_BP_CD: G_BP_CD,\n"
        "\t\t\tg_BP_NM: g_BP_NM,\n"
        "\t\t\tg_USR_NM: g_USR_NM,\n"
        "\t\t\tmain_yn: main_yn,\n"
        "\t\t\ttemp_ios_date: temp_ios_date,\n"
        "\t\t\tpage_name: page_name\n"
        "\t\t};\n"
        "\t"));
    temp1->LineNumber(20);
    temp1->FileName(::STRINGS[1/*"MainView.ux"*/]);
    temp1->SourceLineNumber(20);
    temp1->SourceFileName(::STRINGS[1/*"MainView.ux"*/]);
    temp2->SourceLineNumber(51);
    temp2->SourceFileName(::STRINGS[1/*"MainView.ux"*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp2, 2);
    temp3->SourceLineNumber(52);
    temp3->SourceFileName(::STRINGS[1/*"MainView.ux"*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp3, 3);
    temp4->DefaultPath(::STRINGS[0/*"login"*/]);
    temp4->SourceLineNumber(54);
    temp4->SourceFileName(::STRINGS[1/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), login);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), s_inq1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), c_menu);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), c_gr);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), c_appr);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), c_inq);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), c_po);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp4);
}

// public MainView New() [static]
MainView* MainView::New2()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/MainView.g.uno
// -----------------------------------------------------------------------------

// public partial sealed class MainView.Template
// {
// static Template()
static void MainView__Template__cctor__fn(uType* __type)
{
    MainView__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"login"*/]);
}

static void MainView__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("login");
    ::STRINGS[1] = uString::Const("MainView.ux");
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(MainView__Template, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(MainView__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template__New2_fn, 0, true, type, 2, ::g::MainView_typeof(), ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(MainView__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template", options);
    type->fp_build_ = MainView__Template_build;
    type->fp_cctor_ = MainView__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template__New1_fn;
    return type;
}

// public Template(MainView parent, MainView parentInstance)
void MainView__Template__ctor_1_fn(MainView__Template* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void MainView__Template__New1_fn(MainView__Template* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template", "New()");
    ::g::LoginPage* __self1 = ::g::LoginPage::New5(uPtr(__this->__parent1)->router);
    __self1->Name(MainView__Template::__selector0_);
    __self1->SourceLineNumber(55);
    __self1->SourceFileName(::STRINGS[1/*"MainView.ux"*/]);
    return *__retval = __self1, void();
}

// public Template New(MainView parent, MainView parentInstance)
void MainView__Template__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template** __retval)
{
    *__retval = MainView__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MainView__Template::__selector0_;

// public Template(MainView parent, MainView parentInstance) [instance]
void MainView__Template::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(::STRINGS[0/*"login"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(MainView parent, MainView parentInstance) [static]
MainView__Template* MainView__Template::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template* obj1 = (MainView__Template*)uNew(MainView__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/MainView.g.uno
// -----------------------------------------------------------------------------

// public partial sealed class MainView.Template1
// {
// static Template1()
static void MainView__Template1__cctor__fn(uType* __type)
{
    MainView__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"s_inq1"*/]);
}

static void MainView__Template1_build(uType* type)
{
    ::STRINGS[2] = uString::Const("s_inq1");
    ::STRINGS[1] = uString::Const("MainView.ux");
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(MainView__Template1, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(MainView__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template1::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template1__New2_fn, 0, true, type, 2, ::g::MainView_typeof(), ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(MainView__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template1", options);
    type->fp_build_ = MainView__Template1_build;
    type->fp_cctor_ = MainView__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template1__New1_fn;
    return type;
}

// public Template1(MainView parent, MainView parentInstance)
void MainView__Template1__ctor_1_fn(MainView__Template1* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void MainView__Template1__New1_fn(MainView__Template1* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template1", "New()");
    ::g::s_inq01* __self1 = ::g::s_inq01::New5(uPtr(__this->__parent1)->router);
    __self1->Name(MainView__Template1::__selector0_);
    __self1->SourceLineNumber(56);
    __self1->SourceFileName(::STRINGS[1/*"MainView.ux"*/]);
    return *__retval = __self1, void();
}

// public Template1 New(MainView parent, MainView parentInstance)
void MainView__Template1__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template1** __retval)
{
    *__retval = MainView__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MainView__Template1::__selector0_;

// public Template1(MainView parent, MainView parentInstance) [instance]
void MainView__Template1::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(::STRINGS[2/*"s_inq1"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(MainView parent, MainView parentInstance) [static]
MainView__Template1* MainView__Template1::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template1* obj1 = (MainView__Template1*)uNew(MainView__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/MainView.g.uno
// -----------------------------------------------------------------------------

// public partial sealed class MainView.Template2
// {
// static Template2()
static void MainView__Template2__cctor__fn(uType* __type)
{
    MainView__Template2::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"c_menu"*/]);
}

static void MainView__Template2_build(uType* type)
{
    ::STRINGS[3] = uString::Const("c_menu");
    ::STRINGS[1] = uString::Const("MainView.ux");
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(MainView__Template2, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(MainView__Template2, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template2::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template2__New2_fn, 0, true, type, 2, ::g::MainView_typeof(), ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(MainView__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template2", options);
    type->fp_build_ = MainView__Template2_build;
    type->fp_cctor_ = MainView__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template2__New1_fn;
    return type;
}

// public Template2(MainView parent, MainView parentInstance)
void MainView__Template2__ctor_1_fn(MainView__Template2* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void MainView__Template2__New1_fn(MainView__Template2* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template2", "New()");
    ::g::c_menu* __self1 = ::g::c_menu::New5(uPtr(__this->__parent1)->router);
    __self1->Name(MainView__Template2::__selector0_);
    __self1->SourceLineNumber(57);
    __self1->SourceFileName(::STRINGS[1/*"MainView.ux"*/]);
    return *__retval = __self1, void();
}

// public Template2 New(MainView parent, MainView parentInstance)
void MainView__Template2__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template2** __retval)
{
    *__retval = MainView__Template2::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MainView__Template2::__selector0_;

// public Template2(MainView parent, MainView parentInstance) [instance]
void MainView__Template2::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(::STRINGS[3/*"c_menu"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template2 New(MainView parent, MainView parentInstance) [static]
MainView__Template2* MainView__Template2::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template2* obj1 = (MainView__Template2*)uNew(MainView__Template2_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/MainView.g.uno
// -----------------------------------------------------------------------------

// public partial sealed class MainView.Template3
// {
// static Template3()
static void MainView__Template3__cctor__fn(uType* __type)
{
    MainView__Template3::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"c_gr"*/]);
}

static void MainView__Template3_build(uType* type)
{
    ::STRINGS[4] = uString::Const("c_gr");
    ::STRINGS[1] = uString::Const("MainView.ux");
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(MainView__Template3, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(MainView__Template3, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template3::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template3__New2_fn, 0, true, type, 2, ::g::MainView_typeof(), ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template3_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(MainView__Template3);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template3", options);
    type->fp_build_ = MainView__Template3_build;
    type->fp_cctor_ = MainView__Template3__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template3__New1_fn;
    return type;
}

// public Template3(MainView parent, MainView parentInstance)
void MainView__Template3__ctor_1_fn(MainView__Template3* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void MainView__Template3__New1_fn(MainView__Template3* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template3", "New()");
    ::g::c_gr* __self1 = ::g::c_gr::New5(uPtr(__this->__parent1)->router);
    __self1->Name(MainView__Template3::__selector0_);
    __self1->SourceLineNumber(58);
    __self1->SourceFileName(::STRINGS[1/*"MainView.ux"*/]);
    return *__retval = __self1, void();
}

// public Template3 New(MainView parent, MainView parentInstance)
void MainView__Template3__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template3** __retval)
{
    *__retval = MainView__Template3::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MainView__Template3::__selector0_;

// public Template3(MainView parent, MainView parentInstance) [instance]
void MainView__Template3::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(::STRINGS[4/*"c_gr"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template3 New(MainView parent, MainView parentInstance) [static]
MainView__Template3* MainView__Template3::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template3* obj1 = (MainView__Template3*)uNew(MainView__Template3_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/MainView.g.uno
// -----------------------------------------------------------------------------

// public partial sealed class MainView.Template4
// {
// static Template4()
static void MainView__Template4__cctor__fn(uType* __type)
{
    MainView__Template4::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"c_appr"*/]);
}

static void MainView__Template4_build(uType* type)
{
    ::STRINGS[5] = uString::Const("c_appr");
    ::STRINGS[1] = uString::Const("MainView.ux");
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(MainView__Template4, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(MainView__Template4, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template4::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template4__New2_fn, 0, true, type, 2, ::g::MainView_typeof(), ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template4_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(MainView__Template4);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template4", options);
    type->fp_build_ = MainView__Template4_build;
    type->fp_cctor_ = MainView__Template4__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template4__New1_fn;
    return type;
}

// public Template4(MainView parent, MainView parentInstance)
void MainView__Template4__ctor_1_fn(MainView__Template4* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void MainView__Template4__New1_fn(MainView__Template4* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template4", "New()");
    ::g::c_appr* __self1 = ::g::c_appr::New5(uPtr(__this->__parent1)->router);
    __self1->Name(MainView__Template4::__selector0_);
    __self1->SourceLineNumber(59);
    __self1->SourceFileName(::STRINGS[1/*"MainView.ux"*/]);
    return *__retval = __self1, void();
}

// public Template4 New(MainView parent, MainView parentInstance)
void MainView__Template4__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template4** __retval)
{
    *__retval = MainView__Template4::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MainView__Template4::__selector0_;

// public Template4(MainView parent, MainView parentInstance) [instance]
void MainView__Template4::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(::STRINGS[5/*"c_appr"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template4 New(MainView parent, MainView parentInstance) [static]
MainView__Template4* MainView__Template4::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template4* obj1 = (MainView__Template4*)uNew(MainView__Template4_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/MainView.g.uno
// -----------------------------------------------------------------------------

// public partial sealed class MainView.Template5
// {
// static Template5()
static void MainView__Template5__cctor__fn(uType* __type)
{
    MainView__Template5::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"c_inq"*/]);
}

static void MainView__Template5_build(uType* type)
{
    ::STRINGS[6] = uString::Const("c_inq");
    ::STRINGS[1] = uString::Const("MainView.ux");
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(MainView__Template5, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(MainView__Template5, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template5::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template5__New2_fn, 0, true, type, 2, ::g::MainView_typeof(), ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template5_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(MainView__Template5);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template5", options);
    type->fp_build_ = MainView__Template5_build;
    type->fp_cctor_ = MainView__Template5__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template5__New1_fn;
    return type;
}

// public Template5(MainView parent, MainView parentInstance)
void MainView__Template5__ctor_1_fn(MainView__Template5* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void MainView__Template5__New1_fn(MainView__Template5* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template5", "New()");
    ::g::c_inq* __self1 = ::g::c_inq::New5(uPtr(__this->__parent1)->router);
    __self1->Name(MainView__Template5::__selector0_);
    __self1->SourceLineNumber(60);
    __self1->SourceFileName(::STRINGS[1/*"MainView.ux"*/]);
    return *__retval = __self1, void();
}

// public Template5 New(MainView parent, MainView parentInstance)
void MainView__Template5__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template5** __retval)
{
    *__retval = MainView__Template5::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MainView__Template5::__selector0_;

// public Template5(MainView parent, MainView parentInstance) [instance]
void MainView__Template5::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(::STRINGS[6/*"c_inq"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template5 New(MainView parent, MainView parentInstance) [static]
MainView__Template5* MainView__Template5::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template5* obj1 = (MainView__Template5*)uNew(MainView__Template5_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/MainView.g.uno
// -----------------------------------------------------------------------------

// public partial sealed class MainView.Template6
// {
// static Template6()
static void MainView__Template6__cctor__fn(uType* __type)
{
    MainView__Template6::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"c_po"*/]);
}

static void MainView__Template6_build(uType* type)
{
    ::STRINGS[7] = uString::Const("c_po");
    ::STRINGS[1] = uString::Const("MainView.ux");
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(MainView__Template6, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(MainView__Template6, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template6::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template6__New2_fn, 0, true, type, 2, ::g::MainView_typeof(), ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template6_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(MainView__Template6);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template6", options);
    type->fp_build_ = MainView__Template6_build;
    type->fp_cctor_ = MainView__Template6__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template6__New1_fn;
    return type;
}

// public Template6(MainView parent, MainView parentInstance)
void MainView__Template6__ctor_1_fn(MainView__Template6* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void MainView__Template6__New1_fn(MainView__Template6* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template6", "New()");
    ::g::c_po* __self1 = ::g::c_po::New5(uPtr(__this->__parent1)->router);
    __self1->Name(MainView__Template6::__selector0_);
    __self1->SourceLineNumber(61);
    __self1->SourceFileName(::STRINGS[1/*"MainView.ux"*/]);
    return *__retval = __self1, void();
}

// public Template6 New(MainView parent, MainView parentInstance)
void MainView__Template6__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template6** __retval)
{
    *__retval = MainView__Template6::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MainView__Template6::__selector0_;

// public Template6(MainView parent, MainView parentInstance) [instance]
void MainView__Template6::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(::STRINGS[7/*"c_po"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template6 New(MainView parent, MainView parentInstance) [static]
MainView__Template6* MainView__Template6::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template6* obj1 = (MainView__Template6*)uNew(MainView__Template6_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
