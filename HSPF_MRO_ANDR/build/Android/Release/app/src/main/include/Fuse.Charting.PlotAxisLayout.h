// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotAxisLayout.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Layouts.Layout.h>
namespace g{namespace Fuse{namespace Charting{struct AxisEntry;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotAxisLayout;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotAxisLayout__CellSizing;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Charting{

// public sealed class PlotAxisLayout
// {
::g::Fuse::Layouts::Layout_type* PlotAxisLayout_typeof();
void PlotAxisLayout__ArrangePaddingBox_fn(PlotAxisLayout* __this, ::g::Fuse::Visual* container, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp);
void PlotAxisLayout__CellSize_fn(PlotAxisLayout* __this, ::g::Fuse::LayoutParams* lp, PlotAxisLayout__CellSizing* __retval);
void PlotAxisLayout__get_ContentPosition_fn(PlotAxisLayout* __this, int32_t* __retval);
void PlotAxisLayout__set_ContentPosition_fn(PlotAxisLayout* __this, int32_t* value);
void PlotAxisLayout__get_ContentPositionBase_fn(PlotAxisLayout* __this, float* __retval);
void PlotAxisLayout__set_ContentPositionBase_fn(PlotAxisLayout* __this, float* value);
void PlotAxisLayout__GetContentSize_fn(PlotAxisLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void PlotAxisLayout__GetNodeAxisEntry_fn(PlotAxisLayout* __this, ::g::Fuse::Node* n, ::g::Fuse::Charting::AxisEntry** __retval);
void PlotAxisLayout__get_Orientation_fn(PlotAxisLayout* __this, int32_t* __retval);
void PlotAxisLayout__set_Orientation_fn(PlotAxisLayout* __this, int32_t* value);
void PlotAxisLayout__get_Scale_fn(PlotAxisLayout* __this, float* __retval);
void PlotAxisLayout__set_Scale_fn(PlotAxisLayout* __this, float* value);
void PlotAxisLayout__get_StepCount_fn(PlotAxisLayout* __this, int32_t* __retval);
void PlotAxisLayout__set_StepCount_fn(PlotAxisLayout* __this, int32_t* value);

struct PlotAxisLayout : ::g::Fuse::Layouts::Layout
{
    int32_t _position;
    int32_t _stepCount;
    int32_t _orientation;
    float _positionBase;
    float _scale;

    PlotAxisLayout__CellSizing CellSize(::g::Fuse::LayoutParams lp);
    int32_t ContentPosition();
    void ContentPosition(int32_t value);
    float ContentPositionBase();
    void ContentPositionBase(float value);
    ::g::Fuse::Charting::AxisEntry* GetNodeAxisEntry(::g::Fuse::Node* n);
    int32_t Orientation();
    void Orientation(int32_t value);
    float Scale();
    void Scale(float value);
    int32_t StepCount();
    void StepCount(int32_t value);
};
// }

}}} // ::g::Fuse::Charting
