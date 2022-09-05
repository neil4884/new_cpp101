#include <iostream>
#include <map>

#define long_t unsigned long long

using namespace std;

long_t grandfather_of(long_t c, map<long_t, long_t> &p_map) {
    if (p_map.find(c) != p_map.end()) {
        if (p_map.find(p_map[c]) != p_map.end()) {
            return p_map[p_map[c]];
        }
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int N, M;
    long_t F, S, A, B, u, v;
    map<long_t, long_t> m; // SON, FATHER
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> F >> S;
        m[S] = F;
    }

    for (int i = 0; i < M; i++) {
        cin >> A >> B;
        u = grandfather_of(A, m);
        v = grandfather_of(B, m);
        if (u == v && u && v && A != B) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
