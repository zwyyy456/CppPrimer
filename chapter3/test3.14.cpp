#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    for (int j = 0; j < 6; j++)
    {
        int val;
        cin >>val;
        v.push_back(val);
    }
    return 0;
}