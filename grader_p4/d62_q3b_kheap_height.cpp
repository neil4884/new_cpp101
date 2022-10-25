#include <iostream>

using namespace std;

inline uint64_t pow(uint64_t x, uint64_t y) {
    uint64_t ret = 1;
    while (--y)
        ret *= x;
    return ret;
}

inline uint64_t get_total(uint64_t d, uint64_t h) {
    return (pow(d, h + 1) - 1) / (d - 1);
}

int main() {
    uint64_t n, d, h;
    cin >> n >> d;
    h = 1;

    if (d == 1) {
        cout << n - 1;
        return 0;
    }

    while (get_total(d, h) < n)
        ++h;

    cout << h - 1;
    return 0;
}
