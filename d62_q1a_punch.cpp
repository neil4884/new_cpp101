#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
    unsigned int Q;
    vector<int> v;
    cin >> Q;
    char in1[2];
    int ins_int;
    for (int i = 0; i < Q; i++) {
        cin >> in1;
        if (!strcmp(in1, "pb")) {
            cin >> ins_int;
            v.push_back(ins_int);
        } else if (!strcmp(in1, "sa")) {
            sort(v.begin(), v.end());
        } else if (!strcmp(in1, "sd")) {
            sort(v.rbegin(), v.rend());
        } else if (!strcmp(in1, "r")) {
            reverse(v.begin(), v.end());
        } else if (!strcmp(in1, "d")) {
            cin >> ins_int;
            v.erase(v.begin() + ins_int);
        }
    }

    for (auto &x: v) {
        cout << x << " ";
    }

    return 0;
}
