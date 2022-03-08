#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
        cout << arr[i] << " ";
    }
    cout << endl;
    int arr2[10];
    for (int i = 0; i < 10; i++)
    {
        arr2[i] = arr[i];
        cout << arr2[i] << " ";
    }
    cout << endl;
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    for (int val: v1)
    {
        cout << val << " ";
    }
    vector<int> v2(v1);
    for (int val: v2)
    {
        cout << val << " ";
    }
}