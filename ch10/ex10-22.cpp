#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <functional>
using std::vector;
using std::string;
using namespace std::placeholders;

bool check(int siz, const string &str) {
    return str.size() > siz;
}

int main() {
    vector<string> words{"english", "CppPrimer", "rxh", "ppp", "zwy", "zwyb", "zwyyy", "zwyyy456"};
    // cout << count_if(words.cbegin(), words.cend(), [](const string &str) {
    //     return str.size() > 6;
    // });
    int sz = 6;
    auto callable = std::bind(check, sz, _1);
    std::cout << std::count_if(words.cbegin(), words.cend(), callable);
    std::cout << std::endl;
}