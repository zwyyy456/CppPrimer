#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <functional>
using std::vector;
using std::string;
using namespace std::placeholders;

bool check(int siz, const int num) {
    return num > siz;
}

int main() {
    string s;
    std::cin >> s;
    auto call = std::bind(check, s.size(), _1);
    vector<int> arr{3, 6, 4, 7, 9};
    auto iter = std::find_if(arr.cbegin(), arr.cend(), call);
    std::cout << *iter << "\n";
    return 0;
}