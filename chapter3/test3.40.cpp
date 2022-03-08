#include <iostream>
#include <string>
using namespace std;
int main()
{
    char array1[10] = "zwyyy";
    char array2[10] = "sheep";
    char array[15];
    strcpy(array, array1);
    strcat(array, array2);
    cout << array << endl;
    return 0;
}