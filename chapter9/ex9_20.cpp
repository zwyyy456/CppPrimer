#include <iostream>
#include <list>
#include <deque>
using std::deque, std::list;
int main()
{
    list<int> lst;
    for (int i = 0; i < 10; i++)
        lst.push_back(i);
    deque<int> deq1, deq2;
    list<int>::const_iterator itLst;
    for (itLst = lst.cbegin(); itLst != lst.cend(); itLst++)
    {
        if (*itLst % 2 == 0)
            deq2.push_back(*itLst);
        else
            deq1.push_back(*itLst);
    }

    for (int val: deq1)
        std::cout << val << " ";
    for (int val: deq2)
        std::cout << val << " ";
    return 0;
}