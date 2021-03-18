[Uno.Compiler.UxGenerated]
public partial class DayView: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<float4> temp_Color_inst;
    global::Uno.UX.Property<float4> temp1_Color_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<float4> temp2_Color_inst;
    global::Uno.UX.Property<float4> temp3_Color_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router"
    };
    static DayView()
    {
    }
    [global::Uno.UX.UXConstructor]
    public DayView(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Controls.Rectangle();
        temp_Color_inst = new HSMRO_FuseControlsShape_Color_Property(temp, __selector0);
        var temp4 = new global::Fuse.Reactive.Resource("ColorWhite");
        var temp1 = new global::Fuse.Controls.Image();
        temp1_Color_inst = new HSMRO_FuseControlsImage_Color_Property(temp1, __selector0);
        var temp5 = new global::Fuse.Reactive.Resource("ColorTextPrime");
        var temp2 = new global::Fuse.Controls.Text();
        temp2_Value_inst = new HSMRO_FuseControlsTextControl_Value_Property(temp2, __selector1);
        var temp6 = new global::Fuse.Reactive.Data("label");
        temp2_Color_inst = new HSMRO_FuseControlsTextControl_Color_Property(temp2, __selector0);
        var temp7 = new global::Fuse.Reactive.Resource("ColorTextPrime");
        var temp3 = new global::Fuse.Controls.Panel();
        temp3_Color_inst = new HSMRO_FuseControlsPanel_Color_Property(temp3, __selector0);
        var temp8 = new global::Fuse.Reactive.Resource("ColorWhite");
        var temp9 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp10 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp4, Fuse.Reactive.BindingMode.Default);
        var temp11 = new global::Fuse.Gestures.Clicked();
        var temp12 = new global::Fuse.Navigation.RouterModify();
        var temp13 = new global::Fuse.Reactive.DataBinding(temp1_Color_inst, temp5, Fuse.Reactive.BindingMode.Default);
        var temp14 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp6, Fuse.Reactive.BindingMode.Default);
        var temp15 = new global::Fuse.Reactive.DataBinding(temp2_Color_inst, temp7, Fuse.Reactive.BindingMode.Default);
        var temp16 = new global::Fuse.Reactive.DataBinding(temp3_Color_inst, temp8, Fuse.Reactive.BindingMode.Default);
        var temp17 = new global::Fuse.Triggers.Transition();
        var temp18 = new global::Fuse.Animations.Move();
        this.Padding = float4(25f, 25f, 25f, 0f);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Modules/CalendarView/DayView.ux";
        temp9.LineNumber = 3;
        temp9.FileName = "Modules/CalendarView/DayView.ux";
        temp9.SourceLineNumber = 3;
        temp9.SourceFileName = "Modules/CalendarView/DayView.ux";
        temp9.File = new global::Uno.UX.BundleFileSource(import("../../Modules/CalendarView/DayView.js"));
        temp3.Padding = float4(10f, 10f, 10f, 10f);
        temp3.SourceLineNumber = 4;
        temp3.SourceFileName = "Modules/CalendarView/DayView.ux";
        temp3.Children.Add(temp);
        temp3.Children.Add(temp1);
        temp3.Children.Add(temp2);
        temp3.Bindings.Add(temp16);
        temp.CornerRadius = float4(5f, 5f, 0f, 0f);
        temp.Layer = Fuse.Layer.Background;
        temp.SourceLineNumber = 5;
        temp.SourceFileName = "Modules/CalendarView/DayView.ux";
        temp.Bindings.Add(temp10);
        temp4.SourceLineNumber = 5;
        temp4.SourceFileName = "Modules/CalendarView/DayView.ux";
        temp1.Alignment = Fuse.Elements.Alignment.TopRight;
        temp1.SourceLineNumber = 6;
        temp1.SourceFileName = "Modules/CalendarView/DayView.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import("../../Modules/CalendarView/Assets/cross.png"));
        temp1.Children.Add(temp11);
        temp1.Bindings.Add(temp13);
        temp11.SourceLineNumber = 7;
        temp11.SourceFileName = "Modules/CalendarView/DayView.ux";
        temp11.Actions.Add(temp12);
        temp12.How = Fuse.Navigation.ModifyRouteHow.GoBack;
        temp12.SourceLineNumber = 8;
        temp12.SourceFileName = "Modules/CalendarView/DayView.ux";
        temp5.SourceLineNumber = 6;
        temp5.SourceFileName = "Modules/CalendarView/DayView.ux";
        temp2.FontSize = 25f;
        temp2.Alignment = Fuse.Elements.Alignment.TopCenter;
        temp2.SourceLineNumber = 11;
        temp2.SourceFileName = "Modules/CalendarView/DayView.ux";
        temp2.Bindings.Add(temp14);
        temp2.Bindings.Add(temp15);
        temp6.SourceLineNumber = 11;
        temp6.SourceFileName = "Modules/CalendarView/DayView.ux";
        temp7.SourceLineNumber = 11;
        temp7.SourceFileName = "Modules/CalendarView/DayView.ux";
        temp8.SourceLineNumber = 4;
        temp8.SourceFileName = "Modules/CalendarView/DayView.ux";
        temp17.SourceLineNumber = 14;
        temp17.SourceFileName = "Modules/CalendarView/DayView.ux";
        temp17.Animators.Add(temp18);
        temp18.Y = 1f;
        temp18.Duration = 0.4;
        temp18.RelativeTo = Fuse.TranslationModes.ParentSize;
        temp18.Easing = Fuse.Animations.Easing.CubicIn;
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp9);
        this.Children.Add(temp3);
        this.Children.Add(temp17);
    }
    static global::Uno.UX.Selector __selector0 = "Color";
    static global::Uno.UX.Selector __selector1 = "Value";
}
