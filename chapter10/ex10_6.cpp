#include <iostream>
//#include <numeric>
#include <algorithm>
#include <vector>
using std::vector;
int main()
{
    vector<int> vec(20);
    fill_n(vec.begin(), vec.size(), 0);
    for (int i: vec)
        std::cout << i << std::endl;
    return 0;
}