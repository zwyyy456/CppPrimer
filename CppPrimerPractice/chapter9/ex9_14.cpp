#include <iostream>
#include <list>
#include <vector>
#include <string>
using std::list, std::vector, std::string;
int main()
{
    list<const char *>l(10, "aaa");
    vector<string> vString;
    vString.assign(l.cbegin(), l.cend());
    for (string str: vString)
        std::cout << str << " ";
    return 0;
}