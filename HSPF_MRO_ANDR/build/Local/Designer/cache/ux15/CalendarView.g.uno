[Uno.Compiler.UxGenerated]
public partial class CalendarView: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly CalendarView __parent;
        [Uno.WeakReference] internal readonly CalendarView __parentInstance;
        public Template(CalendarView parent, CalendarView parentInstance): base("month", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::MonthView(__parent.router);
            __self.Name = __selector0;
            __self.SourceLineNumber = 19;
            __self.SourceFileName = "Modules/CalendarView/CalendarView.ux";
            global::Fuse.Controls.Navigator.SetSwipeBack(__self, Fuse.Controls.NavigatorSwipeDirection.None);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "month";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly CalendarView __parent;
        [Uno.WeakReference] internal readonly CalendarView __parentInstance;
        public Template1(CalendarView parent, CalendarView parentInstance): base("day", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::DayView(__parent.router);
            __self.ZOffset = 1f;
            __self.Name = __selector0;
            __self.SourceLineNumber = 20;
            __self.SourceFileName = "Modules/CalendarView/CalendarView.ux";
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "day";
    }
    global::Uno.UX.Property<bool> swipeLeft_IsEnabled_inst;
    global::Uno.UX.Property<bool> swipeRight_IsEnabled_inst;
    internal global::Fuse.Controls.Navigator calNav;
    internal global::Fuse.Controls.NavigatorSwipe swipeLeft;
    internal global::Fuse.Controls.NavigatorSwipe swipeRight;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "calNav",
        "swipeLeft",
        "swipeRight"
    };
    static CalendarView()
    {
    }
    [global::Uno.UX.UXConstructor]
    public CalendarView(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        swipeLeft = new global::Fuse.Controls.NavigatorSwipe();
        swipeLeft_IsEnabled_inst = new HSMRO_FuseControlsNavigatorSwipe_IsEnabled_Property(swipeLeft, __selector0);
        swipeRight = new global::Fuse.Controls.NavigatorSwipe();
        swipeRight_IsEnabled_inst = new HSMRO_FuseControlsNavigatorSwipe_IsEnabled_Property(swipeRight, __selector0);
        var temp = new global::Fuse.Reactive.JavaScript(__g_nametable);
        calNav = new global::Fuse.Controls.Navigator();
        var temp1 = new global::Fuse.Navigation.WhilePageActive();
        var temp2 = new global::Fuse.Animations.Change<bool>(swipeLeft_IsEnabled_inst);
        var temp3 = new global::Fuse.Animations.Change<bool>(swipeRight_IsEnabled_inst);
        var month = new Template(this, this);
        var day = new Template1(this, this);
        this.Visibility = Fuse.Elements.Visibility.Visible;
        this.Name = __selector1;
        this.SourceLineNumber = 1;
        this.SourceFileName = "Modules/CalendarView/CalendarView.ux";
        temp.Code = "\n\t\tvar d = new Date()\n\t\tconsole.log('calview' + d);\n\t\trouter.gotoRelative( calNav, \"month\", { month: d.getMonth(), year: d.getFullYear() } )\n\t";
        temp.LineNumber = 3;
        temp.FileName = "Modules/CalendarView/CalendarView.ux";
        temp.SourceLineNumber = 3;
        temp.SourceFileName = "Modules/CalendarView/CalendarView.ux";
        calNav.SwipeBack = Fuse.Controls.NavigatorSwipeDirection.Down;
        calNav.Name = __selector2;
        calNav.SourceLineNumber = 8;
        calNav.SourceFileName = "Modules/CalendarView/CalendarView.ux";
        calNav.Children.Add(swipeLeft);
        calNav.Children.Add(swipeRight);
        calNav.Children.Add(temp1);
        calNav.Templates.Add(month);
        calNav.Templates.Add(day);
        swipeLeft.Direction = Fuse.Controls.NavigatorSwipeDirection.Left;
        swipeLeft.IsEnabled = false;
        swipeLeft.How = Fuse.Controls.NavigatorSwipeHow.GotoBookmark;
        swipeLeft.Bookmark = "nextMonth";
        swipeLeft.Style = "fromRight";
        swipeLeft.Name = __selector3;
        swipeLeft.SourceLineNumber = 9;
        swipeLeft.SourceFileName = "Modules/CalendarView/CalendarView.ux";
        swipeRight.Direction = Fuse.Controls.NavigatorSwipeDirection.Right;
        swipeRight.IsEnabled = false;
        swipeRight.How = Fuse.Controls.NavigatorSwipeHow.GotoBookmark;
        swipeRight.Bookmark = "prevMonth";
        swipeRight.Style = "fromLeft";
        swipeRight.Name = __selector4;
        swipeRight.SourceLineNumber = 11;
        swipeRight.SourceFileName = "Modules/CalendarView/CalendarView.ux";
        temp1.Threshold = 0f;
        temp1.NameEquals = "month";
        temp1.SourceLineNumber = 14;
        temp1.SourceFileName = "Modules/CalendarView/CalendarView.ux";
        temp1.Animators.Add(temp2);
        temp1.Animators.Add(temp3);
        temp2.Value = true;
        temp3.Value = true;
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(calNav);
        __g_nametable.Objects.Add(swipeLeft);
        __g_nametable.Objects.Add(swipeRight);
        this.Children.Add(temp);
        this.Children.Add(calNav);
    }
    static global::Uno.UX.Selector __selector0 = "IsEnabled";
    static global::Uno.UX.Selector __selector1 = "CalendarView";
    static global::Uno.UX.Selector __selector2 = "calNav";
    static global::Uno.UX.Selector __selector3 = "swipeLeft";
    static global::Uno.UX.Selector __selector4 = "swipeRight";
}
