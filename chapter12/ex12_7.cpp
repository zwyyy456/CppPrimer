#include <iostream>
#include <memory>
#include <vector>

using std::vector;
using Ptr = std::shared_ptr<vector<int>>;

Ptr readv()
{
    int i;
    Ptr pv = std::make_shared<vector<int>>();
    while (std::cin >> i)
        pv->push_back(i);
    return pv;
}

int main()
{
    Ptr pv = readv();
    for (auto i : *pv)
        std::cout << i << " ";
    return 0;
}

