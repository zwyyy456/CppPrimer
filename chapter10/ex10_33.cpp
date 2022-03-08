#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

int main()
{
    return 0;
}

int r2w(const std::string &s1, const std::string &s2, const std::string &s3)
{
    std::ifstream ifs(s1);
    std::ofstream ofs2(s2), ofs3(s3);
    std::istream_iterator<int> ifs_iter(ifs), eof;
    std::ostream_iterator<int> ofs2_iter(ofs2, " "), ofs3_iter(ofs3, " ");
    while (ifs_iter != eof)
    {
        if (*ifs_iter / 2)
            *ofs2_iter++ = *ifs_iter++;
        else
            *ofs3_iter++ = *ifs_iter++;
        

    }

}

