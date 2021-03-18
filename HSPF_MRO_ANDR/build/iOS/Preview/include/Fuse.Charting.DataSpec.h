// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/DataStats.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Charting{struct DataSpec;}}}

namespace g{
namespace Fuse{
namespace Charting{

// internal sealed class DataSpec
// {
uType* DataSpec_typeof();
void DataSpec__ctor__fn(DataSpec* __this);
void DataSpec__add_Changed_fn(DataSpec* __this, uDelegate* value);
void DataSpec__remove_Changed_fn(DataSpec* __this, uDelegate* value);
void DataSpec__GetAxisMetric_fn(DataSpec* __this, int32_t* axis, int32_t* __retval);
void DataSpec__GetAxisSteps_fn(DataSpec* __this, int32_t* axis, int32_t* __retval);
void DataSpec__GetRange_fn(DataSpec* __this, int32_t* axis, ::g::Uno::Float2* __retval);
void DataSpec__HasRange_fn(DataSpec* __this, int32_t* axis, bool* __retval);
void DataSpec__IsCountAxis_fn(DataSpec* __this, int32_t* axis, bool* __retval);
void DataSpec__New1_fn(DataSpec** __retval);
void DataSpec__OnChanged_fn(DataSpec* __this);
void DataSpec__get_RangePadding_fn(DataSpec* __this, float* __retval);
void DataSpec__set_RangePadding_fn(DataSpec* __this, float* value);
void DataSpec__SetAxisMetric_fn(DataSpec* __this, int32_t* axis, int32_t* value);
void DataSpec__SetAxisSteps_fn(DataSpec* __this, int32_t* axis, int32_t* value);
void DataSpec__SetRange_fn(DataSpec* __this, int32_t* axis, ::g::Uno::Float2* value);

struct DataSpec : uObject
{
    uStrong<uArray*> _axisMetric;
    uStrong<uArray*> _axisSteps;
    float _rangePadding;
    uStrong<uArray*> _hasRange;
    uStrong<uArray*> _range;
    uStrong<uDelegate*> Changed1;

    void ctor_();
    void add_Changed(uDelegate* value);
    void remove_Changed(uDelegate* value);
    int32_t GetAxisMetric(int32_t axis);
    int32_t GetAxisSteps(int32_t axis);
    ::g::Uno::Float2 GetRange(int32_t axis);
    bool HasRange(int32_t axis);
    bool IsCountAxis(int32_t axis);
    void OnChanged();
    float RangePadding();
    void RangePadding(float value);
    void SetAxisMetric(int32_t axis, int32_t value);
    void SetAxisSteps(int32_t axis, int32_t value);
    void SetRange(int32_t axis, ::g::Uno::Float2 value);
    static DataSpec* New1();
};
// }

}}} // ::g::Fuse::Charting
