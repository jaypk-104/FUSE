// This file was generated based on /usr/local/share/uno/Packages/Fuse.Platform/1.12.0/Android/SystemUI.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Platform{struct SystemUI;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Int3;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Platform{

// internal static extern class SystemUI
// {
uClassType* SystemUI_typeof();
void SystemUI___GetRootDisplaySize_fn(::g::Uno::Float2* __retval);
void SystemUI__get_APILevel_fn(int32_t* __retval);
void SystemUI__Attach_fn(::g::Java::Object* _layout);
void SystemUI__get_BottomFrame_fn(::g::Uno::Rect* __retval);
void SystemUI__CalcRealSizes_fn();
void SystemUI__CompensateRootLayoutForSystemUI_fn();
void SystemUI__cppOnBottomFrameChanged_fn(int32_t* height);
void SystemUI__cppOnConfigChanged_fn();
void SystemUI__cppOnTopFrameChanged_fn(int32_t* height);
void SystemUI__CreateLayouts_fn();
void SystemUI__get_Density_fn(float* __retval);
void SystemUI__set_Density_fn(float* value);
void SystemUI__Detach_fn();
void SystemUI__get_DeviceMargins_fn(::g::Uno::Float4* __retval);
void SystemUI__EnterFullscreen_fn();
void SystemUI__get_Frame_fn(::g::Uno::Rect* __retval);
void SystemUI__set_Frame_fn(::g::Uno::Rect* value);
void SystemUI__add_FrameChanged_fn(uDelegate* value);
void SystemUI__remove_FrameChanged_fn(uDelegate* value);
void SystemUI__GetAPILevel_fn(int32_t* __retval);
void SystemUI__GetBottomBarFrame_fn(::g::Uno::Rect* __retval);
void SystemUI__GetDensity_fn(float* __retval);
void SystemUI__GetDisplayMetrics_fn(::g::Java::Object** __retval);
void SystemUI__GetOSVersion_fn(uString** __retval);
void SystemUI__GetRealDisplayHeight_fn(int32_t* __retval);
void SystemUI__GetRealDisplayWidth_fn(int32_t* __retval);
void SystemUI__GetStatusBarFrame_fn(::g::Uno::Rect* __retval);
void SystemUI__GetStatusBarHeight_fn(float* __retval);
void SystemUI__GetSuperLayoutHeight_fn(int32_t* __retval);
void SystemUI__HideActionBar_fn();
void SystemUI__HideStatusBar_fn();
void SystemUI__HookOntoRawActivityEvents_fn();
void SystemUI__get_IsTopFrameVisible_fn(bool* __retval);
void SystemUI__set_IsTopFrameVisible_fn(bool* value);
void SystemUI__MakePostV11LayoutChangeListener_fn(::g::Java::Object** __retval);
void SystemUI__add_MarginsChanged_fn(uDelegate* value);
void SystemUI__remove_MarginsChanged_fn(uDelegate* value);
void SystemUI__OnConfigChanged_fn();
void SystemUI__OnCreate_fn();
void SystemUI__OnDestroy_fn();
void SystemUI__OnFrameChanged_fn();
void SystemUI__onHideKeyboard_fn(int32_t* keyboardHeight, bool* force);
void SystemUI__OnPause_fn();
void SystemUI__OnResume_fn();
void SystemUI__onShowKeyboard_fn(int32_t* keyboardHeight, bool* force);
void SystemUI__OnWillResize_fn();
void SystemUI__get_OSVersion_fn(::g::Uno::Int3* __retval);
void SystemUI__ResendFrameSizes_fn();
void SystemUI__ResetGeometry_fn();
void SystemUI__get_RootView_fn(::g::Java::Object** __retval);
void SystemUI__set_RootView_fn(::g::Java::Object* value);
void SystemUI__get_SafeMargins_fn(::g::Uno::Float4* __retval);
void SystemUI__SetAsRootView_fn(::g::Java::Object* view);
void SystemUI__SetFrame_fn(::g::Java::Object* view, int32_t* originX, int32_t* originY, int32_t* height);
void SystemUI__ShowStatusBar_fn();
void SystemUI__get_StaticMargins_fn(::g::Uno::Float4* __retval);
void SystemUI__get_TopFrame_fn(::g::Uno::Rect* __retval);
void SystemUI__unoOnGlobalLayout_fn();
void SystemUI__UpdateStatusBar_fn();

struct SystemUI : uObject
{
    static uSStrong< ::g::Java::Object*> _keyboardListener_;
    static uSStrong< ::g::Java::Object*>& _keyboardListener() { return SystemUI_typeof()->Init(), _keyboardListener_; }
    static uSStrong< ::g::Java::Object*> SuperLayout_;
    static uSStrong< ::g::Java::Object*>& SuperLayout() { return SystemUI_typeof()->Init(), SuperLayout_; }
    static uSStrong< ::g::Java::Object*> RootLayout_;
    static uSStrong< ::g::Java::Object*>& RootLayout() { return SystemUI_typeof()->Init(), RootLayout_; }
    static uSStrong< ::g::Java::Object*> layoutAttachedTo_;
    static uSStrong< ::g::Java::Object*>& layoutAttachedTo() { return SystemUI_typeof()->Init(), layoutAttachedTo_; }
    static int32_t realWidth_;
    static int32_t& realWidth() { return SystemUI_typeof()->Init(), realWidth_; }
    static int32_t realHeight_;
    static int32_t& realHeight() { return SystemUI_typeof()->Init(), realHeight_; }
    static bool firstSizing_;
    static bool& firstSizing() { return SystemUI_typeof()->Init(), firstSizing_; }
    static bool keyboardVisible_;
    static bool& keyboardVisible() { return SystemUI_typeof()->Init(), keyboardVisible_; }
    static int32_t lastKeyboardHeight_;
    static int32_t& lastKeyboardHeight() { return SystemUI_typeof()->Init(), lastKeyboardHeight_; }
    static bool hasCachedStatusBarSize_;
    static bool& hasCachedStatusBarSize() { return SystemUI_typeof()->Init(), hasCachedStatusBarSize_; }
    static int32_t cachedOpenSize_;
    static int32_t& cachedOpenSize() { return SystemUI_typeof()->Init(), cachedOpenSize_; }
    static int32_t _systemUIState_;
    static int32_t& _systemUIState() { return SystemUI_typeof()->Init(), _systemUIState_; }
    static int32_t _topFrameSize_;
    static int32_t& _topFrameSize() { return SystemUI_typeof()->Init(), _topFrameSize_; }
    static int32_t _bottomFrameSize_;
    static int32_t& _bottomFrameSize() { return SystemUI_typeof()->Init(), _bottomFrameSize_; }
    static int32_t _staticBottomFrameSize_;
    static int32_t& _staticBottomFrameSize() { return SystemUI_typeof()->Init(), _staticBottomFrameSize_; }
    static float _density_;
    static float& _density() { return SystemUI_typeof()->Init(), _density_; }
    static ::g::Uno::Rect _frame_;
    static ::g::Uno::Rect& _frame() { return SystemUI_typeof()->Init(), _frame_; }
    static uSStrong<uDelegate*> FrameChanged1_;
    static uSStrong<uDelegate*>& FrameChanged1() { return SystemUI_typeof()->Init(), FrameChanged1_; }
    static uSStrong<uDelegate*> MarginsChanged1_;
    static uSStrong<uDelegate*>& MarginsChanged1() { return SystemUI_typeof()->Init(), MarginsChanged1_; }

    static ::g::Uno::Float2 _GetRootDisplaySize();
    static void Attach(::g::Java::Object* _layout);
    static void CalcRealSizes();
    static void CompensateRootLayoutForSystemUI();
    static void cppOnBottomFrameChanged(int32_t height);
    static void cppOnConfigChanged();
    static void cppOnTopFrameChanged(int32_t height);
    static void CreateLayouts();
    static void Detach();
    static void EnterFullscreen();
    static int32_t GetAPILevel();
    static ::g::Uno::Rect GetBottomBarFrame();
    static float GetDensity();
    static ::g::Java::Object* GetDisplayMetrics();
    static uString* GetOSVersion();
    static int32_t GetRealDisplayHeight();
    static int32_t GetRealDisplayWidth();
    static ::g::Uno::Rect GetStatusBarFrame();
    static float GetStatusBarHeight();
    static int32_t GetSuperLayoutHeight();
    static void HideActionBar();
    static void HideStatusBar();
    static void HookOntoRawActivityEvents();
    static ::g::Java::Object* MakePostV11LayoutChangeListener();
    static void OnConfigChanged();
    static void OnCreate();
    static void OnDestroy();
    static void OnFrameChanged();
    static void onHideKeyboard(int32_t keyboardHeight, bool force);
    static void OnPause();
    static void OnResume();
    static void onShowKeyboard(int32_t keyboardHeight, bool force);
    static void OnWillResize();
    static void ResendFrameSizes();
    static void ResetGeometry();
    static void SetAsRootView(::g::Java::Object* view);
    static void SetFrame(::g::Java::Object* view, int32_t originX, int32_t originY, int32_t height);
    static void ShowStatusBar();
    static void unoOnGlobalLayout();
    static void UpdateStatusBar();
    static int32_t APILevel();
    static ::g::Uno::Rect BottomFrame();
    static float Density();
    static void Density(float value);
    static ::g::Uno::Float4 DeviceMargins();
    static ::g::Uno::Rect Frame();
    static void Frame(::g::Uno::Rect value);
    static bool IsTopFrameVisible();
    static void IsTopFrameVisible(bool value);
    static ::g::Uno::Int3 OSVersion();
    static ::g::Java::Object* RootView();
    static void RootView(::g::Java::Object* value);
    static ::g::Uno::Float4 SafeMargins();
    static ::g::Uno::Float4 StaticMargins();
    static ::g::Uno::Rect TopFrame();
    static void add_FrameChanged(uDelegate* value);
    static void remove_FrameChanged(uDelegate* value);
    static void add_MarginsChanged(uDelegate* value);
    static void remove_MarginsChanged(uDelegate* value);
};
// }

}}} // ::g::Fuse::Platform
