#include <iostream>
#include <list>
#include <vector>
using std::list, std::vector;
int main()
{
    list<int> l(10, 1);
    list<int>::const_iterator lFirst = l.cbegin();
    list<int>::const_iterator lLast = l.cend();
    vector<double> v1(lFirst, lLast);
    vector<int> vInt(10, 1);
    vector<int>::const_iterator vFirst = vInt.cbegin();
    vector<int>::const_iterator vLast = vInt.cend();
    vector<double> v2(vFirst, vLast);
    return 0;
}