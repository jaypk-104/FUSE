// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/UXFunctions/ColorFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Alive{struct ColorFunctions;}}

namespace g{
namespace Alive{

// internal static class ColorFunctions
// {
uClassType* ColorFunctions_typeof();
void ColorFunctions__TryMix_fn(uObject* left, uObject* right, uObject* weight, uObject** result, bool* __retval);
void ColorFunctions__WithOpacity_fn(uObject* value, uObject* opacity, uObject** __retval);

struct ColorFunctions : uObject
{
    static bool TryMix(uObject* left, uObject* right, uObject* weight, uObject** result);
    static uObject* WithOpacity(uObject* value, uObject* opacity);
};
// }

}} // ::g::Alive
