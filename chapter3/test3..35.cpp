#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
        arr[i] = i;
    int *p;
    p = arr;
    for (int i = 0; i < 5; i++)
    {
        *(p + i) = 0;
        cout << *(p + i) << " ";
    }
    cout << endl;
    return 0;
}