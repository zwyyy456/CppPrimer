#include <iostream>
#include <vector>
using std::vector;
int main()
{
    vector<int> vec(10, 1);
    auto begin = vec.begin();
    while (begin != vec.end())
    {
        ++begin;
        vec.insert(begin, 2);//插入位置之后的iter会失效
        ++begin;
    }
    for (int val: vec)
        std::cout << val << " ";
    return 0;
}