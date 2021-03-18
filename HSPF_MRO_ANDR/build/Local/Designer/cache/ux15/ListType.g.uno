[Uno.Compiler.UxGenerated]
public partial class ListType: Fuse.Controls.DockPanel
{
    string _field_USR_NM;
    [global::Uno.UX.UXOriginSetter("SetUSR_NM")]
    public string USR_NM
    {
        get { return _field_USR_NM; }
        set { SetUSR_NM(value, null); }
    }
    public void SetUSR_NM(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_USR_NM)
        {
            _field_USR_NM = value;
            OnPropertyChanged("USR_NM", origin);
        }
    }
    string _field_USR_ID;
    [global::Uno.UX.UXOriginSetter("SetUSR_ID")]
    public string USR_ID
    {
        get { return _field_USR_ID; }
        set { SetUSR_ID(value, null); }
    }
    public void SetUSR_ID(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_USR_ID)
        {
            _field_USR_ID = value;
            OnPropertyChanged("USR_ID", origin);
        }
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<string> chk_line_usr_Value_inst;
    global::Uno.UX.Property<float4> theBack_Color_inst;
    global::Uno.UX.Property<Fuse.Elements.Visibility> theCheck_Visibility_inst;
    global::Uno.UX.Property<string> temp3_Value_inst;
    internal global::Fuse.Controls.Rectangle theBack;
    internal global::Fuse.Controls.Image theCheck;
    internal global::Fuse.Controls.Text chk_line_usr;
    static ListType()
    {
    }
    [global::Uno.UX.UXConstructor]
    public ListType()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp4 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Selection.Selectable();
        temp_Value_inst = new HSMRO_FuseSelectionSelectable_Value_Property(temp, __selector0);
        var temp5 = new global::Fuse.Reactive.Property(temp4, HSMRO_accessor_ListType_USR_NM.Singleton);
        var temp6 = new global::Fuse.Reactive.Constant(this);
        var temp1 = new global::Fuse.Controls.Text();
        temp1_Value_inst = new HSMRO_FuseControlsTextControl_Value_Property(temp1, __selector0);
        var temp7 = new global::Fuse.Reactive.Property(temp6, HSMRO_accessor_ListType_USR_NM.Singleton);
        var temp8 = new global::Fuse.Reactive.Constant(this);
        var temp2 = new global::Fuse.Controls.Text();
        temp2_Value_inst = new HSMRO_FuseControlsTextControl_Value_Property(temp2, __selector0);
        var temp9 = new global::Fuse.Reactive.Property(temp8, HSMRO_accessor_ListType_USR_ID.Singleton);
        chk_line_usr = new global::Fuse.Controls.Text();
        chk_line_usr_Value_inst = new HSMRO_FuseControlsTextControl_Value_Property(chk_line_usr, __selector0);
        var temp10 = new global::Fuse.Reactive.Data("chk_line_usr");
        theBack = new global::Fuse.Controls.Rectangle();
        theBack_Color_inst = new HSMRO_FuseControlsShape_Color_Property(theBack, __selector1);
        theCheck = new global::Fuse.Controls.Image();
        theCheck_Visibility_inst = new HSMRO_FuseElementsElement_Visibility_Property(theCheck, __selector2);
        var temp11 = new global::Fuse.Reactive.Constant(this);
        var temp3 = new global::Fuse.Animations.Change<string>(chk_line_usr_Value_inst);
        temp3_Value_inst = new HSMRO_FuseAnimationsChangestring_Value_Property(temp3, __selector0);
        var temp12 = new global::Fuse.Reactive.Property(temp11, HSMRO_accessor_ListType_USR_ID.Singleton);
        var temp13 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp5, Fuse.Reactive.BindingMode.Read);
        var temp14 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp7, Fuse.Reactive.BindingMode.Read);
        var temp15 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp9, Fuse.Reactive.BindingMode.Read);
        var temp16 = new global::Fuse.Reactive.DataBinding(chk_line_usr_Value_inst, temp10, Fuse.Reactive.BindingMode.Default);
        var temp17 = new global::Fuse.Selection.WhileSelected();
        var temp18 = new global::Fuse.Animations.Change<float4>(theBack_Color_inst);
        var temp19 = new global::Fuse.Animations.Change<Fuse.Elements.Visibility>(theCheck_Visibility_inst);
        var temp20 = new global::Fuse.Reactive.DataBinding(temp3_Value_inst, temp12, Fuse.Reactive.BindingMode.Read);
        var temp21 = new global::Fuse.Gestures.Tapped();
        var temp22 = new global::Fuse.Selection.ToggleSelection();
        this.Alignment = Fuse.Elements.Alignment.Default;
        this.Padding = float4(5f, 5f, 5f, 5f);
        this.SourceLineNumber = 18;
        this.SourceFileName = "Pages/Menu_Customer/SubPage_appr.ux";
        temp.SourceLineNumber = 22;
        temp.SourceFileName = "Pages/Menu_Customer/SubPage_appr.ux";
        temp.Bindings.Add(temp13);
        temp5.SourceLineNumber = 22;
        temp5.SourceFileName = "Pages/Menu_Customer/SubPage_appr.ux";
        temp4.SourceLineNumber = 22;
        temp4.SourceFileName = "Pages/Menu_Customer/SubPage_appr.ux";
        theBack.CornerRadius = float4(5f, 5f, 5f, 5f);
        theBack.Color = float4(1f, 1f, 1f, 1f);
        theBack.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        theBack.Layer = Fuse.Layer.Background;
        theBack.Name = __selector3;
        theBack.SourceLineNumber = 23;
        theBack.SourceFileName = "Pages/Menu_Customer/SubPage_appr.ux";
        theCheck.Color = float4(0f, 0.4f, 0f, 1f);
        theCheck.Width = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        theCheck.Visibility = Fuse.Elements.Visibility.Hidden;
        theCheck.Name = __selector4;
        theCheck.SourceLineNumber = 25;
        theCheck.SourceFileName = "Pages/Menu_Customer/SubPage_appr.ux";
        global::Fuse.Controls.DockPanel.SetDock(theCheck, Fuse.Layouts.Dock.Right);
        theCheck.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/Icons/check.png"));
        temp1.FontSize = 20f;
        temp1.Alignment = Fuse.Elements.Alignment.Default;
        temp1.SourceLineNumber = 26;
        temp1.SourceFileName = "Pages/Menu_Customer/SubPage_appr.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp1, Fuse.Layouts.Dock.Top);
        temp1.Font = global::MainView.AGOTHIC14;
        temp1.Bindings.Add(temp14);
        temp7.SourceLineNumber = 26;
        temp7.SourceFileName = "Pages/Menu_Customer/SubPage_appr.ux";
        temp6.SourceLineNumber = 26;
        temp6.SourceFileName = "Pages/Menu_Customer/SubPage_appr.ux";
        temp2.FontSize = 1f;
        temp2.Visibility = Fuse.Elements.Visibility.Hidden;
        temp2.Opacity = 1f;
        temp2.Layer = Fuse.Layer.Background;
        temp2.SourceLineNumber = 27;
        temp2.SourceFileName = "Pages/Menu_Customer/SubPage_appr.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp2, Fuse.Layouts.Dock.Fill);
        temp2.Bindings.Add(temp15);
        temp9.SourceLineNumber = 27;
        temp9.SourceFileName = "Pages/Menu_Customer/SubPage_appr.ux";
        temp8.SourceLineNumber = 27;
        temp8.SourceFileName = "Pages/Menu_Customer/SubPage_appr.ux";
        chk_line_usr.FontSize = 1f;
        chk_line_usr.Visibility = Fuse.Elements.Visibility.Hidden;
        chk_line_usr.Name = __selector5;
        chk_line_usr.SourceLineNumber = 29;
        chk_line_usr.SourceFileName = "Pages/Menu_Customer/SubPage_appr.ux";
        chk_line_usr.Bindings.Add(temp16);
        temp10.SourceLineNumber = 29;
        temp10.SourceFileName = "Pages/Menu_Customer/SubPage_appr.ux";
        temp17.SourceLineNumber = 31;
        temp17.SourceFileName = "Pages/Menu_Customer/SubPage_appr.ux";
        temp17.Animators.Add(temp18);
        temp17.Animators.Add(temp19);
        temp17.Animators.Add(temp3);
        temp17.Bindings.Add(temp20);
        temp18.Value = float4(0.6666667f, 1f, 0.6666667f, 1f);
        temp18.Duration = 0.2;
        temp19.Value = Fuse.Elements.Visibility.Visible;
        temp12.SourceLineNumber = 34;
        temp12.SourceFileName = "Pages/Menu_Customer/SubPage_appr.ux";
        temp11.SourceLineNumber = 34;
        temp11.SourceFileName = "Pages/Menu_Customer/SubPage_appr.ux";
        temp21.SourceLineNumber = 37;
        temp21.SourceFileName = "Pages/Menu_Customer/SubPage_appr.ux";
        temp21.Actions.Add(temp22);
        temp22.SourceLineNumber = 38;
        temp22.SourceFileName = "Pages/Menu_Customer/SubPage_appr.ux";
        this.Children.Add(temp);
        this.Children.Add(theBack);
        this.Children.Add(theCheck);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
        this.Children.Add(chk_line_usr);
        this.Children.Add(temp17);
        this.Children.Add(temp21);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Color";
    static global::Uno.UX.Selector __selector2 = "Visibility";
    static global::Uno.UX.Selector __selector3 = "theBack";
    static global::Uno.UX.Selector __selector4 = "theCheck";
    static global::Uno.UX.Selector __selector5 = "chk_line_usr";
}
