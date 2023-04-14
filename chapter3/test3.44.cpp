#include <iostream>
using namespace std;
int main()
{
    int ia[2][3] = {1, 2, 3, 4, 5, 6};
    using arr3int = int[3];
    for (arr3int *p = ia; p != ia + 2; ++p)
    {
        for (int *q = *p; q != *p + 3; ++q)
            cout << *q << " ";
    }
    cout << endl;
    return 0;
}