#include <iostream>
using namespace std;
int main()
{
    void printfInt(const int a);
    void printfArray(const int *array);
    int m = 10;
    int mArray[2] = {0, 1};
    printfInt(m);
    printfArray(mArray);
    return 0;
}
void printfInt(const int a)
{
    cout << a << endl;
}

void printfArray(const int *array)
{
    cout << array[0] << " " << array[1] << endl;
}