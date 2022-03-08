#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using std::vector;
int main()
{
    vector<int> vec(10, 2);
    int sum = accumulate(vec.cbegin(), vec.cend(), 0);
    std::cout << sum << std::endl;
    return 0;
}