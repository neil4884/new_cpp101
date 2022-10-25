#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    size_t n, m, a, b;
    bool c;
    cin >> n >> m;

    while (m--) {
        cin >> a >> b;
        if (a == b) {
            cout << "a and b are the same node\n";
            continue;
        }
        if ((c = a > b))
            swap(a, b);
        while (b) {
            b = (b - 1) / 2;
            if (a == 0 || b == a) {
                if (c)
                    cout << "b is an ancestor of a\n";
                else
                    cout << "a is an ancestor of b\n";
                goto ln;
            }
        }
        cout << "a and b are not related\n";
        ln:;
    }

    return 0;
}