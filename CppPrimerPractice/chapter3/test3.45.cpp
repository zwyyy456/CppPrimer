#include <iostream>
using namespace std;
int main()
{
    int ia[2][3] = {1, 2, 3, 4, 5, 6};
    for (auto &p: ia)
    {
        for (auto q: p)
            cout << q << " ";
    }
    cout << endl;
    return 0;
}