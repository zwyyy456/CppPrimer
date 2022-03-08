#include <string>

class Person
{
    std::string name, addr;
public:
    std::string const& get_name() const;
    std::string const& get_addr() const;
};

std::string const& Person::get_name() const
{
    return name;
}

std::string const& Person::get_addr() const
{
    return addr;
}