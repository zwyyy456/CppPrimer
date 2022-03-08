#include <iostream>
using namespace std;
int main()
{
    int max(const int a, const int *p);
    int m = 10, n = 12;
    int *q = &n;
    int mMax = max(m, q);
    cout << mMax;
    return 0;
}

int max(int a, int *p)
{
    return a <= *p ? *p :a;
}