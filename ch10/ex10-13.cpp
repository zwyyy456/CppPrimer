#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;

bool more5(const string &str) {
    return str.size() < 5;
}

int main() {
    vector<string> words{"english", "CppPrimer", "rxh", "ppp", "zwy", "zwyb", "zwyyy", "zwyyy456"};
    auto iter = std::partition(words.begin(), words.end(), more5);
    for (; iter != words.end(); ++iter) {
        std::cout << *iter << " ";
    }
    std::cout << "\n";
}