// This file was generated based on Modules/HomeScreen.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HomeScreen.h>
#include <_root.HomeScreenType.h>
#include <Android.Base.Wrappers.JavaObjectHelper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Fuse.Node.h>
#include <jni.h>
#include <Uno.Bool.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Int.h>
#include <Uno/JNIHelper.h>

namespace g{

// public sealed class HomeScreen
// {
static void HomeScreen_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10,
        ::g::HomeScreenType_typeof(), offsetof(HomeScreen, _type), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* HomeScreen_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(HomeScreen);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("HomeScreen", options);
    type->fp_build_ = HomeScreen_build;
    type->fp_ctor_ = (void*)HomeScreen__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))HomeScreen__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated HomeScreen()
void HomeScreen__ctor_2_fn(HomeScreen* __this)
{
    __this->ctor_2();
}

// public static extern void ExitAppFinish()
void HomeScreen__ExitAppFinish_fn()
{
    HomeScreen::ExitAppFinish();
}

// public static extern void ExitAppIntent()
void HomeScreen__ExitAppIntent_fn()
{
    HomeScreen::ExitAppIntent();
}

// public generated HomeScreen New()
void HomeScreen__New2_fn(HomeScreen** __retval)
{
    *__retval = HomeScreen::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void HomeScreen__Perform_fn(HomeScreen* __this, ::g::Fuse::Node* target)
{
    if (__this->Type() == 0)
        HomeScreen::ExitAppFinish();
    else if (__this->Type() == 1)
        HomeScreen::ExitAppIntent();
}

// public HomeScreenType get_Type()
void HomeScreen__get_Type_fn(HomeScreen* __this, int32_t* __retval)
{
    *__retval = __this->Type();
}

// public void set_Type(HomeScreenType value)
void HomeScreen__set_Type_fn(HomeScreen* __this, int32_t* value)
{
    __this->Type(*value);
}

// public generated HomeScreen() [instance]
void HomeScreen::ctor_2()
{
    ctor_1();
}

// public HomeScreenType get_Type() [instance]
int32_t HomeScreen::Type()
{
    return _type;
}

// public void set_Type(HomeScreenType value) [instance]
void HomeScreen::Type(int32_t value)
{
    _type = value;
}

// public static extern void ExitAppFinish() [static]
void HomeScreen::ExitAppFinish()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ExitAppFinish433", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static extern void ExitAppIntent() [static]
void HomeScreen::ExitAppIntent()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ExitAppIntent434", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public generated HomeScreen New() [static]
HomeScreen* HomeScreen::New2()
{
    HomeScreen* obj1 = (HomeScreen*)uNew(HomeScreen_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

} // ::g
