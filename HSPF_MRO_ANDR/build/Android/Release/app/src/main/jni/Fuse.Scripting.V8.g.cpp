// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.External.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ScriptException.h>
#include <Fuse.Scripting.V8.Array.h>
#include <Fuse.Scripting.V8.ArrayHandle.h>
#include <Fuse.Scripting.V8.AutoReleasePool.h>
#include <Fuse.Scripting.V8.Context.EnterVM.h>
#include <Fuse.Scripting.V8.Context.h>
#include <Fuse.Scripting.V8.Error.h>
#include <Fuse.Scripting.V8.Function.h>
#include <Fuse.Scripting.V8.Handle.h>
#include <Fuse.Scripting.V8.Marshaller.CallbackWrapper.h>
#include <Fuse.Scripting.V8.Marshaller.h>
#include <Fuse.Scripting.V8.Object.h>
#include <Fuse.Scripting.V8.Simple.Context.h>
#include <Fuse.Scripting.V8.Simple.JSArray.h>
#include <Fuse.Scripting.V8.Simple.JSCallback.h>
#include <Fuse.Scripting.V8.Simple.JSContext.h>
#include <Fuse.Scripting.V8.Simple.JSExternal.h>
#include <Fuse.Scripting.V8.Simple.JSFunction.h>
#include <Fuse.Scripting.V8.Simple.JSObject.h>
#include <Fuse.Scripting.V8.Simple.JSRuntimeError.h>
#include <Fuse.Scripting.V8.Simple.JSScriptException.h>
#include <Fuse.Scripting.V8.Simple.JSString.h>
#include <Fuse.Scripting.V8.Simple.JSType.h>
#include <Fuse.Scripting.V8.Simple.JSValue.h>
#include <Fuse.Scripting.V8.Simple.ScriptException.h>
#include <Fuse.Scripting.V8.Simple.Value.h>
#include <Fuse.Scripting.V8.V8SimpleExtensions.h>
#include <Fuse.Scripting.V8.V8SimpleExtensions.WrappedCallback.h>
#include <Uno.Action1-1.h>
#include <Uno.ArgumentException.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.Object.h>
#include <Uno.Runtime.InteropServices.GCHandle.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.Selector.h>
#include <Uno.ValueType.h>
#undef GetMessage
static uString* STRINGS[3];
static uType* TYPES[10];

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.12.0/V8/Array.uno
// ---------------------------------------------------------------------------

// internal sealed extern class Array
// {
// ~Array()
static void Array__Finalize_fn(Array* __this)
{
    if ((__this->_context != NULL) && !uPtr(__this->_context)->IsDisposed())
        ::g::Fuse::Scripting::V8::V8SimpleExtensions::Release2(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue(__this->_array), uPtr(__this->_context)->_context);
}

static void Array_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    type->SetDependencies(
        ::g::Fuse::Scripting::V8::V8SimpleExtensions_typeof());
    type->SetInterfaces(
        ::g::Fuse::IArray_typeof(), offsetof(::g::Fuse::Scripting::Array_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Context_typeof(), offsetof(Array, _context), uFieldFlagsWeak,
        ::g::Fuse::Scripting::V8::Simple::JSArray_typeof(), offsetof(Array, _array), 0);
}

::g::Fuse::Scripting::Array_type* Array_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Array_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Array_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Array);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Array_type);
    type = (::g::Fuse::Scripting::Array_type*)uClassType::New("Fuse.Scripting.V8.Array", options);
    type->fp_build_ = Array_build;
    type->fp_Finalize = (void(*)(uObject*))Array__Finalize_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Array*, ::g::Fuse::Scripting::Array*, bool*))Array__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int32_t*))Array__GetHashCode_fn;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::Array*, int32_t*, uObject**))Array__get_Item_fn;
    type->fp_set_Item = (void(*)(::g::Fuse::Scripting::Array*, int32_t*, uObject*))Array__set_Item_fn;
    type->fp_get_Length = (void(*)(::g::Fuse::Scripting::Array*, int32_t*))Array__get_Length_fn;
    type->interface0.fp_get_Length = (void(*)(uObject*, int32_t*))Array__get_Length_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uObject**))Array__get_Item_fn;
    return type;
}

// public Array(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSArray array)
void Array__ctor_1_fn(Array* __this, ::g::Fuse::Scripting::V8::Context* context, ::JSArray** array)
{
    __this->ctor_1(context, *array);
}

// public override sealed bool Equals(Fuse.Scripting.Array a)
void Array__Equals2_fn(Array* __this, ::g::Fuse::Scripting::Array* a, bool* __retval)
{
    ::JSArray* ind1;
    Array* that = uAs<Array*>(a, __this->__type);
    return *__retval = (that != NULL) && uBox(::g::Fuse::Scripting::V8::Simple::JSArray_typeof(), (ind1 = __this->_array, ind1), U_ALLOCA(::g::Fuse::Scripting::V8::Simple::JSArray_typeof()->ObjectSize))->Equals(uBox(::g::Fuse::Scripting::V8::Simple::JSArray_typeof(), uPtr(that)->_array)), void();
}

// public override sealed int GetHashCode()
void Array__GetHashCode_fn(Array* __this, int32_t* __retval)
{
    ::JSArray* ind2;
    return *__retval = uBox(::g::Fuse::Scripting::V8::Simple::JSArray_typeof(), (ind2 = __this->_array, ind2), U_ALLOCA(::g::Fuse::Scripting::V8::Simple::JSArray_typeof()->ObjectSize))->GetHashCode(), void();
}

// internal Fuse.Scripting.V8.Simple.JSArray GetJSArray(Fuse.Scripting.V8.AutoReleasePool pool)
void Array__GetJSArray_fn(Array* __this, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSArray** __retval)
{
    *__retval = __this->GetJSArray(*pool);
}

// public override sealed object get_Item(int index)
void Array__get_Item_fn(Array* __this, int32_t* index, uObject** __retval)
{
    int32_t index_ = *index;
    ::JSContext* cxt = uPtr(__this->_context)->_context;
    uObject* result = NULL;
    ::g::Fuse::Scripting::V8::AutoReleasePool pool = ::g::Fuse::Scripting::V8::AutoReleasePool__New1(cxt);

    {
        try
        {
            {
                ::g::Fuse::Scripting::V8::Context__EnterVM vm = ::g::Fuse::Scripting::V8::Context__EnterVM__New1(__this->_context);

                {
                    try
                    {
                        {
                            result = ::g::Fuse::Scripting::V8::Marshaller::Wrap(__this->_context, ::g::Fuse::Scripting::V8::V8SimpleExtensions::GetProperty(__this->_array, cxt, index_, pool, uPtr(__this->_context)->_errorHandler));
                        }
                    }

                    catch (const uThrowable& __t)
                    {
                        {
                            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
                        }
                                                throw __t;
                        goto __after_finally_0;
                    }

                    {
                        ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
                    }
                    __after_finally_0:;
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_1;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_1:;
    }

    uPtr(__this->_context)->ThrowPendingExceptions();
    return *__retval = result, void();
}

// public override sealed void set_Item(int index, object value)
void Array__set_Item_fn(Array* __this, int32_t* index, uObject* value)
{
    int32_t index_ = *index;
    ::JSContext* cxt = uPtr(__this->_context)->_context;
    ::g::Fuse::Scripting::V8::AutoReleasePool pool = ::g::Fuse::Scripting::V8::AutoReleasePool__New1(cxt);

    {
        try
        {
            {
                ::g::Fuse::Scripting::V8::Context__EnterVM vm = ::g::Fuse::Scripting::V8::Context__EnterVM__New1(__this->_context);

                {
                    try
                    {
                        {
                            ::g::Fuse::Scripting::V8::V8SimpleExtensions::SetProperty(__this->_array, cxt, index_, ::g::Fuse::Scripting::V8::Marshaller::Unwrap(__this->_context, value, pool), uPtr(__this->_context)->_errorHandler);
                        }
                    }

                    catch (const uThrowable& __t)
                    {
                        {
                            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
                        }
                                                throw __t;
                        goto __after_finally_2;
                    }

                    {
                        ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
                    }
                    __after_finally_2:;
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_3;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_3:;
    }

    uPtr(__this->_context)->ThrowPendingExceptions();
}

// public override sealed int get_Length()
void Array__get_Length_fn(Array* __this, int32_t* __retval)
{
    int32_t result = 0;
    ::g::Fuse::Scripting::V8::Context__EnterVM vm = ::g::Fuse::Scripting::V8::Context__EnterVM__New1(__this->_context);

    {
        try
        {
            {
                result = ::g::Fuse::Scripting::V8::V8SimpleExtensions::Length(__this->_array, uPtr(__this->_context)->_context);
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_4;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_4:;
    }

    uPtr(__this->_context)->ThrowPendingExceptions();
    return *__retval = result, void();
}

// public Array New(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSArray array)
void Array__New1_fn(::g::Fuse::Scripting::V8::Context* context, ::JSArray** array, Array** __retval)
{
    *__retval = Array::New1(context, *array);
}

// public Array(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSArray array) [instance]
void Array::ctor_1(::g::Fuse::Scripting::V8::Context* context, ::JSArray* array)
{
    ctor_();
    _context = context;
    _array = array;
    ::g::Fuse::Scripting::V8::V8SimpleExtensions::Retain2(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue(_array), uPtr(_context)->_context);
}

// internal Fuse.Scripting.V8.Simple.JSArray GetJSArray(Fuse.Scripting.V8.AutoReleasePool pool) [instance]
::JSArray* Array::GetJSArray(::g::Fuse::Scripting::V8::AutoReleasePool pool)
{
    ::g::Fuse::Scripting::V8::V8SimpleExtensions::Retain2(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue(_array), uPtr(_context)->_context);
    return pool.AutoRelease(_array);
}

// public Array New(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSArray array) [static]
Array* Array::New1(::g::Fuse::Scripting::V8::Context* context, ::JSArray* array)
{
    Array* obj3 = (Array*)uNew(Array_typeof());
    obj3->ctor_1(context, array);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.12.0/V8/Handle.uno
// ----------------------------------------------------------------------------

// internal sealed extern class ArrayHandle
// {
static void ArrayHandle_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(ArrayHandle, Array), 0);
}

uType* ArrayHandle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ArrayHandle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.V8.ArrayHandle", options);
    type->fp_build_ = ArrayHandle_build;
    return type;
}

// public ArrayHandle(byte[] array)
void ArrayHandle__ctor__fn(ArrayHandle* __this, uArray* array)
{
    __this->ctor_(array);
}

// public static byte[] CopyToArray(Uno.IntPtr ptr, int length)
void ArrayHandle__CopyToArray_fn(void** ptr, int32_t* length, uArray** __retval)
{
    *__retval = ArrayHandle::CopyToArray(*ptr, *length);
}

// public Uno.IntPtr GetIntPtr()
void ArrayHandle__GetIntPtr_fn(ArrayHandle* __this, void** __retval)
{
    *__retval = __this->GetIntPtr();
}

// public ArrayHandle New(byte[] array)
void ArrayHandle__New1_fn(uArray* array, ArrayHandle** __retval)
{
    *__retval = ArrayHandle::New1(array);
}

// public ArrayHandle(byte[] array) [instance]
void ArrayHandle::ctor_(uArray* array)
{
    Array = array;
}

// public Uno.IntPtr GetIntPtr() [instance]
void* ArrayHandle::GetIntPtr()
{
    return Array->Ptr();
}

// public static byte[] CopyToArray(Uno.IntPtr ptr, int length) [static]
uArray* ArrayHandle::CopyToArray(void* ptr, int32_t length)
{
    return uArray::New(::g::Uno::Byte_typeof()->Array(), length, ptr);
}

// public ArrayHandle New(byte[] array) [static]
ArrayHandle* ArrayHandle::New1(uArray* array)
{
    ArrayHandle* obj1 = (ArrayHandle*)uNew(ArrayHandle_typeof());
    obj1->ctor_(array);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.12.0/V8/V8SimpleExtensions.uno
// ----------------------------------------------------------------------------------------

// internal extern struct AutoReleasePool
// {
// public void Dispose() [adapter]
static void AutoReleasePool__Dispose_ex(uObject* __this)
{
    AutoReleasePool__Dispose_fn((AutoReleasePool*)((uint8_t*)__this + sizeof(uObject)));
}

static void AutoReleasePool_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::JSValue_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::JSValue_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Scripting::V8::V8SimpleExtensions_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(AutoReleasePool_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Simple::JSContext_typeof(), offsetof(AutoReleasePool, _context), 0,
        ::TYPES[1/*Uno.Collections.List<Fuse.Scripting.V8.Simple.JSValue>*/], offsetof(AutoReleasePool, _pool), 0);
}

AutoReleasePool_type* AutoReleasePool_typeof()
{
    static uSStrong<AutoReleasePool_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.Alignment = alignof(AutoReleasePool);
    options.ValueSize = sizeof(AutoReleasePool);
    options.TypeSize = sizeof(AutoReleasePool_type);
    type = (AutoReleasePool_type*)uStructType::New("Fuse.Scripting.V8.AutoReleasePool", options);
    type->fp_build_ = AutoReleasePool_build;
    type->interface0.fp_Dispose = AutoReleasePool__Dispose_ex;
    return type;
}

// public AutoReleasePool(Fuse.Scripting.V8.Simple.JSContext context)
void AutoReleasePool__ctor_1_fn(AutoReleasePool* __this, ::JSContext** context)
{
    __this->ctor_1(*context);
}

// public Fuse.Scripting.V8.Simple.JSArray AutoRelease(Fuse.Scripting.V8.Simple.JSArray value)
void AutoReleasePool__AutoRelease_fn(AutoReleasePool* __this, ::JSArray** value, ::JSArray** __retval)
{
    *__retval = __this->AutoRelease(*value);
}

// public Fuse.Scripting.V8.Simple.JSExternal AutoRelease(Fuse.Scripting.V8.Simple.JSExternal value)
void AutoReleasePool__AutoRelease1_fn(AutoReleasePool* __this, ::JSExternal** value, ::JSExternal** __retval)
{
    *__retval = __this->AutoRelease1(*value);
}

// public Fuse.Scripting.V8.Simple.JSFunction AutoRelease(Fuse.Scripting.V8.Simple.JSFunction value)
void AutoReleasePool__AutoRelease2_fn(AutoReleasePool* __this, ::JSFunction** value, ::JSFunction** __retval)
{
    *__retval = __this->AutoRelease2(*value);
}

// public Fuse.Scripting.V8.Simple.JSObject AutoRelease(Fuse.Scripting.V8.Simple.JSObject value)
void AutoReleasePool__AutoRelease3_fn(AutoReleasePool* __this, ::JSObject** value, ::JSObject** __retval)
{
    *__retval = __this->AutoRelease3(*value);
}

// public Fuse.Scripting.V8.Simple.JSString AutoRelease(Fuse.Scripting.V8.Simple.JSString value)
void AutoReleasePool__AutoRelease4_fn(AutoReleasePool* __this, ::JSString** value, ::JSString** __retval)
{
    *__retval = __this->AutoRelease4(*value);
}

// public Fuse.Scripting.V8.Simple.JSValue AutoRelease(Fuse.Scripting.V8.Simple.JSValue value)
void AutoReleasePool__AutoRelease5_fn(AutoReleasePool* __this, ::JSValue** value, ::JSValue** __retval)
{
    *__retval = __this->AutoRelease5(*value);
}

// public void Dispose()
void AutoReleasePool__Dispose_fn(AutoReleasePool* __this)
{
    __this->Dispose();
}

// public AutoReleasePool New(Fuse.Scripting.V8.Simple.JSContext context)
void AutoReleasePool__New1_fn(::JSContext** context, AutoReleasePool* __retval)
{
    *__retval = AutoReleasePool__New1(*context);
}

// public AutoReleasePool(Fuse.Scripting.V8.Simple.JSContext context) [instance]
void AutoReleasePool::ctor_1(::JSContext* context)
{
    _context = context;
    _pool = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Scripting.V8.Simple.JSValue>*/]));
}

// public Fuse.Scripting.V8.Simple.JSArray AutoRelease(Fuse.Scripting.V8.Simple.JSArray value) [instance]
::JSArray* AutoReleasePool::AutoRelease(::JSArray* value)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_pool), uCRef(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue(value)));
    return value;
}

// public Fuse.Scripting.V8.Simple.JSExternal AutoRelease(Fuse.Scripting.V8.Simple.JSExternal value) [instance]
::JSExternal* AutoReleasePool::AutoRelease1(::JSExternal* value)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_pool), uCRef(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue1(value)));
    return value;
}

// public Fuse.Scripting.V8.Simple.JSFunction AutoRelease(Fuse.Scripting.V8.Simple.JSFunction value) [instance]
::JSFunction* AutoReleasePool::AutoRelease2(::JSFunction* value)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_pool), uCRef(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue2(value)));
    return value;
}

// public Fuse.Scripting.V8.Simple.JSObject AutoRelease(Fuse.Scripting.V8.Simple.JSObject value) [instance]
::JSObject* AutoReleasePool::AutoRelease3(::JSObject* value)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_pool), uCRef(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue3(value)));
    return value;
}

// public Fuse.Scripting.V8.Simple.JSString AutoRelease(Fuse.Scripting.V8.Simple.JSString value) [instance]
::JSString* AutoReleasePool::AutoRelease4(::JSString* value)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_pool), uCRef(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue4(value)));
    return value;
}

// public Fuse.Scripting.V8.Simple.JSValue AutoRelease(Fuse.Scripting.V8.Simple.JSValue value) [instance]
::JSValue* AutoReleasePool::AutoRelease5(::JSValue* value)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_pool), uCRef(value));
    return value;
}

// public void Dispose() [instance]
void AutoReleasePool::Dispose()
{
    ::g::Uno::Collections::List__Enumerator< ::JSValue*> ret3;
    ::g::Uno::Collections::List__Enumerator< ::JSValue*> enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_pool), &ret3), ret3);

    {
        try
        {
            {
                while (enum1.MoveNext(::TYPES[2/*Uno.Collections.List<Fuse.Scripting.V8.Simple.JSValue>.Enumerator*/]))
                {
                    ::JSValue* value = enum1.Current(::TYPES[2/*Uno.Collections.List<Fuse.Scripting.V8.Simple.JSValue>.Enumerator*/]);
                    ::g::Fuse::Scripting::V8::V8SimpleExtensions::Release2(value, _context);
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum1.Dispose(::TYPES[2/*Uno.Collections.List<Fuse.Scripting.V8.Simple.JSValue>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_5;
        }

        {
            enum1.Dispose(::TYPES[2/*Uno.Collections.List<Fuse.Scripting.V8.Simple.JSValue>.Enumerator*/]);
        }
        __after_finally_5:;
    }

    uPtr(_pool)->Clear();
}

// public AutoReleasePool New(Fuse.Scripting.V8.Simple.JSContext context) [static]
AutoReleasePool AutoReleasePool__New1(::JSContext* context)
{
    AutoReleasePool obj2;
    obj2.ctor_1(context);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.12.0/V8/Context.uno
// -----------------------------------------------------------------------------

// private sealed class Marshaller.CallbackWrapper
// {
static void Marshaller__CallbackWrapper_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Exception_typeof();
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[4] = ::g::Fuse::Scripting::Error_typeof();
    type->SetDependencies(
        ::g::Fuse::Scripting::V8::V8SimpleExtensions_typeof());
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Context_typeof(), offsetof(Marshaller__CallbackWrapper, _context), 0,
        ::g::Fuse::Scripting::Callback_typeof(), offsetof(Marshaller__CallbackWrapper, _callback), 0);
}

uType* Marshaller__CallbackWrapper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Marshaller__CallbackWrapper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.V8.Marshaller.CallbackWrapper", options);
    type->fp_build_ = Marshaller__CallbackWrapper_build;
    return type;
}

// public CallbackWrapper(Fuse.Scripting.V8.Context context, Fuse.Scripting.Callback callback)
void Marshaller__CallbackWrapper__ctor__fn(Marshaller__CallbackWrapper* __this, ::g::Fuse::Scripting::V8::Context* context, uDelegate* callback)
{
    __this->ctor_(context, callback);
}

// public Fuse.Scripting.V8.Simple.JSValue Call(Fuse.Scripting.V8.Simple.JSValue[] args, Fuse.Scripting.V8.Simple.JSValue& error)
void Marshaller__CallbackWrapper__Call_fn(Marshaller__CallbackWrapper* __this, uArray* args, ::JSValue** error, ::JSValue** __retval)
{
    *__retval = __this->Call(args, error);
}

// public CallbackWrapper New(Fuse.Scripting.V8.Context context, Fuse.Scripting.Callback callback)
void Marshaller__CallbackWrapper__New1_fn(::g::Fuse::Scripting::V8::Context* context, uDelegate* callback, Marshaller__CallbackWrapper** __retval)
{
    *__retval = Marshaller__CallbackWrapper::New1(context, callback);
}

// public CallbackWrapper(Fuse.Scripting.V8.Context context, Fuse.Scripting.Callback callback) [instance]
void Marshaller__CallbackWrapper::ctor_(::g::Fuse::Scripting::V8::Context* context, uDelegate* callback)
{
    _context = context;
    _callback = callback;
}

// public Fuse.Scripting.V8.Simple.JSValue Call(Fuse.Scripting.V8.Simple.JSValue[] args, Fuse.Scripting.V8.Simple.JSValue& error) [instance]
::JSValue* Marshaller__CallbackWrapper::Call(uArray* args, ::JSValue** error)
{
    ::JSContext* cxt = uPtr(_context)->_context;
    *error = uDefault< ::JSValue*>();
    ::g::Fuse::Scripting::V8::AutoReleasePool pool = ::g::Fuse::Scripting::V8::AutoReleasePool__New1(cxt);

    {
        try
        {
            {
                try
                {
                    {
                        ::JSValue* __uno_retval = ::g::Fuse::Scripting::V8::V8SimpleExtensions::Retain2(::g::Fuse::Scripting::V8::Marshaller::Unwrap(_context, uPtr(_callback)->Invoke(2, (::g::Fuse::Scripting::V8::Context*)_context, (uArray*)::g::Fuse::Scripting::V8::Marshaller::WrapArray(_context, args)), pool), cxt);
                        ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
                        return __uno_retval;
                    }
                }

                catch (const uThrowable& __t)
                {
                    ::g::Uno::Exception* e = __t.Exception;
                    ::g::Fuse::Scripting::Error* se = uAs< ::g::Fuse::Scripting::Error*>(e, ::TYPES[4/*Fuse.Scripting.Error*/]);

                    if (se != NULL)
                    {
                        ::JSValue* jsException = ::g::Fuse::Scripting::V8::Marshaller::Unwrap(_context, uPtr(se)->Message(), pool);
                        *error = ::g::Fuse::Scripting::V8::V8SimpleExtensions::Retain2(jsException, cxt);
                    }
                    else
                    {
                        if (uPtr(_context)->_cachedException == NULL)
                            uPtr(_context)->_cachedException = e;
                    }

                    return uDefault< ::JSValue*>();
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_6;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_6:;
    }

    return uDefault< ::JSValue*>();
}

// public CallbackWrapper New(Fuse.Scripting.V8.Context context, Fuse.Scripting.Callback callback) [static]
Marshaller__CallbackWrapper* Marshaller__CallbackWrapper::New1(::g::Fuse::Scripting::V8::Context* context, uDelegate* callback)
{
    Marshaller__CallbackWrapper* obj1 = (Marshaller__CallbackWrapper*)uNew(Marshaller__CallbackWrapper_typeof());
    obj1->ctor_(context, callback);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.12.0/V8/Context.uno
// -----------------------------------------------------------------------------

// public sealed extern class Context
// {
static void Context_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Scripting::V8::V8SimpleExtensions_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::JavaScript::JSContext_type, interface0),
        ::g::Fuse::Scripting::JavaScript::IMirror_typeof(), offsetof(::g::Fuse::Scripting::JavaScript::JSContext_type, interface1));
    type->SetFields(10,
        ::g::Fuse::Scripting::V8::Simple::JSContext_typeof(), offsetof(Context, _context), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::JSScriptException_typeof(), NULL), offsetof(Context, _errorHandler), 0,
        ::g::Fuse::Scripting::V8::Function_typeof(), offsetof(Context, _instanceOf), 0,
        ::g::Uno::Int_typeof(), offsetof(Context, _vmDepth), 0,
        ::g::Uno::Exception_typeof(), offsetof(Context, _cachedException), 0,
        ::g::Uno::Bool_typeof(), offsetof(Context, _IsDisposed), 0);
}

::g::Fuse::Scripting::JavaScript::JSContext_type* Context_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::JavaScript::JSContext_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::JavaScript::JSContext_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Context);
    options.TypeSize = sizeof(::g::Fuse::Scripting::JavaScript::JSContext_type);
    type = (::g::Fuse::Scripting::JavaScript::JSContext_type*)uClassType::New("Fuse.Scripting.V8.Context", options);
    type->fp_build_ = Context_build;
    type->fp_ctor_ = (void*)Context__New1_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Scripting::Context*))Context__Dispose_fn;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Context*, uString*, uString*, uObject**))Context__Evaluate_fn;
    type->fp_get_GlobalObject = (void(*)(::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::Object**))Context__get_GlobalObject_fn;
    type->interface1.fp_Reflect = (void(*)(uObject*, ::g::Fuse::Scripting::Context*, uObject*, uObject**))::g::Fuse::Scripting::JavaScript::JSContext__FuseScriptingJavaScriptIMirrorReflect_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Context__Dispose_fn;
    return type;
}

// public Context()
void Context__ctor_2_fn(Context* __this)
{
    __this->ctor_2();
}

// public override sealed void Dispose()
void Context__Dispose_fn(Context* __this)
{
    __this->_errorHandler = NULL;
    __this->IsDisposed(true);
    ::g::Fuse::Scripting::V8::V8SimpleExtensions::Release(__this->_context);
    __this->_context = uDefault< ::JSContext*>();
}

// public override sealed object Evaluate(string fileName, string code)
void Context__Evaluate_fn(Context* __this, uString* fileName, uString* code, uObject** __retval)
{
    if (::g::Uno::String::op_Equality(fileName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("fileName")));

    if (::g::Uno::String::op_Equality(code, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("code")));

    uObject* result = NULL;
    ::g::Fuse::Scripting::V8::AutoReleasePool pool = ::g::Fuse::Scripting::V8::AutoReleasePool__New1(__this->_context);

    {
        try
        {
            {
                Context__EnterVM vm = Context__EnterVM__New1(__this);

                {
                    try
                    {
                        {
                            result = ::g::Fuse::Scripting::V8::Marshaller::Wrap(__this, ::g::Fuse::Scripting::V8::V8SimpleExtensions::Evaluate(__this->_context, fileName, code, pool, __this->_errorHandler));
                        }
                    }

                    catch (const uThrowable& __t)
                    {
                        {
                            ::g::Uno::IDisposable::Dispose(uInterface(uBox(Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
                        }
                                                throw __t;
                        goto __after_finally_7;
                    }

                    {
                        ::g::Uno::IDisposable::Dispose(uInterface(uBox(Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
                    }
                    __after_finally_7:;
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_8;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_8:;
    }

    __this->ThrowPendingExceptions();
    return *__retval = result, void();
}

// public override sealed Fuse.Scripting.Object get_GlobalObject()
void Context__get_GlobalObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval)
{
    ::g::Fuse::Scripting::V8::AutoReleasePool pool = ::g::Fuse::Scripting::V8::AutoReleasePool__New1(__this->_context);

    {
        try
        {
            {
                ::g::Fuse::Scripting::Object* __uno_retval = ::g::Fuse::Scripting::V8::Object::New1(__this, ::g::Fuse::Scripting::V8::V8SimpleExtensions::GetGlobalObject(__this->_context, pool));
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
                return *__retval = __uno_retval, void();
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_9;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_9:;
    }
}

// internal generated bool get_IsDisposed()
void Context__get_IsDisposed_fn(Context* __this, bool* __retval)
{
    *__retval = __this->IsDisposed();
}

// private generated void set_IsDisposed(bool value)
void Context__set_IsDisposed_fn(Context* __this, bool* value)
{
    __this->IsDisposed(*value);
}

// public Context New()
void Context__New1_fn(Context** __retval)
{
    *__retval = Context::New1();
}

// private void OnScriptException(Fuse.Scripting.V8.Simple.JSScriptException e)
void Context__OnScriptException_fn(Context* __this, ::JSScriptException** e)
{
    __this->OnScriptException(*e);
}

// internal void ThrowPendingExceptions()
void Context__ThrowPendingExceptions_fn(Context* __this)
{
    __this->ThrowPendingExceptions();
}

// public Context() [instance]
void Context::ctor_2()
{
    ctor_1();
    _errorHandler = uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::JSScriptException_typeof(), NULL), (void*)Context__OnScriptException_fn, this);
    _context = ::g::Fuse::Scripting::V8::Simple::Context::Create();
    _instanceOf = uAs< ::g::Fuse::Scripting::V8::Function*>(Evaluate(uString::Const("(instanceof)"), uString::Const("(function(x, y) { return x instanceof y; })")), ::TYPES[6/*Fuse.Scripting.V8.Function*/]);
}

// internal generated bool get_IsDisposed() [instance]
bool Context::IsDisposed()
{
    return _IsDisposed;
}

// private generated void set_IsDisposed(bool value) [instance]
void Context::IsDisposed(bool value)
{
    _IsDisposed = value;
}

// private void OnScriptException(Fuse.Scripting.V8.Simple.JSScriptException e) [instance]
void Context::OnScriptException(::JSScriptException* e)
{
    ::JSValue* jsException = ::g::Fuse::Scripting::V8::V8SimpleExtensions::GetException(e);
    uString* exceptionName = NULL;
    ::g::Fuse::Scripting::V8::Object* jsExceptionObj = uAs< ::g::Fuse::Scripting::V8::Object*>(::g::Fuse::Scripting::V8::Marshaller::Wrap(this, jsException), ::g::Fuse::Scripting::V8::Object_typeof());

    if (jsExceptionObj != NULL)
        exceptionName = uAs<uString*>(uPtr(jsExceptionObj)->CallMethod(this, uString::Const("toString"), uArray::New(::TYPES[7/*object[]*/], 0)), ::TYPES[9/*string*/]);

    ::g::Fuse::Scripting::ScriptException* se = ::g::Fuse::Scripting::ScriptException::New4(::g::Uno::String::op_Equality(exceptionName, NULL) ? uString::Const("") : exceptionName, ::g::Fuse::Scripting::V8::V8SimpleExtensions::GetMessage(e, _context), ::g::Fuse::Scripting::V8::V8SimpleExtensions::GetFileName(e, _context), ::g::Fuse::Scripting::V8::V8SimpleExtensions::GetLineNumber(e), ::g::Fuse::Scripting::V8::V8SimpleExtensions::GetStackTrace(e, _context));

    if (_vmDepth == 0)
        U_THROW(se);
    else if (_cachedException == NULL)
        _cachedException = se;
}

// internal void ThrowPendingExceptions() [instance]
void Context::ThrowPendingExceptions()
{
    if (_vmDepth == 0)
    {
        if (_cachedException != NULL)
        {
            ::g::Uno::Exception* e = _cachedException;
            _cachedException = NULL;

            if (uIs(e, ::g::Fuse::Scripting::ScriptException_typeof()))
                U_THROW(e);
            else
                U_THROW(::g::Uno::Exception::New3(uString::Const("Unexpected Uno.Exception"), e));
        }
    }
}

// public Context New() [static]
Context* Context::New1()
{
    Context* obj1 = (Context*)uNew(Context_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.12.0/V8/Context.uno
// -----------------------------------------------------------------------------

// internal struct Context.EnterVM
// {
// public void Dispose() [adapter]
static void Context__EnterVM__Dispose_ex(uObject* __this)
{
    Context__EnterVM__Dispose_fn((Context__EnterVM*)((uint8_t*)__this + sizeof(uObject)));
}

static void Context__EnterVM_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Context__EnterVM_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Context_typeof(), offsetof(Context__EnterVM, _context), 0);
}

Context__EnterVM_type* Context__EnterVM_typeof()
{
    static uSStrong<Context__EnterVM_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.Alignment = alignof(Context__EnterVM);
    options.ValueSize = sizeof(Context__EnterVM);
    options.TypeSize = sizeof(Context__EnterVM_type);
    type = (Context__EnterVM_type*)uStructType::New("Fuse.Scripting.V8.Context.EnterVM", options);
    type->fp_build_ = Context__EnterVM_build;
    type->interface0.fp_Dispose = Context__EnterVM__Dispose_ex;
    return type;
}

// public EnterVM(Fuse.Scripting.V8.Context context)
void Context__EnterVM__ctor_1_fn(Context__EnterVM* __this, ::g::Fuse::Scripting::V8::Context* context)
{
    __this->ctor_1(context);
}

// public void Dispose()
void Context__EnterVM__Dispose_fn(Context__EnterVM* __this)
{
    __this->Dispose();
}

// public EnterVM New(Fuse.Scripting.V8.Context context)
void Context__EnterVM__New1_fn(::g::Fuse::Scripting::V8::Context* context, Context__EnterVM* __retval)
{
    *__retval = Context__EnterVM__New1(context);
}

// public EnterVM(Fuse.Scripting.V8.Context context) [instance]
void Context__EnterVM::ctor_1(::g::Fuse::Scripting::V8::Context* context)
{
    _context = context;
    ++uPtr(_context)->_vmDepth;
}

// public void Dispose() [instance]
void Context__EnterVM::Dispose()
{
    --uPtr(_context)->_vmDepth;
    _context = NULL;
}

// public EnterVM New(Fuse.Scripting.V8.Context context) [static]
Context__EnterVM Context__EnterVM__New1(::g::Fuse::Scripting::V8::Context* context)
{
    Context__EnterVM obj1;
    obj1.ctor_1(context);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.12.0/V8/V8SimpleExtensions.uno
// ----------------------------------------------------------------------------------------

// internal static extern class Error
// {
static void Error_build(uType* type)
{
    ::TYPES[5] = ::g::Uno::Int_typeof();
    type->SetDependencies(
        ::g::Fuse::Scripting::V8::V8SimpleExtensions_typeof());
}

uClassType* Error_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.Error", options);
    type->fp_build_ = Error_build;
    return type;
}

// public static void Check(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSScriptException err, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> handler)
void Error__Check_fn(::JSContext** context, ::JSScriptException** err, uDelegate* handler)
{
    Error::Check(*context, *err, handler);
}

// public static void Check(Fuse.Scripting.V8.Simple.JSRuntimeError err)
void Error__Check1_fn(int32_t* err)
{
    Error::Check1(*err);
}

// public static void Check(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSScriptException err, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> handler) [static]
void Error::Check(::JSContext* context, ::JSScriptException* err, uDelegate* handler)
{
    if (::g::Fuse::Scripting::V8::Simple::JSScriptException::op_Inequality(err, uDefault< ::JSScriptException*>()))
    {
        {
            try
            {
                {
                    uPtr(handler)->InvokeVoid(uCRef(err));
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    ::g::Fuse::Scripting::V8::V8SimpleExtensions::Release1(err, context);
                }
                                throw __t;
                goto __after_finally_10;
            }

            {
                ::g::Fuse::Scripting::V8::V8SimpleExtensions::Release1(err, context);
            }
            __after_finally_10:;
        }
    }
}

// public static void Check(Fuse.Scripting.V8.Simple.JSRuntimeError err) [static]
void Error::Check1(int32_t err)
{
    if (err != 0)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::Int::ToString(err, ::TYPES[5/*int*/])));
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.12.0/V8/Function.uno
// ------------------------------------------------------------------------------

// internal sealed extern class Function
// {
// ~Function()
static void Function__Finalize_fn(Function* __this)
{
    if ((__this->_context != NULL) && !uPtr(__this->_context)->IsDisposed())
        ::g::Fuse::Scripting::V8::V8SimpleExtensions::Release2(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue2(__this->_function), uPtr(__this->_context)->_context);
}

static void Function_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Inconsistent context");
    ::STRINGS[1] = uString::Const("context");
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    type->SetDependencies(
        ::g::Fuse::Scripting::V8::V8SimpleExtensions_typeof());
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Context_typeof(), offsetof(Function, _context), uFieldFlagsWeak,
        ::g::Fuse::Scripting::V8::Simple::JSFunction_typeof(), offsetof(Function, _function), 0);
}

::g::Fuse::Scripting::Function_type* Function_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Function_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Function_typeof();
    options.FieldCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Function);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Function_type);
    type = (::g::Fuse::Scripting::Function_type*)uClassType::New("Fuse.Scripting.V8.Function", options);
    type->fp_build_ = Function_build;
    type->fp_Finalize = (void(*)(uObject*))Function__Finalize_fn;
    type->fp_Call = (void(*)(::g::Fuse::Scripting::Function*, ::g::Fuse::Scripting::Context*, uArray*, uObject**))Function__Call_fn;
    type->fp_Construct = (void(*)(::g::Fuse::Scripting::Function*, ::g::Fuse::Scripting::Context*, uArray*, ::g::Fuse::Scripting::Object**))Function__Construct_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Function*, ::g::Fuse::Scripting::Function*, bool*))Function__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int32_t*))Function__GetHashCode_fn;
    return type;
}

// internal Function(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSFunction function)
void Function__ctor_1_fn(Function* __this, ::g::Fuse::Scripting::V8::Context* context, ::JSFunction** function)
{
    __this->ctor_1(context, *function);
}

// public override sealed object Call(Fuse.Scripting.Context context, object[] args)
void Function__Call_fn(Function* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    if (context != __this->_context)
        U_THROW(::g::Uno::ArgumentException::New5(::STRINGS[0/*"Inconsisten...*/], ::STRINGS[1/*"context"*/]));

    ::JSContext* cxt = uPtr(__this->_context)->_context;
    uObject* result = NULL;
    ::g::Fuse::Scripting::V8::AutoReleasePool pool = ::g::Fuse::Scripting::V8::AutoReleasePool__New1(cxt);

    {
        try
        {
            {
                ::g::Fuse::Scripting::V8::Context__EnterVM vm = ::g::Fuse::Scripting::V8::Context__EnterVM__New1(__this->_context);

                {
                    try
                    {
                        {
                            uArray* unwrappedArgs = ::g::Fuse::Scripting::V8::Marshaller::UnwrapArray(__this->_context, args, pool);
                            ::JSObject* thisObject = ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsObject(::g::Fuse::Scripting::V8::V8SimpleExtensions::Null());
                            result = ::g::Fuse::Scripting::V8::Marshaller::Wrap(__this->_context, ::g::Fuse::Scripting::V8::V8SimpleExtensions::Call(__this->_function, cxt, thisObject, unwrappedArgs, pool, uPtr(__this->_context)->_errorHandler));
                        }
                    }

                    catch (const uThrowable& __t)
                    {
                        {
                            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
                        }
                                                throw __t;
                        goto __after_finally_11;
                    }

                    {
                        ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
                    }
                    __after_finally_11:;
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_12;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_12:;
    }

    uPtr(__this->_context)->ThrowPendingExceptions();
    return *__retval = result, void();
}

// public override sealed Fuse.Scripting.Object Construct(Fuse.Scripting.Context context, object[] args)
void Function__Construct_fn(Function* __this, ::g::Fuse::Scripting::Context* context, uArray* args, ::g::Fuse::Scripting::Object** __retval)
{
    if (context != __this->_context)
        U_THROW(::g::Uno::ArgumentException::New5(::STRINGS[0/*"Inconsisten...*/], ::STRINGS[1/*"context"*/]));

    ::JSContext* cxt = uPtr(__this->_context)->_context;
    ::g::Fuse::Scripting::V8::Object* result = NULL;
    ::g::Fuse::Scripting::V8::AutoReleasePool pool = ::g::Fuse::Scripting::V8::AutoReleasePool__New1(cxt);

    {
        try
        {
            {
                ::g::Fuse::Scripting::V8::Context__EnterVM vm = ::g::Fuse::Scripting::V8::Context__EnterVM__New1(__this->_context);

                {
                    try
                    {
                        {
                            uArray* unwrappedArgs = ::g::Fuse::Scripting::V8::Marshaller::UnwrapArray(__this->_context, args, pool);
                            result = ::g::Fuse::Scripting::V8::Object::New1(__this->_context, ::g::Fuse::Scripting::V8::V8SimpleExtensions::Construct(__this->_function, cxt, unwrappedArgs, pool, uPtr(__this->_context)->_errorHandler));
                        }
                    }

                    catch (const uThrowable& __t)
                    {
                        {
                            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
                        }
                                                throw __t;
                        goto __after_finally_13;
                    }

                    {
                        ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
                    }
                    __after_finally_13:;
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_14;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_14:;
    }

    uPtr(__this->_context)->ThrowPendingExceptions();
    return *__retval = result, void();
}

// public override sealed bool Equals(Fuse.Scripting.Function f)
void Function__Equals2_fn(Function* __this, ::g::Fuse::Scripting::Function* f, bool* __retval)
{
    ::JSFunction* ind1;
    Function* that = uAs<Function*>(f, __this->__type);
    return *__retval = (that != NULL) && uBox(::g::Fuse::Scripting::V8::Simple::JSFunction_typeof(), (ind1 = __this->_function, ind1), U_ALLOCA(::g::Fuse::Scripting::V8::Simple::JSFunction_typeof()->ObjectSize))->Equals(uBox(::g::Fuse::Scripting::V8::Simple::JSFunction_typeof(), uPtr(that)->_function)), void();
}

// public override sealed int GetHashCode()
void Function__GetHashCode_fn(Function* __this, int32_t* __retval)
{
    ::JSFunction* ind2;
    return *__retval = uBox(::g::Fuse::Scripting::V8::Simple::JSFunction_typeof(), (ind2 = __this->_function, ind2), U_ALLOCA(::g::Fuse::Scripting::V8::Simple::JSFunction_typeof()->ObjectSize))->GetHashCode(), void();
}

// internal Fuse.Scripting.V8.Simple.JSFunction GetJSFunction(Fuse.Scripting.V8.AutoReleasePool pool)
void Function__GetJSFunction_fn(Function* __this, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSFunction** __retval)
{
    *__retval = __this->GetJSFunction(*pool);
}

// internal Function New(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSFunction function)
void Function__New1_fn(::g::Fuse::Scripting::V8::Context* context, ::JSFunction** function, Function** __retval)
{
    *__retval = Function::New1(context, *function);
}

// internal Function(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSFunction function) [instance]
void Function::ctor_1(::g::Fuse::Scripting::V8::Context* context, ::JSFunction* function)
{
    ctor_();
    _context = context;
    _function = function;
    ::g::Fuse::Scripting::V8::V8SimpleExtensions::Retain2(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue2(_function), uPtr(_context)->_context);
}

// internal Fuse.Scripting.V8.Simple.JSFunction GetJSFunction(Fuse.Scripting.V8.AutoReleasePool pool) [instance]
::JSFunction* Function::GetJSFunction(::g::Fuse::Scripting::V8::AutoReleasePool pool)
{
    ::g::Fuse::Scripting::V8::V8SimpleExtensions::Retain2(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue2(_function), uPtr(_context)->_context);
    return pool.AutoRelease2(_function);
}

// internal Function New(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSFunction function) [static]
Function* Function::New1(::g::Fuse::Scripting::V8::Context* context, ::JSFunction* function)
{
    Function* obj3 = (Function*)uNew(Function_typeof());
    obj3->ctor_1(context, function);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.12.0/V8/Handle.uno
// ----------------------------------------------------------------------------

// internal static extern class Handle
// {
static void Handle_build(uType* type)
{
}

uClassType* Handle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.Handle", options);
    type->fp_build_ = Handle_build;
    return type;
}

// public static Uno.IntPtr Create(object o)
void Handle__Create_fn(uObject* o, void** __retval)
{
    *__retval = Handle::Create(o);
}

// public static void Free(Uno.IntPtr handle)
void Handle__Free_fn(void** handle)
{
    Handle::Free(*handle);
}

// public static object Target(Uno.IntPtr handle)
void Handle__Target_fn(void** handle, uObject** __retval)
{
    *__retval = Handle::Target(*handle);
}

// public static Uno.IntPtr Create(object o) [static]
void* Handle::Create(uObject* o)
{
    return ::g::Uno::Runtime::InteropServices::GCHandle__op_Explicit2(::g::Uno::Runtime::InteropServices::GCHandle__Alloc(o));
}

// public static void Free(Uno.IntPtr handle) [static]
void Handle::Free(void* handle)
{
    ::g::Uno::Runtime::InteropServices::GCHandle__op_Explicit1(handle).Free();
}

// public static object Target(Uno.IntPtr handle) [static]
uObject* Handle::Target(void* handle)
{
    return ::g::Uno::Runtime::InteropServices::GCHandle__op_Explicit1(handle).Target();
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.12.0/V8/Context.uno
// -----------------------------------------------------------------------------

// internal static extern class Marshaller
// {
static void Marshaller_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Scripting::V8::V8SimpleExtensions_typeof());
}

uClassType* Marshaller_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.Marshaller", options);
    type->fp_build_ = Marshaller_build;
    return type;
}

// private static Fuse.Scripting.V8.Simple.JSValue NewArrayBuffer(Fuse.Scripting.V8.Context context, byte[] data, Fuse.Scripting.V8.AutoReleasePool pool)
void Marshaller__NewArrayBuffer_fn(::g::Fuse::Scripting::V8::Context* context, uArray* data, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSValue** __retval)
{
    *__retval = Marshaller::NewArrayBuffer(context, data, *pool);
}

// private static int ToInt(object o)
void Marshaller__ToInt_fn(uObject* o, int32_t* __retval)
{
    *__retval = Marshaller::ToInt(o);
}

// internal static byte[] TryGetArrayBufferData(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Object o)
void Marshaller__TryGetArrayBufferData_fn(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Object* o, uArray** __retval)
{
    *__retval = Marshaller::TryGetArrayBufferData(context, o);
}

// internal static Fuse.Scripting.V8.Simple.JSValue Unwrap(Fuse.Scripting.V8.Context context, object obj, Fuse.Scripting.V8.AutoReleasePool pool)
void Marshaller__Unwrap_fn(::g::Fuse::Scripting::V8::Context* context, uObject* obj, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSValue** __retval)
{
    *__retval = Marshaller::Unwrap(context, obj, *pool);
}

// internal static Fuse.Scripting.V8.Simple.JSValue[] UnwrapArray(Fuse.Scripting.V8.Context context, object[] values, Fuse.Scripting.V8.AutoReleasePool pool)
void Marshaller__UnwrapArray_fn(::g::Fuse::Scripting::V8::Context* context, uArray* values, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uArray** __retval)
{
    *__retval = Marshaller::UnwrapArray(context, values, *pool);
}

// internal static object Wrap(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSValue val)
void Marshaller__Wrap_fn(::g::Fuse::Scripting::V8::Context* context, ::JSValue** val, uObject** __retval)
{
    *__retval = Marshaller::Wrap(context, *val);
}

// private static object[] WrapArray(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSValue[] values)
void Marshaller__WrapArray_fn(::g::Fuse::Scripting::V8::Context* context, uArray* values, uArray** __retval)
{
    *__retval = Marshaller::WrapArray(context, values);
}

// private static Fuse.Scripting.V8.Simple.JSValue NewArrayBuffer(Fuse.Scripting.V8.Context context, byte[] data, Fuse.Scripting.V8.AutoReleasePool pool) [static]
::JSValue* Marshaller::NewArrayBuffer(::g::Fuse::Scripting::V8::Context* context, uArray* data, ::g::Fuse::Scripting::V8::AutoReleasePool pool)
{
    ::g::Fuse::Scripting::V8::ArrayHandle* handle = ::g::Fuse::Scripting::V8::ArrayHandle::New1(data);
    ::g::Fuse::Scripting::V8::Object* obj = ::g::Fuse::Scripting::V8::Object::New1(context, ::g::Fuse::Scripting::V8::V8SimpleExtensions::NewExternalArrayBuffer(uPtr(context)->_context, handle->GetIntPtr(), uPtr(data)->Length(), pool));
    obj->Item(uString::Const("__unoHandle"), ::g::Fuse::Scripting::External::New1(handle));
    return ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue3(obj->GetJSObject(pool));
}

// private static int ToInt(object o) [static]
int32_t Marshaller::ToInt(uObject* o)
{
    if (uIs(o, ::TYPES[5/*int*/]))
        return uUnbox<int32_t>(::TYPES[5/*int*/], o);

    if (uIs(o, ::g::Uno::Double_typeof()))
        return (int32_t)uUnbox<double>(::g::Uno::Double_typeof(), o);

    return 0;
}

// internal static byte[] TryGetArrayBufferData(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Object o) [static]
uArray* Marshaller::TryGetArrayBufferData(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Object* o)
{
    ::JSContext* cxt = uPtr(context)->_context;
    void* ptr = ::g::Fuse::Scripting::V8::V8SimpleExtensions::TryGetArrayBufferData(uPtr(o)->_object, context->_context);

    if (::g::Uno::IntPtr::op_Equality(ptr, ::g::Uno::IntPtr::Zero_))
        return NULL;

    if (o->ContainsKey(uString::Const("__unoHandle")))
    {
        ::g::Fuse::Scripting::External* ext = uAs< ::g::Fuse::Scripting::External*>(uPtr(o)->Item(uString::Const("__unoHandle")), ::g::Fuse::Scripting::External_typeof());
        ::g::Fuse::Scripting::V8::ArrayHandle* handle = (ext == NULL) ? uCast< ::g::Fuse::Scripting::V8::ArrayHandle*>(NULL, ::g::Fuse::Scripting::V8::ArrayHandle_typeof()) : uAs< ::g::Fuse::Scripting::V8::ArrayHandle*>(uPtr(ext)->Object, ::g::Fuse::Scripting::V8::ArrayHandle_typeof());

        if (handle != NULL)
            return uPtr(handle)->Array;
    }

    if (o->ContainsKey(uString::Const("byteLength")))
    {
        int32_t len = Marshaller::ToInt(uPtr(o)->Item(uString::Const("byteLength")));
        return ::g::Fuse::Scripting::V8::ArrayHandle::CopyToArray(ptr, len);
    }

    U_THROW(::g::Uno::Exception::New2(uString::Const("V8: Unable to get data from ArrayBuffer")));
}

// internal static Fuse.Scripting.V8.Simple.JSValue Unwrap(Fuse.Scripting.V8.Context context, object obj, Fuse.Scripting.V8.AutoReleasePool pool) [static]
::JSValue* Marshaller::Unwrap(::g::Fuse::Scripting::V8::Context* context, uObject* obj, ::g::Fuse::Scripting::V8::AutoReleasePool pool)
{
    ::JSContext* cxt = uPtr(context)->_context;

    if (obj == NULL)
        return ::g::Fuse::Scripting::V8::V8SimpleExtensions::Null();

    if (uIs(obj, ::TYPES[5/*int*/]))
        return ::g::Fuse::Scripting::V8::V8SimpleExtensions::NewInt(uUnbox<int32_t>(::TYPES[5/*int*/], obj), pool);

    if (uIs(obj, ::g::Uno::Double_typeof()))
        return ::g::Fuse::Scripting::V8::V8SimpleExtensions::NewDouble(uUnbox<double>(::g::Uno::Double_typeof(), obj), pool);

    if (uIs(obj, ::g::Uno::Float_typeof()))
        return ::g::Fuse::Scripting::V8::V8SimpleExtensions::NewDouble((double)uUnbox<float>(::g::Uno::Float_typeof(), obj), pool);

    if (uIs(obj, ::TYPES[9/*string*/]))
        return ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue4(::g::Fuse::Scripting::V8::V8SimpleExtensions::NewString(cxt, uCast<uString*>(obj, ::TYPES[9/*string*/]), pool));

    if (uIs(obj, ::g::Uno::UX::Selector_typeof()))
        return ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue4(::g::Fuse::Scripting::V8::V8SimpleExtensions::NewString(cxt, ::g::Uno::UX::Selector__op_Implicit1(uUnbox< ::g::Uno::UX::Selector>(::g::Uno::UX::Selector_typeof(), obj)), pool));

    if (uIs(obj, ::g::Uno::Bool_typeof()))
        return ::g::Fuse::Scripting::V8::V8SimpleExtensions::NewBool(uUnbox<bool>(::g::Uno::Bool_typeof(), obj), pool);

    if (uIs(obj, ::g::Uno::Byte_typeof()->Array()))
        return Marshaller::NewArrayBuffer(context, uCast<uArray*>(obj, ::g::Uno::Byte_typeof()->Array()), pool);

    if (uIs(obj, ::g::Fuse::Scripting::V8::Object_typeof()))
        return ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue3(uPtr(uCast< ::g::Fuse::Scripting::V8::Object*>(obj, ::g::Fuse::Scripting::V8::Object_typeof()))->GetJSObject(pool));

    if (uIs(obj, ::g::Fuse::Scripting::V8::Array_typeof()))
        return ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue(uPtr(uCast< ::g::Fuse::Scripting::V8::Array*>(obj, ::g::Fuse::Scripting::V8::Array_typeof()))->GetJSArray(pool));

    if (uIs(obj, ::TYPES[6/*Fuse.Scripting.V8.Function*/]))
        return ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue2(uPtr(uCast< ::g::Fuse::Scripting::V8::Function*>(obj, ::TYPES[6/*Fuse.Scripting.V8.Function*/]))->GetJSFunction(pool));

    if (uIs(obj, ::g::Fuse::Scripting::Callback_typeof()))
        return ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue2(::g::Fuse::Scripting::V8::V8SimpleExtensions::NewCallback(cxt, uDelegate::New(::g::Fuse::Scripting::V8::V8SimpleExtensions__WrappedCallback_typeof(), (void*)Marshaller__CallbackWrapper__Call_fn, Marshaller__CallbackWrapper::New1(context, uCast<uDelegate*>(obj, ::g::Fuse::Scripting::Callback_typeof()))), pool, uPtr(context)->_errorHandler));

    if (uIs(obj, ::g::Fuse::Scripting::External_typeof()))
        return ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue1(::g::Fuse::Scripting::V8::V8SimpleExtensions::NewExternal(cxt, ::g::Fuse::Scripting::V8::Handle::Create(uPtr(uCast< ::g::Fuse::Scripting::External*>(obj, ::g::Fuse::Scripting::External_typeof()))->Object), pool));

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(uString::Const("Unhandled type in V8 marshaller: "), ::g::Uno::Object::GetType(uPtr(obj))), uString::Const(":")), obj)));
}

// internal static Fuse.Scripting.V8.Simple.JSValue[] UnwrapArray(Fuse.Scripting.V8.Context context, object[] values, Fuse.Scripting.V8.AutoReleasePool pool) [static]
uArray* Marshaller::UnwrapArray(::g::Fuse::Scripting::V8::Context* context, uArray* values, ::g::Fuse::Scripting::V8::AutoReleasePool pool)
{
    int32_t len = uPtr(values)->Length();
    uArray* unwrappedValues = uArray::New(::g::Fuse::Scripting::V8::Simple::JSValue_typeof()->Array(), len);

    for (int32_t i = 0; i < len; ++i)
        uPtr(unwrappedValues)->Item< ::JSValue*>(i) = Marshaller::Unwrap(context, uPtr(values)->Strong<uObject*>(i), pool);

    return unwrappedValues;
}

// internal static object Wrap(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSValue val) [static]
uObject* Marshaller::Wrap(::g::Fuse::Scripting::V8::Context* context, ::JSValue* val)
{
    ::JSContext* cxt = uPtr(context)->_context;

    switch (::g::Fuse::Scripting::V8::V8SimpleExtensions::GetJSType(val))
    {
        case 0:
            return NULL;
        case 1:
            return uBox<int32_t>(::TYPES[5/*int*/], ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsInt(val));
        case 2:
            return uBox(::g::Uno::Double_typeof(), ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsDouble(val));
        case 3:
            return ::g::Fuse::Scripting::V8::V8SimpleExtensions::ToStr(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsString(val), cxt);
        case 4:
            return uBox(::g::Uno::Bool_typeof(), ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsBool(val));
        case 5:
        {
            ::g::Fuse::Scripting::V8::Object* res = ::g::Fuse::Scripting::V8::Object::New1(context, ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsObject(val));
            uArray* buf = Marshaller::TryGetArrayBufferData(context, res);

            if (buf != NULL)
                return buf;

            return res;
        }
        case 6:
            return ::g::Fuse::Scripting::V8::Array::New1(context, ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsArray(val));
        case 7:
            return ::g::Fuse::Scripting::V8::Function::New1(context, ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsFunction(val));
        case 8:
            return ::g::Fuse::Scripting::External::New1(::g::Fuse::Scripting::V8::Handle::Target(::g::Fuse::Scripting::V8::V8SimpleExtensions::GetValue(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsExternal(val), cxt)));
        default:
            U_THROW(::g::Uno::Exception::New2(uString::Const("V8 marshaller: The impossible happened.")));
    }
}

// private static object[] WrapArray(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSValue[] values) [static]
uArray* Marshaller::WrapArray(::g::Fuse::Scripting::V8::Context* context, uArray* values)
{
    int32_t len = (values == NULL) ? 0 : uPtr(values)->Length();
    uArray* wrappedValues = uArray::New(::TYPES[7/*object[]*/], len);

    for (int32_t i = 0; i < len; ++i)
        uPtr(wrappedValues)->Strong<uObject*>(i) = Marshaller::Wrap(context, uPtr(values)->Item< ::JSValue*>(i));

    return wrappedValues;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.12.0/V8/Object.uno
// ----------------------------------------------------------------------------

// internal sealed extern class Object
// {
// ~Object()
static void Object__Finalize_fn(Object* __this)
{
    if ((__this->_context != NULL) && !uPtr(__this->_context)->IsDisposed())
        ::g::Fuse::Scripting::V8::V8SimpleExtensions::Release2(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue3(__this->_object), uPtr(__this->_context)->_context);
}

static void Object_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Inconsistent context");
    ::STRINGS[1] = uString::Const("context");
    ::STRINGS[2] = uString::Const("No such method: ");
    ::TYPES[6] = ::g::Fuse::Scripting::V8::Function_typeof();
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[7] = uObject_typeof()->Array();
    ::TYPES[8] = ::g::Uno::String_typeof()->Array();
    ::TYPES[9] = ::g::Uno::String_typeof();
    type->SetDependencies(
        ::g::Fuse::Scripting::V8::V8SimpleExtensions_typeof());
    type->SetInterfaces(
        ::g::Fuse::IObject_typeof(), offsetof(::g::Fuse::Scripting::Object_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Context_typeof(), offsetof(Object, _context), uFieldFlagsWeak,
        ::g::Fuse::Scripting::V8::Simple::JSObject_typeof(), offsetof(Object, _object), 0);
}

::g::Fuse::Scripting::Object_type* Object_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Object_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Object_type);
    type = (::g::Fuse::Scripting::Object_type*)uClassType::New("Fuse.Scripting.V8.Object", options);
    type->fp_build_ = Object_build;
    type->fp_Finalize = (void(*)(uObject*))Object__Finalize_fn;
    type->fp_CallMethod = (void(*)(::g::Fuse::Scripting::Object*, ::g::Fuse::Scripting::Context*, uString*, uArray*, uObject**))Object__CallMethod_fn;
    type->fp_ContainsKey = (void(*)(::g::Fuse::Scripting::Object*, uString*, bool*))Object__ContainsKey_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Object*, ::g::Fuse::Scripting::Object*, bool*))Object__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int32_t*))Object__GetHashCode_fn;
    type->fp_InstanceOf = (void(*)(::g::Fuse::Scripting::Object*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::Function*, bool*))Object__InstanceOf_fn;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::Object*, uString*, uObject**))Object__get_Item_fn;
    type->fp_set_Item = (void(*)(::g::Fuse::Scripting::Object*, uString*, uObject*))Object__set_Item_fn;
    type->fp_get_Keys = (void(*)(::g::Fuse::Scripting::Object*, uArray**))Object__get_Keys_fn;
    type->interface0.fp_ContainsKey = (void(*)(uObject*, uString*, bool*))Object__ContainsKey_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, uString*, uObject**))Object__get_Item_fn;
    type->interface0.fp_get_Keys = (void(*)(uObject*, uArray**))Object__get_Keys_fn;
    return type;
}

// public Object(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSObject obj)
void Object__ctor_1_fn(Object* __this, ::g::Fuse::Scripting::V8::Context* context, ::JSObject** obj)
{
    __this->ctor_1(context, *obj);
}

// public override sealed object CallMethod(Fuse.Scripting.Context context, string name, object[] args)
void Object__CallMethod_fn(Object* __this, ::g::Fuse::Scripting::Context* context, uString* name, uArray* args, uObject** __retval)
{
    if (context != __this->_context)
        U_THROW(::g::Uno::ArgumentException::New5(::STRINGS[0/*"Inconsisten...*/], ::STRINGS[1/*"context"*/]));

    ::JSContext* cxt = uPtr(__this->_context)->_context;
    uObject* result = NULL;
    ::g::Fuse::Scripting::V8::AutoReleasePool pool = ::g::Fuse::Scripting::V8::AutoReleasePool__New1(cxt);

    {
        try
        {
            {
                ::g::Fuse::Scripting::V8::Context__EnterVM vm = ::g::Fuse::Scripting::V8::Context__EnterVM__New1(__this->_context);

                {
                    try
                    {
                        {
                            ::g::Fuse::Scripting::V8::Function* fun = uAs< ::g::Fuse::Scripting::V8::Function*>(::g::Fuse::Scripting::V8::Marshaller::Wrap(__this->_context, ::g::Fuse::Scripting::V8::V8SimpleExtensions::GetProperty1(__this->_object, cxt, name, pool, uPtr(__this->_context)->_errorHandler)), ::TYPES[6/*Fuse.Scripting.V8.Function*/]);

                            if (fun == NULL)
                                U_THROW(::g::Fuse::Scripting::Error::New4(::g::Uno::String::op_Addition1(::STRINGS[2/*"No such met...*/], fun)));

                            uArray* unwrappedArgs = ::g::Fuse::Scripting::V8::Marshaller::UnwrapArray(__this->_context, args, pool);
                            result = ::g::Fuse::Scripting::V8::Marshaller::Wrap(__this->_context, ::g::Fuse::Scripting::V8::V8SimpleExtensions::Call(uPtr(fun)->GetJSFunction(pool), cxt, __this->_object, unwrappedArgs, pool, uPtr(__this->_context)->_errorHandler));
                        }
                    }

                    catch (const uThrowable& __t)
                    {
                        {
                            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
                        }
                                                throw __t;
                        goto __after_finally_15;
                    }

                    {
                        ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
                    }
                    __after_finally_15:;
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_16;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_16:;
    }

    uPtr(__this->_context)->ThrowPendingExceptions();
    return *__retval = result, void();
}

// public override sealed bool ContainsKey(string key)
void Object__ContainsKey_fn(Object* __this, uString* key, bool* __retval)
{
    ::JSContext* cxt = uPtr(__this->_context)->_context;
    bool result = false;
    ::g::Fuse::Scripting::V8::AutoReleasePool pool = ::g::Fuse::Scripting::V8::AutoReleasePool__New1(cxt);

    {
        try
        {
            {
                ::g::Fuse::Scripting::V8::Context__EnterVM vm = ::g::Fuse::Scripting::V8::Context__EnterVM__New1(__this->_context);

                {
                    try
                    {
                        {
                            result = ::g::Fuse::Scripting::V8::V8SimpleExtensions::HasProperty(__this->_object, cxt, key, pool, uPtr(__this->_context)->_errorHandler);
                        }
                    }

                    catch (const uThrowable& __t)
                    {
                        {
                            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
                        }
                                                throw __t;
                        goto __after_finally_17;
                    }

                    {
                        ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
                    }
                    __after_finally_17:;
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_18;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_18:;
    }

    uPtr(__this->_context)->ThrowPendingExceptions();
    return *__retval = result, void();
}

// public override sealed bool Equals(Fuse.Scripting.Object o)
void Object__Equals2_fn(Object* __this, ::g::Fuse::Scripting::Object* o, bool* __retval)
{
    ::JSObject* ind1;
    Object* that = uAs<Object*>(o, __this->__type);
    return *__retval = (that != NULL) && uBox(::g::Fuse::Scripting::V8::Simple::JSObject_typeof(), (ind1 = __this->_object, ind1), U_ALLOCA(::g::Fuse::Scripting::V8::Simple::JSObject_typeof()->ObjectSize))->Equals(uBox(::g::Fuse::Scripting::V8::Simple::JSObject_typeof(), uPtr(that)->_object)), void();
}

// public override sealed int GetHashCode()
void Object__GetHashCode_fn(Object* __this, int32_t* __retval)
{
    ::JSObject* ind2;
    return *__retval = uBox(::g::Fuse::Scripting::V8::Simple::JSObject_typeof(), (ind2 = __this->_object, ind2), U_ALLOCA(::g::Fuse::Scripting::V8::Simple::JSObject_typeof()->ObjectSize))->GetHashCode(), void();
}

// internal Fuse.Scripting.V8.Simple.JSObject GetJSObject(Fuse.Scripting.V8.AutoReleasePool pool)
void Object__GetJSObject_fn(Object* __this, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSObject** __retval)
{
    *__retval = __this->GetJSObject(*pool);
}

// public override sealed bool InstanceOf(Fuse.Scripting.Context context, Fuse.Scripting.Function type)
void Object__InstanceOf_fn(Object* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* type, bool* __retval)
{
    if (context != __this->_context)
        U_THROW(::g::Uno::ArgumentException::New5(::STRINGS[0/*"Inconsisten...*/], ::STRINGS[1/*"context"*/]));

    ::g::Fuse::Scripting::V8::Function* f = uAs< ::g::Fuse::Scripting::V8::Function*>(type, ::TYPES[6/*Fuse.Scripting.V8.Function*/]);
    return *__retval = uUnbox<bool>(::g::Uno::Bool_typeof(), uPtr(uPtr(__this->_context)->_instanceOf)->Call(__this->_context, uArray::Init<uObject*>(::TYPES[7/*object[]*/], 2, __this, type))), void();
}

// public override sealed object get_Item(string key)
void Object__get_Item_fn(Object* __this, uString* key, uObject** __retval)
{
    ::JSContext* cxt = uPtr(__this->_context)->_context;
    uObject* result = NULL;
    ::g::Fuse::Scripting::V8::AutoReleasePool pool = ::g::Fuse::Scripting::V8::AutoReleasePool__New1(cxt);

    {
        try
        {
            {
                ::g::Fuse::Scripting::V8::Context__EnterVM vm = ::g::Fuse::Scripting::V8::Context__EnterVM__New1(__this->_context);

                {
                    try
                    {
                        {
                            result = ::g::Fuse::Scripting::V8::Marshaller::Wrap(__this->_context, ::g::Fuse::Scripting::V8::V8SimpleExtensions::GetProperty1(__this->_object, cxt, key, pool, uPtr(__this->_context)->_errorHandler));
                        }
                    }

                    catch (const uThrowable& __t)
                    {
                        {
                            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
                        }
                                                throw __t;
                        goto __after_finally_19;
                    }

                    {
                        ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
                    }
                    __after_finally_19:;
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_20;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_20:;
    }

    uPtr(__this->_context)->ThrowPendingExceptions();
    return *__retval = result, void();
}

// public override sealed void set_Item(string key, object value)
void Object__set_Item_fn(Object* __this, uString* key, uObject* value)
{
    ::JSContext* cxt = uPtr(__this->_context)->_context;
    ::g::Fuse::Scripting::V8::AutoReleasePool pool = ::g::Fuse::Scripting::V8::AutoReleasePool__New1(cxt);

    {
        try
        {
            {
                ::g::Fuse::Scripting::V8::Context__EnterVM vm = ::g::Fuse::Scripting::V8::Context__EnterVM__New1(__this->_context);

                {
                    try
                    {
                        {
                            ::g::Fuse::Scripting::V8::V8SimpleExtensions::SetProperty1(__this->_object, cxt, key, ::g::Fuse::Scripting::V8::Marshaller::Unwrap(__this->_context, value, pool), pool, uPtr(__this->_context)->_errorHandler);
                        }
                    }

                    catch (const uThrowable& __t)
                    {
                        {
                            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
                        }
                                                throw __t;
                        goto __after_finally_21;
                    }

                    {
                        ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
                    }
                    __after_finally_21:;
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_22;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_22:;
    }

    uPtr(__this->_context)->ThrowPendingExceptions();
}

// public override sealed string[] get_Keys()
void Object__get_Keys_fn(Object* __this, uArray** __retval)
{
    ::JSContext* cxt = uPtr(__this->_context)->_context;
    uArray* result = NULL;
    ::g::Fuse::Scripting::V8::AutoReleasePool pool = ::g::Fuse::Scripting::V8::AutoReleasePool__New1(cxt);

    {
        try
        {
            {
                ::g::Fuse::Scripting::V8::Context__EnterVM vm = ::g::Fuse::Scripting::V8::Context__EnterVM__New1(__this->_context);

                {
                    try
                    {
                        {
                            ::JSArray* keys = ::g::Fuse::Scripting::V8::V8SimpleExtensions::GetOwnPropertyNames(__this->_object, cxt, pool, uPtr(__this->_context)->_errorHandler);
                            int32_t len = ::g::Fuse::Scripting::V8::V8SimpleExtensions::Length(keys, cxt);
                            result = uArray::New(::TYPES[8/*string[]*/], len);

                            for (int32_t i = 0; i < len; ++i)
                            {
                                ::JSValue* prop = ::g::Fuse::Scripting::V8::V8SimpleExtensions::GetProperty(keys, cxt, i, pool, uPtr(__this->_context)->_errorHandler);
                                uObject* wrappedProp = ::g::Fuse::Scripting::V8::Marshaller::Wrap(__this->_context, prop);
                                uString* strProp = uAs<uString*>(wrappedProp, ::TYPES[9/*string*/]);

                                if (::g::Uno::String::op_Equality(strProp, NULL))
                                    strProp = ::g::Uno::Object::ToString(uPtr(wrappedProp));

                                uPtr(result)->Strong<uString*>(i) = strProp;
                            }
                        }
                    }

                    catch (const uThrowable& __t)
                    {
                        {
                            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
                        }
                                                throw __t;
                        goto __after_finally_23;
                    }

                    {
                        ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
                    }
                    __after_finally_23:;
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_24;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_24:;
    }

    uPtr(__this->_context)->ThrowPendingExceptions();
    return *__retval = result, void();
}

// public Object New(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSObject obj)
void Object__New1_fn(::g::Fuse::Scripting::V8::Context* context, ::JSObject** obj, Object** __retval)
{
    *__retval = Object::New1(context, *obj);
}

// public Object(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSObject obj) [instance]
void Object::ctor_1(::g::Fuse::Scripting::V8::Context* context, ::JSObject* obj)
{
    ctor_();
    _context = context;
    _object = obj;
    ::g::Fuse::Scripting::V8::V8SimpleExtensions::Retain2(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue3(_object), uPtr(_context)->_context);
}

// internal Fuse.Scripting.V8.Simple.JSObject GetJSObject(Fuse.Scripting.V8.AutoReleasePool pool) [instance]
::JSObject* Object::GetJSObject(::g::Fuse::Scripting::V8::AutoReleasePool pool)
{
    ::g::Fuse::Scripting::V8::V8SimpleExtensions::Retain2(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue3(_object), uPtr(_context)->_context);
    return pool.AutoRelease3(_object);
}

// public Object New(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSObject obj) [static]
Object* Object::New1(::g::Fuse::Scripting::V8::Context* context, ::JSObject* obj)
{
    Object* obj3 = (Object*)uNew(Object_typeof());
    obj3->ctor_1(context, obj);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.12.0/V8/V8SimpleExtensions.uno
// ----------------------------------------------------------------------------------------

// internal static extern class V8SimpleExtensions
// {
// static generated V8SimpleExtensions()
static void V8SimpleExtensions__cctor__fn(uType* __type)
{
    V8SimpleExtensions::CilCallback_ = uDelegate::New(::g::Fuse::Scripting::V8::Simple::JSCallback_typeof(), (void*)V8SimpleExtensions__CilCallbackImpl_fn);
}

static void V8SimpleExtensions_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Simple::JSCallback_typeof(), (uintptr_t)&V8SimpleExtensions::CilCallback_, uFieldFlagsStatic);
}

uClassType* V8SimpleExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.V8SimpleExtensions", options);
    type->fp_build_ = V8SimpleExtensions_build;
    type->fp_cctor_ = V8SimpleExtensions__cctor__fn;
    return type;
}

// public static Fuse.Scripting.V8.Simple.JSArray AsArray(Fuse.Scripting.V8.Simple.JSValue value)
void V8SimpleExtensions__AsArray_fn(::JSValue** value, ::JSArray** __retval)
{
    *__retval = V8SimpleExtensions::AsArray(*value);
}

// public static bool AsBool(Fuse.Scripting.V8.Simple.JSValue value)
void V8SimpleExtensions__AsBool_fn(::JSValue** value, bool* __retval)
{
    *__retval = V8SimpleExtensions::AsBool(*value);
}

// public static double AsDouble(Fuse.Scripting.V8.Simple.JSValue value)
void V8SimpleExtensions__AsDouble_fn(::JSValue** value, double* __retval)
{
    *__retval = V8SimpleExtensions::AsDouble(*value);
}

// public static Fuse.Scripting.V8.Simple.JSExternal AsExternal(Fuse.Scripting.V8.Simple.JSValue value)
void V8SimpleExtensions__AsExternal_fn(::JSValue** value, ::JSExternal** __retval)
{
    *__retval = V8SimpleExtensions::AsExternal(*value);
}

// public static Fuse.Scripting.V8.Simple.JSFunction AsFunction(Fuse.Scripting.V8.Simple.JSValue value)
void V8SimpleExtensions__AsFunction_fn(::JSValue** value, ::JSFunction** __retval)
{
    *__retval = V8SimpleExtensions::AsFunction(*value);
}

// public static int AsInt(Fuse.Scripting.V8.Simple.JSValue value)
void V8SimpleExtensions__AsInt_fn(::JSValue** value, int32_t* __retval)
{
    *__retval = V8SimpleExtensions::AsInt(*value);
}

// public static Fuse.Scripting.V8.Simple.JSObject AsObject(Fuse.Scripting.V8.Simple.JSValue value)
void V8SimpleExtensions__AsObject_fn(::JSValue** value, ::JSObject** __retval)
{
    *__retval = V8SimpleExtensions::AsObject(*value);
}

// public static Fuse.Scripting.V8.Simple.JSString AsString(Fuse.Scripting.V8.Simple.JSValue value)
void V8SimpleExtensions__AsString_fn(::JSValue** value, ::JSString** __retval)
{
    *__retval = V8SimpleExtensions::AsString(*value);
}

// public static Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSArray arr)
void V8SimpleExtensions__AsValue_fn(::JSArray** arr, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::AsValue(*arr);
}

// public static Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSExternal ext)
void V8SimpleExtensions__AsValue1_fn(::JSExternal** ext, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::AsValue1(*ext);
}

// public static Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSFunction fun)
void V8SimpleExtensions__AsValue2_fn(::JSFunction** fun, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::AsValue2(*fun);
}

// public static Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSObject obj)
void V8SimpleExtensions__AsValue3_fn(::JSObject** obj, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::AsValue3(*obj);
}

// public static Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSString str)
void V8SimpleExtensions__AsValue4_fn(::JSString** str, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::AsValue4(*str);
}

// public static Fuse.Scripting.V8.Simple.JSValue Call(Fuse.Scripting.V8.Simple.JSFunction fun, Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSObject thisObject, Fuse.Scripting.V8.Simple.JSValue[] args, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler)
void V8SimpleExtensions__Call_fn(::JSFunction** fun, ::JSContext** context, ::JSObject** thisObject, uArray* args, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uDelegate* errorHandler, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::Call(*fun, *context, *thisObject, args, *pool, errorHandler);
}

// private static Fuse.Scripting.V8.Simple.JSValue CilCallbackImpl(Fuse.Scripting.V8.Simple.JSContext context, Uno.IntPtr data, Fuse.Scripting.V8.Simple.JSValue[] args, int numArgs, Fuse.Scripting.V8.Simple.JSValue& error)
void V8SimpleExtensions__CilCallbackImpl_fn(::JSContext** context, void** data, uArray* args, int32_t* numArgs, ::JSValue** error, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::CilCallbackImpl(*context, *data, args, *numArgs, error);
}

// public static Fuse.Scripting.V8.Simple.JSObject Construct(Fuse.Scripting.V8.Simple.JSFunction fun, Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSValue[] args, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler)
void V8SimpleExtensions__Construct_fn(::JSFunction** fun, ::JSContext** context, uArray* args, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uDelegate* errorHandler, ::JSObject** __retval)
{
    *__retval = V8SimpleExtensions::Construct(*fun, *context, args, *pool, errorHandler);
}

// private static extern Fuse.Scripting.V8.Simple.JSFunction CreateCallback(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.V8SimpleExtensions.WrappedCallback callback, Fuse.Scripting.V8.Simple.JSScriptException& error)
void V8SimpleExtensions__CreateCallback_fn(::JSContext** context, uDelegate* callback, ::JSScriptException** error, ::JSFunction** __retval)
{
    *__retval = V8SimpleExtensions::CreateCallback(*context, callback, error);
}

// public static Fuse.Scripting.V8.Simple.JSValue Evaluate(Fuse.Scripting.V8.Simple.JSContext context, string fileName, string code, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler)
void V8SimpleExtensions__Evaluate_fn(::JSContext** context, uString* fileName, uString* code, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uDelegate* errorHandler, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::Evaluate(*context, fileName, code, *pool, errorHandler);
}

// public static Fuse.Scripting.V8.Simple.JSValue GetException(Fuse.Scripting.V8.Simple.JSScriptException jse)
void V8SimpleExtensions__GetException_fn(::JSScriptException** jse, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::GetException(*jse);
}

// public static string GetFileName(Fuse.Scripting.V8.Simple.JSScriptException jse, Fuse.Scripting.V8.Simple.JSContext context)
void V8SimpleExtensions__GetFileName_fn(::JSScriptException** jse, ::JSContext** context, uString** __retval)
{
    *__retval = V8SimpleExtensions::GetFileName(*jse, *context);
}

// public static Fuse.Scripting.V8.Simple.JSObject GetGlobalObject(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.AutoReleasePool pool)
void V8SimpleExtensions__GetGlobalObject_fn(::JSContext** context, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSObject** __retval)
{
    *__retval = V8SimpleExtensions::GetGlobalObject(*context, *pool);
}

// public static Fuse.Scripting.V8.Simple.JSType GetJSType(Fuse.Scripting.V8.Simple.JSValue value)
void V8SimpleExtensions__GetJSType_fn(::JSValue** value, int32_t* __retval)
{
    *__retval = V8SimpleExtensions::GetJSType(*value);
}

// public static int GetLineNumber(Fuse.Scripting.V8.Simple.JSScriptException jse)
void V8SimpleExtensions__GetLineNumber_fn(::JSScriptException** jse, int32_t* __retval)
{
    *__retval = V8SimpleExtensions::GetLineNumber(*jse);
}

// public static string GetMessage(Fuse.Scripting.V8.Simple.JSScriptException jse, Fuse.Scripting.V8.Simple.JSContext context)
void V8SimpleExtensions__GetMessage_fn(::JSScriptException** jse, ::JSContext** context, uString** __retval)
{
    *__retval = V8SimpleExtensions::GetMessage(*jse, *context);
}

// public static Fuse.Scripting.V8.Simple.JSArray GetOwnPropertyNames(Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler)
void V8SimpleExtensions__GetOwnPropertyNames_fn(::JSObject** obj, ::JSContext** context, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uDelegate* errorHandler, ::JSArray** __retval)
{
    *__retval = V8SimpleExtensions::GetOwnPropertyNames(*obj, *context, *pool, errorHandler);
}

// public static Fuse.Scripting.V8.Simple.JSValue GetProperty(Fuse.Scripting.V8.Simple.JSArray arr, Fuse.Scripting.V8.Simple.JSContext context, int index, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler)
void V8SimpleExtensions__GetProperty_fn(::JSArray** arr, ::JSContext** context, int32_t* index, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uDelegate* errorHandler, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::GetProperty(*arr, *context, *index, *pool, errorHandler);
}

// public static Fuse.Scripting.V8.Simple.JSValue GetProperty(Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSContext context, string key, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler)
void V8SimpleExtensions__GetProperty1_fn(::JSObject** obj, ::JSContext** context, uString* key, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uDelegate* errorHandler, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::GetProperty1(*obj, *context, key, *pool, errorHandler);
}

// public static string GetStackTrace(Fuse.Scripting.V8.Simple.JSScriptException jse, Fuse.Scripting.V8.Simple.JSContext context)
void V8SimpleExtensions__GetStackTrace_fn(::JSScriptException** jse, ::JSContext** context, uString** __retval)
{
    *__retval = V8SimpleExtensions::GetStackTrace(*jse, *context);
}

// public static Uno.IntPtr GetValue(Fuse.Scripting.V8.Simple.JSExternal ext, Fuse.Scripting.V8.Simple.JSContext context)
void V8SimpleExtensions__GetValue_fn(::JSExternal** ext, ::JSContext** context, void** __retval)
{
    *__retval = V8SimpleExtensions::GetValue(*ext, *context);
}

// public static bool HasProperty(Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSContext context, string key, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler)
void V8SimpleExtensions__HasProperty_fn(::JSObject** obj, ::JSContext** context, uString* key, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uDelegate* errorHandler, bool* __retval)
{
    *__retval = V8SimpleExtensions::HasProperty(*obj, *context, key, *pool, errorHandler);
}

// public static int Length(Fuse.Scripting.V8.Simple.JSArray arr, Fuse.Scripting.V8.Simple.JSContext context)
void V8SimpleExtensions__Length_fn(::JSArray** arr, ::JSContext** context, int32_t* __retval)
{
    *__retval = V8SimpleExtensions::Length(*arr, *context);
}

// public static Fuse.Scripting.V8.Simple.JSValue NewBool(bool value, Fuse.Scripting.V8.AutoReleasePool pool)
void V8SimpleExtensions__NewBool_fn(bool* value, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::NewBool(*value, *pool);
}

// public static Fuse.Scripting.V8.Simple.JSFunction NewCallback(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.V8SimpleExtensions.WrappedCallback callback, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler)
void V8SimpleExtensions__NewCallback_fn(::JSContext** context, uDelegate* callback, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uDelegate* errorHandler, ::JSFunction** __retval)
{
    *__retval = V8SimpleExtensions::NewCallback(*context, callback, *pool, errorHandler);
}

// public static Fuse.Scripting.V8.Simple.JSValue NewDouble(double value, Fuse.Scripting.V8.AutoReleasePool pool)
void V8SimpleExtensions__NewDouble_fn(double* value, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::NewDouble(*value, *pool);
}

// public static Fuse.Scripting.V8.Simple.JSExternal NewExternal(Fuse.Scripting.V8.Simple.JSContext context, Uno.IntPtr value, Fuse.Scripting.V8.AutoReleasePool pool)
void V8SimpleExtensions__NewExternal_fn(::JSContext** context, void** value, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSExternal** __retval)
{
    *__retval = V8SimpleExtensions::NewExternal(*context, *value, *pool);
}

// public static Fuse.Scripting.V8.Simple.JSObject NewExternalArrayBuffer(Fuse.Scripting.V8.Simple.JSContext context, Uno.IntPtr data, int byteLength, Fuse.Scripting.V8.AutoReleasePool pool)
void V8SimpleExtensions__NewExternalArrayBuffer_fn(::JSContext** context, void** data, int32_t* byteLength, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSObject** __retval)
{
    *__retval = V8SimpleExtensions::NewExternalArrayBuffer(*context, *data, *byteLength, *pool);
}

// public static Fuse.Scripting.V8.Simple.JSValue NewInt(int value, Fuse.Scripting.V8.AutoReleasePool pool)
void V8SimpleExtensions__NewInt_fn(int32_t* value, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::NewInt(*value, *pool);
}

// public static Fuse.Scripting.V8.Simple.JSString NewString(Fuse.Scripting.V8.Simple.JSContext context, string str, Fuse.Scripting.V8.AutoReleasePool pool)
void V8SimpleExtensions__NewString_fn(::JSContext** context, uString* str, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSString** __retval)
{
    *__retval = V8SimpleExtensions::NewString(*context, str, *pool);
}

// public static Fuse.Scripting.V8.Simple.JSValue Null()
void V8SimpleExtensions__Null_fn(::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::Null();
}

// public static void Release(Fuse.Scripting.V8.Simple.JSContext context)
void V8SimpleExtensions__Release_fn(::JSContext** context)
{
    V8SimpleExtensions::Release(*context);
}

// public static void Release(Fuse.Scripting.V8.Simple.JSScriptException jse, Fuse.Scripting.V8.Simple.JSContext context)
void V8SimpleExtensions__Release1_fn(::JSScriptException** jse, ::JSContext** context)
{
    V8SimpleExtensions::Release1(*jse, *context);
}

// public static void Release(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSContext context)
void V8SimpleExtensions__Release2_fn(::JSValue** value, ::JSContext** context)
{
    V8SimpleExtensions::Release2(*value, *context);
}

// public static Fuse.Scripting.V8.Simple.JSValue Retain(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSContext context)
void V8SimpleExtensions__Retain2_fn(::JSValue** value, ::JSContext** context, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::Retain2(*value, *context);
}

// public static void SetProperty(Fuse.Scripting.V8.Simple.JSArray arr, Fuse.Scripting.V8.Simple.JSContext context, int index, Fuse.Scripting.V8.Simple.JSValue value, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler)
void V8SimpleExtensions__SetProperty_fn(::JSArray** arr, ::JSContext** context, int32_t* index, ::JSValue** value, uDelegate* errorHandler)
{
    V8SimpleExtensions::SetProperty(*arr, *context, *index, *value, errorHandler);
}

// public static void SetProperty(Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSContext context, string key, Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler)
void V8SimpleExtensions__SetProperty1_fn(::JSObject** obj, ::JSContext** context, uString* key, ::JSValue** value, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uDelegate* errorHandler)
{
    V8SimpleExtensions::SetProperty1(*obj, *context, key, *value, *pool, errorHandler);
}

// public static string ToStr(Fuse.Scripting.V8.Simple.JSString str, Fuse.Scripting.V8.Simple.JSContext context)
void V8SimpleExtensions__ToStr_fn(::JSString** str, ::JSContext** context, uString** __retval)
{
    *__retval = V8SimpleExtensions::ToStr(*str, *context);
}

// public static Uno.IntPtr TryGetArrayBufferData(Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSContext context)
void V8SimpleExtensions__TryGetArrayBufferData_fn(::JSObject** obj, ::JSContext** context, void** __retval)
{
    *__retval = V8SimpleExtensions::TryGetArrayBufferData(*obj, *context);
}

uSStrong<uDelegate*> V8SimpleExtensions::CilCallback_;

// public static Fuse.Scripting.V8.Simple.JSArray AsArray(Fuse.Scripting.V8.Simple.JSValue value) [static]
::JSArray* V8SimpleExtensions::AsArray(::JSValue* value)
{
    V8SimpleExtensions_typeof()->Init();
    int32_t error;
    ::JSArray* result = ::g::Fuse::Scripting::V8::Simple::Value::AsArray(value, &error);
    ::g::Fuse::Scripting::V8::Error::Check1(error);
    return result;
}

// public static bool AsBool(Fuse.Scripting.V8.Simple.JSValue value) [static]
bool V8SimpleExtensions::AsBool(::JSValue* value)
{
    V8SimpleExtensions_typeof()->Init();
    int32_t error;
    bool result = ::g::Fuse::Scripting::V8::Simple::Value::AsBool(value, &error);
    ::g::Fuse::Scripting::V8::Error::Check1(error);
    return result;
}

// public static double AsDouble(Fuse.Scripting.V8.Simple.JSValue value) [static]
double V8SimpleExtensions::AsDouble(::JSValue* value)
{
    V8SimpleExtensions_typeof()->Init();
    int32_t error;
    double result = ::g::Fuse::Scripting::V8::Simple::Value::AsDouble(value, &error);
    ::g::Fuse::Scripting::V8::Error::Check1(error);
    return result;
}

// public static Fuse.Scripting.V8.Simple.JSExternal AsExternal(Fuse.Scripting.V8.Simple.JSValue value) [static]
::JSExternal* V8SimpleExtensions::AsExternal(::JSValue* value)
{
    V8SimpleExtensions_typeof()->Init();
    int32_t error;
    ::JSExternal* result = ::g::Fuse::Scripting::V8::Simple::Value::AsExternal(value, &error);
    ::g::Fuse::Scripting::V8::Error::Check1(error);
    return result;
}

// public static Fuse.Scripting.V8.Simple.JSFunction AsFunction(Fuse.Scripting.V8.Simple.JSValue value) [static]
::JSFunction* V8SimpleExtensions::AsFunction(::JSValue* value)
{
    V8SimpleExtensions_typeof()->Init();
    int32_t error;
    ::JSFunction* result = ::g::Fuse::Scripting::V8::Simple::Value::AsFunction(value, &error);
    ::g::Fuse::Scripting::V8::Error::Check1(error);
    return result;
}

// public static int AsInt(Fuse.Scripting.V8.Simple.JSValue value) [static]
int32_t V8SimpleExtensions::AsInt(::JSValue* value)
{
    V8SimpleExtensions_typeof()->Init();
    int32_t error;
    int32_t result = ::g::Fuse::Scripting::V8::Simple::Value::AsInt(value, &error);
    ::g::Fuse::Scripting::V8::Error::Check1(error);
    return result;
}

// public static Fuse.Scripting.V8.Simple.JSObject AsObject(Fuse.Scripting.V8.Simple.JSValue value) [static]
::JSObject* V8SimpleExtensions::AsObject(::JSValue* value)
{
    V8SimpleExtensions_typeof()->Init();
    int32_t error;
    ::JSObject* result = ::g::Fuse::Scripting::V8::Simple::Value::AsObject(value, &error);
    ::g::Fuse::Scripting::V8::Error::Check1(error);
    return result;
}

// public static Fuse.Scripting.V8.Simple.JSString AsString(Fuse.Scripting.V8.Simple.JSValue value) [static]
::JSString* V8SimpleExtensions::AsString(::JSValue* value)
{
    V8SimpleExtensions_typeof()->Init();
    int32_t error;
    ::JSString* result = ::g::Fuse::Scripting::V8::Simple::Value::AsString(value, &error);
    ::g::Fuse::Scripting::V8::Error::Check1(error);
    return result;
}

// public static Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSArray arr) [static]
::JSValue* V8SimpleExtensions::AsValue(::JSArray* arr)
{
    V8SimpleExtensions_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Simple::Value::AsValue(arr);
}

// public static Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSExternal ext) [static]
::JSValue* V8SimpleExtensions::AsValue1(::JSExternal* ext)
{
    V8SimpleExtensions_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Simple::Value::AsValue1(ext);
}

// public static Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSFunction fun) [static]
::JSValue* V8SimpleExtensions::AsValue2(::JSFunction* fun)
{
    V8SimpleExtensions_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Simple::Value::AsValue2(fun);
}

// public static Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSObject obj) [static]
::JSValue* V8SimpleExtensions::AsValue3(::JSObject* obj)
{
    V8SimpleExtensions_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Simple::Value::AsValue3(obj);
}

// public static Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSString str) [static]
::JSValue* V8SimpleExtensions::AsValue4(::JSString* str)
{
    V8SimpleExtensions_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Simple::Value::AsValue4(str);
}

// public static Fuse.Scripting.V8.Simple.JSValue Call(Fuse.Scripting.V8.Simple.JSFunction fun, Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSObject thisObject, Fuse.Scripting.V8.Simple.JSValue[] args, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) [static]
::JSValue* V8SimpleExtensions::Call(::JSFunction* fun, ::JSContext* context, ::JSObject* thisObject, uArray* args, ::g::Fuse::Scripting::V8::AutoReleasePool pool, uDelegate* errorHandler)
{
    V8SimpleExtensions_typeof()->Init();
    ::JSScriptException* error;
    ::JSValue* result = ::g::Fuse::Scripting::V8::Simple::Value::CallCreate(context, fun, thisObject, args, uPtr(args)->Length(), &error);
    ::g::Fuse::Scripting::V8::Error::Check(context, error, errorHandler);
    return pool.AutoRelease5(result);
}

// private static Fuse.Scripting.V8.Simple.JSValue CilCallbackImpl(Fuse.Scripting.V8.Simple.JSContext context, Uno.IntPtr data, Fuse.Scripting.V8.Simple.JSValue[] args, int numArgs, Fuse.Scripting.V8.Simple.JSValue& error) [static]
::JSValue* V8SimpleExtensions::CilCallbackImpl(::JSContext* context, void* data, uArray* args, int32_t numArgs, ::JSValue** error)
{
    V8SimpleExtensions_typeof()->Init();
    ::JSValue* ret1;
    uDelegate* wrappedCallback = uAs<uDelegate*>(::g::Fuse::Scripting::V8::Handle::Target(data), V8SimpleExtensions__WrappedCallback_typeof());
    return (uPtr(wrappedCallback)->Invoke(&ret1, 2, args, error), ret1);
}

// public static Fuse.Scripting.V8.Simple.JSObject Construct(Fuse.Scripting.V8.Simple.JSFunction fun, Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSValue[] args, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) [static]
::JSObject* V8SimpleExtensions::Construct(::JSFunction* fun, ::JSContext* context, uArray* args, ::g::Fuse::Scripting::V8::AutoReleasePool pool, uDelegate* errorHandler)
{
    V8SimpleExtensions_typeof()->Init();
    ::JSScriptException* error;
    ::JSObject* result = ::g::Fuse::Scripting::V8::Simple::Value::ConstructCreate(context, fun, args, uPtr(args)->Length(), &error);
    ::g::Fuse::Scripting::V8::Error::Check(context, error, errorHandler);
    return pool.AutoRelease3(result);
}

// private static extern Fuse.Scripting.V8.Simple.JSFunction CreateCallback(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.V8SimpleExtensions.WrappedCallback callback, Fuse.Scripting.V8.Simple.JSScriptException& error) [static]
::JSFunction* V8SimpleExtensions::CreateCallback(::JSContext* context, uDelegate* callback, ::JSScriptException** error)
{
    V8SimpleExtensions_typeof()->Init();
    return ::CreateJSCallback(
    	context,
    	::g::Fuse::Scripting::V8::Handle::Create(callback),
    	([] (::JSContext* context, void* data, ::JSValue* const* args, int numArgs, ::JSValue** outError) -> ::JSValue*
    	{
    		uDelegate* callback = (uDelegate*)data;
    
    		uArray* unoArgs = ::uArray::New(::g::Fuse::Scripting::V8::Simple::JSValue_typeof()->Array(), numArgs, args);
    		return uUnbox< ::JSValue*>(callback->Invoke(2, unoArgs, outError));
    	}),
    	error
    	);
}

// public static Fuse.Scripting.V8.Simple.JSValue Evaluate(Fuse.Scripting.V8.Simple.JSContext context, string fileName, string code, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) [static]
::JSValue* V8SimpleExtensions::Evaluate(::JSContext* context, uString* fileName, uString* code, ::g::Fuse::Scripting::V8::AutoReleasePool pool, uDelegate* errorHandler)
{
    V8SimpleExtensions_typeof()->Init();
    ::JSScriptException* error;
    ::JSValue* result = ::g::Fuse::Scripting::V8::Simple::Context::EvaluateCreate(context, V8SimpleExtensions::NewString(context, fileName, pool), V8SimpleExtensions::NewString(context, code, pool), &error);
    ::g::Fuse::Scripting::V8::Error::Check(context, error, errorHandler);
    return pool.AutoRelease5(result);
}

// public static Fuse.Scripting.V8.Simple.JSValue GetException(Fuse.Scripting.V8.Simple.JSScriptException jse) [static]
::JSValue* V8SimpleExtensions::GetException(::JSScriptException* jse)
{
    V8SimpleExtensions_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Simple::ScriptException::GetException(jse);
}

// public static string GetFileName(Fuse.Scripting.V8.Simple.JSScriptException jse, Fuse.Scripting.V8.Simple.JSContext context) [static]
uString* V8SimpleExtensions::GetFileName(::JSScriptException* jse, ::JSContext* context)
{
    V8SimpleExtensions_typeof()->Init();
    return V8SimpleExtensions::ToStr(::g::Fuse::Scripting::V8::Simple::ScriptException::GetFileName(jse), context);
}

// public static Fuse.Scripting.V8.Simple.JSObject GetGlobalObject(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.AutoReleasePool pool) [static]
::JSObject* V8SimpleExtensions::GetGlobalObject(::JSContext* context, ::g::Fuse::Scripting::V8::AutoReleasePool pool)
{
    V8SimpleExtensions_typeof()->Init();
    ::JSObject* result = ::g::Fuse::Scripting::V8::Simple::Context::CopyGlobalObject(context);
    return pool.AutoRelease3(result);
}

// public static Fuse.Scripting.V8.Simple.JSType GetJSType(Fuse.Scripting.V8.Simple.JSValue value) [static]
int32_t V8SimpleExtensions::GetJSType(::JSValue* value)
{
    V8SimpleExtensions_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Simple::Value::GetType(value);
}

// public static int GetLineNumber(Fuse.Scripting.V8.Simple.JSScriptException jse) [static]
int32_t V8SimpleExtensions::GetLineNumber(::JSScriptException* jse)
{
    V8SimpleExtensions_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Simple::ScriptException::GetLineNumber(jse);
}

// public static string GetMessage(Fuse.Scripting.V8.Simple.JSScriptException jse, Fuse.Scripting.V8.Simple.JSContext context) [static]
uString* V8SimpleExtensions::GetMessage(::JSScriptException* jse, ::JSContext* context)
{
    V8SimpleExtensions_typeof()->Init();
    return V8SimpleExtensions::ToStr(::g::Fuse::Scripting::V8::Simple::ScriptException::GetMessage(jse), context);
}

// public static Fuse.Scripting.V8.Simple.JSArray GetOwnPropertyNames(Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) [static]
::JSArray* V8SimpleExtensions::GetOwnPropertyNames(::JSObject* obj, ::JSContext* context, ::g::Fuse::Scripting::V8::AutoReleasePool pool, uDelegate* errorHandler)
{
    V8SimpleExtensions_typeof()->Init();
    ::JSScriptException* error;
    ::JSArray* result = ::g::Fuse::Scripting::V8::Simple::Value::CopyOwnPropertyNames(context, obj, &error);
    ::g::Fuse::Scripting::V8::Error::Check(context, error, errorHandler);
    return pool.AutoRelease(result);
}

// public static Fuse.Scripting.V8.Simple.JSValue GetProperty(Fuse.Scripting.V8.Simple.JSArray arr, Fuse.Scripting.V8.Simple.JSContext context, int index, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) [static]
::JSValue* V8SimpleExtensions::GetProperty(::JSArray* arr, ::JSContext* context, int32_t index, ::g::Fuse::Scripting::V8::AutoReleasePool pool, uDelegate* errorHandler)
{
    V8SimpleExtensions_typeof()->Init();
    ::JSScriptException* error;
    ::JSValue* result = ::g::Fuse::Scripting::V8::Simple::Value::CopyProperty(context, arr, index, &error);
    ::g::Fuse::Scripting::V8::Error::Check(context, error, errorHandler);
    return pool.AutoRelease5(result);
}

// public static Fuse.Scripting.V8.Simple.JSValue GetProperty(Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSContext context, string key, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) [static]
::JSValue* V8SimpleExtensions::GetProperty1(::JSObject* obj, ::JSContext* context, uString* key, ::g::Fuse::Scripting::V8::AutoReleasePool pool, uDelegate* errorHandler)
{
    V8SimpleExtensions_typeof()->Init();
    ::JSScriptException* error;
    ::JSValue* result = ::g::Fuse::Scripting::V8::Simple::Value::CopyProperty1(context, obj, V8SimpleExtensions::NewString(context, key, pool), &error);
    ::g::Fuse::Scripting::V8::Error::Check(context, error, errorHandler);
    return pool.AutoRelease5(result);
}

// public static string GetStackTrace(Fuse.Scripting.V8.Simple.JSScriptException jse, Fuse.Scripting.V8.Simple.JSContext context) [static]
uString* V8SimpleExtensions::GetStackTrace(::JSScriptException* jse, ::JSContext* context)
{
    V8SimpleExtensions_typeof()->Init();
    return V8SimpleExtensions::ToStr(::g::Fuse::Scripting::V8::Simple::ScriptException::GetStackTrace(jse), context);
}

// public static Uno.IntPtr GetValue(Fuse.Scripting.V8.Simple.JSExternal ext, Fuse.Scripting.V8.Simple.JSContext context) [static]
void* V8SimpleExtensions::GetValue(::JSExternal* ext, ::JSContext* context)
{
    V8SimpleExtensions_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Simple::Value::GetExternalValue(context, ext);
}

// public static bool HasProperty(Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSContext context, string key, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) [static]
bool V8SimpleExtensions::HasProperty(::JSObject* obj, ::JSContext* context, uString* key, ::g::Fuse::Scripting::V8::AutoReleasePool pool, uDelegate* errorHandler)
{
    V8SimpleExtensions_typeof()->Init();
    ::JSScriptException* error;
    bool result = ::g::Fuse::Scripting::V8::Simple::Value::HasProperty(context, obj, V8SimpleExtensions::NewString(context, key, pool), &error);
    ::g::Fuse::Scripting::V8::Error::Check(context, error, errorHandler);
    return result;
}

// public static int Length(Fuse.Scripting.V8.Simple.JSArray arr, Fuse.Scripting.V8.Simple.JSContext context) [static]
int32_t V8SimpleExtensions::Length(::JSArray* arr, ::JSContext* context)
{
    V8SimpleExtensions_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Simple::Value::Length(context, arr);
}

// public static Fuse.Scripting.V8.Simple.JSValue NewBool(bool value, Fuse.Scripting.V8.AutoReleasePool pool) [static]
::JSValue* V8SimpleExtensions::NewBool(bool value, ::g::Fuse::Scripting::V8::AutoReleasePool pool)
{
    V8SimpleExtensions_typeof()->Init();
    return pool.AutoRelease5(::g::Fuse::Scripting::V8::Simple::Value::CreateBool(value));
}

// public static Fuse.Scripting.V8.Simple.JSFunction NewCallback(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.V8SimpleExtensions.WrappedCallback callback, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) [static]
::JSFunction* V8SimpleExtensions::NewCallback(::JSContext* context, uDelegate* callback, ::g::Fuse::Scripting::V8::AutoReleasePool pool, uDelegate* errorHandler)
{
    V8SimpleExtensions_typeof()->Init();
    ::JSScriptException* error;
    ::JSFunction* result = V8SimpleExtensions::CreateCallback(context, callback, &error);
    ::g::Fuse::Scripting::V8::Error::Check(context, error, errorHandler);
    return pool.AutoRelease2(result);
}

// public static Fuse.Scripting.V8.Simple.JSValue NewDouble(double value, Fuse.Scripting.V8.AutoReleasePool pool) [static]
::JSValue* V8SimpleExtensions::NewDouble(double value, ::g::Fuse::Scripting::V8::AutoReleasePool pool)
{
    V8SimpleExtensions_typeof()->Init();
    return pool.AutoRelease5(::g::Fuse::Scripting::V8::Simple::Value::CreateDouble(value));
}

// public static Fuse.Scripting.V8.Simple.JSExternal NewExternal(Fuse.Scripting.V8.Simple.JSContext context, Uno.IntPtr value, Fuse.Scripting.V8.AutoReleasePool pool) [static]
::JSExternal* V8SimpleExtensions::NewExternal(::JSContext* context, void* value, ::g::Fuse::Scripting::V8::AutoReleasePool pool)
{
    V8SimpleExtensions_typeof()->Init();
    return pool.AutoRelease1(::g::Fuse::Scripting::V8::Simple::Value::CreateExternal(context, value));
}

// public static Fuse.Scripting.V8.Simple.JSObject NewExternalArrayBuffer(Fuse.Scripting.V8.Simple.JSContext context, Uno.IntPtr data, int byteLength, Fuse.Scripting.V8.AutoReleasePool pool) [static]
::JSObject* V8SimpleExtensions::NewExternalArrayBuffer(::JSContext* context, void* data, int32_t byteLength, ::g::Fuse::Scripting::V8::AutoReleasePool pool)
{
    V8SimpleExtensions_typeof()->Init();
    return pool.AutoRelease3(::g::Fuse::Scripting::V8::Simple::Value::CreateExternalArrayBuffer(context, data, byteLength));
}

// public static Fuse.Scripting.V8.Simple.JSValue NewInt(int value, Fuse.Scripting.V8.AutoReleasePool pool) [static]
::JSValue* V8SimpleExtensions::NewInt(int32_t value, ::g::Fuse::Scripting::V8::AutoReleasePool pool)
{
    V8SimpleExtensions_typeof()->Init();
    return pool.AutoRelease5(::g::Fuse::Scripting::V8::Simple::Value::CreateInt(value));
}

// public static Fuse.Scripting.V8.Simple.JSString NewString(Fuse.Scripting.V8.Simple.JSContext context, string str, Fuse.Scripting.V8.AutoReleasePool pool) [static]
::JSString* V8SimpleExtensions::NewString(::JSContext* context, uString* str, ::g::Fuse::Scripting::V8::AutoReleasePool pool)
{
    V8SimpleExtensions_typeof()->Init();
    int32_t error;
    ::JSString* result = ::g::Fuse::Scripting::V8::Simple::Value::CreateString(context, str, uPtr(str)->Length(), &error);
    ::g::Fuse::Scripting::V8::Error::Check1(error);
    return pool.AutoRelease4(result);
}

// public static Fuse.Scripting.V8.Simple.JSValue Null() [static]
::JSValue* V8SimpleExtensions::Null()
{
    V8SimpleExtensions_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Simple::Value::JSNull();
}

// public static void Release(Fuse.Scripting.V8.Simple.JSContext context) [static]
void V8SimpleExtensions::Release(::JSContext* context)
{
    V8SimpleExtensions_typeof()->Init();
    ::g::Fuse::Scripting::V8::Simple::Context::Release(context);
}

// public static void Release(Fuse.Scripting.V8.Simple.JSScriptException jse, Fuse.Scripting.V8.Simple.JSContext context) [static]
void V8SimpleExtensions::Release1(::JSScriptException* jse, ::JSContext* context)
{
    V8SimpleExtensions_typeof()->Init();
    ::g::Fuse::Scripting::V8::Simple::ScriptException::Release(context, jse);
}

// public static void Release(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSContext context) [static]
void V8SimpleExtensions::Release2(::JSValue* value, ::JSContext* context)
{
    V8SimpleExtensions_typeof()->Init();
    ::g::Fuse::Scripting::V8::Simple::Value::Release(context, value);
}

// public static Fuse.Scripting.V8.Simple.JSValue Retain(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSContext context) [static]
::JSValue* V8SimpleExtensions::Retain2(::JSValue* value, ::JSContext* context)
{
    V8SimpleExtensions_typeof()->Init();
    ::g::Fuse::Scripting::V8::Simple::Value::Retain(context, value);
    return value;
}

// public static void SetProperty(Fuse.Scripting.V8.Simple.JSArray arr, Fuse.Scripting.V8.Simple.JSContext context, int index, Fuse.Scripting.V8.Simple.JSValue value, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) [static]
void V8SimpleExtensions::SetProperty(::JSArray* arr, ::JSContext* context, int32_t index, ::JSValue* value, uDelegate* errorHandler)
{
    V8SimpleExtensions_typeof()->Init();
    ::JSScriptException* error;
    ::g::Fuse::Scripting::V8::Simple::Value::SetProperty(context, arr, index, value, &error);
    ::g::Fuse::Scripting::V8::Error::Check(context, error, errorHandler);
}

// public static void SetProperty(Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSContext context, string key, Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) [static]
void V8SimpleExtensions::SetProperty1(::JSObject* obj, ::JSContext* context, uString* key, ::JSValue* value, ::g::Fuse::Scripting::V8::AutoReleasePool pool, uDelegate* errorHandler)
{
    V8SimpleExtensions_typeof()->Init();
    ::JSScriptException* error;
    ::g::Fuse::Scripting::V8::Simple::Value::SetProperty1(context, obj, V8SimpleExtensions::NewString(context, key, pool), value, &error);
    ::g::Fuse::Scripting::V8::Error::Check(context, error, errorHandler);
}

// public static string ToStr(Fuse.Scripting.V8.Simple.JSString str, Fuse.Scripting.V8.Simple.JSContext context) [static]
uString* V8SimpleExtensions::ToStr(::JSString* str, ::JSContext* context)
{
    V8SimpleExtensions_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Simple::Value::ToString(context, str);
}

// public static Uno.IntPtr TryGetArrayBufferData(Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSContext context) [static]
void* V8SimpleExtensions::TryGetArrayBufferData(::JSObject* obj, ::JSContext* context)
{
    V8SimpleExtensions_typeof()->Init();
    int32_t error;
    void* result = ::g::Fuse::Scripting::V8::Simple::Value::GetArrayBufferData(context, obj, &error);

    if (error == 3)
        return ::g::Uno::IntPtr::Zero_;

    ::g::Fuse::Scripting::V8::Error::Check1(error);
    return result;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.12.0/V8/V8SimpleExtensions.uno
// ----------------------------------------------------------------------------------------

// public delegate Fuse.Scripting.V8.Simple.JSValue V8SimpleExtensions.WrappedCallback(Fuse.Scripting.V8.Simple.JSValue[] args, Fuse.Scripting.V8.Simple.JSValue& error)
uDelegateType* V8SimpleExtensions__WrappedCallback_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.V8.V8SimpleExtensions.WrappedCallback", 2, 0);
    type->SetSignature(::g::Fuse::Scripting::V8::Simple::JSValue_typeof(),
        ::g::Fuse::Scripting::V8::Simple::JSValue_typeof()->Array(),
        ::g::Fuse::Scripting::V8::Simple::JSValue_typeof()->ByRef());
    return type;
}

}}}} // ::g::Fuse::Scripting::V8
