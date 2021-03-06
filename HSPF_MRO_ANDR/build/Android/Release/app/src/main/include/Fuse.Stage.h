// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.12.0/UpdateManager.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Stage;}}
namespace g{namespace Fuse{struct UpdateAction;}}
namespace g{namespace Fuse{struct UpdateListener;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Collections{struct Queue;}}}

namespace g{
namespace Fuse{

// internal sealed class Stage
// {
uType* Stage_typeof();
void Stage__ctor__fn(Stage* __this, int32_t* _updateStage);
void Stage__AddDeferredAction_fn(Stage* __this, uDelegate* pu, uObject* ul, int32_t* priority);
void Stage__GetFirstPriorityAction_fn(Stage* __this, ::g::Fuse::UpdateAction** __retval);
void Stage__Insert_fn(Stage* __this, ::g::Uno::Collections::List* list, ::g::Fuse::UpdateListener* us);
void Stage__New1_fn(int32_t* _updateStage, Stage** __retval);

struct Stage : uObject
{
    int32_t UpdateStage;
    uStrong< ::g::Uno::Collections::List*> Listeners;
    uStrong< ::g::Uno::Collections::List*> Onces;
    uStrong< ::g::Uno::Collections::List*> OncesPending;
    uStrong<uArray*> PhaseDeferredActions;
    bool HasListenersRemoved;

    void ctor_(int32_t _updateStage);
    void AddDeferredAction(uDelegate* pu, uObject* ul, int32_t priority);
    ::g::Fuse::UpdateAction* GetFirstPriorityAction();
    void Insert(::g::Uno::Collections::List* list, ::g::Fuse::UpdateListener* us);
    static Stage* New1(int32_t _updateStage);
};
// }

}} // ::g::Fuse
