// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/Barcode/Qreader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.QreaderImpl.h>
#include <QRCodeReader.h>
#include <QRCodeReaderViewController.h>
#include <QreaderTask.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno.Threading.Future1-1.h>
#include <Uno.Threading.Promise-1.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[1];
static uType* TYPES[1];

namespace g{

// public sealed class QreaderImpl
// {
// static generated QreaderImpl()
static void QreaderImpl__cctor__fn(uType* __type)
{
    QreaderImpl::RC_BARCODE_CAPTURE_ = 9001;
}

static void QreaderImpl_build(uType* type)
{
    ::STRINGS[0] = uString::Const("User cancelled the qr scanner");
    ::TYPES[0] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Int_typeof(), (uintptr_t)&QreaderImpl::RC_BARCODE_CAPTURE_, uFieldFlagsStatic,
        ::TYPES[0/*Uno.Threading.Promise<string>*/], (uintptr_t)&QreaderImpl::_FutureResult_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&QreaderImpl::_InProgress_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("Cancelled", NULL, (void*)QreaderImpl__Cancelled_fn, 0, true, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)QreaderImpl__New1_fn, 0, true, type, 0),
        new uFunction("Picked", NULL, (void*)QreaderImpl__Picked_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Scan", NULL, (void*)QreaderImpl__Scan_fn, 0, true, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), 0));
}

uType* QreaderImpl_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(QreaderImpl);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("QreaderImpl", options);
    type->fp_build_ = QreaderImpl_build;
    type->fp_ctor_ = (void*)QreaderImpl__New1_fn;
    type->fp_cctor_ = QreaderImpl__cctor__fn;
    return type;
}

// public generated QreaderImpl()
void QreaderImpl__ctor__fn(QreaderImpl* __this)
{
    __this->ctor_();
}

// public static void Cancelled()
void QreaderImpl__Cancelled_fn()
{
    QreaderImpl::Cancelled();
}

// private static generated Uno.Threading.Promise<string> get_FutureResult()
void QreaderImpl__get_FutureResult_fn(::g::Uno::Threading::Promise** __retval)
{
    *__retval = QreaderImpl::FutureResult();
}

// private static generated void set_FutureResult(Uno.Threading.Promise<string> value)
void QreaderImpl__set_FutureResult_fn(::g::Uno::Threading::Promise* value)
{
    QreaderImpl::FutureResult(value);
}

// private static generated bool get_InProgress()
void QreaderImpl__get_InProgress_fn(bool* __retval)
{
    *__retval = QreaderImpl::InProgress();
}

// private static generated void set_InProgress(bool value)
void QreaderImpl__set_InProgress_fn(bool* value)
{
    QreaderImpl::InProgress(*value);
}

// public generated QreaderImpl New()
void QreaderImpl__New1_fn(QreaderImpl** __retval)
{
    *__retval = QreaderImpl::New1();
}

// public static void Picked(string result)
void QreaderImpl__Picked_fn(uString* result)
{
    QreaderImpl::Picked(result);
}

// public static Uno.Threading.Future<string> Scan()
void QreaderImpl__Scan_fn(::g::Uno::Threading::Future1** __retval)
{
    *__retval = QreaderImpl::Scan();
}

// private static extern void ScannerImpl()
void QreaderImpl__ScannerImpl_fn()
{
    QreaderImpl::ScannerImpl();
}

int32_t QreaderImpl::RC_BARCODE_CAPTURE_;
uSStrong< ::g::Uno::Threading::Promise*> QreaderImpl::_FutureResult_;
bool QreaderImpl::_InProgress_;

// public generated QreaderImpl() [instance]
void QreaderImpl::ctor_()
{
}

// public static void Cancelled() [static]
void QreaderImpl::Cancelled()
{
    uStackFrame __("QreaderImpl", "Cancelled()");
    QreaderImpl_typeof()->Init();
    QreaderImpl::InProgress(false);
    uPtr(QreaderImpl::FutureResult())->Reject(::g::Uno::Exception::New2(::STRINGS[0/*"User cancel...*/]));
}

// public generated QreaderImpl New() [static]
QreaderImpl* QreaderImpl::New1()
{
    QreaderImpl* obj1 = (QreaderImpl*)uNew(QreaderImpl_typeof());
    obj1->ctor_();
    return obj1;
}

// public static void Picked(string result) [static]
void QreaderImpl::Picked(uString* result)
{
    uStackFrame __("QreaderImpl", "Picked(string)");
    QreaderImpl_typeof()->Init();

    if (QreaderImpl::InProgress())
        ::g::Uno::Threading::Promise__Resolve_fn(uPtr(QreaderImpl::FutureResult()), result);

    QreaderImpl::InProgress(false);
}

// public static Uno.Threading.Future<string> Scan() [static]
::g::Uno::Threading::Future1* QreaderImpl::Scan()
{
    uStackFrame __("QreaderImpl", "Scan()");
    QreaderImpl_typeof()->Init();

    if (QreaderImpl::InProgress())
        return NULL;

    QreaderImpl::InProgress(true);
    QreaderImpl::FutureResult((::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[0/*Uno.Threading.Promise<string>*/]));
    QreaderImpl::ScannerImpl();
    return QreaderImpl::FutureResult();
}

// private static extern void ScannerImpl() [static]
void QreaderImpl::ScannerImpl()
{
    QreaderImpl_typeof()->Init();
    @autoreleasepool
    {
        QreaderTask *task = [[QreaderTask alloc] init];
        
        static QRCodeReaderViewController *vc = nil;
        static dispatch_once_t onceToken;
        
        UIViewController *uivc = [UIApplication sharedApplication].keyWindow.rootViewController;
        [task setUivc:uivc];
        
        dispatch_once(&onceToken, ^{
        		QRCodeReader *reader = [QRCodeReader readerWithMetadataObjectTypes:@[AVMetadataObjectTypeQRCode]];
        		vc                   = [QRCodeReaderViewController readerWithCancelButtonTitle:@"Cancel" codeReader:reader];
        		vc.modalPresentationStyle = UIModalPresentationFormSheet;
        });
        
        vc.delegate = task;
        
        [uivc
        	presentViewController:vc
        	animated:YES
        	completion:nil];
    }
    
}

// private static generated Uno.Threading.Promise<string> get_FutureResult() [static]
::g::Uno::Threading::Promise* QreaderImpl::FutureResult()
{
    QreaderImpl_typeof()->Init();
    return QreaderImpl::_FutureResult_;
}

// private static generated void set_FutureResult(Uno.Threading.Promise<string> value) [static]
void QreaderImpl::FutureResult(::g::Uno::Threading::Promise* value)
{
    QreaderImpl_typeof()->Init();
    QreaderImpl::_FutureResult_ = value;
}

// private static generated bool get_InProgress() [static]
bool QreaderImpl::InProgress()
{
    QreaderImpl_typeof()->Init();
    return QreaderImpl::_InProgress_;
}

// private static generated void set_InProgress(bool value) [static]
void QreaderImpl::InProgress(bool value)
{
    QreaderImpl_typeof()->Init();
    QreaderImpl::_InProgress_ = value;
}
// }

} // ::g
