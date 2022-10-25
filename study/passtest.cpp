#include <iostream>

using namespace std;

void pbv(int x, int y) {
    cout << x << ' ' << y << '\n';
}

void pbr(int &x, int &y) {
    cout << x << ' ' << y << '\n';
}

void pbcr(const int &x, const int &y) {
    cout << x << ' ' << y << '\n';
}

void pbrv(int &&x, int &&y) {
    cout << x << ' ' << y << '\n';
    x = 1000;
}

void pbcrv(const int &&x, const int &&y) {
    cout << x << ' ' << y << '\n';
}

int &&ln(int &&x) {
    return std::move(x);
}

int main() {
    int a = 2;
    int b = 99;

    pbv(a, b);
    pbr(a, b);
    pbcr(a, b);
    pbrv(std::move(a), 97);
    pbv(a, a);
    pbcrv(std::move(a), std::move(b));

    cout << ln(188);

    return 0;
}

template<class T>
void swap(T &a, T &b) {
    T c(std::move(a));
    a = std::move(b);
    b = std::move(c);
}

template<class T, size_t N>
void swap(T (&a)[N], T (&b)[N]) {
    for (size_t i = 0; i < N; ++i) swap(a[i], b[i]);
}