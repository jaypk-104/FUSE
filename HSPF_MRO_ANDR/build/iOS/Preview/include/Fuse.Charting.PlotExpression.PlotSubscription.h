// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotExpression.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
#include <Uno.UX.Selector.h>
namespace g{namespace Fuse{namespace Charting{struct PlotBehavior;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotExpression;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotExpression__PlotSubscription;}}}

namespace g{
namespace Fuse{
namespace Charting{

// private sealed class PlotExpression.PlotSubscription
// {
struct PlotExpression__PlotSubscription_type : uType
{
    ::g::Uno::IDisposable interface0;
};

PlotExpression__PlotSubscription_type* PlotExpression__PlotSubscription_typeof();
void PlotExpression__PlotSubscription__ctor__fn(PlotExpression__PlotSubscription* __this, ::g::Fuse::Charting::PlotExpression* expr, ::g::Fuse::Charting::PlotBehavior* plot, ::g::Uno::UX::Selector* key, int32_t* field, uObject* listener);
void PlotExpression__PlotSubscription__Dispose_fn(PlotExpression__PlotSubscription* __this);
void PlotExpression__PlotSubscription__GetValue_fn(PlotExpression__PlotSubscription* __this, uObject** __retval);
void PlotExpression__PlotSubscription__New1_fn(::g::Fuse::Charting::PlotExpression* expr, ::g::Fuse::Charting::PlotBehavior* plot, ::g::Uno::UX::Selector* key, int32_t* field, uObject* listener, PlotExpression__PlotSubscription** __retval);
void PlotExpression__PlotSubscription__OnDataChanged_fn(PlotExpression__PlotSubscription* __this, uObject* s, uObject* a);
void PlotExpression__PlotSubscription__PushValue_fn(PlotExpression__PlotSubscription* __this);

struct PlotExpression__PlotSubscription : uObject
{
    uStrong< ::g::Fuse::Charting::PlotExpression*> _expr;
    uStrong< ::g::Fuse::Charting::PlotBehavior*> _plot;
    ::g::Uno::UX::Selector _key;
    int32_t _field;
    uStrong<uObject*> _listener;
    static uSStrong<uObject*> _undefined_;
    static uSStrong<uObject*>& _undefined() { return PlotExpression__PlotSubscription_typeof()->Init(), _undefined_; }
    static ::g::Uno::UX::Selector CountName_;
    static ::g::Uno::UX::Selector& CountName() { return PlotExpression__PlotSubscription_typeof()->Init(), CountName_; }
    static ::g::Uno::UX::Selector HasNextName_;
    static ::g::Uno::UX::Selector& HasNextName() { return PlotExpression__PlotSubscription_typeof()->Init(), HasNextName_; }
    static ::g::Uno::UX::Selector HasPrevName_;
    static ::g::Uno::UX::Selector& HasPrevName() { return PlotExpression__PlotSubscription_typeof()->Init(), HasPrevName_; }
    static ::g::Uno::UX::Selector OffsetName_;
    static ::g::Uno::UX::Selector& OffsetName() { return PlotExpression__PlotSubscription_typeof()->Init(), OffsetName_; }
    static ::g::Uno::UX::Selector DataMinlineName_;
    static ::g::Uno::UX::Selector& DataMinlineName() { return PlotExpression__PlotSubscription_typeof()->Init(), DataMinlineName_; }
    static ::g::Uno::UX::Selector DataMaxlineName_;
    static ::g::Uno::UX::Selector& DataMaxlineName() { return PlotExpression__PlotSubscription_typeof()->Init(), DataMaxlineName_; }
    static ::g::Uno::UX::Selector BaselineName_;
    static ::g::Uno::UX::Selector& BaselineName() { return PlotExpression__PlotSubscription_typeof()->Init(), BaselineName_; }
    static ::g::Uno::UX::Selector StepsName_;
    static ::g::Uno::UX::Selector& StepsName() { return PlotExpression__PlotSubscription_typeof()->Init(), StepsName_; }

    void ctor_(::g::Fuse::Charting::PlotExpression* expr, ::g::Fuse::Charting::PlotBehavior* plot, ::g::Uno::UX::Selector key, int32_t field, uObject* listener);
    void Dispose();
    uObject* GetValue();
    void OnDataChanged(uObject* s, uObject* a);
    void PushValue();
    static PlotExpression__PlotSubscription* New1(::g::Fuse::Charting::PlotExpression* expr, ::g::Fuse::Charting::PlotBehavior* plot, ::g::Uno::UX::Selector key, int32_t field, uObject* listener);
};
// }

}}} // ::g::Fuse::Charting
