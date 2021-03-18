// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/Barcode/Qreader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Qreader.h>
#include <_root.QreaderImpl.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.ResultConverter-2.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.Future1-1.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[2];
static uType* TYPES[2];

namespace g{

// public sealed class Qreader
// {
static void Qreader_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Qreader");
    ::STRINGS[1] = uString::Const("scan");
    ::TYPES[0] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetDependencies(
        ::g::QreaderImpl_typeof(),
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&Qreader::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Qreader__New2_fn, 0, true, type, 0));
}

::g::Fuse::Scripting::NativeModule_type* Qreader_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Qreader);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Qreader", options);
    type->fp_build_ = Qreader_build;
    type->fp_ctor_ = (void*)Qreader__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Qreader()
void Qreader__ctor_2_fn(Qreader* __this)
{
    __this->ctor_2();
}

// public Qreader New()
void Qreader__New2_fn(Qreader** __retval)
{
    *__retval = Qreader::New2();
}

// private static Uno.Threading.Future<string> Scan(object[] args)
void Qreader__Scan_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Qreader::Scan(args);
}

uSStrong<Qreader*> Qreader::_instance_;

// public Qreader() [instance]
void Qreader::ctor_2()
{
    uStackFrame __("Qreader", ".ctor()");
    ctor_1();

    if (Qreader::_instance_ != NULL)
        return;

    Qreader::_instance_ = this;
    ::g::Uno::UX::Resource::SetGlobalKey(Qreader::_instance_, ::STRINGS[0/*"Qreader"*/]);
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[0/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[1/*"scan"*/], uDelegate::New(::TYPES[1/*Fuse.Scripting.FutureFactory<string>*/], (void*)Qreader__Scan_fn), NULL));
}

// public Qreader New() [static]
Qreader* Qreader::New2()
{
    Qreader* obj1 = (Qreader*)uNew(Qreader_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static Uno.Threading.Future<string> Scan(object[] args) [static]
::g::Uno::Threading::Future1* Qreader::Scan(uArray* args)
{
    return ::g::QreaderImpl::Scan();
}
// }

} // ::g
