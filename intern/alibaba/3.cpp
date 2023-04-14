#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;
    // cout << test(str) << endl;
    int n = str.size();
    reverse(str.begin(), str.end());
    vector<int> arr(n);
    vector<int> prefix(n);
    for (int i = 0; i < n; ++i) {
        arr[i] = str[i] - '0';
    }
    prefix[0] = arr[0];
    for (int i = 1; i < n; ++i) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    prefix[0] %= 3;
    // 哈希表，存储前i个数里面，模为0，1，2的分别有多少个
    vector<vector<int>> hash(n, vector<int>(3, 0));
    hash[0][arr[0] % 3] = 1;
    for (int i = 1; i < n; ++i) {
        prefix[i] = prefix[i] % 3;
        hash[i][0] = hash[i - 1][0];
        hash[i][1] = hash[i - 1][1];
        hash[i][2] = hash[i - 1][2];
        ++hash[i][prefix[i] % 3];
    }
    int ans = 0;
    if (arr[0] == 0) {
        for (int i = 1; i < n; ++i) {
            int mod_want = (prefix[i] % 3 - prefix[n - 1] % 3 + 3) % 3;
            ans += hash[i - 1][mod_want];
        }
    } else if (arr[0] == 5) {
        for (int i = 1; i < n; ++i) {
            int mod_want = ((prefix[i] - prefix[n - 1]) % 3 + 3) % 3;
            ans += hash[i - 1][mod_want];
        }
    }
    // 考虑删掉低位所有数
    for (int i = 1; i < n - 1; ++i) {
        if (arr[i] == 0 || arr[i] == 5) {
            if ((prefix[n] - prefix[i - 1]) % 3 == 0) {
                ++ans;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
