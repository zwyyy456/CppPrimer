#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6};
    vector<int>::iterator iter = v.begin();
    int zprint(vector<int> &v1, vector<int>::iterator iter1);
    zprint(v, iter);
    return 0;
}

int zprint(vector<int> &v1, vector<int>::iterator iter1)
{
    if (iter1 != v1.end())
    {
        cout << *iter1 << endl;
        ++iter1;
        zprint(v1, iter1);
    }
    else
        return 0; 
}