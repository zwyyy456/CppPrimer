//Excercise 10.20:
//use count_if to rewrite...

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using std::vector, std::string, std::count_if;

//ex10.20
std::size_t bigger6(vector<string> &v, std::size_t num)
{
    auto count = count_if(v.cbegin(), v.cend(), [](const string &s){
        return s.size() > 6;
    });
    return count;
}

int main()
{
    vector<string> v1{"skfjksf", "zwyyy456", "zwyyy", "zwyyy000", "skjf", "sfjiwiwiei"};
    std::cout << bigger6(v1, 6) << std::endl;

}