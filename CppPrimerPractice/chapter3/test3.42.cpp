#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(5);
    for(int &c: v)
        c = 5;
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = v[i];
        cout << arr[i] << " ";
    }
    return 0;
}