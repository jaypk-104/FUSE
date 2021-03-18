// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#import <Foundation/Foundation.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator1-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.IO.Directory.Enumerable.h>
#include <Uno.IO.Directory.EnumeratorMode.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.IOException.h>
#include <Uno.IO.Path.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[2];
static uType* TYPES[1];

namespace g{
namespace Uno{
namespace IO{

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/IO/Directory.uno
// ------------------------------------------------------------------------

// public static class Directory
// {
static void Directory_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::IO::Path_typeof());
    type->Reflection.SetFunctions(9,
        new uFunction("CreateDirectory", NULL, (void*)Directory__CreateDirectory_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Delete", NULL, (void*)Directory__Delete_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("EnumerateDirectories", NULL, (void*)Directory__EnumerateDirectories_fn, 0, true, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), NULL), 1, ::g::Uno::String_typeof()),
        new uFunction("EnumerateFiles", NULL, (void*)Directory__EnumerateFiles_fn, 0, true, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), NULL), 1, ::g::Uno::String_typeof()),
        new uFunction("EnumerateFileSystemEntries", NULL, (void*)Directory__EnumerateFileSystemEntries_fn, 0, true, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), NULL), 1, ::g::Uno::String_typeof()),
        new uFunction("Exists", NULL, (void*)Directory__Exists_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("GetCurrentDirectory", NULL, (void*)Directory__GetCurrentDirectory_fn, 0, true, ::g::Uno::String_typeof(), 0),
        new uFunction("GetUserDirectory", NULL, (void*)Directory__GetUserDirectory_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Uno::IO::UserDirectory_typeof()),
        new uFunction("Move", NULL, (void*)Directory__Move_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
}

uClassType* Directory_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.IO.Directory", options);
    type->fp_build_ = Directory_build;
    return type;
}

// public static void CreateDirectory(string dirName)
void Directory__CreateDirectory_fn(uString* dirName)
{
    Directory::CreateDirectory(dirName);
}

// public static void Delete(string dirName, bool recursive)
void Directory__Delete_fn(uString* dirName, bool* recursive)
{
    Directory::Delete(dirName, *recursive);
}

// public static Uno.Collections.IEnumerable<string> EnumerateDirectories(string dirName)
void Directory__EnumerateDirectories_fn(uString* dirName, uObject** __retval)
{
    *__retval = Directory::EnumerateDirectories(dirName);
}

// public static Uno.Collections.IEnumerable<string> EnumerateFiles(string dirName)
void Directory__EnumerateFiles_fn(uString* dirName, uObject** __retval)
{
    *__retval = Directory::EnumerateFiles(dirName);
}

// public static Uno.Collections.IEnumerable<string> EnumerateFileSystemEntries(string dirName)
void Directory__EnumerateFileSystemEntries_fn(uString* dirName, uObject** __retval)
{
    *__retval = Directory::EnumerateFileSystemEntries(dirName);
}

// public static bool Exists(string dirName)
void Directory__Exists_fn(uString* dirName, bool* __retval)
{
    *__retval = Directory::Exists(dirName);
}

// internal static string GetBaseDirectory()
void Directory__GetBaseDirectory_fn(uString** __retval)
{
    *__retval = Directory::GetBaseDirectory();
}

// public static string GetCurrentDirectory()
void Directory__GetCurrentDirectory_fn(uString** __retval)
{
    *__retval = Directory::GetCurrentDirectory();
}

// public static string GetUserDirectory(Uno.IO.UserDirectory dir)
void Directory__GetUserDirectory_fn(int32_t* dir, uString** __retval)
{
    *__retval = Directory::GetUserDirectory(*dir);
}

// private static extern string GetUserDirectoryApple(int directory)
void Directory__GetUserDirectoryApple_fn(int32_t* directory, uString** __retval)
{
    *__retval = Directory::GetUserDirectoryApple(*directory);
}

// public static void Move(string oldName, string newName)
void Directory__Move_fn(uString* oldName, uString* newName)
{
    Directory::Move(oldName, newName);
}

// public static void CreateDirectory(string dirName) [static]
void Directory::CreateDirectory(uString* dirName)
{
    uStackFrame __("Uno.IO.Directory", "CreateDirectory(string)");

    if (::g::Uno::String::op_Equality(dirName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("dirName")));

    if (((uPtr(dirName)->Length() == 0) || ((false && (uPtr(dirName)->Length() == 2)) && (uPtr(dirName)->Item(1) == ':'))) || Directory::Exists(dirName))
        return;

    Directory::CreateDirectory(::g::Uno::IO::Path::GetDirectoryName(dirName));
    if (mkdir(uCString(dirName).Ptr, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) == 0 ||
            errno == EEXIST)
        return;
    U_THROW(::g::Uno::IO::IOException::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("Unable to create directory '"), dirName), uString::Const("'"))));
}

// public static void Delete(string dirName, bool recursive) [static]
void Directory::Delete(uString* dirName, bool recursive)
{
    uStackFrame __("Uno.IO.Directory", "Delete(string,bool)");
    uString* ret3;
    uString* ret4;

    if (::g::Uno::String::op_Equality(dirName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("dirName")));

    if (recursive)
    {
        uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Directory::EnumerateDirectories(dirName)), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), NULL)));

        {
            try
            {
                {
                    while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())))
                    {
                        uString* e = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::String_typeof(), NULL)), &ret3), ret3);
                        Directory::Delete(e, true);
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::g::Uno::IDisposable_typeof()));
                }
                                throw __t;
                goto __after_finally_0;
            }

            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::g::Uno::IDisposable_typeof()));
            }
            __after_finally_0:;
        }

        uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Directory::EnumerateFiles(dirName)), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), NULL)));

        {
            try
            {
                {
                    while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator_typeof())))
                    {
                        uString* e1 = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::String_typeof(), NULL)), &ret4), ret4);
                        ::g::Uno::IO::File::Delete(e1);
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::g::Uno::IDisposable_typeof()));
                }
                                throw __t;
                goto __after_finally_1;
            }

            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::g::Uno::IDisposable_typeof()));
            }
            __after_finally_1:;
        }
    }

    uCString cstr(dirName);

    if (rmdir(cstr.Ptr) != 0)
        U_THROW(::g::Uno::IO::IOException::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("Unable to delete directory '"), dirName), uString::Const("'"))));
}

// public static Uno.Collections.IEnumerable<string> EnumerateDirectories(string dirName) [static]
uObject* Directory::EnumerateDirectories(uString* dirName)
{
    uStackFrame __("Uno.IO.Directory", "EnumerateDirectories(string)");
    return (uObject*)Directory__Enumerable::New1(dirName, 1);
}

// public static Uno.Collections.IEnumerable<string> EnumerateFiles(string dirName) [static]
uObject* Directory::EnumerateFiles(uString* dirName)
{
    uStackFrame __("Uno.IO.Directory", "EnumerateFiles(string)");
    return (uObject*)Directory__Enumerable::New1(dirName, 2);
}

// public static Uno.Collections.IEnumerable<string> EnumerateFileSystemEntries(string dirName) [static]
uObject* Directory::EnumerateFileSystemEntries(uString* dirName)
{
    uStackFrame __("Uno.IO.Directory", "EnumerateFileSystemEntries(string)");
    return (uObject*)Directory__Enumerable::New1(dirName, 0);
}

// public static bool Exists(string dirName) [static]
bool Directory::Exists(uString* dirName)
{
    uStackFrame __("Uno.IO.Directory", "Exists(string)");

    if (::g::Uno::String::op_Equality(dirName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("dirName")));

    struct stat attributes;
    return stat(uCString(dirName).Ptr, &attributes) != -1 &&
        S_ISDIR(attributes.st_mode);
}

// internal static string GetBaseDirectory() [static]
uString* Directory::GetBaseDirectory()
{
    NSArray* arguments = [[NSProcessInfo processInfo] arguments];
    NSString* exe = [arguments objectAtIndex:0];
    return ::g::Uno::IO::Path::GetDirectoryName(uString::Utf8([exe UTF8String]));
}

// public static string GetCurrentDirectory() [static]
uString* Directory::GetCurrentDirectory()
{
    char buf[4096];
    if (getcwd(buf, sizeof(buf)) != buf)
        U_THROW_IOE("getcwd() failed");
    
    return uString::Utf8(buf);
}

// public static string GetUserDirectory(Uno.IO.UserDirectory dir) [static]
uString* Directory::GetUserDirectory(int32_t dir)
{
    uStackFrame __("Uno.IO.Directory", "GetUserDirectory(Uno.IO.UserDirectory)");

    switch (dir)
    {
        case 0:
            return Directory::GetUserDirectoryApple(NSCachesDirectory);
        case 1:
            return Directory::GetUserDirectoryApple(NSLibraryDirectory);
        case 2:
            return Directory::GetUserDirectoryApple(NSLibraryDirectory);
        case 3:
            return Directory::GetUserDirectoryApple(NSDesktopDirectory);
        case 4:
            return Directory::GetUserDirectoryApple(NSDownloadsDirectory);
        case 5:
            return ::g::Uno::String::op_Addition2(Directory::GetUserDirectoryApple(NSUserDirectory), uString::Const("/Templates"));
        case 6:
            return Directory::GetUserDirectoryApple(NSSharedPublicDirectory);
        case 7:
            return Directory::GetUserDirectoryApple(NSDocumentDirectory);
        case 8:
            return Directory::GetUserDirectoryApple(NSMusicDirectory);
        case 9:
            return Directory::GetUserDirectoryApple(NSPicturesDirectory);
        case 10:
            return Directory::GetUserDirectoryApple(NSMoviesDirectory);
    }

    U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(uString::Const("dir")));
}

// private static extern string GetUserDirectoryApple(int directory) [static]
uString* Directory::GetUserDirectoryApple(int32_t directory)
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (int32_t directory) -> ::NSString*
        {
            return NSSearchPathForDirectoriesInDomains((NSSearchPathDirectory) directory, NSUserDomainMask, YES)[0];
        } (directory));
        
    }
    
}

// public static void Move(string oldName, string newName) [static]
void Directory::Move(uString* oldName, uString* newName)
{
    uStackFrame __("Uno.IO.Directory", "Move(string,string)");

    if (::g::Uno::String::op_Equality(oldName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("oldName")));

    if (::g::Uno::String::op_Equality(newName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("newName")));

    uCString oldNameU8(oldName);
    uCString newNameU8(newName);

    if (rename(oldNameU8.Ptr, newNameU8.Ptr) != 0)
        U_THROW(::g::Uno::IO::IOException::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("Unable to move directory '"), oldName), uString::Const("' to '")), newName), uString::Const("'"))));
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/IO/Path.uno
// -------------------------------------------------------------------

// public static class Path
// {
// static generated Path()
static void Path__cctor__fn(uType* __type)
{
    Path::DirectorySeparatorChar_ = Path::GetDirectorySeparatorChar();
    Path::AltDirectorySeparatorChar_ = '/';
    Path::PathSeparator_ = Path::GetPathSeparator();
    Path::VolumeSeparatorChar_ = Path::GetVolumeSeparatorChar();
    Path::DirectorySeparatorChars_ = Path::GetDirectorySeparatorChars();
}

static void Path_build(uType* type)
{
    ::STRINGS[0] = uString::Const("path1");
    ::STRINGS[1] = uString::Const("path2");
    ::TYPES[0] = ::g::Uno::Char_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Char_typeof(), (uintptr_t)&Path::DirectorySeparatorChar_, uFieldFlagsStatic,
        ::g::Uno::Char_typeof(), (uintptr_t)&Path::AltDirectorySeparatorChar_, uFieldFlagsStatic,
        ::g::Uno::Char_typeof(), (uintptr_t)&Path::PathSeparator_, uFieldFlagsStatic,
        ::g::Uno::Char_typeof(), (uintptr_t)&Path::VolumeSeparatorChar_, uFieldFlagsStatic,
        ::TYPES[0/*char[]*/], (uintptr_t)&Path::DirectorySeparatorChars_, uFieldFlagsStatic);
    type->Reflection.SetFields(4,
        new uField("AltDirectorySeparatorChar", 1),
        new uField("DirectorySeparatorChar", 0),
        new uField("PathSeparator", 2),
        new uField("VolumeSeparatorChar", 3));
    type->Reflection.SetFunctions(5,
        new uFunction("Combine", NULL, (void*)Path__Combine_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("GetDirectoryName", NULL, (void*)Path__GetDirectoryName_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("GetFileName", NULL, (void*)Path__GetFileName_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("GetFullPath", NULL, (void*)Path__GetFullPath_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("IsPathRooted", NULL, (void*)Path__IsPathRooted_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::String_typeof()));
}

uClassType* Path_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.IO.Path", options);
    type->fp_build_ = Path_build;
    type->fp_cctor_ = Path__cctor__fn;
    return type;
}

// public static string Combine(string path1, string path2)
void Path__Combine_fn(uString* path1, uString* path2, uString** __retval)
{
    *__retval = Path::Combine(path1, path2);
}

// private static string CombineInternal(string a, string b)
void Path__CombineInternal_fn(uString* a, uString* b, uString** __retval)
{
    *__retval = Path::CombineInternal(a, b);
}

// public static string GetDirectoryName(string path)
void Path__GetDirectoryName_fn(uString* path, uString** __retval)
{
    *__retval = Path::GetDirectoryName(path);
}

// private static char GetDirectorySeparatorChar()
void Path__GetDirectorySeparatorChar_fn(char16_t* __retval)
{
    *__retval = Path::GetDirectorySeparatorChar();
}

// private static char[] GetDirectorySeparatorChars()
void Path__GetDirectorySeparatorChars_fn(uArray** __retval)
{
    *__retval = Path::GetDirectorySeparatorChars();
}

// public static string GetFileName(string path)
void Path__GetFileName_fn(uString* path, uString** __retval)
{
    *__retval = Path::GetFileName(path);
}

// public static string GetFullPath(string filename)
void Path__GetFullPath_fn(uString* filename, uString** __retval)
{
    *__retval = Path::GetFullPath(filename);
}

// private static char GetPathSeparator()
void Path__GetPathSeparator_fn(char16_t* __retval)
{
    *__retval = Path::GetPathSeparator();
}

// private static char GetVolumeSeparatorChar()
void Path__GetVolumeSeparatorChar_fn(char16_t* __retval)
{
    *__retval = Path::GetVolumeSeparatorChar();
}

// private static bool IsDirectorySeparator(char ch)
void Path__IsDirectorySeparator_fn(char16_t* ch, bool* __retval)
{
    *__retval = Path::IsDirectorySeparator(*ch);
}

// public static bool IsPathRooted(string path)
void Path__IsPathRooted_fn(uString* path, bool* __retval)
{
    *__retval = Path::IsPathRooted(path);
}

// private static string NormalizePathSeparators(string path)
void Path__NormalizePathSeparators_fn(uString* path, uString** __retval)
{
    *__retval = Path::NormalizePathSeparators(path);
}

char16_t Path::DirectorySeparatorChar_;
char16_t Path::AltDirectorySeparatorChar_;
char16_t Path::PathSeparator_;
char16_t Path::VolumeSeparatorChar_;
uSStrong<uArray*> Path::DirectorySeparatorChars_;

// public static string Combine(string path1, string path2) [static]
uString* Path::Combine(uString* path1, uString* path2)
{
    uStackFrame __("Uno.IO.Path", "Combine(string,string)");
    Path_typeof()->Init();

    if (::g::Uno::String::op_Equality(path1, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"path1"*/]));

    if (::g::Uno::String::op_Equality(path2, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[1/*"path2"*/]));

    return Path::CombineInternal(path1, path2);
}

// private static string CombineInternal(string a, string b) [static]
uString* Path::CombineInternal(uString* a, uString* b)
{
    uStackFrame __("Uno.IO.Path", "CombineInternal(string,string)");
    Path_typeof()->Init();

    if (uPtr(b)->Length() == 0)
        return a;

    if (uPtr(a)->Length() == 0)
        return b;

    if (Path::IsPathRooted(b))
        return b;

    if (Path::IsDirectorySeparator(uPtr(a)->Item(uPtr(a)->Length() - 1)))
        return ::g::Uno::String::op_Addition2(a, b);

    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(a, uBox<char16_t>(::g::Uno::Char_typeof(), Path::DirectorySeparatorChar_)), b);
}

// public static string GetDirectoryName(string path) [static]
uString* Path::GetDirectoryName(uString* path)
{
    uStackFrame __("Uno.IO.Path", "GetDirectoryName(string)");
    Path_typeof()->Init();

    if (::g::Uno::String::op_Equality(path, NULL))
        return NULL;

    path = Path::NormalizePathSeparators(path);
    int32_t lastDirectorySeparator = ::g::Uno::String::LastIndexOfAny(uPtr(path), Path::DirectorySeparatorChars_);

    if (lastDirectorySeparator < 0)
        return ::g::Uno::String::Empty();

    if (lastDirectorySeparator == 0)
    {
        if (uPtr(path)->Length() == 1)
            return NULL;

        lastDirectorySeparator = 1;
    }

    return ::g::Uno::String::Substring1(path, 0, lastDirectorySeparator);
}

// private static char GetDirectorySeparatorChar() [static]
char16_t Path::GetDirectorySeparatorChar()
{
    Path_typeof()->Init();
    return '/';
}

// private static char[] GetDirectorySeparatorChars() [static]
uArray* Path::GetDirectorySeparatorChars()
{
    Path_typeof()->Init();
    return uArray::Init<int32_t>(::TYPES[0/*char[]*/], 1, '/');
}

// public static string GetFileName(string path) [static]
uString* Path::GetFileName(uString* path)
{
    uStackFrame __("Uno.IO.Path", "GetFileName(string)");
    Path_typeof()->Init();

    if (::g::Uno::String::op_Equality(path, NULL))
        return NULL;

    int32_t lastDirectorySeparator = ::g::Uno::String::LastIndexOfAny(uPtr(path), Path::DirectorySeparatorChars_);

    if (lastDirectorySeparator >= 0)
        return ::g::Uno::String::Substring(uPtr(path), lastDirectorySeparator + 1);

    return path;
}

// public static string GetFullPath(string filename) [static]
uString* Path::GetFullPath(uString* filename)
{
    uStackFrame __("Uno.IO.Path", "GetFullPath(string)");
    Path_typeof()->Init();
    return Path::IsPathRooted(filename) ? filename : (uString*)Path::Combine(::g::Uno::IO::Directory::GetCurrentDirectory(), filename);
}

// private static char GetPathSeparator() [static]
char16_t Path::GetPathSeparator()
{
    Path_typeof()->Init();
    return ':';
}

// private static char GetVolumeSeparatorChar() [static]
char16_t Path::GetVolumeSeparatorChar()
{
    Path_typeof()->Init();
    return '/';
}

// private static bool IsDirectorySeparator(char ch) [static]
bool Path::IsDirectorySeparator(char16_t ch)
{
    Path_typeof()->Init();
    return (ch == Path::DirectorySeparatorChar_) || (ch == Path::AltDirectorySeparatorChar_);
}

// public static bool IsPathRooted(string path) [static]
bool Path::IsPathRooted(uString* path)
{
    uStackFrame __("Uno.IO.Path", "IsPathRooted(string)");
    Path_typeof()->Init();

    if (::g::Uno::String::IsNullOrEmpty(path))
        return false;

    if (Path::IsDirectorySeparator(uPtr(path)->Item(0)))
        return true;

    return false;
}

// private static string NormalizePathSeparators(string path) [static]
uString* Path::NormalizePathSeparators(uString* path)
{
    uStackFrame __("Uno.IO.Path", "NormalizePathSeparators(string)");
    Path_typeof()->Init();
    int32_t length = uPtr(path)->Length();
    int32_t pos = 0;
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();

    for (; pos < length; ++pos)
    {
        char16_t ch = uPtr(path)->Item(pos);

        if (!Path::IsDirectorySeparator(ch))
        {
            uPtr(sb)->Append(ch);
            continue;
        }

        while (((pos + 1) < length) && Path::IsDirectorySeparator(path->Item(pos + 1)))
            pos++;

        uPtr(sb)->Append(Path::DirectorySeparatorChar_);
    }

    return sb->ToString();
}
// }

}}} // ::g::Uno::IO
