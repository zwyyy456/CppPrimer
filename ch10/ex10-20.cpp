#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> words{"english", "CppPrimer", "rxh", "ppp", "zwy", "zwyb", "zwyyy", "zwyyy456"};
    cout << count_if(words.cbegin(), words.cend(), [](const string &str) {
        return str.size() > 6;
    });
    cout << endl;
}