// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.12.0/CoreGraphics/CoreGraphicsSurface.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.SurfacePath.h>
namespace g{namespace Fuse{namespace Drawing{struct CoreGraphicsSurfacePath;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed extern class CoreGraphicsSurfacePath
// {
uType* CoreGraphicsSurfacePath_typeof();
void CoreGraphicsSurfacePath__ctor_1_fn(CoreGraphicsSurfacePath* __this);
void CoreGraphicsSurfacePath__New1_fn(CoreGraphicsSurfacePath** __retval);

struct CoreGraphicsSurfacePath : ::g::Fuse::Drawing::SurfacePath
{
    void* Path;
    int32_t FillRule;

    void ctor_1();
    static CoreGraphicsSurfacePath* New1();
};
// }

}}} // ::g::Fuse::Drawing
