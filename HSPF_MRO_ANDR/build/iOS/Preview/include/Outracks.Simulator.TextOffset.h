// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/TextOffset.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct TextOffset;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class TextOffset
// {
uType* TextOffset_typeof();
void TextOffset__ctor__fn(TextOffset* __this, int32_t* offset);
void TextOffset__Equals_fn(TextOffset* __this, uObject* obj, bool* __retval);
void TextOffset__Equals2_fn(TextOffset* __this, TextOffset* other, bool* __retval);
void TextOffset__GetHashCode_fn(TextOffset* __this, int32_t* __retval);
void TextOffset__New1_fn(int32_t* offset, TextOffset** __retval);
void TextOffset__op_Equality_fn(TextOffset* a, TextOffset* b, bool* __retval);
void TextOffset__op_GreaterThan_fn(TextOffset* a, TextOffset* b, bool* __retval);
void TextOffset__op_GreaterThanOrEqual_fn(TextOffset* a, TextOffset* b, bool* __retval);
void TextOffset__op_Implicit_fn(TextOffset* d, int32_t* __retval);
void TextOffset__op_Inequality_fn(TextOffset* a, TextOffset* b, bool* __retval);
void TextOffset__op_LessThan_fn(TextOffset* a, TextOffset* b, bool* __retval);
void TextOffset__op_LessThanOrEqual_fn(TextOffset* a, TextOffset* b, bool* __retval);
void TextOffset__ToString_fn(TextOffset* __this, uString** __retval);

struct TextOffset : uObject
{
    int32_t _offset;

    void ctor_(int32_t offset);
    bool Equals2(TextOffset* other);
    static TextOffset* New1(int32_t offset);
    static bool op_Equality(TextOffset* a, TextOffset* b);
    static bool op_GreaterThan(TextOffset* a, TextOffset* b);
    static bool op_GreaterThanOrEqual(TextOffset* a, TextOffset* b);
    static int32_t op_Implicit(TextOffset* d);
    static bool op_Inequality(TextOffset* a, TextOffset* b);
    static bool op_LessThan(TextOffset* a, TextOffset* b);
    static bool op_LessThanOrEqual(TextOffset* a, TextOffset* b);
};
// }

}}} // ::g::Outracks::Simulator
