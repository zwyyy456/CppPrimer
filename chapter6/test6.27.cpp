#include <iostream>
#include <initializer_list>
using namespace std;
int main()
{
    int sum(initializer_list<int> il);
    sum({10, 20, 30});
    sum({1, 2});
    sum({1});
    return 0;
}
int sum(initializer_list<int> il)
{
    int sum = 0;
    for (int a: il)
        sum += a;
    cout << sum << endl;
    return sum;
}