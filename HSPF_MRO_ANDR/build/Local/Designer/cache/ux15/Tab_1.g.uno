[Uno.Compiler.UxGenerated]
public partial class Tab_1: Fuse.Controls.Panel
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
    string _field_Color;
    [global::Uno.UX.UXOriginSetter("SetColor")]
    public string Color
    {
        get { return _field_Color; }
        set { SetColor(value, null); }
    }
    public void SetColor(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Color)
        {
            _field_Color = value;
            OnPropertyChanged("Color", origin);
        }
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<float4> temp_Color_inst;
    static Tab_1()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Tab_1()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp1 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new HSMRO_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Property(temp1, HSMRO_accessor_Tab_1_Text.Singleton);
        var temp3 = new global::Fuse.Reactive.Constant(this);
        temp_Color_inst = new HSMRO_FuseControlsTextControl_Color_Property(temp, __selector1);
        var temp4 = new global::Fuse.Reactive.Property(temp3, HSMRO_accessor_Tab_1_Color.Singleton);
        var temp5 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Read);
        var temp6 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp4, Fuse.Reactive.BindingMode.Read);
        var temp7 = new global::Fuse.Drawing.StaticSolidColor(float4(0.7411765f, 0.7647059f, 0.7803922f, 1f));
        this.Margin = float4(0f, 0f, 0f, 4f);
        this.ClipToBounds = false;
        this.SourceLineNumber = 12;
        this.SourceFileName = "Pages/Menu_Customer/c_appr.ux";
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.SourceLineNumber = 15;
        temp.SourceFileName = "Pages/Menu_Customer/c_appr.ux";
        temp.Font = global::MainView.AGOTHIC14;
        temp.Bindings.Add(temp5);
        temp.Bindings.Add(temp6);
        temp2.SourceLineNumber = 15;
        temp2.SourceFileName = "Pages/Menu_Customer/c_appr.ux";
        temp1.SourceLineNumber = 15;
        temp1.SourceFileName = "Pages/Menu_Customer/c_appr.ux";
        temp4.SourceLineNumber = 15;
        temp4.SourceFileName = "Pages/Menu_Customer/c_appr.ux";
        temp3.SourceLineNumber = 15;
        temp3.SourceFileName = "Pages/Menu_Customer/c_appr.ux";
        this.Background = temp7;
        this.Children.Add(temp);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Color";
}
