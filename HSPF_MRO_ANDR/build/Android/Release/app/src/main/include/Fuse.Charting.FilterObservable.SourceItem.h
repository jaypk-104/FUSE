// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/FilterObservable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Charting{struct FilterObservable__SourceItem;}}}

namespace g{
namespace Fuse{
namespace Charting{

// private sealed class FilterObservable.SourceItem
// {
uType* FilterObservable__SourceItem_typeof();
void FilterObservable__SourceItem__ctor__fn(FilterObservable__SourceItem* __this);
void FilterObservable__SourceItem__get_Desired_fn(FilterObservable__SourceItem* __this, bool* __retval);
void FilterObservable__SourceItem__New1_fn(FilterObservable__SourceItem** __retval);

struct FilterObservable__SourceItem : uObject
{
    int32_t Index;
    uStrong<uObject*> Value;
    bool Accept;

    void ctor_();
    bool Desired();
    static FilterObservable__SourceItem* New1();
};
// }

}}} // ::g::Fuse::Charting
