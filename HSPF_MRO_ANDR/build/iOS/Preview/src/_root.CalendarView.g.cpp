// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.CalendarView.h>
#include <_root.CalendarView.Template.h>
#include <_root.CalendarView.Template1.h>
#include <_root.DayView.h>
#include <_root.HSMRO_FuseControlsNavigatorSwipe_IsEnabled_Property.h>
#include <_root.MonthView.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Controls.Navigator.h>
#include <Fuse.Controls.NavigatorSwipe.h>
#include <Fuse.Controls.NavigatorSwipeDirection.h>
#include <Fuse.Controls.NavigatorSwipeHow.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Navigation.WhilePageActive.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Template.h>
static uString* STRINGS[3];

namespace g{

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/CalendarView.g.uno
// ---------------------------------------------------------------------------------

// public partial sealed class CalendarView
// {
// static CalendarView()
static void CalendarView__cctor_4_fn(uType* __type)
{
    CalendarView::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 4, uString::Const("router"), uString::Const("calNav"), uString::Const("swipeLeft"), uString::Const("swipeRight"));
    CalendarView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("IsEnabled"));
    CalendarView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("CalendarView"));
    CalendarView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("calNav"));
    CalendarView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("swipeLeft"));
    CalendarView::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("swipeRight"));
}

static void CalendarView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(126,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(CalendarView, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(CalendarView, swipeLeft_IsEnabled_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(CalendarView, swipeRight_IsEnabled_inst), 0,
        ::g::Fuse::Controls::Navigator_typeof(), offsetof(CalendarView, calNav), 0,
        ::g::Fuse::Controls::NavigatorSwipe_typeof(), offsetof(CalendarView, swipeLeft), 0,
        ::g::Fuse::Controls::NavigatorSwipe_typeof(), offsetof(CalendarView, swipeRight), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(CalendarView, __g_nametable1), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&CalendarView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CalendarView::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CalendarView::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CalendarView::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CalendarView::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CalendarView::__selector4_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CalendarView__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* CalendarView_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 139;
    options.InterfaceCount = 19;
    options.ObjectSize = sizeof(CalendarView);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("CalendarView", options);
    type->fp_build_ = CalendarView_build;
    type->fp_cctor_ = CalendarView__cctor_4_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface16.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface16.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface9.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface11.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface11.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public CalendarView(Fuse.Navigation.Router router)
void CalendarView__ctor_8_fn(CalendarView* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX()
void CalendarView__InitializeUX_fn(CalendarView* __this)
{
    __this->InitializeUX();
}

// public CalendarView New(Fuse.Navigation.Router router)
void CalendarView__New5_fn(::g::Fuse::Navigation::Router* router1, CalendarView** __retval)
{
    *__retval = CalendarView::New5(router1);
}

uSStrong<uArray*> CalendarView::__g_static_nametable1_;
::g::Uno::UX::Selector CalendarView::__selector0_;
::g::Uno::UX::Selector CalendarView::__selector1_;
::g::Uno::UX::Selector CalendarView::__selector2_;
::g::Uno::UX::Selector CalendarView::__selector3_;
::g::Uno::UX::Selector CalendarView::__selector4_;

// public CalendarView(Fuse.Navigation.Router router) [instance]
void CalendarView::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("CalendarView", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance]
void CalendarView::InitializeUX()
{
    uStackFrame __("CalendarView", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, CalendarView::__g_static_nametable1_);
    swipeLeft = ::g::Fuse::Controls::NavigatorSwipe::New2();
    swipeLeft_IsEnabled_inst = ::g::HSMRO_FuseControlsNavigatorSwipe_IsEnabled_Property::New1(swipeLeft, CalendarView::__selector0_);
    swipeRight = ::g::Fuse::Controls::NavigatorSwipe::New2();
    swipeRight_IsEnabled_inst = ::g::HSMRO_FuseControlsNavigatorSwipe_IsEnabled_Property::New1(swipeRight, CalendarView::__selector0_);
    ::g::Fuse::Reactive::JavaScript* temp = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    calNav = ::g::Fuse::Controls::Navigator::New4();
    ::g::Fuse::Navigation::WhilePageActive* temp1 = ::g::Fuse::Navigation::WhilePageActive::New2();
    ::g::Fuse::Animations::Change* temp2 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), swipeLeft_IsEnabled_inst);
    ::g::Fuse::Animations::Change* temp3 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), swipeRight_IsEnabled_inst);
    CalendarView__Template* month = CalendarView__Template::New2(this, this);
    CalendarView__Template1* day = CalendarView__Template1::New2(this, this);
    Visibility(0);
    Name(CalendarView::__selector1_);
    SourceLineNumber(1);
    SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    temp->Code(uString::Const("\n"
        "\t\tvar d = new Date()\n"
        "\t\tconsole.log('calview' + d);\n"
        "\t\trouter.gotoRelative( calNav, \"month\", { month: d.getMonth(), year: d.getFullYear() } )\n"
        "\t"));
    temp->LineNumber(3);
    temp->FileName(::STRINGS[1/*"Modules/Cal...*/]);
    temp->SourceLineNumber(3);
    temp->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    uPtr(calNav)->SwipeBack(5);
    uPtr(calNav)->Name(CalendarView::__selector2_);
    uPtr(calNav)->SourceLineNumber(8);
    uPtr(calNav)->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(calNav)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), swipeLeft);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(calNav)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), swipeRight);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(calNav)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(calNav)->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), month);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(calNav)->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), day);
    uPtr(swipeLeft)->Direction(2);
    uPtr(swipeLeft)->IsEnabled(false);
    uPtr(swipeLeft)->How(2);
    uPtr(swipeLeft)->Bookmark(uString::Const("nextMonth"));
    uPtr(swipeLeft)->Style(uString::Const("fromRight"));
    uPtr(swipeLeft)->Name(CalendarView::__selector3_);
    uPtr(swipeLeft)->SourceLineNumber(9);
    uPtr(swipeLeft)->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    uPtr(swipeRight)->Direction(4);
    uPtr(swipeRight)->IsEnabled(false);
    uPtr(swipeRight)->How(2);
    uPtr(swipeRight)->Bookmark(uString::Const("prevMonth"));
    uPtr(swipeRight)->Style(uString::Const("fromLeft"));
    uPtr(swipeRight)->Name(CalendarView::__selector4_);
    uPtr(swipeRight)->SourceLineNumber(11);
    uPtr(swipeRight)->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    temp1->Threshold(0.0f);
    temp1->NameEquals(::STRINGS[0/*"month"*/]);
    temp1->SourceLineNumber(14);
    temp1->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp3);
    ::g::Fuse::Animations::Change__set_Value_fn(temp2, uCRef(true));
    ::g::Fuse::Animations::Change__set_Value_fn(temp3, uCRef(true));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), calNav);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), swipeLeft);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), swipeRight);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), calNav);
}

// public CalendarView New(Fuse.Navigation.Router router) [static]
CalendarView* CalendarView::New5(::g::Fuse::Navigation::Router* router1)
{
    CalendarView* obj1 = (CalendarView*)uNew(CalendarView_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/CalendarView.g.uno
// ---------------------------------------------------------------------------------

// public partial sealed class CalendarView.Template
// {
// static Template()
static void CalendarView__Template__cctor__fn(uType* __type)
{
    CalendarView__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"month"*/]);
}

static void CalendarView__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("month");
    ::STRINGS[1] = uString::Const("Modules/CalendarView/CalendarView.ux");
    type->SetDependencies(
        ::g::Fuse::Controls::Navigator_typeof());
    type->SetFields(2,
        ::g::CalendarView_typeof(), offsetof(CalendarView__Template, __parent1), uFieldFlagsWeak,
        ::g::CalendarView_typeof(), offsetof(CalendarView__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CalendarView__Template::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CalendarView__Template__New2_fn, 0, true, type, 2, ::g::CalendarView_typeof(), ::g::CalendarView_typeof()));
}

::g::Uno::UX::Template_type* CalendarView__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(CalendarView__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("CalendarView.Template", options);
    type->fp_build_ = CalendarView__Template_build;
    type->fp_cctor_ = CalendarView__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))CalendarView__Template__New1_fn;
    return type;
}

// public Template(CalendarView parent, CalendarView parentInstance)
void CalendarView__Template__ctor_1_fn(CalendarView__Template* __this, ::g::CalendarView* parent, ::g::CalendarView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void CalendarView__Template__New1_fn(CalendarView__Template* __this, uObject** __retval)
{
    uStackFrame __("CalendarView.Template", "New()");
    ::g::MonthView* __self1 = ::g::MonthView::New5(uPtr(__this->__parent1)->router);
    __self1->Name(CalendarView__Template::__selector0_);
    __self1->SourceLineNumber(19);
    __self1->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    ::g::Fuse::Controls::Navigator::SetSwipeBack(__self1, 0);
    return *__retval = __self1, void();
}

// public Template New(CalendarView parent, CalendarView parentInstance)
void CalendarView__Template__New2_fn(::g::CalendarView* parent, ::g::CalendarView* parentInstance, CalendarView__Template** __retval)
{
    *__retval = CalendarView__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector CalendarView__Template::__selector0_;

// public Template(CalendarView parent, CalendarView parentInstance) [instance]
void CalendarView__Template::ctor_1(::g::CalendarView* parent, ::g::CalendarView* parentInstance)
{
    ctor_(::STRINGS[0/*"month"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(CalendarView parent, CalendarView parentInstance) [static]
CalendarView__Template* CalendarView__Template::New2(::g::CalendarView* parent, ::g::CalendarView* parentInstance)
{
    CalendarView__Template* obj1 = (CalendarView__Template*)uNew(CalendarView__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/CalendarView.g.uno
// ---------------------------------------------------------------------------------

// public partial sealed class CalendarView.Template1
// {
// static Template1()
static void CalendarView__Template1__cctor__fn(uType* __type)
{
    CalendarView__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"day"*/]);
}

static void CalendarView__Template1_build(uType* type)
{
    ::STRINGS[2] = uString::Const("day");
    ::STRINGS[1] = uString::Const("Modules/CalendarView/CalendarView.ux");
    type->SetFields(2,
        ::g::CalendarView_typeof(), offsetof(CalendarView__Template1, __parent1), uFieldFlagsWeak,
        ::g::CalendarView_typeof(), offsetof(CalendarView__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CalendarView__Template1::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CalendarView__Template1__New2_fn, 0, true, type, 2, ::g::CalendarView_typeof(), ::g::CalendarView_typeof()));
}

::g::Uno::UX::Template_type* CalendarView__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(CalendarView__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("CalendarView.Template1", options);
    type->fp_build_ = CalendarView__Template1_build;
    type->fp_cctor_ = CalendarView__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))CalendarView__Template1__New1_fn;
    return type;
}

// public Template1(CalendarView parent, CalendarView parentInstance)
void CalendarView__Template1__ctor_1_fn(CalendarView__Template1* __this, ::g::CalendarView* parent, ::g::CalendarView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void CalendarView__Template1__New1_fn(CalendarView__Template1* __this, uObject** __retval)
{
    uStackFrame __("CalendarView.Template1", "New()");
    ::g::DayView* __self1 = ::g::DayView::New5(uPtr(__this->__parent1)->router);
    __self1->ZOffset(1.0f);
    __self1->Name(CalendarView__Template1::__selector0_);
    __self1->SourceLineNumber(20);
    __self1->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    return *__retval = __self1, void();
}

// public Template1 New(CalendarView parent, CalendarView parentInstance)
void CalendarView__Template1__New2_fn(::g::CalendarView* parent, ::g::CalendarView* parentInstance, CalendarView__Template1** __retval)
{
    *__retval = CalendarView__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector CalendarView__Template1::__selector0_;

// public Template1(CalendarView parent, CalendarView parentInstance) [instance]
void CalendarView__Template1::ctor_1(::g::CalendarView* parent, ::g::CalendarView* parentInstance)
{
    ctor_(::STRINGS[2/*"day"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(CalendarView parent, CalendarView parentInstance) [static]
CalendarView__Template1* CalendarView__Template1::New2(::g::CalendarView* parent, ::g::CalendarView* parentInstance)
{
    CalendarView__Template1* obj1 = (CalendarView__Template1*)uNew(CalendarView__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
