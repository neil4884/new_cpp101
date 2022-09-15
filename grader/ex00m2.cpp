#include <iostream>
#include <array>
#include <vector>
#include <queue>
#include <map>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, m, n;

    char action;
    int u, i;

    cin >> n >> m >> a;

    vector<pair<int, map<int, int>>> items(n); // item_no count : [ user : value ]
    vector<priority_queue<pair<int, int>>> pq(n);
    vector<set<int>> items_bidders(n); // item_no : list_of_bidders
    vector<vector<int>> bidders(m);
    map<int, int>::iterator itm;

    for (int idx = 0; idx < n; idx++) {
        cin >> items[idx].first;
    }

    while (a--) {
        cin >> action;
        switch (action) {
            case 'B':
                cin >> u >> i >> items[i - 1].second[u - 1];
                break;
            case 'W': {
                cin >> u >> i;
                itm = items[i - 1].second.find(u - 1);
                if (itm != items[i - 1].second.end())
                    items[i - 1].second.erase(itm);
                break;
            }
            default:
                break;
        }
    }

    for (int idx = 0; idx < n; idx++) {
        for (auto &x: items[idx].second) {
            pq[idx].emplace(x.second, x.first);
        }
        while (!pq[idx].empty() && items[idx].first-- > 0) {
            items_bidders[idx].insert(pq[idx].top().second);
            pq[idx].pop();
        }
    }

    for (int idx = 0; idx < n; idx++) {
        for (auto &y: items_bidders[idx]) {
            bidders[y].push_back(idx);
        }
    }

    for (auto &x: bidders) {
        if (x.empty()) {
            cout << "NONE\n";
            continue;
        }
        for (auto &y: x) {
            cout << y + 1 << ' ';
        }
        cout << '\n';
    }

    return 0;
}
