[Uno.Compiler.UxGenerated]
public partial class TypeIndicator: Fuse.Controls.Circle
{
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
    global::Uno.UX.Property<float4> this_Color_inst;
    global::Uno.UX.Property<bool> temp_Value_inst;
    static TypeIndicator()
    {
    }
    [global::Uno.UX.UXConstructor]
    public TypeIndicator()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this_Color_inst = new HSMRO_FuseControlsShape_Color_Property(this, __selector0);
        var temp1 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Triggers.WhileTrue();
        temp_Value_inst = new HSMRO_FuseTriggersWhileBool_Value_Property(temp, __selector1);
        var temp2 = new global::Fuse.Reactive.Property(temp1, HSMRO_accessor_TypeIndicator_IsActive.Singleton);
        var temp3 = new global::Fuse.Animations.Change<float4>(this_Color_inst);
        var temp4 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
        this.IsActive = false;
        this.Color = float4(0.8784314f, 0.8784314f, 0.8784314f, 1f);
        this.Width = new Uno.UX.Size(4f, Uno.UX.Unit.Unspecified);
        this.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
        this.SourceLineNumber = 118;
        this.SourceFileName = "Pages/Menu_Supplier/CycleButton2.ux";
        temp.SourceLineNumber = 120;
        temp.SourceFileName = "Pages/Menu_Supplier/CycleButton2.ux";
        temp.Animators.Add(temp3);
        temp.Bindings.Add(temp4);
        temp3.Value = float4(0f, 0f, 0f, 0.372549f);
        temp2.SourceLineNumber = 120;
        temp2.SourceFileName = "Pages/Menu_Supplier/CycleButton2.ux";
        temp1.SourceLineNumber = 120;
        temp1.SourceFileName = "Pages/Menu_Supplier/CycleButton2.ux";
        this.Children.Add(temp);
    }
    static global::Uno.UX.Selector __selector0 = "Color";
    static global::Uno.UX.Selector __selector1 = "Value";
}
