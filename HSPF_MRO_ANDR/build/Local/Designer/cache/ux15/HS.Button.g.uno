namespace HS
{
    [Uno.Compiler.UxGenerated]
    public partial class Button: Fuse.Controls.Panel
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
        static Button()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Button()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp1 = new global::Fuse.Reactive.Constant(this);
            var temp = new global::Fuse.Controls.Text();
            temp_Value_inst = new HSMRO_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp2 = new global::Fuse.Reactive.Property(temp1, HSMRO_accessor_HS_Button_Text.Singleton);
            var temp3 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Read);
            var temp4 = new global::Fuse.Gestures.WhilePressed();
            var temp5 = new global::Fuse.Animations.Scale();
            this.SourceLineNumber = 1;
            this.SourceFileName = "Components/HS.Button.ux";
            temp.Color = Fuse.Drawing.Colors.Black;
            temp.SourceLineNumber = 5;
            temp.SourceFileName = "Components/HS.Button.ux";
            temp.Font = global::MainView.AGOTHIC14;
            temp.Bindings.Add(temp3);
            temp2.SourceLineNumber = 5;
            temp2.SourceFileName = "Components/HS.Button.ux";
            temp1.SourceLineNumber = 5;
            temp1.SourceFileName = "Components/HS.Button.ux";
            temp4.SourceLineNumber = 7;
            temp4.SourceFileName = "Components/HS.Button.ux";
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
