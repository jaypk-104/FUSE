// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.12.0/Ray.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float3.h>
#include <Uno.ValueType.h>
namespace g{namespace Fuse{struct Ray;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{

// public struct Ray
// {
uStructType* Ray_typeof();
void Ray__ctor_1_fn(Ray* __this, ::g::Uno::Float3* pos, ::g::Uno::Float3* dir);
void Ray__New1_fn(::g::Uno::Float3* pos, ::g::Uno::Float3* dir, Ray* __retval);
void Ray__Normalize_fn(Ray* ray, Ray* __retval);
void Ray__Transform_fn(Ray* ray, ::g::Uno::Float4x4* transform, Ray* __retval);

struct Ray
{
    ::g::Uno::Float3 Position;
    ::g::Uno::Float3 Direction;

    void ctor_1(::g::Uno::Float3 pos, ::g::Uno::Float3 dir);
};

Ray Ray__New1(::g::Uno::Float3 pos, ::g::Uno::Float3 dir);
Ray Ray__Normalize(Ray ray);
Ray Ray__Transform(Ray ray, ::g::Uno::Float4x4 transform);
// }

}} // ::g::Fuse
