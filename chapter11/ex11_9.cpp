#include <iostream>
#include <map>
#include <list>
#include <algorithm>
#include <vector>

int main()
{
    std::map<std::string, std::list<std::size_t>> m;
    
    std::map<std::vector<int>::iterator, int> mv;
    std::map<std::list<int>::iterator, int> ml;

    std::vector<int> vi;
    mv.insert(std::pair<std::vector<int>::iterator, int>(vi.begin(), 0));

    
}