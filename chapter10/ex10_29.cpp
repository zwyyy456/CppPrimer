#include "iostream"
#include <fstream>
#include <string>
#include <vector>
#include <iterator>

using std::string;

int main()
{
    std::ifstream ifs("../data/book.txt");
    std::istream_iterator<string> in_iter(ifs), eof;
    std::vector<string> vec;
    std::copy(in_iter, eof, back_inserter(vec));

    //output
    std::copy(vec.cbegin(), vec.cend(),std::ostream_iterator<string>(std::cout, "\n"));

}