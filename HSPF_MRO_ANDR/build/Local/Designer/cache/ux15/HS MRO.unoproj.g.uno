sealed class HSMRO_accessor_HS_Button_Text: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_HS_Button_Text();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Text";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::HS.Button)obj).Text; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::HS.Button)obj).SetText((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_HS_MenuButton_Text: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_HS_MenuButton_Text();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Text";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::HS.MenuButton)obj).Text; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::HS.MenuButton)obj).SetText((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_HS_Rectangle_Text: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_HS_Rectangle_Text();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Text";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::HS.Rectangle)obj).Text; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::HS.Rectangle)obj).SetText((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_MyToggle_IsActive: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_MyToggle_IsActive();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "IsActive";
    public override global::Uno.Type PropertyType { get { return typeof(bool); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::MyToggle)obj).IsActive; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::MyToggle)obj).SetIsActive((bool)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_MyToggle_SecondaryColor: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_MyToggle_SecondaryColor();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "SecondaryColor";
    public override global::Uno.Type PropertyType { get { return typeof(float4); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::MyToggle)obj).SecondaryColor; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::MyToggle)obj).SetSecondaryColor((float4)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_MyToggle_PrimaryColor: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_MyToggle_PrimaryColor();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "PrimaryColor";
    public override global::Uno.Type PropertyType { get { return typeof(float4); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::MyToggle)obj).PrimaryColor; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::MyToggle)obj).SetPrimaryColor((float4)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_Confirm_inq_appr_Text: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_Confirm_inq_appr_Text();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Text";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Confirm_inq_appr)obj).Text; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Confirm_inq_appr)obj).SetText((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_Confirm_inq_appr_Show: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_Confirm_inq_appr_Show();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Show";
    public override global::Uno.Type PropertyType { get { return typeof(bool); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Confirm_inq_appr)obj).Show; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Confirm_inq_appr)obj).SetShow((bool)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_Confirm_return_inq_Text: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_Confirm_return_inq_Text();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Text";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Confirm_return_inq)obj).Text; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Confirm_return_inq)obj).SetText((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_Confirm_return_inq_Show: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_Confirm_return_inq_Show();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Show";
    public override global::Uno.Type PropertyType { get { return typeof(bool); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Confirm_return_inq)obj).Show; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Confirm_return_inq)obj).SetShow((bool)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_DropdownOption_BackgroundColor: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_DropdownOption_BackgroundColor();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "BackgroundColor";
    public override global::Uno.Type PropertyType { get { return typeof(Fuse.Drawing.Brush); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::DropdownOption)obj).BackgroundColor; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::DropdownOption)obj).SetBackgroundColor((Fuse.Drawing.Brush)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_DropdownOption_BorderColor: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_DropdownOption_BorderColor();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "BorderColor";
    public override global::Uno.Type PropertyType { get { return typeof(Fuse.Drawing.Brush); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::DropdownOption)obj).BorderColor; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::DropdownOption)obj).SetBorderColor((Fuse.Drawing.Brush)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_DropdownOption_Text: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_DropdownOption_Text();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Text";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::DropdownOption)obj).Text; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::DropdownOption)obj).SetText((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_DropdownOption_FontSize: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_DropdownOption_FontSize();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "FontSize";
    public override global::Uno.Type PropertyType { get { return typeof(float); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::DropdownOption)obj).FontSize; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::DropdownOption)obj).SetFontSize((float)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_DropdownOption_TextColor: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_DropdownOption_TextColor();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "TextColor";
    public override global::Uno.Type PropertyType { get { return typeof(float4); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::DropdownOption)obj).TextColor; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::DropdownOption)obj).SetTextColor((float4)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_DropdownSelectedItem_FontSize: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_DropdownSelectedItem_FontSize();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "FontSize";
    public override global::Uno.Type PropertyType { get { return typeof(float); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::DropdownSelectedItem)obj).FontSize; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::DropdownSelectedItem)obj).SetFontSize((float)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_DropdownSelectedItem_TextColor: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_DropdownSelectedItem_TextColor();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "TextColor";
    public override global::Uno.Type PropertyType { get { return typeof(float4); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::DropdownSelectedItem)obj).TextColor; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::DropdownSelectedItem)obj).SetTextColor((float4)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_DropdownSelectedItem_Text: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_DropdownSelectedItem_Text();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Text";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::DropdownSelectedItem)obj).Text; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::DropdownSelectedItem)obj).SetText((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_DropdownSelectedItem_BackgroundColor: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_DropdownSelectedItem_BackgroundColor();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "BackgroundColor";
    public override global::Uno.Type PropertyType { get { return typeof(Fuse.Drawing.Brush); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::DropdownSelectedItem)obj).BackgroundColor; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::DropdownSelectedItem)obj).SetBackgroundColor((Fuse.Drawing.Brush)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_DropdownMenu_BorderColor: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_DropdownMenu_BorderColor();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "BorderColor";
    public override global::Uno.Type PropertyType { get { return typeof(Fuse.Drawing.Brush); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::DropdownMenu)obj).BorderColor; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::DropdownMenu)obj).SetBorderColor((Fuse.Drawing.Brush)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_DropdownMenu_TextColor: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_DropdownMenu_TextColor();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "TextColor";
    public override global::Uno.Type PropertyType { get { return typeof(float4); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::DropdownMenu)obj).TextColor; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::DropdownMenu)obj).SetTextColor((float4)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_DropdownMenu_FontSize: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_DropdownMenu_FontSize();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "FontSize";
    public override global::Uno.Type PropertyType { get { return typeof(float); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::DropdownMenu)obj).FontSize; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::DropdownMenu)obj).SetFontSize((float)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_DropdownMenu_BackgroundColor: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_DropdownMenu_BackgroundColor();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "BackgroundColor";
    public override global::Uno.Type PropertyType { get { return typeof(Fuse.Drawing.Brush); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::DropdownMenu)obj).BackgroundColor; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::DropdownMenu)obj).SetBackgroundColor((Fuse.Drawing.Brush)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_DropdownMenu_ListItems: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_DropdownMenu_ListItems();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "ListItems";
    public override global::Uno.Type PropertyType { get { return typeof(object); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::DropdownMenu)obj).ListItems; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::DropdownMenu)obj).SetListItems((object)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_ListType_USR_NM: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_ListType_USR_NM();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "USR_NM";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::ListType)obj).USR_NM; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::ListType)obj).SetUSR_NM((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_ListType_USR_ID: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_ListType_USR_ID();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "USR_ID";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::ListType)obj).USR_ID; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::ListType)obj).SetUSR_ID((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_Tab_1_Text: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_Tab_1_Text();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Text";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Tab_1)obj).Text; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Tab_1)obj).SetText((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_Tab_1_Color: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_Tab_1_Color();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Color";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Tab_1)obj).Color; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Tab_1)obj).SetColor((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_Tab_Text: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_Tab_Text();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Text";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Tab)obj).Text; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Tab)obj).SetText((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_Tab_Color: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_Tab_Color();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Color";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Tab)obj).Color; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Tab)obj).SetColor((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_MyLoadingIndicator1_ThemeColor: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_MyLoadingIndicator1_ThemeColor();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "ThemeColor";
    public override global::Uno.Type PropertyType { get { return typeof(float4); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::MyLoadingIndicator1)obj).ThemeColor; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::MyLoadingIndicator1)obj).SetThemeColor((float4)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_Tab_1_inq_Text: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_Tab_1_inq_Text();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Text";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Tab_1_inq)obj).Text; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Tab_1_inq)obj).SetText((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_Tab_1_inq_Color: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_Tab_1_inq_Color();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Color";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Tab_1_inq)obj).Color; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Tab_1_inq)obj).SetColor((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_MyLoadingIndicator_ThemeColor: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_MyLoadingIndicator_ThemeColor();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "ThemeColor";
    public override global::Uno.Type PropertyType { get { return typeof(float4); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::MyLoadingIndicator)obj).ThemeColor; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::MyLoadingIndicator)obj).SetThemeColor((float4)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_ListType_inq_USR_NM: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_ListType_inq_USR_NM();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "USR_NM";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::ListType_inq)obj).USR_NM; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::ListType_inq)obj).SetUSR_NM((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_ListType_inq_USR_ID: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_ListType_inq_USR_ID();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "USR_ID";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::ListType_inq)obj).USR_ID; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::ListType_inq)obj).SetUSR_ID((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_Tab_1_po_Text: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_Tab_1_po_Text();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Text";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Tab_1_po)obj).Text; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Tab_1_po)obj).SetText((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_Tab_1_po_Color: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_Tab_1_po_Color();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Color";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Tab_1_po)obj).Color; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Tab_1_po)obj).SetColor((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_Confirm_Text: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_Confirm_Text();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Text";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Confirm)obj).Text; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Confirm)obj).SetText((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_SelectableRectangle_SelectionColor: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_SelectableRectangle_SelectionColor();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "SelectionColor";
    public override global::Uno.Type PropertyType { get { return typeof(float4); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::SelectableRectangle)obj).SelectionColor; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::SelectableRectangle)obj).SetSelectionColor((float4)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_SelectableRectangle_ID: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_SelectableRectangle_ID();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "ID";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::SelectableRectangle)obj).ID; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::SelectableRectangle)obj).SetID((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_Confirm_Show: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_Confirm_Show();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Show";
    public override global::Uno.Type PropertyType { get { return typeof(bool); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Confirm)obj).Show; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Confirm)obj).SetShow((bool)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_Confirm_msg_Text: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_Confirm_msg_Text();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Text";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Confirm_msg)obj).Text; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Confirm_msg)obj).SetText((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_Confirm_msg_Show: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_Confirm_msg_Show();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Show";
    public override global::Uno.Type PropertyType { get { return typeof(bool); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Confirm_msg)obj).Show; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Confirm_msg)obj).SetShow((bool)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_Confirm_inq_Text: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_Confirm_inq_Text();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Text";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Confirm_inq)obj).Text; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Confirm_inq)obj).SetText((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_Confirm_inq_Show: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_Confirm_inq_Show();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Show";
    public override global::Uno.Type PropertyType { get { return typeof(bool); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Confirm_inq)obj).Show; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Confirm_inq)obj).SetShow((bool)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_Confirm_return_Text: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_Confirm_return_Text();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Text";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Confirm_return)obj).Text; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Confirm_return)obj).SetText((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_Confirm_return_Show: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_Confirm_return_Show();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Show";
    public override global::Uno.Type PropertyType { get { return typeof(bool); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Confirm_return)obj).Show; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Confirm_return)obj).SetShow((bool)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_ModeIndicator_IsActive: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_ModeIndicator_IsActive();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "IsActive";
    public override global::Uno.Type PropertyType { get { return typeof(bool); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::ModeIndicator)obj).IsActive; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::ModeIndicator)obj).SetIsActive((bool)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_CycleButton_Modes: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_CycleButton_Modes();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Modes";
    public override global::Uno.Type PropertyType { get { return typeof(object); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::CycleButton)obj).Modes; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::CycleButton)obj).SetModes((object)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_TypeIndicator_IsActive: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_TypeIndicator_IsActive();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "IsActive";
    public override global::Uno.Type PropertyType { get { return typeof(bool); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::TypeIndicator)obj).IsActive; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::TypeIndicator)obj).SetIsActive((bool)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_accessor_CycleButton2_Types: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new HSMRO_accessor_CycleButton2_Types();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Types";
    public override global::Uno.Type PropertyType { get { return typeof(object); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::CycleButton2)obj).Types; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::CycleButton2)obj).SetTypes((object)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_FuseControlsTextControl_TextColor_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly Fuse.Controls.TextControl _obj;
    public HSMRO_FuseControlsTextControl_TextColor_Property(Fuse.Controls.TextControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.TextControl)obj).TextColor; }
    public override void Set(global::Uno.UX.PropertyObject obj, float4 v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.TextControl)obj).TextColor = v; }
}
sealed class HSMRO_FuseControlsTextControl_Value_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Controls.TextControl _obj;
    public HSMRO_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.TextControl)obj).Value; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.TextControl)obj).SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_FuseElementsElement_MinHeight_Property: Uno.UX.Property<Uno.UX.Size>
{
    [Uno.WeakReference] readonly Fuse.Elements.Element _obj;
    public HSMRO_FuseElementsElement_MinHeight_Property(Fuse.Elements.Element obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Uno.UX.Size Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Elements.Element)obj).MinHeight; }
    public override void Set(global::Uno.UX.PropertyObject obj, Uno.UX.Size v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Elements.Element)obj).MinHeight = v; }
}
sealed class HSMRO_FuseElementsElement_Height_Property: Uno.UX.Property<Uno.UX.Size>
{
    [Uno.WeakReference] readonly Fuse.Elements.Element _obj;
    public HSMRO_FuseElementsElement_Height_Property(Fuse.Elements.Element obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Uno.UX.Size Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Elements.Element)obj).Height; }
    public override void Set(global::Uno.UX.PropertyObject obj, Uno.UX.Size v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Elements.Element)obj).Height = v; }
}
sealed class HSMRO_FuseRotation_Degrees_Property: Uno.UX.Property<float>
{
    [Uno.WeakReference] readonly Fuse.Rotation _obj;
    public HSMRO_FuseRotation_Degrees_Property(Fuse.Rotation obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Rotation)obj).Degrees; }
    public override void Set(global::Uno.UX.PropertyObject obj, float v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Rotation)obj).Degrees = v; }
}
sealed class HSMRO_FuseTranslation_Y_Property: Uno.UX.Property<float>
{
    [Uno.WeakReference] readonly Fuse.Translation _obj;
    public HSMRO_FuseTranslation_Y_Property(Fuse.Translation obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Translation)obj).Y; }
    public override void Set(global::Uno.UX.PropertyObject obj, float v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Translation)obj).Y = v; }
}
sealed class HSMRO_FuseTriggersPullToReload_IsLoading_Property: Uno.UX.Property<bool>
{
    [Uno.WeakReference] readonly Fuse.Triggers.PullToReload _obj;
    public HSMRO_FuseTriggersPullToReload_IsLoading_Property(Fuse.Triggers.PullToReload obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Triggers.PullToReload)obj).IsLoading; }
    public override void Set(global::Uno.UX.PropertyObject obj, bool v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Triggers.PullToReload)obj).IsLoading = v; }
}
sealed class HSMRO_FuseTriggersWhileBool_Value_Property: Uno.UX.Property<bool>
{
    [Uno.WeakReference] readonly Fuse.Triggers.WhileBool _obj;
    public HSMRO_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Triggers.WhileBool)obj).Value; }
    public override void Set(global::Uno.UX.PropertyObject obj, bool v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Triggers.WhileBool)obj).Value = v; }
}
sealed class HSMRO_FuseControlsNavigatorSwipe_IsEnabled_Property: Uno.UX.Property<bool>
{
    [Uno.WeakReference] readonly Fuse.Controls.NavigatorSwipe _obj;
    public HSMRO_FuseControlsNavigatorSwipe_IsEnabled_Property(Fuse.Controls.NavigatorSwipe obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.NavigatorSwipe)obj).IsEnabled; }
    public override void Set(global::Uno.UX.PropertyObject obj, bool v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.NavigatorSwipe)obj).IsEnabled = v; }
}
sealed class HSMRO_FuseControlsPanel_Color_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly Fuse.Controls.Panel _obj;
    public HSMRO_FuseControlsPanel_Color_Property(Fuse.Controls.Panel obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.Panel)obj).Color; }
    public override void Set(global::Uno.UX.PropertyObject obj, float4 v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.Panel)obj).SetColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_FuseControlsShape_Color_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly Fuse.Controls.Shape _obj;
    public HSMRO_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.Shape)obj).Color; }
    public override void Set(global::Uno.UX.PropertyObject obj, float4 v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.Shape)obj).SetColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_FuseControlsImage_Color_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly Fuse.Controls.Image _obj;
    public HSMRO_FuseControlsImage_Color_Property(Fuse.Controls.Image obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.Image)obj).Color; }
    public override void Set(global::Uno.UX.PropertyObject obj, float4 v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.Image)obj).Color = v; }
}
sealed class HSMRO_FuseControlsTextControl_Color_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly Fuse.Controls.TextControl _obj;
    public HSMRO_FuseControlsTextControl_Color_Property(Fuse.Controls.TextControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.TextControl)obj).Color; }
    public override void Set(global::Uno.UX.PropertyObject obj, float4 v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.TextControl)obj).SetColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_FuseReactiveEach_Items_Property: Uno.UX.Property<object>
{
    [Uno.WeakReference] readonly Fuse.Reactive.Each _obj;
    public HSMRO_FuseReactiveEach_Items_Property(Fuse.Reactive.Each obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override object Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Reactive.Each)obj).Items; }
    public override void Set(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Reactive.Each)obj).Items = v; }
}
sealed class HSMRO_FuseTriggersActionsSetstring_Value_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Triggers.Actions.Set<string> _obj;
    public HSMRO_FuseTriggersActionsSetstring_Value_Property(Fuse.Triggers.Actions.Set<string> obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Triggers.Actions.Set<string>)obj).Value; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Triggers.Actions.Set<string>)obj).Value = v; }
}
sealed class HSMRO_FuseElementsElement_Visibility_Property: Uno.UX.Property<Fuse.Elements.Visibility>
{
    [Uno.WeakReference] readonly Fuse.Elements.Element _obj;
    public HSMRO_FuseElementsElement_Visibility_Property(Fuse.Elements.Element obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Elements.Visibility Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Elements.Element)obj).Visibility; }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.Elements.Visibility v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Elements.Element)obj).SetVisibility(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_FuseAnimationsChangebool_Value_Property: Uno.UX.Property<bool>
{
    [Uno.WeakReference] readonly Fuse.Animations.Change<bool> _obj;
    public HSMRO_FuseAnimationsChangebool_Value_Property(Fuse.Animations.Change<bool> obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Animations.Change<bool>)obj).Value; }
    public override void Set(global::Uno.UX.PropertyObject obj, bool v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Animations.Change<bool>)obj).Value = v; }
}
sealed class HSMRO_FuseElementsElement_Width_Property: Uno.UX.Property<Uno.UX.Size>
{
    [Uno.WeakReference] readonly Fuse.Elements.Element _obj;
    public HSMRO_FuseElementsElement_Width_Property(Fuse.Elements.Element obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Uno.UX.Size Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Elements.Element)obj).Width; }
    public override void Set(global::Uno.UX.PropertyObject obj, Uno.UX.Size v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Elements.Element)obj).Width = v; }
}
sealed class HSMRO_FuseElementsElement_Opacity_Property: Uno.UX.Property<float>
{
    [Uno.WeakReference] readonly Fuse.Elements.Element _obj;
    public HSMRO_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Elements.Element)obj).Opacity; }
    public override void Set(global::Uno.UX.PropertyObject obj, float v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Elements.Element)obj).SetOpacity(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_FuseControlsEllipticalShape_LengthAngleDegrees_Property: Uno.UX.Property<float>
{
    [Uno.WeakReference] readonly Fuse.Controls.EllipticalShape _obj;
    public HSMRO_FuseControlsEllipticalShape_LengthAngleDegrees_Property(Fuse.Controls.EllipticalShape obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.EllipticalShape)obj).LengthAngleDegrees; }
    public override void Set(global::Uno.UX.PropertyObject obj, float v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.EllipticalShape)obj).LengthAngleDegrees = v; }
}
sealed class HSMRO_FuseControlsNavigator_DefaultPath_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Controls.Navigator _obj;
    public HSMRO_FuseControlsNavigator_DefaultPath_Property(Fuse.Controls.Navigator obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.Navigator)obj).DefaultPath; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.Navigator)obj).DefaultPath = v; }
}
sealed class HSMRO_FuseControlsTextInputControl_Value_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Controls.TextInputControl _obj;
    public HSMRO_FuseControlsTextInputControl_Value_Property(Fuse.Controls.TextInputControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.TextInputControl)obj).Value; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.TextInputControl)obj).SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_FuseGesturesSwipeGesture_IsActive_Property: Uno.UX.Property<bool>
{
    [Uno.WeakReference] readonly Fuse.Gestures.SwipeGesture _obj;
    public HSMRO_FuseGesturesSwipeGesture_IsActive_Property(Fuse.Gestures.SwipeGesture obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Gestures.SwipeGesture)obj).IsActive; }
    public override void Set(global::Uno.UX.PropertyObject obj, bool v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Gestures.SwipeGesture)obj).SetIsActive(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_FuseAnimationsChangefloat4_Value_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly Fuse.Animations.Change<float4> _obj;
    public HSMRO_FuseAnimationsChangefloat4_Value_Property(Fuse.Animations.Change<float4> obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Animations.Change<float4>)obj).Value; }
    public override void Set(global::Uno.UX.PropertyObject obj, float4 v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Animations.Change<float4>)obj).Value = v; }
}
sealed class HSMRO_MyToggle_IsActive_Property: Uno.UX.Property<bool>
{
    [Uno.WeakReference] readonly MyToggle _obj;
    public HSMRO_MyToggle_IsActive_Property(MyToggle obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get(global::Uno.UX.PropertyObject obj) { return ((MyToggle)obj).IsActive; }
    public override void Set(global::Uno.UX.PropertyObject obj, bool v, global::Uno.UX.IPropertyListener origin) { ((MyToggle)obj).SetIsActive(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_Confirm_inq_appr_Show_Property: Uno.UX.Property<bool>
{
    [Uno.WeakReference] readonly Confirm_inq_appr _obj;
    public HSMRO_Confirm_inq_appr_Show_Property(Confirm_inq_appr obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get(global::Uno.UX.PropertyObject obj) { return ((Confirm_inq_appr)obj).Show; }
    public override void Set(global::Uno.UX.PropertyObject obj, bool v, global::Uno.UX.IPropertyListener origin) { ((Confirm_inq_appr)obj).SetShow(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_FuseElementsElement_Offset_Property: Uno.UX.Property<Uno.UX.Size2>
{
    [Uno.WeakReference] readonly Fuse.Elements.Element _obj;
    public HSMRO_FuseElementsElement_Offset_Property(Fuse.Elements.Element obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Uno.UX.Size2 Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Elements.Element)obj).Offset; }
    public override void Set(global::Uno.UX.PropertyObject obj, Uno.UX.Size2 v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Elements.Element)obj).Offset = v; }
}
sealed class HSMRO_FuseElementsElement_HitTestMode_Property: Uno.UX.Property<Fuse.Elements.HitTestMode>
{
    [Uno.WeakReference] readonly Fuse.Elements.Element _obj;
    public HSMRO_FuseElementsElement_HitTestMode_Property(Fuse.Elements.Element obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Elements.HitTestMode Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Elements.Element)obj).HitTestMode; }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.Elements.HitTestMode v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Elements.Element)obj).SetHitTestMode(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_Confirm_return_inq_Show_Property: Uno.UX.Property<bool>
{
    [Uno.WeakReference] readonly Confirm_return_inq _obj;
    public HSMRO_Confirm_return_inq_Show_Property(Confirm_return_inq obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get(global::Uno.UX.PropertyObject obj) { return ((Confirm_return_inq)obj).Show; }
    public override void Set(global::Uno.UX.PropertyObject obj, bool v, global::Uno.UX.IPropertyListener origin) { ((Confirm_return_inq)obj).SetShow(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_FuseControlsShape_Fill_Property: Uno.UX.Property<Fuse.Drawing.Brush>
{
    [Uno.WeakReference] readonly Fuse.Controls.Shape _obj;
    public HSMRO_FuseControlsShape_Fill_Property(Fuse.Controls.Shape obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Drawing.Brush Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.Shape)obj).Fill; }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.Shape)obj).Fill = v; }
}
sealed class HSMRO_FuseDrawingStroke_Brush_Property: Uno.UX.Property<Fuse.Drawing.Brush>
{
    [Uno.WeakReference] readonly Fuse.Drawing.Stroke _obj;
    public HSMRO_FuseDrawingStroke_Brush_Property(Fuse.Drawing.Stroke obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Drawing.Brush Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Drawing.Stroke)obj).Brush; }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Drawing.Stroke)obj).Brush = v; }
}
sealed class HSMRO_FuseControlsTextControl_FontSize_Property: Uno.UX.Property<float>
{
    [Uno.WeakReference] readonly Fuse.Controls.TextControl _obj;
    public HSMRO_FuseControlsTextControl_FontSize_Property(Fuse.Controls.TextControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.TextControl)obj).FontSize; }
    public override void Set(global::Uno.UX.PropertyObject obj, float v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.TextControl)obj).FontSize = v; }
}
sealed class HSMRO_DropdownMenu_Selected_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly DropdownMenu _obj;
    public HSMRO_DropdownMenu_Selected_Property(DropdownMenu obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((DropdownMenu)obj).Selected; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((DropdownMenu)obj).SetSelected(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_DropdownSelectedItem_TextColor_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly DropdownSelectedItem _obj;
    public HSMRO_DropdownSelectedItem_TextColor_Property(DropdownSelectedItem obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get(global::Uno.UX.PropertyObject obj) { return ((DropdownSelectedItem)obj).TextColor; }
    public override void Set(global::Uno.UX.PropertyObject obj, float4 v, global::Uno.UX.IPropertyListener origin) { ((DropdownSelectedItem)obj).SetTextColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_DropdownSelectedItem_FontSize_Property: Uno.UX.Property<float>
{
    [Uno.WeakReference] readonly DropdownSelectedItem _obj;
    public HSMRO_DropdownSelectedItem_FontSize_Property(DropdownSelectedItem obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get(global::Uno.UX.PropertyObject obj) { return ((DropdownSelectedItem)obj).FontSize; }
    public override void Set(global::Uno.UX.PropertyObject obj, float v, global::Uno.UX.IPropertyListener origin) { ((DropdownSelectedItem)obj).SetFontSize(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_DropdownSelectedItem_Text_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly DropdownSelectedItem _obj;
    public HSMRO_DropdownSelectedItem_Text_Property(DropdownSelectedItem obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((DropdownSelectedItem)obj).Text; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((DropdownSelectedItem)obj).SetText(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_DropdownSelectedItem_BackgroundColor_Property: Uno.UX.Property<Fuse.Drawing.Brush>
{
    [Uno.WeakReference] readonly DropdownSelectedItem _obj;
    public HSMRO_DropdownSelectedItem_BackgroundColor_Property(DropdownSelectedItem obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Drawing.Brush Get(global::Uno.UX.PropertyObject obj) { return ((DropdownSelectedItem)obj).BackgroundColor; }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, global::Uno.UX.IPropertyListener origin) { ((DropdownSelectedItem)obj).SetBackgroundColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_DropdownSelectedItem_BorderColor_Property: Uno.UX.Property<Fuse.Drawing.Brush>
{
    [Uno.WeakReference] readonly DropdownSelectedItem _obj;
    public HSMRO_DropdownSelectedItem_BorderColor_Property(DropdownSelectedItem obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Drawing.Brush Get(global::Uno.UX.PropertyObject obj) { return ((DropdownSelectedItem)obj).BorderColor; }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, global::Uno.UX.IPropertyListener origin) { ((DropdownSelectedItem)obj).SetBorderColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_DropdownOption_FontSize_Property: Uno.UX.Property<float>
{
    [Uno.WeakReference] readonly DropdownOption _obj;
    public HSMRO_DropdownOption_FontSize_Property(DropdownOption obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get(global::Uno.UX.PropertyObject obj) { return ((DropdownOption)obj).FontSize; }
    public override void Set(global::Uno.UX.PropertyObject obj, float v, global::Uno.UX.IPropertyListener origin) { ((DropdownOption)obj).SetFontSize(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_DropdownOption_TextColor_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly DropdownOption _obj;
    public HSMRO_DropdownOption_TextColor_Property(DropdownOption obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get(global::Uno.UX.PropertyObject obj) { return ((DropdownOption)obj).TextColor; }
    public override void Set(global::Uno.UX.PropertyObject obj, float4 v, global::Uno.UX.IPropertyListener origin) { ((DropdownOption)obj).SetTextColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_DropdownOption_Text_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly DropdownOption _obj;
    public HSMRO_DropdownOption_Text_Property(DropdownOption obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((DropdownOption)obj).Text; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((DropdownOption)obj).SetText(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_DropdownOption_BackgroundColor_Property: Uno.UX.Property<Fuse.Drawing.Brush>
{
    [Uno.WeakReference] readonly DropdownOption _obj;
    public HSMRO_DropdownOption_BackgroundColor_Property(DropdownOption obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Drawing.Brush Get(global::Uno.UX.PropertyObject obj) { return ((DropdownOption)obj).BackgroundColor; }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, global::Uno.UX.IPropertyListener origin) { ((DropdownOption)obj).SetBackgroundColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_DropdownOption_BorderColor_Property: Uno.UX.Property<Fuse.Drawing.Brush>
{
    [Uno.WeakReference] readonly DropdownOption _obj;
    public HSMRO_DropdownOption_BorderColor_Property(DropdownOption obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Drawing.Brush Get(global::Uno.UX.PropertyObject obj) { return ((DropdownOption)obj).BorderColor; }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, global::Uno.UX.IPropertyListener origin) { ((DropdownOption)obj).SetBorderColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_Confirm_return_Show_Property: Uno.UX.Property<bool>
{
    [Uno.WeakReference] readonly Confirm_return _obj;
    public HSMRO_Confirm_return_Show_Property(Confirm_return obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get(global::Uno.UX.PropertyObject obj) { return ((Confirm_return)obj).Show; }
    public override void Set(global::Uno.UX.PropertyObject obj, bool v, global::Uno.UX.IPropertyListener origin) { ((Confirm_return)obj).SetShow(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_FuseSelectionSelectable_Value_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Selection.Selectable _obj;
    public HSMRO_FuseSelectionSelectable_Value_Property(Fuse.Selection.Selectable obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Selection.Selectable)obj).Value; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Selection.Selectable)obj).Value = v; }
}
sealed class HSMRO_FuseAnimationsChangestring_Value_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Animations.Change<string> _obj;
    public HSMRO_FuseAnimationsChangestring_Value_Property(Fuse.Animations.Change<string> obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Animations.Change<string>)obj).Value; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Animations.Change<string>)obj).Value = v; }
}
sealed class HSMRO_ListType_USR_NM_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly ListType _obj;
    public HSMRO_ListType_USR_NM_Property(ListType obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((ListType)obj).USR_NM; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((ListType)obj).SetUSR_NM(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_ListType_USR_ID_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly ListType _obj;
    public HSMRO_ListType_USR_ID_Property(ListType obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((ListType)obj).USR_ID; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((ListType)obj).SetUSR_ID(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_Confirm_msg_Show_Property: Uno.UX.Property<bool>
{
    [Uno.WeakReference] readonly Confirm_msg _obj;
    public HSMRO_Confirm_msg_Show_Property(Confirm_msg obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get(global::Uno.UX.PropertyObject obj) { return ((Confirm_msg)obj).Show; }
    public override void Set(global::Uno.UX.PropertyObject obj, bool v, global::Uno.UX.IPropertyListener origin) { ((Confirm_msg)obj).SetShow(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_Confirm_Show_Property: Uno.UX.Property<bool>
{
    [Uno.WeakReference] readonly Confirm _obj;
    public HSMRO_Confirm_Show_Property(Confirm obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get(global::Uno.UX.PropertyObject obj) { return ((Confirm)obj).Show; }
    public override void Set(global::Uno.UX.PropertyObject obj, bool v, global::Uno.UX.IPropertyListener origin) { ((Confirm)obj).SetShow(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_FuseControlsNavigationControl_Active_Property: Uno.UX.Property<Fuse.Visual>
{
    [Uno.WeakReference] readonly Fuse.Controls.NavigationControl _obj;
    public HSMRO_FuseControlsNavigationControl_Active_Property(Fuse.Controls.NavigationControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Visual Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.NavigationControl)obj).Active; }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.Visual v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.NavigationControl)obj).Active = v; }
}
sealed class HSMRO_FuseControlsControl_Background_Property: Uno.UX.Property<Fuse.Drawing.Brush>
{
    [Uno.WeakReference] readonly Fuse.Controls.Control _obj;
    public HSMRO_FuseControlsControl_Background_Property(Fuse.Controls.Control obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Drawing.Brush Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.Control)obj).Background; }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.Control)obj).Background = v; }
}
sealed class HSMRO_Tab_Color_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Tab _obj;
    public HSMRO_Tab_Color_Property(Tab obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((Tab)obj).Color; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((Tab)obj).SetColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_CycleButton2_Types_Property: Uno.UX.Property<object>
{
    [Uno.WeakReference] readonly CycleButton2 _obj;
    public HSMRO_CycleButton2_Types_Property(CycleButton2 obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override object Get(global::Uno.UX.PropertyObject obj) { return ((CycleButton2)obj).Types; }
    public override void Set(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((CycleButton2)obj).SetTypes(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_CycleButton2_CurrentType_Property: Uno.UX.Property<int>
{
    [Uno.WeakReference] readonly CycleButton2 _obj;
    public HSMRO_CycleButton2_CurrentType_Property(CycleButton2 obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override int Get(global::Uno.UX.PropertyObject obj) { return ((CycleButton2)obj).CurrentType; }
    public override void Set(global::Uno.UX.PropertyObject obj, int v, global::Uno.UX.IPropertyListener origin) { ((CycleButton2)obj).SetCurrentType(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_CycleButton_Modes_Property: Uno.UX.Property<object>
{
    [Uno.WeakReference] readonly CycleButton _obj;
    public HSMRO_CycleButton_Modes_Property(CycleButton obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override object Get(global::Uno.UX.PropertyObject obj) { return ((CycleButton)obj).Modes; }
    public override void Set(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((CycleButton)obj).SetModes(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_CycleButton_CurrentMode_Property: Uno.UX.Property<int>
{
    [Uno.WeakReference] readonly CycleButton _obj;
    public HSMRO_CycleButton_CurrentMode_Property(CycleButton obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override int Get(global::Uno.UX.PropertyObject obj) { return ((CycleButton)obj).CurrentMode; }
    public override void Set(global::Uno.UX.PropertyObject obj, int v, global::Uno.UX.IPropertyListener origin) { ((CycleButton)obj).SetCurrentMode(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_FuseElementsElement_ElementLayoutMaster_Property: Uno.UX.Property<Fuse.Elements.Element>
{
    [Uno.WeakReference] readonly Fuse.Elements.Element _obj;
    public HSMRO_FuseElementsElement_ElementLayoutMaster_Property(Fuse.Elements.Element obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Elements.Element Get(global::Uno.UX.PropertyObject obj) { return global::Fuse.Controls.LayoutControl.GetLayoutMaster((Fuse.Elements.Element)obj); }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.Elements.Element v, global::Uno.UX.IPropertyListener origin) { global::Fuse.Controls.LayoutControl.SetLayoutMaster((Fuse.Elements.Element)obj, v); }
}
sealed class HSMRO_FuseControlsDatePickerBase_Value_Property: Uno.UX.Property<Uno.DateTime>
{
    [Uno.WeakReference] readonly Fuse.Controls.DatePickerBase _obj;
    public HSMRO_FuseControlsDatePickerBase_Value_Property(Fuse.Controls.DatePickerBase obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Uno.DateTime Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.DatePickerBase)obj).Value; }
    public override void Set(global::Uno.UX.PropertyObject obj, Uno.DateTime v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.DatePickerBase)obj).SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_FuseControlsDatePickerBase_MinValue_Property: Uno.UX.Property<Uno.DateTime>
{
    [Uno.WeakReference] readonly Fuse.Controls.DatePickerBase _obj;
    public HSMRO_FuseControlsDatePickerBase_MinValue_Property(Fuse.Controls.DatePickerBase obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Uno.DateTime Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.DatePickerBase)obj).MinValue; }
    public override void Set(global::Uno.UX.PropertyObject obj, Uno.DateTime v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.DatePickerBase)obj).SetMinValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_FuseControlsDatePickerBase_MaxValue_Property: Uno.UX.Property<Uno.DateTime>
{
    [Uno.WeakReference] readonly Fuse.Controls.DatePickerBase _obj;
    public HSMRO_FuseControlsDatePickerBase_MaxValue_Property(Fuse.Controls.DatePickerBase obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Uno.DateTime Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.DatePickerBase)obj).MaxValue; }
    public override void Set(global::Uno.UX.PropertyObject obj, Uno.DateTime v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.DatePickerBase)obj).SetMaxValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_FuseDrawingStroke_Color_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly Fuse.Drawing.Stroke _obj;
    public HSMRO_FuseDrawingStroke_Color_Property(Fuse.Drawing.Stroke obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Drawing.Stroke)obj).Color; }
    public override void Set(global::Uno.UX.PropertyObject obj, float4 v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Drawing.Stroke)obj).SetColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_FuseTriggersTimeline_TargetProgress_Property: Uno.UX.Property<double>
{
    [Uno.WeakReference] readonly Fuse.Triggers.Timeline _obj;
    public HSMRO_FuseTriggersTimeline_TargetProgress_Property(Fuse.Triggers.Timeline obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override double Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Triggers.Timeline)obj).TargetProgress; }
    public override void Set(global::Uno.UX.PropertyObject obj, double v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Triggers.Timeline)obj).TargetProgress = v; }
}
sealed class HSMRO_FuseTriggersBusy_IsActive_Property: Uno.UX.Property<bool>
{
    [Uno.WeakReference] readonly Fuse.Triggers.Busy _obj;
    public HSMRO_FuseTriggersBusy_IsActive_Property(Fuse.Triggers.Busy obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Triggers.Busy)obj).IsActive; }
    public override void Set(global::Uno.UX.PropertyObject obj, bool v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Triggers.Busy)obj).IsActive = v; }
}
sealed class HSMRO_FuseControlsPageControl_Interaction_Property: Uno.UX.Property<Fuse.Controls.NavigationControlInteraction>
{
    [Uno.WeakReference] readonly Fuse.Controls.PageControl _obj;
    public HSMRO_FuseControlsPageControl_Interaction_Property(Fuse.Controls.PageControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Controls.NavigationControlInteraction Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.PageControl)obj).Interaction; }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.Controls.NavigationControlInteraction v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.PageControl)obj).Interaction = v; }
}
sealed class HSMRO_FuseResourcesHttpImageSource_Url_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Resources.HttpImageSource _obj;
    public HSMRO_FuseResourcesHttpImageSource_Url_Property(Fuse.Resources.HttpImageSource obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Resources.HttpImageSource)obj).Url; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Resources.HttpImageSource)obj).Url = v; }
}
sealed class HSMRO_FuseElementsInteractiveTransform_ZoomFactor_Property: Uno.UX.Property<float>
{
    [Uno.WeakReference] readonly Fuse.Elements.InteractiveTransform _obj;
    public HSMRO_FuseElementsInteractiveTransform_ZoomFactor_Property(Fuse.Elements.InteractiveTransform obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Elements.InteractiveTransform)obj).ZoomFactor; }
    public override void Set(global::Uno.UX.PropertyObject obj, float v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Elements.InteractiveTransform)obj).SetZoomFactor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_FuseElementsInteractiveTransform_Translation_Property: Uno.UX.Property<float2>
{
    [Uno.WeakReference] readonly Fuse.Elements.InteractiveTransform _obj;
    public HSMRO_FuseElementsInteractiveTransform_Translation_Property(Fuse.Elements.InteractiveTransform obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float2 Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Elements.InteractiveTransform)obj).Translation; }
    public override void Set(global::Uno.UX.PropertyObject obj, float2 v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Elements.InteractiveTransform)obj).SetTranslation(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_FuseElementsInteractiveTransform_Rotation_Property: Uno.UX.Property<float>
{
    [Uno.WeakReference] readonly Fuse.Elements.InteractiveTransform _obj;
    public HSMRO_FuseElementsInteractiveTransform_Rotation_Property(Fuse.Elements.InteractiveTransform obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Elements.InteractiveTransform)obj).Rotation; }
    public override void Set(global::Uno.UX.PropertyObject obj, float v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Elements.InteractiveTransform)obj).SetRotation(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_ListType_inq_USR_NM_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly ListType_inq _obj;
    public HSMRO_ListType_inq_USR_NM_Property(ListType_inq obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((ListType_inq)obj).USR_NM; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((ListType_inq)obj).SetUSR_NM(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_ListType_inq_USR_ID_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly ListType_inq _obj;
    public HSMRO_ListType_inq_USR_ID_Property(ListType_inq obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((ListType_inq)obj).USR_ID; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((ListType_inq)obj).SetUSR_ID(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_Confirm_inq_Show_Property: Uno.UX.Property<bool>
{
    [Uno.WeakReference] readonly Confirm_inq _obj;
    public HSMRO_Confirm_inq_Show_Property(Confirm_inq obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get(global::Uno.UX.PropertyObject obj) { return ((Confirm_inq)obj).Show; }
    public override void Set(global::Uno.UX.PropertyObject obj, bool v, global::Uno.UX.IPropertyListener origin) { ((Confirm_inq)obj).SetShow(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_FuseReactiveWhileCount_Items_Property: Uno.UX.Property<object>
{
    [Uno.WeakReference] readonly Fuse.Reactive.WhileCount _obj;
    public HSMRO_FuseReactiveWhileCount_Items_Property(Fuse.Reactive.WhileCount obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override object Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Reactive.WhileCount)obj).Items; }
    public override void Set(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Reactive.WhileCount)obj).Items = v; }
}
sealed class HSMRO_ModeIndicator_IsActive_Property: Uno.UX.Property<bool>
{
    [Uno.WeakReference] readonly ModeIndicator _obj;
    public HSMRO_ModeIndicator_IsActive_Property(ModeIndicator obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get(global::Uno.UX.PropertyObject obj) { return ((ModeIndicator)obj).IsActive; }
    public override void Set(global::Uno.UX.PropertyObject obj, bool v, global::Uno.UX.IPropertyListener origin) { ((ModeIndicator)obj).SetIsActive(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_TypeIndicator_IsActive_Property: Uno.UX.Property<bool>
{
    [Uno.WeakReference] readonly TypeIndicator _obj;
    public HSMRO_TypeIndicator_IsActive_Property(TypeIndicator obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get(global::Uno.UX.PropertyObject obj) { return ((TypeIndicator)obj).IsActive; }
    public override void Set(global::Uno.UX.PropertyObject obj, bool v, global::Uno.UX.IPropertyListener origin) { ((TypeIndicator)obj).SetIsActive(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_FuseAnimationsAttractorfloat4_Value_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly Fuse.Animations.Attractor<float4> _obj;
    public HSMRO_FuseAnimationsAttractorfloat4_Value_Property(Fuse.Animations.Attractor<float4> obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Animations.Attractor<float4>)obj).Value; }
    public override void Set(global::Uno.UX.PropertyObject obj, float4 v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Animations.Attractor<float4>)obj).Value = v; }
}
sealed class HSMRO_FuseLayoutsColumn_Width_Property: Uno.UX.Property<float>
{
    [Uno.WeakReference] readonly Fuse.Layouts.Column _obj;
    public HSMRO_FuseLayoutsColumn_Width_Property(Fuse.Layouts.Column obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Layouts.Column)obj).Width; }
    public override void Set(global::Uno.UX.PropertyObject obj, float v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Layouts.Column)obj).Width = v; }
}
sealed class HSMRO_FuseElementsElement_Alignment_Property: Uno.UX.Property<Fuse.Elements.Alignment>
{
    [Uno.WeakReference] readonly Fuse.Elements.Element _obj;
    public HSMRO_FuseElementsElement_Alignment_Property(Fuse.Elements.Element obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Elements.Alignment Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Elements.Element)obj).Alignment; }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.Elements.Alignment v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Elements.Element)obj).Alignment = v; }
}
sealed class HSMRO_FuseScaling_Factor_Property: Uno.UX.Property<float>
{
    [Uno.WeakReference] readonly Fuse.Scaling _obj;
    public HSMRO_FuseScaling_Factor_Property(Fuse.Scaling obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Scaling)obj).Factor; }
    public override void Set(global::Uno.UX.PropertyObject obj, float v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Scaling)obj).Factor = v; }
}
sealed class HSMRO_DropdownMenu_ListItems_Property: Uno.UX.Property<object>
{
    [Uno.WeakReference] readonly DropdownMenu _obj;
    public HSMRO_DropdownMenu_ListItems_Property(DropdownMenu obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override object Get(global::Uno.UX.PropertyObject obj) { return ((DropdownMenu)obj).ListItems; }
    public override void Set(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((DropdownMenu)obj).SetListItems(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_DropdownMenu_TextColor_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly DropdownMenu _obj;
    public HSMRO_DropdownMenu_TextColor_Property(DropdownMenu obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get(global::Uno.UX.PropertyObject obj) { return ((DropdownMenu)obj).TextColor; }
    public override void Set(global::Uno.UX.PropertyObject obj, float4 v, global::Uno.UX.IPropertyListener origin) { ((DropdownMenu)obj).SetTextColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_DropdownMenu_BackgroundColor_Property: Uno.UX.Property<Fuse.Drawing.Brush>
{
    [Uno.WeakReference] readonly DropdownMenu _obj;
    public HSMRO_DropdownMenu_BackgroundColor_Property(DropdownMenu obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Drawing.Brush Get(global::Uno.UX.PropertyObject obj) { return ((DropdownMenu)obj).BackgroundColor; }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, global::Uno.UX.IPropertyListener origin) { ((DropdownMenu)obj).SetBackgroundColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_DropdownMenu_BorderColor_Property: Uno.UX.Property<Fuse.Drawing.Brush>
{
    [Uno.WeakReference] readonly DropdownMenu _obj;
    public HSMRO_DropdownMenu_BorderColor_Property(DropdownMenu obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Drawing.Brush Get(global::Uno.UX.PropertyObject obj) { return ((DropdownMenu)obj).BorderColor; }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, global::Uno.UX.IPropertyListener origin) { ((DropdownMenu)obj).SetBorderColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_DropdownMenu_FontSize_Property: Uno.UX.Property<float>
{
    [Uno.WeakReference] readonly DropdownMenu _obj;
    public HSMRO_DropdownMenu_FontSize_Property(DropdownMenu obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get(global::Uno.UX.PropertyObject obj) { return ((DropdownMenu)obj).FontSize; }
    public override void Set(global::Uno.UX.PropertyObject obj, float v, global::Uno.UX.IPropertyListener origin) { ((DropdownMenu)obj).SetFontSize(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_c_po_Options_Property: Uno.UX.Property<object>
{
    [Uno.WeakReference] readonly c_po _obj;
    public HSMRO_c_po_Options_Property(c_po obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override object Get(global::Uno.UX.PropertyObject obj) { return ((c_po)obj).Options; }
    public override void Set(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((c_po)obj).SetOptions(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_c_po_Selected_Property: Uno.UX.Property<object>
{
    [Uno.WeakReference] readonly c_po _obj;
    public HSMRO_c_po_Selected_Property(c_po obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override object Get(global::Uno.UX.PropertyObject obj) { return ((c_po)obj).Selected; }
    public override void Set(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((c_po)obj).SetSelected(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_c_po_Options2_Property: Uno.UX.Property<object>
{
    [Uno.WeakReference] readonly c_po _obj;
    public HSMRO_c_po_Options2_Property(c_po obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override object Get(global::Uno.UX.PropertyObject obj) { return ((c_po)obj).Options2; }
    public override void Set(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((c_po)obj).SetOptions2(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_c_po_Selected2_Property: Uno.UX.Property<object>
{
    [Uno.WeakReference] readonly c_po _obj;
    public HSMRO_c_po_Selected2_Property(c_po obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override object Get(global::Uno.UX.PropertyObject obj) { return ((c_po)obj).Selected2; }
    public override void Set(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((c_po)obj).SetSelected2(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_SelectableRectangle_ID_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly SelectableRectangle _obj;
    public HSMRO_SelectableRectangle_ID_Property(SelectableRectangle obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((SelectableRectangle)obj).ID; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((SelectableRectangle)obj).SetID(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class HSMRO_SelectableRectangle_SelectionColor_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly SelectableRectangle _obj;
    public HSMRO_SelectableRectangle_SelectionColor_Property(SelectableRectangle obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get(global::Uno.UX.PropertyObject obj) { return ((SelectableRectangle)obj).SelectionColor; }
    public override void Set(global::Uno.UX.PropertyObject obj, float4 v, global::Uno.UX.IPropertyListener origin) { ((SelectableRectangle)obj).SetSelectionColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
