#pragma once

#include <vector>
#include <cstddef>

class MultipleListIterator
{
public:
    MultipleListIterator(const std::vector<int> &a,
                         const std::vector<int> &b,
                         const std::vector<int> &c);

    bool hasNext() const;

    int GetNext();

private:
    const std::vector<int> &list1;
    const std::vector<int> &list2;
    const std::vector<int> &list3;

    std::size_t i1;
    std::size_t i2;
    std::size_t i3;
};