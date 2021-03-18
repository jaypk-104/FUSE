// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.12.0/Internal/PriorityQueue.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.ValueType.h>

namespace g{
namespace Uno{
namespace Collections{

// internal struct PriorityQueueItem<T>
// {
uStructType* PriorityQueueItem_typeof();

template<class T>
struct PriorityQueueItem
{
    T Value;
    ::g::Uno::Float4 Priority;
};
// }

}}} // ::g::Uno::Collections
