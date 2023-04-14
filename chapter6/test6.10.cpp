#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 1;
    void exchange(int *p, int *q);
    exchange(&a, &b);
    cout << a << " " << b << endl;
    return 0;
}

void exchange(int *p, int* q)
{
    int val = *p;
    *p = *q;
    *q = val;
}