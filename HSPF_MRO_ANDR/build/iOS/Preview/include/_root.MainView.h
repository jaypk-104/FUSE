// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
#include <Fuse.IProperties.h>
#include <Fuse.IRootVisualProvider.h>
namespace g{namespace Fuse{namespace Alerts{struct NativeAlerts;}}}
namespace g{namespace Fuse{namespace BackgroundDownload{struct BackgroundDownloadModule;}}}
namespace g{namespace Fuse{namespace Camera{struct Camera;}}}
namespace g{namespace Fuse{namespace CameraRoll{struct CameraRoll;}}}
namespace g{namespace Fuse{namespace Drawing{struct BrushConverter;}}}
namespace g{namespace Fuse{namespace FileSystem{struct FileSystemModule;}}}
namespace g{namespace Fuse{namespace ImageTools{struct ImageTools;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct DiagnosticsImplModule;}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Http;}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct InterApp;}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct TimerModule;}}}}
namespace g{namespace Fuse{namespace Storage{struct StorageModule;}}}
namespace g{namespace Fuse{namespace Testing{struct UnoTestingHelper;}}}
namespace g{namespace Fuse{namespace Triggers{struct BusyTaskModule;}}}
namespace g{namespace Fuse{namespace Vibration{struct VibrationModule;}}}
namespace g{namespace Fuse{namespace WebSocket{struct WebSocketClientModule;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace FuseJS{struct Base64;}}
namespace g{namespace FuseJS{struct Bundle;}}
namespace g{namespace FuseJS{struct Environment;}}
namespace g{namespace FuseJS{struct FileReaderImpl;}}
namespace g{namespace FuseJS{struct Globals;}}
namespace g{namespace FuseJS{struct Lifecycle;}}
namespace g{namespace FuseJS{struct UserEvents;}}
namespace g{namespace Polyfills{namespace Window{struct WindowModule;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct deviceToast;}
namespace g{struct MainView;}
namespace g{struct Qreader;}

namespace g{

// public partial sealed class MainView
// {
::g::Fuse::AppBase_type* MainView_typeof();
void MainView__ctor_4_fn(MainView* __this);
void MainView__InitializeUX_fn(MainView* __this);
void MainView__New2_fn(MainView** __retval);

struct MainView : ::g::Fuse::App
{
    uStrong< ::g::Fuse::Navigation::Router*> router;
    static uSStrong< ::g::Fuse::Font*> AGOTHIC14_;
    static uSStrong< ::g::Fuse::Font*>& AGOTHIC14() { return MainView_typeof()->Init(), AGOTHIC14_; }
    static uSStrong< ::g::Fuse::Font*> JEJU_;
    static uSStrong< ::g::Fuse::Font*>& JEJU() { return MainView_typeof()->Init(), JEJU_; }
    static uSStrong< ::g::Fuse::Font*> ZhongF_;
    static uSStrong< ::g::Fuse::Font*>& ZhongF() { return MainView_typeof()->Init(), ZhongF_; }
    static uSStrong< ::g::Fuse::Font*> SEOUL_;
    static uSStrong< ::g::Fuse::Font*>& SEOUL() { return MainView_typeof()->Init(), SEOUL_; }
    static uSStrong< ::g::Fuse::Font*> NOTO_M_;
    static uSStrong< ::g::Fuse::Font*>& NOTO_M() { return MainView_typeof()->Init(), NOTO_M_; }
    static uSStrong< ::g::Fuse::Font*> NOTO_R_;
    static uSStrong< ::g::Fuse::Font*>& NOTO_R() { return MainView_typeof()->Init(), NOTO_R_; }
    static uSStrong< ::g::Fuse::Font*> NOTO_KR_L_;
    static uSStrong< ::g::Fuse::Font*>& NOTO_KR_L() { return MainView_typeof()->Init(), NOTO_KR_L_; }
    static uSStrong< ::g::Fuse::Font*> NOTO_KR_B_;
    static uSStrong< ::g::Fuse::Font*>& NOTO_KR_B() { return MainView_typeof()->Init(), NOTO_KR_B_; }
    static uSStrong< ::g::Fuse::Font*> NOTO_KR_R_;
    static uSStrong< ::g::Fuse::Font*>& NOTO_KR_R() { return MainView_typeof()->Init(), NOTO_KR_R_; }
    static uSStrong< ::g::Fuse::Font*> NOTO_KR_T_;
    static uSStrong< ::g::Fuse::Font*>& NOTO_KR_T() { return MainView_typeof()->Init(), NOTO_KR_T_; }
    static uSStrong< ::g::Fuse::Font*> NOTO_KR_BK_;
    static uSStrong< ::g::Fuse::Font*>& NOTO_KR_BK() { return MainView_typeof()->Init(), NOTO_KR_BK_; }
    static uSStrong< ::g::Fuse::Font*> FontAwesome_;
    static uSStrong< ::g::Fuse::Font*>& FontAwesome() { return MainView_typeof()->Init(), FontAwesome_; }
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return MainView_typeof()->Init(), __g_static_nametable1_; }
    uStrong< ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule*> FuseReactiveFuseJSDiagnosticsImplModule;
    uStrong< ::g::Fuse::Reactive::FuseJS::Http*> FuseReactiveFuseJSHttp;
    uStrong< ::g::Fuse::Reactive::FuseJS::TimerModule*> FuseReactiveFuseJSTimerModule;
    uStrong< ::g::Fuse::Reactive::FuseJS::InterApp*> FuseReactiveFuseJSInterApp;
    uStrong< ::g::Fuse::Drawing::BrushConverter*> FuseDrawingBrushConverter;
    uStrong< ::g::Fuse::Triggers::BusyTaskModule*> FuseTriggersBusyTaskModule;
    uStrong< ::g::Fuse::Vibration::VibrationModule*> FuseVibrationVibrationModule;
    uStrong< ::g::Fuse::Testing::UnoTestingHelper*> FuseTestingUnoTestingHelper;
    uStrong< ::g::Fuse::FileSystem::FileSystemModule*> FuseFileSystemFileSystemModule;
    uStrong< ::g::Fuse::Storage::StorageModule*> FuseStorageStorageModule;
    uStrong< ::g::Fuse::WebSocket::WebSocketClientModule*> FuseWebSocketWebSocketClientModule;
    uStrong< ::g::Fuse::ImageTools::ImageTools*> FuseImageToolsImageTools;
    uStrong< ::g::Fuse::Camera::Camera*> FuseCameraCamera;
    uStrong< ::g::Fuse::CameraRoll::CameraRoll*> FuseCameraRollCameraRoll;
    uStrong< ::g::Fuse::Alerts::NativeAlerts*> FuseAlertsNativeAlerts;
    uStrong< ::g::Fuse::BackgroundDownload::BackgroundDownloadModule*> FuseBackgroundDownloadBackgroundDownloadModule;
    uStrong< ::g::Polyfills::Window::WindowModule*> PolyfillsWindowWindowModule;
    uStrong< ::g::FuseJS::Globals*> FuseJSGlobals;
    uStrong< ::g::FuseJS::Lifecycle*> FuseJSLifecycle;
    uStrong< ::g::FuseJS::Environment*> FuseJSEnvironment;
    uStrong< ::g::FuseJS::Base64*> FuseJSBase64;
    uStrong< ::g::FuseJS::Bundle*> FuseJSBundle;
    uStrong< ::g::FuseJS::FileReaderImpl*> FuseJSFileReaderImpl;
    uStrong< ::g::FuseJS::UserEvents*> FuseJSUserEvents;
    uStrong< ::g::Qreader*> Qreader;
    uStrong< ::g::deviceToast*> deviceToast;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MainView_typeof()->Init(), __selector0_; }

    void ctor_4();
    void InitializeUX();
    static MainView* New2();
};
// }

} // ::g
