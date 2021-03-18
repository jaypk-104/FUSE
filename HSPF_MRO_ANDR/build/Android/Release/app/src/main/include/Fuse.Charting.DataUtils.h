// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/DataUtils.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Charting{struct DataUtils;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Charting{

// internal static class DataUtils
// {
uClassType* DataUtils_typeof();
void DataUtils__GetStepping_fn(int32_t* steps, float* min, float* max);
void DataUtils__RelDiv_fn(float* num, float* den, float* __retval);
void DataUtils__RelDiv1_fn(::g::Uno::Float4* num, ::g::Uno::Float4* den, ::g::Uno::Float4* __retval);

struct DataUtils : uObject
{
    static void GetStepping(int32_t* steps, float* min, float* max);
    static float RelDiv(float num, float den);
    static ::g::Uno::Float4 RelDiv1(::g::Uno::Float4 num, ::g::Uno::Float4 den);
};
// }

}}} // ::g::Fuse::Charting
