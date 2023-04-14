#include "../chapter7/ex7_26.h"
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using std::vector;

int main()
{
    bool compareIsbn(const Sales_data &s1, const Sales_data &s2);
    Sales_data bk1("aa"), bk2("aaaa"), bk3("aaa"), bk4("z"), bk5("aaaaz");
    vector<Sales_data> v{bk1, bk2, bk3, bk4, bk5};
    stable_sort(v.begin(), v.end(), compareIsbn);
    for (const auto &bk: v)
        std::cout << bk.isbn() << " ";
    return 0;
}

bool compareIsbn(const Sales_data &s1, const Sales_data &s2)
{
    return s1.isbn() < s2.isbn();
}