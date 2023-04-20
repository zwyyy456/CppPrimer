#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    string str;
    cin >> str;
    cout << str << endl;
    stack<pair<int, char>> stk_par;
    stack<string> stk_char;

    int idx = 0;
    string res;
    while (idx < str.size()) {
        int tmp = 0;
        int c = str[idx];
        // cout << c << endl;
        if (str[idx] >= '0' && str[idx] <= '9') {
            while (str[idx] >= '0' && str[idx] <= '9') {
                tmp = tmp * 10 + str[idx] - '0';
                ++idx;
            }
        }
        if (str[idx] == '[') {
            stk_par.push({tmp, '['});
            ++idx;
        } else if (str[idx] <= 'z' && str[idx] >= 'a') {
            string tmp_str;
            while (str[idx] <= 'z' && str[idx] >= 'a') {
                tmp_str.push_back(str[idx]);
                ++idx;
            }
            stk_char.push(tmp_str);
        } else {
            // 一定是右括号
            // auto [num, c] = stk_par.top();
            auto p = stk_par.top();
            int num = p.first;
            stk_par.pop();
            string tmp_str = stk_char.top();
            stk_char.pop();
            tmp_str += res;
            res = tmp_str;
            for (int i = 0; i < num - 1; ++i) {
                res += tmp_str;
            }
            ++idx;
        }
    }
    cout << res << endl;
    return 0;
}