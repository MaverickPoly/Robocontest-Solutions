#include <iostream>

int main() {
    int n, k; std::cin >> n >> k;

    if (n) {
        std::cout << k + 1;
    } else {
        std::cout << 1;
    }

    std::cout << std::endl;

    return 0;
}