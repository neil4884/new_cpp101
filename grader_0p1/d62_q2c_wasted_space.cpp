#include <iostream>

int main() {
    int n, x = 1;
    std::cin >> n;
    while (x < n) {
        x *= 2;
    }
    std::cout << x - n;
}
