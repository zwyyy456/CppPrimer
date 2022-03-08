#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int func1(int ,int);
    int func2(int, int);
    int func3(int, int);
    int func4(int, int);
    using pf = int(int, int);
    vector<pf *> v{func1, func2, func3, func4};
    // v.push_back(func1);
    // v.push_back(func2);
    // v.push_back(func3);
    // v.push_back(func4);
    for (pf *pf1: v)
    {
        cout << pf1(2, 2) << endl;
    }
    return 0;
}
int func1(int a, int b)
{
    return a + b;
}
int func2(int a, int b)
{
    return a - b;
}
int func3(int a, int b)
{
    return a * b;
}
int func4(int a, int b)
{
    return (a / b);
}