[Uno.Compiler.UxGenerated]
public partial class Confirm: Fuse.Controls.Panel
{
    bool _field_Show;
    [global::Uno.UX.UXOriginSetter("SetShow")]
    public bool Show
    {
        get { return _field_Show; }
        set { SetShow(value, null); }
    }
    public void SetShow(bool value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Show)
        {
            _field_Show = value;
            OnPropertyChanged("Show", origin);
        }
    }
    object _field_Handler;
    [global::Uno.UX.UXOriginSetter("SetHandler")]
    public object Handler
    {
        get { return _field_Handler; }
        set { SetHandler(value, null); }
    }
    public void SetHandler(object value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Handler)
        {
            _field_Handler = value;
            OnPropertyChanged("Handler", origin);
        }
    }
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
    global::Uno.UX.Property<bool> this_Show_inst;
    global::Uno.UX.Property<string> text_Value_inst;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<Uno.UX.Size2> text_Offset_inst;
    global::Uno.UX.Property<float4> addTaskButtons_Color_inst;
    global::Uno.UX.Property<Uno.UX.Size2> ButtonsPanel_Offset_inst;
    global::Uno.UX.Property<Fuse.Elements.HitTestMode> AddToBasketPanel_HitTestMode_inst;
    global::Uno.UX.Property<float> AddToBasketPanel_Opacity_inst;
    global::Uno.UX.Property<bool> show_Value_inst;
    internal global::Fuse.Controls.Panel AddToBasketPanel;
    internal global::Fuse.Controls.Rectangle addTaskButtons;
    internal global::Fuse.Controls.Text text;
    internal global::Fuse.Controls.StackPanel ButtonsPanel;
    internal global::Fuse.Triggers.WhileTrue show;
    internal global::Fuse.UserEvent Event_Handler;
    static Confirm()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Confirm()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this_Show_inst = new HSMRO_Confirm_Show_Property(this, __selector0);
        var temp1 = new global::Fuse.Reactive.Constant(this);
        text = new global::Fuse.Controls.Text();
        text_Value_inst = new HSMRO_FuseControlsTextControl_Value_Property(text, __selector1);
        var temp2 = new global::Fuse.Reactive.Property(temp1, HSMRO_accessor_Confirm_Text.Singleton);
        var temp = new global::Fuse.Controls.TextInput();
        temp_Value_inst = new HSMRO_FuseControlsTextInputControl_Value_Property(temp, __selector1);
        var temp3 = new global::Fuse.Reactive.Data("cancel_remark");
        text_Offset_inst = new HSMRO_FuseElementsElement_Offset_Property(text, __selector2);
        addTaskButtons = new global::Fuse.Controls.Rectangle();
        addTaskButtons_Color_inst = new HSMRO_FuseControlsShape_Color_Property(addTaskButtons, __selector3);
        ButtonsPanel = new global::Fuse.Controls.StackPanel();
        ButtonsPanel_Offset_inst = new HSMRO_FuseElementsElement_Offset_Property(ButtonsPanel, __selector2);
        AddToBasketPanel = new global::Fuse.Controls.Panel();
        AddToBasketPanel_HitTestMode_inst = new HSMRO_FuseElementsElement_HitTestMode_Property(AddToBasketPanel, __selector4);
        AddToBasketPanel_Opacity_inst = new HSMRO_FuseElementsElement_Opacity_Property(AddToBasketPanel, __selector5);
        var temp4 = new global::Fuse.Reactive.Constant(this);
        show = new global::Fuse.Triggers.WhileTrue();
        show_Value_inst = new HSMRO_FuseTriggersWhileBool_Value_Property(show, __selector1);
        var temp5 = new global::Fuse.Reactive.Property(temp4, HSMRO_accessor_Confirm_Show.Singleton);
        var temp6 = new global::Fuse.Controls.DockPanel();
        var temp7 = new global::Fuse.Gestures.Tapped();
        var temp8 = new global::Fuse.Triggers.Actions.Set<bool>(this_Show_inst);
        var temp9 = new global::Fuse.Reactive.DataBinding(text_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
        var temp10 = new global::Fuse.Controls.DockPanel();
        var temp11 = new global::Fuse.Controls.Rectangle();
        var temp12 = new global::Fuse.Selection.Selection();
        var temp13 = new global::Fuse.Controls.WrapPanel();
        var temp14 = new global::SelectableRectangle();
        var temp15 = new global::Fuse.Controls.Text();
        var temp16 = new global::SelectableRectangle();
        var temp17 = new global::Fuse.Controls.Text();
        var temp18 = new global::SelectableRectangle();
        var temp19 = new global::Fuse.Controls.Text();
        var temp20 = new global::Fuse.Controls.WrapPanel();
        var temp21 = new global::SelectableRectangle();
        var temp22 = new global::Fuse.Controls.Text();
        var temp23 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp24 = new global::Fuse.Controls.Rectangle();
        var temp25 = new global::Fuse.Controls.Text();
        var temp26 = new global::Fuse.Gestures.Tapped();
        var temp27 = new global::Fuse.Triggers.Actions.Set<bool>(this_Show_inst);
        var temp28 = new global::Fuse.Triggers.Actions.RaiseUserEvent();
        var temp29 = new global::Fuse.Drawing.StaticSolidColor(float4(0.4588235f, 0.682353f, 0.1882353f, 1f));
        var temp30 = new global::Fuse.Controls.Rectangle();
        var temp31 = new global::Fuse.Controls.Text();
        var temp32 = new global::Fuse.Gestures.Tapped();
        var temp33 = new global::Fuse.Triggers.Actions.Set<bool>(this_Show_inst);
        var temp34 = new global::Fuse.Drawing.StaticSolidColor(float4(0.9607843f, 0.5607843f, 0.5294118f, 1f));
        var temp35 = new global::Fuse.Animations.Change<Uno.UX.Size2>(text_Offset_inst);
        var temp36 = new global::Fuse.Animations.Change<float4>(addTaskButtons_Color_inst);
        var temp37 = new global::Fuse.Animations.Change<Uno.UX.Size2>(ButtonsPanel_Offset_inst);
        var temp38 = new global::Fuse.Animations.Change<Fuse.Elements.HitTestMode>(AddToBasketPanel_HitTestMode_inst);
        var temp39 = new global::Fuse.Animations.Change<float>(AddToBasketPanel_Opacity_inst);
        var temp40 = new global::Fuse.Reactive.DataBinding(show_Value_inst, temp5, Fuse.Reactive.BindingMode.Default);
        Event_Handler = new global::Fuse.UserEvent();
        this.Name = __selector6;
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        AddToBasketPanel.HitTestMode = Fuse.Elements.HitTestMode.None;
        AddToBasketPanel.Margin = float4(0f, 0f, 0f, 0f);
        AddToBasketPanel.Opacity = 0f;
        AddToBasketPanel.Name = __selector7;
        AddToBasketPanel.SourceLineNumber = 2;
        AddToBasketPanel.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        AddToBasketPanel.Children.Add(temp6);
        temp6.Alignment = Fuse.Elements.Alignment.Default;
        temp6.Padding = float4(0f, 10f, 0f, 0f);
        temp6.SourceLineNumber = 3;
        temp6.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        temp6.Children.Add(addTaskButtons);
        temp6.Children.Add(text);
        temp6.Children.Add(temp10);
        temp6.Children.Add(ButtonsPanel);
        addTaskButtons.Margin = float4(0f, 0f, 0f, 0f);
        addTaskButtons.Layer = Fuse.Layer.Background;
        addTaskButtons.Name = __selector8;
        addTaskButtons.SourceLineNumber = 4;
        addTaskButtons.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        global::Fuse.Controls.DockPanel.SetDock(addTaskButtons, Fuse.Layouts.Dock.Top);
        addTaskButtons.Children.Add(temp7);
        temp7.SourceLineNumber = 5;
        temp7.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        temp7.Actions.Add(temp8);
        temp8.Value = false;
        temp8.SourceLineNumber = 6;
        temp8.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        text.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        text.FontSize = 25f;
        text.Color = Fuse.Drawing.Colors.White;
        text.Alignment = Fuse.Elements.Alignment.Center;
        text.Name = __selector9;
        text.SourceLineNumber = 9;
        text.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        global::Fuse.Controls.DockPanel.SetDock(text, Fuse.Layouts.Dock.Top);
        text.Font = global::MainView.AGOTHIC14;
        text.Bindings.Add(temp9);
        temp2.SourceLineNumber = 9;
        temp2.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        temp1.SourceLineNumber = 9;
        temp1.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        temp10.Alignment = Fuse.Elements.Alignment.Center;
        temp10.Margin = float4(0f, 20f, 0f, 0f);
        temp10.SourceLineNumber = 31;
        temp10.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp10, Fuse.Layouts.Dock.Fill);
        temp10.Children.Add(temp11);
        temp10.Children.Add(temp12);
        temp10.Children.Add(temp13);
        temp10.Children.Add(temp20);
        temp11.CornerRadius = float4(3f, 3f, 3f, 3f);
        temp11.Color = Fuse.Drawing.Colors.White;
        temp11.SourceLineNumber = 32;
        temp11.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp11, Fuse.Layouts.Dock.Top);
        temp12.MinCount = 1;
        temp12.MaxCount = 1;
        temp12.SourceLineNumber = 33;
        temp12.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        temp13.Margin = float4(0f, 0f, 0f, 10f);
        temp13.SourceLineNumber = 35;
        temp13.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp13, Fuse.Layouts.Dock.Top);
        temp13.Children.Add(temp14);
        temp13.Children.Add(temp15);
        temp13.Children.Add(temp16);
        temp13.Children.Add(temp17);
        temp13.Children.Add(temp18);
        temp13.Children.Add(temp19);
        temp14.ID = "1";
        temp14.SelectionColor = float4(0.6784314f, 0.6784314f, 0.6784314f, 1f);
        temp14.SourceLineNumber = 36;
        temp14.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp14, Fuse.Layouts.Dock.Top);
        temp15.Value = "미취급품목";
        temp15.Color = float4(1f, 1f, 1f, 1f);
        temp15.Margin = float4(5f, 0f, 15f, 0f);
        temp15.SourceLineNumber = 37;
        temp15.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        temp16.ID = "2";
        temp16.SelectionColor = float4(0.6784314f, 0.6784314f, 0.6784314f, 1f);
        temp16.SourceLineNumber = 38;
        temp16.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp16, Fuse.Layouts.Dock.Top);
        temp17.Value = "스펙정보부족";
        temp17.Color = float4(1f, 1f, 1f, 1f);
        temp17.Margin = float4(5f, 0f, 15f, 0f);
        temp17.SourceLineNumber = 39;
        temp17.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        temp18.ID = "3";
        temp18.SelectionColor = float4(0.6784314f, 0.6784314f, 0.6784314f, 1f);
        temp18.SourceLineNumber = 40;
        temp18.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp18, Fuse.Layouts.Dock.Top);
        temp19.Value = "단종";
        temp19.Color = float4(1f, 1f, 1f, 1f);
        temp19.Margin = float4(5f, 0f, 0f, 0f);
        temp19.SourceLineNumber = 41;
        temp19.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        temp20.Margin = float4(0f, 0f, 0f, 10f);
        temp20.SourceLineNumber = 43;
        temp20.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp20, Fuse.Layouts.Dock.Top);
        temp20.Children.Add(temp21);
        temp20.Children.Add(temp22);
        temp20.Children.Add(temp);
        temp21.ID = "4";
        temp21.SelectionColor = float4(0.6784314f, 0.6784314f, 0.6784314f, 1f);
        temp21.SourceLineNumber = 44;
        temp21.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp21, Fuse.Layouts.Dock.Top);
        temp22.Value = "기타";
        temp22.Color = float4(1f, 1f, 1f, 1f);
        temp22.Margin = float4(5f, 0f, 0f, 0f);
        temp22.SourceLineNumber = 45;
        temp22.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        temp.PlaceholderText = "_________________________________";
        temp.PlaceholderColor = float4(0.972549f, 0.972549f, 0.972549f, 0.1607843f);
        temp.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp.TextColor = float4(1f, 1f, 1f, 1f);
        temp.Width = new Uno.UX.Size(230f, Uno.UX.Unit.Unspecified);
        temp.Margin = float4(10f, 0f, 0f, 0f);
        temp.SourceLineNumber = 46;
        temp.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        temp.Bindings.Add(temp23);
        temp3.SourceLineNumber = 46;
        temp3.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        ButtonsPanel.Orientation = Fuse.Layouts.Orientation.Horizontal;
        ButtonsPanel.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        ButtonsPanel.Name = __selector10;
        ButtonsPanel.SourceLineNumber = 49;
        ButtonsPanel.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        global::Fuse.Controls.DockPanel.SetDock(ButtonsPanel, Fuse.Layouts.Dock.Bottom);
        ButtonsPanel.Children.Add(temp24);
        ButtonsPanel.Children.Add(temp30);
        ButtonsPanel.Children.Add(show);
        temp24.CornerRadius = float4(20f, 20f, 20f, 20f);
        temp24.Color = Fuse.Drawing.Colors.White;
        temp24.Width = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp24.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp24.Margin = float4(10f, 10f, 10f, 10f);
        temp24.Padding = float4(10f, 10f, 10f, 10f);
        temp24.SourceLineNumber = 50;
        temp24.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp24, Fuse.Layouts.Dock.Top);
        temp24.Fill = temp29;
        temp24.Children.Add(temp25);
        temp24.Children.Add(temp26);
        temp25.Value = "Yes";
        temp25.Color = Fuse.Drawing.Colors.White;
        temp25.Alignment = Fuse.Elements.Alignment.Center;
        temp25.SourceLineNumber = 51;
        temp25.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        temp25.Font = global::MainView.AGOTHIC14;
        temp26.SourceLineNumber = 52;
        temp26.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        temp26.Actions.Add(temp27);
        temp26.Actions.Add(temp28);
        temp27.Value = false;
        temp27.SourceLineNumber = 53;
        temp27.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        temp28.EventName = __selector11;
        temp28.SourceLineNumber = 54;
        temp28.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        temp30.CornerRadius = float4(20f, 20f, 20f, 20f);
        temp30.Color = Fuse.Drawing.Colors.White;
        temp30.Width = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp30.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp30.Margin = float4(10f, 10f, 10f, 10f);
        temp30.Padding = float4(10f, 10f, 10f, 10f);
        temp30.SourceLineNumber = 57;
        temp30.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        temp30.Fill = temp34;
        temp30.Children.Add(temp31);
        temp30.Children.Add(temp32);
        temp31.Value = "No";
        temp31.Color = Fuse.Drawing.Colors.White;
        temp31.Alignment = Fuse.Elements.Alignment.Center;
        temp31.SourceLineNumber = 58;
        temp31.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        temp31.Font = global::MainView.AGOTHIC14;
        temp32.SourceLineNumber = 59;
        temp32.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        temp32.Actions.Add(temp33);
        temp33.Value = false;
        temp33.SourceLineNumber = 60;
        temp33.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        show.Name = __selector12;
        show.SourceLineNumber = 63;
        show.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        show.Animators.Add(temp35);
        show.Animators.Add(temp36);
        show.Animators.Add(temp37);
        show.Animators.Add(temp38);
        show.Animators.Add(temp39);
        show.Bindings.Add(temp40);
        temp35.Value = new Uno.UX.Size2(new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified), new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified));
        temp35.Duration = 0.2;
        temp35.DelayBack = 0;
        temp35.Delay = 0.2;
        temp35.Easing = Fuse.Animations.Easing.CubicOut;
        temp36.Value = float4(0f, 0f, 0f, 0.8666667f);
        temp36.Duration = 0.15;
        temp36.DelayBack = 0.25;
        temp37.Value = new Uno.UX.Size2(new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified), new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified));
        temp37.Duration = 0.3;
        temp37.Delay = 0;
        temp37.Easing = Fuse.Animations.Easing.QuinticInOut;
        temp38.Value = Fuse.Elements.HitTestMode.Children;
        temp39.Value = 1f;
        temp39.Duration = 0.5;
        temp39.Easing = Fuse.Animations.Easing.QuinticOut;
        temp5.SourceLineNumber = 63;
        temp5.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        temp4.SourceLineNumber = 63;
        temp4.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        Event_Handler.Name = __selector11;
        Event_Handler.SourceLineNumber = 84;
        Event_Handler.SourceFileName = "Pages/Menu_Supplier/Confirm.ux";
        this.Children.Add(AddToBasketPanel);
        this.Children.Add(Event_Handler);
    }
    static global::Uno.UX.Selector __selector0 = "Show";
    static global::Uno.UX.Selector __selector1 = "Value";
    static global::Uno.UX.Selector __selector2 = "Offset";
    static global::Uno.UX.Selector __selector3 = "Color";
    static global::Uno.UX.Selector __selector4 = "HitTestMode";
    static global::Uno.UX.Selector __selector5 = "Opacity";
    static global::Uno.UX.Selector __selector6 = "root";
    static global::Uno.UX.Selector __selector7 = "AddToBasketPanel";
    static global::Uno.UX.Selector __selector8 = "addTaskButtons";
    static global::Uno.UX.Selector __selector9 = "text";
    static global::Uno.UX.Selector __selector10 = "ButtonsPanel";
    static global::Uno.UX.Selector __selector11 = "Event_Handler";
    static global::Uno.UX.Selector __selector12 = "show";
}
