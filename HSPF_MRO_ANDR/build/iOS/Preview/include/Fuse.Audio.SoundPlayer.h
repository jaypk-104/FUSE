// This file was generated based on /usr/local/share/uno/Packages/Fuse.Audio/1.12.0/Apple/AppleAudio.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Audio{struct SoundPlayer;}}}
namespace g{namespace Uno{namespace UX{struct BundleFileSource;}}}

namespace g{
namespace Fuse{
namespace Audio{

// internal sealed extern class SoundPlayer
// {
uType* SoundPlayer_typeof();
void SoundPlayer__ctor__fn(SoundPlayer* __this);
void SoundPlayer__New1_fn(SoundPlayer** __retval);
void SoundPlayer__PlaySoundFromBundle_fn(::g::Uno::UX::BundleFileSource* file);
void SoundPlayer__PlaySoundFromByteArray_fn(uArray* byteArray);
void SoundPlayer__PlaySoundFromUrl_fn(uString* url);

struct SoundPlayer : uObject
{
    void ctor_();
    static SoundPlayer* New1();
    static void PlaySoundFromBundle(::g::Uno::UX::BundleFileSource* file);
    static void PlaySoundFromByteArray(uArray* byteArray);
    static void PlaySoundFromUrl(uString* url);
};
// }

}}} // ::g::Fuse::Audio
