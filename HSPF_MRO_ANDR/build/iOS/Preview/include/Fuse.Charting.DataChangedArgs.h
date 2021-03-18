// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotBehavior.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Charting{struct DataChangedArgs;}}}

namespace g{
namespace Fuse{
namespace Charting{

// internal sealed class DataChangedArgs
// {
uType* DataChangedArgs_typeof();
void DataChangedArgs__ctor_1_fn(DataChangedArgs* __this);
void DataChangedArgs__New2_fn(DataChangedArgs** __retval);

struct DataChangedArgs : ::g::Uno::EventArgs
{
    void ctor_1();
    static DataChangedArgs* New2();
};
// }

}}} // ::g::Fuse::Charting
