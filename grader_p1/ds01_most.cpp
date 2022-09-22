#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> lookup;
    int N;
    string inp;
    pair<int, string> outp = {0, ""};
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> inp;
        lookup[inp]++;
    }

    for (auto &x: lookup) {
        pair<int, string> tmp(x.second, x.first);
        outp = (tmp > outp) ? tmp: outp;
    }

    cout << outp.second << ' ' << outp.first;

    return 0;
}