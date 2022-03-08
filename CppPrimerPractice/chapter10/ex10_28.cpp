//exercise 10.28
#include <iostream>
#include <numeric>
#include <iterator>
#include <vector>
#include <algorithm>
#include <list>

int main()
{
    std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::list<int> v1, v2, v3;
    copy(v.cbegin(), v.cend(), inserter(v1, v1.begin()));
    copy(v.cbegin(), v.cend(), front_inserter(v2));
    copy(v.cbegin(), v.cend(), back_inserter(v3));
    for (int i: v1)
        std::cout << i << " ";
    for (int i: v2)
        std::cout << i << " ";
    for (int i: v3)
        std::cout << i << " ";
    return 0;
}