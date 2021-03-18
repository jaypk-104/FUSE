[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.App
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template(MainView parent, MainView parentInstance): base("login", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::LoginPage(__parent.router);
            __self.Name = __selector0;
            __self.SourceLineNumber = 55;
            __self.SourceFileName = "MainView.ux";
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "login";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template1(MainView parent, MainView parentInstance): base("s_inq1", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::s_inq01(__parent.router);
            __self.Name = __selector0;
            __self.SourceLineNumber = 56;
            __self.SourceFileName = "MainView.ux";
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "s_inq1";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template2: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template2(MainView parent, MainView parentInstance): base("c_menu", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template2()
        {
        }
        public override object New()
        {
            var __self = new global::c_menu(__parent.router);
            __self.Name = __selector0;
            __self.SourceLineNumber = 57;
            __self.SourceFileName = "MainView.ux";
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "c_menu";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template3: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template3(MainView parent, MainView parentInstance): base("c_gr", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template3()
        {
        }
        public override object New()
        {
            var __self = new global::c_gr(__parent.router);
            __self.Name = __selector0;
            __self.SourceLineNumber = 58;
            __self.SourceFileName = "MainView.ux";
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "c_gr";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template4: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template4(MainView parent, MainView parentInstance): base("c_appr", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template4()
        {
        }
        public override object New()
        {
            var __self = new global::c_appr(__parent.router);
            __self.Name = __selector0;
            __self.SourceLineNumber = 59;
            __self.SourceFileName = "MainView.ux";
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "c_appr";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template5: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template5(MainView parent, MainView parentInstance): base("c_inq", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template5()
        {
        }
        public override object New()
        {
            var __self = new global::c_inq(__parent.router);
            __self.Name = __selector0;
            __self.SourceLineNumber = 60;
            __self.SourceFileName = "MainView.ux";
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "c_inq";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template6: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template6(MainView parent, MainView parentInstance): base("c_po", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template6()
        {
        }
        public override object New()
        {
            var __self = new global::c_po(__parent.router);
            __self.Name = __selector0;
            __self.SourceLineNumber = 61;
            __self.SourceFileName = "MainView.ux";
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "c_po";
    }
    internal global::Fuse.Navigation.Router router;
    [global::Uno.UX.UXGlobalResource("AGOTHIC14")] public static readonly Fuse.Font AGOTHIC14;
    [global::Uno.UX.UXGlobalResource("JEJU")] public static readonly Fuse.Font JEJU;
    [global::Uno.UX.UXGlobalResource("ZhongF")] public static readonly Fuse.Font ZhongF;
    [global::Uno.UX.UXGlobalResource("SEOUL")] public static readonly Fuse.Font SEOUL;
    [global::Uno.UX.UXGlobalResource("NOTO_M")] public static readonly Fuse.Font NOTO_M;
    [global::Uno.UX.UXGlobalResource("NOTO_R")] public static readonly Fuse.Font NOTO_R;
    [global::Uno.UX.UXGlobalResource("NOTO_KR_L")] public static readonly Fuse.Font NOTO_KR_L;
    [global::Uno.UX.UXGlobalResource("NOTO_KR_B")] public static readonly Fuse.Font NOTO_KR_B;
    [global::Uno.UX.UXGlobalResource("NOTO_KR_R")] public static readonly Fuse.Font NOTO_KR_R;
    [global::Uno.UX.UXGlobalResource("NOTO_KR_T")] public static readonly Fuse.Font NOTO_KR_T;
    [global::Uno.UX.UXGlobalResource("NOTO_KR_BK")] public static readonly Fuse.Font NOTO_KR_BK;
    [global::Uno.UX.UXGlobalResource("FontAwesome")] public static readonly Fuse.Font FontAwesome;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router"
    };
    internal global::Fuse.Reactive.FuseJS.DiagnosticsImplModule FuseReactiveFuseJSDiagnosticsImplModule;
    internal global::Fuse.Reactive.FuseJS.Http FuseReactiveFuseJSHttp;
    internal global::Fuse.Reactive.FuseJS.TimerModule FuseReactiveFuseJSTimerModule;
    internal global::Fuse.Reactive.FuseJS.InterApp FuseReactiveFuseJSInterApp;
    internal global::Fuse.Drawing.BrushConverter FuseDrawingBrushConverter;
    internal global::Fuse.Triggers.BusyTaskModule FuseTriggersBusyTaskModule;
    internal global::Fuse.Vibration.VibrationModule FuseVibrationVibrationModule;
    internal global::Fuse.Testing.UnoTestingHelper FuseTestingUnoTestingHelper;
    internal global::Fuse.FileSystem.FileSystemModule FuseFileSystemFileSystemModule;
    internal global::Fuse.Storage.StorageModule FuseStorageStorageModule;
    internal global::Fuse.WebSocket.WebSocketClientModule FuseWebSocketWebSocketClientModule;
    internal global::Fuse.ImageTools.ImageTools FuseImageToolsImageTools;
    internal global::Fuse.Camera.Camera FuseCameraCamera;
    internal global::Fuse.CameraRoll.CameraRoll FuseCameraRollCameraRoll;
    internal global::Fuse.Alerts.NativeAlerts FuseAlertsNativeAlerts;
    internal global::Fuse.BackgroundDownload.BackgroundDownloadModule FuseBackgroundDownloadBackgroundDownloadModule;
    internal global::Polyfills.Window.WindowModule PolyfillsWindowWindowModule;
    internal global::FuseJS.Globals FuseJSGlobals;
    internal global::FuseJS.Lifecycle FuseJSLifecycle;
    internal global::FuseJS.Environment FuseJSEnvironment;
    internal global::FuseJS.Base64 FuseJSBase64;
    internal global::FuseJS.Bundle FuseJSBundle;
    internal global::FuseJS.FileReaderImpl FuseJSFileReaderImpl;
    internal global::FuseJS.UserEvents FuseJSUserEvents;
    internal global::Qreader Qreader;
    internal global::deviceToast deviceToast;
    static MainView()
    {
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Reactive.DeviceCaps.Device, "Device");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.Linear, "Linear");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticIn, "QuadraticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticOut, "QuadraticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticInOut, "QuadraticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicIn, "CubicIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicOut, "CubicOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicInOut, "CubicInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticIn, "QuarticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticOut, "QuarticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticInOut, "QuarticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticIn, "QuinticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticOut, "QuinticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticInOut, "QuinticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalIn, "SinusoidalIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalOut, "SinusoidalOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalInOut, "SinusoidalInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialIn, "ExponentialIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialOut, "ExponentialOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialInOut, "ExponentialInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularIn, "CircularIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularOut, "CircularOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularInOut, "CircularInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticIn, "ElasticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticOut, "ElasticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticInOut, "ElasticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackIn, "BackIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackOut, "BackOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackInOut, "BackInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceIn, "BounceIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceOut, "BounceOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceInOut, "BounceInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Transparent, "Transparent");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Transparent, "Transparent");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Black, "Black");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Black, "Black");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Silver, "Silver");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Silver, "Silver");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Gray, "Gray");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Gray, "Gray");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.White, "White");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.White, "White");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Maroon, "Maroon");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Maroon, "Maroon");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Red, "Red");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Red, "Red");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Purple, "Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Purple, "Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Fuchsia, "Fuchsia");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Fuchsia, "Fuchsia");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Green, "Green");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Green, "Green");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Lime, "Lime");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Lime, "Lime");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Olive, "Olive");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Olive, "Olive");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Yellow, "Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Yellow, "Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Navy, "Navy");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Navy, "Navy");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Blue, "Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Blue, "Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Teal, "Teal");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Teal, "Teal");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Aqua, "Aqua");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Aqua, "Aqua");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.TopLeft, "TopLeft");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.Center, "Center");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.Anchor, "Anchor");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.HorizontalBoxCenter, "HorizontalBoxCenter");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.VerticalBoxCenter, "VerticalBoxCenter");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.TransformOriginOffset, "TransformOriginOffset");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.PositionOffset, "PositionOffset");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.SizeFactor, "SizeFactor");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.Size, "Size");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Size, "Size");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.Actions.GiveFocus.Singleton, "GiveFocus");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.PositionLayoutChange, "LayoutChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.SizeLayoutChange, "LayoutChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.WorldPositionChange, "WorldPositionChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.PositionChange, "PositionChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.ResizeSizeChange, "SizeChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.ScalingSizeChange, "SizeChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.WhileKeyboardVisible.Keyboard, "Keyboard");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.Points, "Points");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.Pixels, "Pixels");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.ContentSize, "ContentSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.ScrollViewSize, "ScrollViewSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.PreloadRetain, "PreloadRetain");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.UnloadUnused, "UnloadUnused");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.QuickUnload, "QuickUnload");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.UnloadInBackgroundPolicy, "UnloadInBackground");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Thin, "Thin");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Light, "Light");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Regular, "Regular");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Medium, "Medium");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Bold, "Bold");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.ThinItalic, "ThinItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.LightItalic, "LightItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Italic, "Italic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.MediumItalic, "MediumItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.BoldItalic, "BoldItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.PlatformDefault, "PlatformDefault");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.ScalingModes.Identity, "Identity");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Local, "Local");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.ParentSize, "ParentSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Width, "Width");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Height, "Height");
        global::Uno.UX.Resource.SetGlobalKey(global::Alive.RadarPlot.AliveElasticAttractor, "Alive.ElasticAttractor");
        global::Uno.UX.Resource.SetGlobalKey(global::Alive.TextStyles.AliveRegularFont, "Alive.RegularFont");
        global::Uno.UX.Resource.SetGlobalKey(global::Alive.TextStyles.AliveBoldFont, "Alive.BoldFont");
        global::Uno.UX.Resource.SetGlobalKey(global::Alive.TextStyles.AliveMediumFont, "Alive.MediumFont");
        global::Uno.UX.Resource.SetGlobalKey(global::MainView.AGOTHIC14, "AGOTHIC14");
        global::Uno.UX.Resource.SetGlobalKey(global::MainView.JEJU, "JEJU");
        global::Uno.UX.Resource.SetGlobalKey(global::MainView.ZhongF, "ZhongF");
        global::Uno.UX.Resource.SetGlobalKey(global::MainView.SEOUL, "SEOUL");
        global::Uno.UX.Resource.SetGlobalKey(global::MainView.NOTO_M, "NOTO_M");
        global::Uno.UX.Resource.SetGlobalKey(global::MainView.NOTO_R, "NOTO_R");
        global::Uno.UX.Resource.SetGlobalKey(global::MainView.NOTO_KR_L, "NOTO_KR_L");
        global::Uno.UX.Resource.SetGlobalKey(global::MainView.NOTO_KR_B, "NOTO_KR_B");
        global::Uno.UX.Resource.SetGlobalKey(global::MainView.NOTO_KR_R, "NOTO_KR_R");
        global::Uno.UX.Resource.SetGlobalKey(global::MainView.NOTO_KR_T, "NOTO_KR_T");
        global::Uno.UX.Resource.SetGlobalKey(global::MainView.NOTO_KR_BK, "NOTO_KR_BK");
        global::Uno.UX.Resource.SetGlobalKey(global::MainView.FontAwesome, "FontAwesome");
        global::Uno.UX.Resource.SetGlobalKey(global::LoginPage.RobotoMedium, "RobotoMedium");
        global::Uno.UX.Resource.SetGlobalKey(global::ColorPalette.color0, "color0");
        global::Uno.UX.Resource.SetGlobalKey(global::ColorPalette.color1, "color1");
        global::Uno.UX.Resource.SetGlobalKey(global::ColorPalette.color2, "color2");
        global::Uno.UX.Resource.SetGlobalKey(global::ColorPalette.color3, "color3");
        global::Uno.UX.Resource.SetGlobalKey(global::ColorPalette.color4, "color4");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_IconFont_res.AliveIconFont, "Alive.IconFont");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveGray100, "Alive.Gray100");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveGray200, "Alive.Gray200");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveGray300, "Alive.Gray300");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveGray400, "Alive.Gray400");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveGray500, "Alive.Gray500");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveGray600, "Alive.Gray600");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveGradient1StartColor, "Alive.Gradient1.StartColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveGradient1EndColor, "Alive.Gradient1.EndColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveGradient2StartColor, "Alive.Gradient2.StartColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveGradient2EndColor, "Alive.Gradient2.EndColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveGradient3StartColor, "Alive.Gradient3.StartColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveGradient3EndColor, "Alive.Gradient3.EndColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightBlue, "Alive.Light.Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightOrange, "Alive.Light.Orange");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightGreen, "Alive.Light.Green");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightPurple, "Alive.Light.Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightYellow, "Alive.Light.Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightRed, "Alive.Light.Red");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightAccentColor, "Alive.Light.AccentColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightBodyTextColor, "Alive.Light.BodyTextColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightTitleTextColor, "Alive.Light.TitleTextColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightCardBackgroundColor, "Alive.Light.CardBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightCardShadowColor, "Alive.Light.CardShadowColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightPrimaryBackgroundColor, "Alive.Light.PrimaryBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightSecondaryBackgroundColor, "Alive.Light.SecondaryBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightPageIndicatorDotColor, "Alive.Light.PageIndicatorDotColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightDrawerBackgroundColor, "Alive.Light.DrawerBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightInactiveSwitchBackgroundColor, "Alive.Light.InactiveSwitchBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightBubbleStrokeColor, "Alive.Light.BubbleStrokeColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightListViewItemColor, "Alive.Light.ListViewItemColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightListViewItemAlternateColor, "Alive.Light.ListViewItemAlternateColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkRed, "Alive.Dark.Red");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkBlue, "Alive.Dark.Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkOrange, "Alive.Dark.Orange");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkGreen, "Alive.Dark.Green");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkPurple, "Alive.Dark.Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkYellow, "Alive.Dark.Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkAccentColor, "Alive.Dark.AccentColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkBodyTextColor, "Alive.Dark.BodyTextColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkTitleTextColor, "Alive.Dark.TitleTextColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkCardBackgroundColor, "Alive.Dark.CardBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkCardShadowColor, "Alive.Dark.CardShadowColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkPrimaryBackgroundColor, "Alive.Dark.PrimaryBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkSecondaryBackgroundColor, "Alive.Dark.SecondaryBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkPageIndicatorDotColor, "Alive.Dark.PageIndicatorDotColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkDrawerBackgroundColor, "Alive.Dark.DrawerBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkInactiveSwitchBackgroundColor, "Alive.Dark.InactiveSwitchBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkBubbleStrokeColor, "Alive.Dark.BubbleStrokeColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkListViewItemColor, "Alive.Dark.ListViewItemColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkListViewItemAlternateColor, "Alive.Dark.ListViewItemAlternateColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveBlue, "Alive.Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveOrange, "Alive.Orange");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveGreen, "Alive.Green");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AlivePurple, "Alive.Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveYellow, "Alive.Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveRed, "Alive.Red");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveAccentColor, "Alive.AccentColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveTitleTextColor, "Alive.TitleTextColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveBodyTextColor, "Alive.BodyTextColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AlivePrimaryBackgroundColor, "Alive.PrimaryBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveSecondaryBackgroundColor, "Alive.SecondaryBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveCardBackgroundColor, "Alive.CardBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveCardShadowColor, "Alive.CardShadowColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AlivePageIndicatorDotColor, "Alive.PageIndicatorDotColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveDrawerBackgroundColor, "Alive.DrawerBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveSliderThumbColor, "Alive.SliderThumbColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveSliderThumbShadowColor, "Alive.SliderThumbShadowColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveInactiveSwitchThumbColor, "Alive.InactiveSwitchThumbColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveInactiveSwitchBackgroundColor, "Alive.InactiveSwitchBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveActiveSwitchThumbColor, "Alive.ActiveSwitchThumbColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveActiveSwitchBackgroundColor, "Alive.ActiveSwitchBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveBubbleStrokeColor, "Alive.BubbleStrokeColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveListViewItemColor, "Alive.ListViewItemColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveListViewItemAlternateColor, "Alive.ListViewItemAlternateColor");
        AGOTHIC14 = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import("../../../../../Assets/AGOTHIC14.TTF")));
        JEJU = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import("../../../../../Assets/JejuGothic.ttf")));
        ZhongF = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import("../../../../../Assets/ZhongF.TTF")));
        SEOUL = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import("../../../../../Assets/SeoulNamsanM.ttf")));
        NOTO_M = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import("../../../../../Assets/NotoSans-Medium.ttf")));
        NOTO_R = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import("../../../../../Assets/NotoSans-Regular.ttf")));
        NOTO_KR_L = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import("../../../../../Assets/NotoSansKR-Light.otf")));
        NOTO_KR_B = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import("../../../../../Assets/NotoSansKR-Medium.otf")));
        NOTO_KR_R = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import("../../../../../Assets/NotoSansKR-Regular.otf")));
        NOTO_KR_T = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import("../../../../../Assets/NotoSansKR-Thin.otf")));
        NOTO_KR_BK = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import("../../../../../Assets/NotoSansKR-Black.otf")));
        FontAwesome = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import("../../../../../Assets/FontAwesome.otf")));
        global::Uno.UX.Resource.SetGlobalKey(AGOTHIC14, "AGOTHIC14");
        global::Uno.UX.Resource.SetGlobalKey(JEJU, "JEJU");
        global::Uno.UX.Resource.SetGlobalKey(ZhongF, "ZhongF");
        global::Uno.UX.Resource.SetGlobalKey(SEOUL, "SEOUL");
        global::Uno.UX.Resource.SetGlobalKey(NOTO_M, "NOTO_M");
        global::Uno.UX.Resource.SetGlobalKey(NOTO_R, "NOTO_R");
        global::Uno.UX.Resource.SetGlobalKey(NOTO_KR_L, "NOTO_KR_L");
        global::Uno.UX.Resource.SetGlobalKey(NOTO_KR_B, "NOTO_KR_B");
        global::Uno.UX.Resource.SetGlobalKey(NOTO_KR_R, "NOTO_KR_R");
        global::Uno.UX.Resource.SetGlobalKey(NOTO_KR_T, "NOTO_KR_T");
        global::Uno.UX.Resource.SetGlobalKey(NOTO_KR_BK, "NOTO_KR_BK");
        global::Uno.UX.Resource.SetGlobalKey(FontAwesome, "FontAwesome");
    }
    [global::Uno.UX.UXConstructor]
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        FuseReactiveFuseJSDiagnosticsImplModule = new global::Fuse.Reactive.FuseJS.DiagnosticsImplModule();
        FuseReactiveFuseJSHttp = new global::Fuse.Reactive.FuseJS.Http();
        FuseReactiveFuseJSTimerModule = new global::Fuse.Reactive.FuseJS.TimerModule();
        FuseReactiveFuseJSInterApp = new global::Fuse.Reactive.FuseJS.InterApp();
        FuseDrawingBrushConverter = new global::Fuse.Drawing.BrushConverter();
        FuseTriggersBusyTaskModule = new global::Fuse.Triggers.BusyTaskModule();
        FuseVibrationVibrationModule = new global::Fuse.Vibration.VibrationModule();
        FuseTestingUnoTestingHelper = new global::Fuse.Testing.UnoTestingHelper();
        FuseFileSystemFileSystemModule = new global::Fuse.FileSystem.FileSystemModule();
        FuseStorageStorageModule = new global::Fuse.Storage.StorageModule();
        FuseWebSocketWebSocketClientModule = new global::Fuse.WebSocket.WebSocketClientModule();
        FuseImageToolsImageTools = new global::Fuse.ImageTools.ImageTools();
        FuseCameraCamera = new global::Fuse.Camera.Camera();
        FuseCameraRollCameraRoll = new global::Fuse.CameraRoll.CameraRoll();
        FuseAlertsNativeAlerts = new global::Fuse.Alerts.NativeAlerts();
        FuseBackgroundDownloadBackgroundDownloadModule = new global::Fuse.BackgroundDownload.BackgroundDownloadModule();
        PolyfillsWindowWindowModule = new global::Polyfills.Window.WindowModule();
        FuseJSGlobals = new global::FuseJS.Globals();
        FuseJSLifecycle = new global::FuseJS.Lifecycle();
        FuseJSEnvironment = new global::FuseJS.Environment();
        FuseJSBase64 = new global::FuseJS.Base64();
        FuseJSBundle = new global::FuseJS.Bundle();
        FuseJSFileReaderImpl = new global::FuseJS.FileReaderImpl();
        FuseJSUserEvents = new global::FuseJS.UserEvents();
        Qreader = new global::Qreader();
        deviceToast = new global::deviceToast();
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        router = new global::Fuse.Navigation.Router();
        var temp = new global::Fuse.Android.StatusBarConfig();
        var temp1 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp2 = new global::Fuse.Controls.TopFrameBackground();
        var temp3 = new global::Fuse.Controls.BottomFrameBackground();
        var temp4 = new global::Fuse.Controls.Navigator();
        var login = new Template(this, this);
        var s_inq1 = new Template1(this, this);
        var c_menu = new Template2(this, this);
        var c_gr = new Template3(this, this);
        var c_appr = new Template4(this, this);
        var c_inq = new Template5(this, this);
        var c_po = new Template6(this, this);
        this.Background = Fuse.Drawing.Colors.White;
        router.BackButtonAction = Fuse.Navigation.BackButtonAction.None;
        router.Name = __selector0;
        router.SourceLineNumber = 3;
        router.SourceFileName = "MainView.ux";
        temp.IsVisible = true;
        temp.SourceLineNumber = 18;
        temp.SourceFileName = "MainView.ux";
        temp1.Code = "\n\t\tvar Observable = require(\"FuseJS/Observable\");\n\t\tvar G_USR_ID = '';\n\t\tvar G_BP_CD = '';\n\t\tvar g_BP_NM = '';\n\t\tvar g_USR_NM = '';\n\t\tvar cancel_type = '';\n\t\tvar device = '';\n\t\tvar main_yn = 'Y';\n\t\tvar temp_ios_date = 'default';\n\t\tvar page_name = 'login';\n\n\t\tvar Environment = require('FuseJS/Environment');\n\n    \tif(Environment.ios)        {console.log(\"It's iOS!\"); }\n\t\tif(Environment.android)    {console.log(\"It's Android\");}\n\t\tif(Environment.preview)    {console.log(\"It's Preview!\");}\n\t\tif(Environment.mobile)    {console.log(\"It's on mobile!\");}\n\t\t\n\n\t\tmodule.exports = {\n\t\t\tG_USR_ID: G_USR_ID,\n\t\t\tG_BP_CD: G_BP_CD,\n\t\t\tg_BP_NM: g_BP_NM,\n\t\t\tg_USR_NM: g_USR_NM,\n\t\t\tmain_yn: main_yn,\n\t\t\ttemp_ios_date: temp_ios_date,\n\t\t\tpage_name: page_name\n\t\t};\n\t";
        temp1.LineNumber = 20;
        temp1.FileName = "MainView.ux";
        temp1.SourceLineNumber = 20;
        temp1.SourceFileName = "MainView.ux";
        temp2.SourceLineNumber = 51;
        temp2.SourceFileName = "MainView.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp2, Fuse.Layouts.Dock.Top);
        temp3.SourceLineNumber = 52;
        temp3.SourceFileName = "MainView.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp3, Fuse.Layouts.Dock.Bottom);
        temp4.DefaultPath = "login";
        temp4.SourceLineNumber = 54;
        temp4.SourceFileName = "MainView.ux";
        temp4.Templates.Add(login);
        temp4.Templates.Add(s_inq1);
        temp4.Templates.Add(c_menu);
        temp4.Templates.Add(c_gr);
        temp4.Templates.Add(c_appr);
        temp4.Templates.Add(c_inq);
        temp4.Templates.Add(c_po);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(router);
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
        this.Children.Add(temp3);
        this.Children.Add(temp4);
    }
    static global::Uno.UX.Selector __selector0 = "router";
}
