[Uno.Compiler.UxGenerated]
public partial class CycleButton: Fuse.Controls.Rectangle
{
    object _field_Modes;
    [global::Uno.UX.UXOriginSetter("SetModes")]
    public object Modes
    {
        get { return _field_Modes; }
        set { SetModes(value, null); }
    }
    public void SetModes(object value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Modes)
        {
            _field_Modes = value;
            OnPropertyChanged("Modes", origin);
        }
    }
    int _field_CurrentMode;
    [global::Uno.UX.UXOriginSetter("SetCurrentMode")]
    public int CurrentMode
    {
        get { return _field_CurrentMode; }
        set { SetCurrentMode(value, null); }
    }
    public void SetCurrentMode(int value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_CurrentMode)
        {
            _field_CurrentMode = value;
            OnPropertyChanged("CurrentMode", origin);
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly CycleButton __parent;
        [Uno.WeakReference] internal readonly CycleButton __parentInstance;
        public Template(CycleButton parent, CycleButton parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<bool> __self_IsActive_inst;
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::ModeIndicator();
            var temp = new global::Fuse.Reactive.IndexFunction();
            var temp1 = new global::Fuse.Reactive.Data("currentMode");
            __self_IsActive_inst = new HSMRO_ModeIndicator_IsActive_Property(__self, __selector0);
            var temp2 = new global::Fuse.Reactive.Equal(temp, temp1);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_IsActive_inst, temp2, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 42;
            __self.SourceFileName = "Pages/Menu_Supplier/CycleButton.ux";
            temp2.SourceLineNumber = 42;
            temp2.SourceFileName = "Pages/Menu_Supplier/CycleButton.ux";
            temp.SourceLineNumber = 42;
            temp.SourceFileName = "Pages/Menu_Supplier/CycleButton.ux";
            temp1.SourceLineNumber = 42;
            temp1.SourceFileName = "Pages/Menu_Supplier/CycleButton.ux";
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "IsActive";
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<object> temp1_Items_inst;
    global::Uno.UX.Property<object> this_Modes_inst;
    global::Uno.UX.Property<int> this_CurrentMode_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb100;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "temp_eb100"
    };
    static CycleButton()
    {
    }
    [global::Uno.UX.UXConstructor]
    public CycleButton()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this_Modes_inst = new HSMRO_CycleButton_Modes_Property(this, __selector0);
        this_CurrentMode_inst = new HSMRO_CycleButton_CurrentMode_Property(this, __selector1);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp2 = new global::Fuse.Reactive.Data("nextState");
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new HSMRO_FuseControlsTextControl_Value_Property(temp, __selector2);
        var temp3 = new global::Fuse.Reactive.Data("currentModeLabel");
        var temp4 = new global::Fuse.Reactive.Constant(this);
        var temp1 = new global::Fuse.Reactive.Each();
        temp1_Items_inst = new HSMRO_FuseReactiveEach_Items_Property(temp1, __selector3);
        var temp5 = new global::Fuse.Reactive.Property(temp4, HSMRO_accessor_CycleButton_Modes.Singleton);
        var temp6 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp7 = new global::Fuse.Gestures.Clicked();
        temp_eb100 = new global::Fuse.Reactive.EventBinding(temp2);
        var temp8 = new global::Fuse.Gestures.WhilePressed();
        var temp9 = new global::Fuse.Animations.Scale();
        var temp10 = new global::Fuse.Controls.DockPanel();
        var temp11 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp12 = new global::Fuse.Controls.Panel();
        var temp13 = new global::Fuse.Controls.StackPanel();
        var temp14 = new Template(this, this);
        var temp15 = new global::Fuse.Reactive.DataBinding(temp1_Items_inst, temp5, Fuse.Reactive.BindingMode.Read);
        this.CornerRadius = float4(2f, 2f, 2f, 2f);
        this.Color = Fuse.Drawing.Colors.White;
        this.StrokeColor = float4(0.8784314f, 0.8784314f, 0.8784314f, 1f);
        this.StrokeWidth = 2f;
        this.Padding = float4(4f, 4f, 4f, 4f);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/Menu_Supplier/CycleButton.ux";
        temp6.Code = "\n        var modes = this.Modes;\n        var currentMode = this.CurrentMode;\n\n        var currentModeLabel = currentMode.combineLatest(modes, function(idx, list) {\n            return list[idx].label;\n        });\n\n        function nextState() {\n            currentMode.value = (currentMode.value + 1) % modes.value.length;\n        }\n\n        module.exports = {\n            nextState: nextState,\n            currentMode: currentMode,\n            currentModeLabel: currentModeLabel\n        }\n    ";
        temp6.LineNumber = 5;
        temp6.FileName = "Pages/Menu_Supplier/CycleButton.ux";
        temp6.SourceLineNumber = 5;
        temp6.SourceFileName = "Pages/Menu_Supplier/CycleButton.ux";
        temp7.SourceLineNumber = 24;
        temp7.SourceFileName = "Pages/Menu_Supplier/CycleButton.ux";
        temp7.Handler += temp_eb100.OnEvent;
        temp7.Bindings.Add(temp_eb100);
        temp2.SourceLineNumber = 24;
        temp2.SourceFileName = "Pages/Menu_Supplier/CycleButton.ux";
        temp8.SourceLineNumber = 26;
        temp8.SourceFileName = "Pages/Menu_Supplier/CycleButton.ux";
        temp8.Animators.Add(temp9);
        temp9.Factor = 0.98f;
        temp10.SourceLineNumber = 37;
        temp10.SourceFileName = "Pages/Menu_Supplier/CycleButton.ux";
        temp10.Children.Add(temp);
        temp10.Children.Add(temp12);
        temp.Color = float4(0.3372549f, 0.8f, 0.7058824f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.SourceLineNumber = 38;
        temp.SourceFileName = "Pages/Menu_Supplier/CycleButton.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp, Fuse.Layouts.Dock.Fill);
        temp.Font = global::MainView.AGOTHIC14;
        temp.Bindings.Add(temp11);
        temp3.SourceLineNumber = 38;
        temp3.SourceFileName = "Pages/Menu_Supplier/CycleButton.ux";
        temp12.Width = new Uno.UX.Size(16f, Uno.UX.Unit.Unspecified);
        temp12.Margin = float4(8f, 0f, 0f, 0f);
        temp12.SourceLineNumber = 39;
        temp12.SourceFileName = "Pages/Menu_Supplier/CycleButton.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp12, Fuse.Layouts.Dock.Right);
        temp12.Children.Add(temp13);
        temp13.ItemSpacing = 2f;
        temp13.Alignment = Fuse.Elements.Alignment.Center;
        temp13.SourceLineNumber = 40;
        temp13.SourceFileName = "Pages/Menu_Supplier/CycleButton.ux";
        temp13.Children.Add(temp1);
        temp1.SourceLineNumber = 41;
        temp1.SourceFileName = "Pages/Menu_Supplier/CycleButton.ux";
        temp1.Templates.Add(temp14);
        temp1.Bindings.Add(temp15);
        temp5.SourceLineNumber = 41;
        temp5.SourceFileName = "Pages/Menu_Supplier/CycleButton.ux";
        temp4.SourceLineNumber = 41;
        temp4.SourceFileName = "Pages/Menu_Supplier/CycleButton.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(temp_eb100);
        __g_nametable.Properties.Add(this_Modes_inst);
        __g_nametable.Properties.Add(this_CurrentMode_inst);
        this.Children.Add(temp6);
        this.Children.Add(temp7);
        this.Children.Add(temp8);
        this.Children.Add(temp10);
    }
    static global::Uno.UX.Selector __selector0 = "Modes";
    static global::Uno.UX.Selector __selector1 = "CurrentMode";
    static global::Uno.UX.Selector __selector2 = "Value";
    static global::Uno.UX.Selector __selector3 = "Items";
}
