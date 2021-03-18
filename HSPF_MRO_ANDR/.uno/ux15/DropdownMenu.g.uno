[Uno.Compiler.UxGenerated]
public partial class DropdownMenu: Fuse.Controls.Panel
{
    object _field_ListItems;
    [global::Uno.UX.UXOriginSetter("SetListItems")]
    public object ListItems
    {
        get { return _field_ListItems; }
        set { SetListItems(value, null); }
    }
    public void SetListItems(object value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_ListItems)
        {
            _field_ListItems = value;
            OnPropertyChanged("ListItems", origin);
        }
    }
    string _field_Selected;
    [global::Uno.UX.UXOriginSetter("SetSelected")]
    public string Selected
    {
        get { return _field_Selected; }
        set { SetSelected(value, null); }
    }
    public void SetSelected(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Selected)
        {
            _field_Selected = value;
            OnPropertyChanged("Selected", origin);
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
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly DropdownMenu __parent;
        [Uno.WeakReference] internal readonly DropdownMenu __parentInstance;
        public Template(DropdownMenu parent, DropdownMenu parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<float> __self_FontSize_inst;
        global::Uno.UX.Property<float4> __self_TextColor_inst;
        global::Uno.UX.Property<string> __self_Text_inst;
        global::Uno.UX.Property<Fuse.Drawing.Brush> __self_BackgroundColor_inst;
        global::Uno.UX.Property<Fuse.Drawing.Brush> __self_BorderColor_inst;
        internal global::Fuse.Reactive.EventBinding temp_eb9;
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::DropdownOption();
            var temp = new global::Fuse.Reactive.Constant(__parent);
            __self_FontSize_inst = new HSMRO_DropdownOption_FontSize_Property(__self, __selector0);
            var temp1 = new global::Fuse.Reactive.Property(temp, HSMRO_accessor_DropdownMenu_FontSize.Singleton);
            var temp2 = new global::Fuse.Reactive.Constant(__parent);
            __self_TextColor_inst = new HSMRO_DropdownOption_TextColor_Property(__self, __selector1);
            var temp3 = new global::Fuse.Reactive.Property(temp2, HSMRO_accessor_DropdownMenu_TextColor.Singleton);
            __self_Text_inst = new HSMRO_DropdownOption_Text_Property(__self, __selector2);
            var temp4 = new global::Fuse.Reactive.Data("name");
            var temp5 = new global::Fuse.Reactive.Constant(__parent);
            __self_BackgroundColor_inst = new HSMRO_DropdownOption_BackgroundColor_Property(__self, __selector3);
            var temp6 = new global::Fuse.Reactive.Property(temp5, HSMRO_accessor_DropdownMenu_BackgroundColor.Singleton);
            var temp7 = new global::Fuse.Reactive.Data("onSelected");
            var temp8 = new global::Fuse.Reactive.Constant(__parent);
            __self_BorderColor_inst = new HSMRO_DropdownOption_BorderColor_Property(__self, __selector4);
            var temp9 = new global::Fuse.Reactive.Property(temp8, HSMRO_accessor_DropdownMenu_BorderColor.Singleton);
            var temp10 = new global::Fuse.Reactive.DataBinding(__self_FontSize_inst, temp1, Fuse.Reactive.BindingMode.Read);
            var temp11 = new global::Fuse.Reactive.DataBinding(__self_TextColor_inst, temp3, Fuse.Reactive.BindingMode.Read);
            var temp12 = new global::Fuse.Reactive.DataBinding(__self_Text_inst, temp4, Fuse.Reactive.BindingMode.Default);
            var temp13 = new global::Fuse.Reactive.DataBinding(__self_BackgroundColor_inst, temp6, Fuse.Reactive.BindingMode.Read);
            temp_eb9 = new global::Fuse.Reactive.EventBinding(temp7);
            var temp14 = new global::Fuse.Reactive.DataBinding(__self_BorderColor_inst, temp9, Fuse.Reactive.BindingMode.Read);
            __self.SourceLineNumber = 77;
            __self.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
            global::Fuse.Gestures.Clicked.AddHandler(__self, temp_eb9.OnEvent);
            temp1.SourceLineNumber = 77;
            temp1.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
            temp.SourceLineNumber = 77;
            temp.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
            temp3.SourceLineNumber = 77;
            temp3.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
            temp2.SourceLineNumber = 77;
            temp2.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
            temp4.SourceLineNumber = 77;
            temp4.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
            temp6.SourceLineNumber = 77;
            temp6.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
            temp5.SourceLineNumber = 77;
            temp5.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
            temp7.SourceLineNumber = 77;
            temp7.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
            temp9.SourceLineNumber = 77;
            temp9.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
            temp8.SourceLineNumber = 77;
            temp8.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
            __self.Bindings.Add(temp10);
            __self.Bindings.Add(temp11);
            __self.Bindings.Add(temp12);
            __self.Bindings.Add(temp13);
            __self.Bindings.Add(temp_eb9);
            __self.Bindings.Add(temp14);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "FontSize";
        static global::Uno.UX.Selector __selector1 = "TextColor";
        static global::Uno.UX.Selector __selector2 = "Text";
        static global::Uno.UX.Selector __selector3 = "BackgroundColor";
        static global::Uno.UX.Selector __selector4 = "BorderColor";
    }
    global::Uno.UX.Property<string> this_Selected_inst;
    global::Uno.UX.Property<Fuse.Drawing.Brush> temp_Brush_inst;
    global::Uno.UX.Property<float4> temp1_TextColor_inst;
    global::Uno.UX.Property<float> temp1_FontSize_inst;
    global::Uno.UX.Property<string> temp1_Text_inst;
    global::Uno.UX.Property<Fuse.Drawing.Brush> temp1_BackgroundColor_inst;
    global::Uno.UX.Property<Fuse.Drawing.Brush> temp1_BorderColor_inst;
    global::Uno.UX.Property<object> temp2_Items_inst;
    global::Uno.UX.Property<object> this_ListItems_inst;
    global::Uno.UX.Property<float4> this_TextColor_inst;
    global::Uno.UX.Property<Fuse.Drawing.Brush> this_BackgroundColor_inst;
    global::Uno.UX.Property<Fuse.Drawing.Brush> this_BorderColor_inst;
    global::Uno.UX.Property<float> this_FontSize_inst;
    internal global::Fuse.Triggers.WhileTrue expandDropdown;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "expandDropdown"
    };
    static DropdownMenu()
    {
    }
    [global::Uno.UX.UXConstructor]
    public DropdownMenu()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this_ListItems_inst = new HSMRO_DropdownMenu_ListItems_Property(this, __selector0);
        this_Selected_inst = new HSMRO_DropdownMenu_Selected_Property(this, __selector1);
        this_TextColor_inst = new HSMRO_DropdownMenu_TextColor_Property(this, __selector2);
        this_BackgroundColor_inst = new HSMRO_DropdownMenu_BackgroundColor_Property(this, __selector3);
        this_BorderColor_inst = new HSMRO_DropdownMenu_BorderColor_Property(this, __selector4);
        this_FontSize_inst = new HSMRO_DropdownMenu_FontSize_Property(this, __selector5);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp3 = new global::Fuse.Reactive.Data("selected");
        var temp4 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Drawing.Stroke();
        temp_Brush_inst = new HSMRO_FuseDrawingStroke_Brush_Property(temp, __selector6);
        var temp5 = new global::Fuse.Reactive.Property(temp4, HSMRO_accessor_DropdownMenu_BorderColor.Singleton);
        var temp6 = new global::Fuse.Reactive.Constant(this);
        var temp1 = new global::DropdownSelectedItem();
        temp1_TextColor_inst = new HSMRO_DropdownSelectedItem_TextColor_Property(temp1, __selector2);
        var temp7 = new global::Fuse.Reactive.Property(temp6, HSMRO_accessor_DropdownMenu_TextColor.Singleton);
        var temp8 = new global::Fuse.Reactive.Constant(this);
        temp1_FontSize_inst = new HSMRO_DropdownSelectedItem_FontSize_Property(temp1, __selector5);
        var temp9 = new global::Fuse.Reactive.Property(temp8, HSMRO_accessor_DropdownMenu_FontSize.Singleton);
        temp1_Text_inst = new HSMRO_DropdownSelectedItem_Text_Property(temp1, __selector7);
        var temp10 = new global::Fuse.Reactive.Data("selected");
        var temp11 = new global::Fuse.Reactive.Constant(this);
        temp1_BackgroundColor_inst = new HSMRO_DropdownSelectedItem_BackgroundColor_Property(temp1, __selector3);
        var temp12 = new global::Fuse.Reactive.Property(temp11, HSMRO_accessor_DropdownMenu_BackgroundColor.Singleton);
        var temp13 = new global::Fuse.Reactive.Constant(this);
        temp1_BorderColor_inst = new HSMRO_DropdownSelectedItem_BorderColor_Property(temp1, __selector4);
        var temp14 = new global::Fuse.Reactive.Property(temp13, HSMRO_accessor_DropdownMenu_BorderColor.Singleton);
        var temp15 = new global::Fuse.Reactive.Constant(this);
        var temp2 = new global::Fuse.Reactive.Each();
        temp2_Items_inst = new HSMRO_FuseReactiveEach_Items_Property(temp2, __selector8);
        var temp16 = new global::Fuse.Reactive.Property(temp15, HSMRO_accessor_DropdownMenu_ListItems.Singleton);
        var temp17 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp18 = new global::Fuse.Controls.Panel();
        var temp19 = new global::Fuse.Reactive.DataBinding(this_Selected_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp20 = new global::Fuse.Controls.Rectangle();
        var temp21 = new global::Fuse.Reactive.DataBinding(temp_Brush_inst, temp5, Fuse.Reactive.BindingMode.Read);
        var temp22 = new global::Fuse.Reactive.DataBinding(temp1_TextColor_inst, temp7, Fuse.Reactive.BindingMode.Read);
        var temp23 = new global::Fuse.Reactive.DataBinding(temp1_FontSize_inst, temp9, Fuse.Reactive.BindingMode.Read);
        var temp24 = new global::Fuse.Reactive.DataBinding(temp1_Text_inst, temp10, Fuse.Reactive.BindingMode.Default);
        var temp25 = new global::Fuse.Reactive.DataBinding(temp1_BackgroundColor_inst, temp12, Fuse.Reactive.BindingMode.Read);
        var temp26 = new global::Fuse.Reactive.DataBinding(temp1_BorderColor_inst, temp14, Fuse.Reactive.BindingMode.Read);
        var temp27 = new global::Fuse.Gestures.Clicked();
        var temp28 = new global::Fuse.Triggers.Actions.Toggle();
        expandDropdown = new global::Fuse.Triggers.WhileTrue();
        var temp29 = new global::Fuse.Controls.StackPanel();
        var temp30 = new Template(this, this);
        var temp31 = new global::Fuse.Reactive.DataBinding(temp2_Items_inst, temp16, Fuse.Reactive.BindingMode.Read);
        var temp32 = new global::Fuse.Drawing.StaticSolidColor(float4(0.9921569f, 0.9921569f, 0.9921569f, 1f));
        var temp33 = new global::Fuse.Drawing.StaticSolidColor(float4(0.7490196f, 0.7490196f, 0.7490196f, 1f));
        this.TextColor = float4(0f, 0f, 0f, 1f);
        this.FontSize = 14f;
        this.Name = __selector9;
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp17.Code = "\n\tvar Observable = require('FuseJS/Observable');\n\n\tvar selected = Observable();\n\n\tfunction onSelected(arg) {\n\t\tif(arg.data && arg.data.name) {\n\t\t\tselected.value = arg.data.name;\n\t\t}\n\t}\n\n\tmodule.exports = {\n\t\tselected: selected,\n\t\tonSelected: onSelected\n\t}\n\t";
        temp17.LineNumber = 12;
        temp17.FileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp17.SourceLineNumber = 12;
        temp17.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp18.Width = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
        temp18.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp18.SourceLineNumber = 64;
        temp18.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp18.Children.Add(temp20);
        temp18.Children.Add(temp1);
        temp18.Children.Add(temp27);
        temp18.Children.Add(expandDropdown);
        temp18.Bindings.Add(temp19);
        temp3.SourceLineNumber = 65;
        temp3.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp20.SourceLineNumber = 66;
        temp20.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp20.Strokes.Add(temp);
        temp20.Bindings.Add(temp21);
        temp.Width = 1f;
        temp5.SourceLineNumber = 67;
        temp5.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp4.SourceLineNumber = 67;
        temp4.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp1.SourceLineNumber = 69;
        temp1.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp1.Bindings.Add(temp22);
        temp1.Bindings.Add(temp23);
        temp1.Bindings.Add(temp24);
        temp1.Bindings.Add(temp25);
        temp1.Bindings.Add(temp26);
        temp7.SourceLineNumber = 69;
        temp7.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp6.SourceLineNumber = 69;
        temp6.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp9.SourceLineNumber = 69;
        temp9.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp8.SourceLineNumber = 69;
        temp8.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp10.SourceLineNumber = 69;
        temp10.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp12.SourceLineNumber = 69;
        temp12.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp11.SourceLineNumber = 69;
        temp11.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp14.SourceLineNumber = 69;
        temp14.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp13.SourceLineNumber = 69;
        temp13.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp27.SourceLineNumber = 70;
        temp27.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp27.Actions.Add(temp28);
        temp28.SourceLineNumber = 71;
        temp28.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp28.Target = expandDropdown;
        expandDropdown.Name = __selector10;
        expandDropdown.SourceLineNumber = 74;
        expandDropdown.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        expandDropdown.Nodes.Add(temp29);
        temp29.Offset = new Uno.UX.Size2(new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified), new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified));
        temp29.SourceLineNumber = 75;
        temp29.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp29.Children.Add(temp2);
        temp2.SourceLineNumber = 76;
        temp2.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp2.Templates.Add(temp30);
        temp2.Bindings.Add(temp31);
        temp16.SourceLineNumber = 76;
        temp16.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        temp15.SourceLineNumber = 76;
        temp15.SourceFileName = "Pages/Menu_Customer/DropdownMenu.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(expandDropdown);
        __g_nametable.Properties.Add(this_ListItems_inst);
        __g_nametable.Properties.Add(this_Selected_inst);
        __g_nametable.Properties.Add(this_TextColor_inst);
        __g_nametable.Properties.Add(this_BackgroundColor_inst);
        __g_nametable.Properties.Add(this_BorderColor_inst);
        __g_nametable.Properties.Add(this_FontSize_inst);
        this.BackgroundColor = temp32;
        this.BorderColor = temp33;
        this.Children.Add(temp17);
        this.Children.Add(temp18);
    }
    static global::Uno.UX.Selector __selector0 = "ListItems";
    static global::Uno.UX.Selector __selector1 = "Selected";
    static global::Uno.UX.Selector __selector2 = "TextColor";
    static global::Uno.UX.Selector __selector3 = "BackgroundColor";
    static global::Uno.UX.Selector __selector4 = "BorderColor";
    static global::Uno.UX.Selector __selector5 = "FontSize";
    static global::Uno.UX.Selector __selector6 = "Brush";
    static global::Uno.UX.Selector __selector7 = "Text";
    static global::Uno.UX.Selector __selector8 = "Items";
    static global::Uno.UX.Selector __selector9 = "menu";
    static global::Uno.UX.Selector __selector10 = "expandDropdown";
}
