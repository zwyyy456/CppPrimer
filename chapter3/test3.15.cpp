#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<string> v;
    for (int j = 0; j < 6; j++)
    {
        string val;
        cin >>val;
        v.push_back(val);
    }
    return 0;
}