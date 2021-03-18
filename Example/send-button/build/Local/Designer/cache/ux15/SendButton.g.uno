[Uno.Compiler.UxGenerated]
public partial class SendButton: Fuse.Controls.Panel
{
    bool _field_IsLoading;
    [global::Uno.UX.UXOriginSetter("SetIsLoading")]
    public bool IsLoading
    {
        get { return _field_IsLoading; }
        set { SetIsLoading(value, null); }
    }
    public void SetIsLoading(bool value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_IsLoading)
        {
            _field_IsLoading = value;
            OnPropertyChanged("IsLoading", origin);
        }
    }
    float4 _field_PrimaryColor;
    [global::Uno.UX.UXOriginSetter("SetPrimaryColor")]
    public float4 PrimaryColor
    {
        get { return _field_PrimaryColor; }
        set { SetPrimaryColor(value, null); }
    }
    public void SetPrimaryColor(float4 value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_PrimaryColor)
        {
            _field_PrimaryColor = value;
            OnPropertyChanged("PrimaryColor", origin);
        }
    }
    float4 _field_SecondaryColor;
    [global::Uno.UX.UXOriginSetter("SetSecondaryColor")]
    public float4 SecondaryColor
    {
        get { return _field_SecondaryColor; }
        set { SetSecondaryColor(value, null); }
    }
    public void SetSecondaryColor(float4 value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_SecondaryColor)
        {
            _field_SecondaryColor = value;
            OnPropertyChanged("SecondaryColor", origin);
        }
    }
    global::Uno.UX.Property<float4> icon_Color_inst;
    global::Uno.UX.Property<float> tapOverlayCircle_Opacity_inst;
    global::Uno.UX.Property<float4> mainCircleStroke_Color_inst;
    global::Uno.UX.Property<float4> temp_Color_inst;
    global::Uno.UX.Property<float> icon_Opacity_inst;
    global::Uno.UX.Property<float> mainCircleStroke_Width_inst;
    global::Uno.UX.Property<float> mainCircle_LengthAngleDegrees_inst;
    global::Uno.UX.Property<bool> spin_Value_inst;
    global::Uno.UX.Property<bool> temp1_Value_inst;
    global::Uno.UX.Property<float> mainCircleRotation_Degrees_inst;
    internal global::Fuse.Controls.Image icon;
    internal global::Fuse.Controls.Circle tapOverlayCircle;
    internal global::Fuse.Controls.Circle mainCircle;
    internal global::Fuse.Drawing.Stroke mainCircleStroke;
    internal global::Fuse.Rotation mainCircleRotation;
    internal global::Fuse.Triggers.Timeline flightAnimation;
    internal global::Fuse.Triggers.WhileTrue spin;
    static SendButton()
    {
    }
    [global::Uno.UX.UXConstructor]
    public SendButton()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp2 = new global::Fuse.Reactive.Constant(this);
        icon = new global::Fuse.Controls.Image();
        icon_Color_inst = new sendbutton_FuseControlsImage_Color_Property(icon, __selector0);
        var temp3 = new global::Fuse.Reactive.Property(temp2, sendbutton_accessor_SendButton_SecondaryColor.Singleton);
        tapOverlayCircle = new global::Fuse.Controls.Circle();
        tapOverlayCircle_Opacity_inst = new sendbutton_FuseElementsElement_Opacity_Property(tapOverlayCircle, __selector1);
        var temp4 = new global::Fuse.Reactive.Constant(this);
        mainCircleStroke = new global::Fuse.Drawing.Stroke();
        mainCircleStroke_Color_inst = new sendbutton_FuseDrawingStroke_Color_Property(mainCircleStroke, __selector0);
        var temp5 = new global::Fuse.Reactive.Property(temp4, sendbutton_accessor_SendButton_PrimaryColor.Singleton);
        var temp6 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Controls.Circle();
        temp_Color_inst = new sendbutton_FuseControlsShape_Color_Property(temp, __selector0);
        var temp7 = new global::Fuse.Reactive.Property(temp6, sendbutton_accessor_SendButton_SecondaryColor.Singleton);
        icon_Opacity_inst = new sendbutton_FuseElementsElement_Opacity_Property(icon, __selector1);
        mainCircleStroke_Width_inst = new sendbutton_FuseDrawingStroke_Width_Property(mainCircleStroke, __selector2);
        mainCircle = new global::Fuse.Controls.Circle();
        mainCircle_LengthAngleDegrees_inst = new sendbutton_FuseControlsEllipticalShape_LengthAngleDegrees_Property(mainCircle, __selector3);
        spin = new global::Fuse.Triggers.WhileTrue();
        spin_Value_inst = new sendbutton_FuseTriggersWhileBool_Value_Property(spin, __selector4);
        var temp8 = new global::Fuse.Reactive.Constant(this);
        var temp1 = new global::Fuse.Triggers.WhileTrue();
        temp1_Value_inst = new sendbutton_FuseTriggersWhileBool_Value_Property(temp1, __selector4);
        var temp9 = new global::Fuse.Reactive.Property(temp8, sendbutton_accessor_SendButton_IsLoading.Singleton);
        mainCircleRotation = new global::Fuse.Rotation();
        mainCircleRotation_Degrees_inst = new sendbutton_FuseRotation_Degrees_Property(mainCircleRotation, __selector5);
        var temp10 = new global::Fuse.Resources.MultiDensityImageSource();
        var temp11 = new global::Fuse.Resources.FileImageSource();
        var temp12 = new global::Fuse.Resources.FileImageSource();
        var temp13 = new global::Fuse.Resources.FileImageSource();
        var temp14 = new global::Fuse.Reactive.DataBinding(icon_Color_inst, temp3, Fuse.Reactive.BindingMode.Read);
        var temp15 = new global::Fuse.Gestures.WhilePressed();
        var temp16 = new global::Fuse.Animations.Change<float>(tapOverlayCircle_Opacity_inst);
        var temp17 = new global::Fuse.Reactive.DataBinding(mainCircleStroke_Color_inst, temp5, Fuse.Reactive.BindingMode.Read);
        var temp18 = new global::Fuse.Controls.Circle();
        var temp19 = new global::Fuse.Drawing.Stroke();
        var temp20 = new global::Fuse.Scaling();
        var temp21 = new global::Fuse.Controls.Shadow();
        var temp22 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp7, Fuse.Reactive.BindingMode.Read);
        flightAnimation = new global::Fuse.Triggers.Timeline();
        var temp23 = new global::Fuse.Animations.Move();
        var temp24 = new global::Fuse.Animations.Keyframe();
        var temp25 = new global::Fuse.Animations.Keyframe();
        var temp26 = new global::Fuse.Animations.Keyframe();
        var temp27 = new global::Fuse.Animations.Rotate();
        var temp28 = new global::Fuse.Animations.Scale();
        var temp29 = new global::Fuse.Animations.Change<float>(icon_Opacity_inst);
        var temp30 = new global::Fuse.Triggers.Actions.PulseForward();
        var temp31 = new global::Fuse.Animations.Change<float>(icon_Opacity_inst);
        var temp32 = new global::Fuse.Animations.Scale();
        var temp33 = new global::Fuse.Animations.Change<float>(mainCircleStroke_Width_inst);
        var temp34 = new global::Fuse.Animations.Change<float>(mainCircle_LengthAngleDegrees_inst);
        var temp35 = new global::Fuse.Animations.Change<bool>(spin_Value_inst);
        var temp36 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp9, Fuse.Reactive.BindingMode.Read);
        var temp37 = new global::Fuse.Animations.Cycle<float>(mainCircleRotation_Degrees_inst);
        var temp38 = new global::Fuse.Animations.Cycle<float>(mainCircleRotation_Degrees_inst);
        this.IsLoading = false;
        this.PrimaryColor = float4(0.9686275f, 0.2196078f, 0.3490196f, 1f);
        this.SecondaryColor = float4(1f, 1f, 1f, 1f);
        this.Width = new Uno.UX.Size(70f, Uno.UX.Unit.Unspecified);
        this.Height = new Uno.UX.Size(70f, Uno.UX.Unit.Unspecified);
        this.SourceLineNumber = 3;
        this.SourceFileName = "SendButton.ux";
        icon.StretchMode = Fuse.Elements.StretchMode.Uniform;
        icon.Width = new Uno.UX.Size(24f, Uno.UX.Unit.Unspecified);
        icon.Alignment = Fuse.Elements.Alignment.Center;
        icon.Offset = new Uno.UX.Size2(new Uno.UX.Size(-2f, Uno.UX.Unit.Unspecified), new Uno.UX.Size(1f, Uno.UX.Unit.Unspecified));
        icon.Name = __selector6;
        icon.SourceLineNumber = 11;
        icon.SourceFileName = "SendButton.ux";
        icon.Source = temp10;
        icon.Bindings.Add(temp14);
        temp10.Sources.Add(temp11);
        temp10.Sources.Add(temp12);
        temp10.Sources.Add(temp13);
        temp11.Density = 1f;
        temp11.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/fa-paper-plane@1x.png"));
        temp12.Density = 2f;
        temp12.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/fa-paper-plane@2x.png"));
        temp13.Density = 4f;
        temp13.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/fa-paper-plane@4x.png"));
        temp3.SourceLineNumber = 11;
        temp3.SourceFileName = "SendButton.ux";
        temp2.SourceLineNumber = 11;
        temp2.SourceFileName = "SendButton.ux";
        tapOverlayCircle.Color = float4(1f, 1f, 1f, 0.4f);
        tapOverlayCircle.Opacity = 0f;
        tapOverlayCircle.Name = __selector7;
        tapOverlayCircle.SourceLineNumber = 21;
        tapOverlayCircle.SourceFileName = "SendButton.ux";
        temp15.SourceLineNumber = 22;
        temp15.SourceFileName = "SendButton.ux";
        temp15.Animators.Add(temp16);
        temp16.Value = 1f;
        temp16.Duration = 0.05;
        temp16.DurationBack = 0.15;
        mainCircle.StartAngleDegrees = 0f;
        mainCircle.LengthAngleDegrees = 360f;
        mainCircle.Name = __selector8;
        mainCircle.SourceLineNumber = 28;
        mainCircle.SourceFileName = "SendButton.ux";
        mainCircle.Strokes.Add(mainCircleStroke);
        mainCircle.Children.Add(mainCircleRotation);
        mainCircle.Bindings.Add(temp17);
        mainCircleStroke.Width = 100f;
        temp5.SourceLineNumber = 29;
        temp5.SourceFileName = "SendButton.ux";
        temp4.SourceLineNumber = 29;
        temp4.SourceFileName = "SendButton.ux";
        mainCircleRotation.Name = __selector9;
        mainCircleRotation.SourceLineNumber = 30;
        mainCircleRotation.SourceFileName = "SendButton.ux";
        temp18.SourceLineNumber = 35;
        temp18.SourceFileName = "SendButton.ux";
        temp18.Strokes.Add(temp19);
        temp18.Children.Add(temp20);
        temp19.Color = float4(0.4f, 0.4f, 0.4f, 0.1333333f);
        temp19.Width = 5f;
        temp20.Factor = 0.85f;
        temp20.SourceLineNumber = 37;
        temp20.SourceFileName = "SendButton.ux";
        temp.Margin = float4(1f, 1f, 1f, 1f);
        temp.SourceLineNumber = 40;
        temp.SourceFileName = "SendButton.ux";
        temp.Children.Add(temp21);
        temp.Bindings.Add(temp22);
        temp21.Angle = 90f;
        temp21.Distance = 3f;
        temp21.Size = 5f;
        temp21.Color = float4(0f, 0f, 0f, 0.3333333f);
        temp21.SourceLineNumber = 41;
        temp21.SourceFileName = "SendButton.ux";
        temp7.SourceLineNumber = 40;
        temp7.SourceFileName = "SendButton.ux";
        temp6.SourceLineNumber = 40;
        temp6.SourceFileName = "SendButton.ux";
        flightAnimation.Name = __selector10;
        flightAnimation.SourceLineNumber = 46;
        flightAnimation.SourceFileName = "SendButton.ux";
        flightAnimation.Animators.Add(temp23);
        flightAnimation.Animators.Add(temp27);
        flightAnimation.Animators.Add(temp28);
        flightAnimation.Animators.Add(temp29);
        temp23.KeyframeInterpolation = Fuse.Animations.KeyframeInterpolation.Smooth;
        temp23.RelativeTo = Fuse.TranslationModes.Size;
        temp23.Target = icon;
        temp23.Keyframes.Add(temp24);
        temp23.Keyframes.Add(temp25);
        temp23.Keyframes.Add(temp26);
        temp24.X = 0f;
        temp24.Y = 0f;
        temp24.Time = 0;
        temp25.X = -0.8f;
        temp25.Y = 0.5f;
        temp25.TimeDelta = 0.38;
        temp26.X = 20f;
        temp26.Y = -12f;
        temp26.TimeDelta = 0.3;
        temp27.Degrees = 25f;
        temp27.Duration = 0.4;
        temp27.DurationBack = 0;
        temp27.Target = icon;
        temp27.Easing = Fuse.Animations.Easing.SinusoidalInOut;
        temp28.Factor = 0f;
        temp28.Duration = 0.3;
        temp28.Delay = 0.38;
        temp28.Target = icon;
        temp28.Easing = Fuse.Animations.Easing.CubicIn;
        temp29.Value = 0f;
        temp29.Duration = 0.25;
        temp29.Delay = 0.38;
        temp29.Easing = Fuse.Animations.Easing.CubicInOut;
        temp1.SourceLineNumber = 58;
        temp1.SourceFileName = "SendButton.ux";
        temp1.Animators.Add(temp31);
        temp1.Animators.Add(temp32);
        temp1.Animators.Add(temp33);
        temp1.Animators.Add(temp34);
        temp1.Animators.Add(temp35);
        temp1.Actions.Add(temp30);
        temp1.Bindings.Add(temp36);
        temp30.SourceLineNumber = 59;
        temp30.SourceFileName = "SendButton.ux";
        temp30.Target = flightAnimation;
        temp31.Value = 0f;
        temp31.DurationBack = 0.1;
        temp31.Delay = 0.68;
        temp31.Easing = Fuse.Animations.Easing.CubicInOut;
        temp32.Factor = 0.85f;
        temp32.Duration = 0.5;
        temp32.Delay = 0.35;
        temp32.Target = mainCircle;
        temp32.Easing = Fuse.Animations.Easing.BackInOut;
        temp33.Value = 5f;
        temp33.Duration = 0.2;
        temp33.Delay = 0.35;
        temp33.Easing = Fuse.Animations.Easing.SinusoidalInOut;
        temp34.Value = 90f;
        temp34.Duration = 0.5;
        temp34.DelayBack = 0;
        temp34.Delay = 0.75;
        temp34.Easing = Fuse.Animations.Easing.CubicInOut;
        temp35.Value = true;
        temp35.Delay = 1.4;
        temp9.SourceLineNumber = 58;
        temp9.SourceFileName = "SendButton.ux";
        temp8.SourceLineNumber = 58;
        temp8.SourceFileName = "SendButton.ux";
        spin.Name = __selector11;
        spin.SourceLineNumber = 67;
        spin.SourceFileName = "SendButton.ux";
        spin.Animators.Add(temp37);
        spin.Animators.Add(temp38);
        temp37.Low = 0f;
        temp37.High = 360f;
        temp37.Frequency = 0.666;
        temp37.Waveform = Fuse.Animations.CycleWaveform.Sawtooth;
        temp37.Easing = Fuse.Animations.Easing.CubicInOut;
        temp38.Low = 0f;
        temp38.High = 360f;
        temp38.Frequency = 0.999;
        temp38.FrequencyBack = -1;
        temp38.Waveform = Fuse.Animations.CycleWaveform.Sawtooth;
        temp38.MixOp = Fuse.Animations.MixOp.Add;
        this.Children.Add(icon);
        this.Children.Add(tapOverlayCircle);
        this.Children.Add(temp15);
        this.Children.Add(mainCircle);
        this.Children.Add(temp18);
        this.Children.Add(temp);
        this.Children.Add(flightAnimation);
        this.Children.Add(temp1);
        this.Children.Add(spin);
    }
    static global::Uno.UX.Selector __selector0 = "Color";
    static global::Uno.UX.Selector __selector1 = "Opacity";
    static global::Uno.UX.Selector __selector2 = "Width";
    static global::Uno.UX.Selector __selector3 = "LengthAngleDegrees";
    static global::Uno.UX.Selector __selector4 = "Value";
    static global::Uno.UX.Selector __selector5 = "Degrees";
    static global::Uno.UX.Selector __selector6 = "icon";
    static global::Uno.UX.Selector __selector7 = "tapOverlayCircle";
    static global::Uno.UX.Selector __selector8 = "mainCircle";
    static global::Uno.UX.Selector __selector9 = "mainCircleRotation";
    static global::Uno.UX.Selector __selector10 = "flightAnimation";
    static global::Uno.UX.Selector __selector11 = "spin";
}
