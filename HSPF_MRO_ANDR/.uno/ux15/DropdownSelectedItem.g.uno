[Uno.Compiler.UxGenerated]
public partial class DropdownSelectedItem: Fuse.Controls.Panel
{
    string _field_Text;
    [global::Uno.UX.UXOriginSetter("SetText")]
    public string Text
    {
        get { return _field_Text; }
        set { SetText(value, null); }
    }
    public void SetText(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Text)
        {
            _field_Text = value;
            OnPropertyChanged("Text", origin);
        }
    }
    Fuse.Drawing.Brush _field_BackgroundColor;
    [global::Uno.UX.UXOriginSetter("SetBackgroundColor")]
    public Fuse.Drawing.Brush BackgroundColor
    {
        get { return _field_BackgroundColor; }
        set { SetBackgroundColor(value, null); }
    }
    public void SetBackgroundColor(Fuse.Drawing.Brush value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_BackgroundColor)
        {
            _field_BackgroundColor = value;
            OnPropertyChanged("BackgroundColor", origin);
        }
    }
    Fuse.Drawing.Brush _field_BorderColor;
    [global::Uno.UX.UXOriginSetter("SetBorderColor")]
    public Fuse.Drawing.Brush BorderColor
    {
        get { return _field_BorderColor; }
        set { SetBorderColor(value, null); }
    }
    public void SetBorderColor(Fuse.Drawing.Brush value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_BorderColor)
        {
            _field_BorderColor = value;
            OnPropertyChanged("BorderColor", origin);
        }
    }
    float _field_FontSize;
    [global::Uno.UX.UXOriginSetter("SetFontSize")]
    public float FontSize
    {
        get { return _field_FontSize; }
        set { SetFontSize(value, null); }
    }
    public void SetFontSize(float value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_FontSize)
        {
            _field_FontSize = value;
            OnPropertyChanged("FontSize", origin);
        }
    }
    float4 _field_TextColor;
    [global::Uno.UX.UXOriginSetter("SetTextColor")]
    public float4 TextColor
    {
        get { return _field_TextColor; }
        set { SetTextColor(value, null); }
    }
    public void SetTextColor(float4 value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_TextColor)
        {
            _field_TextColor = value;
            OnPropertyChanged("TextColor", origin);
        }
    }
    global::Uno.UX.Property<float> temp_FontSize_inst;
    global::Uno.UX.Property<float4> temp_Color_inst;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<Fuse.Drawing.Brush> temp1_Fill_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb8;
    static DropdownSelectedItem()
    {
    }
    [global::Uno.UX.UXConstructor]
    public DropdownSelectedItem()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp2 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Controls.Text();
        temp_FontSize_inst = new HSMRO_FuseControlsTextControl_FontSize_Property(temp, __selector0);
        var temp3 = new global::Fuse.Reactive.Property(temp2, HSMRO_accessor_DropdownSelectedItem_FontSize.Singleton);
        var temp4 = new global::Fuse.Reactive.Constant(this);
        temp_Color_inst = new HSMRO_FuseControlsTextControl_Color_Property(temp, __selector1);
        var temp5 = new global::Fuse.Reactive.Property(temp4, HSMRO_accessor_DropdownSelectedItem_TextColor.Singleton);
        var temp6 = new global::Fuse.Reactive.Constant(this);
        temp_Value_inst = new HSMRO_FuseControlsTextControl_Value_Property(temp, __selector2);
        var temp7 = new global::Fuse.Reactive.Property(temp6, HSMRO_accessor_DropdownSelectedItem_Text.Singleton);
        var temp8 = new global::Fuse.Reactive.Constant(this);
        var temp1 = new global::Fuse.Controls.Rectangle();
        temp1_Fill_inst = new HSMRO_FuseControlsShape_Fill_Property(temp1, __selector3);
        var temp9 = new global::Fuse.Reactive.Property(temp8, HSMRO_accessor_DropdownSelectedItem_BackgroundColor.Singleton);
        var temp10 = new global::Fuse.Reactive.Data("onSelected");
        var temp11 = new global::Fuse.Reactive.DataBinding(temp_FontSize_inst, temp3, Fuse.Reactive.BindingMode.Read);
        var temp12 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp5, Fuse.Reactive.BindingMode.Read);
        var temp13 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp7, Fuse.Reactive.BindingMode.Read);
        var temp14 = new global::Fuse.Controls.Panel();
        var temp15 = new global::Fuse.Reactive.DataBinding(temp1_Fill_inst, temp9, Fuse.Reactive.BindingMode.Read);
        temp_eb8 = new global::Fuse.Reactive.EventBinding(temp10);
        this.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        this.Name = __selector4;
        this.SourceLineNumber = 47;
        this.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        global::Fuse.Gestures.Clicked.AddHandler(this, temp_eb8.OnEvent);
        temp.Alignment = Fuse.Elements.Alignment.CenterLeft;
        temp.Margin = float4(10f, 0f, 0f, 0f);
        temp.SourceLineNumber = 53;
        temp.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp.Bindings.Add(temp11);
        temp.Bindings.Add(temp12);
        temp.Bindings.Add(temp13);
        temp3.SourceLineNumber = 53;
        temp3.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp2.SourceLineNumber = 53;
        temp2.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp5.SourceLineNumber = 53;
        temp5.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp4.SourceLineNumber = 53;
        temp4.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp7.SourceLineNumber = 53;
        temp7.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp6.SourceLineNumber = 53;
        temp6.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp14.Layer = Fuse.Layer.Background;
        temp14.SourceLineNumber = 54;
        temp14.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp14.Children.Add(temp1);
        temp1.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp1.Alignment = Fuse.Elements.Alignment.Top;
        temp1.Layer = Fuse.Layer.Background;
        temp1.SourceLineNumber = 55;
        temp1.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp1.Bindings.Add(temp15);
        temp9.SourceLineNumber = 55;
        temp9.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp8.SourceLineNumber = 55;
        temp8.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp10.SourceLineNumber = 47;
        temp10.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        this.Children.Add(temp);
        this.Children.Add(temp14);
        this.Bindings.Add(temp_eb8);
    }
    static global::Uno.UX.Selector __selector0 = "FontSize";
    static global::Uno.UX.Selector __selector1 = "Color";
    static global::Uno.UX.Selector __selector2 = "Value";
    static global::Uno.UX.Selector __selector3 = "Fill";
    static global::Uno.UX.Selector __selector4 = "self";
}
