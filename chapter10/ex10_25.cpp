//exercise 10.25
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using std::vector, std::string;
using namespace std::placeholders;

// from ex 10.9
void elimDups(std::vector<std::string> &vs)
{
    std::sort(vs.begin(), vs.end());
    auto new_end = std::unique(vs.begin(), vs.end());
    vs.erase(new_end, vs.end());
}

bool check_size(const string &s, std::size_t csz)
{
    return s.size() >= csz;
}

void biggies_partition(std::vector<std::string> &vs, std::size_t sz)
{
    elimDups(vs);
    
    auto pivot = stable_partition(vs.begin(), vs.end(), bind(check_size, _1, sz));

    for(auto it = vs.cbegin(); it != pivot; ++it)
        std::cout << *it << " ";
}

int main()
{
    std::vector<std::string> v{
        "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"
    };
    biggies_partition(v, 4);
    return 0;
}
