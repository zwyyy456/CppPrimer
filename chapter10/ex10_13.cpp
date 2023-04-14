#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
#include <vector>
using std::vector, std::string;

int main()
{
    bool more5(const string &s);
    vector<string> vec{"aaa", "swjfiwjf", "fjwijfwifj", "sifj", "iwjfiwj"};
    vector<string>::iterator iter = partition(vec.begin(), vec.end(), more5);
    for (auto iter1 = vec.begin(); iter1 != iter; iter1++)
    {
        std::cout << *iter1 << " ";
    }
    return 0;
}

bool more5(const string &s)
{
    return s.size() >= 5;
}