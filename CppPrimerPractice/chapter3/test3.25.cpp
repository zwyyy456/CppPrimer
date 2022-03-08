#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(14, 0);
    for(int i = 0; i != 12; i++)
    {
        int val;
        cin >>val;
        if (val <= 100)
        {
            vector<int>::iterator it = v.begin();
            ++(*(it + val / 10));
        }
    }
    for (auto c = v.begin(); c != v.end(); ++c)
    {
        cout << *c << endl;
    }
    return 0;
}