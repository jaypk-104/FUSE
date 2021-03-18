[Uno.Compiler.UxGenerated]
public partial class MyLoadingIndicator1: Fuse.Controls.Panel
{
    float4 _field_ThemeColor;
    [global::Uno.UX.UXOriginSetter("SetThemeColor")]
    public float4 ThemeColor
    {
        get { return _field_ThemeColor; }
        set { SetThemeColor(value, null); }
    }
    public void SetThemeColor(float4 value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_ThemeColor)
        {
            _field_ThemeColor = value;
            OnPropertyChanged("ThemeColor", origin);
        }
    }
    global::Uno.UX.Property<float4> temp_Color_inst;
    global::Uno.UX.Property<float4> temp1_Color_inst;
    global::Uno.UX.Property<double> myTimeline_TargetProgress_inst;
    internal global::Fuse.Controls.Circle rotatingStroke;
    internal global::Fuse.Triggers.Timeline myTimeline;
    static MyLoadingIndicator1()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MyLoadingIndicator1()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp2 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Drawing.Stroke();
        temp_Color_inst = new HSMRO_FuseDrawingStroke_Color_Property(temp, __selector0);
        var temp3 = new global::Fuse.Reactive.Property(temp2, HSMRO_accessor_MyLoadingIndicator1_ThemeColor.Singleton);
        var temp4 = new global::Fuse.Reactive.Constant(this);
        var temp1 = new global::Fuse.Controls.Circle();
        temp1_Color_inst = new HSMRO_FuseControlsShape_Color_Property(temp1, __selector0);
        var temp5 = new global::Fuse.Reactive.Property(temp4, HSMRO_accessor_MyLoadingIndicator1_ThemeColor.Singleton);
        myTimeline = new global::Fuse.Triggers.Timeline();
        myTimeline_TargetProgress_inst = new HSMRO_FuseTriggersTimeline_TargetProgress_Property(myTimeline, __selector1);
        rotatingStroke = new global::Fuse.Controls.Circle();
        var temp6 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp3, Fuse.Reactive.BindingMode.Read);
        var temp7 = new global::Fuse.Animations.Scale();
        var temp8 = new global::Fuse.Animations.Scale();
        var temp9 = new global::Fuse.Reactive.DataBinding(temp1_Color_inst, temp5, Fuse.Reactive.BindingMode.Read);
        var temp10 = new global::Fuse.Triggers.WhileFalse();
        var temp11 = new global::Fuse.Animations.Cycle<double>(myTimeline_TargetProgress_inst);
        var temp12 = new global::Fuse.Animations.Spin();
        var temp13 = new global::Fuse.Drawing.StaticSolidColor(float4(0.9882353f, 0.9882353f, 0.9882353f, 0.5686275f));
        this.ThemeColor = float4(0.08235294f, 0.3960784f, 0.7529412f, 1f);
        this.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        this.Layer = Fuse.Layer.Overlay;
        this.SourceLineNumber = 79;
        this.SourceFileName = "Pages/Menu_Customer/c_gr.ux";
        global::Fuse.Controls.DockPanel.SetDock(this, Fuse.Layouts.Dock.Top);
        rotatingStroke.StartAngleDegrees = -45f;
        rotatingStroke.EndAngleDegrees = 45f;
        rotatingStroke.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        rotatingStroke.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        rotatingStroke.Name = __selector2;
        rotatingStroke.SourceLineNumber = 81;
        rotatingStroke.SourceFileName = "Pages/Menu_Customer/c_gr.ux";
        rotatingStroke.Strokes.Add(temp);
        rotatingStroke.Bindings.Add(temp6);
        temp.Width = 2f;
        temp3.SourceLineNumber = 82;
        temp3.SourceFileName = "Pages/Menu_Customer/c_gr.ux";
        temp2.SourceLineNumber = 82;
        temp2.SourceFileName = "Pages/Menu_Customer/c_gr.ux";
        temp1.Width = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp1.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp1.SourceLineNumber = 84;
        temp1.SourceFileName = "Pages/Menu_Customer/c_gr.ux";
        temp1.Children.Add(myTimeline);
        temp1.Bindings.Add(temp9);
        myTimeline.Name = __selector3;
        myTimeline.SourceLineNumber = 85;
        myTimeline.SourceFileName = "Pages/Menu_Customer/c_gr.ux";
        myTimeline.Animators.Add(temp7);
        myTimeline.Animators.Add(temp8);
        temp7.Factor = 0.5f;
        temp7.Duration = 0.25;
        temp7.Easing = Fuse.Animations.Easing.CircularOut;
        temp7.EasingBack = Fuse.Animations.Easing.CircularIn;
        temp8.Factor = 2f;
        temp8.Duration = 0.25;
        temp8.Delay = 0.25;
        temp8.Easing = Fuse.Animations.Easing.BounceOut;
        temp8.EasingBack = Fuse.Animations.Easing.BounceIn;
        temp5.SourceLineNumber = 84;
        temp5.SourceFileName = "Pages/Menu_Customer/c_gr.ux";
        temp4.SourceLineNumber = 84;
        temp4.SourceFileName = "Pages/Menu_Customer/c_gr.ux";
        temp10.SourceLineNumber = 90;
        temp10.SourceFileName = "Pages/Menu_Customer/c_gr.ux";
        temp10.Animators.Add(temp11);
        temp10.Animators.Add(temp12);
        temp11.Low = 0f;
        temp11.High = 1f;
        temp11.Frequency = 0.5;
        temp12.Frequency = 1;
        temp12.Target = rotatingStroke;
        this.Background = temp13;
        this.Children.Add(rotatingStroke);
        this.Children.Add(temp1);
        this.Children.Add(temp10);
    }
    static global::Uno.UX.Selector __selector0 = "Color";
    static global::Uno.UX.Selector __selector1 = "TargetProgress";
    static global::Uno.UX.Selector __selector2 = "rotatingStroke";
    static global::Uno.UX.Selector __selector3 = "myTimeline";
}
