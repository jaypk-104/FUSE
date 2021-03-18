// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Apple/AudioHelper.h>
#include <Fuse.Audio.SoundPlayer.h>
#include <Uno.Byte.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[1];

namespace g{
namespace Fuse{
namespace Audio{

// /usr/local/share/uno/Packages/Fuse.Audio/1.12.0/Apple/AppleAudio.uno
// --------------------------------------------------------------------

// internal sealed extern class SoundPlayer
// {
static void SoundPlayer_build(uType* type)
{
    ::STRINGS[0] = uString::Const("data/");
}

uType* SoundPlayer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(SoundPlayer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Audio.SoundPlayer", options);
    type->fp_build_ = SoundPlayer_build;
    type->fp_ctor_ = (void*)SoundPlayer__New1_fn;
    return type;
}

// public generated SoundPlayer()
void SoundPlayer__ctor__fn(SoundPlayer* __this)
{
    __this->ctor_();
}

// public generated SoundPlayer New()
void SoundPlayer__New1_fn(SoundPlayer** __retval)
{
    *__retval = SoundPlayer::New1();
}

// public static void PlaySoundFromBundle(Uno.UX.BundleFileSource file)
void SoundPlayer__PlaySoundFromBundle_fn(::g::Uno::UX::BundleFileSource* file)
{
    SoundPlayer::PlaySoundFromBundle(file);
}

// public static void PlaySoundFromByteArray(byte[] byteArray)
void SoundPlayer__PlaySoundFromByteArray_fn(uArray* byteArray)
{
    SoundPlayer::PlaySoundFromByteArray(byteArray);
}

// private static void PlaySoundFromUrl(string url)
void SoundPlayer__PlaySoundFromUrl_fn(uString* url)
{
    SoundPlayer::PlaySoundFromUrl(url);
}

// public generated SoundPlayer() [instance]
void SoundPlayer::ctor_()
{
}

// public generated SoundPlayer New() [static]
SoundPlayer* SoundPlayer::New1()
{
    SoundPlayer* obj1 = (SoundPlayer*)uNew(SoundPlayer_typeof());
    obj1->ctor_();
    return obj1;
}

// public static void PlaySoundFromBundle(Uno.UX.BundleFileSource file) [static]
void SoundPlayer::PlaySoundFromBundle(::g::Uno::UX::BundleFileSource* file)
{
    uStackFrame __("Fuse.Audio.SoundPlayer", "PlaySoundFromBundle(Uno.UX.BundleFileSource)");
    SoundPlayer::PlaySoundFromUrl(::g::Uno::String::op_Addition2(::STRINGS[0/*"data/"*/], uPtr(uPtr(file)->BundleFile)->BundlePath()));
}

// public static void PlaySoundFromByteArray(byte[] byteArray) [static]
void SoundPlayer::PlaySoundFromByteArray(uArray* byteArray)
{
    uArray* arr = byteArray;
    NSData* data = [NSData dataWithBytes:arr->Ptr() length:arr->Length()];
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
    	[[AudioHelper getInstance] playSound:data];
    });
}

// private static void PlaySoundFromUrl(string url) [static]
void SoundPlayer::PlaySoundFromUrl(uString* url)
{
    @autoreleasepool
    {
        [] (::NSString* url) -> void
        {
            NSURL* uri = [NSURL fileURLWithPath:[[NSBundle bundleForClass:[StrongUnoObject class]] pathForResource:url ofType:nil]];
            dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
            	[[AudioHelper getInstance] playSoundFromFile:uri];
            });
        } (::uObjC::NativeString(url));
        
    }
    
}
// }

}}} // ::g::Fuse::Audio
