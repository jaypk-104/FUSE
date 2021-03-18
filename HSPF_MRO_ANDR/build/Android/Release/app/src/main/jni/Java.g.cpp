// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Java.Object.h>

namespace g{
namespace Java{

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Compiler/ExportTargetInterop/Foreign/Android/Object.uno
// ---------------------------------------------------------------------------------------------------------------

// public abstract extern class Object
// {
static void Object_build(uType* type)
{
}

uType* Object_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Java.Object", options);
    type->fp_build_ = Object_build;
    return type;
}

// protected generated Object()
void Object__ctor__fn(Object* __this)
{
    __this->ctor_();
}

// protected generated Object() [instance]
void Object::ctor_()
{
}
// }

}} // ::g::Java
