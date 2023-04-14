#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(10, 20);
    for(vector<int>::iterator c = v.begin(); c != v.end(); ++c)
    {
        *c = *c * 2;
        cout << *c << endl;
    }
    return 0;
}