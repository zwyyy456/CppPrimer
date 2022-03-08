#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;
int main()
{
    vector<string> v;
    string str;
    for (int i = 0; i < 5; i++)
    {
        cin >> str;
        v.push_back(str);
    }
    for (string &s: v)
    {
        for(char &c: s)
        {
            c = toupper(c);
        }
        cout << s << endl;
    }
    return 0;
}