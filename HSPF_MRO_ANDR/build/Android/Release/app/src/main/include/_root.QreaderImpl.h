// This file was generated based on Projects/Barcode/Qreader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}
namespace g{struct QreaderImpl;}

namespace g{

// public sealed class QreaderImpl
// {
uType* QreaderImpl_typeof();
void QreaderImpl__Cancelled_fn();
void QreaderImpl__get_FutureResult_fn(::g::Uno::Threading::Promise** __retval);
void QreaderImpl__set_FutureResult_fn(::g::Uno::Threading::Promise* value);
void QreaderImpl__Init_fn(::g::Java::Object** __retval);
void QreaderImpl__get_InProgress_fn(bool* __retval);
void QreaderImpl__set_InProgress_fn(bool* value);
void QreaderImpl__OnRecieved_fn(int32_t* requestCode, int32_t* resultCode, ::g::Java::Object* data, bool* __retval);
void QreaderImpl__Picked_fn(uString* result);
void QreaderImpl__Scan_fn(::g::Uno::Threading::Future1** __retval);
void QreaderImpl__ScannerImpl_fn();

struct QreaderImpl : uObject
{
    static int32_t RC_BARCODE_CAPTURE_;
    static int32_t& RC_BARCODE_CAPTURE() { return QreaderImpl_typeof()->Init(), RC_BARCODE_CAPTURE_; }
    static uSStrong< ::g::Java::Object*> _intentListener_;
    static uSStrong< ::g::Java::Object*>& _intentListener() { return QreaderImpl_typeof()->Init(), _intentListener_; }
    static uSStrong< ::g::Uno::Threading::Promise*> _FutureResult_;
    static uSStrong< ::g::Uno::Threading::Promise*>& _FutureResult() { return QreaderImpl_typeof()->Init(), _FutureResult_; }
    static bool _InProgress_;
    static bool& _InProgress() { return QreaderImpl_typeof()->Init(), _InProgress_; }

    static void Cancelled();
    static ::g::Java::Object* Init();
    static bool OnRecieved(int32_t requestCode, int32_t resultCode, ::g::Java::Object* data);
    static void Picked(uString* result);
    static ::g::Uno::Threading::Future1* Scan();
    static void ScannerImpl();
    static ::g::Uno::Threading::Promise* FutureResult();
    static void FutureResult(::g::Uno::Threading::Promise* value);
    static bool InProgress();
    static void InProgress(bool value);
};
// }

} // ::g
