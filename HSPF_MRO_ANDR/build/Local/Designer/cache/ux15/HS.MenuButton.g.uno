namespace HS
{
    [Uno.Compiler.UxGenerated]
    public partial class MenuButton: Fuse.Controls.Panel
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
        string _field_Id;
        [global::Uno.UX.UXOriginSetter("SetId")]
        public string Id
        {
            get { return _field_Id; }
            set { SetId(value, null); }
        }
        public void SetId(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_Id)
            {
                _field_Id = value;
                OnPropertyChanged("Id", origin);
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
        static MenuButton()
        {
        }
        [global::Uno.UX.UXConstructor]
        public MenuButton()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp1 = new global::Fuse.Reactive.Constant(this);
            var temp = new global::HS.Text();
            temp_Value_inst = new HSMRO_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp2 = new global::Fuse.Reactive.Property(temp1, HSMRO_accessor_HS_MenuButton_Text.Singleton);
            var temp3 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Read);
            var temp4 = new global::Fuse.Gestures.WhilePressed();
            var temp5 = new global::Fuse.Animations.Scale();
            this.SourceLineNumber = 1;
            this.SourceFileName = "Components/HS.MenuButton.ux";
            temp.FontSize = 40f;
            temp.Color = Fuse.Drawing.Colors.Black;
            temp.Margin = float4(0f, 0f, 0f, 0f);
            temp.Padding = float4(0f, 0f, 0f, 0f);
            temp.Layer = Fuse.Layer.Overlay;
            temp.SourceLineNumber = 7;
            temp.SourceFileName = "Components/HS.MenuButton.ux";
            temp.Font = global::MainView.AGOTHIC14;
            temp.Bindings.Add(temp3);
            temp2.SourceLineNumber = 7;
            temp2.SourceFileName = "Components/HS.MenuButton.ux";
            temp1.SourceLineNumber = 7;
            temp1.SourceFileName = "Components/HS.MenuButton.ux";
            temp4.SourceLineNumber = 9;
            temp4.SourceFileName = "Components/HS.MenuButton.ux";
            temp4.Animators.Add(temp5);
            temp5.Factor = 0.95f;
            temp5.Duration = 0.08;
            temp5.Easing = Fuse.Animations.Easing.QuadraticOut;
            this.Children.Add(temp);
            this.Children.Add(temp4);
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
}
