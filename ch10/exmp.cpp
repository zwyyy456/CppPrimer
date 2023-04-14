#include <algorithm>
#include <iterator>
#include <memory>
#include <string>
#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;
using std::string;

int main() {
    int *p = new int(1024);
    std::unique_ptr<int> up;
    up.reset(p);
    cout << *p << endl;
    cout << endl;
}