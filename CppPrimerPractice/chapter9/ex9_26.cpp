#include <iostream>
#include <list>
#include <vector>
using std::list, std::vector;
int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> vec(ia, std::end(ia));
    list<int> lst(ia, std::end(ia));
    auto iterV = vec.begin();
    while (iterV != vec.end())
    {
        if (*iterV % 2 ==0)
            iterV = vec.erase(iterV);
        else
            iterV++;
    }
    auto iterL = lst.begin();
    while (iterL != lst.end())
    {
        if (*iterL % 2 == 1)
            iterL = lst.erase(iterL);
        else
            iterL++;
    }
    for (int val: vec)
        std::cout << val << " ";
    for (int val: lst)
        std::cout << val << " ";
    return 0;
}