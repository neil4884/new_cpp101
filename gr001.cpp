#include <iostream>

using std::cin;
using std::cout;

int main() {
    int hr, mi, t, delta;
    cin >> hr >> mi;
    cin >> delta;
    t = hr * 60 + mi + delta;
    hr += ((delta + mi) / 60);
    hr %= 24;
    mi = t % 60;
    if (hr < 10) cout << '0';
    cout << hr << ' ';
    if (mi < 10) cout << '0';
    cout << mi;
}
