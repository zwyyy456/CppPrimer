#include <iostream>
using namespace std;
int main()
{
    int fact(int i);
    int i;
    cin >> i;
    cout << fact(i) << endl;
    return 0;
}

int fact(int i)
{
    int val = 1;
    while(i > 1)
    {
        val *= i;
        --i;
    }
    return val;
}