#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, inp, duo;
    bool matched;
    cin >> N >> M;
    map<int, int> lookup;

    for (int i = 0; i < N; i++) {
        cin >> inp;
        lookup[inp]++;
    }

    for (int n = 0; n < M; n++) {
        cin >> inp;
        matched = false;
        for (auto &ref: lookup) {
            duo = inp - ref.first;
            if ((duo == ref.first && ref.second > 1) ||
                    (duo != ref.first && lookup.find(duo) != lookup.end())) {
                matched = true;
                break;
            }
        }
        cout << ((matched)? "YES\n": "NO\n");
    }

    return 0;
}
