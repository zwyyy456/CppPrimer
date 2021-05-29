#include <iostream>
#include <vector>
using std::vector;
using vit = vector<int>::iterator;
bool findEle(vit zbegin, vit zend, int val)
{
    while (zbegin != zend)
    {
        if (*zbegin == val)
            return true;
        zbegin++;
    }
    return false;
}
