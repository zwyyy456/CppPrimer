#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int val;
    for (int i = 0; i < 8; i++)
    {
        cin >> val;
        v.push_back(val);
    }
    for (decltype(v.size()) iv = 0; iv < v.size(); iv++)
    {
        cout << v[iv] + v[v.size() - iv - 1] << endl;
    }
    return 0;
}