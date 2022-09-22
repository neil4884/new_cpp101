#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m, a, b;
    cin >> n >> m;
    vector<int> v1(2*n);

    while (n--) {
        cin >> a >> b;
        v1.push_back(a);
        v1.push_back(b);
    }
    sort(v1.begin(), v1.end());
    while (m--) {
        cin >> a;
        auto it = lower_bound(v1.begin(), v1.end(), a);
        if (v1.end() - it) {
            if ((it - v1.begin()) % 2 || a == *it) cout << "1 ";
            else cout << "0 ";
        } else cout << "0 ";
    }

    return 0;
}
