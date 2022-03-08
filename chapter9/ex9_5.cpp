#include <iostream>
#include <vector>
using std::vector;
using vit = vector<int>::const_iterator;
vit findIter(vit zbegin, vit zend, int val)
{
    while (zbegin != zend)
    {
        if (*zbegin == val)
            return zbegin;
        zbegin++;
    }
    std::cout << "no selected value" << std::endl;
    return zbegin;
}