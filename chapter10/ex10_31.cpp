#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <numeric>

int main()
{
    std::istream_iterator<int> iter_in(std::cin), eof;
    std::vector<int> vec;
    std::copy(iter_in, eof, back_inserter(vec));
    sort(vec.begin(), vec.end());

    //output
    std::unique_copy(vec.cbegin(), vec.cend(), std::ostream_iterator<int>(std::cout, " "));

    return 0;
}