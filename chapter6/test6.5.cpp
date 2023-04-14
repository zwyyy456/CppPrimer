#include <iostream>
using namespace std;
int main()
{
    int mAbs(int i);
    int n;
    cin >> n;
    cout << mAbs(n) << endl;
    return 0;
}
int mAbs(int i)
{
    if (i >= 0)
        return i;
    else
        return -i;
}