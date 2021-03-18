[Uno.Compiler.UxGenerated]
public partial class MyToggle: Fuse.Controls.Panel
{
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
    bool _field_IsActive;
    [global::Uno.UX.UXOriginSetter("SetIsActive")]
    public bool IsActive
    {
        get { return _field_IsActive; }
        set { SetIsActive(value, null); }
    }
    public void SetIsActive(bool value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_IsActive)
        {
            _field_IsActive = value;
            OnPropertyChanged("IsActive", origin);
        }
    }
    global::Uno.UX.Property<bool> swipe_IsActive_inst;
    global::Uno.UX.Property<float4> handle_Color_inst;
    global::Uno.UX.Property<float4> background_Color_inst;
    global::Uno.UX.Property<float4> temp_Value_inst;
    global::Uno.UX.Property<float4> temp1_Value_inst;
    internal global::Fuse.Gestures.SwipeGesture swipe;
    internal global::Fuse.Controls.Rectangle handle;
    internal global::Fuse.Controls.Rectangle background;
    static MyToggle()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MyToggle()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp2 = new global::Fuse.Reactive.Constant(this);
        swipe = new global::Fuse.Gestures.SwipeGesture();
        swipe_IsActive_inst = new HSMRO_FuseGesturesSwipeGesture_IsActive_Property(swipe, __selector0);
        var temp3 = new global::Fuse.Reactive.Property(temp2, HSMRO_accessor_MyToggle_IsActive.Singleton);
        handle = new global::Fuse.Controls.Rectangle();
        handle_Color_inst = new HSMRO_FuseControlsShape_Color_Property(handle, __selector1);
        var temp4 = new global::Fuse.Reactive.Constant(this);
        background = new global::Fuse.Controls.Rectangle();
        background_Color_inst = new HSMRO_FuseControlsShape_Color_Property(background, __selector1);
        var temp5 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Animations.Change<float4>(handle_Color_inst);
        temp_Value_inst = new HSMRO_FuseAnimationsChangefloat4_Value_Property(temp, __selector2);
        var temp6 = new global::Fuse.Reactive.Property(temp4, HSMRO_accessor_MyToggle_SecondaryColor.Singleton);
        var temp1 = new global::Fuse.Animations.Change<float4>(background_Color_inst);
        temp1_Value_inst = new HSMRO_FuseAnimationsChangefloat4_Value_Property(temp1, __selector2);
        var temp7 = new global::Fuse.Reactive.Property(temp5, HSMRO_accessor_MyToggle_PrimaryColor.Singleton);
        var temp8 = new global::Fuse.Reactive.Constant(this);
        var temp9 = new global::Fuse.Reactive.Property(temp8, HSMRO_accessor_MyToggle_PrimaryColor.Singleton);
        var temp10 = new global::Fuse.Reactive.Constant(this);
        var temp11 = new global::Fuse.Reactive.Property(temp10, HSMRO_accessor_MyToggle_SecondaryColor.Singleton);
        var temp12 = new global::Fuse.Reactive.DataBinding(swipe_IsActive_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp13 = new global::Fuse.Gestures.SwipingAnimation(swipe);
        var temp14 = new global::Fuse.Animations.Move();
        var temp15 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp6, Fuse.Reactive.BindingMode.Read);
        var temp16 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp7, Fuse.Reactive.BindingMode.Read);
        var temp17 = new global::Fuse.Gestures.Clicked();
        var temp18 = new global::Fuse.Gestures.ToggleSwipeActive();
        var temp19 = new global::Fuse.Controls.Shadow();
        var temp20 = new global::Fuse.Reactive.DataBinding(handle_Color_inst, temp9, Fuse.Reactive.BindingMode.Read);
        var temp21 = new global::Fuse.Controls.Text();
        var temp22 = new global::Fuse.Reactive.DataBinding(background_Color_inst, temp11, Fuse.Reactive.BindingMode.Read);
        this.PrimaryColor = float4(0.2784314f, 0.2509804f, 0.7058824f, 1f);
        this.SecondaryColor = float4(0.8470588f, 0.8431373f, 0.9137255f, 1f);
        this.Width = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        this.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        this.Alignment = Fuse.Elements.Alignment.Right;
        this.SourceLineNumber = 108;
        this.SourceFileName = "Pages/LoginPage.ux";
        global::Fuse.Controls.DockPanel.SetDock(this, Fuse.Layouts.Dock.Right);
        global::Fuse.Controls.Grid.SetRow(this, 2);
        swipe.Type = Fuse.Gestures.SwipeType.Active;
        swipe.Direction = Fuse.Gestures.SwipeDirection.Right;
        swipe.Length = 40f;
        swipe.Name = __selector3;
        swipe.SourceLineNumber = 113;
        swipe.SourceFileName = "Pages/LoginPage.ux";
        swipe.Bindings.Add(temp12);
        temp3.SourceLineNumber = 113;
        temp3.SourceFileName = "Pages/LoginPage.ux";
        temp2.SourceLineNumber = 113;
        temp2.SourceFileName = "Pages/LoginPage.ux";
        temp13.SourceLineNumber = 114;
        temp13.SourceFileName = "Pages/LoginPage.ux";
        temp13.Animators.Add(temp14);
        temp13.Animators.Add(temp);
        temp13.Animators.Add(temp1);
        temp13.Bindings.Add(temp15);
        temp13.Bindings.Add(temp16);
        temp14.X = 28f;
        temp14.Target = handle;
        temp6.SourceLineNumber = 116;
        temp6.SourceFileName = "Pages/LoginPage.ux";
        temp4.SourceLineNumber = 116;
        temp4.SourceFileName = "Pages/LoginPage.ux";
        temp7.SourceLineNumber = 117;
        temp7.SourceFileName = "Pages/LoginPage.ux";
        temp5.SourceLineNumber = 117;
        temp5.SourceFileName = "Pages/LoginPage.ux";
        temp17.SourceLineNumber = 120;
        temp17.SourceFileName = "Pages/LoginPage.ux";
        temp17.Actions.Add(temp18);
        temp18.SourceLineNumber = 121;
        temp18.SourceFileName = "Pages/LoginPage.ux";
        temp18.Target = swipe;
        handle.CornerRadius = float4(2f, 2f, 2f, 2f);
        handle.Width = new Uno.UX.Size(25f, Uno.UX.Unit.Unspecified);
        handle.Alignment = Fuse.Elements.Alignment.Left;
        handle.Margin = float4(3f, 3f, 3f, 3f);
        handle.Name = __selector4;
        handle.SourceLineNumber = 124;
        handle.SourceFileName = "Pages/LoginPage.ux";
        handle.Children.Add(temp19);
        handle.Bindings.Add(temp20);
        temp19.Distance = 1f;
        temp19.Size = 1f;
        temp19.Color = float4(0f, 0f, 0f, 0.2666667f);
        temp19.SourceLineNumber = 125;
        temp19.SourceFileName = "Pages/LoginPage.ux";
        temp9.SourceLineNumber = 124;
        temp9.SourceFileName = "Pages/LoginPage.ux";
        temp8.SourceLineNumber = 124;
        temp8.SourceFileName = "Pages/LoginPage.ux";
        background.CornerRadius = float4(4f, 4f, 4f, 4f);
        background.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        background.Alignment = Fuse.Elements.Alignment.Default;
        background.Layer = Fuse.Layer.Background;
        background.Name = __selector5;
        background.SourceLineNumber = 128;
        background.SourceFileName = "Pages/LoginPage.ux";
        background.Children.Add(temp21);
        background.Bindings.Add(temp22);
        temp21.Value = "ON";
        temp21.TextColor = float4(0.8470588f, 0.8431373f, 0.9137255f, 1f);
        temp21.Alignment = Fuse.Elements.Alignment.CenterLeft;
        temp21.Margin = float4(5f, 0f, 0f, 0f);
        temp21.Padding = float4(0f, 0f, 0f, 0f);
        temp21.SourceLineNumber = 129;
        temp21.SourceFileName = "Pages/LoginPage.ux";
        temp11.SourceLineNumber = 128;
        temp11.SourceFileName = "Pages/LoginPage.ux";
        temp10.SourceLineNumber = 128;
        temp10.SourceFileName = "Pages/LoginPage.ux";
        this.Children.Add(swipe);
        this.Children.Add(temp13);
        this.Children.Add(temp17);
        this.Children.Add(handle);
        this.Children.Add(background);
    }
    static global::Uno.UX.Selector __selector0 = "IsActive";
    static global::Uno.UX.Selector __selector1 = "Color";
    static global::Uno.UX.Selector __selector2 = "Value";
    static global::Uno.UX.Selector __selector3 = "swipe";
    static global::Uno.UX.Selector __selector4 = "handle";
    static global::Uno.UX.Selector __selector5 = "background";
}
