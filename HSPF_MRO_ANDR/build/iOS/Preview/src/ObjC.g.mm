// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <ObjC.ID.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.Object.h>
static uType* TYPES[2];

namespace g{
namespace ObjC{

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Compiler/ExportTargetInterop/Foreign/ObjC/ObjC.uno
// ----------------------------------------------------------------------------------------------------------

// public extern struct ID
// {
static void ID_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::IntPtr_typeof();
    type->Reflection.SetFunctions(1,
        new uFunction("get_Null", NULL, (void*)ID__get_Null_fn, 0, true, type, 0));
}

uStructType* ID_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(::id);
    options.ValueSize = sizeof(::id);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("ObjC.ID", options);
    type->fp_build_ = ID_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))ID__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))ID__GetHashCode_fn;
    return type;
}

// public override sealed bool Equals(object o)
void ID__Equals_fn(::id* __this, uType* __type, uObject* o, bool* __retval)
{
    uStackFrame __("ObjC.ID", "Equals(object)");
    return *__retval = uIs(o, __type) && ID::op_Equality(*__this, uUnbox< ::id>(__type, o)), void();
}

// public override sealed int GetHashCode()
void ID__GetHashCode_fn(::id* __this, uType* __type, int32_t* __retval)
{
    uStackFrame __("ObjC.ID", "GetHashCode()");
    return *__retval = ::g::Uno::IntPtr::GetHashCode((__bridge void*)*__this, ::TYPES[0/*Uno.IntPtr*/]), void();
}

// public static ObjC.ID get_Null()
void ID__get_Null_fn(::id* __retval)
{
    *__retval = ID::Null();
}

// public static operator ==(ObjC.ID a, ObjC.ID b)
void ID__op_Equality_fn(::id* a, ::id* b, bool* __retval)
{
    *__retval = ID::op_Equality(*a, *b);
}

// public static operator ==(ObjC.ID a, ObjC.ID b) [static]
bool ID::op_Equality(::id a, ::id b)
{
    return a == b;
}

// public static ObjC.ID get_Null() [static]
::id ID::Null()
{
    return nil;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Compiler/ExportTargetInterop/Foreign/ObjC/ObjC.uno
// ----------------------------------------------------------------------------------------------------------

// public extern class Object
// {
// ~Object()
static void Object__Finalize_fn(Object* __this)
{
    __this->Handle = ::g::ObjC::ID::Null();
}

static void Object_build(uType* type)
{
    ::TYPES[1] = ::g::ObjC::ID_typeof();
    type->SetFields(0,
        ::TYPES[1/*ObjC.ID*/], offsetof(Object, Handle), 0);
    type->Reflection.SetFields(1,
        new uField("Handle", 0));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Object__New1_fn, 0, true, type, 0));
}

uType* Object_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("ObjC.Object", options);
    type->fp_build_ = Object_build;
    type->fp_ctor_ = (void*)Object__New1_fn;
    type->fp_Finalize = (void(*)(uObject*))Object__Finalize_fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Object__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int32_t*))Object__GetHashCode_fn;
    return type;
}

// public Object()
void Object__ctor__fn(Object* __this)
{
    __this->ctor_();
}

// private Object(ObjC.ID handle)
void Object__ctor_1_fn(Object* __this, ::id* handle)
{
    __this->ctor_1(*handle);
}

// private static ObjC.Object Create(ObjC.ID handle)
void Object__Create_fn(::id* handle, Object** __retval)
{
    *__retval = Object::Create(*handle);
}

// public override sealed bool Equals(object x)
void Object__Equals_fn(Object* __this, uObject* x, bool* __retval)
{
    uStackFrame __("ObjC.Object", "Equals(object)");
    Object* o = uAs<Object*>(x, Object_typeof());
    return *__retval = (o != NULL) && ::g::ObjC::ID::op_Equality(uPtr(o)->Handle, __this->Handle), void();
}

// private static ObjC.ID GetHandle(ObjC.Object o)
void Object__GetHandle_fn(Object* o, ::id* __retval)
{
    *__retval = Object::GetHandle(o);
}

// public override sealed int GetHashCode()
void Object__GetHashCode_fn(Object* __this, int32_t* __retval)
{
    uStackFrame __("ObjC.Object", "GetHashCode()");
    return *__retval = ::g::ObjC::ID::GetHashCode(__this->Handle, ::TYPES[1/*ObjC.ID*/]), void();
}

// public Object New()
void Object__New1_fn(Object** __retval)
{
    *__retval = Object::New1();
}

// private Object New(ObjC.ID handle)
void Object__New2_fn(::id* handle, Object** __retval)
{
    *__retval = Object::New2(*handle);
}

// public Object() [instance]
void Object::ctor_()
{
    ctor_1(::g::ObjC::ID::Null());
}

// private Object(ObjC.ID handle) [instance]
void Object::ctor_1(::id handle)
{
    Handle = handle;
}

// private static ObjC.Object Create(ObjC.ID handle) [static]
Object* Object::Create(::id handle)
{
    uStackFrame __("ObjC.Object", "Create(ObjC.ID)");
    return ::g::ObjC::ID::op_Equality(handle, ::g::ObjC::ID::Null()) ? uCast<Object*>(NULL, Object_typeof()) : (Object*)Object::New2(handle);
}

// private static ObjC.ID GetHandle(ObjC.Object o) [static]
::id Object::GetHandle(Object* o)
{
    uStackFrame __("ObjC.Object", "GetHandle(ObjC.Object)");
    return (o == NULL) ? ::g::ObjC::ID::Null() : uPtr(o)->Handle;
}

// public Object New() [static]
Object* Object::New1()
{
    Object* obj2 = (Object*)uNew(Object_typeof());
    obj2->ctor_();
    return obj2;
}

// private Object New(ObjC.ID handle) [static]
Object* Object::New2(::id handle)
{
    Object* obj1 = (Object*)uNew(Object_typeof());
    obj1->ctor_1(handle);
    return obj1;
}
// }

}} // ::g::ObjC
