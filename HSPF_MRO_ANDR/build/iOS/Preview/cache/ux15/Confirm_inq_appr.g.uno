[Uno.Compiler.UxGenerated]
public partial class Confirm_inq_appr: Fuse.Controls.Panel
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
    object _field_Handler_inq_appr;
    [global::Uno.UX.UXOriginSetter("SetHandler_inq_appr")]
    public object Handler_inq_appr
    {
        get { return _field_Handler_inq_appr; }
        set { SetHandler_inq_appr(value, null); }
    }
    public void SetHandler_inq_appr(object value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Handler_inq_appr)
        {
            _field_Handler_inq_appr = value;
            OnPropertyChanged("Handler_inq_appr", origin);
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
    static Confirm_inq_appr()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Confirm_inq_appr()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this_Show_inst = new HSMRO_Confirm_inq_appr_Show_Property(this, __selector0);
        var temp = new global::Fuse.Reactive.Constant(this);
        text = new global::Fuse.Controls.Text();
        text_Value_inst = new HSMRO_FuseControlsTextControl_Value_Property(text, __selector1);
        var temp1 = new global::Fuse.Reactive.Property(temp, HSMRO_accessor_Confirm_inq_appr_Text.Singleton);
        text_Offset_inst = new HSMRO_FuseElementsElement_Offset_Property(text, __selector2);
        addTaskButtons = new global::Fuse.Controls.Rectangle();
        addTaskButtons_Color_inst = new HSMRO_FuseControlsShape_Color_Property(addTaskButtons, __selector3);
        ButtonsPanel = new global::Fuse.Controls.StackPanel();
        ButtonsPanel_Offset_inst = new HSMRO_FuseElementsElement_Offset_Property(ButtonsPanel, __selector2);
        AddToBasketPanel = new global::Fuse.Controls.Panel();
        AddToBasketPanel_HitTestMode_inst = new HSMRO_FuseElementsElement_HitTestMode_Property(AddToBasketPanel, __selector4);
        AddToBasketPanel_Opacity_inst = new HSMRO_FuseElementsElement_Opacity_Property(AddToBasketPanel, __selector5);
        var temp2 = new global::Fuse.Reactive.Constant(this);
        show = new global::Fuse.Triggers.WhileTrue();
        show_Value_inst = new HSMRO_FuseTriggersWhileBool_Value_Property(show, __selector1);
        var temp3 = new global::Fuse.Reactive.Property(temp2, HSMRO_accessor_Confirm_inq_appr_Show.Singleton);
        var temp4 = new global::Fuse.Controls.DockPanel();
        var temp5 = new global::Fuse.Gestures.Tapped();
        var temp6 = new global::Fuse.Triggers.Actions.Set<bool>(this_Show_inst);
        var temp7 = new global::Fuse.Reactive.DataBinding(text_Value_inst, temp1, Fuse.Reactive.BindingMode.Default);
        var temp8 = new global::Fuse.Controls.Rectangle();
        var temp9 = new global::Fuse.Controls.Text();
        var temp10 = new global::Fuse.Gestures.Tapped();
        var temp11 = new global::Fuse.Triggers.Actions.Set<bool>(this_Show_inst);
        var temp12 = new global::Fuse.Triggers.Actions.RaiseUserEvent();
        var temp13 = new global::Fuse.Drawing.StaticSolidColor(float4(0.4588235f, 0.682353f, 0.1882353f, 1f));
        var temp14 = new global::Fuse.Controls.Rectangle();
        var temp15 = new global::Fuse.Controls.Text();
        var temp16 = new global::Fuse.Gestures.Tapped();
        var temp17 = new global::Fuse.Triggers.Actions.Set<bool>(this_Show_inst);
        var temp18 = new global::Fuse.Drawing.StaticSolidColor(float4(0.9607843f, 0.5607843f, 0.5294118f, 1f));
        var temp19 = new global::Fuse.Animations.Change<Uno.UX.Size2>(text_Offset_inst);
        var temp20 = new global::Fuse.Animations.Change<float4>(addTaskButtons_Color_inst);
        var temp21 = new global::Fuse.Animations.Change<Uno.UX.Size2>(ButtonsPanel_Offset_inst);
        var temp22 = new global::Fuse.Animations.Change<Fuse.Elements.HitTestMode>(AddToBasketPanel_HitTestMode_inst);
        var temp23 = new global::Fuse.Animations.Change<float>(AddToBasketPanel_Opacity_inst);
        var temp24 = new global::Fuse.Reactive.DataBinding(show_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
        Event_Handler = new global::Fuse.UserEvent();
        this.Name = __selector6;
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/Menu_Customer/Confirm_inq_appr.ux";
        AddToBasketPanel.HitTestMode = Fuse.Elements.HitTestMode.None;
        AddToBasketPanel.Margin = float4(0f, 0f, 0f, 0f);
        AddToBasketPanel.Opacity = 0f;
        AddToBasketPanel.Name = __selector7;
        AddToBasketPanel.SourceLineNumber = 2;
        AddToBasketPanel.SourceFileName = "Pages/Menu_Customer/Confirm_inq_appr.ux";
        AddToBasketPanel.Children.Add(temp4);
        temp4.Alignment = Fuse.Elements.Alignment.Default;
        temp4.Padding = float4(0f, 10f, 0f, 0f);
        temp4.SourceLineNumber = 3;
        temp4.SourceFileName = "Pages/Menu_Customer/Confirm_inq_appr.ux";
        temp4.Children.Add(addTaskButtons);
        temp4.Children.Add(text);
        temp4.Children.Add(ButtonsPanel);
        addTaskButtons.Margin = float4(0f, 0f, 0f, 0f);
        addTaskButtons.Layer = Fuse.Layer.Background;
        addTaskButtons.Name = __selector8;
        addTaskButtons.SourceLineNumber = 4;
        addTaskButtons.SourceFileName = "Pages/Menu_Customer/Confirm_inq_appr.ux";
        global::Fuse.Controls.DockPanel.SetDock(addTaskButtons, Fuse.Layouts.Dock.Top);
        addTaskButtons.Children.Add(temp5);
        temp5.SourceLineNumber = 5;
        temp5.SourceFileName = "Pages/Menu_Customer/Confirm_inq_appr.ux";
        temp5.Actions.Add(temp6);
        temp6.Value = false;
        temp6.SourceLineNumber = 6;
        temp6.SourceFileName = "Pages/Menu_Customer/Confirm_inq_appr.ux";
        text.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        text.FontSize = 25f;
        text.Color = Fuse.Drawing.Colors.White;
        text.Alignment = Fuse.Elements.Alignment.Center;
        text.Name = __selector9;
        text.SourceLineNumber = 9;
        text.SourceFileName = "Pages/Menu_Customer/Confirm_inq_appr.ux";
        global::Fuse.Controls.DockPanel.SetDock(text, Fuse.Layouts.Dock.Fill);
        text.Font = global::MainView.AGOTHIC14;
        text.Bindings.Add(temp7);
        temp1.SourceLineNumber = 9;
        temp1.SourceFileName = "Pages/Menu_Customer/Confirm_inq_appr.ux";
        temp.SourceLineNumber = 9;
        temp.SourceFileName = "Pages/Menu_Customer/Confirm_inq_appr.ux";
        ButtonsPanel.Orientation = Fuse.Layouts.Orientation.Horizontal;
        ButtonsPanel.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        ButtonsPanel.Name = __selector10;
        ButtonsPanel.SourceLineNumber = 11;
        ButtonsPanel.SourceFileName = "Pages/Menu_Customer/Confirm_inq_appr.ux";
        global::Fuse.Controls.DockPanel.SetDock(ButtonsPanel, Fuse.Layouts.Dock.Bottom);
        ButtonsPanel.Children.Add(temp8);
        ButtonsPanel.Children.Add(temp14);
        ButtonsPanel.Children.Add(show);
        temp8.CornerRadius = float4(20f, 20f, 20f, 20f);
        temp8.Color = Fuse.Drawing.Colors.White;
        temp8.Width = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp8.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp8.Margin = float4(10f, 10f, 10f, 10f);
        temp8.Padding = float4(10f, 10f, 10f, 10f);
        temp8.SourceLineNumber = 12;
        temp8.SourceFileName = "Pages/Menu_Customer/Confirm_inq_appr.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp8, Fuse.Layouts.Dock.Top);
        temp8.Fill = temp13;
        temp8.Children.Add(temp9);
        temp8.Children.Add(temp10);
        temp9.Value = "Yes";
        temp9.Color = Fuse.Drawing.Colors.White;
        temp9.Alignment = Fuse.Elements.Alignment.Center;
        temp9.SourceLineNumber = 13;
        temp9.SourceFileName = "Pages/Menu_Customer/Confirm_inq_appr.ux";
        temp9.Font = global::MainView.AGOTHIC14;
        temp10.SourceLineNumber = 14;
        temp10.SourceFileName = "Pages/Menu_Customer/Confirm_inq_appr.ux";
        temp10.Actions.Add(temp11);
        temp10.Actions.Add(temp12);
        temp11.Value = false;
        temp11.SourceLineNumber = 15;
        temp11.SourceFileName = "Pages/Menu_Customer/Confirm_inq_appr.ux";
        temp12.EventName = __selector11;
        temp12.SourceLineNumber = 16;
        temp12.SourceFileName = "Pages/Menu_Customer/Confirm_inq_appr.ux";
        temp14.CornerRadius = float4(20f, 20f, 20f, 20f);
        temp14.Color = Fuse.Drawing.Colors.White;
        temp14.Width = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp14.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp14.Margin = float4(10f, 10f, 10f, 10f);
        temp14.Padding = float4(10f, 10f, 10f, 10f);
        temp14.SourceLineNumber = 19;
        temp14.SourceFileName = "Pages/Menu_Customer/Confirm_inq_appr.ux";
        temp14.Fill = temp18;
        temp14.Children.Add(temp15);
        temp14.Children.Add(temp16);
        temp15.Value = "No";
        temp15.Color = Fuse.Drawing.Colors.White;
        temp15.Alignment = Fuse.Elements.Alignment.Center;
        temp15.SourceLineNumber = 20;
        temp15.SourceFileName = "Pages/Menu_Customer/Confirm_inq_appr.ux";
        temp15.Font = global::MainView.AGOTHIC14;
        temp16.SourceLineNumber = 21;
        temp16.SourceFileName = "Pages/Menu_Customer/Confirm_inq_appr.ux";
        temp16.Actions.Add(temp17);
        temp17.Value = false;
        temp17.SourceLineNumber = 22;
        temp17.SourceFileName = "Pages/Menu_Customer/Confirm_inq_appr.ux";
        show.Name = __selector12;
        show.SourceLineNumber = 25;
        show.SourceFileName = "Pages/Menu_Customer/Confirm_inq_appr.ux";
        show.Animators.Add(temp19);
        show.Animators.Add(temp20);
        show.Animators.Add(temp21);
        show.Animators.Add(temp22);
        show.Animators.Add(temp23);
        show.Bindings.Add(temp24);
        temp19.Value = new Uno.UX.Size2(new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified), new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified));
        temp19.Duration = 0.2;
        temp19.DelayBack = 0;
        temp19.Delay = 0.2;
        temp19.Easing = Fuse.Animations.Easing.CubicOut;
        temp20.Value = float4(0f, 0f, 0f, 0.8666667f);
        temp20.Duration = 0.15;
        temp20.DelayBack = 0.25;
        temp21.Value = new Uno.UX.Size2(new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified), new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified));
        temp21.Duration = 0.3;
        temp21.Delay = 0;
        temp21.Easing = Fuse.Animations.Easing.QuinticInOut;
        temp22.Value = Fuse.Elements.HitTestMode.Children;
        temp23.Value = 1f;
        temp23.Duration = 0.5;
        temp23.Easing = Fuse.Animations.Easing.QuinticOut;
        temp3.SourceLineNumber = 25;
        temp3.SourceFileName = "Pages/Menu_Customer/Confirm_inq_appr.ux";
        temp2.SourceLineNumber = 25;
        temp2.SourceFileName = "Pages/Menu_Customer/Confirm_inq_appr.ux";
        Event_Handler.Name = __selector11;
        Event_Handler.SourceLineNumber = 38;
        Event_Handler.SourceFileName = "Pages/Menu_Customer/Confirm_inq_appr.ux";
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
