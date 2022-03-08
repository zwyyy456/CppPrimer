#include <iostream>
#include <algorithm>
#include <vector>
using std::vector, std::cout, std::cin, std::endl;

int main()
{
    vector<int> vec;
    int val;
    while (cin >> val)
        vec.push_back(val);
    int cnt = count(vec.cbegin(), vec.cend(), 10);
    cout << "there are " << cnt << " numbers\n";
    return 0;
}