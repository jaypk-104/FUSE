[Uno.Compiler.UxGenerated]
public partial class LoginPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly LoginPage __parent;
        [Uno.WeakReference] internal readonly LoginPage __parentInstance;
        public Template(LoginPage parent, LoginPage parentInstance): base("login", false)
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
            __self.SourceLineNumber = 45;
            __self.SourceFileName = "Pages/LoginPage.ux";
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "login";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly LoginPage __parent;
        [Uno.WeakReference] internal readonly LoginPage __parentInstance;
        public Template1(LoginPage parent, LoginPage parentInstance): base("s_inq01", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::s_inq01(__parent.router1);
            __self.Name = __selector0;
            __self.SourceLineNumber = 46;
            __self.SourceFileName = "Pages/LoginPage.ux";
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "s_inq01";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template2: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly LoginPage __parent;
        [Uno.WeakReference] internal readonly LoginPage __parentInstance;
        public Template2(LoginPage parent, LoginPage parentInstance): base("c_menu", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template2()
        {
        }
        public override object New()
        {
            var __self = new global::c_menu(__parent.router1);
            __self.Name = __selector0;
            __self.SourceLineNumber = 47;
            __self.SourceFileName = "Pages/LoginPage.ux";
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "c_menu";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template3: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly LoginPage __parent;
        [Uno.WeakReference] internal readonly LoginPage __parentInstance;
        public Template3(LoginPage parent, LoginPage parentInstance): base("c_gr", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template3()
        {
        }
        public override object New()
        {
            var __self = new global::c_gr(__parent.router1);
            __self.Name = __selector0;
            __self.SourceLineNumber = 48;
            __self.SourceFileName = "Pages/LoginPage.ux";
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "c_gr";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template4: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly LoginPage __parent;
        [Uno.WeakReference] internal readonly LoginPage __parentInstance;
        public Template4(LoginPage parent, LoginPage parentInstance): base("c_appr", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template4()
        {
        }
        public override object New()
        {
            var __self = new global::c_appr(__parent.router1);
            __self.Name = __selector0;
            __self.SourceLineNumber = 49;
            __self.SourceFileName = "Pages/LoginPage.ux";
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "c_appr";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template5: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly LoginPage __parent;
        [Uno.WeakReference] internal readonly LoginPage __parentInstance;
        public Template5(LoginPage parent, LoginPage parentInstance): base("c_inq", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template5()
        {
        }
        public override object New()
        {
            var __self = new global::c_inq(__parent.router1);
            __self.Name = __selector0;
            __self.SourceLineNumber = 50;
            __self.SourceFileName = "Pages/LoginPage.ux";
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "c_inq";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template6: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly LoginPage __parent;
        [Uno.WeakReference] internal readonly LoginPage __parentInstance;
        public Template6(LoginPage parent, LoginPage parentInstance): base("c_po", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template6()
        {
        }
        public override object New()
        {
            var __self = new global::c_po(__parent.router1);
            __self.Name = __selector0;
            __self.SourceLineNumber = 51;
            __self.SourceFileName = "Pages/LoginPage.ux";
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "c_po";
    }
    global::Uno.UX.Property<string> PAGENAME_Value_inst;
    global::Uno.UX.Property<bool> changeWidth_Value_inst;
    global::Uno.UX.Property<bool> loadCircle_Value_inst;
    global::Uno.UX.Property<bool> scaleAndFade_Value_inst;
    global::Uno.UX.Property<bool> showLoggedIn_Value_inst;
    global::Uno.UX.Property<bool> temp_Value_inst;
    global::Uno.UX.Property<bool> temp1_Value_inst;
    global::Uno.UX.Property<bool> temp2_Value_inst;
    global::Uno.UX.Property<bool> temp3_Value_inst;
    global::Uno.UX.Property<Uno.UX.Size> rectNormalScale_Width_inst;
    global::Uno.UX.Property<float> text_Opacity_inst;
    global::Uno.UX.Property<float> loadingCircle_Opacity_inst;
    global::Uno.UX.Property<float4> loadingButton_Color_inst;
    global::Uno.UX.Property<float> loadingCircle_LengthAngleDegrees_inst;
    global::Uno.UX.Property<float> loadingCirclePanel_Opacity_inst;
    global::Uno.UX.Property<float> loadingButton_Opacity_inst;
    global::Uno.UX.Property<float> rectNormalScale_Opacity_inst;
    global::Uno.UX.Property<string> temp4_DefaultPath_inst;
    global::Uno.UX.Property<string> temp5_Value_inst;
    global::Uno.UX.Property<string> temp6_Value_inst;
    global::Uno.UX.Property<string> temp7_Value_inst;
    global::Uno.UX.Property<bool> toggle_IsActive_inst;
    global::Uno.UX.Property<float4> background_Color_inst;
    global::Uno.UX.Property<bool> temp8_Value_inst;
    global::Uno.UX.Property<string> auto_login_Value_inst;
    global::Uno.UX.Property<bool> temp9_Value_inst;
    [global::Uno.UX.UXGlobalResource("RobotoMedium")] public static readonly Fuse.Font RobotoMedium;
    internal global::Fuse.Controls.Text PAGENAME;
    internal global::Fuse.Controls.Panel transitionScaleGuide;
    internal global::Fuse.Triggers.WhileTrue loading;
    internal global::Fuse.Triggers.WhileTrue changeWidth;
    internal global::Fuse.Triggers.WhileTrue loadCircle;
    internal global::Fuse.Triggers.WhileTrue scaleAndFade;
    internal global::Fuse.Triggers.WhileTrue showLoggedIn;
    internal global::Fuse.Navigation.Router router1;
    internal global::Fuse.Controls.Grid loggedOutView;
    internal global::Fuse.Controls.Panel signin;
    internal global::Fuse.Controls.Text text;
    internal global::Fuse.Controls.Panel loadingCirclePanel;
    internal global::Fuse.Controls.Circle loadingCircle;
    internal global::Fuse.Reactive.EventBinding temp_eb6;
    internal global::Fuse.Controls.Rectangle rectNormalScale;
    internal global::Fuse.Controls.Circle loadingButton;
    internal global::Fuse.Controls.Image mark;
    internal global::Fuse.Controls.Grid loginArea;
    internal global::Fuse.Controls.DockPanel autologin;
    internal global::MyToggle toggle;
    internal global::Fuse.Controls.Rectangle background;
    internal global::Fuse.Controls.Text auto_login;
    internal global::Fuse.Reactive.EventBinding temp_eb7;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "PAGENAME",
        "transitionScaleGuide",
        "loading",
        "changeWidth",
        "loadCircle",
        "scaleAndFade",
        "showLoggedIn",
        "router1",
        "loggedOutView",
        "signin",
        "text",
        "loadingCirclePanel",
        "loadingCircle",
        "temp_eb6",
        "rectNormalScale",
        "loadingButton",
        "mark",
        "loginArea",
        "autologin",
        "toggle",
        "background",
        "auto_login",
        "temp_eb7"
    };
    static LoginPage()
    {
        RobotoMedium = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import("../../../../../Assets/Roboto-Medium.ttf")));
        global::Uno.UX.Resource.SetGlobalKey(RobotoMedium, "RobotoMedium");
    }
    [global::Uno.UX.UXConstructor]
    public LoginPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        PAGENAME = new global::Fuse.Controls.Text();
        PAGENAME_Value_inst = new HSMRO_FuseControlsTextControl_Value_Property(PAGENAME, __selector0);
        var temp10 = new global::Fuse.Reactive.Data("page_name");
        changeWidth = new global::Fuse.Triggers.WhileTrue();
        changeWidth_Value_inst = new HSMRO_FuseTriggersWhileBool_Value_Property(changeWidth, __selector0);
        loadCircle = new global::Fuse.Triggers.WhileTrue();
        loadCircle_Value_inst = new HSMRO_FuseTriggersWhileBool_Value_Property(loadCircle, __selector0);
        scaleAndFade = new global::Fuse.Triggers.WhileTrue();
        scaleAndFade_Value_inst = new HSMRO_FuseTriggersWhileBool_Value_Property(scaleAndFade, __selector0);
        showLoggedIn = new global::Fuse.Triggers.WhileTrue();
        showLoggedIn_Value_inst = new HSMRO_FuseTriggersWhileBool_Value_Property(showLoggedIn, __selector0);
        var temp = new global::Fuse.Animations.Change<bool>(changeWidth_Value_inst);
        temp_Value_inst = new HSMRO_FuseAnimationsChangebool_Value_Property(temp, __selector0);
        var temp11 = new global::Fuse.Reactive.Data("login_flag1");
        var temp1 = new global::Fuse.Animations.Change<bool>(loadCircle_Value_inst);
        temp1_Value_inst = new HSMRO_FuseAnimationsChangebool_Value_Property(temp1, __selector0);
        var temp12 = new global::Fuse.Reactive.Data("login_flag1");
        var temp2 = new global::Fuse.Animations.Change<bool>(scaleAndFade_Value_inst);
        temp2_Value_inst = new HSMRO_FuseAnimationsChangebool_Value_Property(temp2, __selector0);
        var temp13 = new global::Fuse.Reactive.Data("login_flag2");
        var temp3 = new global::Fuse.Animations.Change<bool>(showLoggedIn_Value_inst);
        temp3_Value_inst = new HSMRO_FuseAnimationsChangebool_Value_Property(temp3, __selector0);
        var temp14 = new global::Fuse.Reactive.Data("login_flag2");
        rectNormalScale = new global::Fuse.Controls.Rectangle();
        rectNormalScale_Width_inst = new HSMRO_FuseElementsElement_Width_Property(rectNormalScale, __selector1);
        text = new global::Fuse.Controls.Text();
        text_Opacity_inst = new HSMRO_FuseElementsElement_Opacity_Property(text, __selector2);
        loadingCircle = new global::Fuse.Controls.Circle();
        loadingCircle_Opacity_inst = new HSMRO_FuseElementsElement_Opacity_Property(loadingCircle, __selector2);
        loadingButton = new global::Fuse.Controls.Circle();
        loadingButton_Color_inst = new HSMRO_FuseControlsShape_Color_Property(loadingButton, __selector3);
        loadingCircle_LengthAngleDegrees_inst = new HSMRO_FuseControlsEllipticalShape_LengthAngleDegrees_Property(loadingCircle, __selector4);
        loadingCirclePanel = new global::Fuse.Controls.Panel();
        loadingCirclePanel_Opacity_inst = new HSMRO_FuseElementsElement_Opacity_Property(loadingCirclePanel, __selector2);
        loadingButton_Opacity_inst = new HSMRO_FuseElementsElement_Opacity_Property(loadingButton, __selector2);
        rectNormalScale_Opacity_inst = new HSMRO_FuseElementsElement_Opacity_Property(rectNormalScale, __selector2);
        var temp4 = new global::Fuse.Controls.Navigator();
        temp4_DefaultPath_inst = new HSMRO_FuseControlsNavigator_DefaultPath_Property(temp4, __selector5);
        var temp15 = new global::Fuse.Reactive.Data("menu_id");
        var temp16 = new global::Fuse.Reactive.Data("loginClick");
        var temp5 = new global::Fuse.Controls.Text();
        temp5_Value_inst = new HSMRO_FuseControlsTextControl_Value_Property(temp5, __selector0);
        var temp17 = new global::Fuse.Reactive.Data("main_yn");
        var temp6 = new global::Fuse.Controls.TextInput();
        temp6_Value_inst = new HSMRO_FuseControlsTextInputControl_Value_Property(temp6, __selector0);
        var temp18 = new global::Fuse.Reactive.Data("login_id");
        var temp7 = new global::Fuse.Controls.TextInput();
        temp7_Value_inst = new HSMRO_FuseControlsTextInputControl_Value_Property(temp7, __selector0);
        var temp19 = new global::Fuse.Reactive.Data("login_pw");
        toggle = new global::MyToggle();
        toggle_IsActive_inst = new HSMRO_MyToggle_IsActive_Property(toggle, __selector6);
        var temp20 = new global::Fuse.Reactive.Data("auto_login");
        background = new global::Fuse.Controls.Rectangle();
        background_Color_inst = new HSMRO_FuseControlsShape_Color_Property(background, __selector3);
        var temp21 = new global::Fuse.Reactive.Constant(toggle);
        var temp8 = new global::Fuse.Triggers.WhileTrue();
        temp8_Value_inst = new HSMRO_FuseTriggersWhileBool_Value_Property(temp8, __selector0);
        var temp22 = new global::Fuse.Reactive.Property(temp21, HSMRO_accessor_MyToggle_IsActive.Singleton);
        auto_login = new global::Fuse.Controls.Text();
        auto_login_Value_inst = new HSMRO_FuseControlsTextControl_Value_Property(auto_login, __selector0);
        var temp23 = new global::Fuse.Reactive.Data("auto_login");
        var temp24 = new global::Fuse.Reactive.Data("backBtn_main");
        var temp9 = new global::Fuse.Triggers.WhileTrue();
        temp9_Value_inst = new HSMRO_FuseTriggersWhileBool_Value_Property(temp9, __selector0);
        var temp25 = new global::Fuse.Reactive.Data("exit");
        var temp26 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp27 = new global::Fuse.Controls.Panel();
        var temp28 = new global::Fuse.Reactive.DataBinding(PAGENAME_Value_inst, temp10, Fuse.Reactive.BindingMode.Default);
        transitionScaleGuide = new global::Fuse.Controls.Panel();
        loading = new global::Fuse.Triggers.WhileTrue();
        var temp29 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp11, Fuse.Reactive.BindingMode.Default);
        var temp30 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp12, Fuse.Reactive.BindingMode.Default);
        var temp31 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp13, Fuse.Reactive.BindingMode.Default);
        var temp32 = new global::Fuse.Reactive.DataBinding(temp3_Value_inst, temp14, Fuse.Reactive.BindingMode.Default);
        var temp33 = new global::Fuse.Animations.Change<Uno.UX.Size>(rectNormalScale_Width_inst);
        var temp34 = new global::Fuse.Animations.Change<float>(text_Opacity_inst);
        var temp35 = new global::Fuse.Animations.Change<float>(loadingCircle_Opacity_inst);
        var temp36 = new global::Fuse.Animations.Change<float4>(loadingButton_Color_inst);
        var temp37 = new global::Fuse.Animations.Spin();
        var temp38 = new global::Fuse.Animations.Cycle<float>(loadingCircle_LengthAngleDegrees_inst);
        var temp39 = new global::Fuse.Animations.Change<float>(loadingCirclePanel_Opacity_inst);
        var temp40 = new global::Fuse.Animations.Change<float>(loadingButton_Opacity_inst);
        var temp41 = new global::Fuse.Animations.Change<float>(rectNormalScale_Opacity_inst);
        var temp42 = new global::Fuse.Animations.Scale();
        var temp43 = new global::Fuse.Controls.DockPanel();
        var temp44 = new global::Fuse.Controls.DockPanel();
        router1 = new global::Fuse.Navigation.Router();
        var login = new Template(this, this);
        var s_inq01 = new Template1(this, this);
        var c_menu = new Template2(this, this);
        var c_gr = new Template3(this, this);
        var c_appr = new Template4(this, this);
        var c_inq = new Template5(this, this);
        var c_po = new Template6(this, this);
        var temp45 = new global::Fuse.Reactive.DataBinding(temp4_DefaultPath_inst, temp15, Fuse.Reactive.BindingMode.Default);
        loggedOutView = new global::Fuse.Controls.Grid();
        var temp46 = new global::Fuse.Triggers.WhileKeyboardVisible();
        var temp47 = new global::Fuse.Animations.Move();
        var temp48 = new global::Fuse.Animations.Move();
        var temp49 = new global::Fuse.Animations.Move();
        var temp50 = new global::Fuse.Animations.Move();
        var temp51 = new global::Fuse.Controls.Rectangle();
        var temp52 = new global::Fuse.Drawing.LinearGradient();
        var temp53 = new global::Fuse.Drawing.GradientStop();
        var temp54 = new global::Fuse.Drawing.GradientStop();
        signin = new global::Fuse.Controls.Panel();
        var temp55 = new global::Fuse.Drawing.Stroke();
        var temp56 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp57 = new global::Fuse.Gestures.Clicked();
        var temp58 = new global::Fuse.Triggers.Actions.Toggle();
        temp_eb6 = new global::Fuse.Reactive.EventBinding(temp16);
        var temp59 = new global::Fuse.Scaling();
        mark = new global::Fuse.Controls.Image();
        loginArea = new global::Fuse.Controls.Grid();
        var temp60 = new global::Fuse.Reactive.DataBinding(temp5_Value_inst, temp17, Fuse.Reactive.BindingMode.Default);
        var temp61 = new global::Fuse.Controls.Image();
        var temp62 = new global::Fuse.Reactive.DataBinding(temp6_Value_inst, temp18, Fuse.Reactive.BindingMode.Default);
        var temp63 = new global::Fuse.Controls.Rectangle();
        var temp64 = new global::Fuse.Controls.Image();
        var temp65 = new global::Fuse.Reactive.DataBinding(temp7_Value_inst, temp19, Fuse.Reactive.BindingMode.Default);
        var temp66 = new global::Fuse.Controls.Rectangle();
        autologin = new global::Fuse.Controls.DockPanel();
        var temp67 = new global::Fuse.Reactive.DataBinding(toggle_IsActive_inst, temp20, Fuse.Reactive.BindingMode.Default);
        var temp68 = new global::Fuse.Animations.Change<float4>(background_Color_inst);
        var temp69 = new global::Fuse.Reactive.DataBinding(temp8_Value_inst, temp22, Fuse.Reactive.BindingMode.Read);
        var temp70 = new global::Fuse.Controls.Text();
        var temp71 = new global::Fuse.Reactive.DataBinding(auto_login_Value_inst, temp23, Fuse.Reactive.BindingMode.Default);
        var temp72 = new global::Fuse.Navigation.WhileActive();
        var temp73 = new global::Fuse.Triggers.OnBackButton();
        temp_eb7 = new global::Fuse.Reactive.EventBinding(temp24);
        var temp74 = new global::HomeScreen();
        var temp75 = new global::Fuse.Reactive.DataBinding(temp9_Value_inst, temp25, Fuse.Reactive.BindingMode.Default);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/LoginPage.ux";
        temp26.LineNumber = 2;
        temp26.FileName = "Pages/LoginPage.ux";
        temp26.SourceLineNumber = 2;
        temp26.SourceFileName = "Pages/LoginPage.ux";
        temp26.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/LoginPage.js"));
        temp27.SourceLineNumber = 6;
        temp27.SourceFileName = "Pages/LoginPage.ux";
        temp27.Children.Add(PAGENAME);
        temp27.Children.Add(transitionScaleGuide);
        temp27.Children.Add(loading);
        temp27.Children.Add(changeWidth);
        temp27.Children.Add(loadCircle);
        temp27.Children.Add(scaleAndFade);
        temp27.Children.Add(showLoggedIn);
        temp27.Children.Add(loggedOutView);
        temp27.Children.Add(temp72);
        temp27.Children.Add(temp9);
        PAGENAME.Alignment = Fuse.Elements.Alignment.Center;
        PAGENAME.Visibility = Fuse.Elements.Visibility.Hidden;
        PAGENAME.Name = __selector7;
        PAGENAME.SourceLineNumber = 8;
        PAGENAME.SourceFileName = "Pages/LoginPage.ux";
        PAGENAME.Bindings.Add(temp28);
        temp10.SourceLineNumber = 8;
        temp10.SourceFileName = "Pages/LoginPage.ux";
        transitionScaleGuide.Aspect = 1f;
        transitionScaleGuide.HitTestMode = Fuse.Elements.HitTestMode.None;
        transitionScaleGuide.Width = new Uno.UX.Size(500f, Uno.UX.Unit.Percent);
        transitionScaleGuide.Height = new Uno.UX.Size(500f, Uno.UX.Unit.Percent);
        transitionScaleGuide.Alignment = Fuse.Elements.Alignment.Center;
        transitionScaleGuide.Padding = float4(0f, 0f, 0f, 0f);
        transitionScaleGuide.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
        transitionScaleGuide.Name = __selector8;
        transitionScaleGuide.SourceLineNumber = 9;
        transitionScaleGuide.SourceFileName = "Pages/LoginPage.ux";
        loading.Name = __selector9;
        loading.SourceLineNumber = 11;
        loading.SourceFileName = "Pages/LoginPage.ux";
        loading.Animators.Add(temp);
        loading.Animators.Add(temp1);
        loading.Animators.Add(temp2);
        loading.Animators.Add(temp3);
        loading.Bindings.Add(temp29);
        loading.Bindings.Add(temp30);
        loading.Bindings.Add(temp31);
        loading.Bindings.Add(temp32);
        temp.DelayBack = 0;
        temp11.SourceLineNumber = 12;
        temp11.SourceFileName = "Pages/LoginPage.ux";
        temp1.DelayBack = 0;
        temp12.SourceLineNumber = 13;
        temp12.SourceFileName = "Pages/LoginPage.ux";
        temp2.DelayBack = 0;
        temp2.Delay = 2.5;
        temp13.SourceLineNumber = 15;
        temp13.SourceFileName = "Pages/LoginPage.ux";
        temp3.Delay = 2.9;
        temp14.SourceLineNumber = 16;
        temp14.SourceFileName = "Pages/LoginPage.ux";
        changeWidth.Name = __selector10;
        changeWidth.SourceLineNumber = 20;
        changeWidth.SourceFileName = "Pages/LoginPage.ux";
        changeWidth.Animators.Add(temp33);
        temp33.Value = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp33.Duration = 0.5;
        temp33.DurationBack = 0;
        temp33.Easing = Fuse.Animations.Easing.CircularInOut;
        loadCircle.Name = __selector11;
        loadCircle.SourceLineNumber = 23;
        loadCircle.SourceFileName = "Pages/LoginPage.ux";
        loadCircle.Animators.Add(temp34);
        loadCircle.Animators.Add(temp35);
        loadCircle.Animators.Add(temp36);
        loadCircle.Animators.Add(temp37);
        loadCircle.Animators.Add(temp38);
        temp34.Value = 0f;
        temp34.Duration = 0.2;
        temp34.DurationBack = 0;
        temp35.Value = 1f;
        temp35.Duration = 0.3;
        temp35.DurationBack = 0;
        temp35.DelayBack = 0;
        temp35.Delay = 0.2;
        temp36.Value = Fuse.Drawing.Colors.White;
        temp36.Duration = 1;
        temp36.Easing = Fuse.Animations.Easing.QuadraticInOut;
        temp37.Frequency = 2;
        temp37.Target = loadingCircle;
        temp38.Low = 30f;
        temp38.High = 300f;
        temp38.Frequency = 0.7;
        scaleAndFade.Name = __selector12;
        scaleAndFade.SourceLineNumber = 30;
        scaleAndFade.SourceFileName = "Pages/LoginPage.ux";
        scaleAndFade.Animators.Add(temp39);
        scaleAndFade.Animators.Add(temp40);
        scaleAndFade.Animators.Add(temp41);
        scaleAndFade.Animators.Add(temp42);
        temp39.Value = 0f;
        temp39.Duration = 0.1;
        temp40.Value = 1f;
        temp40.Duration = 0.01;
        temp41.Value = 0f;
        temp41.Duration = 0.01;
        temp42.Factor = 3f;
        temp42.Duration = 0.7;
        temp42.DurationBack = 0;
        temp42.Delay = 0.01;
        temp42.RelativeTo = Fuse.Elements.TranslationModes.SizeFactor;
        temp42.RelativeNode = transitionScaleGuide;
        temp42.Target = loadingButton;
        temp42.Easing = Fuse.Animations.Easing.ExponentialInOut;
        showLoggedIn.Name = __selector13;
        showLoggedIn.SourceLineNumber = 40;
        showLoggedIn.SourceFileName = "Pages/LoginPage.ux";
        showLoggedIn.Nodes.Add(temp43);
        temp43.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp43.Alignment = Fuse.Elements.Alignment.Default;
        temp43.SourceLineNumber = 41;
        temp43.SourceFileName = "Pages/LoginPage.ux";
        temp43.Children.Add(temp44);
        temp44.Alignment = Fuse.Elements.Alignment.Default;
        temp44.SourceLineNumber = 42;
        temp44.SourceFileName = "Pages/LoginPage.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp44, Fuse.Layouts.Dock.Fill);
        temp44.Children.Add(router1);
        temp44.Children.Add(temp4);
        router1.IsMasterRouter = false;
        router1.Name = __selector14;
        router1.SourceLineNumber = 43;
        router1.SourceFileName = "Pages/LoginPage.ux";
        temp4.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp4.Alignment = Fuse.Elements.Alignment.Default;
        temp4.SourceLineNumber = 44;
        temp4.SourceFileName = "Pages/LoginPage.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp4, Fuse.Layouts.Dock.Top);
        temp4.Templates.Add(login);
        temp4.Templates.Add(s_inq01);
        temp4.Templates.Add(c_menu);
        temp4.Templates.Add(c_gr);
        temp4.Templates.Add(c_appr);
        temp4.Templates.Add(c_inq);
        temp4.Templates.Add(c_po);
        temp4.Bindings.Add(temp45);
        temp15.SourceLineNumber = 44;
        temp15.SourceFileName = "Pages/LoginPage.ux";
        loggedOutView.Rows = "1.5*,auto,auto, 1*";
        loggedOutView.Visibility = Fuse.Elements.Visibility.Visible;
        loggedOutView.Padding = float4(40f, 0f, 40f, 0f);
        loggedOutView.Name = __selector15;
        loggedOutView.SourceLineNumber = 57;
        loggedOutView.SourceFileName = "Pages/LoginPage.ux";
        loggedOutView.Children.Add(temp46);
        loggedOutView.Children.Add(temp51);
        loggedOutView.Children.Add(signin);
        loggedOutView.Children.Add(mark);
        loggedOutView.Children.Add(loginArea);
        loggedOutView.Children.Add(autologin);
        temp46.SourceLineNumber = 58;
        temp46.SourceFileName = "Pages/LoginPage.ux";
        temp46.Animators.Add(temp47);
        temp46.Animators.Add(temp48);
        temp46.Animators.Add(temp49);
        temp46.Animators.Add(temp50);
        temp47.Y = -200f;
        temp47.Duration = 0.6;
        temp47.Target = mark;
        temp47.Easing = Fuse.Animations.Easing.ExponentialInOut;
        temp48.Y = -200f;
        temp48.Duration = 0.6;
        temp48.Target = loginArea;
        temp48.Easing = Fuse.Animations.Easing.ExponentialInOut;
        temp49.Y = -200f;
        temp49.Duration = 0.6;
        temp49.Target = autologin;
        temp49.Easing = Fuse.Animations.Easing.ExponentialInOut;
        temp50.Y = -200f;
        temp50.Duration = 0.6;
        temp50.Target = signin;
        temp50.Easing = Fuse.Animations.Easing.ExponentialInOut;
        temp51.Color = float4(0.9882353f, 0.9882353f, 0.9882353f, 0.1764706f);
        temp51.Alignment = Fuse.Elements.Alignment.Default;
        temp51.Padding = float4(0f, 0f, 0f, 0f);
        temp51.Layer = Fuse.Layer.Background;
        temp51.SourceLineNumber = 65;
        temp51.SourceFileName = "Pages/LoginPage.ux";
        temp51.Fills.Add(temp52);
        temp52.Stops.Add(temp53);
        temp52.Stops.Add(temp54);
        temp53.Offset = 0f;
        temp53.Color = float4(0.5176471f, 0.345098f, 0.8196079f, 1f);
        temp54.Offset = 1f;
        temp54.Color = float4(0.4039216f, 0.5686275f, 0.8980392f, 1f);
        signin.Width = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        signin.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        signin.Name = __selector16;
        signin.SourceLineNumber = 73;
        signin.SourceFileName = "Pages/LoginPage.ux";
        global::Fuse.Controls.Grid.SetRow(signin, 3);
        signin.Children.Add(text);
        signin.Children.Add(loadingCirclePanel);
        signin.Children.Add(temp57);
        signin.Children.Add(rectNormalScale);
        signin.Children.Add(loadingButton);
        text.Value = "로그인";
        text.FontSize = 18f;
        text.Color = float4(1f, 1f, 1f, 1f);
        text.Alignment = Fuse.Elements.Alignment.Center;
        text.Name = __selector17;
        text.SourceLineNumber = 74;
        text.SourceFileName = "Pages/LoginPage.ux";
        text.Font = global::MainView.AGOTHIC14;
        loadingCirclePanel.Name = __selector18;
        loadingCirclePanel.SourceLineNumber = 75;
        loadingCirclePanel.SourceFileName = "Pages/LoginPage.ux";
        loadingCirclePanel.Children.Add(loadingCircle);
        loadingCircle.StartAngleDegrees = 0f;
        loadingCircle.LengthAngleDegrees = 90f;
        loadingCircle.Width = new Uno.UX.Size(70f, Uno.UX.Unit.Percent);
        loadingCircle.Height = new Uno.UX.Size(70f, Uno.UX.Unit.Percent);
        loadingCircle.Opacity = 0f;
        loadingCircle.Name = __selector19;
        loadingCircle.SourceLineNumber = 76;
        loadingCircle.SourceFileName = "Pages/LoginPage.ux";
        loadingCircle.Strokes.Add(temp55);
        temp55.Width = 1f;
        temp55.Brush = temp56;
        temp57.SourceLineNumber = 80;
        temp57.SourceFileName = "Pages/LoginPage.ux";
        temp57.Handler += temp_eb6.OnEvent;
        temp57.Actions.Add(temp58);
        temp57.Bindings.Add(temp_eb6);
        temp58.SourceLineNumber = 81;
        temp58.SourceFileName = "Pages/LoginPage.ux";
        temp58.Target = loading;
        temp16.SourceLineNumber = 80;
        temp16.SourceFileName = "Pages/LoginPage.ux";
        rectNormalScale.CornerRadius = float4(30f, 30f, 30f, 30f);
        rectNormalScale.Color = float4(0.2784314f, 0.2509804f, 0.7058824f, 1f);
        rectNormalScale.Width = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
        rectNormalScale.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        rectNormalScale.Name = __selector20;
        rectNormalScale.SourceLineNumber = 83;
        rectNormalScale.SourceFileName = "Pages/LoginPage.ux";
        loadingButton.Color = float4(0.2784314f, 0.2509804f, 0.7058824f, 1f);
        loadingButton.Width = new Uno.UX.Size(240f, Uno.UX.Unit.Unspecified);
        loadingButton.Height = new Uno.UX.Size(240f, Uno.UX.Unit.Unspecified);
        loadingButton.Alignment = Fuse.Elements.Alignment.Top;
        loadingButton.Opacity = 0f;
        loadingButton.Layer = Fuse.Layer.Overlay;
        loadingButton.Name = __selector21;
        loadingButton.SourceLineNumber = 84;
        loadingButton.SourceFileName = "Pages/LoginPage.ux";
        loadingButton.Children.Add(temp59);
        temp59.Factor = 0.5f;
        temp59.SourceLineNumber = 85;
        temp59.SourceFileName = "Pages/LoginPage.ux";
        mark.Margin = float4(40f, 40f, 40f, 40f);
        mark.Padding = float4(0f, 0f, 0f, 0f);
        mark.Name = __selector22;
        mark.SourceLineNumber = 91;
        mark.SourceFileName = "Pages/LoginPage.ux";
        global::Fuse.Controls.Grid.SetRow(mark, 0);
        mark.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/login/networks_logo3.png"));
        loginArea.RowCount = 2;
        loginArea.Columns = "auto,1*";
        loginArea.Height = new Uno.UX.Size(140f, Uno.UX.Unit.Unspecified);
        loginArea.MaxWidth = new Uno.UX.Size(400f, Uno.UX.Unit.Unspecified);
        loginArea.Padding = float4(0f, 20f, 0f, 10f);
        loginArea.Name = __selector23;
        loginArea.SourceLineNumber = 93;
        loginArea.SourceFileName = "Pages/LoginPage.ux";
        global::Fuse.Controls.Grid.SetRow(loginArea, 1);
        loginArea.Children.Add(temp5);
        loginArea.Children.Add(temp61);
        loginArea.Children.Add(temp6);
        loginArea.Children.Add(temp63);
        loginArea.Children.Add(temp64);
        loginArea.Children.Add(temp7);
        loginArea.Children.Add(temp66);
        temp5.FontSize = 13f;
        temp5.TextColor = float4(0.8470588f, 0.8431373f, 0.9137255f, 1f);
        temp5.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp5.Visibility = Fuse.Elements.Visibility.Hidden;
        temp5.Margin = float4(0f, 0f, 5f, 0f);
        temp5.SourceLineNumber = 94;
        temp5.SourceFileName = "Pages/LoginPage.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp5, Fuse.Layouts.Dock.Right);
        temp5.Font = global::MainView.AGOTHIC14;
        temp5.Bindings.Add(temp60);
        temp17.SourceLineNumber = 94;
        temp17.SourceFileName = "Pages/LoginPage.ux";
        temp61.Width = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp61.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp61.Alignment = Fuse.Elements.Alignment.Left;
        temp61.Margin = float4(10f, 0f, 30f, 0f);
        temp61.SourceLineNumber = 95;
        temp61.SourceFileName = "Pages/LoginPage.ux";
        global::Fuse.Controls.Grid.SetRow(temp61, 0);
        global::Fuse.Controls.Grid.SetColumn(temp61, 0);
        temp61.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/login/user_icon.png"));
        temp6.PlaceholderText = "ID";
        temp6.PlaceholderColor = float4(1f, 1f, 1f, 1f);
        temp6.TextColor = float4(1f, 1f, 1f, 1f);
        temp6.CaretColor = float4(1f, 1f, 1f, 1f);
        temp6.AutoCapitalizationHint = Fuse.Controls.AutoCapitalizationHint.Characters;
        temp6.SourceLineNumber = 98;
        temp6.SourceFileName = "Pages/LoginPage.ux";
        global::Fuse.Controls.Grid.SetRow(temp6, 0);
        global::Fuse.Controls.Grid.SetColumn(temp6, 1);
        temp6.Font = global::MainView.AGOTHIC14;
        temp6.Bindings.Add(temp62);
        temp18.SourceLineNumber = 98;
        temp18.SourceFileName = "Pages/LoginPage.ux";
        temp63.Color = float4(1f, 1f, 1f, 1f);
        temp63.Height = new Uno.UX.Size(1f, Uno.UX.Unit.Unspecified);
        temp63.Alignment = Fuse.Elements.Alignment.Bottom;
        temp63.SourceLineNumber = 99;
        temp63.SourceFileName = "Pages/LoginPage.ux";
        global::Fuse.Controls.Grid.SetRow(temp63, 0);
        global::Fuse.Controls.Grid.SetColumn(temp63, 0);
        global::Fuse.Controls.Grid.SetColumnSpan(temp63, 2);
        temp64.Width = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp64.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp64.Alignment = Fuse.Elements.Alignment.Left;
        temp64.Margin = float4(10f, 0f, 30f, 0f);
        temp64.SourceLineNumber = 101;
        temp64.SourceFileName = "Pages/LoginPage.ux";
        global::Fuse.Controls.Grid.SetRow(temp64, 1);
        global::Fuse.Controls.Grid.SetColumn(temp64, 0);
        temp64.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/login/password_icon.png"));
        temp7.IsPassword = true;
        temp7.PlaceholderText = "PASSWORD";
        temp7.PlaceholderColor = float4(1f, 1f, 1f, 1f);
        temp7.TextColor = float4(1f, 1f, 1f, 1f);
        temp7.CaretColor = float4(1f, 1f, 1f, 1f);
        temp7.SourceLineNumber = 102;
        temp7.SourceFileName = "Pages/LoginPage.ux";
        global::Fuse.Controls.Grid.SetRow(temp7, 1);
        global::Fuse.Controls.Grid.SetColumn(temp7, 1);
        temp7.Font = global::MainView.AGOTHIC14;
        temp7.Bindings.Add(temp65);
        temp19.SourceLineNumber = 102;
        temp19.SourceFileName = "Pages/LoginPage.ux";
        temp66.Color = float4(1f, 1f, 1f, 1f);
        temp66.Height = new Uno.UX.Size(1f, Uno.UX.Unit.Unspecified);
        temp66.Alignment = Fuse.Elements.Alignment.Bottom;
        temp66.SourceLineNumber = 103;
        temp66.SourceFileName = "Pages/LoginPage.ux";
        global::Fuse.Controls.Grid.SetRow(temp66, 1);
        global::Fuse.Controls.Grid.SetColumn(temp66, 0);
        global::Fuse.Controls.Grid.SetColumnSpan(temp66, 2);
        autologin.Name = __selector24;
        autologin.SourceLineNumber = 106;
        autologin.SourceFileName = "Pages/LoginPage.ux";
        autologin.Children.Add(toggle);
        autologin.Children.Add(temp8);
        autologin.Children.Add(background);
        autologin.Children.Add(temp70);
        autologin.Children.Add(auto_login);
        toggle.Name = __selector25;
        toggle.SourceLineNumber = 132;
        toggle.SourceFileName = "Pages/LoginPage.ux";
        toggle.Bindings.Add(temp67);
        temp20.SourceLineNumber = 132;
        temp20.SourceFileName = "Pages/LoginPage.ux";
        temp8.SourceLineNumber = 134;
        temp8.SourceFileName = "Pages/LoginPage.ux";
        temp8.Animators.Add(temp68);
        temp8.Bindings.Add(temp69);
        temp68.Value = float4(0.4039216f, 0.5686275f, 0.8980392f, 1f);
        temp68.Duration = 0.2;
        temp22.SourceLineNumber = 134;
        temp22.SourceFileName = "Pages/LoginPage.ux";
        temp21.SourceLineNumber = 134;
        temp21.SourceFileName = "Pages/LoginPage.ux";
        background.Color = float4(0.5176471f, 0.345098f, 0.8196079f, 1f);
        background.Visibility = Fuse.Elements.Visibility.Hidden;
        background.Name = __selector26;
        background.SourceLineNumber = 138;
        background.SourceFileName = "Pages/LoginPage.ux";
        temp70.Value = "ID/PW 저장";
        temp70.FontSize = 13f;
        temp70.TextColor = float4(0.8470588f, 0.8431373f, 0.9137255f, 1f);
        temp70.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp70.Margin = float4(0f, 0f, 5f, 0f);
        temp70.SourceLineNumber = 139;
        temp70.SourceFileName = "Pages/LoginPage.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp70, Fuse.Layouts.Dock.Right);
        temp70.Font = global::MainView.AGOTHIC14;
        auto_login.FontSize = 13f;
        auto_login.TextColor = float4(0.8470588f, 0.8431373f, 0.9137255f, 1f);
        auto_login.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        auto_login.Visibility = Fuse.Elements.Visibility.Hidden;
        auto_login.Margin = float4(0f, 0f, 5f, 0f);
        auto_login.Name = __selector27;
        auto_login.SourceLineNumber = 140;
        auto_login.SourceFileName = "Pages/LoginPage.ux";
        global::Fuse.Controls.DockPanel.SetDock(auto_login, Fuse.Layouts.Dock.Right);
        auto_login.Font = global::MainView.AGOTHIC14;
        auto_login.Bindings.Add(temp71);
        temp23.SourceLineNumber = 140;
        temp23.SourceFileName = "Pages/LoginPage.ux";
        temp72.SourceLineNumber = 144;
        temp72.SourceFileName = "Pages/LoginPage.ux";
        temp72.Nodes.Add(temp73);
        temp73.SourceLineNumber = 145;
        temp73.SourceFileName = "Pages/LoginPage.ux";
        temp73.Handler += temp_eb7.OnEvent;
        temp73.Bindings.Add(temp_eb7);
        temp24.SourceLineNumber = 145;
        temp24.SourceFileName = "Pages/LoginPage.ux";
        temp9.Bypass = Fuse.Triggers.TriggerBypassMode.Never;
        temp9.SourceLineNumber = 147;
        temp9.SourceFileName = "Pages/LoginPage.ux";
        temp9.Actions.Add(temp74);
        temp9.Bindings.Add(temp75);
        temp74.Type = HomeScreenType.Finish;
        temp74.SourceLineNumber = 148;
        temp74.SourceFileName = "Pages/LoginPage.ux";
        temp25.SourceLineNumber = 147;
        temp25.SourceFileName = "Pages/LoginPage.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(PAGENAME);
        __g_nametable.Objects.Add(transitionScaleGuide);
        __g_nametable.Objects.Add(loading);
        __g_nametable.Objects.Add(changeWidth);
        __g_nametable.Objects.Add(loadCircle);
        __g_nametable.Objects.Add(scaleAndFade);
        __g_nametable.Objects.Add(showLoggedIn);
        __g_nametable.Objects.Add(router1);
        __g_nametable.Objects.Add(loggedOutView);
        __g_nametable.Objects.Add(signin);
        __g_nametable.Objects.Add(text);
        __g_nametable.Objects.Add(loadingCirclePanel);
        __g_nametable.Objects.Add(loadingCircle);
        __g_nametable.Objects.Add(temp_eb6);
        __g_nametable.Objects.Add(rectNormalScale);
        __g_nametable.Objects.Add(loadingButton);
        __g_nametable.Objects.Add(mark);
        __g_nametable.Objects.Add(loginArea);
        __g_nametable.Objects.Add(autologin);
        __g_nametable.Objects.Add(toggle);
        __g_nametable.Objects.Add(background);
        __g_nametable.Objects.Add(auto_login);
        __g_nametable.Objects.Add(temp_eb7);
        this.Children.Add(temp26);
        this.Children.Add(temp27);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Width";
    static global::Uno.UX.Selector __selector2 = "Opacity";
    static global::Uno.UX.Selector __selector3 = "Color";
    static global::Uno.UX.Selector __selector4 = "LengthAngleDegrees";
    static global::Uno.UX.Selector __selector5 = "DefaultPath";
    static global::Uno.UX.Selector __selector6 = "IsActive";
    static global::Uno.UX.Selector __selector7 = "PAGENAME";
    static global::Uno.UX.Selector __selector8 = "transitionScaleGuide";
    static global::Uno.UX.Selector __selector9 = "loading";
    static global::Uno.UX.Selector __selector10 = "changeWidth";
    static global::Uno.UX.Selector __selector11 = "loadCircle";
    static global::Uno.UX.Selector __selector12 = "scaleAndFade";
    static global::Uno.UX.Selector __selector13 = "showLoggedIn";
    static global::Uno.UX.Selector __selector14 = "router1";
    static global::Uno.UX.Selector __selector15 = "loggedOutView";
    static global::Uno.UX.Selector __selector16 = "signin";
    static global::Uno.UX.Selector __selector17 = "text";
    static global::Uno.UX.Selector __selector18 = "loadingCirclePanel";
    static global::Uno.UX.Selector __selector19 = "loadingCircle";
    static global::Uno.UX.Selector __selector20 = "rectNormalScale";
    static global::Uno.UX.Selector __selector21 = "loadingButton";
    static global::Uno.UX.Selector __selector22 = "mark";
    static global::Uno.UX.Selector __selector23 = "loginArea";
    static global::Uno.UX.Selector __selector24 = "autologin";
    static global::Uno.UX.Selector __selector25 = "toggle";
    static global::Uno.UX.Selector __selector26 = "background";
    static global::Uno.UX.Selector __selector27 = "auto_login";
}
