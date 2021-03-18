[Uno.Compiler.UxGenerated]
public partial class CycleButton2: Fuse.Controls.Rectangle
{
    object _field_Types;
    [global::Uno.UX.UXOriginSetter("SetTypes")]
    public object Types
    {
        get { return _field_Types; }
        set { SetTypes(value, null); }
    }
    public void SetTypes(object value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Types)
        {
            _field_Types = value;
            OnPropertyChanged("Types", origin);
        }
    }
    int _field_CurrentType;
    [global::Uno.UX.UXOriginSetter("SetCurrentType")]
    public int CurrentType
    {
        get { return _field_CurrentType; }
        set { SetCurrentType(value, null); }
    }
    public void SetCurrentType(int value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_CurrentType)
        {
            _field_CurrentType = value;
            OnPropertyChanged("CurrentType", origin);
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly CycleButton2 __parent;
        [Uno.WeakReference] internal readonly CycleButton2 __parentInstance;
        public Template(CycleButton2 parent, CycleButton2 parentInstance): base(null, false)
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
            var __self = new global::TypeIndicator();
            var temp = new global::Fuse.Reactive.IndexFunction();
            var temp1 = new global::Fuse.Reactive.Data("currentType");
            __self_IsActive_inst = new HSMRO_TypeIndicator_IsActive_Property(__self, __selector0);
            var temp2 = new global::Fuse.Reactive.Equal(temp, temp1);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_IsActive_inst, temp2, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 130;
            __self.SourceFileName = "Pages/Menu_Supplier/CycleButton2.ux";
            temp2.SourceLineNumber = 130;
            temp2.SourceFileName = "Pages/Menu_Supplier/CycleButton2.ux";
            temp.SourceLineNumber = 130;
            temp.SourceFileName = "Pages/Menu_Supplier/CycleButton2.ux";
            temp1.SourceLineNumber = 130;
            temp1.SourceFileName = "Pages/Menu_Supplier/CycleButton2.ux";
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "IsActive";
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<float4> temp_Color_inst;
    global::Uno.UX.Property<object> temp1_Items_inst;
    global::Uno.UX.Property<object> this_Types_inst;
    global::Uno.UX.Property<int> this_CurrentType_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb101;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "temp_eb101"
    };
    static CycleButton2()
    {
    }
    [global::Uno.UX.UXConstructor]
    public CycleButton2()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this_Types_inst = new HSMRO_CycleButton2_Types_Property(this, __selector0);
        this_CurrentType_inst = new HSMRO_CycleButton2_CurrentType_Property(this, __selector1);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp2 = new global::Fuse.Reactive.Data("nextState");
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new HSMRO_FuseControlsTextControl_Value_Property(temp, __selector2);
        var temp3 = new global::Fuse.Reactive.Data("currentTypeLabel");
        temp_Color_inst = new HSMRO_FuseControlsTextControl_Color_Property(temp, __selector3);
        var temp4 = new global::Fuse.Reactive.Data("textColor");
        var temp5 = new global::Fuse.Reactive.Constant(this);
        var temp1 = new global::Fuse.Reactive.Each();
        temp1_Items_inst = new HSMRO_FuseReactiveEach_Items_Property(temp1, __selector4);
        var temp6 = new global::Fuse.Reactive.Property(temp5, HSMRO_accessor_CycleButton2_Types.Singleton);
        var temp7 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp8 = new global::Fuse.Gestures.Clicked();
        temp_eb101 = new global::Fuse.Reactive.EventBinding(temp2);
        var temp9 = new global::Fuse.Gestures.WhilePressed();
        var temp10 = new global::Fuse.Animations.Scale();
        var temp11 = new global::Fuse.Controls.DockPanel();
        var temp12 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp13 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp4, Fuse.Reactive.BindingMode.Default);
        var temp14 = new global::Fuse.Controls.Panel();
        var temp15 = new global::Fuse.Controls.StackPanel();
        var temp16 = new Template(this, this);
        var temp17 = new global::Fuse.Reactive.DataBinding(temp1_Items_inst, temp6, Fuse.Reactive.BindingMode.Read);
        this.CornerRadius = float4(2f, 2f, 2f, 2f);
        this.Color = Fuse.Drawing.Colors.White;
        this.StrokeColor = float4(0.8784314f, 0.8784314f, 0.8784314f, 1f);
        this.StrokeWidth = 2f;
        this.Padding = float4(4f, 4f, 4f, 4f);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/Menu_Supplier/CycleButton2.ux";
        temp7.Code = "\n        var Observable = require(\"FuseJS/Observable\");\n        var types = this.Types;\n        var currentType = this.CurrentType;\n        var textColor = Observable(\"#f58f87\");\n\n        var currentTypeLabel = currentType.combineLatest(types, function(idx, list) {\n            return list[idx].label;\n        });\n\n        function nextState() {\n            currentType.value = (currentType.value + 1) % types.value.length;\n\n            console.log('HERE1:' + (JSON.stringify(types.value) + '').indexOf('단가합의대상')); //097A60E0 56CCB4\n            console.log('HERE2:' + currentType.value); //097A60E0 56CCB4\n\n            if((JSON.stringify(types.value) + '').indexOf('결재할문서') > -1) {\n                \n                console.log('발주결재용싸이클');\n                console.log(currentType.value)\n                if(currentType.value == 1-1) {\n                    textColor.value = \"#efb134\";\n                } else if(currentType.value == 2-1) {\n                    textColor.value = \"#efb134\";\n                } else if(currentType.value == 3-1) {\n                    textColor.value = \"#F78DB9\";\n                } else if(currentType.value == 4-1) {\n                    textColor.value = \"#70B988\";\n                } else if(currentType.value == 5-1) {\n                    textColor.value = \"#0000005F\";\n                } else if(currentType.value == 6-1) {\n                    textColor.value = \"#70a0e0\";\n                } else {\n                    textColor.value = \"#0000005F\";\n                }\n            }\n            else if((JSON.stringify(types.value) + '').indexOf('견적접수') > -1) {\n                \n                console.log('견적결재용싸이클');\n                if(currentType.value == 1-1) {\n                    textColor.value = \"#F78DB9\";\n                } else if(currentType.value == 2-1) {\n                    textColor.value = \"#F78DB9\";\n                } else if(currentType.value == 3-1) {\n                    textColor.value = \"#70B988\";\n                } else if(currentType.value == 4-1) {\n                    textColor.value = \"#efb134\";\n                } else if(currentType.value == 5-1) {\n                    textColor.value = \"#0000005F\";\n                } else if(currentType.value == 6-1) {\n                    textColor.value = \"#70a0e0\";\n                } else {\n                    textColor.value = \"#0000005F\";\n                }\n            } else if((JSON.stringify(types.value) + '').indexOf('단가합의대상') > -1) {\n\n                 console.log('견적단가합의용싸이클');\n                 console.log('@@' + currentType.value);\n                 \n                if(currentType.value == 1) {\n                    textColor.value = \"#70B988\";\n                } else if(currentType.value == 2) {\n                    textColor.value = \"#F78DB9\";\n                } else if(currentType.value == 3) {//84e0a1\n                    textColor.value = \"#70a0e0\";\n                } else if(currentType.value == 4) {\n                    console.log('재견적진행중');\n                    textColor.value = \"#84e0a1\"; //37b25e\n                } else if(currentType.value == 5) {\n                    textColor.value = \"#efcf8f\"; //70a0e0\n                } else if(currentType.value == 6) {\n                    textColor.value = \"#efb134\"; //d89308\n                } else if(currentType.value == 7) {\n                    textColor.value = \"#37b25e\";\n                } else if(currentType.value == 8) {\n                    textColor.value = \"#d89308\";\n                } else {\n                     textColor.value = \"#0000005F\";\n                }\n\n            } else {\n                if(currentType.value == 1) {\n                    textColor.value = \"#F78DB9\";\n                } else if(currentType.value == 2) {\n                    textColor.value = \"#70B988\";\n                } else if(currentType.value == 3) {\n                    textColor.value = \"#70a0e0\";\n                } else if(currentType.value == 4) {\n                    textColor.value = \"#efb134\";\n                } else if(currentType.value == 5) {\n                    textColor.value = \"#0000005F\";\n                } else {\n                    textColor.value = \"#f58f87\";\n                }\n            }\n\n            \n        }\n\n        module.exports = {\n            nextState: nextState,\n            currentType: currentType,\n            currentTypeLabel: currentTypeLabel,\n            textColor: textColor,\n        }\n    ";
        temp7.LineNumber = 5;
        temp7.FileName = "Pages/Menu_Supplier/CycleButton2.ux";
        temp7.SourceLineNumber = 5;
        temp7.SourceFileName = "Pages/Menu_Supplier/CycleButton2.ux";
        temp8.SourceLineNumber = 112;
        temp8.SourceFileName = "Pages/Menu_Supplier/CycleButton2.ux";
        temp8.Handler += temp_eb101.OnEvent;
        temp8.Bindings.Add(temp_eb101);
        temp2.SourceLineNumber = 112;
        temp2.SourceFileName = "Pages/Menu_Supplier/CycleButton2.ux";
        temp9.SourceLineNumber = 114;
        temp9.SourceFileName = "Pages/Menu_Supplier/CycleButton2.ux";
        temp9.Animators.Add(temp10);
        temp10.Factor = 0.98f;
        temp11.SourceLineNumber = 125;
        temp11.SourceFileName = "Pages/Menu_Supplier/CycleButton2.ux";
        temp11.Children.Add(temp);
        temp11.Children.Add(temp14);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.SourceLineNumber = 126;
        temp.SourceFileName = "Pages/Menu_Supplier/CycleButton2.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp, Fuse.Layouts.Dock.Fill);
        temp.Font = global::MainView.AGOTHIC14;
        temp.Bindings.Add(temp12);
        temp.Bindings.Add(temp13);
        temp3.SourceLineNumber = 126;
        temp3.SourceFileName = "Pages/Menu_Supplier/CycleButton2.ux";
        temp4.SourceLineNumber = 126;
        temp4.SourceFileName = "Pages/Menu_Supplier/CycleButton2.ux";
        temp14.Width = new Uno.UX.Size(16f, Uno.UX.Unit.Unspecified);
        temp14.Margin = float4(8f, 0f, 0f, 0f);
        temp14.SourceLineNumber = 127;
        temp14.SourceFileName = "Pages/Menu_Supplier/CycleButton2.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp14, Fuse.Layouts.Dock.Right);
        temp14.Children.Add(temp15);
        temp15.ItemSpacing = 2f;
        temp15.Alignment = Fuse.Elements.Alignment.Center;
        temp15.SourceLineNumber = 128;
        temp15.SourceFileName = "Pages/Menu_Supplier/CycleButton2.ux";
        temp15.Children.Add(temp1);
        temp1.SourceLineNumber = 129;
        temp1.SourceFileName = "Pages/Menu_Supplier/CycleButton2.ux";
        temp1.Templates.Add(temp16);
        temp1.Bindings.Add(temp17);
        temp6.SourceLineNumber = 129;
        temp6.SourceFileName = "Pages/Menu_Supplier/CycleButton2.ux";
        temp5.SourceLineNumber = 129;
        temp5.SourceFileName = "Pages/Menu_Supplier/CycleButton2.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(temp_eb101);
        __g_nametable.Properties.Add(this_Types_inst);
        __g_nametable.Properties.Add(this_CurrentType_inst);
        this.Children.Add(temp7);
        this.Children.Add(temp8);
        this.Children.Add(temp9);
        this.Children.Add(temp11);
    }
    static global::Uno.UX.Selector __selector0 = "Types";
    static global::Uno.UX.Selector __selector1 = "CurrentType";
    static global::Uno.UX.Selector __selector2 = "Value";
    static global::Uno.UX.Selector __selector3 = "Color";
    static global::Uno.UX.Selector __selector4 = "Items";
}
