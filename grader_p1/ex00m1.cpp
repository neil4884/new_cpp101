#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct reversed {
    bool operator()(pair<int, int> &lhs, pair<int, int> &rhs) {
        return lhs > rhs;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, elapsed = 0;
    int tmp;
    priority_queue<pair<int, int>, vector<pair<int, int>>, reversed> pq;

    cin >> n >> m;
    int mmi = min(n, m);

    for (int i = 0; i < n; i++) {
        cin >> tmp;
        pq.emplace(tmp, tmp);
    }

    for (int i = 0; i < mmi; i++) {
        cout << 0 << '\n';
    }

    mmi = (m > n) ? m - n : 0;

    while (mmi > 0) {
        while (pq.top().first <= elapsed) {
            cout << elapsed << '\n';
            pair<int, int> p = pq.top();
            pq.pop();
            pq.emplace(p.first + p.second, p.second);
            if (--mmi == 0) break;
        }
        elapsed++;
    }

    return 0;
}
