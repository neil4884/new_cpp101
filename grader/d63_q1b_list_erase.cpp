#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void list_erase(vector<int> &v, vector<int> &pos) {
    vector<int> mov;
    mov.reserve(v.size() - pos.size());
    sort(pos.begin(), pos.end());
    auto ipos = pos.begin();

    for (auto it = v.begin(); it != v.end(); it++) {
        if (it - v.begin() == *ipos) {
            ipos++;
            continue;
        }
        mov.push_back(*it);
    }
    v = mov;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    vector<int> v(n), pos(m);
    for (int i = 0;i < n;i++) cin >> v[i];
    for (int i = 0;i < m;i++) cin >> pos[i];
    list_erase(v,pos);
    cout << "After call list_erase" << endl << "Size = " << v.size() << endl;
    for (auto &x : v) cout << x << " ";
    cout << endl;
}
