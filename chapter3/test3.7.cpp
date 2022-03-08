#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str = "zwyyy_rrh";
    for(char c : str)
        c = 'X';
    cout << str << endl;
    return 0;
}