#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1, str2;
    cin >> str1;
    int i = 0;
    while(cin >> str2)
    {
        if (str1 == str2)
        {
            cout << endl << str2 << endl;
            i = 1;
            break;
        }
        else
        {
            str1 = str2;
        }
    }
    if (i != 1)
        cout << "no repeated word\n";
    return 0;
}