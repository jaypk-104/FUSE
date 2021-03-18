// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotDataItem.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IObject.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Charting{struct IPlotDataItem;}}}

namespace g{
namespace Fuse{
namespace Charting{

// internal abstract class IPlotDataItem
// {
struct IPlotDataItem_type : uType
{
    ::g::Fuse::IObject interface0;
    void(*fp_ContainsKey)(::g::Fuse::Charting::IPlotDataItem*, uString*, bool*);
    void(*fp_get_Item)(::g::Fuse::Charting::IPlotDataItem*, uString*, uObject**);
    void(*fp_get_Keys)(::g::Fuse::Charting::IPlotDataItem*, uArray**);
};

IPlotDataItem_type* IPlotDataItem_typeof();
void IPlotDataItem__ctor__fn(IPlotDataItem* __this);
void IPlotDataItem__add_Changed_fn(IPlotDataItem* __this, uDelegate* value);
void IPlotDataItem__remove_Changed_fn(IPlotDataItem* __this, uDelegate* value);
void IPlotDataItem__OnChanged_fn(IPlotDataItem* __this);

struct IPlotDataItem : uObject
{
    uStrong<uDelegate*> Changed1;

    void ctor_();
    void add_Changed(uDelegate* value);
    void remove_Changed(uDelegate* value);
    bool ContainsKey(uString* key) { bool __retval; return (((IPlotDataItem_type*)__type)->fp_ContainsKey)(this, key, &__retval), __retval; }
    uObject* Item(uString* key) { uObject* __retval; return (((IPlotDataItem_type*)__type)->fp_get_Item)(this, key, &__retval), __retval; }
    uArray* Keys() { uArray* __retval; return (((IPlotDataItem_type*)__type)->fp_get_Keys)(this, &__retval), __retval; }
    void OnChanged();
};
// }

}}} // ::g::Fuse::Charting
