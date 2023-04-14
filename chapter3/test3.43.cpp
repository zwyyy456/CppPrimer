#include <iostream>
using namespace std;
int main()
{
    int ia[2][3] = {1, 2, 3, 4, 5,6};
    for (int (&p)[3]: ia)
    {
        for (int q: p)
            cout << q << " ";
    }
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
            cout << ia[i][j] << " ";
    }
    for (int (*p)[3] = ia; p != ia + 2; ++p)
    {
        for (int *q = *p; q != *p + 3; ++q)
            cout << *q << " ";
    }
    cout << endl;
    return 0;
}