#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, w, max_loop, v_size;

    cin >> n >> w;
    vector<int> v(n), x;
    v_size = n;

    max_loop = (n - w < 1) ? 1 : n - w;

    while (n--) cin >> v[v_size - n - 1];
    x = vector<int>(v.begin(), v.begin() + w + 1);
    sort(x.begin(), x.end());
    cout << x[w / 2] << ' ';

    for (int i = 1; i < max_loop; i++) {
        x.erase(lower_bound(x.begin(), x.end(), v[i - 1]));
        x.insert(upper_bound(x.begin(), x.end(), v[i + w]), v[i + w]);
        cout << x[w / 2] << ' ';
    }
}
