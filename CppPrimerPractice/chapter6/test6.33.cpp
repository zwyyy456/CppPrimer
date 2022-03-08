#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6};
    vector<int>::iterator iter = v.begin(), iterEnd = v.end();
    int zprint(vector<int>::iterator iter1, vector<int>::iterator iter2);
    zprint(iter, iterEnd);
    return 0;
}

int zprint(vector<int>::iterator iter1, vector<int>::iterator iter2)
{
    if (iter1 != iter2)
    {
        cout << *iter1 << endl;
        ++iter1;
        zprint(iter1, iter2);
    }
    else
        return 0; 
}