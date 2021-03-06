// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Math.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Int2;}}
namespace g{namespace Uno{struct Math;}}

namespace g{
namespace Uno{

// public static class Math
// {
uClassType* Math_typeof();
void Math__Abs_fn(double* x, double* __retval);
void Math__Abs1_fn(float* x, float* __retval);
void Math__Abs2_fn(::g::Uno::Float2* a, ::g::Uno::Float2* __retval);
void Math__Abs4_fn(::g::Uno::Float4* a, ::g::Uno::Float4* __retval);
void Math__Abs5_fn(int32_t* x, int32_t* __retval);
void Math__Acos_fn(double* radians, double* __retval);
void Math__Acos1_fn(float* radians, float* __retval);
void Math__Asin_fn(double* radians, double* __retval);
void Math__Atan_fn(double* radians, double* __retval);
void Math__Atan21_fn(double* y, double* x, double* __retval);
void Math__Atan22_fn(float* y, float* x, float* __retval);
void Math__Ceil_fn(double* x, double* __retval);
void Math__Ceil1_fn(float* x, float* __retval);
void Math__Ceil2_fn(::g::Uno::Float2* v, ::g::Uno::Float2* __retval);
void Math__Clamp_fn(double* x, double* minimum, double* maximum, double* __retval);
void Math__Clamp1_fn(float* x, float* minimum, float* maximum, float* __retval);
void Math__Clamp2_fn(::g::Uno::Float2* x, float* minimum, float* maximum, ::g::Uno::Float2* __retval);
void Math__Clamp3_fn(::g::Uno::Float2* x, ::g::Uno::Float2* minimum, ::g::Uno::Float2* maximum, ::g::Uno::Float2* __retval);
void Math__Clamp4_fn(::g::Uno::Float3* x, float* minimum, float* maximum, ::g::Uno::Float3* __retval);
void Math__Clamp6_fn(::g::Uno::Float4* x, float* minimum, float* maximum, ::g::Uno::Float4* __retval);
void Math__Clamp8_fn(int32_t* x, int32_t* minimum, int32_t* maximum, int32_t* __retval);
void Math__Cos_fn(double* radians, double* __retval);
void Math__Cos1_fn(float* radians, float* __retval);
void Math__DegreesToRadians_fn(double* degrees, double* __retval);
void Math__DegreesToRadians1_fn(float* degrees, float* __retval);
void Math__DegreesToRadians3_fn(::g::Uno::Float3* degrees, ::g::Uno::Float3* __retval);
void Math__Exp_fn(double* x, double* __retval);
void Math__Exp1_fn(float* x, float* __retval);
void Math__Exp21_fn(double* x, double* __retval);
void Math__Exp22_fn(float* x, float* __retval);
void Math__Floor_fn(double* x, double* __retval);
void Math__Floor1_fn(float* x, float* __retval);
void Math__Floor2_fn(::g::Uno::Float2* v, ::g::Uno::Float2* __retval);
void Math__Fract_fn(double* x, double* __retval);
void Math__IsPow2_fn(int32_t* x, bool* __retval);
void Math__Lerp1_fn(float* a, float* b, float* t, float* __retval);
void Math__Lerp2_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* t, ::g::Uno::Float2* __retval);
void Math__Lerp4_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, float* t, ::g::Uno::Float3* __retval);
void Math__Lerp6_fn(::g::Uno::Float4* a, ::g::Uno::Float4* b, float* t, ::g::Uno::Float4* __retval);
void Math__Log_fn(double* x, double* __retval);
void Math__Log1_fn(float* x, float* __retval);
void Math__Log10_fn(double* x, double* __retval);
void Math__Log21_fn(double* x, double* __retval);
void Math__Log22_fn(float* x, float* __retval);
void Math__Max_fn(double* a, double* b, double* __retval);
void Math__Max1_fn(float* a, float* b, float* __retval);
void Math__Max2_fn(::g::Uno::Float2* a, float* b, ::g::Uno::Float2* __retval);
void Math__Max3_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval);
void Math__Max4_fn(::g::Uno::Float3* a, float* b, ::g::Uno::Float3* __retval);
void Math__Max5_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval);
void Math__Max6_fn(::g::Uno::Float4* a, float* b, ::g::Uno::Float4* __retval);
void Math__Max7_fn(::g::Uno::Float4* a, ::g::Uno::Float4* b, ::g::Uno::Float4* __retval);
void Math__Max8_fn(int32_t* a, int32_t* b, int32_t* __retval);
void Math__Max10_fn(::g::Uno::Int2* a, ::g::Uno::Int2* b, ::g::Uno::Int2* __retval);
void Math__Min_fn(double* a, double* b, double* __retval);
void Math__Min1_fn(float* a, float* b, float* __retval);
void Math__Min2_fn(::g::Uno::Float2* a, float* b, ::g::Uno::Float2* __retval);
void Math__Min3_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval);
void Math__Min4_fn(::g::Uno::Float3* a, float* b, ::g::Uno::Float3* __retval);
void Math__Min5_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval);
void Math__Min6_fn(::g::Uno::Float4* a, float* b, ::g::Uno::Float4* __retval);
void Math__Min7_fn(::g::Uno::Float4* a, ::g::Uno::Float4* b, ::g::Uno::Float4* __retval);
void Math__Min8_fn(int32_t* a, int32_t* b, int32_t* __retval);
void Math__Mod_fn(double* x, double* y, double* __retval);
void Math__Mod1_fn(float* x, float* y, float* __retval);
void Math__NextPow2_fn(int32_t* x, int32_t* __retval);
void Math__Pow_fn(double* x, double* y, double* __retval);
void Math__Pow1_fn(float* x, float* y, float* __retval);
void Math__RadiansToDegrees_fn(double* radians, double* __retval);
void Math__RadiansToDegrees1_fn(float* radians, float* __retval);
void Math__RadiansToDegrees3_fn(::g::Uno::Float3* radians, ::g::Uno::Float3* __retval);
void Math__Round_fn(double* x, double* __retval);
void Math__Round1_fn(double* d, int32_t* digits, double* __retval);
void Math__Round2_fn(float* x, float* __retval);
void Math__Round4_fn(::g::Uno::Float2* x, ::g::Uno::Float2* __retval);
void Math__Saturate1_fn(float* x, float* __retval);
void Math__Sign_fn(double* x, double* __retval);
void Math__Sign1_fn(float* x, float* __retval);
void Math__Sin_fn(double* radians, double* __retval);
void Math__Sin1_fn(float* radians, float* __retval);
void Math__Sqrt_fn(double* x, double* __retval);
void Math__Sqrt1_fn(float* x, float* __retval);
void Math__Sqrt2_fn(::g::Uno::Float2* x, ::g::Uno::Float2* __retval);
void Math__Sqrt4_fn(::g::Uno::Float4* x, ::g::Uno::Float4* __retval);
void Math__Tan_fn(double* radians, double* __retval);
void Math__Tan1_fn(float* radians, float* __retval);

struct Math : uObject
{
    static uSStrong<uArray*> positivePowersOfTen_;
    static uSStrong<uArray*>& positivePowersOfTen() { return Math_typeof()->Init(), positivePowersOfTen_; }
    static uSStrong<uArray*> negativePowersOfTen_;
    static uSStrong<uArray*>& negativePowersOfTen() { return Math_typeof()->Init(), negativePowersOfTen_; }

    static double Abs(double x);
    static float Abs1(float x);
    static ::g::Uno::Float2 Abs2(::g::Uno::Float2 a);
    static ::g::Uno::Float4 Abs4(::g::Uno::Float4 a);
    static int32_t Abs5(int32_t x);
    static double Acos(double radians);
    static float Acos1(float radians);
    static double Asin(double radians);
    static double Atan(double radians);
    static double Atan21(double y, double x);
    static float Atan22(float y, float x);
    static double Ceil(double x);
    static float Ceil1(float x);
    static ::g::Uno::Float2 Ceil2(::g::Uno::Float2 v);
    static double Clamp(double x, double minimum, double maximum);
    static float Clamp1(float x, float minimum, float maximum);
    static ::g::Uno::Float2 Clamp2(::g::Uno::Float2 x, float minimum, float maximum);
    static ::g::Uno::Float2 Clamp3(::g::Uno::Float2 x, ::g::Uno::Float2 minimum, ::g::Uno::Float2 maximum);
    static ::g::Uno::Float3 Clamp4(::g::Uno::Float3 x, float minimum, float maximum);
    static ::g::Uno::Float4 Clamp6(::g::Uno::Float4 x, float minimum, float maximum);
    static int32_t Clamp8(int32_t x, int32_t minimum, int32_t maximum);
    static double Cos(double radians);
    static float Cos1(float radians);
    static double DegreesToRadians(double degrees);
    static float DegreesToRadians1(float degrees);
    static ::g::Uno::Float3 DegreesToRadians3(::g::Uno::Float3 degrees);
    static double Exp(double x);
    static float Exp1(float x);
    static double Exp21(double x);
    static float Exp22(float x);
    static double Floor(double x);
    static float Floor1(float x);
    static ::g::Uno::Float2 Floor2(::g::Uno::Float2 v);
    static double Fract(double x);
    static bool IsPow2(int32_t x);
    static float Lerp1(float a, float b, float t);
    static ::g::Uno::Float2 Lerp2(::g::Uno::Float2 a, ::g::Uno::Float2 b, float t);
    static ::g::Uno::Float3 Lerp4(::g::Uno::Float3 a, ::g::Uno::Float3 b, float t);
    static ::g::Uno::Float4 Lerp6(::g::Uno::Float4 a, ::g::Uno::Float4 b, float t);
    static double Log(double x);
    static float Log1(float x);
    static double Log10(double x);
    static double Log21(double x);
    static float Log22(float x);
    static double Max(double a, double b);
    static float Max1(float a, float b);
    static ::g::Uno::Float2 Max2(::g::Uno::Float2 a, float b);
    static ::g::Uno::Float2 Max3(::g::Uno::Float2 a, ::g::Uno::Float2 b);
    static ::g::Uno::Float3 Max4(::g::Uno::Float3 a, float b);
    static ::g::Uno::Float3 Max5(::g::Uno::Float3 a, ::g::Uno::Float3 b);
    static ::g::Uno::Float4 Max6(::g::Uno::Float4 a, float b);
    static ::g::Uno::Float4 Max7(::g::Uno::Float4 a, ::g::Uno::Float4 b);
    static int32_t Max8(int32_t a, int32_t b);
    static ::g::Uno::Int2 Max10(::g::Uno::Int2 a, ::g::Uno::Int2 b);
    static double Min(double a, double b);
    static float Min1(float a, float b);
    static ::g::Uno::Float2 Min2(::g::Uno::Float2 a, float b);
    static ::g::Uno::Float2 Min3(::g::Uno::Float2 a, ::g::Uno::Float2 b);
    static ::g::Uno::Float3 Min4(::g::Uno::Float3 a, float b);
    static ::g::Uno::Float3 Min5(::g::Uno::Float3 a, ::g::Uno::Float3 b);
    static ::g::Uno::Float4 Min6(::g::Uno::Float4 a, float b);
    static ::g::Uno::Float4 Min7(::g::Uno::Float4 a, ::g::Uno::Float4 b);
    static int32_t Min8(int32_t a, int32_t b);
    static double Mod(double x, double y);
    static float Mod1(float x, float y);
    static int32_t NextPow2(int32_t x);
    static double Pow(double x, double y);
    static float Pow1(float x, float y);
    static double RadiansToDegrees(double radians);
    static float RadiansToDegrees1(float radians);
    static ::g::Uno::Float3 RadiansToDegrees3(::g::Uno::Float3 radians);
    static double Round(double x);
    static double Round1(double d, int32_t digits);
    static float Round2(float x);
    static ::g::Uno::Float2 Round4(::g::Uno::Float2 x);
    static float Saturate1(float x);
    static double Sign(double x);
    static float Sign1(float x);
    static double Sin(double radians);
    static float Sin1(float radians);
    static double Sqrt(double x);
    static float Sqrt1(float x);
    static ::g::Uno::Float2 Sqrt2(::g::Uno::Float2 x);
    static ::g::Uno::Float4 Sqrt4(::g::Uno::Float4 x);
    static double Tan(double radians);
    static float Tan1(float radians);
};
// }

}} // ::g::Uno
