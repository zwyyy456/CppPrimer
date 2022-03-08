#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main()
{
    int strJudge(const string& str1);
    void strToupper(string& str2);
    string str;
    cin >> str;
    cout << strJudge(str) << endl;
    strToupper(str);
    cout << str << endl;
    return 0;
}

int strJudge(const string& str1)
{
    int count = 0;
    for (char c: str1)
    {
        count += isupper(c);
    }
    return count;
}

void strToupper(string& str2)
{
    for (string::iterator it = str2.begin(); it != str2.end(); it++)
    {
        *it = tolower(*it);
    }
}