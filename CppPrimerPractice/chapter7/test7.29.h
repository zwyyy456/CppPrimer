#include <string>
#include <iostream>
class Screen
{
public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd, pos n):height(ht), width(wd), contents(n, ' '){}
    Screen(pos ht, pos wd, char c):height(ht), width(wd), contents(ht * wd, c){}
    inline Screen move(pos r, pos c);
    inline Screen set(char c);
    const Screen display(std::ostream &os) const;
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

Screen Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

Screen Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

const Screen Screen::display(std::ostream &os) const
{
    os << contents;
    return *this;
}