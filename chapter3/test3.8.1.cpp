#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str = "zwyyy_rrh";
    for(int i = 0; i < str.size(); i++)
    {
        str[i] = 'X';
    }
    cout << str << endl;
    return 0;
}