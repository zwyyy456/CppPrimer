#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr(5);
    std::fill(arr.begin(), arr.end(), 10);

    for (int i : arr) {
        std::cout << i << " ";
    }
    std::fill_n(arr.begin(), arr.size(), 0);
    std::cout << std::endl;
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << "\n";

    std::vector<int> brr(5, 1);
    std::copy(arr.cbegin(), arr.cend(), brr.begin());
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << "\n";
}