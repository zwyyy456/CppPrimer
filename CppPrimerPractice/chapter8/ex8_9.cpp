#include <iostream>
#include <sstream>
#include <string>
//using namespace std;
int main()
{
    std::istream &zInput(std::istream &zin);
    std::istringstream record("hello");
    std::istream &is = zInput(record);
    std::cout << is.rdstate() << std::endl;
    return 0;
}

std::istream &zInput(std::istream &zin)
{
    std::string str;
    while(zin >> str)
    {
        std::cout << str << std::endl;
    }
    zin.clear();
    return zin;
}