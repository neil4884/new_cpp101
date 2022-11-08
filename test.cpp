#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

template <typename T1, typename T2>
void print(map<T1, T2> &_m) {
    for (auto &x : _m) {
        cout << x.first << ' ' << x.second << endl;
    }
    cout << "-----" << endl;
}

template <typename T>
void print(T &_s) {
    for (int _ : _s) {
        cout << _ << endl;
    }
    cout << "-----" << endl;
}

int main() {
    int *x = nullptr;
    cout << *x;
}
