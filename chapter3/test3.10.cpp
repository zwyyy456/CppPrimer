#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    for(char c: str)
    {
        if(!ispunct(c))
            cout << c;
    }
    return 0;
}