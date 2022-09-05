#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> intersection(vector<int> &v1, vector<int> &v2) {
    set<int> s1(v1.begin(), v1.end());
    set<int> s2(v2.begin(), v2.end());
    vector<int> v_out;
    for (auto &x: s1) {
        if (s2.find(x) != s2.end()) {
            v_out.push_back(x);
        }
    }
    return v_out;
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> vec1(N), vec2(M), vec;

    for (int i = 0; i < N; i++) {
        cin >> vec1[i];
    }

    for (int i = 0; i < M; i++) {
        cin >> vec2[i];
    }

    vec = intersection(vec1, vec2);

    for (auto &x: vec) {
        cout << x << ' ';
    }

    return 0;
}
