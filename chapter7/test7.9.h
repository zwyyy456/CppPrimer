#include <string>
#include <iostream>

class Person
{
    std::string name, addr;
public:
    std::string const& get_name() const;
    std::string const& get_addr() const;
    std::istream &read(std::istream &is, Person &person);
    std::ostream &print(std::ostream &os, Person &person);
};

//member function
std::string const& Person::get_name() const
{
    return name;
}

std::string const& Person::get_addr() const
{
    return addr;
}

//nomember function
std::istream &Person::read(std::istream &is, Person &person)
{
    is >> person.name >> person.addr;
    return is;
}

std::ostream &Person::print(std::ostream &os, Person &person)
{
    os << person.name << " " << person.addr;
    return os;
}