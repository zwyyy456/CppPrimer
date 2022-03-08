#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a = 10, b = 8;
    void exchange(int &m, int &n);
    exchange(a, b);
    cout << a << " " << b << endl;
    return 0;
}