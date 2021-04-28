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
        if (str1 == str2 && str2[0] >= 65 && str2[0] <= 90 )
        {

            i = 1;
            cout << endl << str2 << endl;
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