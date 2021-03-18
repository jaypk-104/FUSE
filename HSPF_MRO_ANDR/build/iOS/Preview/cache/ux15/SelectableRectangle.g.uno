[Uno.Compiler.UxGenerated]
public partial class SelectableRectangle: Fuse.Controls.Rectangle
{
    string _field_ID;
    [global::Uno.UX.UXOriginSetter("SetID")]
    public string ID
    {
        get { return _field_ID; }
        set { SetID(value, null); }
    }
    public void SetID(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_ID)
        {
            _field_ID = value;
            OnPropertyChanged("ID", origin);
        }
    }
    float4 _field_SelectionColor;
    [global::Uno.UX.UXOriginSetter("SetSelectionColor")]
    public float4 SelectionColor
    {
        get { return _field_SelectionColor; }
        set { SetSelectionColor(value, null); }
    }
    public void SetSelectionColor(float4 value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_SelectionColor)
        {
            _field_SelectionColor = value;
            OnPropertyChanged("SelectionColor", origin);
        }
    }
    global::Uno.UX.Property<string> add1_Value_inst;
    global::Uno.UX.Property<float4> this_Color_inst;
    global::Uno.UX.Property<string> this_ID_inst;
    global::Uno.UX.Property<float4> this_SelectionColor_inst;
    internal global::Fuse.Selection.Selectable add1;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "add1"
    };
    static SelectableRectangle()
    {
    }
    [global::Uno.UX.UXConstructor]
    public SelectableRectangle()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Reactive.Constant(this);
        add1 = new global::Fuse.Selection.Selectable();
        add1_Value_inst = new HSMRO_FuseSelectionSelectable_Value_Property(add1, __selector0);
        var temp1 = new global::Fuse.Reactive.Property(temp, HSMRO_accessor_SelectableRectangle_ID.Singleton);
        this_Color_inst = new HSMRO_FuseControlsShape_Color_Property(this, __selector1);
        this_ID_inst = new HSMRO_SelectableRectangle_ID_Property(this, __selector2);
        this_SelectionColor_inst = new HSMRO_SelectableRectangle_SelectionColor_Property(this, __selector3);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp2 = new global::Fuse.Reactive.Constant(this);
        var temp3 = new global::Fuse.Reactive.Property(temp2, HSMRO_accessor_SelectableRectangle_SelectionColor.Singleton);
        var temp4 = new global::Fuse.Controls.Text();
        var temp5 = new global::Fuse.Reactive.DataBinding(add1_Value_inst, temp1, Fuse.Reactive.BindingMode.Read);
        var temp6 = new global::Fuse.Selection.WhileSelected();
        var temp7 = new global::Fuse.Animations.Scale();
        var temp8 = new global::Fuse.Animations.Change<float4>(this_Color_inst);
        var temp9 = new global::Fuse.Gestures.Clicked();
        var temp10 = new global::Fuse.Selection.ToggleSelection();
        var temp11 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp12 = new global::Fuse.Reactive.DataBinding(this_Color_inst, temp3, Fuse.Reactive.BindingMode.Default);
        this.CornerRadius = float4(2f, 2f, 2f, 2f);
        this.Width = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        this.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        this.SourceLineNumber = 10;
        this.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        global::Fuse.Controls.DockPanel.SetDock(this, Fuse.Layouts.Dock.Top);
        temp4.Color = float4(0.7607843f, 0.7607843f, 0.7607843f, 0.9960784f);
        temp4.SourceLineNumber = 13;
        temp4.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        add1.Name = __selector4;
        add1.SourceLineNumber = 15;
        add1.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        add1.Bindings.Add(temp5);
        temp1.SourceLineNumber = 15;
        temp1.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        temp.SourceLineNumber = 15;
        temp.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        temp6.SourceLineNumber = 17;
        temp6.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        temp6.Animators.Add(temp7);
        temp6.Animators.Add(temp8);
        temp7.Factor = 1.3f;
        temp7.Duration = 0.5;
        temp7.Easing = Fuse.Animations.Easing.BackOut;
        temp7.EasingBack = Fuse.Animations.Easing.BackIn;
        temp8.Value = float4(0.4588235f, 0.682353f, 0.1882353f, 1f);
        temp8.Duration = 0.5;
        temp9.SourceLineNumber = 22;
        temp9.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        temp9.Actions.Add(temp10);
        temp9.Nodes.Add(temp11);
        temp10.SourceLineNumber = 23;
        temp10.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        temp11.Code = "\n\t\t\t\t\t\t\tcancel_type = this.ID.value;\n\t\t\t\t\t\t";
        temp11.LineNumber = 24;
        temp11.FileName = "Pages/Menu_Supplier/Confirm.ux";
        temp11.SourceLineNumber = 24;
        temp11.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        temp3.SourceLineNumber = 10;
        temp3.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        temp2.SourceLineNumber = 10;
        temp2.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(add1);
        __g_nametable.Properties.Add(this_ID_inst);
        __g_nametable.Properties.Add(this_SelectionColor_inst);
        this.Children.Add(temp4);
        this.Children.Add(add1);
        this.Children.Add(temp6);
        this.Children.Add(temp9);
        this.Bindings.Add(temp12);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Color";
    static global::Uno.UX.Selector __selector2 = "ID";
    static global::Uno.UX.Selector __selector3 = "SelectionColor";
    static global::Uno.UX.Selector __selector4 = "add1";
}
