// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Reflection/CppReflection.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Reflection.IFunction.h>
#include <Uno.ValueType.h>

namespace g{
namespace Uno{
namespace Reflection{

// public extern struct CppFunction
// {
struct CppFunction_type : uStructType
{
    ::g::Uno::Reflection::IFunction interface0;
};

CppFunction_type* CppFunction_typeof();
void CppFunction__CreateDelegate_fn(uFunction** __this, uType* type, uObject* obj, uDelegate** __retval);
void CppFunction__Invoke_fn(uFunction** __this, uObject* obj, uArray* args, uObject** __retval);
void CppFunction__get_Name_fn(uFunction** __this, uString** __retval);
void CppFunction__get_Null_fn(uFunction** __retval);
void CppFunction__get_ParameterTypes_fn(uFunction** __this, uArray** __retval);

struct CppFunction
{
    static uDelegate* CreateDelegate(uFunction* __this, uType* type, uObject* obj);
    static uObject* Invoke(uFunction* __this, uObject* obj, uArray* args);
    static uString* Name(uFunction* __this);
    static uArray* ParameterTypes(uFunction* __this);
    static uFunction* Null();
};
// }

}}} // ::g::Uno::Reflection
