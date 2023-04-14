#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>

using std::ifstream;
using std::string;
using std::vector;

int main()
{

    ifstream ifs("../data/book.txt");
    if (!ifs)
    {
        std::cerr << "No data?" << std::endl;
        return -1;
    }
    vector<string> lines;
    vector<string> words;
    string word, line;
    while (std::getline(ifs, line))
    {
        lines.push_back(line);
        std::istringstream iss(line);
        while (iss >> word)
        {
            words.push_back(word);
        }
    }
    return 0;
}