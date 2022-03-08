#include <iostream>
#include <utility>
#include <map>
#include <set>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>

using std::map;
using std::string;
using std::set;

int main()
{
    map<string, size_t> word_count;
    set<string> exclude = {"The", "But", "And", "Or", "An", "A", "the", "but", "and", "or", "an", "a"};
    string word;
    while (std::cin >> word)
    {
        auto ret = word_count.insert({word, 1});
        if (!ret.second)
            ++(ret.first->second);
    }
    for (const std::pair<string, size_t> &count : word_count)
        std::cout << count.first << " " << count.second << ((count.second > 1)) ? "times\n" : "time\n";
    return 0;
        
}