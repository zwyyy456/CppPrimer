#include <string>

class Person {
  public:
    Person(std::string name, std::string loc) :
        name_(name), loc_(loc){};

    auto get_name() const -> std::string;
    auto get_loc() const -> std::string;

  private:
    std::string name_;
    std::string loc_;
};