#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m, a, p, k, l_bound, u_bound;
    cin >> n >> m >> k;
    vector<int> v1;

    while (n--) {
        cin >> a;
        v1.push_back(a);
    }
    sort(v1.begin(), v1.end());
    while (m--) {
        cin >> p;
        l_bound = (p > k)? p - k: 0;
        u_bound = p + k;
        auto it1 = lower_bound(v1.begin(), v1.end(), l_bound);
        auto it2 = upper_bound(v1.begin(), v1.end(), u_bound);
        cout << it2 - it1 << ' ';
    }

    return 0;
}
