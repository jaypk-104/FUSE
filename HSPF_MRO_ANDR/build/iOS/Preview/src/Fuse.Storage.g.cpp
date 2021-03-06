// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.ResultConverter-2.h>
#include <Fuse.Storage.ApplicationDir.h>
#include <Fuse.Storage.ApplicationDir.ReadClosure.h>
#include <Fuse.Storage.ApplicationDir.WriteClosure.h>
#include <Fuse.Storage.StorageModule.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Func-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.FileMode.h>
#include <Uno.IO.FileStream.h>
#include <Uno.IO.Path.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.Future1-1.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[8];
static uType* TYPES[6];

namespace g{
namespace Fuse{
namespace Storage{

// /usr/local/share/uno/Packages/Fuse.Storage/1.12.0/ApplicationDir.uno
// --------------------------------------------------------------------

// internal static class ApplicationDir
// {
static void ApplicationDir_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::IO::Path_typeof());
}

uClassType* ApplicationDir_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Storage.ApplicationDir", options);
    type->fp_build_ = ApplicationDir_build;
    return type;
}

// private static void CreateFile(string filepath)
void ApplicationDir__CreateFile_fn(uString* filepath)
{
    ApplicationDir::CreateFile(filepath);
}

// public static bool Delete(string filename)
void ApplicationDir__Delete_fn(uString* filename, bool* __retval)
{
    *__retval = ApplicationDir::Delete(filename);
}

// public static string Read(string filename)
void ApplicationDir__Read_fn(uString* filename, uString** __retval)
{
    *__retval = ApplicationDir::Read(filename);
}

// public static Uno.Threading.Future<string> ReadAsync(string filename)
void ApplicationDir__ReadAsync_fn(uString* filename, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = ApplicationDir::ReadAsync(filename);
}

// public static Uno.Threading.Future<string> ReadAsync(Uno.Threading.IDispatcher dispatcher, string filename)
void ApplicationDir__ReadAsync1_fn(uObject* dispatcher, uString* filename, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = ApplicationDir::ReadAsync1(dispatcher, filename);
}

// public static bool TryRead(string filename, string& content)
void ApplicationDir__TryRead_fn(uString* filename, uString** content, bool* __retval)
{
    *__retval = ApplicationDir::TryRead(filename, content);
}

// public static bool Write(string filename, string value)
void ApplicationDir__Write_fn(uString* filename, uString* value, bool* __retval)
{
    *__retval = ApplicationDir::Write(filename, value);
}

// public static Uno.Threading.Future<bool> WriteAsync(string filename, string value)
void ApplicationDir__WriteAsync_fn(uString* filename, uString* value, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = ApplicationDir::WriteAsync(filename, value);
}

// public static Uno.Threading.Future<bool> WriteAsync(Uno.Threading.IDispatcher dispatcher, string filename, string value)
void ApplicationDir__WriteAsync1_fn(uObject* dispatcher, uString* filename, uString* value, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = ApplicationDir::WriteAsync1(dispatcher, filename, value);
}

// private static void CreateFile(string filepath) [static]
void ApplicationDir::CreateFile(uString* filepath)
{
    uStackFrame __("Fuse.Storage.ApplicationDir", "CreateFile(string)");
    ::g::Uno::IO::FileStream* stream = ::g::Uno::IO::File::Open(filepath, 2);

    {
        try
        {
            {
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)stream), ::g::Uno::IDisposable_typeof()));
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)stream), ::g::Uno::IDisposable_typeof()));
        }
        __after_finally_0:;
    }
}

// public static bool Delete(string filename) [static]
bool ApplicationDir::Delete(uString* filename)
{
    uStackFrame __("Fuse.Storage.ApplicationDir", "Delete(string)");

    if (::g::Uno::String::op_Equality(filename, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("filename")));

    uString* filepath = ::g::Uno::IO::Path::Combine(::g::Uno::IO::Directory::GetUserDirectory(2), filename);

    if (!::g::Uno::IO::File::Exists(filepath))
        return false;

    try
    {
        {
            ::g::Uno::IO::File::Delete(filepath);
            return true;
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
    }

    return false;
}

// public static string Read(string filename) [static]
uString* ApplicationDir::Read(uString* filename)
{
    uStackFrame __("Fuse.Storage.ApplicationDir", "Read(string)");
    uString* content;

    if (ApplicationDir::TryRead(filename, &content))
        return content;
    else
        U_THROW(::g::Uno::Exception::New2(uString::Const("File does not exist.")));
}

// public static Uno.Threading.Future<string> ReadAsync(string filename) [static]
::g::Uno::Threading::Future1* ApplicationDir::ReadAsync(uString* filename)
{
    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::g::Uno::Threading::Promise_typeof()->MakeType(::TYPES[5/*string*/], NULL), uDelegate::New(::g::Uno::Func_typeof()->MakeType(::TYPES[5/*string*/], NULL), (void*)ApplicationDir__ReadClosure__Invoke_fn, ApplicationDir__ReadClosure::New1(filename)));
}

// public static Uno.Threading.Future<string> ReadAsync(Uno.Threading.IDispatcher dispatcher, string filename) [static]
::g::Uno::Threading::Future1* ApplicationDir::ReadAsync1(uObject* dispatcher, uString* filename)
{
    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run1(::g::Uno::Threading::Promise_typeof()->MakeType(::TYPES[5/*string*/], NULL), dispatcher, uDelegate::New(::g::Uno::Func_typeof()->MakeType(::TYPES[5/*string*/], NULL), (void*)ApplicationDir__ReadClosure__Invoke_fn, ApplicationDir__ReadClosure::New1(filename)));
}

// public static bool TryRead(string filename, string& content) [static]
bool ApplicationDir::TryRead(uString* filename, uString** content)
{
    uStackFrame __("Fuse.Storage.ApplicationDir", "TryRead(string,string&)");

    if (::g::Uno::String::op_Equality(filename, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("filename")));

    uString* filepath = ::g::Uno::IO::Path::Combine(::g::Uno::IO::Directory::GetUserDirectory(2), filename);

    if (!::g::Uno::IO::File::Exists(filepath))
    {
        *content = ::g::Uno::String::Empty();
        return false;
    }

    *content = ::g::Uno::IO::File::ReadAllText(filepath);
    return true;
}

// public static bool Write(string filename, string value) [static]
bool ApplicationDir::Write(uString* filename, uString* value)
{
    uStackFrame __("Fuse.Storage.ApplicationDir", "Write(string,string)");

    if (::g::Uno::String::op_Equality(filename, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("filename")));

    if (::g::Uno::String::op_Equality(value, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("value")));

    uString* filepath = ::g::Uno::IO::Path::Combine(::g::Uno::IO::Directory::GetUserDirectory(2), filename);
    ApplicationDir::CreateFile(filepath);
    ::g::Uno::IO::File::WriteAllText(filepath, value);
    return true;
}

// public static Uno.Threading.Future<bool> WriteAsync(string filename, string value) [static]
::g::Uno::Threading::Future1* ApplicationDir::WriteAsync(uString* filename, uString* value)
{
    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), uDelegate::New(::g::Uno::Func_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), (void*)ApplicationDir__WriteClosure__Invoke_fn, ApplicationDir__WriteClosure::New1(filename, value)));
}

// public static Uno.Threading.Future<bool> WriteAsync(Uno.Threading.IDispatcher dispatcher, string filename, string value) [static]
::g::Uno::Threading::Future1* ApplicationDir::WriteAsync1(uObject* dispatcher, uString* filename, uString* value)
{
    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run1(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), dispatcher, uDelegate::New(::g::Uno::Func_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), (void*)ApplicationDir__WriteClosure__Invoke_fn, ApplicationDir__WriteClosure::New1(filename, value)));
}
// }

// /usr/local/share/uno/Packages/Fuse.Storage/1.12.0/ApplicationDir.uno
// --------------------------------------------------------------------

// private sealed class ApplicationDir.ReadClosure
// {
static void ApplicationDir__ReadClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(ApplicationDir__ReadClosure, _filename), 0);
}

uType* ApplicationDir__ReadClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ApplicationDir__ReadClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Storage.ApplicationDir.ReadClosure", options);
    type->fp_build_ = ApplicationDir__ReadClosure_build;
    return type;
}

// public ReadClosure(string filename)
void ApplicationDir__ReadClosure__ctor__fn(ApplicationDir__ReadClosure* __this, uString* filename)
{
    __this->ctor_(filename);
}

// public string Invoke()
void ApplicationDir__ReadClosure__Invoke_fn(ApplicationDir__ReadClosure* __this, uString** __retval)
{
    *__retval = __this->Invoke();
}

// public ReadClosure New(string filename)
void ApplicationDir__ReadClosure__New1_fn(uString* filename, ApplicationDir__ReadClosure** __retval)
{
    *__retval = ApplicationDir__ReadClosure::New1(filename);
}

// public ReadClosure(string filename) [instance]
void ApplicationDir__ReadClosure::ctor_(uString* filename)
{
    _filename = filename;
}

// public string Invoke() [instance]
uString* ApplicationDir__ReadClosure::Invoke()
{
    uStackFrame __("Fuse.Storage.ApplicationDir.ReadClosure", "Invoke()");
    return ::g::Fuse::Storage::ApplicationDir::Read(_filename);
}

// public ReadClosure New(string filename) [static]
ApplicationDir__ReadClosure* ApplicationDir__ReadClosure::New1(uString* filename)
{
    ApplicationDir__ReadClosure* obj1 = (ApplicationDir__ReadClosure*)uNew(ApplicationDir__ReadClosure_typeof());
    obj1->ctor_(filename);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Storage/1.12.0/StorageModule.uno
// -------------------------------------------------------------------

// public sealed class StorageModule
// {
static void StorageModule_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FuseJS/Storage");
    ::STRINGS[1] = uString::Const("writeSync");
    ::STRINGS[2] = uString::Const("readSync");
    ::STRINGS[3] = uString::Const("removeSync");
    ::STRINGS[4] = uString::Const("deleteSync");
    ::STRINGS[5] = uString::Const("write");
    ::STRINGS[6] = uString::Const("read");
    ::STRINGS[7] = uString::Const("");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[1] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::String_typeof();
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&StorageModule::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)StorageModule__New2_fn, 0, true, type, 0));
}

::g::Fuse::Scripting::NativeModule_type* StorageModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(StorageModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Storage.StorageModule", options);
    type->fp_build_ = StorageModule_build;
    type->fp_ctor_ = (void*)StorageModule__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public StorageModule()
void StorageModule__ctor_2_fn(StorageModule* __this)
{
    __this->ctor_2();
}

// public StorageModule New()
void StorageModule__New2_fn(StorageModule** __retval)
{
    *__retval = StorageModule::New2();
}

// private static object Read(Fuse.Scripting.Context c, object[] args)
void StorageModule__Read_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = StorageModule::Read(c, args);
}

// private static Uno.Threading.Future<string> ReadAsync(object[] args)
void StorageModule__ReadAsync_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = StorageModule::ReadAsync(args);
}

// private static object Remove(Fuse.Scripting.Context c, object[] args)
void StorageModule__Remove_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = StorageModule::Remove(c, args);
}

// private static object Write(Fuse.Scripting.Context c, object[] args)
void StorageModule__Write_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = StorageModule::Write(c, args);
}

// private static Uno.Threading.Future<bool> WriteAsync(object[] args)
void StorageModule__WriteAsync_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = StorageModule::WriteAsync(args);
}

uSStrong<StorageModule*> StorageModule::_instance_;

// public StorageModule() [instance]
void StorageModule::ctor_2()
{
    uStackFrame __("Fuse.Storage.StorageModule", ".ctor()");
    ctor_1();

    if (StorageModule::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(StorageModule::_instance_ = this, ::STRINGS[0/*"FuseJS/Stor...*/]);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[1/*"writeSync"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)StorageModule__Write_fn)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[2/*"readSync"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)StorageModule__Read_fn)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[3/*"removeSync"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)StorageModule__Remove_fn)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[4/*"deleteSync"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)StorageModule__Remove_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[1/*Fuse.Scripting.NativePromise<bool, bool>*/], ::STRINGS[5/*"write"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.FutureFactory<bool>*/], (void*)StorageModule__WriteAsync_fn), NULL));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[3/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[6/*"read"*/], uDelegate::New(::TYPES[4/*Fuse.Scripting.FutureFactory<string>*/], (void*)StorageModule__ReadAsync_fn), NULL));
}

// public StorageModule New() [static]
StorageModule* StorageModule::New2()
{
    StorageModule* obj1 = (StorageModule*)uNew(StorageModule_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static object Read(Fuse.Scripting.Context c, object[] args) [static]
uObject* StorageModule::Read(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("Fuse.Storage.StorageModule", "Read(Fuse.Scripting.Context,object[])");
    uString* filename = NULL;

    if (uPtr(args)->Length() > 0)
        filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[5/*string*/]);

    uString* content;

    if (::g::Fuse::Storage::ApplicationDir::TryRead((filename != NULL) ? filename : ::STRINGS[7/*""*/], &content))
        return content;
    else
        return ::g::Uno::String::Empty();
}

// private static Uno.Threading.Future<string> ReadAsync(object[] args) [static]
::g::Uno::Threading::Future1* StorageModule::ReadAsync(uArray* args)
{
    uStackFrame __("Fuse.Storage.StorageModule", "ReadAsync(object[])");

    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[5/*string*/]);
        return ::g::Fuse::Storage::ApplicationDir::ReadAsync((filename != NULL) ? filename : ::STRINGS[7/*""*/]);
    }

    return ::g::Fuse::Storage::ApplicationDir::ReadAsync(::STRINGS[7/*""*/]);
}

// private static object Remove(Fuse.Scripting.Context c, object[] args) [static]
uObject* StorageModule::Remove(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("Fuse.Storage.StorageModule", "Remove(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[5/*string*/]);
        return uBox(::g::Uno::Bool_typeof(), ::g::Fuse::Storage::ApplicationDir::Delete(filename));
    }

    return uBox(::g::Uno::Bool_typeof(), false);
}

// private static object Write(Fuse.Scripting.Context c, object[] args) [static]
uObject* StorageModule::Write(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("Fuse.Storage.StorageModule", "Write(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[5/*string*/]);
        uString* value = uAs<uString*>(args->Strong<uObject*>(1), ::TYPES[5/*string*/]);
        return uBox(::g::Uno::Bool_typeof(), ::g::Fuse::Storage::ApplicationDir::Write((filename != NULL) ? filename : ::STRINGS[7/*""*/], (value != NULL) ? value : ::STRINGS[7/*""*/]));
    }

    return uBox(::g::Uno::Bool_typeof(), ::g::Fuse::Storage::ApplicationDir::Write(::STRINGS[7/*""*/], ::STRINGS[7/*""*/]));
}

// private static Uno.Threading.Future<bool> WriteAsync(object[] args) [static]
::g::Uno::Threading::Future1* StorageModule::WriteAsync(uArray* args)
{
    uStackFrame __("Fuse.Storage.StorageModule", "WriteAsync(object[])");

    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[5/*string*/]);
        uString* value = uAs<uString*>(args->Strong<uObject*>(1), ::TYPES[5/*string*/]);
        return ::g::Fuse::Storage::ApplicationDir::WriteAsync((filename != NULL) ? filename : ::STRINGS[7/*""*/], (value != NULL) ? value : ::STRINGS[7/*""*/]);
    }

    return ::g::Fuse::Storage::ApplicationDir::WriteAsync(::STRINGS[7/*""*/], ::STRINGS[7/*""*/]);
}
// }

// /usr/local/share/uno/Packages/Fuse.Storage/1.12.0/ApplicationDir.uno
// --------------------------------------------------------------------

// private sealed class ApplicationDir.WriteClosure
// {
static void ApplicationDir__WriteClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(ApplicationDir__WriteClosure, _filename), 0,
        ::g::Uno::String_typeof(), offsetof(ApplicationDir__WriteClosure, _value), 0);
}

uType* ApplicationDir__WriteClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ApplicationDir__WriteClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Storage.ApplicationDir.WriteClosure", options);
    type->fp_build_ = ApplicationDir__WriteClosure_build;
    return type;
}

// public WriteClosure(string filename, string value)
void ApplicationDir__WriteClosure__ctor__fn(ApplicationDir__WriteClosure* __this, uString* filename, uString* value)
{
    __this->ctor_(filename, value);
}

// public bool Invoke()
void ApplicationDir__WriteClosure__Invoke_fn(ApplicationDir__WriteClosure* __this, bool* __retval)
{
    *__retval = __this->Invoke();
}

// public WriteClosure New(string filename, string value)
void ApplicationDir__WriteClosure__New1_fn(uString* filename, uString* value, ApplicationDir__WriteClosure** __retval)
{
    *__retval = ApplicationDir__WriteClosure::New1(filename, value);
}

// public WriteClosure(string filename, string value) [instance]
void ApplicationDir__WriteClosure::ctor_(uString* filename, uString* value)
{
    _filename = filename;
    _value = value;
}

// public bool Invoke() [instance]
bool ApplicationDir__WriteClosure::Invoke()
{
    uStackFrame __("Fuse.Storage.ApplicationDir.WriteClosure", "Invoke()");
    return ::g::Fuse::Storage::ApplicationDir::Write(_filename, _value);
}

// public WriteClosure New(string filename, string value) [static]
ApplicationDir__WriteClosure* ApplicationDir__WriteClosure::New1(uString* filename, uString* value)
{
    ApplicationDir__WriteClosure* obj1 = (ApplicationDir__WriteClosure*)uNew(ApplicationDir__WriteClosure_typeof());
    obj1->ctor_(filename, value);
    return obj1;
}
// }

}}} // ::g::Fuse::Storage
