#include <iostream>
#include <map>

using namespace std;

int main() {
    int N, K, count = 0, outp;
    string inp;

    map<string, int> lookup;

    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> inp;
        lookup[inp]++;
    }

    auto it = lookup.begin();
    while (count < K && count < lookup.size()) {
        int new_max = 0;
        for (auto &x: lookup) {
            if (x.second > new_max) {
                new_max = x.second;
            }
        }
        for (auto &x: lookup) {
            if (x.second == new_max) {
                count++;
                outp = new_max;
                x.second = 0;
            }
        }
    }

    cout << outp;

    return 0;
}
