// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.12.0/Navigator.Interaction.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.NavigationControl.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.Internal.MiniList-1.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.IRouterOutlet.h>
#include <Fuse.Node.h>
#include <Fuse.Node.ISubtreeDataProvider.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct NavigationControl__ControlPageData;}}}
namespace g{namespace Fuse{namespace Controls{struct Navigator;}}}
namespace g{namespace Fuse{namespace Controls{struct Navigator__DeferSwitch;}}}
namespace g{namespace Fuse{namespace Controls{struct Navigator__NavPage;}}}
namespace g{namespace Fuse{namespace Controls{struct Navigator__PrepareResult;}}}
namespace g{namespace Fuse{namespace Controls{struct NavigatorSwipe;}}}
namespace g{namespace Fuse{namespace Controls{struct NavigatorSwitchedArgs;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Navigation{struct ExplicitNavigation;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterPage;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{namespace UX{struct Template;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial class Navigator
// {
struct Navigator_type : ::g::Fuse::Controls::NavigationControl_type
{
    ::g::Fuse::Navigation::IRouterOutlet interface23;
};

Navigator_type* Navigator_typeof();
void Navigator__ctor_8_fn(Navigator* __this);
void Navigator__AddToCache_fn(Navigator* __this, Navigator__NavPage* page, ::g::Fuse::Visual* target);
void Navigator__BusyChanged_fn(Navigator* __this);
void Navigator__CheckInteraction_fn(Navigator* __this);
void Navigator__CleanupChildren_fn(Navigator* __this, ::g::Fuse::Visual* exclude);
void Navigator__CleanupListenBusy_fn(Navigator* __this);
void Navigator__CleanupPrepared_fn(Navigator* __this, ::g::Fuse::Visual* newTarget);
void Navigator__CreateTriggers_fn(Navigator* __this, ::g::Fuse::Elements::Element* c, ::g::Fuse::Controls::NavigationControl__ControlPageData* pd);
void Navigator__get_DefaultPath_fn(Navigator* __this, uString** __retval);
void Navigator__set_DefaultPath_fn(Navigator* __this, uString* value);
void Navigator__get_DefaultTemplate_fn(Navigator* __this, uString** __retval);
void Navigator__set_DefaultTemplate_fn(Navigator* __this, uString* value);
void Navigator__get_DeferPageSwitch_fn(Navigator* __this, int32_t* __retval);
void Navigator__set_DeferPageSwitch_fn(Navigator* __this, int32_t* value);
void Navigator__get_DeferPageSwitchTimeout_fn(Navigator* __this, float* __retval);
void Navigator__set_DeferPageSwitchTimeout_fn(Navigator* __this, float* value);
void Navigator__EnablePageSwipeBack_fn(Navigator* __this);
void Navigator__FindPage_fn(Navigator* __this, ::g::Uno::UX::Selector* path, ::g::Fuse::Visual** __retval);
void Navigator__FuseNavigationIRouterOutletCancelPrepare_fn(Navigator* __this);
void Navigator__FuseNavigationIRouterOutletCompareCurrent_fn(Navigator* __this, ::g::Fuse::Navigation::RouterPage* routerPage, ::g::Fuse::Visual** pageVisual, int32_t* __retval);
void Navigator__FuseNavigationIRouterOutletGetCurrent_fn(Navigator* __this, ::g::Fuse::Visual** pageVisual, ::g::Fuse::Navigation::RouterPage** __retval);
void Navigator__FuseNavigationIRouterOutletGoto_fn(Navigator* __this, ::g::Fuse::Navigation::RouterPage* routerPage, int32_t* gotoMode, int32_t* operation, uString* operationStyle, ::g::Fuse::Visual** pageVisual, int32_t* __retval);
void Navigator__FuseNavigationIRouterOutletPartialPrepareGoto_fn(Navigator* __this, double* progress);
void Navigator__FuseNavigationIRouterOutletget_Type_fn(Navigator* __this, int32_t* __retval);
void Navigator__GetCache_fn(Navigator* __this, uString* path, ::g::Uno::Collections::List** __retval);
void Navigator__GetRemove_fn(::g::Fuse::Visual* elm, int32_t* __retval);
void Navigator__GetReuse_fn(::g::Fuse::Visual* elm, int32_t* __retval);
void Navigator__GetSwipeBack_fn(::g::Fuse::Visual* elm, int32_t* __retval);
void Navigator__GetVisual_fn(Navigator* __this, uString* path, ::g::Fuse::Visual** __retval);
void Navigator__GotoImpl_fn(Navigator* __this, ::g::Fuse::Navigation::RouterPage* routerPage, int32_t* gotoMode, int32_t* operation, uString* operationStyle, ::g::Fuse::Visual** pageVisual, int32_t* __retval);
void Navigator__get_GotoState_fn(Navigator* __this, int32_t* __retval);
void Navigator__set_GotoState_fn(Navigator* __this, int32_t* value);
void Navigator__InstantiateTemplate_fn(Navigator* __this, ::g::Uno::UX::Template* f, uString* path, ::g::Fuse::Visual** __retval);
void Navigator__IsRemoveLevel_fn(Navigator* __this, ::g::Fuse::Visual* elm, int32_t* type, bool* __retval);
void Navigator__IsReuseLevel_fn(Navigator* __this, ::g::Fuse::Visual* elm, int32_t* type, bool* __retval);
void Navigator__get_Navigation1_fn(Navigator* __this, ::g::Fuse::Navigation::ExplicitNavigation** __retval);
void Navigator__get_NavigatorSwipeBack_fn(Navigator* __this, ::g::Fuse::Controls::NavigatorSwipe** __retval);
void Navigator__New4_fn(Navigator** __retval);
void Navigator__OnChildRemoved_fn(Navigator* __this, ::g::Fuse::Node* elm);
void Navigator__OnHistoryChanged_fn(Navigator* __this, uObject* sender);
void Navigator__OnRooted_fn(Navigator* __this);
void Navigator__OnSwitched_fn(Navigator* __this, ::g::Fuse::Controls::NavigatorSwitchedArgs* args);
void Navigator__OnUnrooted_fn(Navigator* __this);
void Navigator__OnUpdate_fn(Navigator* __this);
void Navigator__get_Pages_fn(Navigator* __this, uObject** __retval);
void Navigator__set_Pages_fn(Navigator* __this, uObject* value);
void Navigator__PageSwipeBackDirection_fn(Navigator* __this, ::g::Fuse::Visual* elm, int32_t* __retval);
void Navigator__Prepare1_fn(Navigator* __this, Navigator__NavPage* curPage, ::g::Fuse::Navigation::RouterPage* routerPage, int32_t* operation, Navigator__PrepareResult* __retval);
void Navigator__ReleasePage_fn(Navigator* __this, ::g::Fuse::Visual* v);
void Navigator__get_Remove_fn(Navigator* __this, int32_t* __retval);
void Navigator__set_Remove_fn(Navigator* __this, int32_t* value);
void Navigator__ResolveDeferred_fn(Navigator* __this);
void Navigator__get_Reuse_fn(Navigator* __this, int32_t* __retval);
void Navigator__set_Reuse_fn(Navigator* __this, int32_t* value);
void Navigator__RootInteraction_fn(Navigator* __this);
void Navigator__SetRemove_fn(::g::Fuse::Visual* elm, int32_t* value);
void Navigator__SetReuse_fn(::g::Fuse::Visual* elm, int32_t* value);
void Navigator__SetSwipeBack_fn(::g::Fuse::Visual* elm, int32_t* value);
void Navigator__SetTransitionState_fn(Navigator* __this, uObject* owner, bool* on);
void Navigator__get_SwipeBack_fn(Navigator* __this, int32_t* __retval);
void Navigator__set_SwipeBack_fn(Navigator* __this, int32_t* value);
void Navigator__SwitchDeferred_fn(Navigator* __this);
void Navigator__add_Switched_fn(Navigator* __this, uDelegate* value);
void Navigator__remove_Switched_fn(Navigator* __this, uDelegate* value);
void Navigator__SwitchToPage_fn(Navigator* __this, Navigator__NavPage* newPage, int32_t* gotoMode, int32_t* operation, uString* operationStyle, bool* usedPrepared);
void Navigator__UnrootInteraction_fn(Navigator* __this);
void Navigator__UpdateNavigationState_fn(Navigator* __this);

struct Navigator : ::g::Fuse::Controls::NavigationControl
{
    int32_t _swipeBack;
    uStrong< ::g::Fuse::Controls::NavigatorSwipe*> _navigatorSwipeBack;
    uStrong< ::g::Fuse::Navigation::Router*> _router;
    static uSStrong< ::g::Fuse::PropertyHandle*> _propSwipeBack_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _propSwipeBack() { return Navigator_typeof()->Init(), _propSwipeBack_; }
    int32_t _gotoState;
    ::g::Fuse::Internal::MiniList _activeTransitions;
    uStrong< ::g::Uno::Collections::Dictionary*> _pathCache;
    bool _prepareBack;
    uStrong<Navigator__NavPage*> _current;
    uStrong<Navigator__NavPage*> _prepared;
    uStrong< ::g::Fuse::Node*> _listenBusy;
    double _listenStart;
    bool _listenTimeout;
    int32_t _deferPageSwitch;
    float _deferPageSwitchTimeout;
    uStrong<Navigator__DeferSwitch*> _deferred;
    static uSStrong< ::g::Fuse::PropertyHandle*> _propReuse_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _propReuse() { return Navigator_typeof()->Init(), _propReuse_; }
    int32_t _reuse;
    static uSStrong< ::g::Fuse::PropertyHandle*> _propRemove_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _propRemove() { return Navigator_typeof()->Init(), _propRemove_; }
    int32_t _remove;
    uStrong<uString*> _DefaultPath;
    uStrong<uDelegate*> Switched1;

    void ctor_8();
    void AddToCache(Navigator__NavPage* page, ::g::Fuse::Visual* target);
    void BusyChanged();
    void CheckInteraction();
    void CleanupChildren(::g::Fuse::Visual* exclude);
    void CleanupListenBusy();
    void CleanupPrepared(::g::Fuse::Visual* newTarget);
    uString* DefaultPath();
    void DefaultPath(uString* value);
    uString* DefaultTemplate();
    void DefaultTemplate(uString* value);
    int32_t DeferPageSwitch();
    void DeferPageSwitch(int32_t value);
    float DeferPageSwitchTimeout();
    void DeferPageSwitchTimeout(float value);
    void EnablePageSwipeBack();
    ::g::Fuse::Visual* FindPage(::g::Uno::UX::Selector path);
    ::g::Uno::Collections::List* GetCache(uString* path);
    ::g::Fuse::Visual* GetVisual(uString* path);
    int32_t GotoImpl(::g::Fuse::Navigation::RouterPage* routerPage, int32_t gotoMode, int32_t operation, uString* operationStyle, ::g::Fuse::Visual** pageVisual);
    int32_t GotoState();
    void GotoState(int32_t value);
    ::g::Fuse::Visual* InstantiateTemplate(::g::Uno::UX::Template* f, uString* path);
    bool IsRemoveLevel(::g::Fuse::Visual* elm, int32_t type);
    bool IsReuseLevel(::g::Fuse::Visual* elm, int32_t type);
    ::g::Fuse::Navigation::ExplicitNavigation* Navigation1();
    ::g::Fuse::Controls::NavigatorSwipe* NavigatorSwipeBack();
    void OnHistoryChanged(uObject* sender);
    void OnSwitched(::g::Fuse::Controls::NavigatorSwitchedArgs* args);
    void OnUpdate();
    uObject* Pages();
    void Pages(uObject* value);
    int32_t PageSwipeBackDirection(::g::Fuse::Visual* elm);
    Navigator__PrepareResult Prepare1(Navigator__NavPage* curPage, ::g::Fuse::Navigation::RouterPage* routerPage, int32_t operation);
    void ReleasePage(::g::Fuse::Visual* v);
    int32_t Remove2();
    void Remove2(int32_t value);
    void ResolveDeferred();
    int32_t Reuse();
    void Reuse(int32_t value);
    void RootInteraction();
    void SetTransitionState(uObject* owner, bool on);
    int32_t SwipeBack();
    void SwipeBack(int32_t value);
    void SwitchDeferred();
    void add_Switched(uDelegate* value);
    void remove_Switched(uDelegate* value);
    void SwitchToPage(Navigator__NavPage* newPage, int32_t gotoMode, int32_t operation, uString* operationStyle, bool usedPrepared);
    void UnrootInteraction();
    void UpdateNavigationState();
    static int32_t GetRemove(::g::Fuse::Visual* elm);
    static int32_t GetReuse(::g::Fuse::Visual* elm);
    static int32_t GetSwipeBack(::g::Fuse::Visual* elm);
    static Navigator* New4();
    static void SetRemove(::g::Fuse::Visual* elm, int32_t value);
    static void SetReuse(::g::Fuse::Visual* elm, int32_t value);
    static void SetSwipeBack(::g::Fuse::Visual* elm, int32_t value);
};
// }

}}} // ::g::Fuse::Controls
