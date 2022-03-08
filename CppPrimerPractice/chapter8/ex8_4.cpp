#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using std::string;
using std::vector;
using std::ifstream;
using std::ofstream;

void readFile2Vec(const string &fileName, vector<string> &vec)
{
    ifstream ifs(fileName);
    if (ifs)
    {
        string buf;
        while (std::getline(ifs, buf))
            vec.push_back(buf);
    }
}

int main()
{
    vector<string> v;
    readFile2Vec("../data/book.txt", v);
    for (const string &str: v)
        std::cout << str << std::endl;
    return 0;
}
