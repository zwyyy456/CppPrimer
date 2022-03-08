//exercise 10.27
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <iterator>

using  std::vector;
int main()
{
    vector<int> v{1, 2, 3, 4, 5, 4, 2, 3};
    vector<int> v2;
    sort(v.begin(), v.end());
    std::unique_copy(v.begin(), v.end(), back_inserter(v2));
    for (int i: v2)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}