#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

void print(set<int> &_s) {
    for (int _ : _s) {
        cout << _ << endl;
    }
    cout << "-----" << endl;
}

void print(map<string, int> &_m) {
    for (auto & it : _m) {
        cout << it.first << ' ' << it.second << endl;
    }
    cout << "-----" << endl;
}

int main() {
    vector<int> x = {1, 2, 3, 0, 5, 6, 9, 0, 0, 0, 15, 100, 200};
//    sort(x.begin(), x.end());
    for (int i = 0; i < x.size(); i++) {
        auto it = upper_bound(x.begin(), x.end(), 1);
        cout << *it << ' ';
        if (it != x.end()) *it = 0;
    }
    cout << '\n';
    for (auto &y: x) cout << y << ' ';
}
