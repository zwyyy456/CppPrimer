//Excercise 10.22:
//use function instead of lambda

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <functional>
using std::vector, std::string;
using namespace std::placeholders;
bool judge6(const string &str, string::size_type num)
{
    return str.size() <= num;
}

std::size_t noMore6(vector<string> &v)
{
    auto count = count_if(v.cbegin(), v.cend(), bind(judge6, _1, 6));
    return count;
}

int main()
{
    vector<string> v1{"skfjksf", "zwyyy456", "zwyyy", "zwyyy000", "skjf", "sfjiwiwiei"};
    std::cout << noMore6(v1) << std::endl;
    return 0;
}