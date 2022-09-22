#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, a, b, i;
    bool lose = false;
    map<int, int> myself;
    map<int, int>::iterator it;

    cin >> n >> m;

    while (n--) {
        cin >> a;
        myself[a]++;
    }

    for (i = 1; i <= m; i++) {
        cin >> a;
        while (a--) {
            cin >> b;
            it = myself.upper_bound(b);
            if (it == myself.end()) {
                lose = true;
                break;
            }
            it->second--;
            if (it->second == 0) myself.erase(it);
        }
        if (lose) break;
    }

    cout << i;

    return 0;
}
