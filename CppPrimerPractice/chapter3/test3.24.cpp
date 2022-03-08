#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    for (int i = 0; i != 7; i++)
    {
        int val;
        cin >>val;
        v.push_back(val);
    }
    for (vector<int>::iterator itb = v.begin(), ite = v.end() - 1; itb <= ite; ++itb, --ite)
    {
        cout << *itb + *ite << endl;
    }
    return 0;

}