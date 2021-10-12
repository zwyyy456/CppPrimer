#include <iostream>
#include <vector>

using std::vector;

vector<int> *read_v()
{
    vector<int> *pv = new vector<int>;
    int temp;
    while (std::cin >> temp)
        pv->push_back(temp);
    return pv;
}

int main()
{
    auto p = read_v();
    for (auto i : *p)
        std::cout << i << " ";
    delete p;
    return 0;
}