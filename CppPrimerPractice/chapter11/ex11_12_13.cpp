#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <utility>

using std::vector;
using std::pair;
using std::string;

int main()
{
    vector<pair<string, int>> vec;
    string str;
    int i;
    while (std::cin >> str >> i)
        vec.push_back(pair<string, int> (str, i));
        //vec.push_back(std::make_pair(str, i));
        //vec.push_back({str, i});
        //vec.emplace_back(str, i);//!! easiest way.
    for (const auto &p : vec)
        std::cout << p.first << ":" << p.second << std::endl;
}