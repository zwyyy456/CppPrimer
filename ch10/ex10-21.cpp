#include <iostream>

int main() {
    int tmp = 10;
    auto mlamb = [&tmp]() {
        while (tmp) {
            --tmp;
        }
        return tmp == 0;
    };
    mlamb();
    std::cout << tmp << std::endl;
}