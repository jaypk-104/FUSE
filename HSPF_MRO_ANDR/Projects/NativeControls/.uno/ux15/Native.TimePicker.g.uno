namespace Native
{
    [Uno.Compiler.UxGenerated]
    public partial class TimePicker: Native.TimePickerBase
    {
        [Uno.Compiler.UxGenerated]
        public partial class Template: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Native.TimePicker __parent;
            [Uno.WeakReference] internal readonly Native.TimePicker __parentInstance;
            public Template(Native.TimePicker parent, Native.TimePicker parentInstance): base("GraphicsAppearance", false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            static Template()
            {
            }
            public override object New()
            {
                var __self = new global::Fuse.Controls.Panel();
                var temp = new global::Fuse.Controls.Text();
                var temp1 = new global::Fuse.Controls.Rectangle();
                var temp2 = new global::Fuse.Drawing.Stroke();
                var temp3 = new global::Fuse.Drawing.StaticSolidColor(float4(0.9333333f, 0.9333333f, 0.9333333f, 1f));
                __self.Margin = float4(4f, 4f, 4f, 4f);
                __self.Padding = float4(30f, 30f, 30f, 30f);
                __self.Name = __selector0;
                __self.SourceLineNumber = 2;
                __self.SourceFileName = "TimePicker.ux";
                temp.Value = "GraphicsAppearance for TimePicker not implemented!";
                temp.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
                temp.Alignment = Fuse.Elements.Alignment.Center;
                temp.SourceLineNumber = 3;
                temp.SourceFileName = "TimePicker.ux";
                temp1.Layer = Fuse.Layer.Background;
                temp1.SourceLineNumber = 4;
                temp1.SourceFileName = "TimePicker.ux";
                temp1.Strokes.Add(temp2);
                temp2.Color = float4(0f, 0f, 0f, 1f);
                __self.Background = temp3;
                __self.Children.Add(temp);
                __self.Children.Add(temp1);
                return __self;
            }
            static global::Uno.UX.Selector __selector0 = "GraphicsAppearance";
        }
        [Uno.Compiler.UxGenerated]
        public partial class Template1: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Native.TimePicker __parent;
            [Uno.WeakReference] internal readonly Native.TimePicker __parentInstance;
            public Template1(Native.TimePicker parent, Native.TimePicker parentInstance): base("iOSAppearance", false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            static Template1()
            {
            }
            public override object New()
            {
                var __self = new global::Native.iOS.TimePickerView(__parent);
                return __self;
            }
        }
        [Uno.Compiler.UxGenerated]
        public partial class Template2: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Native.TimePicker __parent;
            [Uno.WeakReference] internal readonly Native.TimePicker __parentInstance;
            public Template2(Native.TimePicker parent, Native.TimePicker parentInstance): base("AndroidAppearance", false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            static Template2()
            {
            }
            public override object New()
            {
                var __self = new global::Native.Android.TimePickerView(__parent);
                return __self;
            }
        }
        static TimePicker()
        {
        }
        [global::Uno.UX.UXConstructor]
        public TimePicker()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var GraphicsAppearance = new Template(this, this);
            var iOSAppearance = new Template1(this, this);
            var AndroidAppearance = new Template2(this, this);
            this.Name = __selector0;
            this.SourceLineNumber = 1;
            this.SourceFileName = "TimePicker.ux";
            this.Templates.Add(GraphicsAppearance);
            this.Templates.Add(iOSAppearance);
            this.Templates.Add(AndroidAppearance);
        }
        static global::Uno.UX.Selector __selector0 = "self";
    }
}
