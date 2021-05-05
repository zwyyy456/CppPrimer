#include <string>
class Screen
{
public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd, pos n):height(ht), width(wd), contents(n, ' '){}
    Screen(pos ht, pos wd, char c):height(ht), width(wd), contents(ht * wd, c){}
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};