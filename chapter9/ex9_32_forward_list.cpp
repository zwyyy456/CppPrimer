#include <iostream>
#include <forward_list>
using std::forward_list;
int main()
{
    forward_list<int> fl{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = fl.begin();
    auto prev = fl.before_begin();
    while (iter != fl.end())
    {
        if (*iter % 2)
        {
            iter = fl.insert_after(iter, *iter);
            prev = iter;
            iter++;
        }
        else
        {
            iter = fl.erase_after(prev, iter);
        }
    }
}