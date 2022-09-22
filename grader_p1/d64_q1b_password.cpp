#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, n0, m, l, l0, x;
    string str, tmp_str;
    cin >> n >> m >> l;

    l0 = l;
    n0 = n;
    vector<int> k_offset(l);
    vector<string> encrypted(n);

    while (l--) {
        cin >> x;
        k_offset[l0 - l - 1] = x % 26;
    }

    while (n--) {
        cin >> tmp_str;
        str = "";
        for (size_t i = 0; i < tmp_str.size(); i++) {
            char c = tmp_str[i];
            if (c - k_offset[i] < 'a') c += 26;
            c -= k_offset[i];
            str += c;
        }
        encrypted[n0 - n - 1] = str;
    }

    sort(encrypted.begin(), encrypted.end());

    while (m--) {
        cin >> tmp_str;
        if (binary_search(encrypted.begin(), encrypted.end(), tmp_str)) {
            cout << "Match\n";
        } else {
            cout << "Unknown\n";
        }
    }

    return 0;
}
