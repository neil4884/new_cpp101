#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void get_children(const size_t &n, const size_t &i, vector<size_t> &v) {
    if (i < n) {
        size_t c = 2 * i + 1;

        if (c >= n)
            return;
        v.push_back(c);
        get_children(n, c, v);

        if (++c >= n)
            return;
        v.push_back(c);
        get_children(n, c, v);
    }
}

int main() {
    size_t n, a, c;
    vector<size_t> v;

    cin >> n >> a;

    v.push_back(a);

    get_children(n, a, v);
    sort(v.begin(), v.end());

    cout << v.size() << '\n';
    for (auto &x: v) {
        cout << x << ' ';
    }
}