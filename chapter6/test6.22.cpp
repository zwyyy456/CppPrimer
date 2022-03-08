#include <iostream>
using namespace std;
int main()
{
    void swapPt(int **p, int **q);
    int m = 10, n = 12;
    int *p1 = &m, *q1 = &n;
    int **pp = &p1, **qq = &q1;
    cout << *p1 <<" " << *q1 <<endl;
    swapPt(pp, qq);
    cout << *p1 << " " << *q1 << endl;
    cout << m << " " << n << endl;
    return 0;
}

void swapPt(int **p, int **q)
{
    int *temp = *p;
    *p = *q;
    *q = temp;
}