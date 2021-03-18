namespace HS
{
    [Uno.Compiler.UxGenerated]
    public partial class Rectangle: Fuse.Controls.Panel
    {
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
        string _field_FontSize;
        [global::Uno.UX.UXOriginSetter("SetFontSize")]
        public string FontSize
        {
            get { return _field_FontSize; }
            set { SetFontSize(value, null); }
        }
        public void SetFontSize(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_FontSize)
            {
                _field_FontSize = value;
                OnPropertyChanged("FontSize", origin);
            }
        }
        string _field_Value;
        [global::Uno.UX.UXOriginSetter("SetValue")]
        public string Value
        {
            get { return _field_Value; }
            set { SetValue(value, null); }
        }
        public void SetValue(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_Value)
            {
                _field_Value = value;
                OnPropertyChanged("Value", origin);
            }
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        static Rectangle()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Rectangle()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp1 = new global::Fuse.Reactive.Constant(this);
            var temp = new global::HS.Text();
            temp_Value_inst = new HSMRO_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp2 = new global::Fuse.Reactive.Property(temp1, HSMRO_accessor_HS_Rectangle_Text.Singleton);
            var temp3 = new global::Fuse.Controls.Rectangle();
            var temp4 = new global::Fuse.Effects.DropShadow();
            var temp5 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Read);
            var temp6 = new global::Fuse.Gestures.WhilePressed();
            var temp7 = new global::Fuse.Animations.Scale();
            this.SourceLineNumber = 1;
            this.SourceFileName = "Components/HS.Rectangle.ux";
            temp3.CornerRadius = float4(4f, 4f, 4f, 4f);
            temp3.Color = float4(0.07058824f, 0.372549f, 0.3882353f, 1f);
            temp3.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            temp3.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
            temp3.Layer = Fuse.Layer.Background;
            temp3.SourceLineNumber = 6;
            temp3.SourceFileName = "Components/HS.Rectangle.ux";
            temp3.Children.Add(temp4);
            temp4.Size = 2f;
            temp4.Angle = 90f;
            temp4.Distance = 1f;
            temp4.Spread = 0.2f;
            temp4.Color = float4(0f, 0f, 0f, 0.3764706f);
            temp4.SourceLineNumber = 7;
            temp4.SourceFileName = "Components/HS.Rectangle.ux";
            temp.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp.FontSize = 40f;
            temp.Color = Fuse.Drawing.Colors.Black;
            temp.Alignment = Fuse.Elements.Alignment.Center;
            temp.Padding = float4(0f, 0f, 0f, 0f);
            temp.SourceLineNumber = 10;
            temp.SourceFileName = "Components/HS.Rectangle.ux";
            temp.Font = global::MainView.AGOTHIC14;
            temp.Bindings.Add(temp5);
            temp2.SourceLineNumber = 10;
            temp2.SourceFileName = "Components/HS.Rectangle.ux";
            temp1.SourceLineNumber = 10;
            temp1.SourceFileName = "Components/HS.Rectangle.ux";
            temp6.SourceLineNumber = 12;
            temp6.SourceFileName = "Components/HS.Rectangle.ux";
            temp6.Animators.Add(temp7);
            temp7.Factor = 0.95f;
            temp7.Duration = 0.08;
            temp7.Easing = Fuse.Animations.Easing.QuadraticOut;
            this.Children.Add(temp3);
            this.Children.Add(temp);
            this.Children.Add(temp6);
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
}
