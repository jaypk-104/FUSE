[Uno.Compiler.UxGenerated]
public partial class Confirm_return: Fuse.Controls.Panel
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
    object _field_Handler_return;
    [global::Uno.UX.UXOriginSetter("SetHandler_return")]
    public object Handler_return
    {
        get { return _field_Handler_return; }
        set { SetHandler_return(value, null); }
    }
    public void SetHandler_return(object value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Handler_return)
        {
            _field_Handler_return = value;
            OnPropertyChanged("Handler_return", origin);
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
    static Confirm_return()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Confirm_return()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this_Show_inst = new HSMRO_Confirm_return_Show_Property(this, __selector0);
        var temp1 = new global::Fuse.Reactive.Constant(this);
        text = new global::Fuse.Controls.Text();
        text_Value_inst = new HSMRO_FuseControlsTextControl_Value_Property(text, __selector1);
        var temp2 = new global::Fuse.Reactive.Property(temp1, HSMRO_accessor_Confirm_return_Text.Singleton);
        var temp = new global::Fuse.Controls.TextInput();
        temp_Value_inst = new HSMRO_FuseControlsTextInputControl_Value_Property(temp, __selector1);
        var temp3 = new global::Fuse.Reactive.Data("return_text");
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
        var temp5 = new global::Fuse.Reactive.Property(temp4, HSMRO_accessor_Confirm_return_Show.Singleton);
        var temp6 = new global::Fuse.Gestures.Tapped();
        var temp7 = new global::Fuse.Triggers.Actions.Set<bool>(this_Show_inst);
        var temp8 = new global::Fuse.Controls.DockPanel();
        var temp9 = new global::Fuse.Reactive.DataBinding(text_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
        var temp10 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp11 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 0.1254902f));
        var temp12 = new global::Fuse.Controls.Rectangle();
        var temp13 = new global::Fuse.Controls.Text();
        var temp14 = new global::Fuse.Gestures.Tapped();
        var temp15 = new global::Fuse.Triggers.Actions.RaiseUserEvent();
        var temp16 = new global::Fuse.Drawing.StaticSolidColor(float4(0.4588235f, 0.682353f, 0.1882353f, 1f));
        var temp17 = new global::Fuse.Controls.Rectangle();
        var temp18 = new global::Fuse.Controls.Text();
        var temp19 = new global::Fuse.Gestures.Tapped();
        var temp20 = new global::Fuse.Triggers.Actions.Set<bool>(this_Show_inst);
        var temp21 = new global::Fuse.Drawing.StaticSolidColor(float4(0.9607843f, 0.5607843f, 0.5294118f, 1f));
        var temp22 = new global::Fuse.Animations.Change<Uno.UX.Size2>(text_Offset_inst);
        var temp23 = new global::Fuse.Animations.Change<float4>(addTaskButtons_Color_inst);
        var temp24 = new global::Fuse.Animations.Change<Uno.UX.Size2>(ButtonsPanel_Offset_inst);
        var temp25 = new global::Fuse.Animations.Change<Fuse.Elements.HitTestMode>(AddToBasketPanel_HitTestMode_inst);
        var temp26 = new global::Fuse.Animations.Change<float>(AddToBasketPanel_Opacity_inst);
        var temp27 = new global::Fuse.Reactive.DataBinding(show_Value_inst, temp5, Fuse.Reactive.BindingMode.Default);
        Event_Handler = new global::Fuse.UserEvent();
        this.Name = __selector6;
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/Menu_Supplier/Confirm_return.ux";
        AddToBasketPanel.HitTestMode = Fuse.Elements.HitTestMode.None;
        AddToBasketPanel.Margin = float4(0f, 0f, 0f, 0f);
        AddToBasketPanel.Opacity = 0f;
        AddToBasketPanel.Name = __selector7;
        AddToBasketPanel.SourceLineNumber = 2;
        AddToBasketPanel.SourceFileName = "Pages/Menu_Supplier/Confirm_return.ux";
        AddToBasketPanel.Children.Add(addTaskButtons);
        AddToBasketPanel.Children.Add(temp8);
        AddToBasketPanel.Children.Add(show);
        addTaskButtons.Margin = float4(0f, 0f, 0f, 0f);
        addTaskButtons.Layer = Fuse.Layer.Background;
        addTaskButtons.Name = __selector8;
        addTaskButtons.SourceLineNumber = 3;
        addTaskButtons.SourceFileName = "Pages/Menu_Supplier/Confirm_return.ux";
        addTaskButtons.Children.Add(temp6);
        temp6.SourceLineNumber = 4;
        temp6.SourceFileName = "Pages/Menu_Supplier/Confirm_return.ux";
        temp6.Actions.Add(temp7);
        temp7.Value = false;
        temp7.SourceLineNumber = 5;
        temp7.SourceFileName = "Pages/Menu_Supplier/Confirm_return.ux";
        temp8.Alignment = Fuse.Elements.Alignment.Center;
        temp8.SourceLineNumber = 8;
        temp8.SourceFileName = "Pages/Menu_Supplier/Confirm_return.ux";
        temp8.Children.Add(text);
        temp8.Children.Add(temp);
        temp8.Children.Add(ButtonsPanel);
        text.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        text.FontSize = 25f;
        text.Color = Fuse.Drawing.Colors.White;
        text.Alignment = Fuse.Elements.Alignment.Center;
        text.Name = __selector9;
        text.SourceLineNumber = 9;
        text.SourceFileName = "Pages/Menu_Supplier/Confirm_return.ux";
        global::Fuse.Controls.DockPanel.SetDock(text, Fuse.Layouts.Dock.Top);
        text.Font = global::MainView.AGOTHIC14;
        text.Bindings.Add(temp9);
        temp2.SourceLineNumber = 9;
        temp2.SourceFileName = "Pages/Menu_Supplier/Confirm_return.ux";
        temp1.SourceLineNumber = 9;
        temp1.SourceFileName = "Pages/Menu_Supplier/Confirm_return.ux";
        temp.PlaceholderText = "(??????????????????)";
        temp.PlaceholderColor = float4(0.9803922f, 0.945098f, 0.945098f, 1f);
        temp.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp.TextColor = Fuse.Drawing.Colors.White;
        temp.Width = new Uno.UX.Size(80f, Uno.UX.Unit.Percent);
        temp.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp.Alignment = Fuse.Elements.Alignment.Default;
        temp.Margin = float4(0f, 10f, 0f, 10f);
        temp.SourceLineNumber = 10;
        temp.SourceFileName = "Pages/Menu_Supplier/Confirm_return.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp, Fuse.Layouts.Dock.Top);
        temp.Font = global::MainView.AGOTHIC14;
        temp.Background = temp11;
        temp.Bindings.Add(temp10);
        temp3.SourceLineNumber = 10;
        temp3.SourceFileName = "Pages/Menu_Supplier/Confirm_return.ux";
        ButtonsPanel.Orientation = Fuse.Layouts.Orientation.Horizontal;
        ButtonsPanel.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        ButtonsPanel.Name = __selector10;
        ButtonsPanel.SourceLineNumber = 11;
        ButtonsPanel.SourceFileName = "Pages/Menu_Supplier/Confirm_return.ux";
        ButtonsPanel.Children.Add(temp12);
        ButtonsPanel.Children.Add(temp17);
        temp12.CornerRadius = float4(20f, 20f, 20f, 20f);
        temp12.Color = Fuse.Drawing.Colors.White;
        temp12.Width = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp12.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp12.Margin = float4(10f, 10f, 10f, 10f);
        temp12.Padding = float4(10f, 10f, 10f, 10f);
        temp12.SourceLineNumber = 12;
        temp12.SourceFileName = "Pages/Menu_Supplier/Confirm_return.ux";
        temp12.Fill = temp16;
        temp12.Children.Add(temp13);
        temp12.Children.Add(temp14);
        temp13.Value = "Yes";
        temp13.Color = Fuse.Drawing.Colors.White;
        temp13.Alignment = Fuse.Elements.Alignment.Center;
        temp13.SourceLineNumber = 13;
        temp13.SourceFileName = "Pages/Menu_Supplier/Confirm_return.ux";
        temp13.Font = global::MainView.AGOTHIC14;
        temp14.SourceLineNumber = 14;
        temp14.SourceFileName = "Pages/Menu_Supplier/Confirm_return.ux";
        temp14.Actions.Add(temp15);
        temp15.EventName = __selector11;
        temp15.SourceLineNumber = 15;
        temp15.SourceFileName = "Pages/Menu_Supplier/Confirm_return.ux";
        temp17.CornerRadius = float4(20f, 20f, 20f, 20f);
        temp17.Color = Fuse.Drawing.Colors.White;
        temp17.Width = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp17.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp17.Margin = float4(10f, 10f, 10f, 10f);
        temp17.Padding = float4(10f, 10f, 10f, 10f);
        temp17.SourceLineNumber = 19;
        temp17.SourceFileName = "Pages/Menu_Supplier/Confirm_return.ux";
        temp17.Fill = temp21;
        temp17.Children.Add(temp18);
        temp17.Children.Add(temp19);
        temp18.Value = "No";
        temp18.Color = Fuse.Drawing.Colors.White;
        temp18.Alignment = Fuse.Elements.Alignment.Center;
        temp18.SourceLineNumber = 20;
        temp18.SourceFileName = "Pages/Menu_Supplier/Confirm_return.ux";
        temp18.Font = global::MainView.AGOTHIC14;
        temp19.SourceLineNumber = 21;
        temp19.SourceFileName = "Pages/Menu_Supplier/Confirm_return.ux";
        temp19.Actions.Add(temp20);
        temp20.Value = false;
        temp20.SourceLineNumber = 22;
        temp20.SourceFileName = "Pages/Menu_Supplier/Confirm_return.ux";
        show.Name = __selector12;
        show.SourceLineNumber = 30;
        show.SourceFileName = "Pages/Menu_Supplier/Confirm_return.ux";
        show.Animators.Add(temp22);
        show.Animators.Add(temp23);
        show.Animators.Add(temp24);
        show.Animators.Add(temp25);
        show.Animators.Add(temp26);
        show.Bindings.Add(temp27);
        temp22.Value = new Uno.UX.Size2(new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified), new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified));
        temp22.Duration = 0.2;
        temp22.DelayBack = 0;
        temp22.Delay = 0.2;
        temp22.Easing = Fuse.Animations.Easing.CubicOut;
        temp23.Value = float4(0f, 0f, 0f, 0.8666667f);
        temp23.Duration = 0.15;
        temp23.DelayBack = 0.25;
        temp24.Value = new Uno.UX.Size2(new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified), new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified));
        temp24.Duration = 0.3;
        temp24.Delay = 0;
        temp24.Easing = Fuse.Animations.Easing.QuinticInOut;
        temp25.Value = Fuse.Elements.HitTestMode.Children;
        temp26.Value = 1f;
        temp26.Duration = 0.5;
        temp26.Easing = Fuse.Animations.Easing.QuinticOut;
        temp5.SourceLineNumber = 30;
        temp5.SourceFileName = "Pages/Menu_Supplier/Confirm_return.ux";
        temp4.SourceLineNumber = 30;
        temp4.SourceFileName = "Pages/Menu_Supplier/Confirm_return.ux";
        Event_Handler.Name = __selector11;
        Event_Handler.SourceLineNumber = 44;
        Event_Handler.SourceFileName = "Pages/Menu_Supplier/Confirm_return.ux";
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
