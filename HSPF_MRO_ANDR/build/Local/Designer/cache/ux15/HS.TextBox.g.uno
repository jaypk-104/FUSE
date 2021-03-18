namespace HS
{
    [Uno.Compiler.UxGenerated]
    public partial class TextBox: Fuse.Controls.TextBox
    {
        string _field_id;
        [global::Uno.UX.UXOriginSetter("Setid")]
        public string id
        {
            get { return _field_id; }
            set { Setid(value, null); }
        }
        public void Setid(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_id)
            {
                _field_id = value;
                OnPropertyChanged("id", origin);
            }
        }
        static TextBox()
        {
        }
        [global::Uno.UX.UXConstructor]
        public TextBox()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            this.TextColor = Fuse.Drawing.Colors.White;
            this.CaretColor = Fuse.Drawing.Colors.White;
            this.Padding = float4(10f, 10f, 0f, 10f);
            this.SourceLineNumber = 1;
            this.SourceFileName = "Components/HS.TextBox.ux";
        }
    }
}
