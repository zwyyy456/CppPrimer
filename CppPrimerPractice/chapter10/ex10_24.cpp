//exercise 10.24
#include <iostream>
#include <numeric>
#include <functional>
#include <algorithm>
#include <vector>
#include <string>
using namespace std::placeholders;
using std::vector, std::string;

bool check_size(int i, const string &s)
{
    return i > s.size();
}

int main()
{
    vector<int> v1{1, 2, 3, 4, 5, 6, 7, 8};
    auto wc = find_if(v1.cbegin(), v1.cend(), bind(check_size, _1, "string"));
    std::cout << wc - v1.cbegin() <<std::endl;
    return 0;
}
