[Uno.Compiler.UxGenerated]
public partial class Combobox: Fuse.Controls.Panel
{
    object _field_Options;
    [global::Uno.UX.UXOriginSetter("SetOptions")]
    public object Options
    {
        get { return _field_Options; }
        set { SetOptions(value, null); }
    }
    public void SetOptions(object value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Options)
        {
            _field_Options = value;
            OnPropertyChanged("Options", origin);
        }
    }
    object _field_Selected;
    [global::Uno.UX.UXOriginSetter("SetSelected")]
    public object Selected
    {
        get { return _field_Selected; }
        set { SetSelected(value, null); }
    }
    public void SetSelected(object value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Selected)
        {
            _field_Selected = value;
            OnPropertyChanged("Selected", origin);
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly Combobox __parent;
        [Uno.WeakReference] internal readonly Combobox __parentInstance;
        public Template(Combobox parent, Combobox parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<float4> __self_Color_inst;
        global::Uno.UX.Property<bool> temp1_Value_inst;
        internal global::Fuse.Reactive.EventBinding temp_eb1;
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Panel();
            var temp = new global::Fuse.Controls.Text();
            temp_Value_inst = new Combobox_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp2 = new global::Fuse.Reactive.Data("title");
            __self_Color_inst = new Combobox_FuseControlsPanel_Color_Property(__self, __selector1);
            var temp1 = new global::Fuse.Triggers.WhileTrue();
            temp1_Value_inst = new Combobox_FuseTriggersWhileBool_Value_Property(temp1, __selector0);
            var temp3 = new global::Fuse.Reactive.Data("isSelected");
            var temp4 = new global::Fuse.Reactive.Data("clicked");
            var temp5 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
            var temp6 = new global::Fuse.Gestures.WhilePressed();
            var temp7 = new global::Fuse.Animations.Change<float4>(__self_Color_inst);
            var temp8 = new global::Fuse.Animations.Change<float4>(__self_Color_inst);
            var temp9 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
            temp_eb1 = new global::Fuse.Reactive.EventBinding(temp4);
            __self.Color = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
            __self.Name = __selector2;
            __self.SourceLineNumber = 53;
            __self.SourceFileName = "Combobox.ux";
            global::Fuse.Gestures.Clicked.AddHandler(__self, temp_eb1.OnEvent);
            temp.Margin = float4(20f, 20f, 20f, 20f);
            temp.SourceLineNumber = 54;
            temp.SourceFileName = "Combobox.ux";
            temp.Bindings.Add(temp5);
            temp2.SourceLineNumber = 54;
            temp2.SourceFileName = "Combobox.ux";
            temp6.SourceLineNumber = 55;
            temp6.SourceFileName = "Combobox.ux";
            temp6.Animators.Add(temp7);
            temp7.Value = float4(0.8666667f, 0.8666667f, 0.8666667f, 1f);
            temp7.Duration = 0.05;
            temp7.DurationBack = 0.1;
            temp1.SourceLineNumber = 58;
            temp1.SourceFileName = "Combobox.ux";
            temp1.Animators.Add(temp8);
            temp1.Bindings.Add(temp9);
            temp8.Value = float4(0.8666667f, 0.8666667f, 1f, 1f);
            temp3.SourceLineNumber = 58;
            temp3.SourceFileName = "Combobox.ux";
            temp4.SourceLineNumber = 53;
            temp4.SourceFileName = "Combobox.ux";
            __self.Children.Add(temp);
            __self.Children.Add(temp6);
            __self.Children.Add(temp1);
            __self.Bindings.Add(temp_eb1);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Color";
        static global::Uno.UX.Selector __selector2 = "item";
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<float4> header_Color_inst;
    global::Uno.UX.Property<object> temp1_Items_inst;
    global::Uno.UX.Property<float> dropdown_Opacity_inst;
    global::Uno.UX.Property<Fuse.Elements.Visibility> dropdown_Visibility_inst;
    global::Uno.UX.Property<bool> temp2_Value_inst;
    global::Uno.UX.Property<object> this_Options_inst;
    global::Uno.UX.Property<object> this_Selected_inst;
    [global::Uno.UX.UXGlobalResource("FontAwesome")] public static readonly Fuse.Font FontAwesome;
    internal global::Fuse.Controls.Panel header;
    internal global::Fuse.Reactive.EventBinding temp_eb0;
    internal global::Fuse.Controls.Panel dropdown;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "header",
        "temp_eb0",
        "dropdown"
    };
    static Combobox()
    {
        FontAwesome = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import("../../../../../FontAwesome.otf")));
        global::Uno.UX.Resource.SetGlobalKey(FontAwesome, "FontAwesome");
    }
    [global::Uno.UX.UXConstructor]
    public Combobox()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this_Options_inst = new Combobox_Combobox_Options_Property(this, __selector0);
        this_Selected_inst = new Combobox_Combobox_Selected_Property(this, __selector1);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new Combobox_FuseControlsTextControl_Value_Property(temp, __selector2);
        var temp3 = new global::Fuse.Reactive.Data("selected");
        header = new global::Fuse.Controls.Panel();
        header_Color_inst = new Combobox_FuseControlsPanel_Color_Property(header, __selector3);
        var temp4 = new global::Fuse.Reactive.Data("toggleOpen");
        var temp1 = new global::Fuse.Reactive.Each();
        temp1_Items_inst = new Combobox_FuseReactiveEach_Items_Property(temp1, __selector4);
        var temp5 = new global::Fuse.Reactive.Data("options");
        dropdown = new global::Fuse.Controls.Panel();
        dropdown_Opacity_inst = new Combobox_FuseElementsElement_Opacity_Property(dropdown, __selector5);
        dropdown_Visibility_inst = new Combobox_FuseElementsElement_Visibility_Property(dropdown, __selector6);
        var temp2 = new global::Fuse.Triggers.WhileFalse();
        temp2_Value_inst = new Combobox_FuseTriggersWhileBool_Value_Property(temp2, __selector2);
        var temp6 = new global::Fuse.Reactive.Data("isOpen");
        var temp7 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp8 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp9 = new global::Fuse.Controls.Text();
        var temp10 = new global::Fuse.Gestures.WhilePressed();
        var temp11 = new global::Fuse.Animations.Change<float4>(header_Color_inst);
        temp_eb0 = new global::Fuse.Reactive.EventBinding(temp4);
        var temp12 = new global::Fuse.Translation();
        var temp13 = new global::Fuse.Controls.ScrollView();
        var temp14 = new global::Fuse.Controls.StackPanel();
        var item = new Template(this, this);
        var temp15 = new global::Fuse.Reactive.DataBinding(temp1_Items_inst, temp5, Fuse.Reactive.BindingMode.Default);
        var temp16 = new global::Fuse.Animations.Change<float>(dropdown_Opacity_inst);
        var temp17 = new global::Fuse.Animations.Change<Fuse.Elements.Visibility>(dropdown_Visibility_inst);
        var temp18 = new global::Fuse.Animations.Move();
        var temp19 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp6, Fuse.Reactive.BindingMode.Default);
        this.Color = float4(0.8666667f, 0.8666667f, 0.8666667f, 1f);
        this.Alignment = Fuse.Elements.Alignment.Top;
        this.Margin = float4(10f, 10f, 10f, 10f);
        this.Name = __selector7;
        this.SourceLineNumber = 1;
        this.SourceFileName = "Combobox.ux";
        temp7.Code = "\n        var Observable = require(\"FuseJS/Observable\");\n\n        var self = this;\n\n        //var options = Observable(\"Foo\", \"Bar\", \"Tar\", \"moo\", \"things\");\n//        var selected = Observable(\"moo\");\n        var options = self.Options.inner();\n        var selected = self.Selected.inner();\n\n        self.Selected.inner();\n        var isOpen = Observable(false);\n\n        module.exports = {\n            isOpen: isOpen,\n            options: options.map(function(option) {\n                return {\n                    title: option,\n                    isSelected: Observable(function() {\n                        return selected.value === option;\n                    }),\n                    clicked: function() {\n                        selected.value = option;\n                        if( self.Selected.value instanceof Observable ) {\n                            self.Selected.value.value = option;\n                        }\n                        isOpen.value = false;\n                    } \n                }\n            }),\n            selected: selected,\n            toggleOpen: function () {\n                isOpen.value = !isOpen.value;\n            }\n        }\n    ";
        temp7.LineNumber = 5;
        temp7.FileName = "Combobox.ux";
        temp7.SourceLineNumber = 5;
        temp7.SourceFileName = "Combobox.ux";
        header.HitTestMode = Fuse.Elements.HitTestMode.LocalBoundsAndChildren;
        header.Name = __selector8;
        header.SourceLineNumber = 41;
        header.SourceFileName = "Combobox.ux";
        global::Fuse.Gestures.Clicked.AddHandler(header, temp_eb0.OnEvent);
        header.Children.Add(temp);
        header.Children.Add(temp9);
        header.Children.Add(temp10);
        header.Bindings.Add(temp_eb0);
        temp.Alignment = Fuse.Elements.Alignment.CenterLeft;
        temp.Margin = float4(20f, 20f, 20f, 20f);
        temp.SourceLineNumber = 42;
        temp.SourceFileName = "Combobox.ux";
        temp.Bindings.Add(temp8);
        temp3.SourceLineNumber = 42;
        temp3.SourceFileName = "Combobox.ux";
        temp9.Value = "\uF0D7";
        temp9.FontSize = 26f;
        temp9.Alignment = Fuse.Elements.Alignment.CenterRight;
        temp9.Margin = float4(20f, 20f, 20f, 20f);
        temp9.SourceLineNumber = 43;
        temp9.SourceFileName = "Combobox.ux";
        temp9.Font = global::Combobox.FontAwesome;
        temp10.SourceLineNumber = 44;
        temp10.SourceFileName = "Combobox.ux";
        temp10.Animators.Add(temp11);
        temp11.Value = float4(0.7333333f, 0.7333333f, 0.7333333f, 1f);
        temp11.Duration = 0.1;
        temp11.DurationBack = 0.1;
        temp4.SourceLineNumber = 41;
        temp4.SourceFileName = "Combobox.ux";
        dropdown.Color = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        dropdown.MaxHeight = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
        dropdown.Alignment = Fuse.Elements.Alignment.Top;
        dropdown.LayoutRole = Fuse.LayoutRole.Inert;
        dropdown.Name = __selector9;
        dropdown.SourceLineNumber = 48;
        dropdown.SourceFileName = "Combobox.ux";
        dropdown.Children.Add(temp12);
        dropdown.Children.Add(temp13);
        dropdown.Children.Add(temp2);
        temp12.Y = 1f;
        temp12.SourceLineNumber = 49;
        temp12.SourceFileName = "Combobox.ux";
        temp12.RelativeNode = this;
        temp12.RelativeTo = Fuse.TranslationModes.Size;
        temp13.SourceLineNumber = 50;
        temp13.SourceFileName = "Combobox.ux";
        temp13.Children.Add(temp14);
        temp14.SourceLineNumber = 51;
        temp14.SourceFileName = "Combobox.ux";
        temp14.Children.Add(temp1);
        temp1.SourceLineNumber = 52;
        temp1.SourceFileName = "Combobox.ux";
        temp1.Templates.Add(item);
        temp1.Bindings.Add(temp15);
        temp5.SourceLineNumber = 52;
        temp5.SourceFileName = "Combobox.ux";
        temp2.SourceLineNumber = 65;
        temp2.SourceFileName = "Combobox.ux";
        temp2.Animators.Add(temp16);
        temp2.Animators.Add(temp17);
        temp2.Animators.Add(temp18);
        temp2.Bindings.Add(temp19);
        temp16.Value = 0f;
        temp16.Duration = 0.15;
        temp16.Easing = Fuse.Animations.Easing.CubicOut;
        temp17.Value = Fuse.Elements.Visibility.Hidden;
        temp17.Delay = 0.2;
        temp18.Y = -300f;
        temp18.Duration = 0.2;
        temp18.Easing = Fuse.Animations.Easing.CubicIn;
        temp6.SourceLineNumber = 65;
        temp6.SourceFileName = "Combobox.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(header);
        __g_nametable.Objects.Add(temp_eb0);
        __g_nametable.Objects.Add(dropdown);
        __g_nametable.Properties.Add(this_Options_inst);
        __g_nametable.Properties.Add(this_Selected_inst);
        this.Children.Add(temp7);
        this.Children.Add(header);
        this.Children.Add(dropdown);
    }
    static global::Uno.UX.Selector __selector0 = "Options";
    static global::Uno.UX.Selector __selector1 = "Selected";
    static global::Uno.UX.Selector __selector2 = "Value";
    static global::Uno.UX.Selector __selector3 = "Color";
    static global::Uno.UX.Selector __selector4 = "Items";
    static global::Uno.UX.Selector __selector5 = "Opacity";
    static global::Uno.UX.Selector __selector6 = "Visibility";
    static global::Uno.UX.Selector __selector7 = "combobox";
    static global::Uno.UX.Selector __selector8 = "header";
    static global::Uno.UX.Selector __selector9 = "dropdown";
}
