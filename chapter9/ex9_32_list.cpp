#include <iostream>
#include <list>
using std::list;
int main()
{
    list<int> lst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = lst.begin();
    while (iter != lst.end())
    {
        if (*iter % 2)
        {
            iter = lst.insert(iter, *iter);
            iter++;
            iter++;
        }
        else
            iter = lst.erase(iter);
    }
    return 0;
}