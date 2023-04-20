#include <_types/_uint8_t.h>
#include <iostream>
#include <thread>

int main() {
    for (uint8_t i = 0; i < 4; ++i) {
        std::thread t([](int i) {
            std::cout << i << std::endl;
        },
                      i);
        return 0;
    }
}