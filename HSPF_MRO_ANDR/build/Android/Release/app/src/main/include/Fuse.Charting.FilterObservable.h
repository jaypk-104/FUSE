// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/FilterObservable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Charting.ObservableData.h>
#include <Fuse.IArray.h>
#include <Fuse.Reactive.IObservableArray.h>
#include <Fuse.Reactive.IObserver.h>
namespace g{namespace Fuse{namespace Charting{struct FilterObservable;}}}
namespace g{namespace Fuse{namespace Charting{struct FilterObservable__SourceItem;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Charting{

// internal abstract class FilterObservable
// {
struct FilterObservable_type : ::g::Fuse::Charting::ObservableData_type
{
    ::g::Fuse::Reactive::IObserver interface2;
    void(*fp_Accept)(::g::Fuse::Charting::FilterObservable*, uObject*, int32_t*, int32_t*, bool*);
};

FilterObservable_type* FilterObservable_typeof();
void FilterObservable__CleanSubscription_fn(FilterObservable* __this);
void FilterObservable__ClearSource_fn(FilterObservable* __this);
void FilterObservable__FuseReactiveIObserverOnAdd_fn(FilterObservable* __this, uObject* addedValue);
void FilterObservable__FuseReactiveIObserverOnClear_fn(FilterObservable* __this);
void FilterObservable__FuseReactiveIObserverOnFailed_fn(FilterObservable* __this, uString* message);
void FilterObservable__FuseReactiveIObserverOnInsertAt_fn(FilterObservable* __this, int32_t* index, uObject* value);
void FilterObservable__FuseReactiveIObserverOnNewAll_fn(FilterObservable* __this, uObject* values);
void FilterObservable__FuseReactiveIObserverOnNewAt_fn(FilterObservable* __this, int32_t* index, uObject* newValue);
void FilterObservable__FuseReactiveIObserverOnRemoveAt_fn(FilterObservable* __this, int32_t* index);
void FilterObservable__FuseReactiveIObserverOnSet_fn(FilterObservable* __this, uObject* newValue);
void FilterObservable__GetItem_fn(FilterObservable* __this, int32_t* index, uObject** __retval);
void FilterObservable__GetLength_fn(FilterObservable* __this, int32_t* __retval);
void FilterObservable__OnSubscription_fn(FilterObservable* __this);
void FilterObservable__OnUnsubscription_fn(FilterObservable* __this);
void FilterObservable__get_Source_fn(FilterObservable* __this, uObject** __retval);
void FilterObservable__set_Source_fn(FilterObservable* __this, uObject* value);
void FilterObservable__SyncDeferAction_fn(FilterObservable* __this);
void FilterObservable__SyncItems_fn(FilterObservable* __this);

struct FilterObservable : ::g::Fuse::Charting::ObservableData
{
    uStrong<uObject*> _source;
    uStrong<uObject*> _subscription;
    uStrong< ::g::Uno::Collections::List*> _sourceItems;
    uStrong< ::g::Uno::Collections::List*> _outputItems;
    bool _syncDefer;

    bool Accept(uObject* value, int32_t index, int32_t count) { bool __retval; return (((FilterObservable_type*)__type)->fp_Accept)(this, value, &index, &count, &__retval), __retval; }
    void CleanSubscription();
    void ClearSource();
    uObject* Source();
    void Source(uObject* value);
    void SyncDeferAction();
    void SyncItems();
};
// }

}}} // ::g::Fuse::Charting
