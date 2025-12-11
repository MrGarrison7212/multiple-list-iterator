#include <iostream>
#include <vector>
#include "MultipleListIterator.h"

int main()
{
    std::vector<int> list1 = {1, 8, 15, 16, 35};
    std::vector<int> list2 = {2, 7, 12, 63};
    std::vector<int> list3 = {10, 13, 14, 42};

    MultipleListIterator it(list1, list2, list3);

    std::cout << "List - ascending: ";
    while (it.hasNext())
    {
        std::cout << it.GetNext() << " ";
    }
    std::cout << std::endl;

    return 0;
}