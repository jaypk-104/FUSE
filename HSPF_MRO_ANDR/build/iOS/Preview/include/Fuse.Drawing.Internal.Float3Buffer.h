// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing/1.12.0/Internal/BufferCollections.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Internal.TypedBuffer.h>
namespace g{namespace Fuse{namespace Drawing{namespace Internal{struct Float3Buffer;}}}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Internal{

// public sealed class Float3Buffer
// {
uType* Float3Buffer_typeof();
void Float3Buffer__ctor_2_fn(Float3Buffer* __this);
void Float3Buffer__Append_fn(Float3Buffer* __this, double* x, double* y, double* z);
void Float3Buffer__Append1_fn(Float3Buffer* __this, ::g::Uno::Float3* value);
void Float3Buffer__New3_fn(Float3Buffer** __retval);
void Float3Buffer__Set_fn(Float3Buffer* __this, int32_t* offset, ::g::Uno::Float3* value);

struct Float3Buffer : ::g::Fuse::Drawing::Internal::TypedBuffer
{
    void ctor_2();
    void Append(double x, double y, double z);
    void Append1(::g::Uno::Float3 value);
    void Set(int32_t offset, ::g::Uno::Float3 value);
    static Float3Buffer* New3();
};
// }

}}}} // ::g::Fuse::Drawing::Internal
