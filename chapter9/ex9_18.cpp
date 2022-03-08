#include <iostream>
#include <string>
#include <deque>
using std::string, std::deque;
int main()
{
    string str1;
    deque<string> deq;
    while(std::cin >> str1)
        deq.push_back(str1);
    for (deque<string>::const_iterator iter = deq.cbegin(); iter != deq.cend(); iter++)
        std::cout << *iter << " ";
    return 0;
}