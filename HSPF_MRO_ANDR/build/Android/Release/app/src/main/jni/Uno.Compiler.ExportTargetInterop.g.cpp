// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Types.ByteBuffer.h>
#include <Android.Base.Wrappers.JavaObjectHelper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Compiler.ExportTargetInterop.ForeignDataView.h>
#include <Uno.Exception.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[3];

namespace g{
namespace Uno{
namespace Compiler{
namespace ExportTargetInterop{

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Compiler/ExportTargetInterop/Foreign/ForeignDataView.uno
// ----------------------------------------------------------------------------------------------------------------

// public static extern class ForeignDataView
// {
static void ForeignDataView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("unoArray");
    ::STRINGS[1] = uString::Const("ForeignDataView failed to create a direct buffer");
    ::STRINGS[2] = uString::Const("ForeignDataView was unable to create a Java view to the data");
}

uClassType* ForeignDataView_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.ForeignDataView", options);
    type->fp_build_ = ForeignDataView_build;
    return type;
}

// public static Java.Object Create(byte[] unoArray)
void ForeignDataView__Create_fn(uArray* unoArray, ::g::Java::Object** __retval)
{
    *__retval = ForeignDataView::Create(unoArray);
}

// private static Java.Object CreateInner(Android.Base.Primitives.ujobject directBuffer, object unoObj)
void ForeignDataView__CreateInner_fn(jobject* directBuffer, uObject* unoObj, ::g::Java::Object** __retval)
{
    *__retval = ForeignDataView::CreateInner(*directBuffer, unoObj);
}

// private static Java.Object CreateInnerJava(Java.Object directBuffer, object unoObj)
void ForeignDataView__CreateInnerJava_fn(::g::Java::Object* directBuffer, uObject* unoObj, ::g::Java::Object** __retval)
{
    *__retval = ForeignDataView::CreateInnerJava(directBuffer, unoObj);
}

// public static Java.Object Create(byte[] unoArray) [static]
::g::Java::Object* ForeignDataView::Create(uArray* unoArray)
{
    if (unoArray == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"unoArray"*/]));

    return ForeignDataView::CreateInner(::g::Android::Base::Types::ByteBuffer::NewDirectByteBuffer(unoArray), unoArray);
}

// private static Java.Object CreateInner(Android.Base.Primitives.ujobject directBuffer, object unoObj) [static]
::g::Java::Object* ForeignDataView::CreateInner(jobject directBuffer, uObject* unoObj)
{
    if (!::g::Android::Base::Types::ByteBuffer::ValidDirectByteBuffer(directBuffer))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"ForeignData...*/]));

    ::g::Android::Base::Wrappers::JWrapper* wrappedBuffer = ::g::Android::Base::Wrappers::JWrapper::Wrap(directBuffer, false, false);
    ::g::Java::Object* result = ForeignDataView::CreateInnerJava(wrappedBuffer, unoObj);

    if (result == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"ForeignData...*/]));

    return result;
}

// private static Java.Object CreateInnerJava(Java.Object directBuffer, object unoObj) [static]
::g::Java::Object* ForeignDataView::CreateInnerJava(::g::Java::Object* directBuffer, uObject* unoObj)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateInnerJava51", "(Ljava/lang/Object;Lcom/uno/UnoObject;)Ljava/lang/Object;");
        ::g::Java::Object* _udirectBuffer=directBuffer;
        jobject _directBuffer = (_udirectBuffer==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_udirectBuffer, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uObject* _uunoObj=unoObj;
        jobject _unoObj = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uunoObj);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_directBuffer,_unoObj);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_directBuffer!=NULL) { U_JNIVAR->DeleteLocalRef(_directBuffer); }
        if (_unoObj!=NULL) { U_JNIVAR->DeleteLocalRef(_unoObj); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}
// }

}}}} // ::g::Uno::Compiler::ExportTargetInterop
