// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <CoreText/CoreText.h>
#include <Fuse.Internal.FontFaceDescriptor.h>
#include <Fuse.Internal.iOSSystemFont.h>
#include <Fuse.Resources.SystemFileSource.h>
#include <Fuse.SystemFont.Style.h>
#include <Fuse.SystemFont.Weight.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.HashSet-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.IO.File.h>
#include <Uno.Math.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[12];
static uType* TYPES[5];

namespace g{
namespace Fuse{
namespace Internal{

// /usr/local/share/uno/Packages/Fuse.Common/1.12.0/Internal/iOSSystemFont.uno
// ---------------------------------------------------------------------------

// internal static extern class iOSSystemFont
// {
// static generated iOSSystemFont()
static void iOSSystemFont__cctor__fn(uType* __type)
{
    iOSSystemFont::_weightNames_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[0/*"UltraLight"*/], ::STRINGS[1/*"Thin"*/], ::STRINGS[2/*"Light"*/], ::STRINGS[3/*"Regular"*/], ::STRINGS[4/*"Medium"*/], ::STRINGS[5/*"SemiBold"*/], ::STRINGS[6/*"Bold"*/], ::STRINGS[7/*"Heavy"*/], ::STRINGS[8/*"Black"*/]);
}

static void iOSSystemFont_build(uType* type)
{
    ::STRINGS[0] = uString::Const("UltraLight");
    ::STRINGS[1] = uString::Const("Thin");
    ::STRINGS[2] = uString::Const("Light");
    ::STRINGS[3] = uString::Const("Regular");
    ::STRINGS[4] = uString::Const("Medium");
    ::STRINGS[5] = uString::Const("SemiBold");
    ::STRINGS[6] = uString::Const("Bold");
    ::STRINGS[7] = uString::Const("Heavy");
    ::STRINGS[8] = uString::Const("Black");
    ::STRINGS[9] = uString::Const("Roman");
    ::STRINGS[10] = uString::Const("iOSSystemFont: No matching style in ");
    ::STRINGS[11] = uString::Const("");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Internal::FontFaceDescriptor_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::TYPES[1/*Uno.Collections.HashSet<string>*/], (uintptr_t)&iOSSystemFont::_families_, uFieldFlagsStatic,
        ::TYPES[2/*Uno.Collections.Dictionary<string, string>*/], (uintptr_t)&iOSSystemFont::_fontPaths_, uFieldFlagsStatic,
        ::TYPES[0/*string[]*/], (uintptr_t)&iOSSystemFont::_weightNames_, uFieldFlagsStatic);
}

uClassType* iOSSystemFont_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.iOSSystemFont", options);
    type->fp_build_ = iOSSystemFont_build;
    type->fp_cctor_ = iOSSystemFont__cctor__fn;
    return type;
}

// private static void AddFamily(string name)
void iOSSystemFont__AddFamily_fn(uString* name)
{
    iOSSystemFont::AddFamily(name);
}

// private static void AddFontPath(string name, string path)
void iOSSystemFont__AddFontPath_fn(uString* name, uString* path)
{
    iOSSystemFont::AddFontPath(name, path);
}

// private static void AddFontPaths()
void iOSSystemFont__AddFontPaths_fn()
{
    iOSSystemFont::AddFontPaths();
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> get_Default()
void iOSSystemFont__get_Default_fn(::g::Uno::Collections::List** __retval)
{
    *__retval = iOSSystemFont::Default();
}

// internal static string get_DefaultFontName()
void iOSSystemFont__get_DefaultFontName_fn(uString** __retval)
{
    *__retval = iOSSystemFont::DefaultFontName();
}

// private static void EnsureFontPathsAdded()
void iOSSystemFont__EnsureFontPathsAdded_fn()
{
    iOSSystemFont::EnsureFontPathsAdded();
}

// public static Uno.Collections.HashSet<string> get_Families()
void iOSSystemFont__get_Families_fn(::g::Uno::Collections::HashSet** __retval)
{
    *__retval = iOSSystemFont::Families();
}

// private static Uno.Collections.Dictionary<string, string> get_FontPaths()
void iOSSystemFont__get_FontPaths_fn(::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = iOSSystemFont::FontPaths();
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> Get(string family, Fuse.SystemFont.Style style, Fuse.SystemFont.Weight weight)
void iOSSystemFont__Get_fn(uString* family, int32_t* style, int32_t* weight, ::g::Uno::Collections::List** __retval)
{
    *__retval = iOSSystemFont::Get(family, *style, *weight);
}

// private static string GetDefaultFontFamily()
void iOSSystemFont__GetDefaultFontFamily_fn(uString** __retval)
{
    *__retval = iOSSystemFont::GetDefaultFontFamily();
}

// private static ObjC.Object GetDefaultUIFontDescriptor()
void iOSSystemFont__GetDefaultUIFontDescriptor_fn(::g::ObjC::Object** __retval)
{
    *__retval = iOSSystemFont::GetDefaultUIFontDescriptor();
}

// private static string GetDescriptorFontName(ObjC.Object descriptor)
void iOSSystemFont__GetDescriptorFontName_fn(::g::ObjC::Object* descriptor, uString** __retval)
{
    *__retval = iOSSystemFont::GetDescriptorFontName(descriptor);
}

// private static ObjC.Object[] GetDescriptors(string fileName)
void iOSSystemFont__GetDescriptors_fn(uString* fileName, uArray** __retval)
{
    *__retval = iOSSystemFont::GetDescriptors(fileName);
}

// private static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> GetDescriptorsFromFontNames(string[] fontNames)
void iOSSystemFont__GetDescriptorsFromFontNames_fn(uArray* fontNames, ::g::Uno::Collections::List** __retval)
{
    *__retval = iOSSystemFont::GetDescriptorsFromFontNames(fontNames);
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> GetFallback(Uno.UX.FileSource file)
void iOSSystemFont__GetFallback_fn(::g::Uno::UX::FileSource* file, ::g::Uno::Collections::List** __retval)
{
    *__retval = iOSSystemFont::GetFallback(file);
}

// private static ObjC.Object[] GetFallbackUIFontDescriptors(ObjC.Object rawDescriptor)
void iOSSystemFont__GetFallbackUIFontDescriptors_fn(::g::ObjC::Object* rawDescriptor, uArray** __retval)
{
    *__retval = iOSSystemFont::GetFallbackUIFontDescriptors(rawDescriptor);
}

// private static string[] GetFontNamesFromUIFontDescriptors(ObjC.Object[] descriptors)
void iOSSystemFont__GetFontNamesFromUIFontDescriptors_fn(uArray* descriptors, uArray** __retval)
{
    *__retval = iOSSystemFont::GetFontNamesFromUIFontDescriptors(descriptors);
}

// private static Uno.Collections.IEnumerable<string> GetFontNameStyles(string fontName)
void iOSSystemFont__GetFontNameStyles_fn(uString* fontName, uObject** __retval)
{
    *__retval = iOSSystemFont::GetFontNameStyles(fontName);
}

// private static ObjC.Object GetMatchingFontDescriptor(string family, bool isItalic, string weight)
void iOSSystemFont__GetMatchingFontDescriptor_fn(uString* family, bool* isItalic, uString* weight, ::g::ObjC::Object** __retval)
{
    *__retval = iOSSystemFont::GetMatchingFontDescriptor(family, *isItalic, weight);
}

// public static ObjC.Object GetMatchingUIFontDescriptor(string fileName, int index, Uno.Predicate<string> stylePredicate)
void iOSSystemFont__GetMatchingUIFontDescriptor_fn(uString* fileName, int32_t* index, uDelegate* stylePredicate, ::g::ObjC::Object** __retval)
{
    *__retval = iOSSystemFont::GetMatchingUIFontDescriptor(fileName, *index, stylePredicate);
}

// private static string GetPostscriptName(ObjC.Object descriptor)
void iOSSystemFont__GetPostscriptName_fn(::g::ObjC::Object* descriptor, uString** __retval)
{
    *__retval = iOSSystemFont::GetPostscriptName(descriptor);
}

// private static string GetStyleName(ObjC.Object descriptor)
void iOSSystemFont__GetStyleName_fn(::g::ObjC::Object* descriptor, uString** __retval)
{
    *__retval = iOSSystemFont::GetStyleName(descriptor);
}

uSStrong< ::g::Uno::Collections::HashSet*> iOSSystemFont::_families_;
uSStrong< ::g::Uno::Collections::Dictionary*> iOSSystemFont::_fontPaths_;
uSStrong<uArray*> iOSSystemFont::_weightNames_;

// private static void AddFamily(string name) [static]
void iOSSystemFont::AddFamily(uString* name)
{
    uStackFrame __("Fuse.Internal.iOSSystemFont", "AddFamily(string)");
    iOSSystemFont_typeof()->Init();
    bool ret7;
    bool ret8;
    uString* lowerName = ::g::Uno::String::ToLower(uPtr(name));

    if (!(::g::Uno::Collections::HashSet__Contains_fn(uPtr(iOSSystemFont::_families_), lowerName, &ret7), ret7))
        ::g::Uno::Collections::HashSet__Add_fn(uPtr(iOSSystemFont::_families_), lowerName, &ret8);
}

// private static void AddFontPath(string name, string path) [static]
void iOSSystemFont::AddFontPath(uString* name, uString* path)
{
    uStackFrame __("Fuse.Internal.iOSSystemFont", "AddFontPath(string,string)");
    iOSSystemFont_typeof()->Init();
    bool ret9;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(iOSSystemFont::_fontPaths_), name, &ret9), ret9))
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(iOSSystemFont::_fontPaths_), name, path);
}

// private static void AddFontPaths() [static]
void iOSSystemFont::AddFontPaths()
{
    iOSSystemFont_typeof()->Init();
    @autoreleasepool
    {
        NSFileManager* fileManager = [NSFileManager defaultManager];
        
        NSString* prefix = @"/System/Library/Fonts";
        BOOL isDirectory = NO;
        if ([fileManager fileExistsAtPath:prefix isDirectory:&isDirectory] && isDirectory)
        {
        	NSArray *files
        		= [fileManager contentsOfDirectoryAtPath:prefix error:NULL];
        	NSArray* plists
        		= [files filteredArrayUsingPredicate: [NSPredicate predicateWithFormat:@"self ENDSWITH '.plist'"]];
        
        	__block bool added = false;
        
        	for (NSString* file in plists)
        	{
        		NSDictionary* plist = [NSDictionary dictionaryWithContentsOfFile:[prefix stringByAppendingPathComponent:file]];
        		[plist[@"Names"] enumerateKeysAndObjectsUsingBlock: ^ (id key, id obj, BOOL* stop)
        		{
        			[&]() -> void { ::uForeignPool __foreignPool; iOSSystemFont::AddFontPath(::uObjC::UnoString(key), ::uObjC::UnoString(obj)); }();
        			added = true;
        		}];
        		for (NSString* key in plist[@"TraitMappings"])
        		{
        			[&]() -> void { ::uForeignPool __foreignPool; iOSSystemFont::AddFamily(::uObjC::UnoString(key)); }();
        		}
        	}
        
        	if (added)
        	{
        		return;
        	}
        }
        
        // Slow path: No plist found --- some versions of iOS
        // don't seem to have them: Look at all the font files
        // in the fonts directory instead.
        NSURL* directory = [NSURL fileURLWithPath:prefix];
        NSArray* keys = [NSArray arrayWithObject:NSURLIsDirectoryKey];
        
        NSDirectoryEnumerator* enumerator = [fileManager
        	enumeratorAtURL:directory
        	includingPropertiesForKeys:keys
        	options:0
        	errorHandler:^ (NSURL* url, NSError* error)
        	{
        		return YES; // Enumeration should continue
        	}];
        
        NSArray* fontExtensions = @[@"ttf", @"ttc", @"dfont", @"otf"];
        
        for (NSURL* url in enumerator)
        {
        	NSError* error;
        	NSNumber* isDirectory = nil;
        	if (![url getResourceValue:&isDirectory forKey:NSURLIsDirectoryKey error:&error])
        	{
        		// error
        	}
        	else if (![isDirectory boolValue] && [fontExtensions indexOfObject:[url pathExtension]] != NSNotFound)
        	@autoreleasepool
        	{
        		NSArray* descriptors =
        			(__bridge NSArray*)CTFontManagerCreateFontDescriptorsFromURL((__bridge CFURLRef)url);
        		if (descriptors != NULL)
        		{
        			for (UIFontDescriptor* descriptor in descriptors)
        			{
        				NSString* name = [descriptor objectForKey:UIFontDescriptorNameAttribute];
        				NSString* path = [url path];
        				[&]() -> void { ::uForeignPool __foreignPool; iOSSystemFont::AddFontPath(::uObjC::UnoString(name), ::uObjC::UnoString(path)); }();
        				NSString* family = [descriptor objectForKey:UIFontDescriptorFamilyAttribute];
        				[&]() -> void { ::uForeignPool __foreignPool; iOSSystemFont::AddFamily(::uObjC::UnoString(family)); }();
        			}
        		}
        	}
        }
    }
    
}

// private static void EnsureFontPathsAdded() [static]
void iOSSystemFont::EnsureFontPathsAdded()
{
    iOSSystemFont_typeof()->Init();

    if (iOSSystemFont::_fontPaths_ == NULL)
    {
        iOSSystemFont::_families_ = ((::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::TYPES[1/*Uno.Collections.HashSet<string>*/]));
        iOSSystemFont::_fontPaths_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[2/*Uno.Collections.Dictionary<string, string>*/]));
        iOSSystemFont::AddFontPaths();
    }
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> Get(string family, Fuse.SystemFont.Style style, Fuse.SystemFont.Weight weight) [static]
::g::Uno::Collections::List* iOSSystemFont::Get(uString* family, int32_t style, int32_t weight)
{
    uStackFrame __("Fuse.Internal.iOSSystemFont", "Get(string,Fuse.SystemFont.Style,Fuse.SystemFont.Weight)");
    iOSSystemFont_typeof()->Init();
    int32_t weightIndex = ::g::Uno::Math::Clamp8(weight, 0, uPtr(iOSSystemFont::_weightNames_)->Length() - 1);
    ::g::ObjC::Object* descriptor = iOSSystemFont::GetMatchingFontDescriptor(family, style == 1, uPtr(iOSSystemFont::_weightNames_)->Strong<uString*>(weightIndex));

    if (descriptor == NULL)
        return iOSSystemFont::Default();
    else
    {
        uArray* descriptors = iOSSystemFont::GetFallbackUIFontDescriptors(descriptor);
        uArray* fontNames = iOSSystemFont::GetFontNamesFromUIFontDescriptors(descriptors);
        return iOSSystemFont::GetDescriptorsFromFontNames(fontNames);
    }
}

// private static string GetDefaultFontFamily() [static]
uString* iOSSystemFont::GetDefaultFontFamily()
{
    iOSSystemFont_typeof()->Init();
    @autoreleasepool
    {
        return ::uObjC::UnoString([] () -> ::NSString*
        {
            return [UIFont systemFontOfSize: 12].familyName;
        } ());
        
    }
    
}

// private static ObjC.Object GetDefaultUIFontDescriptor() [static]
::g::ObjC::Object* iOSSystemFont::GetDefaultUIFontDescriptor()
{
    iOSSystemFont_typeof()->Init();
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            // We can't use UIFontDescriptor
            // preferredFontDescriptorWithTextStyle: here because
            // it gives family names starting with ".Apple" that
            // are not included in the plists -- they're probably
            // special-cased somewhere internally.
            NSDictionary* attributes
            	= @{ UIFontDescriptorFamilyAttribute: [UIFont systemFontOfSize: 12].familyName };
            return [UIFontDescriptor fontDescriptorWithFontAttributes: attributes];
        } ());
        
    }
    
}

// private static string GetDescriptorFontName(ObjC.Object descriptor) [static]
uString* iOSSystemFont::GetDescriptorFontName(::g::ObjC::Object* descriptor)
{
    iOSSystemFont_typeof()->Init();
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::id descriptor) -> ::NSString*
        {
            return ((UIFontDescriptor*)descriptor).fontAttributes[UIFontDescriptorNameAttribute];
        } (::g::ObjC::Object::GetHandle(descriptor)));
        
    }
    
}

// private static ObjC.Object[] GetDescriptors(string fileName) [static]
uArray* iOSSystemFont::GetDescriptors(uString* fileName)
{
    iOSSystemFont_typeof()->Init();
    @autoreleasepool
    {
        return uCast<uArray*>(([] (::NSString* fileName) -> id<UnoArray>
        {
            NSURL* url = [NSURL fileURLWithPath:fileName];
            CFArrayRef arr = CTFontManagerCreateFontDescriptorsFromURL((__bridge CFURLRef)url);
            NSArray* descriptors = (__bridge NSArray*)arr;
            
            id<UnoArray> result = [&]() -> id<UnoArray> { ::uForeignPool __foreignPool; return [::StrongUnoArray strongUnoArrayWithUnoArray: uArray::New(::g::ObjC::Object_typeof()->Array(), (int32_t)[descriptors count]) getAt: ^ id (::uArray* arr, int i) { return (::id)::g::ObjC::Object::GetHandle(arr->Strong< ::g::ObjC::Object*>(i)); } setAt: ^ (::uArray* arr, int i, id obj) { arr->Strong< ::g::ObjC::Object*>(i) = ::g::ObjC::Object::Create((::id)obj); }]; }();
            {
            	int i = 0;
            	for (UIFontDescriptor* descriptor in descriptors)
            	{
            		uCast<uArray*>((result).unoArray, ::g::ObjC::Object_typeof()->Array())->Strong< ::g::ObjC::Object*>(i) = ::g::ObjC::Object::Create(descriptor);
            		++i;
            	}
            }
            
            CFRelease(arr);
            
            return result;
        } (::uObjC::NativeString(fileName))).unoArray, ::g::ObjC::Object_typeof()->Array());
        
    }
    
}

// private static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> GetDescriptorsFromFontNames(string[] fontNames) [static]
::g::Uno::Collections::List* iOSSystemFont::GetDescriptorsFromFontNames(uArray* fontNames)
{
    uStackFrame __("Fuse.Internal.iOSSystemFont", "GetDescriptorsFromFontNames(string[])");
    iOSSystemFont_typeof()->Init();
    uArray* array1;
    int32_t index2;
    int32_t length3;
    bool ret10;
    ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[3/*Uno.Collections.List<Fuse.Internal.FontFaceDescriptor>*/]);

    for (array1 = fontNames, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        uString* fontName = uPtr(array1)->Strong<uString*>(index2);
        uString* path = NULL;

        if ((::g::Uno::String::op_Inequality(fontName, NULL) && (::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(iOSSystemFont::FontPaths()), fontName, (void**)(&path), &ret10), ret10)) && ::g::Uno::IO::File::Exists(path))
            ::g::Uno::Collections::List__Add_fn(uPtr(result), ::g::Fuse::Internal::FontFaceDescriptor::New2(::g::Fuse::Resources::SystemFileSource::New1(path), iOSSystemFont::GetFontNameStyles(fontName)));
    }

    return result;
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> GetFallback(Uno.UX.FileSource file) [static]
::g::Uno::Collections::List* iOSSystemFont::GetFallback(::g::Uno::UX::FileSource* file)
{
    uStackFrame __("Fuse.Internal.iOSSystemFont", "GetFallback(Uno.UX.FileSource)");
    iOSSystemFont_typeof()->Init();
    ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[3/*Uno.Collections.List<Fuse.Internal.FontFaceDescriptor>*/]);
    ::g::Uno::Collections::List__Add_fn(result, ::g::Fuse::Internal::FontFaceDescriptor::New1(file, 0));
    result->AddRange((uObject*)iOSSystemFont::Get(NULL, 0, 3));
    return result;
}

// private static ObjC.Object[] GetFallbackUIFontDescriptors(ObjC.Object rawDescriptor) [static]
uArray* iOSSystemFont::GetFallbackUIFontDescriptors(::g::ObjC::Object* rawDescriptor)
{
    iOSSystemFont_typeof()->Init();
    @autoreleasepool
    {
        return uCast<uArray*>(([] (::id rawDescriptor) -> id<UnoArray>
        {
            UIFontDescriptor* descriptor = (UIFontDescriptor*)rawDescriptor;
            
            NSUserDefaults* userDefaults = [NSUserDefaults standardUserDefaults];
            NSArray* languages = [userDefaults stringArrayForKey: @"AppleLanguages"];
            
            CTFontRef font = CTFontCreateWithFontDescriptor((__bridge CTFontDescriptorRef)descriptor, 12.0, 0);
            CFArrayRef cascadeList = font
            	? CTFontCopyDefaultCascadeListForLanguages(font, (CFArrayRef)languages)
            	: nullptr;
            
            int count = cascadeList ? (int)CFArrayGetCount(cascadeList) : 0;
            id<UnoArray> result = [&]() -> id<UnoArray> { ::uForeignPool __foreignPool; return [::StrongUnoArray strongUnoArrayWithUnoArray: uArray::New(::g::ObjC::Object_typeof()->Array(), count + 1) getAt: ^ id (::uArray* arr, int i) { return (::id)::g::ObjC::Object::GetHandle(arr->Strong< ::g::ObjC::Object*>(i)); } setAt: ^ (::uArray* arr, int i, id obj) { arr->Strong< ::g::ObjC::Object*>(i) = ::g::ObjC::Object::Create((::id)obj); }]; }();
            // Includes the argument descriptor for convenience
            uCast<uArray*>((result).unoArray, ::g::ObjC::Object_typeof()->Array())->Strong< ::g::ObjC::Object*>(0) = ::g::ObjC::Object::Create(descriptor);
            for (int i = 0; i < count; ++i)
            {
            	CTFontDescriptorRef cascadeDescriptor
            		= (CTFontDescriptorRef)CFArrayGetValueAtIndex(cascadeList, (CFIndex)i);
            	UIFontDescriptor* uiCascadeDescriptor = (__bridge UIFontDescriptor*)cascadeDescriptor;
            	uCast<uArray*>((result).unoArray, ::g::ObjC::Object_typeof()->Array())->Strong< ::g::ObjC::Object*>(i + 1) = ::g::ObjC::Object::Create(uiCascadeDescriptor);
            }
            
            CFRelease(cascadeList);
            CFRelease(font);
            return result;
        } (::g::ObjC::Object::GetHandle(rawDescriptor))).unoArray, ::g::ObjC::Object_typeof()->Array());
        
    }
    
}

// private static string[] GetFontNamesFromUIFontDescriptors(ObjC.Object[] descriptors) [static]
uArray* iOSSystemFont::GetFontNamesFromUIFontDescriptors(uArray* descriptors)
{
    uStackFrame __("Fuse.Internal.iOSSystemFont", "GetFontNamesFromUIFontDescriptors(ObjC.Object[])");
    iOSSystemFont_typeof()->Init();
    uArray* result = uArray::New(::TYPES[0/*string[]*/], uPtr(descriptors)->Length());

    for (int32_t i = 0; i < descriptors->Length(); ++i)
        uPtr(result)->Strong<uString*>(i) = iOSSystemFont::GetDescriptorFontName(uPtr(descriptors)->Strong< ::g::ObjC::Object*>(i));

    return result;
}

// private static Uno.Collections.IEnumerable<string> GetFontNameStyles(string fontName) [static]
uObject* iOSSystemFont::GetFontNameStyles(uString* fontName)
{
    uStackFrame __("Fuse.Internal.iOSSystemFont", "GetFontNameStyles(string)");
    iOSSystemFont_typeof()->Init();
    ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<string>*/]);
    int32_t dash = ::g::Uno::String::LastIndexOf(uPtr(fontName), '-');

    if (dash < 0)
        return (uObject*)result;

    int32_t start = dash + 1;

    for (int32_t i = start; i <= fontName->Length(); ++i)
        if (((i == uPtr(fontName)->Length()) || ::g::Uno::Char::IsUpper(uPtr(fontName)->Item(i))) || ::g::Uno::Char::IsDigit(uPtr(fontName)->Item(i)))
        {
            if (i > (start + 1))
            {
                uString* substr = ::g::Uno::String::Substring1(uPtr(fontName), start, i - start);

                if (::g::Uno::String::op_Inequality(substr, ::STRINGS[9/*"Roman"*/]))
                    ::g::Uno::Collections::List__Add_fn(uPtr(result), substr);
            }

            start = i;
        }

    return (uObject*)result;
}

// private static ObjC.Object GetMatchingFontDescriptor(string family, bool isItalic, string weight) [static]
::g::ObjC::Object* iOSSystemFont::GetMatchingFontDescriptor(uString* family, bool isItalic, uString* weight)
{
    iOSSystemFont_typeof()->Init();
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::NSString* family, bool isItalic, ::NSString* weight) -> ::id
        {
            NSMutableDictionary* attributes = [@{ UIFontDescriptorFaceAttribute: weight } mutableCopy];
            if (family != nil)
            {
            	[attributes setObject:family forKey:UIFontDescriptorFamilyAttribute];
            }
            
            NSSet* mandatory = [NSSet setWithArray:attributes.allKeys];
            UIFontDescriptor* descriptor = [UIFontDescriptor fontDescriptorWithFontAttributes: attributes];
            descriptor = [descriptor fontDescriptorWithSymbolicTraits:
            	[descriptor symbolicTraits] | (isItalic ? UIFontDescriptorTraitItalic : 0)];
            
            return descriptor;
        } (::uObjC::NativeString(family), isItalic, ::uObjC::NativeString(weight)));
        
    }
    
}

// public static ObjC.Object GetMatchingUIFontDescriptor(string fileName, int index, Uno.Predicate<string> stylePredicate) [static]
::g::ObjC::Object* iOSSystemFont::GetMatchingUIFontDescriptor(uString* fileName, int32_t index, uDelegate* stylePredicate)
{
    uStackFrame __("Fuse.Internal.iOSSystemFont", "GetMatchingUIFontDescriptor(string,int,Uno.Predicate<string>)");
    iOSSystemFont_typeof()->Init();
    bool ret11;
    uArray* descriptors = iOSSystemFont::GetDescriptors(fileName);

    if (index >= 0)
        return uPtr(descriptors)->Strong< ::g::ObjC::Object*>(index);

    for (int32_t index5 = 0, length6 = uPtr(descriptors)->Length(); index5 < length6; ++index5)
    {
        ::g::ObjC::Object* descriptor = uPtr(descriptors)->Strong< ::g::ObjC::Object*>(index5);

        if ((uPtr(stylePredicate)->Invoke(&ret11, 1, (uString*)iOSSystemFont::GetStyleName(descriptor)), ret11))
            return descriptor;
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::STRINGS[10/*"iOSSystemFo...*/], fileName)));
}

// private static string GetPostscriptName(ObjC.Object descriptor) [static]
uString* iOSSystemFont::GetPostscriptName(::g::ObjC::Object* descriptor)
{
    iOSSystemFont_typeof()->Init();
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::id descriptor) -> ::NSString*
        {
            return [(UIFontDescriptor*)descriptor postscriptName];
        } (::g::ObjC::Object::GetHandle(descriptor)));
        
    }
    
}

// private static string GetStyleName(ObjC.Object descriptor) [static]
uString* iOSSystemFont::GetStyleName(::g::ObjC::Object* descriptor)
{
    uStackFrame __("Fuse.Internal.iOSSystemFont", "GetStyleName(ObjC.Object)");
    iOSSystemFont_typeof()->Init();
    uString* psname = iOSSystemFont::GetPostscriptName(descriptor);
    int32_t i = ::g::Uno::String::IndexOf(uPtr(psname), '-');
    return (i < 0) ? ::STRINGS[11/*""*/] : (uString*)::g::Uno::String::Substring(psname, i + 1);
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> get_Default() [static]
::g::Uno::Collections::List* iOSSystemFont::Default()
{
    uStackFrame __("Fuse.Internal.iOSSystemFont", "get_Default()");
    iOSSystemFont_typeof()->Init();
    ::g::ObjC::Object* descriptor = iOSSystemFont::GetDefaultUIFontDescriptor();
    uArray* descriptors = iOSSystemFont::GetFallbackUIFontDescriptors(descriptor);
    uArray* fontNames = iOSSystemFont::GetFontNamesFromUIFontDescriptors(descriptors);
    return iOSSystemFont::GetDescriptorsFromFontNames(fontNames);
}

// internal static string get_DefaultFontName() [static]
uString* iOSSystemFont::DefaultFontName()
{
    iOSSystemFont_typeof()->Init();
    return iOSSystemFont::GetDefaultFontFamily();
}

// public static Uno.Collections.HashSet<string> get_Families() [static]
::g::Uno::Collections::HashSet* iOSSystemFont::Families()
{
    iOSSystemFont_typeof()->Init();
    iOSSystemFont::EnsureFontPathsAdded();
    return iOSSystemFont::_families_;
}

// private static Uno.Collections.Dictionary<string, string> get_FontPaths() [static]
::g::Uno::Collections::Dictionary* iOSSystemFont::FontPaths()
{
    iOSSystemFont_typeof()->Init();
    iOSSystemFont::EnsureFontPathsAdded();
    return iOSSystemFont::_fontPaths_;
}
// }

}}} // ::g::Fuse::Internal
