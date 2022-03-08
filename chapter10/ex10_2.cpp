#include <iostream>
#include <algorithm>
#include <list>
#include <string>
using std::string, std::list, std::cout, std::cin;
int main()
{
    list<string> lst;
    string str1;
    while (cin >> str1)
        lst.push_back(str1);
    int cnt = count(lst.cbegin(), lst.cend(), "zwyyy");
    cout << "totally " << cnt << " times\n";
    return 0;
}