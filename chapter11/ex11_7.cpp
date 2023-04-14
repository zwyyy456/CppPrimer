#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using std::vector;
using std::string;
using std::map;
using std::cin;
using std::cout;

auto make_families()
{
    map<string, vector<string>> families;
    for (string ln; cout << "Last name:\n", cin >> ln && ln != "@q"; )
        for (string cn; cout << "|-Children's name:\n", cin >> cn && cn!= "@q"; )
            families[ln].push_back(cn);
    return families;
}

auto print(const map<string, vector<string>> &families)
{
    for (const auto &family : families)
    {
        cout << family.first << ":\n";
        for (const auto& child : family.second)
            cout << child << " ";
        cout << "\n";
    }
}

int main()
{
    print(make_families());
    return 0;
}