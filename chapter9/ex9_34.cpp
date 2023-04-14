#include <iostream>
#include <vector>
using std::vector;
int main()
{
    vector<int> vi{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto iter = vi.begin();
    while (iter != vi.end())
    {
        if (*iter % 2)
        {
            iter = vi.insert(iter, *iter);
            ++iter;
        }
        ++iter;
    }
    for (int val: vi)
        std::cout << val << " ";
    return 0;
}