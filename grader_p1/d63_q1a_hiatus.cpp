#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a, b;
    vector<pair<int, int>> v;
    cin >> n >> m;

    v.push_back(pair<int, int>(-1, -1));
    while (n--) {
        cin >> a >> b;
        v.push_back(pair<int, int>(a, b));
    }
    sort(v.begin(), v.end());

    while (m--) {
        cin >> a >> b;

        auto it = upper_bound(v.begin(), v.end(), pair<int, int>(a, b));
        it--;
//        cout << it->first << ' ' << it->second << '\n';
        if ((it->first == a) && (it->second == b)) {
            cout << " 0 0 ";
            continue;
        }
        cout << it->first << ' ' << it->second << ' ';
    }

    return 0;
}
