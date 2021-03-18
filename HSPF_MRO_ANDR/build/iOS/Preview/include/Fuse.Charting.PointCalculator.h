// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotPoint.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Fuse{namespace Animations{struct AttractorConfig;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotDataPoint;}}}
namespace g{namespace Fuse{namespace Charting{struct PointCalculator;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Charting{

// internal struct PointCalculator
// {
uStructType* PointCalculator_typeof();
void PointCalculator__AngleToAnchor_fn(PointCalculator* __this, float* angle, ::g::Uno::Float2* __retval);
void PointCalculator__CheckAttractor_fn(PointCalculator* __this, ::g::Fuse::Animations::AttractorConfig* attractor, uObject* where);
void PointCalculator__Init_fn(PointCalculator* __this);
void PointCalculator__get_IsRadial_fn(PointCalculator* __this, bool* __retval);
void PointCalculator__PiRange_fn(float* a, float* __retval);
void PointCalculator__PrepareEntry_fn(PointCalculator* __this, ::g::Fuse::Charting::PlotDataPoint* entry, ::g::Uno::Float2* __retval);
void PointCalculator__ValueToPos_fn(PointCalculator* __this, ::g::Uno::Float2* value, ::g::Uno::Float2* __retval);

struct PointCalculator
{
    int32_t Style;
    float Offset;

    ::g::Uno::Float2 AngleToAnchor(float angle);
    void CheckAttractor(::g::Fuse::Animations::AttractorConfig* attractor, uObject* where);
    void Init();
    bool IsRadial();
    ::g::Uno::Float2 PrepareEntry(::g::Fuse::Charting::PlotDataPoint* entry);
    ::g::Uno::Float2 ValueToPos(::g::Uno::Float2 value);
    static float PiRange(float a);
};
// }

}}} // ::g::Fuse::Charting
