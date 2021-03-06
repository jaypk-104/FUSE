// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/ScrollView.Layout.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.ContentControl.h>
#include <Fuse.Controls.Native.IScrollViewHost.h>
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
#include <Uno.Float2.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollViewBase;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Gestures{struct Scroller;}}}
namespace g{namespace Fuse{namespace Motion{struct MotionConfig;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial class ScrollViewBase
// {
struct ScrollViewBase_type : ::g::Fuse::Controls::ContentControl_type
{
    ::g::Fuse::Controls::Native::IScrollViewHost interface18;
};

ScrollViewBase_type* ScrollViewBase_typeof();
void ScrollViewBase__ctor_6_fn(ScrollViewBase* __this);
void ScrollViewBase__get_AllowedScrollDirections_fn(ScrollViewBase* __this, int32_t* __retval);
void ScrollViewBase__set_AllowedScrollDirections_fn(ScrollViewBase* __this, int32_t* value);
void ScrollViewBase__ArrangeContent_fn(ScrollViewBase* __this, ::g::Fuse::LayoutParams* lp);
void ScrollViewBase__ArrangePaddingBox_fn(ScrollViewBase* __this, ::g::Fuse::LayoutParams* lp);
void ScrollViewBase__CompensateForScrollView_fn(ScrollViewBase* __this, ::g::Uno::Float4x4* t);
void ScrollViewBase__Constrain_fn(ScrollViewBase* __this, ::g::Uno::Float2* t, ::g::Uno::Float2* __retval);
void ScrollViewBase__ConstrainDown_fn(ScrollViewBase* __this, ::g::Uno::Float2* t, ::g::Uno::Float2* __retval);
void ScrollViewBase__ConstrainExtents_fn(ScrollViewBase* __this, ::g::Uno::Float2* t, ::g::Uno::Float2* __retval);
void ScrollViewBase__ConstrainUp_fn(ScrollViewBase* __this, ::g::Uno::Float2* t, ::g::Uno::Float2* __retval);
void ScrollViewBase__get_ContentMarginSize_fn(ScrollViewBase* __this, ::g::Uno::Float2* __retval);
void ScrollViewBase__DistanceFromView_fn(ScrollViewBase* __this, ::g::Uno::Float2* position, int32_t* target, ::g::Uno::Float2* __retval);
void ScrollViewBase__DistanceToView_fn(ScrollViewBase* __this, ::g::Uno::Float2* min, ::g::Uno::Float2* max, ::g::Uno::Float4* __retval);
void ScrollViewBase__get_Element_fn(ScrollViewBase* __this, ::g::Fuse::Elements::Element** __retval);
void ScrollViewBase__FindAnchorElement_fn(ScrollViewBase* __this, ::g::Fuse::Elements::Element** __retval);
void ScrollViewBase__FromScalarPosition_fn(ScrollViewBase* __this, float* value, ::g::Uno::Float2* __retval);
void ScrollViewBase__FuseControlsNativeIScrollViewHostget_ContentSize_fn(ScrollViewBase* __this, ::g::Uno::Float2* __retval);
void ScrollViewBase__FuseControlsNativeIScrollViewHostOnScrollPositionChanged_fn(ScrollViewBase* __this, ::g::Uno::Float2* newScrollPosition);
void ScrollViewBase__FuseControlsNativeIScrollViewHostget_PixelsPerPoint_fn(ScrollViewBase* __this, float* __retval);
void ScrollViewBase__get_GesturePriority_fn(ScrollViewBase* __this, int32_t* __retval);
void ScrollViewBase__set_GesturePriority_fn(ScrollViewBase* __this, int32_t* value);
void ScrollViewBase__GetContentSize_fn(ScrollViewBase* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void ScrollViewBase__getParams_fn(ScrollViewBase* s, uArray* args, uString* func, ::g::Uno::Float2* pos, bool* __retval);
void ScrollViewBase__GetVisualScrollPosition_fn(ScrollViewBase* __this, ::g::Fuse::Visual* n, ::g::Uno::Float2* __retval);
void ScrollViewBase__Goto_fn(ScrollViewBase* __this, ::g::Uno::Float2* position);
void ScrollViewBase__goto__fn(ScrollViewBase* s, uArray* args);
void ScrollViewBase__gotoRelative_fn(ScrollViewBase* s, uArray* args);
void ScrollViewBase__GotoRelative_fn(ScrollViewBase* __this, ::g::Uno::Float2* position);
void ScrollViewBase__IsMarginBoxDependent_fn(ScrollViewBase* __this, ::g::Fuse::Visual* child, int32_t* __retval);
void ScrollViewBase__get_KeepFocusInView_fn(ScrollViewBase* __this, bool* __retval);
void ScrollViewBase__set_KeepFocusInView_fn(ScrollViewBase* __this, bool* value);
void ScrollViewBase__get_LayoutMode_fn(ScrollViewBase* __this, int32_t* __retval);
void ScrollViewBase__set_LayoutMode_fn(ScrollViewBase* __this, int32_t* value);
void ScrollViewBase__get_MaxOverflow_fn(ScrollViewBase* __this, ::g::Uno::Float2* __retval);
void ScrollViewBase__get_MaxScroll_fn(ScrollViewBase* __this, ::g::Uno::Float2* __retval);
void ScrollViewBase__get_MinOverflow_fn(ScrollViewBase* __this, ::g::Uno::Float2* __retval);
void ScrollViewBase__get_MinScroll_fn(ScrollViewBase* __this, ::g::Uno::Float2* __retval);
void ScrollViewBase__get_Motion_fn(ScrollViewBase* __this, ::g::Fuse::Motion::MotionConfig** __retval);
void ScrollViewBase__set_Motion_fn(ScrollViewBase* __this, ::g::Fuse::Motion::MotionConfig* value);
void ScrollViewBase__get_NativeScrollView_fn(ScrollViewBase* __this, uObject** __retval);
void ScrollViewBase__New3_fn(ScrollViewBase** __retval);
void ScrollViewBase__OnContentChanged_fn(ScrollViewBase* __this);
void ScrollViewBase__OnRooted_fn(ScrollViewBase* __this);
void ScrollViewBase__OnScrollPositionChanged_fn(ScrollViewBase* __this, ::g::Uno::Float2* arrangeOffset, bool* adjustment, uObject* origin);
void ScrollViewBase__OnScrollPropertyChanged_fn(ScrollViewBase* __this, ::g::Uno::UX::Selector* name, uObject* origin);
void ScrollViewBase__OnUnrooted_fn(ScrollViewBase* __this);
void ScrollViewBase__PushPropertiesToNativeView_fn(ScrollViewBase* __this);
void ScrollViewBase__get_RelativeScrollPosition_fn(ScrollViewBase* __this, ::g::Uno::Float2* __retval);
void ScrollViewBase__set_RelativeScrollPosition_fn(ScrollViewBase* __this, ::g::Uno::Float2* value);
void ScrollViewBase__RelativeToAbsolutePosition_fn(ScrollViewBase* __this, ::g::Uno::Float2* pos, ::g::Uno::Float2* __retval);
void ScrollViewBase__get_Scroller_fn(ScrollViewBase* __this, ::g::Fuse::Gestures::Scroller** __retval);
void ScrollViewBase__get_ScrollPosition_fn(ScrollViewBase* __this, ::g::Uno::Float2* __retval);
void ScrollViewBase__set_ScrollPosition_fn(ScrollViewBase* __this, ::g::Uno::Float2* value);
void ScrollViewBase__add_ScrollPositionChanged_fn(ScrollViewBase* __this, uDelegate* value);
void ScrollViewBase__remove_ScrollPositionChanged_fn(ScrollViewBase* __this, uDelegate* value);
void ScrollViewBase__seekTo_fn(ScrollViewBase* s, uArray* args);
void ScrollViewBase__seekToRelative_fn(ScrollViewBase* s, uArray* args);
void ScrollViewBase__SetScrollPosition_fn(ScrollViewBase* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* arrangeOffset, uObject* origin);
void ScrollViewBase__SetScrollPosition1_fn(ScrollViewBase* __this, ::g::Uno::Float2* position, uObject* origin);
void ScrollViewBase__SetScrollPositionImpl_fn(ScrollViewBase* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* arrangeOffset, bool* adjustment, uObject* origin);
void ScrollViewBase__get_SnapMaxTransform_fn(ScrollViewBase* __this, bool* __retval);
void ScrollViewBase__set_SnapMaxTransform_fn(ScrollViewBase* __this, bool* value);
void ScrollViewBase__get_SnapMinTransform_fn(ScrollViewBase* __this, bool* __retval);
void ScrollViewBase__set_SnapMinTransform_fn(ScrollViewBase* __this, bool* value);
void ScrollViewBase__ToScalarPosition_fn(ScrollViewBase* __this, ::g::Uno::Float2* value, float* __retval);
void ScrollViewBase__UpdateScrollPosition_fn(ScrollViewBase* __this);
void ScrollViewBase__get_UserScroll_fn(ScrollViewBase* __this, bool* __retval);
void ScrollViewBase__set_UserScroll_fn(ScrollViewBase* __this, bool* value);

struct ScrollViewBase : ::g::Fuse::Controls::ContentControl
{
    int32_t _layoutMode;
    bool _hasPrevArrange;
    uStrong< ::g::Fuse::Elements::Element*> _placeAnchor;
    ::g::Uno::Float2 _oldMinScroll;
    ::g::Uno::Float2 _oldMaxScroll;
    ::g::Uno::Float2 _placePosition;
    ::g::Uno::Float2 _oldScrollPosition;
    ::g::Uno::Float2 _oldActualSize;
    static ::g::Uno::UX::Selector SizingChanged_;
    static ::g::Uno::UX::Selector& SizingChanged() { return ScrollViewBase_typeof()->Init(), SizingChanged_; }
    int32_t _contentAlignment;
    ::g::Uno::Float2 _contentMarginSize;
    static ::g::Uno::UX::Selector UserScrollName_;
    static ::g::Uno::UX::Selector& UserScrollName() { return ScrollViewBase_typeof()->Init(), UserScrollName_; }
    bool _userScroll;
    static ::g::Uno::UX::Selector GesturePriorityName_;
    static ::g::Uno::UX::Selector& GesturePriorityName() { return ScrollViewBase_typeof()->Init(), GesturePriorityName_; }
    int32_t _gesturePriority;
    bool _snapMinTransform;
    bool _snapMaxTransform;
    uStrong< ::g::Fuse::Visual*> _currentContent;
    uStrong< ::g::Fuse::Gestures::Scroller*> _scroller;
    uStrong< ::g::Fuse::Motion::MotionConfig*> _motion;
    static ::g::Uno::UX::Selector _keepFocusInViewName_;
    static ::g::Uno::UX::Selector& _keepFocusInViewName() { return ScrollViewBase_typeof()->Init(), _keepFocusInViewName_; }
    bool _keepFocusInView;
    static ::g::Uno::UX::Selector _allowedScrollDirectionsName_;
    static ::g::Uno::UX::Selector& _allowedScrollDirectionsName() { return ScrollViewBase_typeof()->Init(), _allowedScrollDirectionsName_; }
    int32_t _allowedScrollDirections;
    ::g::Uno::Float2 _scrollPosition;
    uStrong< ::g::Fuse::Translation*> _scrollTranslation;
    ::g::Uno::Float2 _previousRelative;
    static ::g::Uno::UX::Selector ScrollPositionName_;
    static ::g::Uno::UX::Selector& ScrollPositionName() { return ScrollViewBase_typeof()->Init(), ScrollPositionName_; }
    uStrong<uDelegate*> ScrollPositionChanged1;

    void ctor_6();
    int32_t AllowedScrollDirections();
    void AllowedScrollDirections(int32_t value);
    void ArrangeContent(::g::Fuse::LayoutParams lp);
    ::g::Uno::Float2 Constrain(::g::Uno::Float2 t);
    ::g::Uno::Float2 ConstrainDown(::g::Uno::Float2 t);
    ::g::Uno::Float2 ConstrainExtents(::g::Uno::Float2 t);
    ::g::Uno::Float2 ConstrainUp(::g::Uno::Float2 t);
    ::g::Uno::Float2 ContentMarginSize();
    ::g::Uno::Float2 DistanceFromView(::g::Uno::Float2 position, int32_t target);
    ::g::Uno::Float4 DistanceToView(::g::Uno::Float2 min, ::g::Uno::Float2 max);
    ::g::Fuse::Elements::Element* Element();
    ::g::Fuse::Elements::Element* FindAnchorElement();
    ::g::Uno::Float2 FromScalarPosition(float value);
    int32_t GesturePriority();
    void GesturePriority(int32_t value);
    ::g::Uno::Float2 GetVisualScrollPosition(::g::Fuse::Visual* n);
    void Goto(::g::Uno::Float2 position);
    void GotoRelative(::g::Uno::Float2 position);
    bool KeepFocusInView();
    void KeepFocusInView(bool value);
    int32_t LayoutMode();
    void LayoutMode(int32_t value);
    ::g::Uno::Float2 MaxOverflow();
    ::g::Uno::Float2 MaxScroll();
    ::g::Uno::Float2 MinOverflow();
    ::g::Uno::Float2 MinScroll();
    ::g::Fuse::Motion::MotionConfig* Motion();
    void Motion(::g::Fuse::Motion::MotionConfig* value);
    uObject* NativeScrollView();
    void OnScrollPositionChanged(::g::Uno::Float2 arrangeOffset, bool adjustment, uObject* origin);
    void OnScrollPropertyChanged(::g::Uno::UX::Selector name, uObject* origin);
    ::g::Uno::Float2 RelativeScrollPosition();
    void RelativeScrollPosition(::g::Uno::Float2 value);
    ::g::Uno::Float2 RelativeToAbsolutePosition(::g::Uno::Float2 pos);
    ::g::Fuse::Gestures::Scroller* Scroller();
    ::g::Uno::Float2 ScrollPosition();
    void ScrollPosition(::g::Uno::Float2 value);
    void add_ScrollPositionChanged(uDelegate* value);
    void remove_ScrollPositionChanged(uDelegate* value);
    void SetScrollPosition(::g::Uno::Float2 position, ::g::Uno::Float2 arrangeOffset, uObject* origin);
    void SetScrollPosition1(::g::Uno::Float2 position, uObject* origin);
    void SetScrollPositionImpl(::g::Uno::Float2 position, ::g::Uno::Float2 arrangeOffset, bool adjustment, uObject* origin);
    bool SnapMaxTransform();
    void SnapMaxTransform(bool value);
    bool SnapMinTransform();
    void SnapMinTransform(bool value);
    float ToScalarPosition(::g::Uno::Float2 value);
    void UpdateScrollPosition();
    bool UserScroll();
    void UserScroll(bool value);
    static bool getParams(ScrollViewBase* s, uArray* args, uString* func, ::g::Uno::Float2* pos);
    static void goto_(ScrollViewBase* s, uArray* args);
    static void gotoRelative(ScrollViewBase* s, uArray* args);
    static ScrollViewBase* New3();
    static void seekTo(ScrollViewBase* s, uArray* args);
    static void seekToRelative(ScrollViewBase* s, uArray* args);
};
// }

}}} // ::g::Fuse::Controls
