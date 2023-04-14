#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;
    int n = str.size();
    reverse(str.begin(), str.end());
    vector<int> arr(n);
    vector<int> prefix(n + 1);
    for (int i = 0; i < n; ++i) {
        arr[i] = str[i] - '0';
        prefix[i + 1] = arr[i] + prefix[i];
    }
    // 哈希表，存储前i个数里面，模为0，1，2的分别有多少个
    vector<vector<int>> hash(n + 1, vector<int>(3, 0));
    for (int i = 1; i <= n; ++i) {
        hash[i][0] = hash[i - 1][0];
        hash[i][1] = hash[i - 1][1];
        hash[i][2] = hash[i - 1][2];
        ++hash[i][prefix[i] % 3];
    }
    int ans = 0;
    if (arr[0] == 0) {
        for (int i = 2; i <= n; ++i) {
            int mod_want = (prefix[i] - prefix[n] + 3) % 3;
            if (mod_want == 0) { // 不能把第一个0去掉
                ans += hash[i][mod_want] - 1;
            } else {
                ans += hash[i][mod_want];
            }
        }
    } else if (arr[0] == 5) {
        for (int i = 2; i <= n; ++i) {
            int mod_want = (prefix[i] - prefix[n] + 3) % 3;
            if (mod_want == 2) { // 不能把第一个5也去掉
                ans += hash[i][mod_want] - 1;
            } else {
                ans += hash[i][mod_want];
            }
        }
    }
    // 考虑删掉低位所有数
    for (int i = 2; i < n; ++i) {
        if (arr[i - 1] == 0 || arr[i - 1] == 5) {
            if (prefix[n] - prefix[i - 1] == 0) {
                ++ans;
            }
        }
    }
    cout << ans << endl;
    return 0;
}