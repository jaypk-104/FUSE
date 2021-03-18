// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/DataStats.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.Int2.h>
#include <Uno.Int4.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Charting{struct Data;}}}
namespace g{namespace Fuse{namespace Charting{struct DataSeries;}}}
namespace g{namespace Fuse{namespace Charting{struct DataSpec;}}}
namespace g{namespace Fuse{namespace Charting{struct DataStats;}}}

namespace g{
namespace Fuse{
namespace Charting{

// internal sealed class DataStats
// {
uType* DataStats_typeof();
void DataStats__ctor__fn(DataStats* __this);
void DataStats__AddValueAssign_fn(uObject* data, uObject* prev);
void DataStats__ApplyLimits_fn(DataStats* __this, ::g::Fuse::Charting::DataSpec* spec, int32_t* offset, int32_t* limit, bool* hasLimit);
void DataStats__get_Baseline_fn(DataStats* __this, ::g::Uno::Float4* __retval);
void DataStats__Calculate_fn(uObject* data, ::g::Fuse::Charting::DataSpec* spec, DataStats** __retval);
void DataStats__CalculateAll_fn(uObject* series, ::g::Fuse::Charting::DataSpec* spec, DataStats** __retval);
void DataStats__Clone_fn(DataStats* __this, DataStats** __retval);
void DataStats__Combine_fn(DataStats* __this, DataStats* ds);
void DataStats__CountValueAssign_fn(uObject* data, ::g::Fuse::Charting::DataSpec* spec);
void DataStats__Extend_fn(DataStats* __this, ::g::Uno::Int2* Extend1);
void DataStats__get_Extended_fn(DataStats* __this, ::g::Uno::Int2* __retval);
void DataStats__GetRelativeValue_fn(DataStats* __this, float* v, int32_t* axis, float* __retval);
void DataStats__GetRelativeValue1_fn(DataStats* __this, ::g::Uno::Float4* v, ::g::Uno::Float4* __retval);
void DataStats__MergeAxis_fn(DataStats* __this, int32_t* a, int32_t* b);
void DataStats__New1_fn(DataStats** __retval);
void DataStats__get_Range_fn(DataStats* __this, ::g::Uno::Int2* __retval);
void DataStats__get_RangeExtended_fn(DataStats* __this, ::g::Uno::Int2* __retval);
void DataStats__get_WindowRange_fn(DataStats* __this, ::g::Uno::Int2* __retval);

struct DataStats : uObject
{
    int32_t FullCount;
    int32_t Count;
    int32_t Offset;
    ::g::Uno::Int2 _extend;
    ::g::Uno::Float4 Minimum;
    ::g::Uno::Float4 Maximum;
    ::g::Uno::Int4 Steps;
    ::g::Uno::Float4 Total;

    void ctor_();
    void ApplyLimits(::g::Fuse::Charting::DataSpec* spec, int32_t offset, int32_t limit, bool hasLimit);
    ::g::Uno::Float4 Baseline();
    DataStats* Clone();
    void Combine(DataStats* ds);
    void Extend(::g::Uno::Int2 Extend1);
    ::g::Uno::Int2 Extended();
    float GetRelativeValue(float v, int32_t axis);
    ::g::Uno::Float4 GetRelativeValue1(::g::Uno::Float4 v);
    void MergeAxis(int32_t a, int32_t b);
    ::g::Uno::Int2 Range();
    ::g::Uno::Int2 RangeExtended();
    ::g::Uno::Int2 WindowRange();
    static void AddValueAssign(uObject* data, uObject* prev);
    static DataStats* Calculate(uObject* data, ::g::Fuse::Charting::DataSpec* spec);
    static DataStats* CalculateAll(uObject* series, ::g::Fuse::Charting::DataSpec* spec);
    static void CountValueAssign(uObject* data, ::g::Fuse::Charting::DataSpec* spec);
    static DataStats* New1();
};
// }

}}} // ::g::Fuse::Charting
