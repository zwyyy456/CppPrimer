#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int test(string &str) {
    int n = str.size();
    reverse(str.begin(), str.end());
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        arr[i] = str[i] - '0';
    }
    vector<int> prefix;
    prefix[0] = arr[0];
    for (int i = 1; i < n; ++i) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    int ans = 0;
    if (arr[0] == 0 || arr[0] == 5) {
        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if ((prefix[n - 1] - (prefix[j] - prefix[i])) % 3 == 0) {
                    ++ans;
                }
            }
        }
    }
    for (int i = 1; i < n - 1; ++i) {
        if (arr[i] == 0 || arr[i] == 5) {
            if ((prefix[n] - prefix[i - 1]) % 3 == 0) {
                ++ans;
            }
        }
    }
    return ans;
}