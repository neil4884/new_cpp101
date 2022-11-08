#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    string inp;
    map<string, int> m;
    cin >> n;
    while (n--) {
        cin >> inp;
        m[inp]++;
    }

    for (auto &x: m) {
        if (x.second > 1) cout << x.first << ' ' << x.second << '\n';
    }

    return 0;
}
