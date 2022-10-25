#include <iostream>
#include <vector>
#include <map>

using namespace std;

void insert_into_sv(map<int, int> &v, int pos, int value) {
    map<int, int> m;
    for (auto &x: v) {
        if (x.first < pos) {
            m[x.first] = x.second;
        }
        if (x.first > pos) {
            m[x.first + 1] = x.second;
        }
    }
    if (v.find(pos) != v.end())
        m[pos + 1] = v[pos];
    m[pos] = value;
    v = m;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    map<int, int> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        insert_into_sv(v, a, b);
    }
    cout << v.size() << "\n";
    for (auto &x: v) {
        cout << x.first << ": " << x.second << "\n";
    }
}