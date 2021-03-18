[Uno.Compiler.UxGenerated]
public partial class Confirm_msg: Fuse.Controls.Panel
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
    object _field_Handler_msg;
    [global::Uno.UX.UXOriginSetter("SetHandler_msg")]
    public object Handler_msg
    {
        get { return _field_Handler_msg; }
        set { SetHandler_msg(value, null); }
    }
    public void SetHandler_msg(object value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Handler_msg)
        {
            _field_Handler_msg = value;
            OnPropertyChanged("Handler_msg", origin);
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
    static Confirm_msg()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Confirm_msg()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this_Show_inst = new HSMRO_Confirm_msg_Show_Property(this, __selector0);
        var temp1 = new global::Fuse.Reactive.Constant(this);
        text = new global::Fuse.Controls.Text();
        text_Value_inst = new HSMRO_FuseControlsTextControl_Value_Property(text, __selector1);
        var temp2 = new global::Fuse.Reactive.Property(temp1, HSMRO_accessor_Confirm_msg_Text.Singleton);
        var temp = new global::Fuse.Controls.TextInput();
        temp_Value_inst = new HSMRO_FuseControlsTextInputControl_Value_Property(temp, __selector1);
        var temp3 = new global::Fuse.Reactive.Data("msg_text");
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
        var temp5 = new global::Fuse.Reactive.Property(temp4, HSMRO_accessor_Confirm_msg_Show.Singleton);
        var temp6 = new global::Fuse.Gestures.Tapped();
        var temp7 = new global::Fuse.Triggers.Actions.Set<bool>(this_Show_inst);
        var temp8 = new global::Fuse.Controls.DockPanel();
        var temp9 = new global::Fuse.Reactive.DataBinding(text_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
        var temp10 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp11 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 0.1254902f));
        var temp12 = new global::Fuse.Controls.Rectangle();
        var temp13 = new global::Fuse.Controls.Text();
        var temp14 = new global::Fuse.Gestures.Tapped();
        var temp15 = new global::Fuse.Triggers.Actions.Set<bool>(this_Show_inst);
        var temp16 = new global::Fuse.Triggers.Actions.RaiseUserEvent();
        var temp17 = new global::Fuse.Drawing.StaticSolidColor(float4(0.4588235f, 0.682353f, 0.1882353f, 1f));
        var temp18 = new global::Fuse.Controls.Rectangle();
        var temp19 = new global::Fuse.Controls.Text();
        var temp20 = new global::Fuse.Gestures.Tapped();
        var temp21 = new global::Fuse.Triggers.Actions.Set<bool>(this_Show_inst);
        var temp22 = new global::Fuse.Drawing.StaticSolidColor(float4(0.9607843f, 0.5607843f, 0.5294118f, 1f));
        var temp23 = new global::Fuse.Animations.Change<Uno.UX.Size2>(text_Offset_inst);
        var temp24 = new global::Fuse.Animations.Change<float4>(addTaskButtons_Color_inst);
        var temp25 = new global::Fuse.Animations.Change<Uno.UX.Size2>(ButtonsPanel_Offset_inst);
        var temp26 = new global::Fuse.Animations.Change<Fuse.Elements.HitTestMode>(AddToBasketPanel_HitTestMode_inst);
        var temp27 = new global::Fuse.Animations.Change<float>(AddToBasketPanel_Opacity_inst);
        var temp28 = new global::Fuse.Reactive.DataBinding(show_Value_inst, temp5, Fuse.Reactive.BindingMode.Default);
        Event_Handler = new global::Fuse.UserEvent();
        this.Name = __selector6;
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/Menu_Supplier/Confirm_Msg.ux";
        AddToBasketPanel.HitTestMode = Fuse.Elements.HitTestMode.None;
        AddToBasketPanel.Margin = float4(0f, 0f, 0f, 0f);
        AddToBasketPanel.Opacity = 0f;
        AddToBasketPanel.Name = __selector7;
        AddToBasketPanel.SourceLineNumber = 2;
        AddToBasketPanel.SourceFileName = "Pages/Menu_Supplier/Confirm_Msg.ux";
        AddToBasketPanel.Children.Add(addTaskButtons);
        AddToBasketPanel.Children.Add(temp8);
        AddToBasketPanel.Children.Add(show);
        addTaskButtons.Margin = float4(0f, 0f, 0f, 0f);
        addTaskButtons.Layer = Fuse.Layer.Background;
        addTaskButtons.Name = __selector8;
        addTaskButtons.SourceLineNumber = 3;
        addTaskButtons.SourceFileName = "Pages/Menu_Supplier/Confirm_Msg.ux";
        addTaskButtons.Children.Add(temp6);
        temp6.SourceLineNumber = 4;
        temp6.SourceFileName = "Pages/Menu_Supplier/Confirm_Msg.ux";
        temp6.Actions.Add(temp7);
        temp7.Value = false;
        temp7.SourceLineNumber = 5;
        temp7.SourceFileName = "Pages/Menu_Supplier/Confirm_Msg.ux";
        temp8.Alignment = Fuse.Elements.Alignment.Center;
        temp8.SourceLineNumber = 8;
        temp8.SourceFileName = "Pages/Menu_Supplier/Confirm_Msg.ux";
        temp8.Children.Add(text);
        temp8.Children.Add(temp);
        temp8.Children.Add(ButtonsPanel);
        text.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        text.FontSize = 25f;
        text.Color = Fuse.Drawing.Colors.White;
        text.Alignment = Fuse.Elements.Alignment.Center;
        text.Name = __selector9;
        text.SourceLineNumber = 9;
        text.SourceFileName = "Pages/Menu_Supplier/Confirm_Msg.ux";
        global::Fuse.Controls.DockPanel.SetDock(text, Fuse.Layouts.Dock.Top);
        text.Font = global::MainView.AGOTHIC14;
        text.Bindings.Add(temp9);
        temp2.SourceLineNumber = 9;
        temp2.SourceFileName = "Pages/Menu_Supplier/Confirm_Msg.ux";
        temp1.SourceLineNumber = 9;
        temp1.SourceFileName = "Pages/Menu_Supplier/Confirm_Msg.ux";
        temp.PlaceholderText = "결재의견 (선택사항)";
        temp.PlaceholderColor = float4(0.9803922f, 0.945098f, 0.945098f, 1f);
        temp.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp.TextColor = Fuse.Drawing.Colors.White;
        temp.Width = new Uno.UX.Size(80f, Uno.UX.Unit.Percent);
        temp.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp.Alignment = Fuse.Elements.Alignment.Default;
        temp.Margin = float4(0f, 10f, 0f, 10f);
        temp.SourceLineNumber = 10;
        temp.SourceFileName = "Pages/Menu_Supplier/Confirm_Msg.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp, Fuse.Layouts.Dock.Top);
        temp.Font = global::MainView.AGOTHIC14;
        temp.Background = temp11;
        temp.Bindings.Add(temp10);
        temp3.SourceLineNumber = 10;
        temp3.SourceFileName = "Pages/Menu_Supplier/Confirm_Msg.ux";
        ButtonsPanel.Orientation = Fuse.Layouts.Orientation.Horizontal;
        ButtonsPanel.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        ButtonsPanel.Name = __selector10;
        ButtonsPanel.SourceLineNumber = 11;
        ButtonsPanel.SourceFileName = "Pages/Menu_Supplier/Confirm_Msg.ux";
        ButtonsPanel.Children.Add(temp12);
        ButtonsPanel.Children.Add(temp18);
        temp12.CornerRadius = float4(20f, 20f, 20f, 20f);
        temp12.Color = Fuse.Drawing.Colors.White;
        temp12.Width = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp12.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp12.Margin = float4(10f, 10f, 10f, 10f);
        temp12.Padding = float4(10f, 10f, 10f, 10f);
        temp12.SourceLineNumber = 12;
        temp12.SourceFileName = "Pages/Menu_Supplier/Confirm_Msg.ux";
        temp12.Fill = temp17;
        temp12.Children.Add(temp13);
        temp12.Children.Add(temp14);
        temp13.Value = "Yes";
        temp13.Color = Fuse.Drawing.Colors.White;
        temp13.Alignment = Fuse.Elements.Alignment.Center;
        temp13.SourceLineNumber = 13;
        temp13.SourceFileName = "Pages/Menu_Supplier/Confirm_Msg.ux";
        temp13.Font = global::MainView.AGOTHIC14;
        temp14.SourceLineNumber = 14;
        temp14.SourceFileName = "Pages/Menu_Supplier/Confirm_Msg.ux";
        temp14.Actions.Add(temp15);
        temp14.Actions.Add(temp16);
        temp15.Value = false;
        temp15.SourceLineNumber = 15;
        temp15.SourceFileName = "Pages/Menu_Supplier/Confirm_Msg.ux";
        temp16.EventName = __selector11;
        temp16.SourceLineNumber = 16;
        temp16.SourceFileName = "Pages/Menu_Supplier/Confirm_Msg.ux";
        temp18.CornerRadius = float4(20f, 20f, 20f, 20f);
        temp18.Color = Fuse.Drawing.Colors.White;
        temp18.Width = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp18.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp18.Margin = float4(10f, 10f, 10f, 10f);
        temp18.Padding = float4(10f, 10f, 10f, 10f);
        temp18.SourceLineNumber = 19;
        temp18.SourceFileName = "Pages/Menu_Supplier/Confirm_Msg.ux";
        temp18.Fill = temp22;
        temp18.Children.Add(temp19);
        temp18.Children.Add(temp20);
        temp19.Value = "No";
        temp19.Color = Fuse.Drawing.Colors.White;
        temp19.Alignment = Fuse.Elements.Alignment.Center;
        temp19.SourceLineNumber = 20;
        temp19.SourceFileName = "Pages/Menu_Supplier/Confirm_Msg.ux";
        temp19.Font = global::MainView.AGOTHIC14;
        temp20.SourceLineNumber = 21;
        temp20.SourceFileName = "Pages/Menu_Supplier/Confirm_Msg.ux";
        temp20.Actions.Add(temp21);
        temp21.Value = false;
        temp21.SourceLineNumber = 22;
        temp21.SourceFileName = "Pages/Menu_Supplier/Confirm_Msg.ux";
        show.Name = __selector12;
        show.SourceLineNumber = 29;
        show.SourceFileName = "Pages/Menu_Supplier/Confirm_Msg.ux";
        show.Animators.Add(temp23);
        show.Animators.Add(temp24);
        show.Animators.Add(temp25);
        show.Animators.Add(temp26);
        show.Animators.Add(temp27);
        show.Bindings.Add(temp28);
        temp23.Value = new Uno.UX.Size2(new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified), new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified));
        temp23.Duration = 0.2;
        temp23.DelayBack = 0;
        temp23.Delay = 0.2;
        temp23.Easing = Fuse.Animations.Easing.CubicOut;
        temp24.Value = float4(0f, 0f, 0f, 0.8666667f);
        temp24.Duration = 0.15;
        temp24.DelayBack = 0.25;
        temp25.Value = new Uno.UX.Size2(new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified), new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified));
        temp25.Duration = 0.3;
        temp25.Delay = 0;
        temp25.Easing = Fuse.Animations.Easing.QuinticInOut;
        temp26.Value = Fuse.Elements.HitTestMode.Children;
        temp27.Value = 1f;
        temp27.Duration = 0.5;
        temp27.Easing = Fuse.Animations.Easing.QuinticOut;
        temp5.SourceLineNumber = 29;
        temp5.SourceFileName = "Pages/Menu_Supplier/Confirm_Msg.ux";
        temp4.SourceLineNumber = 29;
        temp4.SourceFileName = "Pages/Menu_Supplier/Confirm_Msg.ux";
        Event_Handler.Name = __selector11;
        Event_Handler.SourceLineNumber = 43;
        Event_Handler.SourceFileName = "Pages/Menu_Supplier/Confirm_Msg.ux";
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
