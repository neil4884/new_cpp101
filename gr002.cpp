#include <iostream>
#include <vector>

using namespace  std;

int main() {
    int r, c, R;
    int v;
    vector<vector<int>> M;
    cin >> r >> c >> R;
    for (int i = 0; i < r; i++) {
        vector<int> t_row;
        for (int j = 0; j < c; j ++) {
            cin >> v;
            t_row.push_back(v);
        }
        M.push_back(t_row);
    }

    for (int n_R = 0; n_R < R; n_R++) {
        int r1, c1, r2, c2, op, tmp;
        cin >> r1 >> c1 >> r2 >> c2;

        if (r1 > r2 || c1 > c2) {
            cout << "INVALID";
            if (n_R != R - 1) cout << endl;
            continue;
        }

        if ((r1 > r && r2 > r) || (c1 > c && c2 > c)) {
            cout << "OUTSIDE";
            if (n_R != R - 1) cout << endl;
            continue;
        }

        if (r2 >= r) r2 = r;
        if (c2 >= c) c2 = c;
        r1--;
        r2--;
        c1--;
        c2--;
        for (int i = r1; i <= r2; i++) {
            for (int j = c1; j <= c2; j++) {
                tmp = M[i][j];
                if (i == r1 && j == c1) op = tmp;
                if (tmp > op) op = tmp;
            }
        }
        cout << op;
        if (n_R != R - 1) cout << endl;
    }
    return 0;
}