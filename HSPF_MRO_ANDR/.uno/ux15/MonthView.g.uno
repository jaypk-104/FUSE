[Uno.Compiler.UxGenerated]
public partial class MonthView: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MonthView __parent;
        [Uno.WeakReference] internal readonly MonthView __parentInstance;
        public Template(MonthView parent, MonthView parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Panel();
            var temp = new global::Fuse.Controls.Text();
            temp_Value_inst = new HSMRO_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp1 = new global::Fuse.Reactive.DataFunction();
            var temp2 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.Color = float4(1f, 1f, 1f, 1f);
            __self.SourceLineNumber = 33;
            __self.SourceFileName = "Modules/CalendarView/MonthView.ux";
            temp.FontSize = 15f;
            temp.TextAlignment = Fuse.Controls.TextAlignment.Center;
            temp.Color = float4(0f, 0f, 0f, 0.5333334f);
            temp.SourceLineNumber = 34;
            temp.SourceFileName = "Modules/CalendarView/MonthView.ux";
            temp.Font = global::MainView.AGOTHIC14;
            temp.Bindings.Add(temp2);
            temp1.SourceLineNumber = 34;
            temp1.SourceFileName = "Modules/CalendarView/MonthView.ux";
            __self.Children.Add(temp);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MonthView __parent;
        [Uno.WeakReference] internal readonly MonthView __parentInstance;
        public Template1(MonthView parent, MonthView parentInstance): base("fill", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Rectangle();
            __self.Color = float4(0.9098039f, 0.9176471f, 0.9647059f, 1f);
            __self.Name = __selector0;
            __self.SourceLineNumber = 38;
            __self.SourceFileName = "Modules/CalendarView/MonthView.ux";
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "fill";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template2: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MonthView __parent;
        [Uno.WeakReference] internal readonly MonthView __parentInstance;
        public Template2(MonthView parent, MonthView parentInstance): base("day", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<string> here_Value_inst;
        global::Uno.UX.Property<string> temp1_Value_inst;
        internal global::Fuse.Reactive.EventBinding temp_eb5;
        static Template2()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Rectangle();
            var temp = new global::Fuse.Controls.Text();
            temp_Value_inst = new HSMRO_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp2 = new global::Fuse.Reactive.Data("dayOfMonth");
            here_Value_inst = new HSMRO_FuseControlsTextControl_Value_Property(__parent.here, __selector0);
            var temp3 = new global::Fuse.Reactive.Data("monthLabel");
            var temp4 = new global::Fuse.Reactive.Data("dayOfMonth");
            var temp1 = new global::Fuse.Triggers.Actions.Set<string>(here_Value_inst);
            temp1_Value_inst = new HSMRO_FuseTriggersActionsSetstring_Value_Property(temp1, __selector0);
            var temp5 = new global::Fuse.Reactive.Add(temp3, temp4);
            var temp6 = new global::Fuse.Reactive.Data("openDay");
            var temp7 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
            var temp8 = new global::Fuse.Drawing.Stroke();
            var temp9 = new global::Fuse.Gestures.Clicked();
            var temp10 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp5, Fuse.Reactive.BindingMode.Default);
            temp_eb5 = new global::Fuse.Reactive.EventBinding(temp6);
            __self.Color = float4(1f, 1f, 1f, 1f);
            __self.Name = __selector1;
            __self.SourceLineNumber = 39;
            __self.SourceFileName = "Modules/CalendarView/MonthView.ux";
            global::Fuse.Gestures.Clicked.AddHandler(__self, temp_eb5.OnEvent);
            temp.FontSize = 16f;
            temp.Color = float4(0.1333333f, 0.1333333f, 0.1333333f, 1f);
            temp.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp.Margin = float4(5f, 5f, 5f, 5f);
            temp.SourceLineNumber = 40;
            temp.SourceFileName = "Modules/CalendarView/MonthView.ux";
            temp.Font = global::MainView.AGOTHIC14;
            temp.Bindings.Add(temp7);
            temp2.SourceLineNumber = 40;
            temp2.SourceFileName = "Modules/CalendarView/MonthView.ux";
            temp8.Color = float4(0.4745098f, 0.5254902f, 0.7960784f, 0.5333334f);
            temp8.Width = 1f;
            temp9.SourceLineNumber = 42;
            temp9.SourceFileName = "Modules/CalendarView/MonthView.ux";
            temp9.Actions.Add(temp1);
            temp9.Bindings.Add(temp10);
            temp1.SourceLineNumber = 43;
            temp1.SourceFileName = "Modules/CalendarView/MonthView.ux";
            temp5.SourceLineNumber = 43;
            temp5.SourceFileName = "Modules/CalendarView/MonthView.ux";
            temp3.SourceLineNumber = 43;
            temp3.SourceFileName = "Modules/CalendarView/MonthView.ux";
            temp4.SourceLineNumber = 43;
            temp4.SourceFileName = "Modules/CalendarView/MonthView.ux";
            temp6.SourceLineNumber = 39;
            temp6.SourceFileName = "Modules/CalendarView/MonthView.ux";
            __self.Strokes.Add(temp8);
            __self.Children.Add(temp);
            __self.Children.Add(temp9);
            __self.Bindings.Add(temp_eb5);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "day";
    }
    global::Uno.UX.Property<string> here_Value_inst;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<object> temp1_Items_inst;
    global::Uno.UX.Property<object> temp2_Items_inst;
    global::Uno.UX.Property<float4> blockView_Color_inst;
    global::Uno.UX.Property<Fuse.Elements.Visibility> blockView_Visibility_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb4;
    internal global::Fuse.Controls.Rectangle blockView;
    internal global::Fuse.Controls.Text here;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "temp_eb4",
        "router",
        "blockView",
        "here"
    };
    static MonthView()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MonthView(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp3 = new global::Fuse.Reactive.Data("activated");
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        here = new global::Fuse.Controls.Text();
        here_Value_inst = new HSMRO_FuseControlsTextControl_Value_Property(here, __selector0);
        var temp4 = new global::Fuse.Reactive.Data("temp_ios_date");
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new HSMRO_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp5 = new global::Fuse.Reactive.Data("monthLabel");
        var temp1 = new global::Fuse.Reactive.Each();
        temp1_Items_inst = new HSMRO_FuseReactiveEach_Items_Property(temp1, __selector1);
        var temp6 = new global::Fuse.Reactive.Data("daysOfWeek");
        var temp2 = new global::Fuse.Reactive.Each();
        temp2_Items_inst = new HSMRO_FuseReactiveEach_Items_Property(temp2, __selector1);
        var temp7 = new global::Fuse.Reactive.Data("days");
        blockView = new global::Fuse.Controls.Rectangle();
        blockView_Color_inst = new HSMRO_FuseControlsShape_Color_Property(blockView, __selector2);
        blockView_Visibility_inst = new HSMRO_FuseElementsElement_Visibility_Property(blockView, __selector3);
        var temp8 = new global::Fuse.Navigation.Activated();
        temp_eb4 = new global::Fuse.Reactive.EventBinding(temp3);
        var temp9 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp10 = new global::Fuse.Controls.DockPanel();
        var temp11 = new global::Fuse.Reactive.DataBinding(here_Value_inst, temp4, Fuse.Reactive.BindingMode.Default);
        var temp12 = new global::Fuse.Controls.Grid();
        var temp13 = new global::Fuse.Controls.Panel();
        var temp14 = new global::Fuse.Controls.Image();
        var temp15 = new global::Fuse.Gestures.Clicked();
        var temp16 = new global::Fuse.Navigation.RouterModify();
        var temp17 = new global::Fuse.Controls.Panel();
        var temp18 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp5, Fuse.Reactive.BindingMode.Default);
        var temp19 = new global::Fuse.Controls.Panel();
        var temp20 = new global::Fuse.Controls.Image();
        var temp21 = new global::Fuse.Gestures.Clicked();
        var temp22 = new global::Fuse.Navigation.RouterModify();
        var temp23 = new global::Fuse.Controls.Grid();
        var temp24 = new Template(this, this);
        var temp25 = new global::Fuse.Reactive.DataBinding(temp1_Items_inst, temp6, Fuse.Reactive.BindingMode.Default);
        var fill = new Template1(this, this);
        var day = new Template2(this, this);
        var temp26 = new global::Fuse.Reactive.DataBinding(temp2_Items_inst, temp7, Fuse.Reactive.BindingMode.Default);
        var temp27 = new global::Fuse.Triggers.Transition();
        var temp28 = new global::Fuse.Animations.Move();
        var temp29 = new global::Fuse.Triggers.Transition();
        var temp30 = new global::Fuse.Animations.Move();
        var temp31 = new global::Fuse.Triggers.Transition();
        var temp32 = new global::Fuse.Animations.Move();
        var temp33 = new global::Fuse.Triggers.Transition();
        var temp34 = new global::Fuse.Animations.Move();
        var temp35 = new global::Fuse.Triggers.Transition();
        var temp36 = new global::Fuse.Animations.Change<float4>(blockView_Color_inst);
        var temp37 = new global::Fuse.Animations.Change<Fuse.Elements.Visibility>(blockView_Visibility_inst);
        var temp38 = new global::Fuse.Triggers.Transition();
        var temp39 = new global::Fuse.Animations.Move();
        this.SourceLineNumber = 1;
        this.SourceFileName = "Modules/CalendarView/MonthView.ux";
        global::Fuse.Controls.Navigator.SetRemove(this, Fuse.Controls.RemoveType.None);
        temp8.SourceLineNumber = 3;
        temp8.SourceFileName = "Modules/CalendarView/MonthView.ux";
        temp8.Handler += temp_eb4.OnEvent;
        temp8.Bindings.Add(temp_eb4);
        temp3.SourceLineNumber = 3;
        temp3.SourceFileName = "Modules/CalendarView/MonthView.ux";
        temp9.LineNumber = 6;
        temp9.FileName = "Modules/CalendarView/MonthView.ux";
        temp9.SourceLineNumber = 6;
        temp9.SourceFileName = "Modules/CalendarView/MonthView.ux";
        temp9.File = new global::Uno.UX.BundleFileSource(import("../../Modules/CalendarView/MonthView.js"));
        blockView.Color = float4(1f, 1f, 1f, 0f);
        blockView.Visibility = Fuse.Elements.Visibility.Hidden;
        blockView.Name = __selector4;
        blockView.SourceLineNumber = 8;
        blockView.SourceFileName = "Modules/CalendarView/MonthView.ux";
        temp10.Color = float4(1f, 1f, 1f, 1f);
        temp10.Padding = float4(5f, 5f, 5f, 5f);
        temp10.SourceLineNumber = 10;
        temp10.SourceFileName = "Modules/CalendarView/MonthView.ux";
        temp10.Children.Add(here);
        temp10.Children.Add(temp12);
        temp10.Children.Add(temp23);
        here.Visibility = Fuse.Elements.Visibility.Hidden;
        here.Name = __selector5;
        here.SourceLineNumber = 11;
        here.SourceFileName = "Modules/CalendarView/MonthView.ux";
        global::Fuse.Controls.DockPanel.SetDock(here, Fuse.Layouts.Dock.Top);
        here.Bindings.Add(temp11);
        temp4.SourceLineNumber = 11;
        temp4.SourceFileName = "Modules/CalendarView/MonthView.ux";
        temp12.Columns = "auto,1*,auto";
        temp12.CellSpacing = 5f;
        temp12.Margin = float4(0f, 0f, 0f, 5f);
        temp12.SourceLineNumber = 13;
        temp12.SourceFileName = "Modules/CalendarView/MonthView.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp12, Fuse.Layouts.Dock.Top);
        temp12.Children.Add(temp13);
        temp12.Children.Add(temp17);
        temp12.Children.Add(temp19);
        temp13.Color = float4(1f, 1f, 1f, 1f);
        temp13.Width = new Uno.UX.Size(35f, Uno.UX.Unit.Unspecified);
        temp13.Height = new Uno.UX.Size(35f, Uno.UX.Unit.Unspecified);
        temp13.SourceLineNumber = 14;
        temp13.SourceFileName = "Modules/CalendarView/MonthView.ux";
        temp13.Children.Add(temp14);
        temp13.Children.Add(temp15);
        temp14.Color = float4(0.3607843f, 0.2784314f, 0.7450981f, 1f);
        temp14.SourceLineNumber = 15;
        temp14.SourceFileName = "Modules/CalendarView/MonthView.ux";
        temp14.File = new global::Uno.UX.BundleFileSource(import("../../Modules/CalendarView/Assets/arrowleft.png"));
        temp15.SourceLineNumber = 16;
        temp15.SourceFileName = "Modules/CalendarView/MonthView.ux";
        temp15.Actions.Add(temp16);
        temp16.Bookmark = "prevMonth";
        temp16.Style = "fromLeft";
        temp16.SourceLineNumber = 17;
        temp16.SourceFileName = "Modules/CalendarView/MonthView.ux";
        temp17.Color = float4(1f, 1f, 1f, 1f);
        temp17.SourceLineNumber = 20;
        temp17.SourceFileName = "Modules/CalendarView/MonthView.ux";
        temp17.Children.Add(temp);
        temp.FontSize = 20f;
        temp.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp.Color = float4(0f, 0f, 0f, 0.8666667f);
        temp.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp.SourceLineNumber = 21;
        temp.SourceFileName = "Modules/CalendarView/MonthView.ux";
        temp.Font = global::MainView.AGOTHIC14;
        temp.Bindings.Add(temp18);
        temp5.SourceLineNumber = 21;
        temp5.SourceFileName = "Modules/CalendarView/MonthView.ux";
        temp19.Color = float4(1f, 1f, 1f, 1f);
        temp19.Width = new Uno.UX.Size(35f, Uno.UX.Unit.Unspecified);
        temp19.Height = new Uno.UX.Size(35f, Uno.UX.Unit.Unspecified);
        temp19.SourceLineNumber = 23;
        temp19.SourceFileName = "Modules/CalendarView/MonthView.ux";
        temp19.Children.Add(temp20);
        temp19.Children.Add(temp21);
        temp20.Color = float4(0.3607843f, 0.2784314f, 0.7450981f, 1f);
        temp20.SourceLineNumber = 24;
        temp20.SourceFileName = "Modules/CalendarView/MonthView.ux";
        temp20.File = new global::Uno.UX.BundleFileSource(import("../../Modules/CalendarView/Assets/arrowright.png"));
        temp21.SourceLineNumber = 25;
        temp21.SourceFileName = "Modules/CalendarView/MonthView.ux";
        temp21.Actions.Add(temp22);
        temp22.Bookmark = "nextMonth";
        temp22.Style = "fromRight";
        temp22.SourceLineNumber = 26;
        temp22.SourceFileName = "Modules/CalendarView/MonthView.ux";
        temp23.Rows = "auto";
        temp23.DefaultRow = "1*";
        temp23.ColumnCount = 7;
        temp23.CellSpacing = 3f;
        temp23.SourceLineNumber = 31;
        temp23.SourceFileName = "Modules/CalendarView/MonthView.ux";
        temp23.Children.Add(temp1);
        temp23.Children.Add(temp2);
        temp1.SourceLineNumber = 32;
        temp1.SourceFileName = "Modules/CalendarView/MonthView.ux";
        temp1.Templates.Add(temp24);
        temp1.Bindings.Add(temp25);
        temp6.SourceLineNumber = 32;
        temp6.SourceFileName = "Modules/CalendarView/MonthView.ux";
        temp2.MatchKey = "type";
        temp2.SourceLineNumber = 37;
        temp2.SourceFileName = "Modules/CalendarView/MonthView.ux";
        temp2.Templates.Add(fill);
        temp2.Templates.Add(day);
        temp2.Bindings.Add(temp26);
        temp7.SourceLineNumber = 37;
        temp7.SourceFileName = "Modules/CalendarView/MonthView.ux";
        temp27.Direction = Fuse.Triggers.TransitionDirection.ToActive;
        temp27.Style = "fromLeft";
        temp27.SourceLineNumber = 50;
        temp27.SourceFileName = "Modules/CalendarView/MonthView.ux";
        temp27.Animators.Add(temp28);
        temp28.X = -1f;
        temp28.Duration = 0.4;
        temp28.RelativeTo = Fuse.TranslationModes.ParentSize;
        temp28.Easing = Fuse.Animations.Easing.SinusoidalInOut;
        temp29.Direction = Fuse.Triggers.TransitionDirection.ToActive;
        temp29.Style = "fromRight";
        temp29.SourceLineNumber = 53;
        temp29.SourceFileName = "Modules/CalendarView/MonthView.ux";
        temp29.Animators.Add(temp30);
        temp30.X = 1f;
        temp30.Duration = 0.4;
        temp30.RelativeTo = Fuse.TranslationModes.ParentSize;
        temp30.Easing = Fuse.Animations.Easing.SinusoidalInOut;
        temp31.Direction = Fuse.Triggers.TransitionDirection.ToInactive;
        temp31.Style = "fromRight";
        temp31.SourceLineNumber = 57;
        temp31.SourceFileName = "Modules/CalendarView/MonthView.ux";
        temp31.Animators.Add(temp32);
        temp32.X = -1f;
        temp32.Duration = 0.4;
        temp32.RelativeTo = Fuse.TranslationModes.ParentSize;
        temp32.Easing = Fuse.Animations.Easing.SinusoidalInOut;
        temp33.Direction = Fuse.Triggers.TransitionDirection.ToInactive;
        temp33.Style = "fromLeft";
        temp33.SourceLineNumber = 60;
        temp33.SourceFileName = "Modules/CalendarView/MonthView.ux";
        temp33.Animators.Add(temp34);
        temp34.X = 1f;
        temp34.Duration = 0.4;
        temp34.RelativeTo = Fuse.TranslationModes.ParentSize;
        temp34.Easing = Fuse.Animations.Easing.SinusoidalInOut;
        temp35.To = "day";
        temp35.SourceLineNumber = 64;
        temp35.SourceFileName = "Modules/CalendarView/MonthView.ux";
        temp35.Animators.Add(temp36);
        temp35.Animators.Add(temp37);
        temp36.Value = float4(0.2666667f, 0.2666667f, 0.2666667f, 0.5333334f);
        temp36.Duration = 0.4;
        temp37.Value = Fuse.Elements.Visibility.Visible;
        temp38.SourceLineNumber = 69;
        temp38.SourceFileName = "Modules/CalendarView/MonthView.ux";
        temp38.Animators.Add(temp39);
        temp39.Y = 1f;
        temp39.RelativeTo = Fuse.TranslationModes.ParentSize;
        __g_nametable.This = this;
        __g_nametable.Objects.Add(temp_eb4);
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(blockView);
        __g_nametable.Objects.Add(here);
        this.Children.Add(temp8);
        this.Children.Add(temp9);
        this.Children.Add(blockView);
        this.Children.Add(temp10);
        this.Children.Add(temp27);
        this.Children.Add(temp29);
        this.Children.Add(temp31);
        this.Children.Add(temp33);
        this.Children.Add(temp35);
        this.Children.Add(temp38);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Items";
    static global::Uno.UX.Selector __selector2 = "Color";
    static global::Uno.UX.Selector __selector3 = "Visibility";
    static global::Uno.UX.Selector __selector4 = "blockView";
    static global::Uno.UX.Selector __selector5 = "here";
}
