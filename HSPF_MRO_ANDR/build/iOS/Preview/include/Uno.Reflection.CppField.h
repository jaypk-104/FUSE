// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Reflection/CppReflection.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Reflection.IField.h>
#include <Uno.ValueType.h>

namespace g{
namespace Uno{
namespace Reflection{

// public extern struct CppField
// {
struct CppField_type : uStructType
{
    ::g::Uno::Reflection::IField interface0;
};

CppField_type* CppField_typeof();
void CppField__GetValue_fn(uField** __this, uObject* obj, uObject** __retval);
void CppField__get_IsNull_fn(uField** __this, bool* __retval);
void CppField__get_Name_fn(uField** __this, uString** __retval);
void CppField__get_Null_fn(uField** __retval);
void CppField__SetValue_fn(uField** __this, uObject* obj, uObject* value);

struct CppField
{
    static uObject* GetValue(uField* __this, uObject* obj);
    static bool IsNull(uField* __this);
    static uString* Name(uField* __this);
    static void SetValue(uField* __this, uObject* obj, uObject* value);
    static uField* Null();
};
// }

}}} // ::g::Uno::Reflection
