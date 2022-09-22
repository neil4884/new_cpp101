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
    map<int, int> m;
    vector<int> x = {1, 2, 3}, y = {3, 2, 1};
    m[0] = 0;
    print(m);
    print(x);
    int j = 5;
    cout << (j += 3) << '\n';

}
