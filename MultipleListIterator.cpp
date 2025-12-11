#include "MultipleListIterator.h"
#include <limits>
#include <stdexcept>

MultipleListIterator::MultipleListIterator(const std::vector<int> &a,
                                           const std::vector<int> &b,
                                           const std::vector<int> &c)
    : list1(a), list2(b), list3(c),
      i1(0), i2(0), i3(0) {}

bool MultipleListIterator::hasNext() const
{
    return i1 < list1.size() ||
           i2 < list2.size() ||
           i3 < list3.size();
}

int MultipleListIterator::GetNext()
{
    if (!hasNext())
    {
        throw std::out_of_range("No more elements");
    }

    int min = std::numeric_limits<int>::max();
    int listId = -1;

    if (i1 < list1.size() && list1[i1] < min)
    {
        min = list1[i1];
        listId = 1;
    }
    if (i2 < list2.size() && list2[i2] < min)
    {
        min = list2[i2];
        listId = 2;
    }
    if (i3 < list3.size() && list3[i3] < min)
    {
        min = list3[i3];
        listId = 3;

    }

    switch (listId)
    {
    case 1:
        ++i1;
        break;
    case 2:
        ++i2;
        break;
    case 3:
        ++i3;
        break;
    default:
        throw std::logic_error("Internal iterator error");
    }

    return min;
}
