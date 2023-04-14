#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric>
using std::vector, std::string;
int main()
{
    void elimDups(vector<string> &words);
    bool isShorter(const string &s1, const string &s2);
    vector<string> words;
    string str;
    while (std::cin >> str)
        words.push_back(str);
    elimDups(words);
    stable_sort(words.begin(), words.end(), isShorter);
    for (const string &s: words)
        std::cout << s << " ";
    std::cout << std::endl;
    return 0;
}
bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}
void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}