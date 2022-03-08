#include <iostream>
#include <utility>
#include <string>
#include <map>

using std::multimap;
using std::string;

int main()
{
    multimap<string, string> authors_work{
        {"zwy", "sss"}, {"zwy", "sjjf"}, {"yyy", "zzz"}, {"zwyyy", "456"}
    };
    std::multimap<string, string> authors{
        { "alan", "DMA" },
        { "pezy", "LeetCode" },
        { "alan", "CLRS" },
        { "wang", "FTP" },
        { "pezy", "CP5" },
        { "wang", "CPP-Concurrency" }
    };
    auto ret = authors_work.find("zwy");
    auto cnt = authors_work.count("zwy");
    while (cnt)
    {
        authors_work.erase(ret);
        --cnt;
    }
    for (const auto &author : authors_work)
        std::cout << author.first << author.second << std::endl;
}