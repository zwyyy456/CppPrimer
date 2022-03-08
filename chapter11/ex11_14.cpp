#include <iostream>
#include <utility>
#include <string>
#include <vector>
#include <map>

using std::ostream;
using std::string;
using std::make_pair;
using std::pair;
using std::vector;
using std::map;

class Families
{
public:
    using Child = pair<string, string>;
    using Children = vector<Child>;
    using Data = map<string, Children>;

    auto add(const string &last_name, const string &first_name, string birthday)
    {
        auto child = make_pair(first_name, birthday);
        _data[last_name].push_back(child);
    }

    auto print() const
    {
        for (const auto &pair : _data)
        {
            std::cout << pair.first << ":\n";
            for (const auto &child : pair.second)
                std::cout << child.first << " " << child.second << std::endl;
            std::cout << std::endl;
        }
    }
private:
    Data _data;
};

int main()
{
    Families families;
    auto msg = "Please enter last name, first name and birthday:\n";
    for (string l, f, b; std::cout << msg, std::cin >> l >> f >> b; families.add(l, f, b));
    families.print();

    return 0;
}