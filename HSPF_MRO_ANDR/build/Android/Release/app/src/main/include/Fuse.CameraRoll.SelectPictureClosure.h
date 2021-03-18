// This file was generated based on /usr/local/share/uno/Packages/Fuse.CameraRoll/1.12.0/Android/AndroidCameraRoll.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace CameraRoll{struct SelectPictureClosure;}}}
namespace g{namespace Fuse{namespace ImageTools{struct Image;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace CameraRoll{

// internal sealed extern class SelectPictureClosure
// {
uType* SelectPictureClosure_typeof();
void SelectPictureClosure__ctor__fn(SelectPictureClosure* __this, ::g::Uno::Threading::Promise* p);
void SelectPictureClosure__HandleIntent_fn(SelectPictureClosure* __this, int32_t* resultCode, ::g::Java::Object* intent, uDelegate* onComplete, uDelegate* onFail);
void SelectPictureClosure__New1_fn(::g::Uno::Threading::Promise* p, SelectPictureClosure** __retval);
void SelectPictureClosure__OnActivityResult_fn(SelectPictureClosure* __this, int32_t* resultCode, ::g::Java::Object* intent, uObject* info);
void SelectPictureClosure__OnComplete_fn(SelectPictureClosure* __this, uString* path);
void SelectPictureClosure__OnFail_fn(SelectPictureClosure* __this, uString* reason);

struct SelectPictureClosure : uObject
{
    uStrong< ::g::Uno::Threading::Promise*> _p;

    void ctor_(::g::Uno::Threading::Promise* p);
    void HandleIntent(int32_t resultCode, ::g::Java::Object* intent, uDelegate* onComplete, uDelegate* onFail);
    void OnActivityResult(int32_t resultCode, ::g::Java::Object* intent, uObject* info);
    void OnComplete(uString* path);
    void OnFail(uString* reason);
    static SelectPictureClosure* New1(::g::Uno::Threading::Promise* p);
};
// }

}}} // ::g::Fuse::CameraRoll
